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

#include <tencentcloud/wedata/v20210820/model/TaskCycleLinkDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskCycleLinkDTO::TaskCycleLinkDTO() :
    m_idHasBeenSet(false),
    m_taskFromHasBeenSet(false),
    m_taskFromProjectIdHasBeenSet(false),
    m_taskFromWorkflowIdHasBeenSet(false),
    m_taskToHasBeenSet(false),
    m_taskToProjectIdHasBeenSet(false),
    m_taskToWorkflowIdHasBeenSet(false),
    m_taskToInfoHasBeenSet(false),
    m_mainCyclicConfigHasBeenSet(false),
    m_subordinateCyclicConfigHasBeenSet(false),
    m_dependencyStrategyHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_updateUserIdHasBeenSet(false),
    m_createUserIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_ownerUserIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome TaskCycleLinkDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCycleLinkDTO.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TaskFrom") && !value["TaskFrom"].IsNull())
    {
        if (!value["TaskFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCycleLinkDTO.TaskFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskFrom = string(value["TaskFrom"].GetString());
        m_taskFromHasBeenSet = true;
    }

    if (value.HasMember("TaskFromProjectId") && !value["TaskFromProjectId"].IsNull())
    {
        if (!value["TaskFromProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCycleLinkDTO.TaskFromProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskFromProjectId = string(value["TaskFromProjectId"].GetString());
        m_taskFromProjectIdHasBeenSet = true;
    }

    if (value.HasMember("TaskFromWorkflowId") && !value["TaskFromWorkflowId"].IsNull())
    {
        if (!value["TaskFromWorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCycleLinkDTO.TaskFromWorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskFromWorkflowId = string(value["TaskFromWorkflowId"].GetString());
        m_taskFromWorkflowIdHasBeenSet = true;
    }

    if (value.HasMember("TaskTo") && !value["TaskTo"].IsNull())
    {
        if (!value["TaskTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCycleLinkDTO.TaskTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTo = string(value["TaskTo"].GetString());
        m_taskToHasBeenSet = true;
    }

    if (value.HasMember("TaskToProjectId") && !value["TaskToProjectId"].IsNull())
    {
        if (!value["TaskToProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCycleLinkDTO.TaskToProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskToProjectId = string(value["TaskToProjectId"].GetString());
        m_taskToProjectIdHasBeenSet = true;
    }

    if (value.HasMember("TaskToWorkflowId") && !value["TaskToWorkflowId"].IsNull())
    {
        if (!value["TaskToWorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCycleLinkDTO.TaskToWorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskToWorkflowId = string(value["TaskToWorkflowId"].GetString());
        m_taskToWorkflowIdHasBeenSet = true;
    }

    if (value.HasMember("TaskToInfo") && !value["TaskToInfo"].IsNull())
    {
        if (!value["TaskToInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCycleLinkDTO.TaskToInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskToInfo.Deserialize(value["TaskToInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskToInfoHasBeenSet = true;
    }

    if (value.HasMember("MainCyclicConfig") && !value["MainCyclicConfig"].IsNull())
    {
        if (!value["MainCyclicConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCycleLinkDTO.MainCyclicConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainCyclicConfig = string(value["MainCyclicConfig"].GetString());
        m_mainCyclicConfigHasBeenSet = true;
    }

    if (value.HasMember("SubordinateCyclicConfig") && !value["SubordinateCyclicConfig"].IsNull())
    {
        if (!value["SubordinateCyclicConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCycleLinkDTO.SubordinateCyclicConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subordinateCyclicConfig = string(value["SubordinateCyclicConfig"].GetString());
        m_subordinateCyclicConfigHasBeenSet = true;
    }

    if (value.HasMember("DependencyStrategy") && !value["DependencyStrategy"].IsNull())
    {
        if (!value["DependencyStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCycleLinkDTO.DependencyStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyStrategy = string(value["DependencyStrategy"].GetString());
        m_dependencyStrategyHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCycleLinkDTO.Offset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offset = string(value["Offset"].GetString());
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("UpdateUserId") && !value["UpdateUserId"].IsNull())
    {
        if (!value["UpdateUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCycleLinkDTO.UpdateUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUserId = string(value["UpdateUserId"].GetString());
        m_updateUserIdHasBeenSet = true;
    }

    if (value.HasMember("CreateUserId") && !value["CreateUserId"].IsNull())
    {
        if (!value["CreateUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCycleLinkDTO.CreateUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserId = string(value["CreateUserId"].GetString());
        m_createUserIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCycleLinkDTO.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUserId") && !value["OwnerUserId"].IsNull())
    {
        if (!value["OwnerUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCycleLinkDTO.OwnerUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUserId = string(value["OwnerUserId"].GetString());
        m_ownerUserIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCycleLinkDTO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCycleLinkDTO.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskCycleLinkDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_taskFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_taskFromProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFromProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskFromProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskFromWorkflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFromWorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskFromWorkflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTo.c_str(), allocator).Move(), allocator);
    }

    if (m_taskToProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskToProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskToProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskToWorkflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskToWorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskToWorkflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskToInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskToInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskToInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mainCyclicConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainCyclicConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainCyclicConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_subordinateCyclicConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubordinateCyclicConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subordinateCyclicConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependencyStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offset.c_str(), allocator).Move(), allocator);
    }

    if (m_updateUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUserId.c_str(), allocator).Move(), allocator);
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

}


string TaskCycleLinkDTO::GetId() const
{
    return m_id;
}

void TaskCycleLinkDTO::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TaskCycleLinkDTO::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string TaskCycleLinkDTO::GetTaskFrom() const
{
    return m_taskFrom;
}

void TaskCycleLinkDTO::SetTaskFrom(const string& _taskFrom)
{
    m_taskFrom = _taskFrom;
    m_taskFromHasBeenSet = true;
}

bool TaskCycleLinkDTO::TaskFromHasBeenSet() const
{
    return m_taskFromHasBeenSet;
}

string TaskCycleLinkDTO::GetTaskFromProjectId() const
{
    return m_taskFromProjectId;
}

void TaskCycleLinkDTO::SetTaskFromProjectId(const string& _taskFromProjectId)
{
    m_taskFromProjectId = _taskFromProjectId;
    m_taskFromProjectIdHasBeenSet = true;
}

bool TaskCycleLinkDTO::TaskFromProjectIdHasBeenSet() const
{
    return m_taskFromProjectIdHasBeenSet;
}

string TaskCycleLinkDTO::GetTaskFromWorkflowId() const
{
    return m_taskFromWorkflowId;
}

void TaskCycleLinkDTO::SetTaskFromWorkflowId(const string& _taskFromWorkflowId)
{
    m_taskFromWorkflowId = _taskFromWorkflowId;
    m_taskFromWorkflowIdHasBeenSet = true;
}

bool TaskCycleLinkDTO::TaskFromWorkflowIdHasBeenSet() const
{
    return m_taskFromWorkflowIdHasBeenSet;
}

string TaskCycleLinkDTO::GetTaskTo() const
{
    return m_taskTo;
}

void TaskCycleLinkDTO::SetTaskTo(const string& _taskTo)
{
    m_taskTo = _taskTo;
    m_taskToHasBeenSet = true;
}

bool TaskCycleLinkDTO::TaskToHasBeenSet() const
{
    return m_taskToHasBeenSet;
}

string TaskCycleLinkDTO::GetTaskToProjectId() const
{
    return m_taskToProjectId;
}

void TaskCycleLinkDTO::SetTaskToProjectId(const string& _taskToProjectId)
{
    m_taskToProjectId = _taskToProjectId;
    m_taskToProjectIdHasBeenSet = true;
}

bool TaskCycleLinkDTO::TaskToProjectIdHasBeenSet() const
{
    return m_taskToProjectIdHasBeenSet;
}

string TaskCycleLinkDTO::GetTaskToWorkflowId() const
{
    return m_taskToWorkflowId;
}

void TaskCycleLinkDTO::SetTaskToWorkflowId(const string& _taskToWorkflowId)
{
    m_taskToWorkflowId = _taskToWorkflowId;
    m_taskToWorkflowIdHasBeenSet = true;
}

bool TaskCycleLinkDTO::TaskToWorkflowIdHasBeenSet() const
{
    return m_taskToWorkflowIdHasBeenSet;
}

TaskDsDTO TaskCycleLinkDTO::GetTaskToInfo() const
{
    return m_taskToInfo;
}

void TaskCycleLinkDTO::SetTaskToInfo(const TaskDsDTO& _taskToInfo)
{
    m_taskToInfo = _taskToInfo;
    m_taskToInfoHasBeenSet = true;
}

bool TaskCycleLinkDTO::TaskToInfoHasBeenSet() const
{
    return m_taskToInfoHasBeenSet;
}

string TaskCycleLinkDTO::GetMainCyclicConfig() const
{
    return m_mainCyclicConfig;
}

void TaskCycleLinkDTO::SetMainCyclicConfig(const string& _mainCyclicConfig)
{
    m_mainCyclicConfig = _mainCyclicConfig;
    m_mainCyclicConfigHasBeenSet = true;
}

bool TaskCycleLinkDTO::MainCyclicConfigHasBeenSet() const
{
    return m_mainCyclicConfigHasBeenSet;
}

string TaskCycleLinkDTO::GetSubordinateCyclicConfig() const
{
    return m_subordinateCyclicConfig;
}

void TaskCycleLinkDTO::SetSubordinateCyclicConfig(const string& _subordinateCyclicConfig)
{
    m_subordinateCyclicConfig = _subordinateCyclicConfig;
    m_subordinateCyclicConfigHasBeenSet = true;
}

bool TaskCycleLinkDTO::SubordinateCyclicConfigHasBeenSet() const
{
    return m_subordinateCyclicConfigHasBeenSet;
}

string TaskCycleLinkDTO::GetDependencyStrategy() const
{
    return m_dependencyStrategy;
}

void TaskCycleLinkDTO::SetDependencyStrategy(const string& _dependencyStrategy)
{
    m_dependencyStrategy = _dependencyStrategy;
    m_dependencyStrategyHasBeenSet = true;
}

bool TaskCycleLinkDTO::DependencyStrategyHasBeenSet() const
{
    return m_dependencyStrategyHasBeenSet;
}

string TaskCycleLinkDTO::GetOffset() const
{
    return m_offset;
}

void TaskCycleLinkDTO::SetOffset(const string& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool TaskCycleLinkDTO::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string TaskCycleLinkDTO::GetUpdateUserId() const
{
    return m_updateUserId;
}

void TaskCycleLinkDTO::SetUpdateUserId(const string& _updateUserId)
{
    m_updateUserId = _updateUserId;
    m_updateUserIdHasBeenSet = true;
}

bool TaskCycleLinkDTO::UpdateUserIdHasBeenSet() const
{
    return m_updateUserIdHasBeenSet;
}

string TaskCycleLinkDTO::GetCreateUserId() const
{
    return m_createUserId;
}

void TaskCycleLinkDTO::SetCreateUserId(const string& _createUserId)
{
    m_createUserId = _createUserId;
    m_createUserIdHasBeenSet = true;
}

bool TaskCycleLinkDTO::CreateUserIdHasBeenSet() const
{
    return m_createUserIdHasBeenSet;
}

string TaskCycleLinkDTO::GetAppId() const
{
    return m_appId;
}

void TaskCycleLinkDTO::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool TaskCycleLinkDTO::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string TaskCycleLinkDTO::GetOwnerUserId() const
{
    return m_ownerUserId;
}

void TaskCycleLinkDTO::SetOwnerUserId(const string& _ownerUserId)
{
    m_ownerUserId = _ownerUserId;
    m_ownerUserIdHasBeenSet = true;
}

bool TaskCycleLinkDTO::OwnerUserIdHasBeenSet() const
{
    return m_ownerUserIdHasBeenSet;
}

string TaskCycleLinkDTO::GetCreateTime() const
{
    return m_createTime;
}

void TaskCycleLinkDTO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskCycleLinkDTO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskCycleLinkDTO::GetUpdateTime() const
{
    return m_updateTime;
}

void TaskCycleLinkDTO::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TaskCycleLinkDTO::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

