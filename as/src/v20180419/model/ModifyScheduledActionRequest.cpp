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

#include <tencentcloud/as/v20180419/model/ModifyScheduledActionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

ModifyScheduledActionRequest::ModifyScheduledActionRequest() :
    m_scheduledActionIdHasBeenSet(false),
    m_scheduledActionNameHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_minSizeHasBeenSet(false),
    m_desiredCapacityHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_recurrenceHasBeenSet(false)
{
}

string ModifyScheduledActionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scheduledActionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledActionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduledActionId.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduledActionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledActionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduledActionName.c_str(), allocator).Move(), allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxSize, allocator);
    }

    if (m_minSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minSize, allocator);
    }

    if (m_desiredCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredCapacity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_desiredCapacity, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_recurrenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Recurrence";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recurrence.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyScheduledActionRequest::GetScheduledActionId() const
{
    return m_scheduledActionId;
}

void ModifyScheduledActionRequest::SetScheduledActionId(const string& _scheduledActionId)
{
    m_scheduledActionId = _scheduledActionId;
    m_scheduledActionIdHasBeenSet = true;
}

bool ModifyScheduledActionRequest::ScheduledActionIdHasBeenSet() const
{
    return m_scheduledActionIdHasBeenSet;
}

string ModifyScheduledActionRequest::GetScheduledActionName() const
{
    return m_scheduledActionName;
}

void ModifyScheduledActionRequest::SetScheduledActionName(const string& _scheduledActionName)
{
    m_scheduledActionName = _scheduledActionName;
    m_scheduledActionNameHasBeenSet = true;
}

bool ModifyScheduledActionRequest::ScheduledActionNameHasBeenSet() const
{
    return m_scheduledActionNameHasBeenSet;
}

uint64_t ModifyScheduledActionRequest::GetMaxSize() const
{
    return m_maxSize;
}

void ModifyScheduledActionRequest::SetMaxSize(const uint64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool ModifyScheduledActionRequest::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

uint64_t ModifyScheduledActionRequest::GetMinSize() const
{
    return m_minSize;
}

void ModifyScheduledActionRequest::SetMinSize(const uint64_t& _minSize)
{
    m_minSize = _minSize;
    m_minSizeHasBeenSet = true;
}

bool ModifyScheduledActionRequest::MinSizeHasBeenSet() const
{
    return m_minSizeHasBeenSet;
}

uint64_t ModifyScheduledActionRequest::GetDesiredCapacity() const
{
    return m_desiredCapacity;
}

void ModifyScheduledActionRequest::SetDesiredCapacity(const uint64_t& _desiredCapacity)
{
    m_desiredCapacity = _desiredCapacity;
    m_desiredCapacityHasBeenSet = true;
}

bool ModifyScheduledActionRequest::DesiredCapacityHasBeenSet() const
{
    return m_desiredCapacityHasBeenSet;
}

string ModifyScheduledActionRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyScheduledActionRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyScheduledActionRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ModifyScheduledActionRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyScheduledActionRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyScheduledActionRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ModifyScheduledActionRequest::GetRecurrence() const
{
    return m_recurrence;
}

void ModifyScheduledActionRequest::SetRecurrence(const string& _recurrence)
{
    m_recurrence = _recurrence;
    m_recurrenceHasBeenSet = true;
}

bool ModifyScheduledActionRequest::RecurrenceHasBeenSet() const
{
    return m_recurrenceHasBeenSet;
}


