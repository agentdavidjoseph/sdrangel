///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2012 maintech GmbH, Otto-Hahn-Str. 15, 97204 Hoechberg, Germany //
// written by Christian Daniel                                                   //
// Copyright (C) 2014 John Greb <hexameron@spam.no>                              //
// Copyright (C) 2015-2017, 2019-2020 Edouard Griffiths, F4EXB <f4exb06@gmail.com> //
// Copyright (C) 2020 Kacper Michajłow <kasper93@gmail.com>                      //
// Copyright (C) 2021 Jon Beniston, M7RCE <jon@beniston.com>                     //
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

#ifndef PLUGINS_SAMPLESOURCE_SDRPLAYV3_SDRPLAYV3PLUGIN_H_
#define PLUGINS_SAMPLESOURCE_SDRPLAYV3_SDRPLAYV3PLUGIN_H_

#include <QObject>
#include "plugin/plugininterface.h"

class PluginAPI;

#define SDRPLAYV3_DEVICE_TYPE_ID "sdrangel.samplesource.sdrplayv3"

class SDRPlayV3Plugin : public QObject, public PluginInterface {
    Q_OBJECT
    Q_INTERFACES(PluginInterface)
    Q_PLUGIN_METADATA(IID SDRPLAYV3_DEVICE_TYPE_ID)

public:
    explicit SDRPlayV3Plugin(QObject* parent = NULL);
    ~SDRPlayV3Plugin();

    const PluginDescriptor& getPluginDescriptor() const;
    void initPlugin(PluginAPI* pluginAPI);

    virtual void enumOriginDevices(QStringList& listedHwIds, OriginDevices& originDevices);
    virtual SamplingDevices enumSampleSources(const OriginDevices& originDevices);
    virtual DeviceGUI* createSampleSourcePluginInstanceGUI(
            const QString& sourceId,
            QWidget **widget,
            DeviceUISet *deviceUISet);
    virtual DeviceSampleSource* createSampleSourcePluginInstance(const QString& sourceId, DeviceAPI *deviceAPI);
    virtual DeviceWebAPIAdapter* createDeviceWebAPIAdapter() const;

private:
    static const PluginDescriptor m_pluginDescriptor;
};

#endif /* PLUGINS_SAMPLESOURCE_SDRPLAYV3_SDRPLAYV3PLUGIN_H_ */
