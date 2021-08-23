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

#include <tencentcloud/cwp/v20180228/model/SecurityEventInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

SecurityEventInfo::SecurityEventInfo() :
    m_eventCntHasBeenSet(false),
    m_uuidCntHasBeenSet(false)
{
}

CoreInternalOutcome SecurityEventInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventCnt") && !value["EventCnt"].IsNull())
    {
        if (!value["EventCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityEventInfo.EventCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCnt = value["EventCnt"].GetUint64();
        m_eventCntHasBeenSet = true;
    }

    if (value.HasMember("UuidCnt") && !value["UuidCnt"].IsNull())
    {
        if (!value["UuidCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityEventInfo.UuidCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uuidCnt = value["UuidCnt"].GetUint64();
        m_uuidCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityEventInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCnt, allocator);
    }

    if (m_uuidCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UuidCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uuidCnt, allocator);
    }

}


uint64_t SecurityEventInfo::GetEventCnt() const
{
    return m_eventCnt;
}

void SecurityEventInfo::SetEventCnt(const uint64_t& _eventCnt)
{
    m_eventCnt = _eventCnt;
    m_eventCntHasBeenSet = true;
}

bool SecurityEventInfo::EventCntHasBeenSet() const
{
    return m_eventCntHasBeenSet;
}

uint64_t SecurityEventInfo::GetUuidCnt() const
{
    return m_uuidCnt;
}

void SecurityEventInfo::SetUuidCnt(const uint64_t& _uuidCnt)
{
    m_uuidCnt = _uuidCnt;
    m_uuidCntHasBeenSet = true;
}

bool SecurityEventInfo::UuidCntHasBeenSet() const
{
    return m_uuidCntHasBeenSet;
}

