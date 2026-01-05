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

#include <tencentcloud/wedata/v20250806/model/TriggerWorkflowRunBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TriggerWorkflowRunBrief::TriggerWorkflowRunBrief() :
    m_appIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_executionIdHasBeenSet(false),
    m_triggerIdHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_executionCostTimeHasBeenSet(false),
    m_queueCostTimeHasBeenSet(false),
    m_pendingCostTimeHasBeenSet(false),
    m_executionStateHasBeenSet(false),
    m_executeUserUinHasBeenSet(false),
    m_executeUserNameHasBeenSet(false),
    m_errorCodeStrHasBeenSet(false),
    m_workflowParamsHasBeenSet(false),
    m_workflowVersionIdHasBeenSet(false),
    m_supportRerunHasBeenSet(false),
    m_rerunTimesHasBeenSet(false),
    m_selectedTaskIdsHasBeenSet(false),
    m_pendingStartTimeHasBeenSet(false),
    m_queueStartTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_plannedSchedulingTimeHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_userNameInChargeHasBeenSet(false),
    m_userUinInChargeHasBeenSet(false)
{
}

CoreInternalOutcome TriggerWorkflowRunBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutionId") && !value["ExecutionId"].IsNull())
    {
        if (!value["ExecutionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.ExecutionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionId = string(value["ExecutionId"].GetString());
        m_executionIdHasBeenSet = true;
    }

    if (value.HasMember("TriggerId") && !value["TriggerId"].IsNull())
    {
        if (!value["TriggerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.TriggerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerId = string(value["TriggerId"].GetString());
        m_triggerIdHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.TriggerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = string(value["TriggerType"].GetString());
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStartTime") && !value["ExecutionStartTime"].IsNull())
    {
        if (!value["ExecutionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.ExecutionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStartTime = string(value["ExecutionStartTime"].GetString());
        m_executionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionEndTime") && !value["ExecutionEndTime"].IsNull())
    {
        if (!value["ExecutionEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.ExecutionEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionEndTime = string(value["ExecutionEndTime"].GetString());
        m_executionEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionCostTime") && !value["ExecutionCostTime"].IsNull())
    {
        if (!value["ExecutionCostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.ExecutionCostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionCostTime = string(value["ExecutionCostTime"].GetString());
        m_executionCostTimeHasBeenSet = true;
    }

    if (value.HasMember("QueueCostTime") && !value["QueueCostTime"].IsNull())
    {
        if (!value["QueueCostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.QueueCostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueCostTime = string(value["QueueCostTime"].GetString());
        m_queueCostTimeHasBeenSet = true;
    }

    if (value.HasMember("PendingCostTime") && !value["PendingCostTime"].IsNull())
    {
        if (!value["PendingCostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.PendingCostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pendingCostTime = string(value["PendingCostTime"].GetString());
        m_pendingCostTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionState") && !value["ExecutionState"].IsNull())
    {
        if (!value["ExecutionState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.ExecutionState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionState = string(value["ExecutionState"].GetString());
        m_executionStateHasBeenSet = true;
    }

    if (value.HasMember("ExecuteUserUin") && !value["ExecuteUserUin"].IsNull())
    {
        if (!value["ExecuteUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.ExecuteUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeUserUin = string(value["ExecuteUserUin"].GetString());
        m_executeUserUinHasBeenSet = true;
    }

    if (value.HasMember("ExecuteUserName") && !value["ExecuteUserName"].IsNull())
    {
        if (!value["ExecuteUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.ExecuteUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeUserName = string(value["ExecuteUserName"].GetString());
        m_executeUserNameHasBeenSet = true;
    }

    if (value.HasMember("ErrorCodeStr") && !value["ErrorCodeStr"].IsNull())
    {
        if (!value["ErrorCodeStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.ErrorCodeStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCodeStr = string(value["ErrorCodeStr"].GetString());
        m_errorCodeStrHasBeenSet = true;
    }

    if (value.HasMember("WorkflowParams") && !value["WorkflowParams"].IsNull())
    {
        if (!value["WorkflowParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.WorkflowParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowParams = string(value["WorkflowParams"].GetString());
        m_workflowParamsHasBeenSet = true;
    }

    if (value.HasMember("WorkflowVersionId") && !value["WorkflowVersionId"].IsNull())
    {
        if (!value["WorkflowVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.WorkflowVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowVersionId = string(value["WorkflowVersionId"].GetString());
        m_workflowVersionIdHasBeenSet = true;
    }

    if (value.HasMember("SupportRerun") && !value["SupportRerun"].IsNull())
    {
        if (!value["SupportRerun"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.SupportRerun` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportRerun = value["SupportRerun"].GetBool();
        m_supportRerunHasBeenSet = true;
    }

    if (value.HasMember("RerunTimes") && !value["RerunTimes"].IsNull())
    {
        if (!value["RerunTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.RerunTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rerunTimes = value["RerunTimes"].GetUint64();
        m_rerunTimesHasBeenSet = true;
    }

    if (value.HasMember("SelectedTaskIds") && !value["SelectedTaskIds"].IsNull())
    {
        if (!value["SelectedTaskIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.SelectedTaskIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SelectedTaskIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_selectedTaskIds.push_back((*itr).GetString());
        }
        m_selectedTaskIdsHasBeenSet = true;
    }

    if (value.HasMember("PendingStartTime") && !value["PendingStartTime"].IsNull())
    {
        if (!value["PendingStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.PendingStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pendingStartTime = string(value["PendingStartTime"].GetString());
        m_pendingStartTimeHasBeenSet = true;
    }

    if (value.HasMember("QueueStartTime") && !value["QueueStartTime"].IsNull())
    {
        if (!value["QueueStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.QueueStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueStartTime = string(value["QueueStartTime"].GetString());
        m_queueStartTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("PlannedSchedulingTime") && !value["PlannedSchedulingTime"].IsNull())
    {
        if (!value["PlannedSchedulingTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.PlannedSchedulingTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plannedSchedulingTime = string(value["PlannedSchedulingTime"].GetString());
        m_plannedSchedulingTimeHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("UserNameInCharge") && !value["UserNameInCharge"].IsNull())
    {
        if (!value["UserNameInCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.UserNameInCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userNameInCharge = string(value["UserNameInCharge"].GetString());
        m_userNameInChargeHasBeenSet = true;
    }

    if (value.HasMember("UserUinInCharge") && !value["UserUinInCharge"].IsNull())
    {
        if (!value["UserUinInCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowRunBrief.UserUinInCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUinInCharge = string(value["UserUinInCharge"].GetString());
        m_userUinInChargeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerWorkflowRunBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_executionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionId.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerId.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_executionCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionCostTime.c_str(), allocator).Move(), allocator);
    }

    if (m_queueCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueCostTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pendingCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PendingCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pendingCostTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executionStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionState.c_str(), allocator).Move(), allocator);
    }

    if (m_executeUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_executeUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCodeStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCodeStr.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowParams.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_supportRerunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportRerun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportRerun, allocator);
    }

    if (m_rerunTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RerunTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rerunTimes, allocator);
    }

    if (m_selectedTaskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedTaskIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_selectedTaskIds.begin(); itr != m_selectedTaskIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pendingStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PendingStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pendingStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_queueStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
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

    if (m_plannedSchedulingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlannedSchedulingTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_plannedSchedulingTime.c_str(), allocator).Move(), allocator);
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

}


string TriggerWorkflowRunBrief::GetAppId() const
{
    return m_appId;
}

void TriggerWorkflowRunBrief::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string TriggerWorkflowRunBrief::GetProjectId() const
{
    return m_projectId;
}

void TriggerWorkflowRunBrief::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TriggerWorkflowRunBrief::GetWorkflowName() const
{
    return m_workflowName;
}

void TriggerWorkflowRunBrief::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string TriggerWorkflowRunBrief::GetWorkflowId() const
{
    return m_workflowId;
}

void TriggerWorkflowRunBrief::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string TriggerWorkflowRunBrief::GetExecutionId() const
{
    return m_executionId;
}

void TriggerWorkflowRunBrief::SetExecutionId(const string& _executionId)
{
    m_executionId = _executionId;
    m_executionIdHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::ExecutionIdHasBeenSet() const
{
    return m_executionIdHasBeenSet;
}

string TriggerWorkflowRunBrief::GetTriggerId() const
{
    return m_triggerId;
}

void TriggerWorkflowRunBrief::SetTriggerId(const string& _triggerId)
{
    m_triggerId = _triggerId;
    m_triggerIdHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::TriggerIdHasBeenSet() const
{
    return m_triggerIdHasBeenSet;
}

string TriggerWorkflowRunBrief::GetTriggerType() const
{
    return m_triggerType;
}

void TriggerWorkflowRunBrief::SetTriggerType(const string& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string TriggerWorkflowRunBrief::GetCreateTime() const
{
    return m_createTime;
}

void TriggerWorkflowRunBrief::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TriggerWorkflowRunBrief::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void TriggerWorkflowRunBrief::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string TriggerWorkflowRunBrief::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void TriggerWorkflowRunBrief::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

string TriggerWorkflowRunBrief::GetExecutionCostTime() const
{
    return m_executionCostTime;
}

void TriggerWorkflowRunBrief::SetExecutionCostTime(const string& _executionCostTime)
{
    m_executionCostTime = _executionCostTime;
    m_executionCostTimeHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::ExecutionCostTimeHasBeenSet() const
{
    return m_executionCostTimeHasBeenSet;
}

string TriggerWorkflowRunBrief::GetQueueCostTime() const
{
    return m_queueCostTime;
}

void TriggerWorkflowRunBrief::SetQueueCostTime(const string& _queueCostTime)
{
    m_queueCostTime = _queueCostTime;
    m_queueCostTimeHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::QueueCostTimeHasBeenSet() const
{
    return m_queueCostTimeHasBeenSet;
}

string TriggerWorkflowRunBrief::GetPendingCostTime() const
{
    return m_pendingCostTime;
}

void TriggerWorkflowRunBrief::SetPendingCostTime(const string& _pendingCostTime)
{
    m_pendingCostTime = _pendingCostTime;
    m_pendingCostTimeHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::PendingCostTimeHasBeenSet() const
{
    return m_pendingCostTimeHasBeenSet;
}

string TriggerWorkflowRunBrief::GetExecutionState() const
{
    return m_executionState;
}

void TriggerWorkflowRunBrief::SetExecutionState(const string& _executionState)
{
    m_executionState = _executionState;
    m_executionStateHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::ExecutionStateHasBeenSet() const
{
    return m_executionStateHasBeenSet;
}

string TriggerWorkflowRunBrief::GetExecuteUserUin() const
{
    return m_executeUserUin;
}

void TriggerWorkflowRunBrief::SetExecuteUserUin(const string& _executeUserUin)
{
    m_executeUserUin = _executeUserUin;
    m_executeUserUinHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::ExecuteUserUinHasBeenSet() const
{
    return m_executeUserUinHasBeenSet;
}

string TriggerWorkflowRunBrief::GetExecuteUserName() const
{
    return m_executeUserName;
}

void TriggerWorkflowRunBrief::SetExecuteUserName(const string& _executeUserName)
{
    m_executeUserName = _executeUserName;
    m_executeUserNameHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::ExecuteUserNameHasBeenSet() const
{
    return m_executeUserNameHasBeenSet;
}

string TriggerWorkflowRunBrief::GetErrorCodeStr() const
{
    return m_errorCodeStr;
}

void TriggerWorkflowRunBrief::SetErrorCodeStr(const string& _errorCodeStr)
{
    m_errorCodeStr = _errorCodeStr;
    m_errorCodeStrHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::ErrorCodeStrHasBeenSet() const
{
    return m_errorCodeStrHasBeenSet;
}

string TriggerWorkflowRunBrief::GetWorkflowParams() const
{
    return m_workflowParams;
}

void TriggerWorkflowRunBrief::SetWorkflowParams(const string& _workflowParams)
{
    m_workflowParams = _workflowParams;
    m_workflowParamsHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::WorkflowParamsHasBeenSet() const
{
    return m_workflowParamsHasBeenSet;
}

string TriggerWorkflowRunBrief::GetWorkflowVersionId() const
{
    return m_workflowVersionId;
}

void TriggerWorkflowRunBrief::SetWorkflowVersionId(const string& _workflowVersionId)
{
    m_workflowVersionId = _workflowVersionId;
    m_workflowVersionIdHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::WorkflowVersionIdHasBeenSet() const
{
    return m_workflowVersionIdHasBeenSet;
}

bool TriggerWorkflowRunBrief::GetSupportRerun() const
{
    return m_supportRerun;
}

void TriggerWorkflowRunBrief::SetSupportRerun(const bool& _supportRerun)
{
    m_supportRerun = _supportRerun;
    m_supportRerunHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::SupportRerunHasBeenSet() const
{
    return m_supportRerunHasBeenSet;
}

uint64_t TriggerWorkflowRunBrief::GetRerunTimes() const
{
    return m_rerunTimes;
}

void TriggerWorkflowRunBrief::SetRerunTimes(const uint64_t& _rerunTimes)
{
    m_rerunTimes = _rerunTimes;
    m_rerunTimesHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::RerunTimesHasBeenSet() const
{
    return m_rerunTimesHasBeenSet;
}

vector<string> TriggerWorkflowRunBrief::GetSelectedTaskIds() const
{
    return m_selectedTaskIds;
}

void TriggerWorkflowRunBrief::SetSelectedTaskIds(const vector<string>& _selectedTaskIds)
{
    m_selectedTaskIds = _selectedTaskIds;
    m_selectedTaskIdsHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::SelectedTaskIdsHasBeenSet() const
{
    return m_selectedTaskIdsHasBeenSet;
}

string TriggerWorkflowRunBrief::GetPendingStartTime() const
{
    return m_pendingStartTime;
}

void TriggerWorkflowRunBrief::SetPendingStartTime(const string& _pendingStartTime)
{
    m_pendingStartTime = _pendingStartTime;
    m_pendingStartTimeHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::PendingStartTimeHasBeenSet() const
{
    return m_pendingStartTimeHasBeenSet;
}

string TriggerWorkflowRunBrief::GetQueueStartTime() const
{
    return m_queueStartTime;
}

void TriggerWorkflowRunBrief::SetQueueStartTime(const string& _queueStartTime)
{
    m_queueStartTime = _queueStartTime;
    m_queueStartTimeHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::QueueStartTimeHasBeenSet() const
{
    return m_queueStartTimeHasBeenSet;
}

string TriggerWorkflowRunBrief::GetEndTime() const
{
    return m_endTime;
}

void TriggerWorkflowRunBrief::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string TriggerWorkflowRunBrief::GetFolderId() const
{
    return m_folderId;
}

void TriggerWorkflowRunBrief::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string TriggerWorkflowRunBrief::GetFolderName() const
{
    return m_folderName;
}

void TriggerWorkflowRunBrief::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string TriggerWorkflowRunBrief::GetPlannedSchedulingTime() const
{
    return m_plannedSchedulingTime;
}

void TriggerWorkflowRunBrief::SetPlannedSchedulingTime(const string& _plannedSchedulingTime)
{
    m_plannedSchedulingTime = _plannedSchedulingTime;
    m_plannedSchedulingTimeHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::PlannedSchedulingTimeHasBeenSet() const
{
    return m_plannedSchedulingTimeHasBeenSet;
}

string TriggerWorkflowRunBrief::GetCycleType() const
{
    return m_cycleType;
}

void TriggerWorkflowRunBrief::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

string TriggerWorkflowRunBrief::GetUserNameInCharge() const
{
    return m_userNameInCharge;
}

void TriggerWorkflowRunBrief::SetUserNameInCharge(const string& _userNameInCharge)
{
    m_userNameInCharge = _userNameInCharge;
    m_userNameInChargeHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::UserNameInChargeHasBeenSet() const
{
    return m_userNameInChargeHasBeenSet;
}

string TriggerWorkflowRunBrief::GetUserUinInCharge() const
{
    return m_userUinInCharge;
}

void TriggerWorkflowRunBrief::SetUserUinInCharge(const string& _userUinInCharge)
{
    m_userUinInCharge = _userUinInCharge;
    m_userUinInChargeHasBeenSet = true;
}

bool TriggerWorkflowRunBrief::UserUinInChargeHasBeenSet() const
{
    return m_userUinInChargeHasBeenSet;
}

