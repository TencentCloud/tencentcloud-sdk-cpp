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

#include <tencentcloud/redis/v20180412/model/RedisInstanceEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

RedisInstanceEvent::RedisInstanceEvent() :
    m_iDHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_gradeHasBeenSet(false),
    m_executionDateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_latestExecutionDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskEndTimeHasBeenSet(false),
    m_effectInfoHasBeenSet(false),
    m_initialExecutionDateHasBeenSet(false)
{
}

CoreInternalOutcome RedisInstanceEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisInstanceEvent.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisInstanceEvent.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisInstanceEvent.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisInstanceEvent.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Grade") && !value["Grade"].IsNull())
    {
        if (!value["Grade"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisInstanceEvent.Grade` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grade = string(value["Grade"].GetString());
        m_gradeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionDate") && !value["ExecutionDate"].IsNull())
    {
        if (!value["ExecutionDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisInstanceEvent.ExecutionDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionDate = string(value["ExecutionDate"].GetString());
        m_executionDateHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisInstanceEvent.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisInstanceEvent.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestExecutionDate") && !value["LatestExecutionDate"].IsNull())
    {
        if (!value["LatestExecutionDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisInstanceEvent.LatestExecutionDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestExecutionDate = string(value["LatestExecutionDate"].GetString());
        m_latestExecutionDateHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisInstanceEvent.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TaskEndTime") && !value["TaskEndTime"].IsNull())
    {
        if (!value["TaskEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisInstanceEvent.TaskEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskEndTime = string(value["TaskEndTime"].GetString());
        m_taskEndTimeHasBeenSet = true;
    }

    if (value.HasMember("EffectInfo") && !value["EffectInfo"].IsNull())
    {
        if (!value["EffectInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisInstanceEvent.EffectInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectInfo = string(value["EffectInfo"].GetString());
        m_effectInfoHasBeenSet = true;
    }

    if (value.HasMember("InitialExecutionDate") && !value["InitialExecutionDate"].IsNull())
    {
        if (!value["InitialExecutionDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisInstanceEvent.InitialExecutionDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initialExecutionDate = string(value["InitialExecutionDate"].GetString());
        m_initialExecutionDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RedisInstanceEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_gradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grade.c_str(), allocator).Move(), allocator);
    }

    if (m_executionDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionDate.c_str(), allocator).Move(), allocator);
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

    if (m_latestExecutionDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestExecutionDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestExecutionDate.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_taskEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_effectInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_initialExecutionDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitialExecutionDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_initialExecutionDate.c_str(), allocator).Move(), allocator);
    }

}


int64_t RedisInstanceEvent::GetID() const
{
    return m_iD;
}

void RedisInstanceEvent::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool RedisInstanceEvent::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string RedisInstanceEvent::GetInstanceId() const
{
    return m_instanceId;
}

void RedisInstanceEvent::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RedisInstanceEvent::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RedisInstanceEvent::GetInstanceName() const
{
    return m_instanceName;
}

void RedisInstanceEvent::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool RedisInstanceEvent::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string RedisInstanceEvent::GetType() const
{
    return m_type;
}

void RedisInstanceEvent::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RedisInstanceEvent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string RedisInstanceEvent::GetGrade() const
{
    return m_grade;
}

void RedisInstanceEvent::SetGrade(const string& _grade)
{
    m_grade = _grade;
    m_gradeHasBeenSet = true;
}

bool RedisInstanceEvent::GradeHasBeenSet() const
{
    return m_gradeHasBeenSet;
}

string RedisInstanceEvent::GetExecutionDate() const
{
    return m_executionDate;
}

void RedisInstanceEvent::SetExecutionDate(const string& _executionDate)
{
    m_executionDate = _executionDate;
    m_executionDateHasBeenSet = true;
}

bool RedisInstanceEvent::ExecutionDateHasBeenSet() const
{
    return m_executionDateHasBeenSet;
}

string RedisInstanceEvent::GetStartTime() const
{
    return m_startTime;
}

void RedisInstanceEvent::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RedisInstanceEvent::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RedisInstanceEvent::GetEndTime() const
{
    return m_endTime;
}

void RedisInstanceEvent::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RedisInstanceEvent::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string RedisInstanceEvent::GetLatestExecutionDate() const
{
    return m_latestExecutionDate;
}

void RedisInstanceEvent::SetLatestExecutionDate(const string& _latestExecutionDate)
{
    m_latestExecutionDate = _latestExecutionDate;
    m_latestExecutionDateHasBeenSet = true;
}

bool RedisInstanceEvent::LatestExecutionDateHasBeenSet() const
{
    return m_latestExecutionDateHasBeenSet;
}

string RedisInstanceEvent::GetStatus() const
{
    return m_status;
}

void RedisInstanceEvent::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RedisInstanceEvent::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RedisInstanceEvent::GetTaskEndTime() const
{
    return m_taskEndTime;
}

void RedisInstanceEvent::SetTaskEndTime(const string& _taskEndTime)
{
    m_taskEndTime = _taskEndTime;
    m_taskEndTimeHasBeenSet = true;
}

bool RedisInstanceEvent::TaskEndTimeHasBeenSet() const
{
    return m_taskEndTimeHasBeenSet;
}

string RedisInstanceEvent::GetEffectInfo() const
{
    return m_effectInfo;
}

void RedisInstanceEvent::SetEffectInfo(const string& _effectInfo)
{
    m_effectInfo = _effectInfo;
    m_effectInfoHasBeenSet = true;
}

bool RedisInstanceEvent::EffectInfoHasBeenSet() const
{
    return m_effectInfoHasBeenSet;
}

string RedisInstanceEvent::GetInitialExecutionDate() const
{
    return m_initialExecutionDate;
}

void RedisInstanceEvent::SetInitialExecutionDate(const string& _initialExecutionDate)
{
    m_initialExecutionDate = _initialExecutionDate;
    m_initialExecutionDateHasBeenSet = true;
}

bool RedisInstanceEvent::InitialExecutionDateHasBeenSet() const
{
    return m_initialExecutionDateHasBeenSet;
}

