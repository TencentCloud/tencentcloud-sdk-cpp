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

#include <tencentcloud/cwp/v20180228/model/BaselineEventLevelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineEventLevelInfo::BaselineEventLevelInfo() :
    m_eventLevelHasBeenSet(false),
    m_eventCountHasBeenSet(false)
{
}

CoreInternalOutcome BaselineEventLevelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventLevel") && !value["EventLevel"].IsNull())
    {
        if (!value["EventLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineEventLevelInfo.EventLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventLevel = value["EventLevel"].GetUint64();
        m_eventLevelHasBeenSet = true;
    }

    if (value.HasMember("EventCount") && !value["EventCount"].IsNull())
    {
        if (!value["EventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineEventLevelInfo.EventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = value["EventCount"].GetUint64();
        m_eventCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineEventLevelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventLevel, allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

}


uint64_t BaselineEventLevelInfo::GetEventLevel() const
{
    return m_eventLevel;
}

void BaselineEventLevelInfo::SetEventLevel(const uint64_t& _eventLevel)
{
    m_eventLevel = _eventLevel;
    m_eventLevelHasBeenSet = true;
}

bool BaselineEventLevelInfo::EventLevelHasBeenSet() const
{
    return m_eventLevelHasBeenSet;
}

uint64_t BaselineEventLevelInfo::GetEventCount() const
{
    return m_eventCount;
}

void BaselineEventLevelInfo::SetEventCount(const uint64_t& _eventCount)
{
    m_eventCount = _eventCount;
    m_eventCountHasBeenSet = true;
}

bool BaselineEventLevelInfo::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

