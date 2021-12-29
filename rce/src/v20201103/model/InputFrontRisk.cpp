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

#include <tencentcloud/rce/v20201103/model/InputFrontRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

InputFrontRisk::InputFrontRisk() :
    m_eventIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_currentStartTimeHasBeenSet(false),
    m_currentEndTimeHasBeenSet(false)
{
}

CoreInternalOutcome InputFrontRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputFrontRisk.EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputFrontRisk.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputFrontRisk.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputFrontRisk.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CurrentStartTime") && !value["CurrentStartTime"].IsNull())
    {
        if (!value["CurrentStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputFrontRisk.CurrentStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentStartTime = string(value["CurrentStartTime"].GetString());
        m_currentStartTimeHasBeenSet = true;
    }

    if (value.HasMember("CurrentEndTime") && !value["CurrentEndTime"].IsNull())
    {
        if (!value["CurrentEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputFrontRisk.CurrentEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentEndTime = string(value["CurrentEndTime"].GetString());
        m_currentEndTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputFrontRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_currentStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_currentEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentEndTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t InputFrontRisk::GetEventId() const
{
    return m_eventId;
}

void InputFrontRisk::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool InputFrontRisk::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string InputFrontRisk::GetStartTime() const
{
    return m_startTime;
}

void InputFrontRisk::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool InputFrontRisk::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string InputFrontRisk::GetEndTime() const
{
    return m_endTime;
}

void InputFrontRisk::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool InputFrontRisk::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t InputFrontRisk::GetType() const
{
    return m_type;
}

void InputFrontRisk::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InputFrontRisk::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string InputFrontRisk::GetCurrentStartTime() const
{
    return m_currentStartTime;
}

void InputFrontRisk::SetCurrentStartTime(const string& _currentStartTime)
{
    m_currentStartTime = _currentStartTime;
    m_currentStartTimeHasBeenSet = true;
}

bool InputFrontRisk::CurrentStartTimeHasBeenSet() const
{
    return m_currentStartTimeHasBeenSet;
}

string InputFrontRisk::GetCurrentEndTime() const
{
    return m_currentEndTime;
}

void InputFrontRisk::SetCurrentEndTime(const string& _currentEndTime)
{
    m_currentEndTime = _currentEndTime;
    m_currentEndTimeHasBeenSet = true;
}

bool InputFrontRisk::CurrentEndTimeHasBeenSet() const
{
    return m_currentEndTimeHasBeenSet;
}

