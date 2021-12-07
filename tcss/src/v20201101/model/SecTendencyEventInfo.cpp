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

#include <tencentcloud/tcss/v20201101/model/SecTendencyEventInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

SecTendencyEventInfo::SecTendencyEventInfo() :
    m_eventSetHasBeenSet(false),
    m_eventTypeHasBeenSet(false)
{
}

CoreInternalOutcome SecTendencyEventInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventSet") && !value["EventSet"].IsNull())
    {
        if (!value["EventSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecTendencyEventInfo.EventSet` is not array type"));

        const rapidjson::Value &tmpValue = value["EventSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RunTimeTendencyInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventSet.push_back(item);
        }
        m_eventSetHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecTendencyEventInfo.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecTendencyEventInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventSet.begin(); itr != m_eventSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

}


vector<RunTimeTendencyInfo> SecTendencyEventInfo::GetEventSet() const
{
    return m_eventSet;
}

void SecTendencyEventInfo::SetEventSet(const vector<RunTimeTendencyInfo>& _eventSet)
{
    m_eventSet = _eventSet;
    m_eventSetHasBeenSet = true;
}

bool SecTendencyEventInfo::EventSetHasBeenSet() const
{
    return m_eventSetHasBeenSet;
}

string SecTendencyEventInfo::GetEventType() const
{
    return m_eventType;
}

void SecTendencyEventInfo::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool SecTendencyEventInfo::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

