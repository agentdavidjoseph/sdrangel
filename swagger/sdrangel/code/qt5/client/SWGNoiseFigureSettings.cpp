/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 6.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGNoiseFigureSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGNoiseFigureSettings::SWGNoiseFigureSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNoiseFigureSettings::SWGNoiseFigureSettings() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    fft_size = 0;
    m_fft_size_isSet = false;
    fft_count = 0;
    m_fft_count_isSet = false;
    sweep_spec = 0;
    m_sweep_spec_isSet = false;
    start_value = 0.0f;
    m_start_value_isSet = false;
    stop_value = 0.0f;
    m_stop_value_isSet = false;
    steps = 0;
    m_steps_isSet = false;
    step = 0.0f;
    m_step_isSet = false;
    list = nullptr;
    m_list_isSet = false;
    setting = nullptr;
    m_setting_isSet = false;
    visa_device = nullptr;
    m_visa_device_isSet = false;
    power_on_scpi = nullptr;
    m_power_on_scpi_isSet = false;
    power_off_scpi = nullptr;
    m_power_off_scpi_isSet = false;
    power_on_command = nullptr;
    m_power_on_command_isSet = false;
    power_off_command = nullptr;
    m_power_off_command_isSet = false;
    power_delay = 0.0f;
    m_power_delay_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
    channel_marker = nullptr;
    m_channel_marker_isSet = false;
}

SWGNoiseFigureSettings::~SWGNoiseFigureSettings() {
    this->cleanup();
}

void
SWGNoiseFigureSettings::init() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    fft_size = 0;
    m_fft_size_isSet = false;
    fft_count = 0;
    m_fft_count_isSet = false;
    sweep_spec = 0;
    m_sweep_spec_isSet = false;
    start_value = 0.0f;
    m_start_value_isSet = false;
    stop_value = 0.0f;
    m_stop_value_isSet = false;
    steps = 0;
    m_steps_isSet = false;
    step = 0.0f;
    m_step_isSet = false;
    list = new QString("");
    m_list_isSet = false;
    setting = new QString("");
    m_setting_isSet = false;
    visa_device = new QString("");
    m_visa_device_isSet = false;
    power_on_scpi = new QString("");
    m_power_on_scpi_isSet = false;
    power_off_scpi = new QString("");
    m_power_off_scpi_isSet = false;
    power_on_command = new QString("");
    m_power_on_command_isSet = false;
    power_off_command = new QString("");
    m_power_off_command_isSet = false;
    power_delay = 0.0f;
    m_power_delay_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
    channel_marker = new SWGChannelMarker();
    m_channel_marker_isSet = false;
}

void
SWGNoiseFigureSettings::cleanup() {








    if(list != nullptr) { 
        delete list;
    }
    if(setting != nullptr) { 
        delete setting;
    }
    if(visa_device != nullptr) { 
        delete visa_device;
    }
    if(power_on_scpi != nullptr) { 
        delete power_on_scpi;
    }
    if(power_off_scpi != nullptr) { 
        delete power_off_scpi;
    }
    if(power_on_command != nullptr) { 
        delete power_on_command;
    }
    if(power_off_command != nullptr) { 
        delete power_off_command;
    }


    if(title != nullptr) { 
        delete title;
    }


    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }



    if(channel_marker != nullptr) { 
        delete channel_marker;
    }
}

