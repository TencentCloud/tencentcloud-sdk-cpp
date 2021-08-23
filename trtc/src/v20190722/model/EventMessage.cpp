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

#include <tencentcloud/trtc/v20190722/model/EventMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

EventMessage::EventMessage() :
    m_typeHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_paramOneHasBeenSet(false),
    m_paramTwoHasBeenSet(false)
{
}

CoreInternalOutcome EventMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventMessage.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventMessage.Time` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetUint64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventMessage.EventId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetUint64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("ParamOne") && !value["ParamOne"].IsNull())
    {
        if (!value["ParamOne"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventMessage.ParamOne` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paramOne = value["ParamOne"].GetInt64();
        m_paramOneHasBeenSet = true;
    }

    if (value.HasMember("ParamTwo") && !value["ParamTwo"].IsNull())
    {
        if (!value["ParamTwo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventMessage.ParamTwo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paramTwo = value["ParamTwo"].GetInt64();
        m_paramTwoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_paramOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamOne";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paramOne, allocator);
    }

    if (m_paramTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTwo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paramTwo, allocator);
    }

}


uint64_t EventMessage::GetType() const
{
    return m_type;
}

void EventMessage::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool EventMessage::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t EventMessage::GetTime() const
{
    return m_time;
}

void EventMessage::SetTime(const uint64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool EventMessage::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

uint64_t EventMessage::GetEventId() const
{
    return m_eventId;
}

void EventMessage::SetEventId(const uint64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool EventMessage::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

int64_t EventMessage::GetParamOne() const
{
    return m_paramOne;
}

void EventMessage::SetParamOne(const int64_t& _paramOne)
{
    m_paramOne = _paramOne;
    m_paramOneHasBeenSet = true;
}

bool EventMessage::ParamOneHasBeenSet() const
{
    return m_paramOneHasBeenSet;
}

int64_t EventMessage::GetParamTwo() const
{
    return m_paramTwo;
}

void EventMessage::SetParamTwo(const int64_t& _paramTwo)
{
    m_paramTwo = _paramTwo;
    m_paramTwoHasBeenSet = true;
}

bool EventMessage::ParamTwoHasBeenSet() const
{
    return m_paramTwoHasBeenSet;
}

