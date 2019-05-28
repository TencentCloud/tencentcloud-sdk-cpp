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

#include <tencentcloud/as/v20180419/model/CreateScheduledActionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace rapidjson;
using namespace std;

CreateScheduledActionRequest::CreateScheduledActionRequest() :
    m_autoScalingGroupIdHasBeenSet(false),
    m_scheduledActionNameHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_minSizeHasBeenSet(false),
    m_desiredCapacityHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_recurrenceHasBeenSet(false)
{
}

string CreateScheduledActionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoScalingGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduledActionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScheduledActionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_scheduledActionName.c_str(), allocator).Move(), allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxSize, allocator);
    }

    if (m_minSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MinSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minSize, allocator);
    }

    if (m_desiredCapacityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DesiredCapacity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_desiredCapacity, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_recurrenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Recurrence";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recurrence.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateScheduledActionRequest::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void CreateScheduledActionRequest::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool CreateScheduledActionRequest::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

string CreateScheduledActionRequest::GetScheduledActionName() const
{
    return m_scheduledActionName;
}

void CreateScheduledActionRequest::SetScheduledActionName(const string& _scheduledActionName)
{
    m_scheduledActionName = _scheduledActionName;
    m_scheduledActionNameHasBeenSet = true;
}

bool CreateScheduledActionRequest::ScheduledActionNameHasBeenSet() const
{
    return m_scheduledActionNameHasBeenSet;
}

uint64_t CreateScheduledActionRequest::GetMaxSize() const
{
    return m_maxSize;
}

void CreateScheduledActionRequest::SetMaxSize(const uint64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool CreateScheduledActionRequest::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

uint64_t CreateScheduledActionRequest::GetMinSize() const
{
    return m_minSize;
}

void CreateScheduledActionRequest::SetMinSize(const uint64_t& _minSize)
{
    m_minSize = _minSize;
    m_minSizeHasBeenSet = true;
}

bool CreateScheduledActionRequest::MinSizeHasBeenSet() const
{
    return m_minSizeHasBeenSet;
}

uint64_t CreateScheduledActionRequest::GetDesiredCapacity() const
{
    return m_desiredCapacity;
}

void CreateScheduledActionRequest::SetDesiredCapacity(const uint64_t& _desiredCapacity)
{
    m_desiredCapacity = _desiredCapacity;
    m_desiredCapacityHasBeenSet = true;
}

bool CreateScheduledActionRequest::DesiredCapacityHasBeenSet() const
{
    return m_desiredCapacityHasBeenSet;
}

string CreateScheduledActionRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateScheduledActionRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateScheduledActionRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CreateScheduledActionRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateScheduledActionRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateScheduledActionRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string CreateScheduledActionRequest::GetRecurrence() const
{
    return m_recurrence;
}

void CreateScheduledActionRequest::SetRecurrence(const string& _recurrence)
{
    m_recurrence = _recurrence;
    m_recurrenceHasBeenSet = true;
}

bool CreateScheduledActionRequest::RecurrenceHasBeenSet() const
{
    return m_recurrenceHasBeenSet;
}


