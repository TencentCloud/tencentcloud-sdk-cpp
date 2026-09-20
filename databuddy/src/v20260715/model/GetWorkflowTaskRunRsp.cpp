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

#include <tencentcloud/databuddy/v20260715/model/GetWorkflowTaskRunRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

GetWorkflowTaskRunRsp::GetWorkflowTaskRunRsp() :
    m_taskNameHasBeenSet(false),
    m_workflowTaskRunIdHasBeenSet(false),
    m_runStateHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowRunIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskTypeNameHasBeenSet(false),
    m_taskVersionIdHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_errorCodeStringHasBeenSet(false),
    m_runUserUinHasBeenSet(false),
    m_runUserNameHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_dependenceFinishedTimeHasBeenSet(false),
    m_runStartTimeHasBeenSet(false),
    m_runEndTimeHasBeenSet(false),
    m_runCostTimeHasBeenSet(false),
    m_waitTimeHasBeenSet(false),
    m_issueTimeHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_dependOnListHasBeenSet(false),
    m_runParamsHasBeenSet(false),
    m_taskTypeExtensionsHasBeenSet(false),
    m_leftCoordinateHasBeenSet(false),
    m_topCoordinateHasBeenSet(false),
    m_retryTimesHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_rerunTimesHasBeenSet(false),
    m_isLatestRunHasBeenSet(false),
    m_resourceGroupInfoListHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_runResultHasBeenSet(false),
    m_innerWorkflowTaskRunHasBeenSet(false),
    m_scheduledTimeHasBeenSet(false)
{
}

