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

#include <tencentcloud/iotvideoindustry/v20201201/model/Events.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

Events::Events() :
    m_eventTimeHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventDescHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_deviceAddressHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_eventLogHasBeenSet(false),
    m_deviceNameHasBeenSet(false)
{
}

CoreInternalOutcome Events::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventTime") && !value["EventTime"].IsNull())
    {
        if (!value["EventTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Events.EventTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventTime = value["EventTime"].GetInt64();
        m_eventTimeHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Events.EventType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = value["EventType"].GetInt64();
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("EventDesc") && !value["EventDesc"].IsNull())
    {
        if (!value["EventDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Events.EventDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventDesc = string(value["EventDesc"].GetString());
        m_eventDescHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Events.DeviceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = value["DeviceType"].GetInt64();
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("DeviceAddress") && !value["DeviceAddress"].IsNull())
    {
        if (!value["DeviceAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Events.DeviceAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceAddress = string(value["DeviceAddress"].GetString());
        m_deviceAddressHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Events.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Events.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("EventLog") && !value["EventLog"].IsNull())
    {
        if (!value["EventLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Events.EventLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventLog = string(value["EventLog"].GetString());
        m_eventLogHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Events.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Events::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventTime, allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType, allocator);
    }

    if (m_eventDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceType, allocator);
    }

    if (m_deviceAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventLog.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

}


int64_t Events::GetEventTime() const
{
    return m_eventTime;
}

void Events::SetEventTime(const int64_t& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool Events::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

int64_t Events::GetEventType() const
{
    return m_eventType;
}

void Events::SetEventType(const int64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool Events::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string Events::GetEventDesc() const
{
    return m_eventDesc;
}

void Events::SetEventDesc(const string& _eventDesc)
{
    m_eventDesc = _eventDesc;
    m_eventDescHasBeenSet = true;
}

bool Events::EventDescHasBeenSet() const
{
    return m_eventDescHasBeenSet;
}

int64_t Events::GetDeviceType() const
{
    return m_deviceType;
}

void Events::SetDeviceType(const int64_t& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool Events::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string Events::GetDeviceAddress() const
{
    return m_deviceAddress;
}

void Events::SetDeviceAddress(const string& _deviceAddress)
{
    m_deviceAddress = _deviceAddress;
    m_deviceAddressHasBeenSet = true;
}

bool Events::DeviceAddressHasBeenSet() const
{
    return m_deviceAddressHasBeenSet;
}

string Events::GetDeviceId() const
{
    return m_deviceId;
}

void Events::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool Events::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string Events::GetChannelId() const
{
    return m_channelId;
}

void Events::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool Events::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string Events::GetEventLog() const
{
    return m_eventLog;
}

void Events::SetEventLog(const string& _eventLog)
{
    m_eventLog = _eventLog;
    m_eventLogHasBeenSet = true;
}

bool Events::EventLogHasBeenSet() const
{
    return m_eventLogHasBeenSet;
}

string Events::GetDeviceName() const
{
    return m_deviceName;
}

void Events::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool Events::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

