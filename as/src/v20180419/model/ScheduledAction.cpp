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

#include <tencentcloud/as/v20180419/model/ScheduledAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

ScheduledAction::ScheduledAction() :
    m_scheduledActionIdHasBeenSet(false),
    m_scheduledActionNameHasBeenSet(false),
    m_autoScalingGroupIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_recurrenceHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_desiredCapacityHasBeenSet(false),
    m_minSizeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_scheduledTypeHasBeenSet(false)
{
}

CoreInternalOutcome ScheduledAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScheduledActionId") && !value["ScheduledActionId"].IsNull())
    {
        if (!value["ScheduledActionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledAction.ScheduledActionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduledActionId = string(value["ScheduledActionId"].GetString());
        m_scheduledActionIdHasBeenSet = true;
    }

    if (value.HasMember("ScheduledActionName") && !value["ScheduledActionName"].IsNull())
    {
        if (!value["ScheduledActionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledAction.ScheduledActionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduledActionName = string(value["ScheduledActionName"].GetString());
        m_scheduledActionNameHasBeenSet = true;
    }

    if (value.HasMember("AutoScalingGroupId") && !value["AutoScalingGroupId"].IsNull())
    {
        if (!value["AutoScalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledAction.AutoScalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupId = string(value["AutoScalingGroupId"].GetString());
        m_autoScalingGroupIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledAction.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Recurrence") && !value["Recurrence"].IsNull())
    {
        if (!value["Recurrence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledAction.Recurrence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recurrence = string(value["Recurrence"].GetString());
        m_recurrenceHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledAction.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxSize") && !value["MaxSize"].IsNull())
    {
        if (!value["MaxSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledAction.MaxSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSize = value["MaxSize"].GetUint64();
        m_maxSizeHasBeenSet = true;
    }

    if (value.HasMember("DesiredCapacity") && !value["DesiredCapacity"].IsNull())
    {
        if (!value["DesiredCapacity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledAction.DesiredCapacity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredCapacity = value["DesiredCapacity"].GetUint64();
        m_desiredCapacityHasBeenSet = true;
    }

    if (value.HasMember("MinSize") && !value["MinSize"].IsNull())
    {
        if (!value["MinSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledAction.MinSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minSize = value["MinSize"].GetUint64();
        m_minSizeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledAction.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ScheduledType") && !value["ScheduledType"].IsNull())
    {
        if (!value["ScheduledType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledAction.ScheduledType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduledType = string(value["ScheduledType"].GetString());
        m_scheduledTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScheduledAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scheduledActionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledActionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduledActionId.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduledActionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledActionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduledActionName.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_recurrenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Recurrence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recurrence.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSize, allocator);
    }

    if (m_desiredCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredCapacity, allocator);
    }

    if (m_minSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minSize, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduledTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduledType.c_str(), allocator).Move(), allocator);
    }

}


string ScheduledAction::GetScheduledActionId() const
{
    return m_scheduledActionId;
}

void ScheduledAction::SetScheduledActionId(const string& _scheduledActionId)
{
    m_scheduledActionId = _scheduledActionId;
    m_scheduledActionIdHasBeenSet = true;
}

bool ScheduledAction::ScheduledActionIdHasBeenSet() const
{
    return m_scheduledActionIdHasBeenSet;
}

string ScheduledAction::GetScheduledActionName() const
{
    return m_scheduledActionName;
}

void ScheduledAction::SetScheduledActionName(const string& _scheduledActionName)
{
    m_scheduledActionName = _scheduledActionName;
    m_scheduledActionNameHasBeenSet = true;
}

bool ScheduledAction::ScheduledActionNameHasBeenSet() const
{
    return m_scheduledActionNameHasBeenSet;
}

string ScheduledAction::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void ScheduledAction::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool ScheduledAction::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

string ScheduledAction::GetStartTime() const
{
    return m_startTime;
}

void ScheduledAction::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ScheduledAction::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ScheduledAction::GetRecurrence() const
{
    return m_recurrence;
}

void ScheduledAction::SetRecurrence(const string& _recurrence)
{
    m_recurrence = _recurrence;
    m_recurrenceHasBeenSet = true;
}

bool ScheduledAction::RecurrenceHasBeenSet() const
{
    return m_recurrenceHasBeenSet;
}

string ScheduledAction::GetEndTime() const
{
    return m_endTime;
}

void ScheduledAction::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ScheduledAction::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t ScheduledAction::GetMaxSize() const
{
    return m_maxSize;
}

void ScheduledAction::SetMaxSize(const uint64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool ScheduledAction::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

uint64_t ScheduledAction::GetDesiredCapacity() const
{
    return m_desiredCapacity;
}

void ScheduledAction::SetDesiredCapacity(const uint64_t& _desiredCapacity)
{
    m_desiredCapacity = _desiredCapacity;
    m_desiredCapacityHasBeenSet = true;
}

bool ScheduledAction::DesiredCapacityHasBeenSet() const
{
    return m_desiredCapacityHasBeenSet;
}

uint64_t ScheduledAction::GetMinSize() const
{
    return m_minSize;
}

void ScheduledAction::SetMinSize(const uint64_t& _minSize)
{
    m_minSize = _minSize;
    m_minSizeHasBeenSet = true;
}

bool ScheduledAction::MinSizeHasBeenSet() const
{
    return m_minSizeHasBeenSet;
}

string ScheduledAction::GetCreatedTime() const
{
    return m_createdTime;
}

void ScheduledAction::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ScheduledAction::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string ScheduledAction::GetScheduledType() const
{
    return m_scheduledType;
}

void ScheduledAction::SetScheduledType(const string& _scheduledType)
{
    m_scheduledType = _scheduledType;
    m_scheduledTypeHasBeenSet = true;
}

bool ScheduledAction::ScheduledTypeHasBeenSet() const
{
    return m_scheduledTypeHasBeenSet;
}

