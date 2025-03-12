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

#include <tencentcloud/wedata/v20210820/model/TaskInfoVo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskInfoVo::TaskInfoVo() :
    m_appIDHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_onwerUidHasBeenSet(false),
    m_inChargeIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_engineSubTypeHasBeenSet(false),
    m_engineTaskIdHasBeenSet(false),
    m_engineExeStatusHasBeenSet(false),
    m_engineExeUserHasBeenSet(false),
    m_engineExeStartTimeHasBeenSet(false),
    m_engineExeEndTimeHasBeenSet(false),
    m_productSourceHasBeenSet(false)
{
}

CoreInternalOutcome TaskInfoVo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoVo.AppID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appID = string(value["AppID"].GetString());
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoVo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoVo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoVo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeId") && !value["TaskTypeId"].IsNull())
    {
        if (!value["TaskTypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoVo.TaskTypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeId = value["TaskTypeId"].GetUint64();
        m_taskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("OnwerUid") && !value["OnwerUid"].IsNull())
    {
        if (!value["OnwerUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoVo.OnwerUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_onwerUid = string(value["OnwerUid"].GetString());
        m_onwerUidHasBeenSet = true;
    }

    if (value.HasMember("InChargeId") && !value["InChargeId"].IsNull())
    {
        if (!value["InChargeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoVo.InChargeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inChargeId = string(value["InChargeId"].GetString());
        m_inChargeIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoVo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoVo.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoVo.EngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = string(value["EngineType"].GetString());
        m_engineTypeHasBeenSet = true;
    }

    if (value.HasMember("EngineName") && !value["EngineName"].IsNull())
    {
        if (!value["EngineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoVo.EngineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineName = string(value["EngineName"].GetString());
        m_engineNameHasBeenSet = true;
    }

    if (value.HasMember("EngineSubType") && !value["EngineSubType"].IsNull())
    {
        if (!value["EngineSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoVo.EngineSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineSubType = string(value["EngineSubType"].GetString());
        m_engineSubTypeHasBeenSet = true;
    }

    if (value.HasMember("EngineTaskId") && !value["EngineTaskId"].IsNull())
    {
        if (!value["EngineTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoVo.EngineTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineTaskId = string(value["EngineTaskId"].GetString());
        m_engineTaskIdHasBeenSet = true;
    }

    if (value.HasMember("EngineExeStatus") && !value["EngineExeStatus"].IsNull())
    {
        if (!value["EngineExeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoVo.EngineExeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineExeStatus = string(value["EngineExeStatus"].GetString());
        m_engineExeStatusHasBeenSet = true;
    }

    if (value.HasMember("EngineExeUser") && !value["EngineExeUser"].IsNull())
    {
        if (!value["EngineExeUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoVo.EngineExeUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineExeUser = string(value["EngineExeUser"].GetString());
        m_engineExeUserHasBeenSet = true;
    }

    if (value.HasMember("EngineExeStartTime") && !value["EngineExeStartTime"].IsNull())
    {
        if (!value["EngineExeStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoVo.EngineExeStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineExeStartTime = string(value["EngineExeStartTime"].GetString());
        m_engineExeStartTimeHasBeenSet = true;
    }

    if (value.HasMember("EngineExeEndTime") && !value["EngineExeEndTime"].IsNull())
    {
        if (!value["EngineExeEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoVo.EngineExeEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineExeEndTime = string(value["EngineExeEndTime"].GetString());
        m_engineExeEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ProductSource") && !value["ProductSource"].IsNull())
    {
        if (!value["ProductSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoVo.ProductSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productSource = string(value["ProductSource"].GetString());
        m_productSourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskInfoVo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appID.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTypeId, allocator);
    }

    if (m_onwerUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnwerUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_onwerUid.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inChargeId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_engineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineName.c_str(), allocator).Move(), allocator);
    }

    if (m_engineSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_engineExeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineExeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineExeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_engineExeUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineExeUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineExeUser.c_str(), allocator).Move(), allocator);
    }

    if (m_engineExeStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineExeStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineExeStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_engineExeEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineExeEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineExeEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_productSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productSource.c_str(), allocator).Move(), allocator);
    }

}


string TaskInfoVo::GetAppID() const
{
    return m_appID;
}

void TaskInfoVo::SetAppID(const string& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool TaskInfoVo::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string TaskInfoVo::GetProjectId() const
{
    return m_projectId;
}

void TaskInfoVo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TaskInfoVo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TaskInfoVo::GetTaskId() const
{
    return m_taskId;
}

void TaskInfoVo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskInfoVo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskInfoVo::GetTaskName() const
{
    return m_taskName;
}

void TaskInfoVo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskInfoVo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

uint64_t TaskInfoVo::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void TaskInfoVo::SetTaskTypeId(const uint64_t& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool TaskInfoVo::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string TaskInfoVo::GetOnwerUid() const
{
    return m_onwerUid;
}

void TaskInfoVo::SetOnwerUid(const string& _onwerUid)
{
    m_onwerUid = _onwerUid;
    m_onwerUidHasBeenSet = true;
}

bool TaskInfoVo::OnwerUidHasBeenSet() const
{
    return m_onwerUidHasBeenSet;
}

string TaskInfoVo::GetInChargeId() const
{
    return m_inChargeId;
}

void TaskInfoVo::SetInChargeId(const string& _inChargeId)
{
    m_inChargeId = _inChargeId;
    m_inChargeIdHasBeenSet = true;
}

bool TaskInfoVo::InChargeIdHasBeenSet() const
{
    return m_inChargeIdHasBeenSet;
}

string TaskInfoVo::GetInstanceId() const
{
    return m_instanceId;
}

void TaskInfoVo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TaskInfoVo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string TaskInfoVo::GetJobId() const
{
    return m_jobId;
}

void TaskInfoVo::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool TaskInfoVo::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string TaskInfoVo::GetEngineType() const
{
    return m_engineType;
}

void TaskInfoVo::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool TaskInfoVo::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

string TaskInfoVo::GetEngineName() const
{
    return m_engineName;
}

void TaskInfoVo::SetEngineName(const string& _engineName)
{
    m_engineName = _engineName;
    m_engineNameHasBeenSet = true;
}

bool TaskInfoVo::EngineNameHasBeenSet() const
{
    return m_engineNameHasBeenSet;
}

string TaskInfoVo::GetEngineSubType() const
{
    return m_engineSubType;
}

void TaskInfoVo::SetEngineSubType(const string& _engineSubType)
{
    m_engineSubType = _engineSubType;
    m_engineSubTypeHasBeenSet = true;
}

bool TaskInfoVo::EngineSubTypeHasBeenSet() const
{
    return m_engineSubTypeHasBeenSet;
}

string TaskInfoVo::GetEngineTaskId() const
{
    return m_engineTaskId;
}

void TaskInfoVo::SetEngineTaskId(const string& _engineTaskId)
{
    m_engineTaskId = _engineTaskId;
    m_engineTaskIdHasBeenSet = true;
}

bool TaskInfoVo::EngineTaskIdHasBeenSet() const
{
    return m_engineTaskIdHasBeenSet;
}

string TaskInfoVo::GetEngineExeStatus() const
{
    return m_engineExeStatus;
}

void TaskInfoVo::SetEngineExeStatus(const string& _engineExeStatus)
{
    m_engineExeStatus = _engineExeStatus;
    m_engineExeStatusHasBeenSet = true;
}

bool TaskInfoVo::EngineExeStatusHasBeenSet() const
{
    return m_engineExeStatusHasBeenSet;
}

string TaskInfoVo::GetEngineExeUser() const
{
    return m_engineExeUser;
}

void TaskInfoVo::SetEngineExeUser(const string& _engineExeUser)
{
    m_engineExeUser = _engineExeUser;
    m_engineExeUserHasBeenSet = true;
}

bool TaskInfoVo::EngineExeUserHasBeenSet() const
{
    return m_engineExeUserHasBeenSet;
}

string TaskInfoVo::GetEngineExeStartTime() const
{
    return m_engineExeStartTime;
}

void TaskInfoVo::SetEngineExeStartTime(const string& _engineExeStartTime)
{
    m_engineExeStartTime = _engineExeStartTime;
    m_engineExeStartTimeHasBeenSet = true;
}

bool TaskInfoVo::EngineExeStartTimeHasBeenSet() const
{
    return m_engineExeStartTimeHasBeenSet;
}

string TaskInfoVo::GetEngineExeEndTime() const
{
    return m_engineExeEndTime;
}

void TaskInfoVo::SetEngineExeEndTime(const string& _engineExeEndTime)
{
    m_engineExeEndTime = _engineExeEndTime;
    m_engineExeEndTimeHasBeenSet = true;
}

bool TaskInfoVo::EngineExeEndTimeHasBeenSet() const
{
    return m_engineExeEndTimeHasBeenSet;
}

string TaskInfoVo::GetProductSource() const
{
    return m_productSource;
}

void TaskInfoVo::SetProductSource(const string& _productSource)
{
    m_productSource = _productSource;
    m_productSourceHasBeenSet = true;
}

bool TaskInfoVo::ProductSourceHasBeenSet() const
{
    return m_productSourceHasBeenSet;
}

