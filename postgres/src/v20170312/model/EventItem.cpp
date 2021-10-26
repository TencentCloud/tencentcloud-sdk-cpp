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

#include <tencentcloud/postgres/v20170312/model/EventItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

EventItem::EventItem() :
    m_paramNameHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_eventDetailHasBeenSet(false)
{
}

CoreInternalOutcome EventItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventItem.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("EventCount") && !value["EventCount"].IsNull())
    {
        if (!value["EventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventItem.EventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = value["EventCount"].GetInt64();
        m_eventCountHasBeenSet = true;
    }

    if (value.HasMember("EventDetail") && !value["EventDetail"].IsNull())
    {
        if (!value["EventDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventItem.EventDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["EventDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventDetail.push_back(item);
        }
        m_eventDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

    if (m_eventDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventDetail.begin(); itr != m_eventDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string EventItem::GetParamName() const
{
    return m_paramName;
}

void EventItem::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool EventItem::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

int64_t EventItem::GetEventCount() const
{
    return m_eventCount;
}

void EventItem::SetEventCount(const int64_t& _eventCount)
{
    m_eventCount = _eventCount;
    m_eventCountHasBeenSet = true;
}

bool EventItem::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

vector<EventInfo> EventItem::GetEventDetail() const
{
    return m_eventDetail;
}

void EventItem::SetEventDetail(const vector<EventInfo>& _eventDetail)
{
    m_eventDetail = _eventDetail;
    m_eventDetailHasBeenSet = true;
}

bool EventItem::EventDetailHasBeenSet() const
{
    return m_eventDetailHasBeenSet;
}

