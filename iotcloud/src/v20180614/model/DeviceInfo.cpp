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

#include <tencentcloud/iotcloud/v20180614/model/DeviceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

DeviceInfo::DeviceInfo() :
    m_deviceNameHasBeenSet(false),
    m_onlineHasBeenSet(false),
    m_loginTimeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_deviceCertHasBeenSet(false),
    m_devicePskHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_imeiHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_nbiotDeviceIDHasBeenSet(false),
    m_connIPHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_loraDevEuiHasBeenSet(false),
    m_loraMoteTypeHasBeenSet(false),
    m_firstOnlineTimeHasBeenSet(false),
    m_lastOfflineTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_logLevelHasBeenSet(false),
    m_certStateHasBeenSet(false),
    m_enableStateHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_clientIPHasBeenSet(false),
    m_firmwareUpdateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DeviceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("Online") && !value["Online"].IsNull())
    {
        if (!value["Online"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.Online` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_online = value["Online"].GetUint64();
        m_onlineHasBeenSet = true;
    }

    if (value.HasMember("LoginTime") && !value["LoginTime"].IsNull())
    {
        if (!value["LoginTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.LoginTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loginTime = value["LoginTime"].GetUint64();
        m_loginTimeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("DeviceCert") && !value["DeviceCert"].IsNull())
    {
        if (!value["DeviceCert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DeviceCert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCert = string(value["DeviceCert"].GetString());
        m_deviceCertHasBeenSet = true;
    }

    if (value.HasMember("DevicePsk") && !value["DevicePsk"].IsNull())
    {
        if (!value["DevicePsk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DevicePsk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devicePsk = string(value["DevicePsk"].GetString());
        m_devicePskHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DeviceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = value["DeviceType"].GetUint64();
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("Imei") && !value["Imei"].IsNull())
    {
        if (!value["Imei"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.Imei` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imei = string(value["Imei"].GetString());
        m_imeiHasBeenSet = true;
    }

    if (value.HasMember("Isp") && !value["Isp"].IsNull())
    {
        if (!value["Isp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.Isp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isp = value["Isp"].GetUint64();
        m_ispHasBeenSet = true;
    }

    if (value.HasMember("NbiotDeviceID") && !value["NbiotDeviceID"].IsNull())
    {
        if (!value["NbiotDeviceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.NbiotDeviceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nbiotDeviceID = string(value["NbiotDeviceID"].GetString());
        m_nbiotDeviceIDHasBeenSet = true;
    }

    if (value.HasMember("ConnIP") && !value["ConnIP"].IsNull())
    {
        if (!value["ConnIP"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.ConnIP` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connIP = value["ConnIP"].GetUint64();
        m_connIPHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.LastUpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = value["LastUpdateTime"].GetUint64();
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("LoraDevEui") && !value["LoraDevEui"].IsNull())
    {
        if (!value["LoraDevEui"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.LoraDevEui` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loraDevEui = string(value["LoraDevEui"].GetString());
        m_loraDevEuiHasBeenSet = true;
    }

    if (value.HasMember("LoraMoteType") && !value["LoraMoteType"].IsNull())
    {
        if (!value["LoraMoteType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.LoraMoteType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loraMoteType = value["LoraMoteType"].GetUint64();
        m_loraMoteTypeHasBeenSet = true;
    }

    if (value.HasMember("FirstOnlineTime") && !value["FirstOnlineTime"].IsNull())
    {
        if (!value["FirstOnlineTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.FirstOnlineTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_firstOnlineTime = value["FirstOnlineTime"].GetUint64();
        m_firstOnlineTimeHasBeenSet = true;
    }

    if (value.HasMember("LastOfflineTime") && !value["LastOfflineTime"].IsNull())
    {
        if (!value["LastOfflineTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.LastOfflineTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastOfflineTime = value["LastOfflineTime"].GetUint64();
        m_lastOfflineTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LogLevel") && !value["LogLevel"].IsNull())
    {
        if (!value["LogLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.LogLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logLevel = value["LogLevel"].GetUint64();
        m_logLevelHasBeenSet = true;
    }

    if (value.HasMember("CertState") && !value["CertState"].IsNull())
    {
        if (!value["CertState"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.CertState` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_certState = value["CertState"].GetUint64();
        m_certStateHasBeenSet = true;
    }

    if (value.HasMember("EnableState") && !value["EnableState"].IsNull())
    {
        if (!value["EnableState"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.EnableState` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableState = value["EnableState"].GetUint64();
        m_enableStateHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("ClientIP") && !value["ClientIP"].IsNull())
    {
        if (!value["ClientIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.ClientIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIP = string(value["ClientIP"].GetString());
        m_clientIPHasBeenSet = true;
    }

    if (value.HasMember("FirmwareUpdateTime") && !value["FirmwareUpdateTime"].IsNull())
    {
        if (!value["FirmwareUpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.FirmwareUpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_firmwareUpdateTime = value["FirmwareUpdateTime"].GetUint64();
        m_firmwareUpdateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_onlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Online";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_online, allocator);
    }

    if (m_loginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginTime, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceCert.c_str(), allocator).Move(), allocator);
    }

    if (m_devicePskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevicePsk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devicePsk.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceType, allocator);
    }

    if (m_imeiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Imei";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imei.c_str(), allocator).Move(), allocator);
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isp, allocator);
    }

    if (m_nbiotDeviceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NbiotDeviceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nbiotDeviceID.c_str(), allocator).Move(), allocator);
    }

    if (m_connIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connIP, allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastUpdateTime, allocator);
    }

    if (m_loraDevEuiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoraDevEui";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loraDevEui.c_str(), allocator).Move(), allocator);
    }

    if (m_loraMoteTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoraMoteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loraMoteType, allocator);
    }

    if (m_firstOnlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstOnlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstOnlineTime, allocator);
    }

    if (m_lastOfflineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOfflineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastOfflineTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_logLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logLevel, allocator);
    }

    if (m_certStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certState, allocator);
    }

    if (m_enableStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableState, allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_clientIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIP.c_str(), allocator).Move(), allocator);
    }

    if (m_firmwareUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirmwareUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firmwareUpdateTime, allocator);
    }

}


string DeviceInfo::GetDeviceName() const
{
    return m_deviceName;
}

void DeviceInfo::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DeviceInfo::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

uint64_t DeviceInfo::GetOnline() const
{
    return m_online;
}

void DeviceInfo::SetOnline(const uint64_t& _online)
{
    m_online = _online;
    m_onlineHasBeenSet = true;
}

bool DeviceInfo::OnlineHasBeenSet() const
{
    return m_onlineHasBeenSet;
}

uint64_t DeviceInfo::GetLoginTime() const
{
    return m_loginTime;
}

void DeviceInfo::SetLoginTime(const uint64_t& _loginTime)
{
    m_loginTime = _loginTime;
    m_loginTimeHasBeenSet = true;
}

bool DeviceInfo::LoginTimeHasBeenSet() const
{
    return m_loginTimeHasBeenSet;
}

string DeviceInfo::GetVersion() const
{
    return m_version;
}

void DeviceInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool DeviceInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string DeviceInfo::GetDeviceCert() const
{
    return m_deviceCert;
}

void DeviceInfo::SetDeviceCert(const string& _deviceCert)
{
    m_deviceCert = _deviceCert;
    m_deviceCertHasBeenSet = true;
}

bool DeviceInfo::DeviceCertHasBeenSet() const
{
    return m_deviceCertHasBeenSet;
}

string DeviceInfo::GetDevicePsk() const
{
    return m_devicePsk;
}

void DeviceInfo::SetDevicePsk(const string& _devicePsk)
{
    m_devicePsk = _devicePsk;
    m_devicePskHasBeenSet = true;
}

bool DeviceInfo::DevicePskHasBeenSet() const
{
    return m_devicePskHasBeenSet;
}

vector<DeviceTag> DeviceInfo::GetTags() const
{
    return m_tags;
}

void DeviceInfo::SetTags(const vector<DeviceTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DeviceInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

uint64_t DeviceInfo::GetDeviceType() const
{
    return m_deviceType;
}

void DeviceInfo::SetDeviceType(const uint64_t& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool DeviceInfo::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string DeviceInfo::GetImei() const
{
    return m_imei;
}

void DeviceInfo::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool DeviceInfo::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

uint64_t DeviceInfo::GetIsp() const
{
    return m_isp;
}

void DeviceInfo::SetIsp(const uint64_t& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool DeviceInfo::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

string DeviceInfo::GetNbiotDeviceID() const
{
    return m_nbiotDeviceID;
}

void DeviceInfo::SetNbiotDeviceID(const string& _nbiotDeviceID)
{
    m_nbiotDeviceID = _nbiotDeviceID;
    m_nbiotDeviceIDHasBeenSet = true;
}

bool DeviceInfo::NbiotDeviceIDHasBeenSet() const
{
    return m_nbiotDeviceIDHasBeenSet;
}

uint64_t DeviceInfo::GetConnIP() const
{
    return m_connIP;
}

void DeviceInfo::SetConnIP(const uint64_t& _connIP)
{
    m_connIP = _connIP;
    m_connIPHasBeenSet = true;
}

bool DeviceInfo::ConnIPHasBeenSet() const
{
    return m_connIPHasBeenSet;
}

uint64_t DeviceInfo::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void DeviceInfo::SetLastUpdateTime(const uint64_t& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool DeviceInfo::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

string DeviceInfo::GetLoraDevEui() const
{
    return m_loraDevEui;
}

void DeviceInfo::SetLoraDevEui(const string& _loraDevEui)
{
    m_loraDevEui = _loraDevEui;
    m_loraDevEuiHasBeenSet = true;
}

bool DeviceInfo::LoraDevEuiHasBeenSet() const
{
    return m_loraDevEuiHasBeenSet;
}

uint64_t DeviceInfo::GetLoraMoteType() const
{
    return m_loraMoteType;
}

void DeviceInfo::SetLoraMoteType(const uint64_t& _loraMoteType)
{
    m_loraMoteType = _loraMoteType;
    m_loraMoteTypeHasBeenSet = true;
}

bool DeviceInfo::LoraMoteTypeHasBeenSet() const
{
    return m_loraMoteTypeHasBeenSet;
}

uint64_t DeviceInfo::GetFirstOnlineTime() const
{
    return m_firstOnlineTime;
}

void DeviceInfo::SetFirstOnlineTime(const uint64_t& _firstOnlineTime)
{
    m_firstOnlineTime = _firstOnlineTime;
    m_firstOnlineTimeHasBeenSet = true;
}

bool DeviceInfo::FirstOnlineTimeHasBeenSet() const
{
    return m_firstOnlineTimeHasBeenSet;
}

uint64_t DeviceInfo::GetLastOfflineTime() const
{
    return m_lastOfflineTime;
}

void DeviceInfo::SetLastOfflineTime(const uint64_t& _lastOfflineTime)
{
    m_lastOfflineTime = _lastOfflineTime;
    m_lastOfflineTimeHasBeenSet = true;
}

bool DeviceInfo::LastOfflineTimeHasBeenSet() const
{
    return m_lastOfflineTimeHasBeenSet;
}

uint64_t DeviceInfo::GetCreateTime() const
{
    return m_createTime;
}

void DeviceInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DeviceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t DeviceInfo::GetLogLevel() const
{
    return m_logLevel;
}

void DeviceInfo::SetLogLevel(const uint64_t& _logLevel)
{
    m_logLevel = _logLevel;
    m_logLevelHasBeenSet = true;
}

bool DeviceInfo::LogLevelHasBeenSet() const
{
    return m_logLevelHasBeenSet;
}

uint64_t DeviceInfo::GetCertState() const
{
    return m_certState;
}

void DeviceInfo::SetCertState(const uint64_t& _certState)
{
    m_certState = _certState;
    m_certStateHasBeenSet = true;
}

bool DeviceInfo::CertStateHasBeenSet() const
{
    return m_certStateHasBeenSet;
}

uint64_t DeviceInfo::GetEnableState() const
{
    return m_enableState;
}

void DeviceInfo::SetEnableState(const uint64_t& _enableState)
{
    m_enableState = _enableState;
    m_enableStateHasBeenSet = true;
}

bool DeviceInfo::EnableStateHasBeenSet() const
{
    return m_enableStateHasBeenSet;
}

vector<DeviceLabel> DeviceInfo::GetLabels() const
{
    return m_labels;
}

void DeviceInfo::SetLabels(const vector<DeviceLabel>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool DeviceInfo::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

string DeviceInfo::GetClientIP() const
{
    return m_clientIP;
}

void DeviceInfo::SetClientIP(const string& _clientIP)
{
    m_clientIP = _clientIP;
    m_clientIPHasBeenSet = true;
}

bool DeviceInfo::ClientIPHasBeenSet() const
{
    return m_clientIPHasBeenSet;
}

uint64_t DeviceInfo::GetFirmwareUpdateTime() const
{
    return m_firmwareUpdateTime;
}

void DeviceInfo::SetFirmwareUpdateTime(const uint64_t& _firmwareUpdateTime)
{
    m_firmwareUpdateTime = _firmwareUpdateTime;
    m_firmwareUpdateTimeHasBeenSet = true;
}

bool DeviceInfo::FirmwareUpdateTimeHasBeenSet() const
{
    return m_firmwareUpdateTimeHasBeenSet;
}

