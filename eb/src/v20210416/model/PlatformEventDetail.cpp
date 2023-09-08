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

#include <tencentcloud/eb/v20210416/model/PlatformEventDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

PlatformEventDetail::PlatformEventDetail() :
    m_eventNameHasBeenSet(false),
    m_eventTypeHasBeenSet(false)
{
}

CoreInternalOutcome PlatformEventDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformEventDetail.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformEventDetail.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlatformEventDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

}


string PlatformEventDetail::GetEventName() const
{
    return m_eventName;
}

void PlatformEventDetail::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool PlatformEventDetail::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string PlatformEventDetail::GetEventType() const
{
    return m_eventType;
}

void PlatformEventDetail::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool PlatformEventDetail::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

