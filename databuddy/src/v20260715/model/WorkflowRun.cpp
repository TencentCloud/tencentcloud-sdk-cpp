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

#include <tencentcloud/databuddy/v20260715/model/WorkflowRun.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

WorkflowRun::WorkflowRun() :
    m_appIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowRunIdHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_runStartTimeHasBeenSet(false),
    m_pendingStartTimeHasBeenSet(false),
    m_queueStartTimeHasBeenSet(false),
    m_runEndTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_runCostTimeHasBeenSet(false),
    m_queueCostTimeHasBeenSet(false),
    m_pendingCostTimeHasBeenSet(false),
    m_runStateHasBeenSet(false),
    m_resourceGroupIdsHasBeenSet(false),
    m_runUserUinHasBeenSet(false),
    m_runUserNameHasBeenSet(false),
    m_errorCodeStringHasBeenSet(false),
    m_workflowParamsHasBeenSet(false),
    m_workflowVersionIdHasBeenSet(false),
    m_supportRerunHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_rerunTimesHasBeenSet(false),
    m_selectedTaskIdsHasBeenSet(false),
    m_resourceGroupInfoListHasBeenSet(false),
    m_labelListHasBeenSet(false),
    m_parentWorkflowRunIdHasBeenSet(false),
    m_parentWorkflowTaskRunIdHasBeenSet(false),
    m_parentWorkflowTaskRunNameHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_advancedParametersHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowRun::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowRunId") && !value["WorkflowRunId"].IsNull())
    {
        if (!value["WorkflowRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.WorkflowRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowRunId = string(value["WorkflowRunId"].GetString());
        m_workflowRunIdHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.WorkspaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = string(value["WorkspaceId"].GetString());
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.TriggerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = string(value["TriggerType"].GetString());
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("RunStartTime") && !value["RunStartTime"].IsNull())
    {
        if (!value["RunStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.RunStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runStartTime = string(value["RunStartTime"].GetString());
        m_runStartTimeHasBeenSet = true;
    }

    if (value.HasMember("PendingStartTime") && !value["PendingStartTime"].IsNull())
    {
        if (!value["PendingStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.PendingStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pendingStartTime = string(value["PendingStartTime"].GetString());
        m_pendingStartTimeHasBeenSet = true;
    }

    if (value.HasMember("QueueStartTime") && !value["QueueStartTime"].IsNull())
    {
        if (!value["QueueStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.QueueStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueStartTime = string(value["QueueStartTime"].GetString());
        m_queueStartTimeHasBeenSet = true;
    }

    if (value.HasMember("RunEndTime") && !value["RunEndTime"].IsNull())
    {
        if (!value["RunEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.RunEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runEndTime = string(value["RunEndTime"].GetString());
        m_runEndTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("RunCostTime") && !value["RunCostTime"].IsNull())
    {
        if (!value["RunCostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.RunCostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runCostTime = string(value["RunCostTime"].GetString());
        m_runCostTimeHasBeenSet = true;
    }

    if (value.HasMember("QueueCostTime") && !value["QueueCostTime"].IsNull())
    {
        if (!value["QueueCostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.QueueCostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueCostTime = string(value["QueueCostTime"].GetString());
        m_queueCostTimeHasBeenSet = true;
    }

    if (value.HasMember("PendingCostTime") && !value["PendingCostTime"].IsNull())
    {
        if (!value["PendingCostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.PendingCostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pendingCostTime = string(value["PendingCostTime"].GetString());
        m_pendingCostTimeHasBeenSet = true;
    }

    if (value.HasMember("RunState") && !value["RunState"].IsNull())
    {
        if (!value["RunState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.RunState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runState = string(value["RunState"].GetString());
        m_runStateHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupIds") && !value["ResourceGroupIds"].IsNull())
    {
        if (!value["ResourceGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.ResourceGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceGroupIds.push_back((*itr).GetString());
        }
        m_resourceGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("RunUserUin") && !value["RunUserUin"].IsNull())
    {
        if (!value["RunUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.RunUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runUserUin = string(value["RunUserUin"].GetString());
        m_runUserUinHasBeenSet = true;
    }

    if (value.HasMember("RunUserName") && !value["RunUserName"].IsNull())
    {
        if (!value["RunUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.RunUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runUserName = string(value["RunUserName"].GetString());
        m_runUserNameHasBeenSet = true;
    }

    if (value.HasMember("ErrorCodeString") && !value["ErrorCodeString"].IsNull())
    {
        if (!value["ErrorCodeString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.ErrorCodeString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCodeString = string(value["ErrorCodeString"].GetString());
        m_errorCodeStringHasBeenSet = true;
    }

    if (value.HasMember("WorkflowParams") && !value["WorkflowParams"].IsNull())
    {
        if (!value["WorkflowParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.WorkflowParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowParams = string(value["WorkflowParams"].GetString());
        m_workflowParamsHasBeenSet = true;
    }

    if (value.HasMember("WorkflowVersionId") && !value["WorkflowVersionId"].IsNull())
    {
        if (!value["WorkflowVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.WorkflowVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowVersionId = string(value["WorkflowVersionId"].GetString());
        m_workflowVersionIdHasBeenSet = true;
    }

    if (value.HasMember("SupportRerun") && !value["SupportRerun"].IsNull())
    {
        if (!value["SupportRerun"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.SupportRerun` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportRerun = value["SupportRerun"].GetBool();
        m_supportRerunHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RerunTimes") && !value["RerunTimes"].IsNull())
    {
        if (!value["RerunTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.RerunTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rerunTimes = value["RerunTimes"].GetInt64();
        m_rerunTimesHasBeenSet = true;
    }

    if (value.HasMember("SelectedTaskIds") && !value["SelectedTaskIds"].IsNull())
    {
        if (!value["SelectedTaskIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.SelectedTaskIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SelectedTaskIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_selectedTaskIds.push_back((*itr).GetString());
        }
        m_selectedTaskIdsHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupInfoList") && !value["ResourceGroupInfoList"].IsNull())
    {
        if (!value["ResourceGroupInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.ResourceGroupInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceGroupInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceGroupInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceGroupInfoList.push_back(item);
        }
        m_resourceGroupInfoListHasBeenSet = true;
    }

    if (value.HasMember("LabelList") && !value["LabelList"].IsNull())
    {
        if (!value["LabelList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.LabelList` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LabelBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labelList.push_back(item);
        }
        m_labelListHasBeenSet = true;
    }

    if (value.HasMember("ParentWorkflowRunId") && !value["ParentWorkflowRunId"].IsNull())
    {
        if (!value["ParentWorkflowRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.ParentWorkflowRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentWorkflowRunId = string(value["ParentWorkflowRunId"].GetString());
        m_parentWorkflowRunIdHasBeenSet = true;
    }

    if (value.HasMember("ParentWorkflowTaskRunId") && !value["ParentWorkflowTaskRunId"].IsNull())
    {
        if (!value["ParentWorkflowTaskRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.ParentWorkflowTaskRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentWorkflowTaskRunId = string(value["ParentWorkflowTaskRunId"].GetString());
        m_parentWorkflowTaskRunIdHasBeenSet = true;
    }

    if (value.HasMember("ParentWorkflowTaskRunName") && !value["ParentWorkflowTaskRunName"].IsNull())
    {
        if (!value["ParentWorkflowTaskRunName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.ParentWorkflowTaskRunName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentWorkflowTaskRunName = string(value["ParentWorkflowTaskRunName"].GetString());
        m_parentWorkflowTaskRunNameHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.Permission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permission = string(value["Permission"].GetString());
        m_permissionHasBeenSet = true;
    }

    if (value.HasMember("AdvancedParameters") && !value["AdvancedParameters"].IsNull())
    {
        if (!value["AdvancedParameters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowRun.AdvancedParameters` is not array type"));

        const rapidjson::Value &tmpValue = value["AdvancedParameters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AdvancedParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_advancedParameters.push_back(item);
        }
        m_advancedParametersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowRun::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
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

    if (m_workflowRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowRunId.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerType.c_str(), allocator).Move(), allocator);
    }

    if (m_runStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runStartTime.c_str(), allocator).Move(), allocator);
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

    if (m_runEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runCostTime.c_str(), allocator).Move(), allocator);
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

    if (m_runStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runState.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceGroupIds.begin(); itr != m_resourceGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_runUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_runUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCodeString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCodeString.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_resourceGroupInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceGroupInfoList.begin(); itr != m_resourceGroupInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_labelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelList.begin(); itr != m_labelList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_parentWorkflowRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentWorkflowRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentWorkflowRunId.c_str(), allocator).Move(), allocator);
    }

    if (m_parentWorkflowTaskRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentWorkflowTaskRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentWorkflowTaskRunId.c_str(), allocator).Move(), allocator);
    }

    if (m_parentWorkflowTaskRunNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentWorkflowTaskRunName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentWorkflowTaskRunName.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permission.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_advancedParameters.begin(); itr != m_advancedParameters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string WorkflowRun::GetAppId() const
{
    return m_appId;
}

void WorkflowRun::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool WorkflowRun::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string WorkflowRun::GetWorkflowName() const
{
    return m_workflowName;
}

void WorkflowRun::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool WorkflowRun::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string WorkflowRun::GetWorkflowId() const
{
    return m_workflowId;
}

void WorkflowRun::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool WorkflowRun::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string WorkflowRun::GetWorkflowRunId() const
{
    return m_workflowRunId;
}

void WorkflowRun::SetWorkflowRunId(const string& _workflowRunId)
{
    m_workflowRunId = _workflowRunId;
    m_workflowRunIdHasBeenSet = true;
}

bool WorkflowRun::WorkflowRunIdHasBeenSet() const
{
    return m_workflowRunIdHasBeenSet;
}

string WorkflowRun::GetWorkspaceId() const
{
    return m_workspaceId;
}

void WorkflowRun::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool WorkflowRun::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string WorkflowRun::GetTriggerType() const
{
    return m_triggerType;
}

void WorkflowRun::SetTriggerType(const string& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool WorkflowRun::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string WorkflowRun::GetRunStartTime() const
{
    return m_runStartTime;
}

void WorkflowRun::SetRunStartTime(const string& _runStartTime)
{
    m_runStartTime = _runStartTime;
    m_runStartTimeHasBeenSet = true;
}

bool WorkflowRun::RunStartTimeHasBeenSet() const
{
    return m_runStartTimeHasBeenSet;
}

string WorkflowRun::GetPendingStartTime() const
{
    return m_pendingStartTime;
}

void WorkflowRun::SetPendingStartTime(const string& _pendingStartTime)
{
    m_pendingStartTime = _pendingStartTime;
    m_pendingStartTimeHasBeenSet = true;
}

bool WorkflowRun::PendingStartTimeHasBeenSet() const
{
    return m_pendingStartTimeHasBeenSet;
}

string WorkflowRun::GetQueueStartTime() const
{
    return m_queueStartTime;
}

void WorkflowRun::SetQueueStartTime(const string& _queueStartTime)
{
    m_queueStartTime = _queueStartTime;
    m_queueStartTimeHasBeenSet = true;
}

bool WorkflowRun::QueueStartTimeHasBeenSet() const
{
    return m_queueStartTimeHasBeenSet;
}

string WorkflowRun::GetRunEndTime() const
{
    return m_runEndTime;
}

void WorkflowRun::SetRunEndTime(const string& _runEndTime)
{
    m_runEndTime = _runEndTime;
    m_runEndTimeHasBeenSet = true;
}

bool WorkflowRun::RunEndTimeHasBeenSet() const
{
    return m_runEndTimeHasBeenSet;
}

string WorkflowRun::GetEndTime() const
{
    return m_endTime;
}

void WorkflowRun::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool WorkflowRun::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string WorkflowRun::GetRunCostTime() const
{
    return m_runCostTime;
}

void WorkflowRun::SetRunCostTime(const string& _runCostTime)
{
    m_runCostTime = _runCostTime;
    m_runCostTimeHasBeenSet = true;
}

bool WorkflowRun::RunCostTimeHasBeenSet() const
{
    return m_runCostTimeHasBeenSet;
}

string WorkflowRun::GetQueueCostTime() const
{
    return m_queueCostTime;
}

void WorkflowRun::SetQueueCostTime(const string& _queueCostTime)
{
    m_queueCostTime = _queueCostTime;
    m_queueCostTimeHasBeenSet = true;
}

bool WorkflowRun::QueueCostTimeHasBeenSet() const
{
    return m_queueCostTimeHasBeenSet;
}

string WorkflowRun::GetPendingCostTime() const
{
    return m_pendingCostTime;
}

void WorkflowRun::SetPendingCostTime(const string& _pendingCostTime)
{
    m_pendingCostTime = _pendingCostTime;
    m_pendingCostTimeHasBeenSet = true;
}

bool WorkflowRun::PendingCostTimeHasBeenSet() const
{
    return m_pendingCostTimeHasBeenSet;
}

string WorkflowRun::GetRunState() const
{
    return m_runState;
}

void WorkflowRun::SetRunState(const string& _runState)
{
    m_runState = _runState;
    m_runStateHasBeenSet = true;
}

bool WorkflowRun::RunStateHasBeenSet() const
{
    return m_runStateHasBeenSet;
}

vector<string> WorkflowRun::GetResourceGroupIds() const
{
    return m_resourceGroupIds;
}

void WorkflowRun::SetResourceGroupIds(const vector<string>& _resourceGroupIds)
{
    m_resourceGroupIds = _resourceGroupIds;
    m_resourceGroupIdsHasBeenSet = true;
}

bool WorkflowRun::ResourceGroupIdsHasBeenSet() const
{
    return m_resourceGroupIdsHasBeenSet;
}

string WorkflowRun::GetRunUserUin() const
{
    return m_runUserUin;
}

void WorkflowRun::SetRunUserUin(const string& _runUserUin)
{
    m_runUserUin = _runUserUin;
    m_runUserUinHasBeenSet = true;
}

bool WorkflowRun::RunUserUinHasBeenSet() const
{
    return m_runUserUinHasBeenSet;
}

string WorkflowRun::GetRunUserName() const
{
    return m_runUserName;
}

void WorkflowRun::SetRunUserName(const string& _runUserName)
{
    m_runUserName = _runUserName;
    m_runUserNameHasBeenSet = true;
}

bool WorkflowRun::RunUserNameHasBeenSet() const
{
    return m_runUserNameHasBeenSet;
}

string WorkflowRun::GetErrorCodeString() const
{
    return m_errorCodeString;
}

void WorkflowRun::SetErrorCodeString(const string& _errorCodeString)
{
    m_errorCodeString = _errorCodeString;
    m_errorCodeStringHasBeenSet = true;
}

bool WorkflowRun::ErrorCodeStringHasBeenSet() const
{
    return m_errorCodeStringHasBeenSet;
}

string WorkflowRun::GetWorkflowParams() const
{
    return m_workflowParams;
}

void WorkflowRun::SetWorkflowParams(const string& _workflowParams)
{
    m_workflowParams = _workflowParams;
    m_workflowParamsHasBeenSet = true;
}

bool WorkflowRun::WorkflowParamsHasBeenSet() const
{
    return m_workflowParamsHasBeenSet;
}

string WorkflowRun::GetWorkflowVersionId() const
{
    return m_workflowVersionId;
}

void WorkflowRun::SetWorkflowVersionId(const string& _workflowVersionId)
{
    m_workflowVersionId = _workflowVersionId;
    m_workflowVersionIdHasBeenSet = true;
}

bool WorkflowRun::WorkflowVersionIdHasBeenSet() const
{
    return m_workflowVersionIdHasBeenSet;
}

bool WorkflowRun::GetSupportRerun() const
{
    return m_supportRerun;
}

void WorkflowRun::SetSupportRerun(const bool& _supportRerun)
{
    m_supportRerun = _supportRerun;
    m_supportRerunHasBeenSet = true;
}

bool WorkflowRun::SupportRerunHasBeenSet() const
{
    return m_supportRerunHasBeenSet;
}

string WorkflowRun::GetCreateTime() const
{
    return m_createTime;
}

void WorkflowRun::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WorkflowRun::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t WorkflowRun::GetRerunTimes() const
{
    return m_rerunTimes;
}

void WorkflowRun::SetRerunTimes(const int64_t& _rerunTimes)
{
    m_rerunTimes = _rerunTimes;
    m_rerunTimesHasBeenSet = true;
}

bool WorkflowRun::RerunTimesHasBeenSet() const
{
    return m_rerunTimesHasBeenSet;
}

vector<string> WorkflowRun::GetSelectedTaskIds() const
{
    return m_selectedTaskIds;
}

void WorkflowRun::SetSelectedTaskIds(const vector<string>& _selectedTaskIds)
{
    m_selectedTaskIds = _selectedTaskIds;
    m_selectedTaskIdsHasBeenSet = true;
}

bool WorkflowRun::SelectedTaskIdsHasBeenSet() const
{
    return m_selectedTaskIdsHasBeenSet;
}

vector<ResourceGroupInfo> WorkflowRun::GetResourceGroupInfoList() const
{
    return m_resourceGroupInfoList;
}

void WorkflowRun::SetResourceGroupInfoList(const vector<ResourceGroupInfo>& _resourceGroupInfoList)
{
    m_resourceGroupInfoList = _resourceGroupInfoList;
    m_resourceGroupInfoListHasBeenSet = true;
}

bool WorkflowRun::ResourceGroupInfoListHasBeenSet() const
{
    return m_resourceGroupInfoListHasBeenSet;
}

vector<LabelBrief> WorkflowRun::GetLabelList() const
{
    return m_labelList;
}

void WorkflowRun::SetLabelList(const vector<LabelBrief>& _labelList)
{
    m_labelList = _labelList;
    m_labelListHasBeenSet = true;
}

bool WorkflowRun::LabelListHasBeenSet() const
{
    return m_labelListHasBeenSet;
}

string WorkflowRun::GetParentWorkflowRunId() const
{
    return m_parentWorkflowRunId;
}

void WorkflowRun::SetParentWorkflowRunId(const string& _parentWorkflowRunId)
{
    m_parentWorkflowRunId = _parentWorkflowRunId;
    m_parentWorkflowRunIdHasBeenSet = true;
}

bool WorkflowRun::ParentWorkflowRunIdHasBeenSet() const
{
    return m_parentWorkflowRunIdHasBeenSet;
}

string WorkflowRun::GetParentWorkflowTaskRunId() const
{
    return m_parentWorkflowTaskRunId;
}

void WorkflowRun::SetParentWorkflowTaskRunId(const string& _parentWorkflowTaskRunId)
{
    m_parentWorkflowTaskRunId = _parentWorkflowTaskRunId;
    m_parentWorkflowTaskRunIdHasBeenSet = true;
}

bool WorkflowRun::ParentWorkflowTaskRunIdHasBeenSet() const
{
    return m_parentWorkflowTaskRunIdHasBeenSet;
}

string WorkflowRun::GetParentWorkflowTaskRunName() const
{
    return m_parentWorkflowTaskRunName;
}

void WorkflowRun::SetParentWorkflowTaskRunName(const string& _parentWorkflowTaskRunName)
{
    m_parentWorkflowTaskRunName = _parentWorkflowTaskRunName;
    m_parentWorkflowTaskRunNameHasBeenSet = true;
}

bool WorkflowRun::ParentWorkflowTaskRunNameHasBeenSet() const
{
    return m_parentWorkflowTaskRunNameHasBeenSet;
}

string WorkflowRun::GetPermission() const
{
    return m_permission;
}

void WorkflowRun::SetPermission(const string& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool WorkflowRun::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

vector<AdvancedParameter> WorkflowRun::GetAdvancedParameters() const
{
    return m_advancedParameters;
}

void WorkflowRun::SetAdvancedParameters(const vector<AdvancedParameter>& _advancedParameters)
{
    m_advancedParameters = _advancedParameters;
    m_advancedParametersHasBeenSet = true;
}

bool WorkflowRun::AdvancedParametersHasBeenSet() const
{
    return m_advancedParametersHasBeenSet;
}

