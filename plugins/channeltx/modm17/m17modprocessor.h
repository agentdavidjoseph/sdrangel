///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2022 Edouard Griffiths, F4EXB                                   //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
// (at your option) any later version.                                           //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDE_M17MODPROCESSOR_H
#define INCLUDE_M17MODPROCESSOR_H

#include <QObject>
#include <QByteArray>

#include "m17/M17Modulator.h"
#include "dsp/dsptypes.h"
#include "util/message.h"
#include "util/messagequeue.h"
#include "m17modfifo.h"
#include "m17moddecimator.h"

class M17ModProcessor : public QObject
{
    Q_OBJECT
public:
    class MsgSendSMS : public Message {
        MESSAGE_CLASS_DECLARATION

    public:
        const QString& getSourceCall() const { return m_sourceCall; }
        const QString& getDestCall() const { return m_destCall; }
        uint8_t getCAN() const { return m_can; }
        const QString& getSMSText() const { return m_smsText; }

        static MsgSendSMS* create(const QString& sourceCall, const QString& destCall, uint8_t can, const QString& smsText) {
            return new MsgSendSMS(sourceCall, destCall, can, smsText);
        }

    private:
        QString m_sourceCall;
        QString m_destCall;
        uint8_t m_can;
        QString m_smsText;

        MsgSendSMS(const QString& sourceCall, const QString& destCall, uint8_t can, const QString& smsText) :
            Message(),
            m_sourceCall(sourceCall),
            m_destCall(destCall),
            m_can(can),
            m_smsText(smsText)
        { }
    };

    class MsgSendAudioFrame : public Message {
        MESSAGE_CLASS_DECLARATION

    public:
        const QString& getSourceCall() const { return m_sourceCall; }
        const QString& getDestCall() const { return m_destCall; }
        std::array<int16_t, 1920>& getAudioFrame() { return m_audioFrame; }

        static MsgSendAudioFrame* create(const QString& sourceCall, const QString& destCall) {
            return new MsgSendAudioFrame(sourceCall, destCall);
        }

    private:
        QString m_sourceCall;
        QString m_destCall;
        std::array<int16_t, 1920> m_audioFrame;

        MsgSendAudioFrame(const QString& sourceCall, const QString& destCall) :
            Message(),
            m_sourceCall(sourceCall),
            m_destCall(destCall)
        { }
    };

    class MsgStartAudio : public Message {
        MESSAGE_CLASS_DECLARATION

    public:
        const QString& getSourceCall() const { return m_sourceCall; }
        const QString& getDestCall() const { return m_destCall; }
        uint8_t getCAN() const { return m_can; }

        static MsgStartAudio* create(const QString& sourceCall, const QString& destCall, uint8_t can) {
            return new MsgStartAudio(sourceCall, destCall, can);
        }

    private:
        QString m_sourceCall;
        QString m_destCall;
        uint8_t m_can;

        MsgStartAudio(const QString& sourceCall, const QString& destCall, uint8_t can) :
            Message(),
            m_sourceCall(sourceCall),
            m_destCall(destCall),
            m_can(can)
        { }
    };

    class MsgStopAudio : public Message {
        MESSAGE_CLASS_DECLARATION

    public:
        static MsgStopAudio* create() {
            return new MsgStopAudio();
        }

    private:

        MsgStopAudio() :
            Message()
        { }
    };

    M17ModProcessor();
    ~M17ModProcessor();

    MessageQueue *getInputMessageQueue() { return &m_inputMessageQueue; }
    M17ModFIFO *getBasebandFifo() { return &m_basebandFifo; }

private:
    MessageQueue m_inputMessageQueue;
    M17ModFIFO m_basebandFifo; //!< Samples are 16 bit integer baseband 48 kS/s samples
    int m_basebandFifoHigh;
    int m_basebandFifoLow;
    M17ModDecimator m_decimator; //!< 48k -> 8k decimator
    mobilinkd::M17Modulator m_m17Modulator;
    std::array<mobilinkd::M17Modulator::lich_segment_t, 6> m_lich; //!< LICH bits
    int m_lichSegmentIndex;
    std::array<int16_t, 320*6> m_audioFrame;
    int m_audioFrameIndex;
    uint16_t m_audioFrameNumber;
    struct CODEC2 *m_codec2;

    bool handleMessage(const Message& cmd);
    void processPacket(const QString& sourceCall, const QString& destCall, uint8_t can, const QByteArray& packetBytes);
    void audioStart(const QString& sourceCall, const QString& destCall, uint8_t can);
    void audioStop();
    void processAudioFrame();
    std::array<uint8_t, 16> encodeAudio(std::array<int16_t, 320*6>& audioFrame);
    void test(const QString& sourceCall, const QString& destCall);
    void send_preamble();
    void send_eot();
    void output_baseband(std::array<uint8_t, 2> sync_word, const std::array<int8_t, 368>& frame);

private slots:
    void handleInputMessages();
};

#endif // INCLUDE_M17MODPROCESSOR_H