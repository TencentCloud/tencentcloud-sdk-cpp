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

#include <tencentcloud/wedata/v20210820/model/IntegrationTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

IntegrationTaskInfo::IntegrationTaskInfo() :
    m_taskNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_syncTypeHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_scheduleTaskIdHasBeenSet(false),
    m_taskGroupIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_operatorUinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_executorIdHasBeenSet(false),
    m_configHasBeenSet(false),
    m_extConfigHasBeenSet(false),
    m_executeContextHasBeenSet(false),
    m_mappingsHasBeenSet(false),
    m_taskModeHasBeenSet(false),
    m_inchargeHasBeenSet(false),
    m_offlineTaskAddEntityHasBeenSet(false),
    m_executorGroupNameHasBeenSet(false),
    m_inLongManagerUrlHasBeenSet(false),
    m_inLongStreamIdHasBeenSet(false),
    m_inLongManagerVersionHasBeenSet(false)
{
}

CoreInternalOutcome IntegrationTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("SyncType") && !value["SyncType"].IsNull())
    {
        if (!value["SyncType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.SyncType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_syncType = value["SyncType"].GetInt64();
        m_syncTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.TaskType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetInt64();
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("ScheduleTaskId") && !value["ScheduleTaskId"].IsNull())
    {
        if (!value["ScheduleTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.ScheduleTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTaskId = string(value["ScheduleTaskId"].GetString());
        m_scheduleTaskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupId") && !value["TaskGroupId"].IsNull())
    {
        if (!value["TaskGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.TaskGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupId = string(value["TaskGroupId"].GetString());
        m_taskGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("OperatorUin") && !value["OperatorUin"].IsNull())
    {
        if (!value["OperatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.OperatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorUin = string(value["OperatorUin"].GetString());
        m_operatorUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Nodes") && !value["Nodes"].IsNull())
    {
        if (!value["Nodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.Nodes` is not array type"));

        const rapidjson::Value &tmpValue = value["Nodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IntegrationNodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodes.push_back(item);
        }
        m_nodesHasBeenSet = true;
    }

    if (value.HasMember("ExecutorId") && !value["ExecutorId"].IsNull())
    {
        if (!value["ExecutorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.ExecutorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorId = string(value["ExecutorId"].GetString());
        m_executorIdHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.Config` is not array type"));

        const rapidjson::Value &tmpValue = value["Config"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecordField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_config.push_back(item);
        }
        m_configHasBeenSet = true;
    }

    if (value.HasMember("ExtConfig") && !value["ExtConfig"].IsNull())
    {
        if (!value["ExtConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.ExtConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecordField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extConfig.push_back(item);
        }
        m_extConfigHasBeenSet = true;
    }

    if (value.HasMember("ExecuteContext") && !value["ExecuteContext"].IsNull())
    {
        if (!value["ExecuteContext"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.ExecuteContext` is not array type"));

        const rapidjson::Value &tmpValue = value["ExecuteContext"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecordField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_executeContext.push_back(item);
        }
        m_executeContextHasBeenSet = true;
    }

    if (value.HasMember("Mappings") && !value["Mappings"].IsNull())
    {
        if (!value["Mappings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.Mappings` is not array type"));

        const rapidjson::Value &tmpValue = value["Mappings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IntegrationNodeMapping item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mappings.push_back(item);
        }
        m_mappingsHasBeenSet = true;
    }

    if (value.HasMember("TaskMode") && !value["TaskMode"].IsNull())
    {
        if (!value["TaskMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.TaskMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskMode = string(value["TaskMode"].GetString());
        m_taskModeHasBeenSet = true;
    }

    if (value.HasMember("Incharge") && !value["Incharge"].IsNull())
    {
        if (!value["Incharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.Incharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incharge = string(value["Incharge"].GetString());
        m_inchargeHasBeenSet = true;
    }

    if (value.HasMember("OfflineTaskAddEntity") && !value["OfflineTaskAddEntity"].IsNull())
    {
        if (!value["OfflineTaskAddEntity"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.OfflineTaskAddEntity` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_offlineTaskAddEntity.Deserialize(value["OfflineTaskAddEntity"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_offlineTaskAddEntityHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupName") && !value["ExecutorGroupName"].IsNull())
    {
        if (!value["ExecutorGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.ExecutorGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupName = string(value["ExecutorGroupName"].GetString());
        m_executorGroupNameHasBeenSet = true;
    }

    if (value.HasMember("InLongManagerUrl") && !value["InLongManagerUrl"].IsNull())
    {
        if (!value["InLongManagerUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.InLongManagerUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inLongManagerUrl = string(value["InLongManagerUrl"].GetString());
        m_inLongManagerUrlHasBeenSet = true;
    }

    if (value.HasMember("InLongStreamId") && !value["InLongStreamId"].IsNull())
    {
        if (!value["InLongStreamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.InLongStreamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inLongStreamId = string(value["InLongStreamId"].GetString());
        m_inLongStreamIdHasBeenSet = true;
    }

    if (value.HasMember("InLongManagerVersion") && !value["InLongManagerVersion"].IsNull())
    {
        if (!value["InLongManagerVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.InLongManagerVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inLongManagerVersion = string(value["InLongManagerVersion"].GetString());
        m_inLongManagerVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntegrationTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_syncTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncType, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskType, allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorUin.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_nodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodes.begin(); itr != m_nodes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_executorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorId.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_config.begin(); itr != m_config.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_extConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extConfig.begin(); itr != m_extConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_executeContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_executeContext.begin(); itr != m_executeContext.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mappingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mappings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mappings.begin(); itr != m_mappings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskMode.c_str(), allocator).Move(), allocator);
    }

    if (m_inchargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Incharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_incharge.c_str(), allocator).Move(), allocator);
    }

    if (m_offlineTaskAddEntityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineTaskAddEntity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_offlineTaskAddEntity.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_executorGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_inLongManagerUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InLongManagerUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inLongManagerUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_inLongStreamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InLongStreamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inLongStreamId.c_str(), allocator).Move(), allocator);
    }

    if (m_inLongManagerVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InLongManagerVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inLongManagerVersion.c_str(), allocator).Move(), allocator);
    }

}


string IntegrationTaskInfo::GetTaskName() const
{
    return m_taskName;
}

void IntegrationTaskInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool IntegrationTaskInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string IntegrationTaskInfo::GetDescription() const
{
    return m_description;
}

void IntegrationTaskInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool IntegrationTaskInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t IntegrationTaskInfo::GetSyncType() const
{
    return m_syncType;
}

void IntegrationTaskInfo::SetSyncType(const int64_t& _syncType)
{
    m_syncType = _syncType;
    m_syncTypeHasBeenSet = true;
}

bool IntegrationTaskInfo::SyncTypeHasBeenSet() const
{
    return m_syncTypeHasBeenSet;
}

int64_t IntegrationTaskInfo::GetTaskType() const
{
    return m_taskType;
}

void IntegrationTaskInfo::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool IntegrationTaskInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string IntegrationTaskInfo::GetWorkflowId() const
{
    return m_workflowId;
}

void IntegrationTaskInfo::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool IntegrationTaskInfo::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string IntegrationTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void IntegrationTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool IntegrationTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string IntegrationTaskInfo::GetScheduleTaskId() const
{
    return m_scheduleTaskId;
}

void IntegrationTaskInfo::SetScheduleTaskId(const string& _scheduleTaskId)
{
    m_scheduleTaskId = _scheduleTaskId;
    m_scheduleTaskIdHasBeenSet = true;
}

bool IntegrationTaskInfo::ScheduleTaskIdHasBeenSet() const
{
    return m_scheduleTaskIdHasBeenSet;
}

string IntegrationTaskInfo::GetTaskGroupId() const
{
    return m_taskGroupId;
}

void IntegrationTaskInfo::SetTaskGroupId(const string& _taskGroupId)
{
    m_taskGroupId = _taskGroupId;
    m_taskGroupIdHasBeenSet = true;
}

bool IntegrationTaskInfo::TaskGroupIdHasBeenSet() const
{
    return m_taskGroupIdHasBeenSet;
}

string IntegrationTaskInfo::GetProjectId() const
{
    return m_projectId;
}

void IntegrationTaskInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool IntegrationTaskInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string IntegrationTaskInfo::GetCreatorUin() const
{
    return m_creatorUin;
}

void IntegrationTaskInfo::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool IntegrationTaskInfo::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string IntegrationTaskInfo::GetOperatorUin() const
{
    return m_operatorUin;
}

void IntegrationTaskInfo::SetOperatorUin(const string& _operatorUin)
{
    m_operatorUin = _operatorUin;
    m_operatorUinHasBeenSet = true;
}

bool IntegrationTaskInfo::OperatorUinHasBeenSet() const
{
    return m_operatorUinHasBeenSet;
}

string IntegrationTaskInfo::GetOwnerUin() const
{
    return m_ownerUin;
}

void IntegrationTaskInfo::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool IntegrationTaskInfo::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string IntegrationTaskInfo::GetAppId() const
{
    return m_appId;
}

void IntegrationTaskInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool IntegrationTaskInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t IntegrationTaskInfo::GetStatus() const
{
    return m_status;
}

void IntegrationTaskInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IntegrationTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<IntegrationNodeInfo> IntegrationTaskInfo::GetNodes() const
{
    return m_nodes;
}

void IntegrationTaskInfo::SetNodes(const vector<IntegrationNodeInfo>& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool IntegrationTaskInfo::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

string IntegrationTaskInfo::GetExecutorId() const
{
    return m_executorId;
}

void IntegrationTaskInfo::SetExecutorId(const string& _executorId)
{
    m_executorId = _executorId;
    m_executorIdHasBeenSet = true;
}

bool IntegrationTaskInfo::ExecutorIdHasBeenSet() const
{
    return m_executorIdHasBeenSet;
}

vector<RecordField> IntegrationTaskInfo::GetConfig() const
{
    return m_config;
}

void IntegrationTaskInfo::SetConfig(const vector<RecordField>& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool IntegrationTaskInfo::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

vector<RecordField> IntegrationTaskInfo::GetExtConfig() const
{
    return m_extConfig;
}

void IntegrationTaskInfo::SetExtConfig(const vector<RecordField>& _extConfig)
{
    m_extConfig = _extConfig;
    m_extConfigHasBeenSet = true;
}

bool IntegrationTaskInfo::ExtConfigHasBeenSet() const
{
    return m_extConfigHasBeenSet;
}

vector<RecordField> IntegrationTaskInfo::GetExecuteContext() const
{
    return m_executeContext;
}

void IntegrationTaskInfo::SetExecuteContext(const vector<RecordField>& _executeContext)
{
    m_executeContext = _executeContext;
    m_executeContextHasBeenSet = true;
}

bool IntegrationTaskInfo::ExecuteContextHasBeenSet() const
{
    return m_executeContextHasBeenSet;
}

vector<IntegrationNodeMapping> IntegrationTaskInfo::GetMappings() const
{
    return m_mappings;
}

void IntegrationTaskInfo::SetMappings(const vector<IntegrationNodeMapping>& _mappings)
{
    m_mappings = _mappings;
    m_mappingsHasBeenSet = true;
}

bool IntegrationTaskInfo::MappingsHasBeenSet() const
{
    return m_mappingsHasBeenSet;
}

string IntegrationTaskInfo::GetTaskMode() const
{
    return m_taskMode;
}

void IntegrationTaskInfo::SetTaskMode(const string& _taskMode)
{
    m_taskMode = _taskMode;
    m_taskModeHasBeenSet = true;
}

bool IntegrationTaskInfo::TaskModeHasBeenSet() const
{
    return m_taskModeHasBeenSet;
}

string IntegrationTaskInfo::GetIncharge() const
{
    return m_incharge;
}

void IntegrationTaskInfo::SetIncharge(const string& _incharge)
{
    m_incharge = _incharge;
    m_inchargeHasBeenSet = true;
}

bool IntegrationTaskInfo::InchargeHasBeenSet() const
{
    return m_inchargeHasBeenSet;
}

OfflineTaskAddParam IntegrationTaskInfo::GetOfflineTaskAddEntity() const
{
    return m_offlineTaskAddEntity;
}

void IntegrationTaskInfo::SetOfflineTaskAddEntity(const OfflineTaskAddParam& _offlineTaskAddEntity)
{
    m_offlineTaskAddEntity = _offlineTaskAddEntity;
    m_offlineTaskAddEntityHasBeenSet = true;
}

bool IntegrationTaskInfo::OfflineTaskAddEntityHasBeenSet() const
{
    return m_offlineTaskAddEntityHasBeenSet;
}

string IntegrationTaskInfo::GetExecutorGroupName() const
{
    return m_executorGroupName;
}

void IntegrationTaskInfo::SetExecutorGroupName(const string& _executorGroupName)
{
    m_executorGroupName = _executorGroupName;
    m_executorGroupNameHasBeenSet = true;
}

bool IntegrationTaskInfo::ExecutorGroupNameHasBeenSet() const
{
    return m_executorGroupNameHasBeenSet;
}

string IntegrationTaskInfo::GetInLongManagerUrl() const
{
    return m_inLongManagerUrl;
}

void IntegrationTaskInfo::SetInLongManagerUrl(const string& _inLongManagerUrl)
{
    m_inLongManagerUrl = _inLongManagerUrl;
    m_inLongManagerUrlHasBeenSet = true;
}

bool IntegrationTaskInfo::InLongManagerUrlHasBeenSet() const
{
    return m_inLongManagerUrlHasBeenSet;
}

string IntegrationTaskInfo::GetInLongStreamId() const
{
    return m_inLongStreamId;
}

void IntegrationTaskInfo::SetInLongStreamId(const string& _inLongStreamId)
{
    m_inLongStreamId = _inLongStreamId;
    m_inLongStreamIdHasBeenSet = true;
}

bool IntegrationTaskInfo::InLongStreamIdHasBeenSet() const
{
    return m_inLongStreamIdHasBeenSet;
}

string IntegrationTaskInfo::GetInLongManagerVersion() const
{
    return m_inLongManagerVersion;
}

void IntegrationTaskInfo::SetInLongManagerVersion(const string& _inLongManagerVersion)
{
    m_inLongManagerVersion = _inLongManagerVersion;
    m_inLongManagerVersionHasBeenSet = true;
}

bool IntegrationTaskInfo::InLongManagerVersionHasBeenSet() const
{
    return m_inLongManagerVersionHasBeenSet;
}

