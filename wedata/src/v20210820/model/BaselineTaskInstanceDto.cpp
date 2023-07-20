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

#include <tencentcloud/wedata/v20210820/model/BaselineTaskInstanceDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BaselineTaskInstanceDto::BaselineTaskInstanceDto() :
    m_idHasBeenSet(false),
    m_baselineInstanceIdHasBeenSet(false),
    m_baselineTypeHasBeenSet(false),
    m_baselineDataTimeHasBeenSet(false),
    m_upstreamInstanceIdsHasBeenSet(false),
    m_downstreamInstanceIdsHasBeenSet(false),
    m_isPromiseTaskHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_inCriticalPathHasBeenSet(false),
    m_inFirstLevelHasBeenSet(false),
    m_estimatedCostTimeHasBeenSet(false),
    m_actualCostTimeHasBeenSet(false),
    m_latestStartTimeHasBeenSet(false),
    m_actualStartTimeHasBeenSet(false),
    m_estimatedEndTimeHasBeenSet(false),
    m_latestEndTimeHasBeenSet(false),
    m_actualEndTimeHasBeenSet(false),
    m_taskInstanceStatusHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_shardKeyHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_userUinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome BaselineTaskInstanceDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("BaselineInstanceId") && !value["BaselineInstanceId"].IsNull())
    {
        if (!value["BaselineInstanceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.BaselineInstanceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_baselineInstanceId = value["BaselineInstanceId"].GetInt64();
        m_baselineInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("BaselineType") && !value["BaselineType"].IsNull())
    {
        if (!value["BaselineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.BaselineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baselineType = string(value["BaselineType"].GetString());
        m_baselineTypeHasBeenSet = true;
    }

    if (value.HasMember("BaselineDataTime") && !value["BaselineDataTime"].IsNull())
    {
        if (!value["BaselineDataTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.BaselineDataTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baselineDataTime = string(value["BaselineDataTime"].GetString());
        m_baselineDataTimeHasBeenSet = true;
    }

    if (value.HasMember("UpstreamInstanceIds") && !value["UpstreamInstanceIds"].IsNull())
    {
        if (!value["UpstreamInstanceIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.UpstreamInstanceIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamInstanceIds = string(value["UpstreamInstanceIds"].GetString());
        m_upstreamInstanceIdsHasBeenSet = true;
    }

    if (value.HasMember("DownstreamInstanceIds") && !value["DownstreamInstanceIds"].IsNull())
    {
        if (!value["DownstreamInstanceIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.DownstreamInstanceIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downstreamInstanceIds = string(value["DownstreamInstanceIds"].GetString());
        m_downstreamInstanceIdsHasBeenSet = true;
    }

    if (value.HasMember("IsPromiseTask") && !value["IsPromiseTask"].IsNull())
    {
        if (!value["IsPromiseTask"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.IsPromiseTask` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPromiseTask = value["IsPromiseTask"].GetBool();
        m_isPromiseTaskHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("CurRunDate") && !value["CurRunDate"].IsNull())
    {
        if (!value["CurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.CurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunDate = string(value["CurRunDate"].GetString());
        m_curRunDateHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("InCriticalPath") && !value["InCriticalPath"].IsNull())
    {
        if (!value["InCriticalPath"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.InCriticalPath` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inCriticalPath = value["InCriticalPath"].GetInt64();
        m_inCriticalPathHasBeenSet = true;
    }

    if (value.HasMember("InFirstLevel") && !value["InFirstLevel"].IsNull())
    {
        if (!value["InFirstLevel"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.InFirstLevel` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_inFirstLevel = value["InFirstLevel"].GetBool();
        m_inFirstLevelHasBeenSet = true;
    }

    if (value.HasMember("EstimatedCostTime") && !value["EstimatedCostTime"].IsNull())
    {
        if (!value["EstimatedCostTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.EstimatedCostTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_estimatedCostTime = value["EstimatedCostTime"].GetInt64();
        m_estimatedCostTimeHasBeenSet = true;
    }

    if (value.HasMember("ActualCostTime") && !value["ActualCostTime"].IsNull())
    {
        if (!value["ActualCostTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.ActualCostTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actualCostTime = value["ActualCostTime"].GetInt64();
        m_actualCostTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestStartTime") && !value["LatestStartTime"].IsNull())
    {
        if (!value["LatestStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.LatestStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestStartTime = string(value["LatestStartTime"].GetString());
        m_latestStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ActualStartTime") && !value["ActualStartTime"].IsNull())
    {
        if (!value["ActualStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.ActualStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actualStartTime = string(value["ActualStartTime"].GetString());
        m_actualStartTimeHasBeenSet = true;
    }

    if (value.HasMember("EstimatedEndTime") && !value["EstimatedEndTime"].IsNull())
    {
        if (!value["EstimatedEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.EstimatedEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_estimatedEndTime = string(value["EstimatedEndTime"].GetString());
        m_estimatedEndTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestEndTime") && !value["LatestEndTime"].IsNull())
    {
        if (!value["LatestEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.LatestEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestEndTime = string(value["LatestEndTime"].GetString());
        m_latestEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ActualEndTime") && !value["ActualEndTime"].IsNull())
    {
        if (!value["ActualEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.ActualEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actualEndTime = string(value["ActualEndTime"].GetString());
        m_actualEndTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskInstanceStatus") && !value["TaskInstanceStatus"].IsNull())
    {
        if (!value["TaskInstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.TaskInstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskInstanceStatus = string(value["TaskInstanceStatus"].GetString());
        m_taskInstanceStatusHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ShardKey") && !value["ShardKey"].IsNull())
    {
        if (!value["ShardKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.ShardKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardKey = string(value["ShardKey"].GetString());
        m_shardKeyHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("UserUin") && !value["UserUin"].IsNull())
    {
        if (!value["UserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.UserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = string(value["UserUin"].GetString());
        m_userUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInstanceDto.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineTaskInstanceDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_baselineInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baselineInstanceId, allocator);
    }

    if (m_baselineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baselineType.c_str(), allocator).Move(), allocator);
    }

    if (m_baselineDataTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineDataTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baselineDataTime.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamInstanceIds.c_str(), allocator).Move(), allocator);
    }

    if (m_downstreamInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownstreamInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downstreamInstanceIds.c_str(), allocator).Move(), allocator);
    }

    if (m_isPromiseTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPromiseTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPromiseTask, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_inCriticalPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCriticalPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inCriticalPath, allocator);
    }

    if (m_inFirstLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InFirstLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inFirstLevel, allocator);
    }

    if (m_estimatedCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstimatedCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_estimatedCostTime, allocator);
    }

    if (m_actualCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActualCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actualCostTime, allocator);
    }

    if (m_latestStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_actualStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActualStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actualStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_estimatedEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstimatedEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_estimatedEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_actualEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActualEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actualEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskInstanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskInstanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_shardKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardKey.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

}


int64_t BaselineTaskInstanceDto::GetId() const
{
    return m_id;
}

void BaselineTaskInstanceDto::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BaselineTaskInstanceDto::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t BaselineTaskInstanceDto::GetBaselineInstanceId() const
{
    return m_baselineInstanceId;
}

void BaselineTaskInstanceDto::SetBaselineInstanceId(const int64_t& _baselineInstanceId)
{
    m_baselineInstanceId = _baselineInstanceId;
    m_baselineInstanceIdHasBeenSet = true;
}

bool BaselineTaskInstanceDto::BaselineInstanceIdHasBeenSet() const
{
    return m_baselineInstanceIdHasBeenSet;
}

string BaselineTaskInstanceDto::GetBaselineType() const
{
    return m_baselineType;
}

void BaselineTaskInstanceDto::SetBaselineType(const string& _baselineType)
{
    m_baselineType = _baselineType;
    m_baselineTypeHasBeenSet = true;
}

bool BaselineTaskInstanceDto::BaselineTypeHasBeenSet() const
{
    return m_baselineTypeHasBeenSet;
}

string BaselineTaskInstanceDto::GetBaselineDataTime() const
{
    return m_baselineDataTime;
}

void BaselineTaskInstanceDto::SetBaselineDataTime(const string& _baselineDataTime)
{
    m_baselineDataTime = _baselineDataTime;
    m_baselineDataTimeHasBeenSet = true;
}

bool BaselineTaskInstanceDto::BaselineDataTimeHasBeenSet() const
{
    return m_baselineDataTimeHasBeenSet;
}

string BaselineTaskInstanceDto::GetUpstreamInstanceIds() const
{
    return m_upstreamInstanceIds;
}

void BaselineTaskInstanceDto::SetUpstreamInstanceIds(const string& _upstreamInstanceIds)
{
    m_upstreamInstanceIds = _upstreamInstanceIds;
    m_upstreamInstanceIdsHasBeenSet = true;
}

bool BaselineTaskInstanceDto::UpstreamInstanceIdsHasBeenSet() const
{
    return m_upstreamInstanceIdsHasBeenSet;
}

string BaselineTaskInstanceDto::GetDownstreamInstanceIds() const
{
    return m_downstreamInstanceIds;
}

void BaselineTaskInstanceDto::SetDownstreamInstanceIds(const string& _downstreamInstanceIds)
{
    m_downstreamInstanceIds = _downstreamInstanceIds;
    m_downstreamInstanceIdsHasBeenSet = true;
}

bool BaselineTaskInstanceDto::DownstreamInstanceIdsHasBeenSet() const
{
    return m_downstreamInstanceIdsHasBeenSet;
}

bool BaselineTaskInstanceDto::GetIsPromiseTask() const
{
    return m_isPromiseTask;
}

void BaselineTaskInstanceDto::SetIsPromiseTask(const bool& _isPromiseTask)
{
    m_isPromiseTask = _isPromiseTask;
    m_isPromiseTaskHasBeenSet = true;
}

bool BaselineTaskInstanceDto::IsPromiseTaskHasBeenSet() const
{
    return m_isPromiseTaskHasBeenSet;
}

string BaselineTaskInstanceDto::GetTaskId() const
{
    return m_taskId;
}

void BaselineTaskInstanceDto::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool BaselineTaskInstanceDto::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string BaselineTaskInstanceDto::GetCurRunDate() const
{
    return m_curRunDate;
}

void BaselineTaskInstanceDto::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool BaselineTaskInstanceDto::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string BaselineTaskInstanceDto::GetTaskName() const
{
    return m_taskName;
}

void BaselineTaskInstanceDto::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool BaselineTaskInstanceDto::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

int64_t BaselineTaskInstanceDto::GetInCriticalPath() const
{
    return m_inCriticalPath;
}

void BaselineTaskInstanceDto::SetInCriticalPath(const int64_t& _inCriticalPath)
{
    m_inCriticalPath = _inCriticalPath;
    m_inCriticalPathHasBeenSet = true;
}

bool BaselineTaskInstanceDto::InCriticalPathHasBeenSet() const
{
    return m_inCriticalPathHasBeenSet;
}

bool BaselineTaskInstanceDto::GetInFirstLevel() const
{
    return m_inFirstLevel;
}

void BaselineTaskInstanceDto::SetInFirstLevel(const bool& _inFirstLevel)
{
    m_inFirstLevel = _inFirstLevel;
    m_inFirstLevelHasBeenSet = true;
}

bool BaselineTaskInstanceDto::InFirstLevelHasBeenSet() const
{
    return m_inFirstLevelHasBeenSet;
}

int64_t BaselineTaskInstanceDto::GetEstimatedCostTime() const
{
    return m_estimatedCostTime;
}

void BaselineTaskInstanceDto::SetEstimatedCostTime(const int64_t& _estimatedCostTime)
{
    m_estimatedCostTime = _estimatedCostTime;
    m_estimatedCostTimeHasBeenSet = true;
}

bool BaselineTaskInstanceDto::EstimatedCostTimeHasBeenSet() const
{
    return m_estimatedCostTimeHasBeenSet;
}

int64_t BaselineTaskInstanceDto::GetActualCostTime() const
{
    return m_actualCostTime;
}

void BaselineTaskInstanceDto::SetActualCostTime(const int64_t& _actualCostTime)
{
    m_actualCostTime = _actualCostTime;
    m_actualCostTimeHasBeenSet = true;
}

bool BaselineTaskInstanceDto::ActualCostTimeHasBeenSet() const
{
    return m_actualCostTimeHasBeenSet;
}

string BaselineTaskInstanceDto::GetLatestStartTime() const
{
    return m_latestStartTime;
}

void BaselineTaskInstanceDto::SetLatestStartTime(const string& _latestStartTime)
{
    m_latestStartTime = _latestStartTime;
    m_latestStartTimeHasBeenSet = true;
}

bool BaselineTaskInstanceDto::LatestStartTimeHasBeenSet() const
{
    return m_latestStartTimeHasBeenSet;
}

string BaselineTaskInstanceDto::GetActualStartTime() const
{
    return m_actualStartTime;
}

void BaselineTaskInstanceDto::SetActualStartTime(const string& _actualStartTime)
{
    m_actualStartTime = _actualStartTime;
    m_actualStartTimeHasBeenSet = true;
}

bool BaselineTaskInstanceDto::ActualStartTimeHasBeenSet() const
{
    return m_actualStartTimeHasBeenSet;
}

string BaselineTaskInstanceDto::GetEstimatedEndTime() const
{
    return m_estimatedEndTime;
}

void BaselineTaskInstanceDto::SetEstimatedEndTime(const string& _estimatedEndTime)
{
    m_estimatedEndTime = _estimatedEndTime;
    m_estimatedEndTimeHasBeenSet = true;
}

bool BaselineTaskInstanceDto::EstimatedEndTimeHasBeenSet() const
{
    return m_estimatedEndTimeHasBeenSet;
}

string BaselineTaskInstanceDto::GetLatestEndTime() const
{
    return m_latestEndTime;
}

void BaselineTaskInstanceDto::SetLatestEndTime(const string& _latestEndTime)
{
    m_latestEndTime = _latestEndTime;
    m_latestEndTimeHasBeenSet = true;
}

bool BaselineTaskInstanceDto::LatestEndTimeHasBeenSet() const
{
    return m_latestEndTimeHasBeenSet;
}

string BaselineTaskInstanceDto::GetActualEndTime() const
{
    return m_actualEndTime;
}

void BaselineTaskInstanceDto::SetActualEndTime(const string& _actualEndTime)
{
    m_actualEndTime = _actualEndTime;
    m_actualEndTimeHasBeenSet = true;
}

bool BaselineTaskInstanceDto::ActualEndTimeHasBeenSet() const
{
    return m_actualEndTimeHasBeenSet;
}

string BaselineTaskInstanceDto::GetTaskInstanceStatus() const
{
    return m_taskInstanceStatus;
}

void BaselineTaskInstanceDto::SetTaskInstanceStatus(const string& _taskInstanceStatus)
{
    m_taskInstanceStatus = _taskInstanceStatus;
    m_taskInstanceStatusHasBeenSet = true;
}

bool BaselineTaskInstanceDto::TaskInstanceStatusHasBeenSet() const
{
    return m_taskInstanceStatusHasBeenSet;
}

string BaselineTaskInstanceDto::GetProjectId() const
{
    return m_projectId;
}

void BaselineTaskInstanceDto::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BaselineTaskInstanceDto::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string BaselineTaskInstanceDto::GetShardKey() const
{
    return m_shardKey;
}

void BaselineTaskInstanceDto::SetShardKey(const string& _shardKey)
{
    m_shardKey = _shardKey;
    m_shardKeyHasBeenSet = true;
}

bool BaselineTaskInstanceDto::ShardKeyHasBeenSet() const
{
    return m_shardKeyHasBeenSet;
}

string BaselineTaskInstanceDto::GetCreateTime() const
{
    return m_createTime;
}

void BaselineTaskInstanceDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BaselineTaskInstanceDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BaselineTaskInstanceDto::GetUpdateTime() const
{
    return m_updateTime;
}

void BaselineTaskInstanceDto::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool BaselineTaskInstanceDto::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string BaselineTaskInstanceDto::GetUserUin() const
{
    return m_userUin;
}

void BaselineTaskInstanceDto::SetUserUin(const string& _userUin)
{
    m_userUin = _userUin;
    m_userUinHasBeenSet = true;
}

bool BaselineTaskInstanceDto::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

string BaselineTaskInstanceDto::GetOwnerUin() const
{
    return m_ownerUin;
}

void BaselineTaskInstanceDto::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool BaselineTaskInstanceDto::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string BaselineTaskInstanceDto::GetAppId() const
{
    return m_appId;
}

void BaselineTaskInstanceDto::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool BaselineTaskInstanceDto::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

