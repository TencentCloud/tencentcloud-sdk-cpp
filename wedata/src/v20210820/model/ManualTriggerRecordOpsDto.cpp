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

#include <tencentcloud/wedata/v20210820/model/ManualTriggerRecordOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ManualTriggerRecordOpsDto::ManualTriggerRecordOpsDto() :
    m_triggerIdHasBeenSet(false),
    m_triggerNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_datetimeListHasBeenSet(false),
    m_taskCntHasBeenSet(false),
    m_instanceCntHasBeenSet(false),
    m_finishedInstanceCntHasBeenSet(false),
    m_successInstanceCntHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_triggerParamsHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_userUinHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_scheduleTimeZoneHasBeenSet(false),
    m_timeTypeHasBeenSet(false)
{
}

CoreInternalOutcome ManualTriggerRecordOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TriggerId") && !value["TriggerId"].IsNull())
    {
        if (!value["TriggerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualTriggerRecordOpsDto.TriggerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerId = string(value["TriggerId"].GetString());
        m_triggerIdHasBeenSet = true;
    }

    if (value.HasMember("TriggerName") && !value["TriggerName"].IsNull())
    {
        if (!value["TriggerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualTriggerRecordOpsDto.TriggerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerName = string(value["TriggerName"].GetString());
        m_triggerNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualTriggerRecordOpsDto.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("DatetimeList") && !value["DatetimeList"].IsNull())
    {
        if (!value["DatetimeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ManualTriggerRecordOpsDto.DatetimeList` is not array type"));

        const rapidjson::Value &tmpValue = value["DatetimeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_datetimeList.push_back((*itr).GetString());
        }
        m_datetimeListHasBeenSet = true;
    }

    if (value.HasMember("TaskCnt") && !value["TaskCnt"].IsNull())
    {
        if (!value["TaskCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ManualTriggerRecordOpsDto.TaskCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskCnt = value["TaskCnt"].GetUint64();
        m_taskCntHasBeenSet = true;
    }

    if (value.HasMember("InstanceCnt") && !value["InstanceCnt"].IsNull())
    {
        if (!value["InstanceCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ManualTriggerRecordOpsDto.InstanceCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCnt = value["InstanceCnt"].GetUint64();
        m_instanceCntHasBeenSet = true;
    }

    if (value.HasMember("FinishedInstanceCnt") && !value["FinishedInstanceCnt"].IsNull())
    {
        if (!value["FinishedInstanceCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ManualTriggerRecordOpsDto.FinishedInstanceCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_finishedInstanceCnt = value["FinishedInstanceCnt"].GetUint64();
        m_finishedInstanceCntHasBeenSet = true;
    }

    if (value.HasMember("SuccessInstanceCnt") && !value["SuccessInstanceCnt"].IsNull())
    {
        if (!value["SuccessInstanceCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ManualTriggerRecordOpsDto.SuccessInstanceCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successInstanceCnt = value["SuccessInstanceCnt"].GetUint64();
        m_successInstanceCntHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualTriggerRecordOpsDto.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TriggerParams") && !value["TriggerParams"].IsNull())
    {
        if (!value["TriggerParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualTriggerRecordOpsDto.TriggerParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerParams = string(value["TriggerParams"].GetString());
        m_triggerParamsHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualTriggerRecordOpsDto.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("UserUin") && !value["UserUin"].IsNull())
    {
        if (!value["UserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualTriggerRecordOpsDto.UserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = string(value["UserUin"].GetString());
        m_userUinHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualTriggerRecordOpsDto.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualTriggerRecordOpsDto.TenantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = string(value["TenantId"].GetString());
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualTriggerRecordOpsDto.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualTriggerRecordOpsDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ScheduleTimeZone") && !value["ScheduleTimeZone"].IsNull())
    {
        if (!value["ScheduleTimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualTriggerRecordOpsDto.ScheduleTimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTimeZone = string(value["ScheduleTimeZone"].GetString());
        m_scheduleTimeZoneHasBeenSet = true;
    }

    if (value.HasMember("TimeType") && !value["TimeType"].IsNull())
    {
        if (!value["TimeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualTriggerRecordOpsDto.TimeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeType = string(value["TimeType"].GetString());
        m_timeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManualTriggerRecordOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_triggerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerId.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_datetimeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatetimeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_datetimeList.begin(); itr != m_datetimeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskCnt, allocator);
    }

    if (m_instanceCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCnt, allocator);
    }

    if (m_finishedInstanceCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedInstanceCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finishedInstanceCnt, allocator);
    }

    if (m_successInstanceCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessInstanceCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successInstanceCnt, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerParams.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUin.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTimeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleTimeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_timeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeType.c_str(), allocator).Move(), allocator);
    }

}


string ManualTriggerRecordOpsDto::GetTriggerId() const
{
    return m_triggerId;
}

void ManualTriggerRecordOpsDto::SetTriggerId(const string& _triggerId)
{
    m_triggerId = _triggerId;
    m_triggerIdHasBeenSet = true;
}

bool ManualTriggerRecordOpsDto::TriggerIdHasBeenSet() const
{
    return m_triggerIdHasBeenSet;
}

string ManualTriggerRecordOpsDto::GetTriggerName() const
{
    return m_triggerName;
}

void ManualTriggerRecordOpsDto::SetTriggerName(const string& _triggerName)
{
    m_triggerName = _triggerName;
    m_triggerNameHasBeenSet = true;
}

bool ManualTriggerRecordOpsDto::TriggerNameHasBeenSet() const
{
    return m_triggerNameHasBeenSet;
}

string ManualTriggerRecordOpsDto::GetRemark() const
{
    return m_remark;
}

void ManualTriggerRecordOpsDto::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ManualTriggerRecordOpsDto::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<string> ManualTriggerRecordOpsDto::GetDatetimeList() const
{
    return m_datetimeList;
}

void ManualTriggerRecordOpsDto::SetDatetimeList(const vector<string>& _datetimeList)
{
    m_datetimeList = _datetimeList;
    m_datetimeListHasBeenSet = true;
}

bool ManualTriggerRecordOpsDto::DatetimeListHasBeenSet() const
{
    return m_datetimeListHasBeenSet;
}

uint64_t ManualTriggerRecordOpsDto::GetTaskCnt() const
{
    return m_taskCnt;
}

void ManualTriggerRecordOpsDto::SetTaskCnt(const uint64_t& _taskCnt)
{
    m_taskCnt = _taskCnt;
    m_taskCntHasBeenSet = true;
}

bool ManualTriggerRecordOpsDto::TaskCntHasBeenSet() const
{
    return m_taskCntHasBeenSet;
}

uint64_t ManualTriggerRecordOpsDto::GetInstanceCnt() const
{
    return m_instanceCnt;
}

void ManualTriggerRecordOpsDto::SetInstanceCnt(const uint64_t& _instanceCnt)
{
    m_instanceCnt = _instanceCnt;
    m_instanceCntHasBeenSet = true;
}

bool ManualTriggerRecordOpsDto::InstanceCntHasBeenSet() const
{
    return m_instanceCntHasBeenSet;
}

uint64_t ManualTriggerRecordOpsDto::GetFinishedInstanceCnt() const
{
    return m_finishedInstanceCnt;
}

void ManualTriggerRecordOpsDto::SetFinishedInstanceCnt(const uint64_t& _finishedInstanceCnt)
{
    m_finishedInstanceCnt = _finishedInstanceCnt;
    m_finishedInstanceCntHasBeenSet = true;
}

bool ManualTriggerRecordOpsDto::FinishedInstanceCntHasBeenSet() const
{
    return m_finishedInstanceCntHasBeenSet;
}

uint64_t ManualTriggerRecordOpsDto::GetSuccessInstanceCnt() const
{
    return m_successInstanceCnt;
}

void ManualTriggerRecordOpsDto::SetSuccessInstanceCnt(const uint64_t& _successInstanceCnt)
{
    m_successInstanceCnt = _successInstanceCnt;
    m_successInstanceCntHasBeenSet = true;
}

bool ManualTriggerRecordOpsDto::SuccessInstanceCntHasBeenSet() const
{
    return m_successInstanceCntHasBeenSet;
}

string ManualTriggerRecordOpsDto::GetStatus() const
{
    return m_status;
}

void ManualTriggerRecordOpsDto::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ManualTriggerRecordOpsDto::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ManualTriggerRecordOpsDto::GetTriggerParams() const
{
    return m_triggerParams;
}

void ManualTriggerRecordOpsDto::SetTriggerParams(const string& _triggerParams)
{
    m_triggerParams = _triggerParams;
    m_triggerParamsHasBeenSet = true;
}

bool ManualTriggerRecordOpsDto::TriggerParamsHasBeenSet() const
{
    return m_triggerParamsHasBeenSet;
}

string ManualTriggerRecordOpsDto::GetOwnerUin() const
{
    return m_ownerUin;
}

void ManualTriggerRecordOpsDto::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ManualTriggerRecordOpsDto::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string ManualTriggerRecordOpsDto::GetUserUin() const
{
    return m_userUin;
}

void ManualTriggerRecordOpsDto::SetUserUin(const string& _userUin)
{
    m_userUin = _userUin;
    m_userUinHasBeenSet = true;
}

bool ManualTriggerRecordOpsDto::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

string ManualTriggerRecordOpsDto::GetUserName() const
{
    return m_userName;
}

void ManualTriggerRecordOpsDto::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ManualTriggerRecordOpsDto::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ManualTriggerRecordOpsDto::GetTenantId() const
{
    return m_tenantId;
}

void ManualTriggerRecordOpsDto::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool ManualTriggerRecordOpsDto::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string ManualTriggerRecordOpsDto::GetProjectId() const
{
    return m_projectId;
}

void ManualTriggerRecordOpsDto::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ManualTriggerRecordOpsDto::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ManualTriggerRecordOpsDto::GetCreateTime() const
{
    return m_createTime;
}

void ManualTriggerRecordOpsDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ManualTriggerRecordOpsDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ManualTriggerRecordOpsDto::GetScheduleTimeZone() const
{
    return m_scheduleTimeZone;
}

void ManualTriggerRecordOpsDto::SetScheduleTimeZone(const string& _scheduleTimeZone)
{
    m_scheduleTimeZone = _scheduleTimeZone;
    m_scheduleTimeZoneHasBeenSet = true;
}

bool ManualTriggerRecordOpsDto::ScheduleTimeZoneHasBeenSet() const
{
    return m_scheduleTimeZoneHasBeenSet;
}

string ManualTriggerRecordOpsDto::GetTimeType() const
{
    return m_timeType;
}

void ManualTriggerRecordOpsDto::SetTimeType(const string& _timeType)
{
    m_timeType = _timeType;
    m_timeTypeHasBeenSet = true;
}

bool ManualTriggerRecordOpsDto::TimeTypeHasBeenSet() const
{
    return m_timeTypeHasBeenSet;
}

