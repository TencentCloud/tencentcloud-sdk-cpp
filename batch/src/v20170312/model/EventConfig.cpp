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

#include <tencentcloud/batch/v20170312/model/EventConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

EventConfig::EventConfig() :
    m_eventNameHasBeenSet(false),
    m_eventVarsHasBeenSet(false)
{
}

CoreInternalOutcome EventConfig::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Error("response `EventConfig.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("EventVars") && !value["EventVars"].IsNull())
    {
        if (!value["EventVars"].IsArray())
            return CoreInternalOutcome(Error("response `EventConfig.EventVars` is not array type"));

        const Value &tmpValue = value["EventVars"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventVar item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventVars.push_back(item);
        }
        m_eventVarsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventConfig::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_eventNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventVarsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EventVars";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventVars.begin(); itr != m_eventVars.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string EventConfig::GetEventName() const
{
    return m_eventName;
}

void EventConfig::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool EventConfig::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

vector<EventVar> EventConfig::GetEventVars() const
{
    return m_eventVars;
}

void EventConfig::SetEventVars(const vector<EventVar>& _eventVars)
{
    m_eventVars = _eventVars;
    m_eventVarsHasBeenSet = true;
}

bool EventConfig::EventVarsHasBeenSet() const
{
    return m_eventVarsHasBeenSet;
}