SWGNoiseFigureSettings*
SWGNoiseFigureSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNoiseFigureSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    
    ::SWGSDRangel::setValue(&fft_size, pJson["fftSize"], "qint32", "");
    
    ::SWGSDRangel::setValue(&fft_count, pJson["fftCount"], "qint32", "");
    
    ::SWGSDRangel::setValue(&sweep_spec, pJson["sweepSpec"], "qint32", "");
    
    ::SWGSDRangel::setValue(&start_value, pJson["startValue"], "float", "");
    
    ::SWGSDRangel::setValue(&stop_value, pJson["stopValue"], "float", "");
    
    ::SWGSDRangel::setValue(&steps, pJson["steps"], "qint32", "");
    
    ::SWGSDRangel::setValue(&step, pJson["step"], "float", "");
    
    ::SWGSDRangel::setValue(&list, pJson["list"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&setting, pJson["setting"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&visa_device, pJson["visaDevice"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&power_on_scpi, pJson["powerOnSCPI"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&power_off_scpi, pJson["powerOffSCPI"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&power_on_command, pJson["powerOnCommand"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&power_off_command, pJson["powerOffCommand"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&power_delay, pJson["powerDelay"], "float", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&stream_index, pJson["streamIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_channel_index, pJson["reverseAPIChannelIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&channel_marker, pJson["channelMarker"], "SWGChannelMarker", "SWGChannelMarker");
    
}

QString
SWGNoiseFigureSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGNoiseFigureSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(m_fft_size_isSet){
        obj->insert("fftSize", QJsonValue(fft_size));
    }
    if(m_fft_count_isSet){
        obj->insert("fftCount", QJsonValue(fft_count));
    }
    if(m_sweep_spec_isSet){
        obj->insert("sweepSpec", QJsonValue(sweep_spec));
    }
    if(m_start_value_isSet){
        obj->insert("startValue", QJsonValue(start_value));
    }
    if(m_stop_value_isSet){
        obj->insert("stopValue", QJsonValue(stop_value));
    }
    if(m_steps_isSet){
        obj->insert("steps", QJsonValue(steps));
    }
    if(m_step_isSet){
        obj->insert("step", QJsonValue(step));
    }
    if(list != nullptr && *list != QString("")){
        toJsonValue(QString("list"), list, obj, QString("QString"));
    }
    if(setting != nullptr && *setting != QString("")){
        toJsonValue(QString("setting"), setting, obj, QString("QString"));
    }
    if(visa_device != nullptr && *visa_device != QString("")){
        toJsonValue(QString("visaDevice"), visa_device, obj, QString("QString"));
    }
    if(power_on_scpi != nullptr && *power_on_scpi != QString("")){
        toJsonValue(QString("powerOnSCPI"), power_on_scpi, obj, QString("QString"));
    }
    if(power_off_scpi != nullptr && *power_off_scpi != QString("")){
        toJsonValue(QString("powerOffSCPI"), power_off_scpi, obj, QString("QString"));
    }
    if(power_on_command != nullptr && *power_on_command != QString("")){
        toJsonValue(QString("powerOnCommand"), power_on_command, obj, QString("QString"));
    }
    if(power_off_command != nullptr && *power_off_command != QString("")){
        toJsonValue(QString("powerOffCommand"), power_off_command, obj, QString("QString"));
    }
    if(m_power_delay_isSet){
        obj->insert("powerDelay", QJsonValue(power_delay));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(m_stream_index_isSet){
        obj->insert("streamIndex", QJsonValue(stream_index));
    }
    if(m_use_reverse_api_isSet){
        obj->insert("useReverseAPI", QJsonValue(use_reverse_api));
    }
    if(reverse_api_address != nullptr && *reverse_api_address != QString("")){
        toJsonValue(QString("reverseAPIAddress"), reverse_api_address, obj, QString("QString"));
    }
    if(m_reverse_api_port_isSet){
        obj->insert("reverseAPIPort", QJsonValue(reverse_api_port));
    }
    if(m_reverse_api_device_index_isSet){
        obj->insert("reverseAPIDeviceIndex", QJsonValue(reverse_api_device_index));
    }
    if(m_reverse_api_channel_index_isSet){
        obj->insert("reverseAPIChannelIndex", QJsonValue(reverse_api_channel_index));
    }
    if((channel_marker != nullptr) && (channel_marker->isSet())){
        toJsonValue(QString("channelMarker"), channel_marker, obj, QString("SWGChannelMarker"));
    }

    return obj;
}

qint64
SWGNoiseFigureSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGNoiseFigureSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

qint32
SWGNoiseFigureSettings::getFftSize() {
    return fft_size;
}
void
SWGNoiseFigureSettings::setFftSize(qint32 fft_size) {
    this->fft_size = fft_size;
    this->m_fft_size_isSet = true;
}

qint32
SWGNoiseFigureSettings::getFftCount() {
    return fft_count;
}
void
SWGNoiseFigureSettings::setFftCount(qint32 fft_count) {
    this->fft_count = fft_count;
    this->m_fft_count_isSet = true;
}

qint32
SWGNoiseFigureSettings::getSweepSpec() {
    return sweep_spec;
}
void
SWGNoiseFigureSettings::setSweepSpec(qint32 sweep_spec) {
    this->sweep_spec = sweep_spec;
    this->m_sweep_spec_isSet = true;
}

float
SWGNoiseFigureSettings::getStartValue() {
    return start_value;
}
void
SWGNoiseFigureSettings::setStartValue(float start_value) {
    this->start_value = start_value;
    this->m_start_value_isSet = true;
}

float
SWGNoiseFigureSettings::getStopValue() {
    return stop_value;
}
void
SWGNoiseFigureSettings::setStopValue(float stop_value) {
    this->stop_value = stop_value;
    this->m_stop_value_isSet = true;
}

qint32
SWGNoiseFigureSettings::getSteps() {
    return steps;
}
void
SWGNoiseFigureSettings::setSteps(qint32 steps) {
    this->steps = steps;
    this->m_steps_isSet = true;
}

float
SWGNoiseFigureSettings::getStep() {
    return step;
}
void
SWGNoiseFigureSettings::setStep(float step) {
    this->step = step;
    this->m_step_isSet = true;
}

QString*
SWGNoiseFigureSettings::getList() {
    return list;
}
void
SWGNoiseFigureSettings::setList(QString* list) {
    this->list = list;
    this->m_list_isSet = true;
}

QString*
SWGNoiseFigureSettings::getSetting() {
    return setting;
}
void
SWGNoiseFigureSettings::setSetting(QString* setting) {
    this->setting = setting;
    this->m_setting_isSet = true;
}

QString*
SWGNoiseFigureSettings::getVisaDevice() {
    return visa_device;
}
void
SWGNoiseFigureSettings::setVisaDevice(QString* visa_device) {
    this->visa_device = visa_device;
    this->m_visa_device_isSet = true;
}

QString*
SWGNoiseFigureSettings::getPowerOnScpi() {
    return power_on_scpi;
}
void
SWGNoiseFigureSettings::setPowerOnScpi(QString* power_on_scpi) {
    this->power_on_scpi = power_on_scpi;
    this->m_power_on_scpi_isSet = true;
}

QString*
SWGNoiseFigureSettings::getPowerOffScpi() {
    return power_off_scpi;
}
void
SWGNoiseFigureSettings::setPowerOffScpi(QString* power_off_scpi) {
    this->power_off_scpi = power_off_scpi;
    this->m_power_off_scpi_isSet = true;
}

QString*
SWGNoiseFigureSettings::getPowerOnCommand() {
    return power_on_command;
}
void
SWGNoiseFigureSettings::setPowerOnCommand(QString* power_on_command) {
    this->power_on_command = power_on_command;
    this->m_power_on_command_isSet = true;
}

QString*
SWGNoiseFigureSettings::getPowerOffCommand() {
    return power_off_command;
}
void
SWGNoiseFigureSettings::setPowerOffCommand(QString* power_off_command) {
    this->power_off_command = power_off_command;
    this->m_power_off_command_isSet = true;
}

float
SWGNoiseFigureSettings::getPowerDelay() {
    return power_delay;
}
void
SWGNoiseFigureSettings::setPowerDelay(float power_delay) {
    this->power_delay = power_delay;
    this->m_power_delay_isSet = true;
}

qint32
SWGNoiseFigureSettings::getRgbColor() {
    return rgb_color;
}
void
SWGNoiseFigureSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGNoiseFigureSettings::getTitle() {
    return title;
}
void
SWGNoiseFigureSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

qint32
SWGNoiseFigureSettings::getStreamIndex() {
    return stream_index;
}
void
SWGNoiseFigureSettings::setStreamIndex(qint32 stream_index) {
    this->stream_index = stream_index;
    this->m_stream_index_isSet = true;
}

qint32
SWGNoiseFigureSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGNoiseFigureSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGNoiseFigureSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGNoiseFigureSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGNoiseFigureSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGNoiseFigureSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGNoiseFigureSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGNoiseFigureSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}

qint32
SWGNoiseFigureSettings::getReverseApiChannelIndex() {
    return reverse_api_channel_index;
}
void
SWGNoiseFigureSettings::setReverseApiChannelIndex(qint32 reverse_api_channel_index) {
    this->reverse_api_channel_index = reverse_api_channel_index;
    this->m_reverse_api_channel_index_isSet = true;
}

SWGChannelMarker*
SWGNoiseFigureSettings::getChannelMarker() {
    return channel_marker;
}
void
SWGNoiseFigureSettings::setChannelMarker(SWGChannelMarker* channel_marker) {
    this->channel_marker = channel_marker;
    this->m_channel_marker_isSet = true;
}


bool
SWGNoiseFigureSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_input_frequency_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(m_fft_size_isSet){
            isObjectUpdated = true; break;
        }
        if(m_fft_count_isSet){
            isObjectUpdated = true; break;
        }
        if(m_sweep_spec_isSet){
            isObjectUpdated = true; break;
        }
        if(m_start_value_isSet){
            isObjectUpdated = true; break;
        }
        if(m_stop_value_isSet){
            isObjectUpdated = true; break;
        }
        if(m_steps_isSet){
            isObjectUpdated = true; break;
        }
        if(m_step_isSet){
            isObjectUpdated = true; break;
        }
        if(list && *list != QString("")){
            isObjectUpdated = true; break;
        }
        if(setting && *setting != QString("")){
            isObjectUpdated = true; break;
        }
        if(visa_device && *visa_device != QString("")){
            isObjectUpdated = true; break;
        }
        if(power_on_scpi && *power_on_scpi != QString("")){
            isObjectUpdated = true; break;
        }
        if(power_off_scpi && *power_off_scpi != QString("")){
            isObjectUpdated = true; break;
        }
        if(power_on_command && *power_on_command != QString("")){
            isObjectUpdated = true; break;
        }
        if(power_off_command && *power_off_command != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_power_delay_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rgb_color_isSet){
            isObjectUpdated = true; break;
        }
        if(title && *title != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_stream_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_use_reverse_api_isSet){
            isObjectUpdated = true; break;
        }
        if(reverse_api_address && *reverse_api_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_device_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_channel_index_isSet){
            isObjectUpdated = true; break;
        }
        if(channel_marker && channel_marker->isSet()){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