CoreInternalOutcome GetWorkflowTaskRunRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowTaskRunId") && !value["WorkflowTaskRunId"].IsNull())
    {
        if (!value["WorkflowTaskRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.WorkflowTaskRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowTaskRunId = string(value["WorkflowTaskRunId"].GetString());
        m_workflowTaskRunIdHasBeenSet = true;
    }

    if (value.HasMember("RunState") && !value["RunState"].IsNull())
    {
        if (!value["RunState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.RunState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runState = string(value["RunState"].GetString());
        m_runStateHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.WorkspaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = string(value["WorkspaceId"].GetString());
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowRunId") && !value["WorkflowRunId"].IsNull())
    {
        if (!value["WorkflowRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.WorkflowRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowRunId = string(value["WorkflowRunId"].GetString());
        m_workflowRunIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeName") && !value["TaskTypeName"].IsNull())
    {
        if (!value["TaskTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.TaskTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeName = string(value["TaskTypeName"].GetString());
        m_taskTypeNameHasBeenSet = true;
    }

    if (value.HasMember("TaskVersionId") && !value["TaskVersionId"].IsNull())
    {
        if (!value["TaskVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.TaskVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskVersionId = string(value["TaskVersionId"].GetString());
        m_taskVersionIdHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.TriggerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = string(value["TriggerType"].GetString());
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ErrorCodeString") && !value["ErrorCodeString"].IsNull())
    {
        if (!value["ErrorCodeString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.ErrorCodeString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCodeString = string(value["ErrorCodeString"].GetString());
        m_errorCodeStringHasBeenSet = true;
    }

    if (value.HasMember("RunUserUin") && !value["RunUserUin"].IsNull())
    {
        if (!value["RunUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.RunUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runUserUin = string(value["RunUserUin"].GetString());
        m_runUserUinHasBeenSet = true;
    }

    if (value.HasMember("RunUserName") && !value["RunUserName"].IsNull())
    {
        if (!value["RunUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.RunUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runUserName = string(value["RunUserName"].GetString());
        m_runUserNameHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DependenceFinishedTime") && !value["DependenceFinishedTime"].IsNull())
    {
        if (!value["DependenceFinishedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.DependenceFinishedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependenceFinishedTime = string(value["DependenceFinishedTime"].GetString());
        m_dependenceFinishedTimeHasBeenSet = true;
    }

    if (value.HasMember("RunStartTime") && !value["RunStartTime"].IsNull())
    {
        if (!value["RunStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.RunStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runStartTime = string(value["RunStartTime"].GetString());
        m_runStartTimeHasBeenSet = true;
    }

    if (value.HasMember("RunEndTime") && !value["RunEndTime"].IsNull())
    {
        if (!value["RunEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.RunEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runEndTime = string(value["RunEndTime"].GetString());
        m_runEndTimeHasBeenSet = true;
    }

    if (value.HasMember("RunCostTime") && !value["RunCostTime"].IsNull())
    {
        if (!value["RunCostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.RunCostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runCostTime = string(value["RunCostTime"].GetString());
        m_runCostTimeHasBeenSet = true;
    }

    if (value.HasMember("WaitTime") && !value["WaitTime"].IsNull())
    {
        if (!value["WaitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.WaitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_waitTime = string(value["WaitTime"].GetString());
        m_waitTimeHasBeenSet = true;
    }

    if (value.HasMember("IssueTime") && !value["IssueTime"].IsNull())
    {
        if (!value["IssueTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.IssueTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueTime = string(value["IssueTime"].GetString());
        m_issueTimeHasBeenSet = true;
    }

    if (value.HasMember("TimeZone") && !value["TimeZone"].IsNull())
    {
        if (!value["TimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.TimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeZone = string(value["TimeZone"].GetString());
        m_timeZoneHasBeenSet = true;
    }

    if (value.HasMember("DependOnList") && !value["DependOnList"].IsNull())
    {
        if (!value["DependOnList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.DependOnList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.RunParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runParams = string(value["RunParams"].GetString());
        m_runParamsHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeExtensions") && !value["TaskTypeExtensions"].IsNull())
    {
        if (!value["TaskTypeExtensions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.TaskTypeExtensions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeExtensions = string(value["TaskTypeExtensions"].GetString());
        m_taskTypeExtensionsHasBeenSet = true;
    }

    if (value.HasMember("LeftCoordinate") && !value["LeftCoordinate"].IsNull())
    {
        if (!value["LeftCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.LeftCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_leftCoordinate = value["LeftCoordinate"].GetDouble();
        m_leftCoordinateHasBeenSet = true;
    }

    if (value.HasMember("TopCoordinate") && !value["TopCoordinate"].IsNull())
    {
        if (!value["TopCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.TopCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_topCoordinate = value["TopCoordinate"].GetDouble();
        m_topCoordinateHasBeenSet = true;
    }

    if (value.HasMember("RetryTimes") && !value["RetryTimes"].IsNull())
    {
        if (!value["RetryTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.RetryTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryTimes = value["RetryTimes"].GetInt64();
        m_retryTimesHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("RerunTimes") && !value["RerunTimes"].IsNull())
    {
        if (!value["RerunTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.RerunTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rerunTimes = value["RerunTimes"].GetInt64();
        m_rerunTimesHasBeenSet = true;
    }

    if (value.HasMember("IsLatestRun") && !value["IsLatestRun"].IsNull())
    {
        if (!value["IsLatestRun"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.IsLatestRun` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLatestRun = value["IsLatestRun"].GetBool();
        m_isLatestRunHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupInfoList") && !value["ResourceGroupInfoList"].IsNull())
    {
        if (!value["ResourceGroupInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.ResourceGroupInfoList` is not array type"));

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

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("RunResult") && !value["RunResult"].IsNull())
    {
        if (!value["RunResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.RunResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runResult = string(value["RunResult"].GetString());
        m_runResultHasBeenSet = true;
    }

    if (value.HasMember("InnerWorkflowTaskRun") && !value["InnerWorkflowTaskRun"].IsNull())
    {
        if (!value["InnerWorkflowTaskRun"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.InnerWorkflowTaskRun` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_innerWorkflowTaskRun.Deserialize(value["InnerWorkflowTaskRun"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_innerWorkflowTaskRunHasBeenSet = true;
    }

    if (value.HasMember("ScheduledTime") && !value["ScheduledTime"].IsNull())
    {
        if (!value["ScheduledTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetWorkflowTaskRunRsp.ScheduledTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduledTime = string(value["ScheduledTime"].GetString());
        m_scheduledTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GetWorkflowTaskRunRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowTaskRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowTaskRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowTaskRunId.c_str(), allocator).Move(), allocator);
    }

    if (m_runStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runState.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
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

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTypeName.c_str(), allocator).Move(), allocator);
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

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCodeString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCodeString.c_str(), allocator).Move(), allocator);
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

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
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

    if (m_runStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runCostTime.c_str(), allocator).Move(), allocator);
    }

    if (m_waitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_waitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_issueTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueTime.c_str(), allocator).Move(), allocator);
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

    if (m_retryTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryTimes, allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_rerunTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RerunTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rerunTimes, allocator);
    }

    if (m_isLatestRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLatestRun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLatestRun, allocator);
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

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_runResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runResult.c_str(), allocator).Move(), allocator);
    }

    if (m_innerWorkflowTaskRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerWorkflowTaskRun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_innerWorkflowTaskRun.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scheduledTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduledTime.c_str(), allocator).Move(), allocator);
    }

}


string GetWorkflowTaskRunRsp::GetTaskName() const
{
    return m_taskName;
}

void GetWorkflowTaskRunRsp::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetWorkflowTaskRunId() const
{
    return m_workflowTaskRunId;
}

void GetWorkflowTaskRunRsp::SetWorkflowTaskRunId(const string& _workflowTaskRunId)
{
    m_workflowTaskRunId = _workflowTaskRunId;
    m_workflowTaskRunIdHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::WorkflowTaskRunIdHasBeenSet() const
{
    return m_workflowTaskRunIdHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetRunState() const
{
    return m_runState;
}

void GetWorkflowTaskRunRsp::SetRunState(const string& _runState)
{
    m_runState = _runState;
    m_runStateHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::RunStateHasBeenSet() const
{
    return m_runStateHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetWorkspaceId() const
{
    return m_workspaceId;
}

void GetWorkflowTaskRunRsp::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetWorkflowId() const
{
    return m_workflowId;
}

void GetWorkflowTaskRunRsp::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetWorkflowRunId() const
{
    return m_workflowRunId;
}

void GetWorkflowTaskRunRsp::SetWorkflowRunId(const string& _workflowRunId)
{
    m_workflowRunId = _workflowRunId;
    m_workflowRunIdHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::WorkflowRunIdHasBeenSet() const
{
    return m_workflowRunIdHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetTaskId() const
{
    return m_taskId;
}

void GetWorkflowTaskRunRsp::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetTaskTypeName() const
{
    return m_taskTypeName;
}

void GetWorkflowTaskRunRsp::SetTaskTypeName(const string& _taskTypeName)
{
    m_taskTypeName = _taskTypeName;
    m_taskTypeNameHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::TaskTypeNameHasBeenSet() const
{
    return m_taskTypeNameHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetTaskVersionId() const
{
    return m_taskVersionId;
}

void GetWorkflowTaskRunRsp::SetTaskVersionId(const string& _taskVersionId)
{
    m_taskVersionId = _taskVersionId;
    m_taskVersionIdHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::TaskVersionIdHasBeenSet() const
{
    return m_taskVersionIdHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetTriggerType() const
{
    return m_triggerType;
}

void GetWorkflowTaskRunRsp::SetTriggerType(const string& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void GetWorkflowTaskRunRsp::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetErrorCodeString() const
{
    return m_errorCodeString;
}

void GetWorkflowTaskRunRsp::SetErrorCodeString(const string& _errorCodeString)
{
    m_errorCodeString = _errorCodeString;
    m_errorCodeStringHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::ErrorCodeStringHasBeenSet() const
{
    return m_errorCodeStringHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetRunUserUin() const
{
    return m_runUserUin;
}

void GetWorkflowTaskRunRsp::SetRunUserUin(const string& _runUserUin)
{
    m_runUserUin = _runUserUin;
    m_runUserUinHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::RunUserUinHasBeenSet() const
{
    return m_runUserUinHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetRunUserName() const
{
    return m_runUserName;
}

void GetWorkflowTaskRunRsp::SetRunUserName(const string& _runUserName)
{
    m_runUserName = _runUserName;
    m_runUserNameHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::RunUserNameHasBeenSet() const
{
    return m_runUserNameHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetCreateUserUin() const
{
    return m_createUserUin;
}

void GetWorkflowTaskRunRsp::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetJobId() const
{
    return m_jobId;
}

void GetWorkflowTaskRunRsp::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetCreateTime() const
{
    return m_createTime;
}

void GetWorkflowTaskRunRsp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetUpdateTime() const
{
    return m_updateTime;
}

void GetWorkflowTaskRunRsp::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetDependenceFinishedTime() const
{
    return m_dependenceFinishedTime;
}

void GetWorkflowTaskRunRsp::SetDependenceFinishedTime(const string& _dependenceFinishedTime)
{
    m_dependenceFinishedTime = _dependenceFinishedTime;
    m_dependenceFinishedTimeHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::DependenceFinishedTimeHasBeenSet() const
{
    return m_dependenceFinishedTimeHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetRunStartTime() const
{
    return m_runStartTime;
}

void GetWorkflowTaskRunRsp::SetRunStartTime(const string& _runStartTime)
{
    m_runStartTime = _runStartTime;
    m_runStartTimeHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::RunStartTimeHasBeenSet() const
{
    return m_runStartTimeHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetRunEndTime() const
{
    return m_runEndTime;
}

void GetWorkflowTaskRunRsp::SetRunEndTime(const string& _runEndTime)
{
    m_runEndTime = _runEndTime;
    m_runEndTimeHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::RunEndTimeHasBeenSet() const
{
    return m_runEndTimeHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetRunCostTime() const
{
    return m_runCostTime;
}

void GetWorkflowTaskRunRsp::SetRunCostTime(const string& _runCostTime)
{
    m_runCostTime = _runCostTime;
    m_runCostTimeHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::RunCostTimeHasBeenSet() const
{
    return m_runCostTimeHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetWaitTime() const
{
    return m_waitTime;
}

void GetWorkflowTaskRunRsp::SetWaitTime(const string& _waitTime)
{
    m_waitTime = _waitTime;
    m_waitTimeHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::WaitTimeHasBeenSet() const
{
    return m_waitTimeHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetIssueTime() const
{
    return m_issueTime;
}

void GetWorkflowTaskRunRsp::SetIssueTime(const string& _issueTime)
{
    m_issueTime = _issueTime;
    m_issueTimeHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::IssueTimeHasBeenSet() const
{
    return m_issueTimeHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetTimeZone() const
{
    return m_timeZone;
}

void GetWorkflowTaskRunRsp::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

vector<string> GetWorkflowTaskRunRsp::GetDependOnList() const
{
    return m_dependOnList;
}

void GetWorkflowTaskRunRsp::SetDependOnList(const vector<string>& _dependOnList)
{
    m_dependOnList = _dependOnList;
    m_dependOnListHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::DependOnListHasBeenSet() const
{
    return m_dependOnListHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetRunParams() const
{
    return m_runParams;
}

void GetWorkflowTaskRunRsp::SetRunParams(const string& _runParams)
{
    m_runParams = _runParams;
    m_runParamsHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::RunParamsHasBeenSet() const
{
    return m_runParamsHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetTaskTypeExtensions() const
{
    return m_taskTypeExtensions;
}

void GetWorkflowTaskRunRsp::SetTaskTypeExtensions(const string& _taskTypeExtensions)
{
    m_taskTypeExtensions = _taskTypeExtensions;
    m_taskTypeExtensionsHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::TaskTypeExtensionsHasBeenSet() const
{
    return m_taskTypeExtensionsHasBeenSet;
}

double GetWorkflowTaskRunRsp::GetLeftCoordinate() const
{
    return m_leftCoordinate;
}

void GetWorkflowTaskRunRsp::SetLeftCoordinate(const double& _leftCoordinate)
{
    m_leftCoordinate = _leftCoordinate;
    m_leftCoordinateHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::LeftCoordinateHasBeenSet() const
{
    return m_leftCoordinateHasBeenSet;
}

double GetWorkflowTaskRunRsp::GetTopCoordinate() const
{
    return m_topCoordinate;
}

void GetWorkflowTaskRunRsp::SetTopCoordinate(const double& _topCoordinate)
{
    m_topCoordinate = _topCoordinate;
    m_topCoordinateHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::TopCoordinateHasBeenSet() const
{
    return m_topCoordinateHasBeenSet;
}

int64_t GetWorkflowTaskRunRsp::GetRetryTimes() const
{
    return m_retryTimes;
}

void GetWorkflowTaskRunRsp::SetRetryTimes(const int64_t& _retryTimes)
{
    m_retryTimes = _retryTimes;
    m_retryTimesHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::RetryTimesHasBeenSet() const
{
    return m_retryTimesHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetWorkflowName() const
{
    return m_workflowName;
}

void GetWorkflowTaskRunRsp::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

int64_t GetWorkflowTaskRunRsp::GetRerunTimes() const
{
    return m_rerunTimes;
}

void GetWorkflowTaskRunRsp::SetRerunTimes(const int64_t& _rerunTimes)
{
    m_rerunTimes = _rerunTimes;
    m_rerunTimesHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::RerunTimesHasBeenSet() const
{
    return m_rerunTimesHasBeenSet;
}

bool GetWorkflowTaskRunRsp::GetIsLatestRun() const
{
    return m_isLatestRun;
}

void GetWorkflowTaskRunRsp::SetIsLatestRun(const bool& _isLatestRun)
{
    m_isLatestRun = _isLatestRun;
    m_isLatestRunHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::IsLatestRunHasBeenSet() const
{
    return m_isLatestRunHasBeenSet;
}

vector<ResourceGroupInfo> GetWorkflowTaskRunRsp::GetResourceGroupInfoList() const
{
    return m_resourceGroupInfoList;
}

void GetWorkflowTaskRunRsp::SetResourceGroupInfoList(const vector<ResourceGroupInfo>& _resourceGroupInfoList)
{
    m_resourceGroupInfoList = _resourceGroupInfoList;
    m_resourceGroupInfoListHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::ResourceGroupInfoListHasBeenSet() const
{
    return m_resourceGroupInfoListHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetErrorMessage() const
{
    return m_errorMessage;
}

void GetWorkflowTaskRunRsp::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetRunResult() const
{
    return m_runResult;
}

void GetWorkflowTaskRunRsp::SetRunResult(const string& _runResult)
{
    m_runResult = _runResult;
    m_runResultHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::RunResultHasBeenSet() const
{
    return m_runResultHasBeenSet;
}

InnerWorkflowTaskRun GetWorkflowTaskRunRsp::GetInnerWorkflowTaskRun() const
{
    return m_innerWorkflowTaskRun;
}

void GetWorkflowTaskRunRsp::SetInnerWorkflowTaskRun(const InnerWorkflowTaskRun& _innerWorkflowTaskRun)
{
    m_innerWorkflowTaskRun = _innerWorkflowTaskRun;
    m_innerWorkflowTaskRunHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::InnerWorkflowTaskRunHasBeenSet() const
{
    return m_innerWorkflowTaskRunHasBeenSet;
}

string GetWorkflowTaskRunRsp::GetScheduledTime() const
{
    return m_scheduledTime;
}

void GetWorkflowTaskRunRsp::SetScheduledTime(const string& _scheduledTime)
{
    m_scheduledTime = _scheduledTime;
    m_scheduledTimeHasBeenSet = true;
}

bool GetWorkflowTaskRunRsp::ScheduledTimeHasBeenSet() const
{
    return m_scheduledTimeHasBeenSet;
}

