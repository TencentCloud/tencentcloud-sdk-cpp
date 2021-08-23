/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/iotvideo/v20191126/model/DevicesData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

DevicesData::DevicesData() :
    m_tidHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_activeTimeHasBeenSet(false),
    m_disabledHasBeenSet(false),
    m_streamStatusHasBeenSet(false),
    m_otaVersionHasBeenSet(false),
    m_onlineHasBeenSet(false),
    m_lastOnlineTimeHasBeenSet(false),
    m_iotModelHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DevicesData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tid") && !value["Tid"].IsNull())
    {
        if (!value["Tid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesData.Tid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tid = string(value["Tid"].GetString());
        m_tidHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesData.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("ActiveTime") && !value["ActiveTime"].IsNull())
    {
        if (!value["ActiveTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesData.ActiveTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activeTime = value["ActiveTime"].GetUint64();
        m_activeTimeHasBeenSet = true;
    }

    if (value.HasMember("Disabled") && !value["Disabled"].IsNull())
    {
        if (!value["Disabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesData.Disabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disabled = value["Disabled"].GetBool();
        m_disabledHasBeenSet = true;
    }

    if (value.HasMember("StreamStatus") && !value["StreamStatus"].IsNull())
    {
        if (!value["StreamStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesData.StreamStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_streamStatus = value["StreamStatus"].GetBool();
        m_streamStatusHasBeenSet = true;
    }

    if (value.HasMember("OtaVersion") && !value["OtaVersion"].IsNull())
    {
        if (!value["OtaVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesData.OtaVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otaVersion = string(value["OtaVersion"].GetString());
        m_otaVersionHasBeenSet = true;
    }

    if (value.HasMember("Online") && !value["Online"].IsNull())
    {
        if (!value["Online"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesData.Online` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_online = value["Online"].GetUint64();
        m_onlineHasBeenSet = true;
    }

    if (value.HasMember("LastOnlineTime") && !value["LastOnlineTime"].IsNull())
    {
        if (!value["LastOnlineTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesData.LastOnlineTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastOnlineTime = value["LastOnlineTime"].GetUint64();
        m_lastOnlineTimeHasBeenSet = true;
    }

    if (value.HasMember("IotModel") && !value["IotModel"].IsNull())
    {
        if (!value["IotModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesData.IotModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iotModel = string(value["IotModel"].GetString());
        m_iotModelHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesData.LastUpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = value["LastUpdateTime"].GetUint64();
        m_lastUpdateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DevicesData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_activeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeTime, allocator);
    }

    if (m_disabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disabled, allocator);
    }

    if (m_streamStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streamStatus, allocator);
    }

    if (m_otaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtaVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_onlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Online";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_online, allocator);
    }

    if (m_lastOnlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOnlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastOnlineTime, allocator);
    }

    if (m_iotModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IotModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iotModel.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastUpdateTime, allocator);
    }

}


string DevicesData::GetTid() const
{
    return m_tid;
}

void DevicesData::SetTid(const string& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool DevicesData::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

string DevicesData::GetDeviceName() const
{
    return m_deviceName;
}

void DevicesData::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DevicesData::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

uint64_t DevicesData::GetActiveTime() const
{
    return m_activeTime;
}

void DevicesData::SetActiveTime(const uint64_t& _activeTime)
{
    m_activeTime = _activeTime;
    m_activeTimeHasBeenSet = true;
}

bool DevicesData::ActiveTimeHasBeenSet() const
{
    return m_activeTimeHasBeenSet;
}

bool DevicesData::GetDisabled() const
{
    return m_disabled;
}

void DevicesData::SetDisabled(const bool& _disabled)
{
    m_disabled = _disabled;
    m_disabledHasBeenSet = true;
}

bool DevicesData::DisabledHasBeenSet() const
{
    return m_disabledHasBeenSet;
}

bool DevicesData::GetStreamStatus() const
{
    return m_streamStatus;
}

void DevicesData::SetStreamStatus(const bool& _streamStatus)
{
    m_streamStatus = _streamStatus;
    m_streamStatusHasBeenSet = true;
}

bool DevicesData::StreamStatusHasBeenSet() const
{
    return m_streamStatusHasBeenSet;
}

string DevicesData::GetOtaVersion() const
{
    return m_otaVersion;
}

void DevicesData::SetOtaVersion(const string& _otaVersion)
{
    m_otaVersion = _otaVersion;
    m_otaVersionHasBeenSet = true;
}

bool DevicesData::OtaVersionHasBeenSet() const
{
    return m_otaVersionHasBeenSet;
}

uint64_t DevicesData::GetOnline() const
{
    return m_online;
}

void DevicesData::SetOnline(const uint64_t& _online)
{
    m_online = _online;
    m_onlineHasBeenSet = true;
}

bool DevicesData::OnlineHasBeenSet() const
{
    return m_onlineHasBeenSet;
}

uint64_t DevicesData::GetLastOnlineTime() const
{
    return m_lastOnlineTime;
}

void DevicesData::SetLastOnlineTime(const uint64_t& _lastOnlineTime)
{
    m_lastOnlineTime = _lastOnlineTime;
    m_lastOnlineTimeHasBeenSet = true;
}

bool DevicesData::LastOnlineTimeHasBeenSet() const
{
    return m_lastOnlineTimeHasBeenSet;
}

string DevicesData::GetIotModel() const
{
    return m_iotModel;
}

void DevicesData::SetIotModel(const string& _iotModel)
{
    m_iotModel = _iotModel;
    m_iotModelHasBeenSet = true;
}

bool DevicesData::IotModelHasBeenSet() const
{
    return m_iotModelHasBeenSet;
}

uint64_t DevicesData::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void DevicesData::SetLastUpdateTime(const uint64_t& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool DevicesData::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

