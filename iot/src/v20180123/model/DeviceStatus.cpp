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

#include <tencentcloud/iot/v20180123/model/DeviceStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

DeviceStatus::DeviceStatus() :
    m_deviceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_firstOnlineHasBeenSet(false),
    m_lastOnlineHasBeenSet(false),
    m_onlineTimesHasBeenSet(false)
{
}

CoreInternalOutcome DeviceStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatus.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FirstOnline") && !value["FirstOnline"].IsNull())
    {
        if (!value["FirstOnline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatus.FirstOnline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstOnline = string(value["FirstOnline"].GetString());
        m_firstOnlineHasBeenSet = true;
    }

    if (value.HasMember("LastOnline") && !value["LastOnline"].IsNull())
    {
        if (!value["LastOnline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatus.LastOnline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastOnline = string(value["LastOnline"].GetString());
        m_lastOnlineHasBeenSet = true;
    }

    if (value.HasMember("OnlineTimes") && !value["OnlineTimes"].IsNull())
    {
        if (!value["OnlineTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatus.OnlineTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineTimes = value["OnlineTimes"].GetUint64();
        m_onlineTimesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_firstOnlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstOnline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstOnline.c_str(), allocator).Move(), allocator);
    }

    if (m_lastOnlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOnline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastOnline.c_str(), allocator).Move(), allocator);
    }

    if (m_onlineTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineTimes, allocator);
    }

}


string DeviceStatus::GetDeviceName() const
{
    return m_deviceName;
}

void DeviceStatus::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DeviceStatus::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DeviceStatus::GetStatus() const
{
    return m_status;
}

void DeviceStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeviceStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DeviceStatus::GetFirstOnline() const
{
    return m_firstOnline;
}

void DeviceStatus::SetFirstOnline(const string& _firstOnline)
{
    m_firstOnline = _firstOnline;
    m_firstOnlineHasBeenSet = true;
}

bool DeviceStatus::FirstOnlineHasBeenSet() const
{
    return m_firstOnlineHasBeenSet;
}

string DeviceStatus::GetLastOnline() const
{
    return m_lastOnline;
}

void DeviceStatus::SetLastOnline(const string& _lastOnline)
{
    m_lastOnline = _lastOnline;
    m_lastOnlineHasBeenSet = true;
}

bool DeviceStatus::LastOnlineHasBeenSet() const
{
    return m_lastOnlineHasBeenSet;
}

uint64_t DeviceStatus::GetOnlineTimes() const
{
    return m_onlineTimes;
}

void DeviceStatus::SetOnlineTimes(const uint64_t& _onlineTimes)
{
    m_onlineTimes = _onlineTimes;
    m_onlineTimesHasBeenSet = true;
}

bool DeviceStatus::OnlineTimesHasBeenSet() const
{
    return m_onlineTimesHasBeenSet;
}

