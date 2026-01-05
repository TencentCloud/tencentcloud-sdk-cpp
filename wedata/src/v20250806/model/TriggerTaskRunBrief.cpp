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

#include <tencentcloud/wedata/v20250806/model/TriggerTaskRunBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TriggerTaskRunBrief::TriggerTaskRunBrief() :
    m_executionIdHasBeenSet(false),
    m_executionStateHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowExecutionIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_taskVersionIdHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_waitTimeHasBeenSet(false),
    m_resourceGroupHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_executeUserUinHasBeenSet(false),
    m_createrUinHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_dependenceFinishedTimeHasBeenSet(false),
    m_queueStartTimeHasBeenSet(false),
    m_pendingStartTimeHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_queueCostTimeHasBeenSet(false),
    m_executionTimeHasBeenSet(false),
    m_allCostTimeHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_dependOnListHasBeenSet(false),
    m_runParamsHasBeenSet(false),
    m_taskTypeExtensionsHasBeenSet(false),
    m_retryTimesHasBeenSet(false),
    m_leftCoordinateHasBeenSet(false),
    m_topCoordinateHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_errorCodeStrHasBeenSet(false),
    m_createUinHasBeenSet(false),
    m_issueTimeHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_executeUserNameHasBeenSet(false),
    m_rerunTimesHasBeenSet(false),
    m_isLatestExecutionHasBeenSet(false),
    m_taskExecutionStateHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_userNameInChargeHasBeenSet(false),
    m_userUinInChargeHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_workflowParamsHasBeenSet(false),
    m_supportRerunHasBeenSet(false),
    m_workflowExecutionStateHasBeenSet(false),
    m_executionResultHasBeenSet(false)
{
}

