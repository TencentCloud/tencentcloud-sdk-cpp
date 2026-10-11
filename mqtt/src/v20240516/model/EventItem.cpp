/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/mqtt/v20240516/model/EventItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

EventItem::EventItem() :
    m_timestampHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_infoHasBeenSet(false)
{
}

CoreInternalOutcome EventItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventItem.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Event") && !value["Event"].IsNull())
    {
        if (!value["Event"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventItem.Event` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_event = string(value["Event"].GetString());
        m_eventHasBeenSet = true;
    }

    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventItem.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("Info") && !value["Info"].IsNull())
    {
        if (!value["Info"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventItem.Info` is not array type"));

        const rapidjson::Value &tmpValue = value["Info"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_info.push_back(item);
        }
        m_infoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_eventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Event";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_event.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_info.begin(); itr != m_info.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t EventItem::GetTimestamp() const
{
    return m_timestamp;
}

void EventItem::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool EventItem::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string EventItem::GetEvent() const
{
    return m_event;
}

void EventItem::SetEvent(const string& _event)
{
    m_event = _event;
    m_eventHasBeenSet = true;
}

bool EventItem::EventHasBeenSet() const
{
    return m_eventHasBeenSet;
}

string EventItem::GetClientId() const
{
    return m_clientId;
}

void EventItem::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool EventItem::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

vector<EventInfo> EventItem::GetInfo() const
{
    return m_info;
}

void EventItem::SetInfo(const vector<EventInfo>& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool EventItem::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

