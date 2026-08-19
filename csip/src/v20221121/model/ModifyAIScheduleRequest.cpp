/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/ModifyAIScheduleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyAIScheduleRequest::ModifyAIScheduleRequest() :
    m_scheduleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_promptsHasBeenSet(false),
    m_maxFireCountHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_triggersHasBeenSet(false),
    m_updateTriggersHasBeenSet(false)
{
}

string ModifyAIScheduleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scheduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduleId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_promptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompts.c_str(), allocator).Move(), allocator);
    }

    if (m_maxFireCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFireCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxFireCount, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_triggersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Triggers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_triggers.begin(); itr != m_triggers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_updateTriggersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTriggers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateTriggers, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAIScheduleRequest::GetScheduleId() const
{
    return m_scheduleId;
}

void ModifyAIScheduleRequest::SetScheduleId(const string& _scheduleId)
{
    m_scheduleId = _scheduleId;
    m_scheduleIdHasBeenSet = true;
}

bool ModifyAIScheduleRequest::ScheduleIdHasBeenSet() const
{
    return m_scheduleIdHasBeenSet;
}

string ModifyAIScheduleRequest::GetName() const
{
    return m_name;
}

void ModifyAIScheduleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyAIScheduleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyAIScheduleRequest::GetPrompts() const
{
    return m_prompts;
}

void ModifyAIScheduleRequest::SetPrompts(const string& _prompts)
{
    m_prompts = _prompts;
    m_promptsHasBeenSet = true;
}

bool ModifyAIScheduleRequest::PromptsHasBeenSet() const
{
    return m_promptsHasBeenSet;
}

int64_t ModifyAIScheduleRequest::GetMaxFireCount() const
{
    return m_maxFireCount;
}

void ModifyAIScheduleRequest::SetMaxFireCount(const int64_t& _maxFireCount)
{
    m_maxFireCount = _maxFireCount;
    m_maxFireCountHasBeenSet = true;
}

bool ModifyAIScheduleRequest::MaxFireCountHasBeenSet() const
{
    return m_maxFireCountHasBeenSet;
}

int64_t ModifyAIScheduleRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyAIScheduleRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyAIScheduleRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t ModifyAIScheduleRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyAIScheduleRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyAIScheduleRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<AiScheduleTriggerInfo> ModifyAIScheduleRequest::GetTriggers() const
{
    return m_triggers;
}

void ModifyAIScheduleRequest::SetTriggers(const vector<AiScheduleTriggerInfo>& _triggers)
{
    m_triggers = _triggers;
    m_triggersHasBeenSet = true;
}

bool ModifyAIScheduleRequest::TriggersHasBeenSet() const
{
    return m_triggersHasBeenSet;
}

bool ModifyAIScheduleRequest::GetUpdateTriggers() const
{
    return m_updateTriggers;
}

void ModifyAIScheduleRequest::SetUpdateTriggers(const bool& _updateTriggers)
{
    m_updateTriggers = _updateTriggers;
    m_updateTriggersHasBeenSet = true;
}

bool ModifyAIScheduleRequest::UpdateTriggersHasBeenSet() const
{
    return m_updateTriggersHasBeenSet;
}