CoreInternalOutcome TriggerTaskRunBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecutionId") && !value["ExecutionId"].IsNull())
    {
        if (!value["ExecutionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.ExecutionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionId = string(value["ExecutionId"].GetString());
        m_executionIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutionState") && !value["ExecutionState"].IsNull())
    {
        if (!value["ExecutionState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.ExecutionState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionState = string(value["ExecutionState"].GetString());
        m_executionStateHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowExecutionId") && !value["WorkflowExecutionId"].IsNull())
    {
        if (!value["WorkflowExecutionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.WorkflowExecutionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowExecutionId = string(value["WorkflowExecutionId"].GetString());
        m_workflowExecutionIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskVersionId") && !value["TaskVersionId"].IsNull())
    {
        if (!value["TaskVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.TaskVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskVersionId = string(value["TaskVersionId"].GetString());
        m_taskVersionIdHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.TriggerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = string(value["TriggerType"].GetString());
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("WaitTime") && !value["WaitTime"].IsNull())
    {
        if (!value["WaitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.WaitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_waitTime = string(value["WaitTime"].GetString());
        m_waitTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroup") && !value["ResourceGroup"].IsNull())
    {
        if (!value["ResourceGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.ResourceGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroup = string(value["ResourceGroup"].GetString());
        m_resourceGroupHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(value["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ExecuteUserUin") && !value["ExecuteUserUin"].IsNull())
    {
        if (!value["ExecuteUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.ExecuteUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeUserUin = string(value["ExecuteUserUin"].GetString());
        m_executeUserUinHasBeenSet = true;
    }

    if (value.HasMember("CreaterUin") && !value["CreaterUin"].IsNull())
    {
        if (!value["CreaterUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.CreaterUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createrUin = string(value["CreaterUin"].GetString());
        m_createrUinHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DependenceFinishedTime") && !value["DependenceFinishedTime"].IsNull())
    {
        if (!value["DependenceFinishedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.DependenceFinishedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependenceFinishedTime = string(value["DependenceFinishedTime"].GetString());
        m_dependenceFinishedTimeHasBeenSet = true;
    }

    if (value.HasMember("QueueStartTime") && !value["QueueStartTime"].IsNull())
    {
        if (!value["QueueStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.QueueStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueStartTime = string(value["QueueStartTime"].GetString());
        m_queueStartTimeHasBeenSet = true;
    }

    if (value.HasMember("PendingStartTime") && !value["PendingStartTime"].IsNull())
    {
        if (!value["PendingStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.PendingStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pendingStartTime = string(value["PendingStartTime"].GetString());
        m_pendingStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStartTime") && !value["ExecutionStartTime"].IsNull())
    {
        if (!value["ExecutionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.ExecutionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStartTime = string(value["ExecutionStartTime"].GetString());
        m_executionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionEndTime") && !value["ExecutionEndTime"].IsNull())
    {
        if (!value["ExecutionEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.ExecutionEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionEndTime = string(value["ExecutionEndTime"].GetString());
        m_executionEndTimeHasBeenSet = true;
    }

    if (value.HasMember("QueueCostTime") && !value["QueueCostTime"].IsNull())
    {
        if (!value["QueueCostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.QueueCostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueCostTime = string(value["QueueCostTime"].GetString());
        m_queueCostTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionTime") && !value["ExecutionTime"].IsNull())
    {
        if (!value["ExecutionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.ExecutionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionTime = string(value["ExecutionTime"].GetString());
        m_executionTimeHasBeenSet = true;
    }

    if (value.HasMember("AllCostTime") && !value["AllCostTime"].IsNull())
    {
        if (!value["AllCostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.AllCostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allCostTime = string(value["AllCostTime"].GetString());
        m_allCostTimeHasBeenSet = true;
    }

    if (value.HasMember("TimeZone") && !value["TimeZone"].IsNull())
    {
        if (!value["TimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.TimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeZone = string(value["TimeZone"].GetString());
        m_timeZoneHasBeenSet = true;
    }

    if (value.HasMember("DependOnList") && !value["DependOnList"].IsNull())
    {
        if (!value["DependOnList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.DependOnList` is not array type"));

        const rapidjson::Value &tmpValue = value["DependOnList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dependOnList.push_back((*itr).GetString());
        }
        m_dependOnListHasBeenSet = true;
    }

    if (value.HasMember("RunParams") && !value["RunParams"].IsNull())
    {
        if (!value["RunParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.RunParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runParams = string(value["RunParams"].GetString());
        m_runParamsHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeExtensions") && !value["TaskTypeExtensions"].IsNull())
    {
        if (!value["TaskTypeExtensions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.TaskTypeExtensions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeExtensions = string(value["TaskTypeExtensions"].GetString());
        m_taskTypeExtensionsHasBeenSet = true;
    }

    if (value.HasMember("RetryTimes") && !value["RetryTimes"].IsNull())
    {
        if (!value["RetryTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.RetryTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retryTimes = value["RetryTimes"].GetUint64();
        m_retryTimesHasBeenSet = true;
    }

    if (value.HasMember("LeftCoordinate") && !value["LeftCoordinate"].IsNull())
    {
        if (!value["LeftCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.LeftCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_leftCoordinate = value["LeftCoordinate"].GetDouble();
        m_leftCoordinateHasBeenSet = true;
    }

    if (value.HasMember("TopCoordinate") && !value["TopCoordinate"].IsNull())
    {
        if (!value["TopCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.TopCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_topCoordinate = value["TopCoordinate"].GetDouble();
        m_topCoordinateHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ErrorCodeStr") && !value["ErrorCodeStr"].IsNull())
    {
        if (!value["ErrorCodeStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.ErrorCodeStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCodeStr = string(value["ErrorCodeStr"].GetString());
        m_errorCodeStrHasBeenSet = true;
    }

    if (value.HasMember("CreateUin") && !value["CreateUin"].IsNull())
    {
        if (!value["CreateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.CreateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUin = string(value["CreateUin"].GetString());
        m_createUinHasBeenSet = true;
    }

    if (value.HasMember("IssueTime") && !value["IssueTime"].IsNull())
    {
        if (!value["IssueTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.IssueTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueTime = string(value["IssueTime"].GetString());
        m_issueTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("ExecuteUserName") && !value["ExecuteUserName"].IsNull())
    {
        if (!value["ExecuteUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.ExecuteUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeUserName = string(value["ExecuteUserName"].GetString());
        m_executeUserNameHasBeenSet = true;
    }

    if (value.HasMember("RerunTimes") && !value["RerunTimes"].IsNull())
    {
        if (!value["RerunTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.RerunTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rerunTimes = value["RerunTimes"].GetUint64();
        m_rerunTimesHasBeenSet = true;
    }

    if (value.HasMember("IsLatestExecution") && !value["IsLatestExecution"].IsNull())
    {
        if (!value["IsLatestExecution"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.IsLatestExecution` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLatestExecution = value["IsLatestExecution"].GetBool();
        m_isLatestExecutionHasBeenSet = true;
    }

    if (value.HasMember("TaskExecutionState") && !value["TaskExecutionState"].IsNull())
    {
        if (!value["TaskExecutionState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.TaskExecutionState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskExecutionState = string(value["TaskExecutionState"].GetString());
        m_taskExecutionStateHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("UserNameInCharge") && !value["UserNameInCharge"].IsNull())
    {
        if (!value["UserNameInCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.UserNameInCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userNameInCharge = string(value["UserNameInCharge"].GetString());
        m_userNameInChargeHasBeenSet = true;
    }

    if (value.HasMember("UserUinInCharge") && !value["UserUinInCharge"].IsNull())
    {
        if (!value["UserUinInCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.UserUinInCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUinInCharge = string(value["UserUinInCharge"].GetString());
        m_userUinInChargeHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Timezone") && !value["Timezone"].IsNull())
    {
        if (!value["Timezone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.Timezone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timezone = string(value["Timezone"].GetString());
        m_timezoneHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeId") && !value["TaskTypeId"].IsNull())
    {
        if (!value["TaskTypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.TaskTypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeId = value["TaskTypeId"].GetInt64();
        m_taskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowParams") && !value["WorkflowParams"].IsNull())
    {
        if (!value["WorkflowParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.WorkflowParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowParams = string(value["WorkflowParams"].GetString());
        m_workflowParamsHasBeenSet = true;
    }

    if (value.HasMember("SupportRerun") && !value["SupportRerun"].IsNull())
    {
        if (!value["SupportRerun"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.SupportRerun` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportRerun = value["SupportRerun"].GetBool();
        m_supportRerunHasBeenSet = true;
    }

    if (value.HasMember("WorkflowExecutionState") && !value["WorkflowExecutionState"].IsNull())
    {
        if (!value["WorkflowExecutionState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.WorkflowExecutionState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowExecutionState = string(value["WorkflowExecutionState"].GetString());
        m_workflowExecutionStateHasBeenSet = true;
    }

    if (value.HasMember("ExecutionResult") && !value["ExecutionResult"].IsNull())
    {
        if (!value["ExecutionResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskRunBrief.ExecutionResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionResult = string(value["ExecutionResult"].GetString());
        m_executionResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerTaskRunBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_executionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionId.c_str(), allocator).Move(), allocator);
    }

    if (m_executionStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionState.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowExecutionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowExecutionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowExecutionId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerType.c_str(), allocator).Move(), allocator);
    }

    if (m_waitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_waitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_executeUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createrUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreaterUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createrUin.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
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

    if (m_dependenceFinishedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependenceFinishedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependenceFinishedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_queueStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pendingStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PendingStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pendingStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executionStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executionEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_queueCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueCostTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_allCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allCostTime.c_str(), allocator).Move(), allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_dependOnListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependOnList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dependOnList.begin(); itr != m_dependOnList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_runParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runParams.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeExtensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeExtensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTypeExtensions.c_str(), allocator).Move(), allocator);
    }

    if (m_retryTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryTimes, allocator);
    }

    if (m_leftCoordinateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftCoordinate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftCoordinate, allocator);
    }

    if (m_topCoordinateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopCoordinate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topCoordinate, allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCodeStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCodeStr.c_str(), allocator).Move(), allocator);
    }

    if (m_createUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUin.c_str(), allocator).Move(), allocator);
    }

    if (m_issueTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_executeUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_rerunTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RerunTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rerunTimes, allocator);
    }

    if (m_isLatestExecutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLatestExecution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLatestExecution, allocator);
    }

    if (m_taskExecutionStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskExecutionState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskExecutionState.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameInChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNameInCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userNameInCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_userUinInChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUinInCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUinInCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_timezoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timezone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timezone.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_folderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTypeId, allocator);
    }

    if (m_workflowParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowParams.c_str(), allocator).Move(), allocator);
    }

    if (m_supportRerunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportRerun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportRerun, allocator);
    }

    if (m_workflowExecutionStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowExecutionState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowExecutionState.c_str(), allocator).Move(), allocator);
    }

    if (m_executionResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionResult.c_str(), allocator).Move(), allocator);
    }

}


string TriggerTaskRunBrief::GetExecutionId() const
{
    return m_executionId;
}

void TriggerTaskRunBrief::SetExecutionId(const string& _executionId)
{
    m_executionId = _executionId;
    m_executionIdHasBeenSet = true;
}

bool TriggerTaskRunBrief::ExecutionIdHasBeenSet() const
{
    return m_executionIdHasBeenSet;
}

string TriggerTaskRunBrief::GetExecutionState() const
{
    return m_executionState;
}

void TriggerTaskRunBrief::SetExecutionState(const string& _executionState)
{
    m_executionState = _executionState;
    m_executionStateHasBeenSet = true;
}

bool TriggerTaskRunBrief::ExecutionStateHasBeenSet() const
{
    return m_executionStateHasBeenSet;
}

string TriggerTaskRunBrief::GetProjectId() const
{
    return m_projectId;
}

void TriggerTaskRunBrief::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TriggerTaskRunBrief::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TriggerTaskRunBrief::GetWorkflowId() const
{
    return m_workflowId;
}

void TriggerTaskRunBrief::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool TriggerTaskRunBrief::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string TriggerTaskRunBrief::GetWorkflowExecutionId() const
{
    return m_workflowExecutionId;
}

void TriggerTaskRunBrief::SetWorkflowExecutionId(const string& _workflowExecutionId)
{
    m_workflowExecutionId = _workflowExecutionId;
    m_workflowExecutionIdHasBeenSet = true;
}

bool TriggerTaskRunBrief::WorkflowExecutionIdHasBeenSet() const
{
    return m_workflowExecutionIdHasBeenSet;
}

string TriggerTaskRunBrief::GetTaskId() const
{
    return m_taskId;
}

void TriggerTaskRunBrief::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TriggerTaskRunBrief::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TriggerTaskRunBrief::GetTaskType() const
{
    return m_taskType;
}

void TriggerTaskRunBrief::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool TriggerTaskRunBrief::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string TriggerTaskRunBrief::GetTaskVersionId() const
{
    return m_taskVersionId;
}

void TriggerTaskRunBrief::SetTaskVersionId(const string& _taskVersionId)
{
    m_taskVersionId = _taskVersionId;
    m_taskVersionIdHasBeenSet = true;
}

bool TriggerTaskRunBrief::TaskVersionIdHasBeenSet() const
{
    return m_taskVersionIdHasBeenSet;
}

string TriggerTaskRunBrief::GetTriggerType() const
{
    return m_triggerType;
}

void TriggerTaskRunBrief::SetTriggerType(const string& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool TriggerTaskRunBrief::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string TriggerTaskRunBrief::GetWaitTime() const
{
    return m_waitTime;
}

void TriggerTaskRunBrief::SetWaitTime(const string& _waitTime)
{
    m_waitTime = _waitTime;
    m_waitTimeHasBeenSet = true;
}

bool TriggerTaskRunBrief::WaitTimeHasBeenSet() const
{
    return m_waitTimeHasBeenSet;
}

string TriggerTaskRunBrief::GetResourceGroup() const
{
    return m_resourceGroup;
}

void TriggerTaskRunBrief::SetResourceGroup(const string& _resourceGroup)
{
    m_resourceGroup = _resourceGroup;
    m_resourceGroupHasBeenSet = true;
}

bool TriggerTaskRunBrief::ResourceGroupHasBeenSet() const
{
    return m_resourceGroupHasBeenSet;
}

string TriggerTaskRunBrief::GetErrorCode() const
{
    return m_errorCode;
}

void TriggerTaskRunBrief::SetErrorCode(const string& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool TriggerTaskRunBrief::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string TriggerTaskRunBrief::GetExecuteUserUin() const
{
    return m_executeUserUin;
}

void TriggerTaskRunBrief::SetExecuteUserUin(const string& _executeUserUin)
{
    m_executeUserUin = _executeUserUin;
    m_executeUserUinHasBeenSet = true;
}

bool TriggerTaskRunBrief::ExecuteUserUinHasBeenSet() const
{
    return m_executeUserUinHasBeenSet;
}

string TriggerTaskRunBrief::GetCreaterUin() const
{
    return m_createrUin;
}

void TriggerTaskRunBrief::SetCreaterUin(const string& _createrUin)
{
    m_createrUin = _createrUin;
    m_createrUinHasBeenSet = true;
}

bool TriggerTaskRunBrief::CreaterUinHasBeenSet() const
{
    return m_createrUinHasBeenSet;
}

string TriggerTaskRunBrief::GetJobId() const
{
    return m_jobId;
}

void TriggerTaskRunBrief::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool TriggerTaskRunBrief::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string TriggerTaskRunBrief::GetCreateTime() const
{
    return m_createTime;
}

void TriggerTaskRunBrief::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TriggerTaskRunBrief::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TriggerTaskRunBrief::GetUpdateTime() const
{
    return m_updateTime;
}

void TriggerTaskRunBrief::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TriggerTaskRunBrief::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TriggerTaskRunBrief::GetDependenceFinishedTime() const
{
    return m_dependenceFinishedTime;
}

void TriggerTaskRunBrief::SetDependenceFinishedTime(const string& _dependenceFinishedTime)
{
    m_dependenceFinishedTime = _dependenceFinishedTime;
    m_dependenceFinishedTimeHasBeenSet = true;
}

bool TriggerTaskRunBrief::DependenceFinishedTimeHasBeenSet() const
{
    return m_dependenceFinishedTimeHasBeenSet;
}

string TriggerTaskRunBrief::GetQueueStartTime() const
{
    return m_queueStartTime;
}

void TriggerTaskRunBrief::SetQueueStartTime(const string& _queueStartTime)
{
    m_queueStartTime = _queueStartTime;
    m_queueStartTimeHasBeenSet = true;
}

bool TriggerTaskRunBrief::QueueStartTimeHasBeenSet() const
{
    return m_queueStartTimeHasBeenSet;
}

string TriggerTaskRunBrief::GetPendingStartTime() const
{
    return m_pendingStartTime;
}

void TriggerTaskRunBrief::SetPendingStartTime(const string& _pendingStartTime)
{
    m_pendingStartTime = _pendingStartTime;
    m_pendingStartTimeHasBeenSet = true;
}

bool TriggerTaskRunBrief::PendingStartTimeHasBeenSet() const
{
    return m_pendingStartTimeHasBeenSet;
}

string TriggerTaskRunBrief::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void TriggerTaskRunBrief::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool TriggerTaskRunBrief::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string TriggerTaskRunBrief::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void TriggerTaskRunBrief::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool TriggerTaskRunBrief::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

string TriggerTaskRunBrief::GetQueueCostTime() const
{
    return m_queueCostTime;
}

void TriggerTaskRunBrief::SetQueueCostTime(const string& _queueCostTime)
{
    m_queueCostTime = _queueCostTime;
    m_queueCostTimeHasBeenSet = true;
}

bool TriggerTaskRunBrief::QueueCostTimeHasBeenSet() const
{
    return m_queueCostTimeHasBeenSet;
}

string TriggerTaskRunBrief::GetExecutionTime() const
{
    return m_executionTime;
}

void TriggerTaskRunBrief::SetExecutionTime(const string& _executionTime)
{
    m_executionTime = _executionTime;
    m_executionTimeHasBeenSet = true;
}

bool TriggerTaskRunBrief::ExecutionTimeHasBeenSet() const
{
    return m_executionTimeHasBeenSet;
}

string TriggerTaskRunBrief::GetAllCostTime() const
{
    return m_allCostTime;
}

void TriggerTaskRunBrief::SetAllCostTime(const string& _allCostTime)
{
    m_allCostTime = _allCostTime;
    m_allCostTimeHasBeenSet = true;
}

bool TriggerTaskRunBrief::AllCostTimeHasBeenSet() const
{
    return m_allCostTimeHasBeenSet;
}

string TriggerTaskRunBrief::GetTimeZone() const
{
    return m_timeZone;
}

void TriggerTaskRunBrief::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool TriggerTaskRunBrief::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

vector<string> TriggerTaskRunBrief::GetDependOnList() const
{
    return m_dependOnList;
}

void TriggerTaskRunBrief::SetDependOnList(const vector<string>& _dependOnList)
{
    m_dependOnList = _dependOnList;
    m_dependOnListHasBeenSet = true;
}

bool TriggerTaskRunBrief::DependOnListHasBeenSet() const
{
    return m_dependOnListHasBeenSet;
}

string TriggerTaskRunBrief::GetRunParams() const
{
    return m_runParams;
}

void TriggerTaskRunBrief::SetRunParams(const string& _runParams)
{
    m_runParams = _runParams;
    m_runParamsHasBeenSet = true;
}

bool TriggerTaskRunBrief::RunParamsHasBeenSet() const
{
    return m_runParamsHasBeenSet;
}

string TriggerTaskRunBrief::GetTaskTypeExtensions() const
{
    return m_taskTypeExtensions;
}

void TriggerTaskRunBrief::SetTaskTypeExtensions(const string& _taskTypeExtensions)
{
    m_taskTypeExtensions = _taskTypeExtensions;
    m_taskTypeExtensionsHasBeenSet = true;
}

bool TriggerTaskRunBrief::TaskTypeExtensionsHasBeenSet() const
{
    return m_taskTypeExtensionsHasBeenSet;
}

uint64_t TriggerTaskRunBrief::GetRetryTimes() const
{
    return m_retryTimes;
}

void TriggerTaskRunBrief::SetRetryTimes(const uint64_t& _retryTimes)
{
    m_retryTimes = _retryTimes;
    m_retryTimesHasBeenSet = true;
}

bool TriggerTaskRunBrief::RetryTimesHasBeenSet() const
{
    return m_retryTimesHasBeenSet;
}

double TriggerTaskRunBrief::GetLeftCoordinate() const
{
    return m_leftCoordinate;
}

void TriggerTaskRunBrief::SetLeftCoordinate(const double& _leftCoordinate)
{
    m_leftCoordinate = _leftCoordinate;
    m_leftCoordinateHasBeenSet = true;
}

bool TriggerTaskRunBrief::LeftCoordinateHasBeenSet() const
{
    return m_leftCoordinateHasBeenSet;
}

double TriggerTaskRunBrief::GetTopCoordinate() const
{
    return m_topCoordinate;
}

void TriggerTaskRunBrief::SetTopCoordinate(const double& _topCoordinate)
{
    m_topCoordinate = _topCoordinate;
    m_topCoordinateHasBeenSet = true;
}

bool TriggerTaskRunBrief::TopCoordinateHasBeenSet() const
{
    return m_topCoordinateHasBeenSet;
}

string TriggerTaskRunBrief::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void TriggerTaskRunBrief::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool TriggerTaskRunBrief::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string TriggerTaskRunBrief::GetErrorCodeStr() const
{
    return m_errorCodeStr;
}

void TriggerTaskRunBrief::SetErrorCodeStr(const string& _errorCodeStr)
{
    m_errorCodeStr = _errorCodeStr;
    m_errorCodeStrHasBeenSet = true;
}

bool TriggerTaskRunBrief::ErrorCodeStrHasBeenSet() const
{
    return m_errorCodeStrHasBeenSet;
}

string TriggerTaskRunBrief::GetCreateUin() const
{
    return m_createUin;
}

void TriggerTaskRunBrief::SetCreateUin(const string& _createUin)
{
    m_createUin = _createUin;
    m_createUinHasBeenSet = true;
}

bool TriggerTaskRunBrief::CreateUinHasBeenSet() const
{
    return m_createUinHasBeenSet;
}

string TriggerTaskRunBrief::GetIssueTime() const
{
    return m_issueTime;
}

void TriggerTaskRunBrief::SetIssueTime(const string& _issueTime)
{
    m_issueTime = _issueTime;
    m_issueTimeHasBeenSet = true;
}

bool TriggerTaskRunBrief::IssueTimeHasBeenSet() const
{
    return m_issueTimeHasBeenSet;
}

string TriggerTaskRunBrief::GetTaskName() const
{
    return m_taskName;
}

void TriggerTaskRunBrief::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TriggerTaskRunBrief::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TriggerTaskRunBrief::GetWorkflowName() const
{
    return m_workflowName;
}

void TriggerTaskRunBrief::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool TriggerTaskRunBrief::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string TriggerTaskRunBrief::GetExecuteUserName() const
{
    return m_executeUserName;
}

void TriggerTaskRunBrief::SetExecuteUserName(const string& _executeUserName)
{
    m_executeUserName = _executeUserName;
    m_executeUserNameHasBeenSet = true;
}

bool TriggerTaskRunBrief::ExecuteUserNameHasBeenSet() const
{
    return m_executeUserNameHasBeenSet;
}

uint64_t TriggerTaskRunBrief::GetRerunTimes() const
{
    return m_rerunTimes;
}

void TriggerTaskRunBrief::SetRerunTimes(const uint64_t& _rerunTimes)
{
    m_rerunTimes = _rerunTimes;
    m_rerunTimesHasBeenSet = true;
}

bool TriggerTaskRunBrief::RerunTimesHasBeenSet() const
{
    return m_rerunTimesHasBeenSet;
}

bool TriggerTaskRunBrief::GetIsLatestExecution() const
{
    return m_isLatestExecution;
}

void TriggerTaskRunBrief::SetIsLatestExecution(const bool& _isLatestExecution)
{
    m_isLatestExecution = _isLatestExecution;
    m_isLatestExecutionHasBeenSet = true;
}

bool TriggerTaskRunBrief::IsLatestExecutionHasBeenSet() const
{
    return m_isLatestExecutionHasBeenSet;
}

string TriggerTaskRunBrief::GetTaskExecutionState() const
{
    return m_taskExecutionState;
}

void TriggerTaskRunBrief::SetTaskExecutionState(const string& _taskExecutionState)
{
    m_taskExecutionState = _taskExecutionState;
    m_taskExecutionStateHasBeenSet = true;
}

bool TriggerTaskRunBrief::TaskExecutionStateHasBeenSet() const
{
    return m_taskExecutionStateHasBeenSet;
}

string TriggerTaskRunBrief::GetCycleType() const
{
    return m_cycleType;
}

void TriggerTaskRunBrief::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool TriggerTaskRunBrief::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

string TriggerTaskRunBrief::GetUserNameInCharge() const
{
    return m_userNameInCharge;
}

void TriggerTaskRunBrief::SetUserNameInCharge(const string& _userNameInCharge)
{
    m_userNameInCharge = _userNameInCharge;
    m_userNameInChargeHasBeenSet = true;
}

bool TriggerTaskRunBrief::UserNameInChargeHasBeenSet() const
{
    return m_userNameInChargeHasBeenSet;
}

string TriggerTaskRunBrief::GetUserUinInCharge() const
{
    return m_userUinInCharge;
}

void TriggerTaskRunBrief::SetUserUinInCharge(const string& _userUinInCharge)
{
    m_userUinInCharge = _userUinInCharge;
    m_userUinInChargeHasBeenSet = true;
}

bool TriggerTaskRunBrief::UserUinInChargeHasBeenSet() const
{
    return m_userUinInChargeHasBeenSet;
}

string TriggerTaskRunBrief::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void TriggerTaskRunBrief::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool TriggerTaskRunBrief::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

string TriggerTaskRunBrief::GetTimezone() const
{
    return m_timezone;
}

void TriggerTaskRunBrief::SetTimezone(const string& _timezone)
{
    m_timezone = _timezone;
    m_timezoneHasBeenSet = true;
}

bool TriggerTaskRunBrief::TimezoneHasBeenSet() const
{
    return m_timezoneHasBeenSet;
}

string TriggerTaskRunBrief::GetFolderId() const
{
    return m_folderId;
}

void TriggerTaskRunBrief::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool TriggerTaskRunBrief::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string TriggerTaskRunBrief::GetFolderName() const
{
    return m_folderName;
}

void TriggerTaskRunBrief::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool TriggerTaskRunBrief::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string TriggerTaskRunBrief::GetProjectName() const
{
    return m_projectName;
}

void TriggerTaskRunBrief::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool TriggerTaskRunBrief::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

int64_t TriggerTaskRunBrief::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void TriggerTaskRunBrief::SetTaskTypeId(const int64_t& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool TriggerTaskRunBrief::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string TriggerTaskRunBrief::GetWorkflowParams() const
{
    return m_workflowParams;
}

void TriggerTaskRunBrief::SetWorkflowParams(const string& _workflowParams)
{
    m_workflowParams = _workflowParams;
    m_workflowParamsHasBeenSet = true;
}

bool TriggerTaskRunBrief::WorkflowParamsHasBeenSet() const
{
    return m_workflowParamsHasBeenSet;
}

bool TriggerTaskRunBrief::GetSupportRerun() const
{
    return m_supportRerun;
}

void TriggerTaskRunBrief::SetSupportRerun(const bool& _supportRerun)
{
    m_supportRerun = _supportRerun;
    m_supportRerunHasBeenSet = true;
}

bool TriggerTaskRunBrief::SupportRerunHasBeenSet() const
{
    return m_supportRerunHasBeenSet;
}

string TriggerTaskRunBrief::GetWorkflowExecutionState() const
{
    return m_workflowExecutionState;
}

void TriggerTaskRunBrief::SetWorkflowExecutionState(const string& _workflowExecutionState)
{
    m_workflowExecutionState = _workflowExecutionState;
    m_workflowExecutionStateHasBeenSet = true;
}

bool TriggerTaskRunBrief::WorkflowExecutionStateHasBeenSet() const
{
    return m_workflowExecutionStateHasBeenSet;
}

string TriggerTaskRunBrief::GetExecutionResult() const
{
    return m_executionResult;
}

void TriggerTaskRunBrief::SetExecutionResult(const string& _executionResult)
{
    m_executionResult = _executionResult;
    m_executionResultHasBeenSet = true;
}

bool TriggerTaskRunBrief::ExecutionResultHasBeenSet() const
{
    return m_executionResultHasBeenSet;
}

