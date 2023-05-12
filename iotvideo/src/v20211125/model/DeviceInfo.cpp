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

#include <tencentcloud/iotvideo/v20211125/model/DeviceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

DeviceInfo::DeviceInfo() :
    m_deviceNameHasBeenSet(false),
    m_onlineHasBeenSet(false),
    m_loginTimeHasBeenSet(false),
    m_devicePskHasBeenSet(false),
    m_enableStateHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_logLevelHasBeenSet(false)
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

    if (value.HasMember("DevicePsk") && !value["DevicePsk"].IsNull())
    {
        if (!value["DevicePsk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DevicePsk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devicePsk = string(value["DevicePsk"].GetString());
        m_devicePskHasBeenSet = true;
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

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
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

    if (m_devicePskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevicePsk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devicePsk.c_str(), allocator).Move(), allocator);
    }

    if (m_enableStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableState, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_logLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logLevel, allocator);
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

uint64_t DeviceInfo::GetExpireTime() const
{
    return m_expireTime;
}

void DeviceInfo::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DeviceInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
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

