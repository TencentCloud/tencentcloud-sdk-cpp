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

#include <tencentcloud/iotexplorer/v20190423/model/DeviceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace rapidjson;
using namespace std;

DeviceInfo::DeviceInfo() :
    m_deviceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_devicePskHasBeenSet(false),
    m_firstOnlineTimeHasBeenSet(false),
    m_loginTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_deviceCertHasBeenSet(false),
    m_logLevelHasBeenSet(false),
    m_devAddrHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_devEUIHasBeenSet(false),
    m_appSKeyHasBeenSet(false),
    m_nwkSKeyHasBeenSet(false)
{
}

CoreInternalOutcome DeviceInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeviceInfo.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DeviceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DevicePsk") && !value["DevicePsk"].IsNull())
    {
        if (!value["DevicePsk"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeviceInfo.DevicePsk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devicePsk = string(value["DevicePsk"].GetString());
        m_devicePskHasBeenSet = true;
    }

    if (value.HasMember("FirstOnlineTime") && !value["FirstOnlineTime"].IsNull())
    {
        if (!value["FirstOnlineTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DeviceInfo.FirstOnlineTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_firstOnlineTime = value["FirstOnlineTime"].GetInt64();
        m_firstOnlineTimeHasBeenSet = true;
    }

    if (value.HasMember("LoginTime") && !value["LoginTime"].IsNull())
    {
        if (!value["LoginTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DeviceInfo.LoginTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loginTime = value["LoginTime"].GetInt64();
        m_loginTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DeviceInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeviceInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("DeviceCert") && !value["DeviceCert"].IsNull())
    {
        if (!value["DeviceCert"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeviceInfo.DeviceCert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCert = string(value["DeviceCert"].GetString());
        m_deviceCertHasBeenSet = true;
    }

    if (value.HasMember("LogLevel") && !value["LogLevel"].IsNull())
    {
        if (!value["LogLevel"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DeviceInfo.LogLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logLevel = value["LogLevel"].GetInt64();
        m_logLevelHasBeenSet = true;
    }

    if (value.HasMember("DevAddr") && !value["DevAddr"].IsNull())
    {
        if (!value["DevAddr"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeviceInfo.DevAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devAddr = string(value["DevAddr"].GetString());
        m_devAddrHasBeenSet = true;
    }

    if (value.HasMember("AppKey") && !value["AppKey"].IsNull())
    {
        if (!value["AppKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeviceInfo.AppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appKey = string(value["AppKey"].GetString());
        m_appKeyHasBeenSet = true;
    }

    if (value.HasMember("DevEUI") && !value["DevEUI"].IsNull())
    {
        if (!value["DevEUI"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeviceInfo.DevEUI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devEUI = string(value["DevEUI"].GetString());
        m_devEUIHasBeenSet = true;
    }

    if (value.HasMember("AppSKey") && !value["AppSKey"].IsNull())
    {
        if (!value["AppSKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeviceInfo.AppSKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appSKey = string(value["AppSKey"].GetString());
        m_appSKeyHasBeenSet = true;
    }

    if (value.HasMember("NwkSKey") && !value["NwkSKey"].IsNull())
    {
        if (!value["NwkSKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeviceInfo.NwkSKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nwkSKey = string(value["NwkSKey"].GetString());
        m_nwkSKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_deviceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_devicePskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DevicePsk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_devicePsk.c_str(), allocator).Move(), allocator);
    }

    if (m_firstOnlineTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FirstOnlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstOnlineTime, allocator);
    }

    if (m_loginTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_versionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceCertHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_deviceCert.c_str(), allocator).Move(), allocator);
    }

    if (m_logLevelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logLevel, allocator);
    }

    if (m_devAddrHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DevAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_devAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_appKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_appKey.c_str(), allocator).Move(), allocator);
    }

    if (m_devEUIHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DevEUI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_devEUI.c_str(), allocator).Move(), allocator);
    }

    if (m_appSKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppSKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_appSKey.c_str(), allocator).Move(), allocator);
    }

    if (m_nwkSKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NwkSKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_nwkSKey.c_str(), allocator).Move(), allocator);
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

int64_t DeviceInfo::GetStatus() const
{
    return m_status;
}

void DeviceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeviceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
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

int64_t DeviceInfo::GetFirstOnlineTime() const
{
    return m_firstOnlineTime;
}

void DeviceInfo::SetFirstOnlineTime(const int64_t& _firstOnlineTime)
{
    m_firstOnlineTime = _firstOnlineTime;
    m_firstOnlineTimeHasBeenSet = true;
}

bool DeviceInfo::FirstOnlineTimeHasBeenSet() const
{
    return m_firstOnlineTimeHasBeenSet;
}

int64_t DeviceInfo::GetLoginTime() const
{
    return m_loginTime;
}

void DeviceInfo::SetLoginTime(const int64_t& _loginTime)
{
    m_loginTime = _loginTime;
    m_loginTimeHasBeenSet = true;
}

bool DeviceInfo::LoginTimeHasBeenSet() const
{
    return m_loginTimeHasBeenSet;
}

int64_t DeviceInfo::GetCreateTime() const
{
    return m_createTime;
}

void DeviceInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DeviceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
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

int64_t DeviceInfo::GetLogLevel() const
{
    return m_logLevel;
}

void DeviceInfo::SetLogLevel(const int64_t& _logLevel)
{
    m_logLevel = _logLevel;
    m_logLevelHasBeenSet = true;
}

bool DeviceInfo::LogLevelHasBeenSet() const
{
    return m_logLevelHasBeenSet;
}

string DeviceInfo::GetDevAddr() const
{
    return m_devAddr;
}

void DeviceInfo::SetDevAddr(const string& _devAddr)
{
    m_devAddr = _devAddr;
    m_devAddrHasBeenSet = true;
}

bool DeviceInfo::DevAddrHasBeenSet() const
{
    return m_devAddrHasBeenSet;
}

string DeviceInfo::GetAppKey() const
{
    return m_appKey;
}

void DeviceInfo::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool DeviceInfo::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string DeviceInfo::GetDevEUI() const
{
    return m_devEUI;
}

void DeviceInfo::SetDevEUI(const string& _devEUI)
{
    m_devEUI = _devEUI;
    m_devEUIHasBeenSet = true;
}

bool DeviceInfo::DevEUIHasBeenSet() const
{
    return m_devEUIHasBeenSet;
}

string DeviceInfo::GetAppSKey() const
{
    return m_appSKey;
}

void DeviceInfo::SetAppSKey(const string& _appSKey)
{
    m_appSKey = _appSKey;
    m_appSKeyHasBeenSet = true;
}

bool DeviceInfo::AppSKeyHasBeenSet() const
{
    return m_appSKeyHasBeenSet;
}

string DeviceInfo::GetNwkSKey() const
{
    return m_nwkSKey;
}

void DeviceInfo::SetNwkSKey(const string& _nwkSKey)
{
    m_nwkSKey = _nwkSKey;
    m_nwkSKeyHasBeenSet = true;
}

bool DeviceInfo::NwkSKeyHasBeenSet() const
{
    return m_nwkSKeyHasBeenSet;
}

