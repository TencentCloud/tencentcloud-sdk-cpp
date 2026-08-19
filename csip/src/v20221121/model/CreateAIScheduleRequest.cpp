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

#include <tencentcloud/csip/v20221121/model/CreateAIScheduleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateAIScheduleRequest::CreateAIScheduleRequest() :
    m_nameHasBeenSet(false),
    m_promptsHasBeenSet(false),
    m_triggersHasBeenSet(false),
    m_maxFireCountHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string CreateAIScheduleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAIScheduleRequest::GetName() const
{
    return m_name;
}

void CreateAIScheduleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAIScheduleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAIScheduleRequest::GetPrompts() const
{
    return m_prompts;
}

void CreateAIScheduleRequest::SetPrompts(const string& _prompts)
{
    m_prompts = _prompts;
    m_promptsHasBeenSet = true;
}

bool CreateAIScheduleRequest::PromptsHasBeenSet() const
{
    return m_promptsHasBeenSet;
}

vector<AiScheduleTriggerInfo> CreateAIScheduleRequest::GetTriggers() const
{
    return m_triggers;
}

void CreateAIScheduleRequest::SetTriggers(const vector<AiScheduleTriggerInfo>& _triggers)
{
    m_triggers = _triggers;
    m_triggersHasBeenSet = true;
}

bool CreateAIScheduleRequest::TriggersHasBeenSet() const
{
    return m_triggersHasBeenSet;
}

int64_t CreateAIScheduleRequest::GetMaxFireCount() const
{
    return m_maxFireCount;
}

void CreateAIScheduleRequest::SetMaxFireCount(const int64_t& _maxFireCount)
{
    m_maxFireCount = _maxFireCount;
    m_maxFireCountHasBeenSet = true;
}

bool CreateAIScheduleRequest::MaxFireCountHasBeenSet() const
{
    return m_maxFireCountHasBeenSet;
}

int64_t CreateAIScheduleRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateAIScheduleRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateAIScheduleRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t CreateAIScheduleRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateAIScheduleRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateAIScheduleRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


