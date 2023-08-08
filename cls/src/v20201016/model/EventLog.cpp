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

#include <tencentcloud/cls/v20201016/model/EventLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

EventLog::EventLog() :
    m_eventChannelHasBeenSet(false),
    m_timeTypeHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_eventIDsHasBeenSet(false)
{
}

CoreInternalOutcome EventLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventChannel") && !value["EventChannel"].IsNull())
    {
        if (!value["EventChannel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventLog.EventChannel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventChannel = string(value["EventChannel"].GetString());
        m_eventChannelHasBeenSet = true;
    }

    if (value.HasMember("TimeType") && !value["TimeType"].IsNull())
    {
        if (!value["TimeType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventLog.TimeType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeType = value["TimeType"].GetUint64();
        m_timeTypeHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventLog.Timestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetUint64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("EventIDs") && !value["EventIDs"].IsNull())
    {
        if (!value["EventIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventLog.EventIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["EventIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eventIDs.push_back((*itr).GetString());
        }
        m_eventIDsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_timeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeType, allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_eventIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventIDs.begin(); itr != m_eventIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string EventLog::GetEventChannel() const
{
    return m_eventChannel;
}

void EventLog::SetEventChannel(const string& _eventChannel)
{
    m_eventChannel = _eventChannel;
    m_eventChannelHasBeenSet = true;
}

bool EventLog::EventChannelHasBeenSet() const
{
    return m_eventChannelHasBeenSet;
}

uint64_t EventLog::GetTimeType() const
{
    return m_timeType;
}

void EventLog::SetTimeType(const uint64_t& _timeType)
{
    m_timeType = _timeType;
    m_timeTypeHasBeenSet = true;
}

bool EventLog::TimeTypeHasBeenSet() const
{
    return m_timeTypeHasBeenSet;
}

uint64_t EventLog::GetTimestamp() const
{
    return m_timestamp;
}

void EventLog::SetTimestamp(const uint64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool EventLog::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

vector<string> EventLog::GetEventIDs() const
{
    return m_eventIDs;
}

void EventLog::SetEventIDs(const vector<string>& _eventIDs)
{
    m_eventIDs = _eventIDs;
    m_eventIDsHasBeenSet = true;
}

bool EventLog::EventIDsHasBeenSet() const
{
    return m_eventIDsHasBeenSet;
}

