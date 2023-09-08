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

#include <tencentcloud/eb/v20210416/model/PlatformEventSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

PlatformEventSummary::PlatformEventSummary() :
    m_eventNameHasBeenSet(false),
    m_eventPatternHasBeenSet(false)
{
}

CoreInternalOutcome PlatformEventSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformEventSummary.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("EventPattern") && !value["EventPattern"].IsNull())
    {
        if (!value["EventPattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformEventSummary.EventPattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventPattern = string(value["EventPattern"].GetString());
        m_eventPatternHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlatformEventSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventPattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventPattern.c_str(), allocator).Move(), allocator);
    }

}


string PlatformEventSummary::GetEventName() const
{
    return m_eventName;
}

void PlatformEventSummary::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool PlatformEventSummary::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string PlatformEventSummary::GetEventPattern() const
{
    return m_eventPattern;
}

void PlatformEventSummary::SetEventPattern(const string& _eventPattern)
{
    m_eventPattern = _eventPattern;
    m_eventPatternHasBeenSet = true;
}

bool PlatformEventSummary::EventPatternHasBeenSet() const
{
    return m_eventPatternHasBeenSet;
}

