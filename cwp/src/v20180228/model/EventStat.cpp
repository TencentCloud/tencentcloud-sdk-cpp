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

#include <tencentcloud/cwp/v20180228/model/EventStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

EventStat::EventStat() :
    m_eventsNumHasBeenSet(false),
    m_machineAffectNumHasBeenSet(false)
{
}

CoreInternalOutcome EventStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventsNum") && !value["EventsNum"].IsNull())
    {
        if (!value["EventsNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventStat.EventsNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventsNum = value["EventsNum"].GetUint64();
        m_eventsNumHasBeenSet = true;
    }

    if (value.HasMember("MachineAffectNum") && !value["MachineAffectNum"].IsNull())
    {
        if (!value["MachineAffectNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventStat.MachineAffectNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machineAffectNum = value["MachineAffectNum"].GetUint64();
        m_machineAffectNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventsNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventsNum, allocator);
    }

    if (m_machineAffectNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineAffectNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineAffectNum, allocator);
    }

}


uint64_t EventStat::GetEventsNum() const
{
    return m_eventsNum;
}

void EventStat::SetEventsNum(const uint64_t& _eventsNum)
{
    m_eventsNum = _eventsNum;
    m_eventsNumHasBeenSet = true;
}

bool EventStat::EventsNumHasBeenSet() const
{
    return m_eventsNumHasBeenSet;
}

uint64_t EventStat::GetMachineAffectNum() const
{
    return m_machineAffectNum;
}

void EventStat::SetMachineAffectNum(const uint64_t& _machineAffectNum)
{
    m_machineAffectNum = _machineAffectNum;
    m_machineAffectNumHasBeenSet = true;
}

bool EventStat::MachineAffectNumHasBeenSet() const
{
    return m_machineAffectNumHasBeenSet;
}

