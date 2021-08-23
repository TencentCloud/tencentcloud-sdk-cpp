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

#include <tencentcloud/iot/v20180123/model/DebugLogEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

DebugLogEntry::DebugLogEntry() :
    m_idHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_deviceNameHasBeenSet(false)
{
}

CoreInternalOutcome DebugLogEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DebugLogEntry.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Event") && !value["Event"].IsNull())
    {
        if (!value["Event"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DebugLogEntry.Event` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_event = string(value["Event"].GetString());
        m_eventHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DebugLogEntry.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DebugLogEntry.Timestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetUint64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DebugLogEntry.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DebugLogEntry.Data` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_data = string(value["Data"].GetString());
        m_dataHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DebugLogEntry.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DebugLogEntry.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DebugLogEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_eventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Event";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_event.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_data.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

}


string DebugLogEntry::GetId() const
{
    return m_id;
}

void DebugLogEntry::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DebugLogEntry::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DebugLogEntry::GetEvent() const
{
    return m_event;
}

void DebugLogEntry::SetEvent(const string& _event)
{
    m_event = _event;
    m_eventHasBeenSet = true;
}

bool DebugLogEntry::EventHasBeenSet() const
{
    return m_eventHasBeenSet;
}

string DebugLogEntry::GetLogType() const
{
    return m_logType;
}

void DebugLogEntry::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool DebugLogEntry::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

uint64_t DebugLogEntry::GetTimestamp() const
{
    return m_timestamp;
}

void DebugLogEntry::SetTimestamp(const uint64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool DebugLogEntry::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string DebugLogEntry::GetResult() const
{
    return m_result;
}

void DebugLogEntry::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool DebugLogEntry::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string DebugLogEntry::GetData() const
{
    return m_data;
}

void DebugLogEntry::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool DebugLogEntry::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

string DebugLogEntry::GetTopic() const
{
    return m_topic;
}

void DebugLogEntry::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool DebugLogEntry::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string DebugLogEntry::GetDeviceName() const
{
    return m_deviceName;
}

void DebugLogEntry::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DebugLogEntry::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

