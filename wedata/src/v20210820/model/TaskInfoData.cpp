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

#include <tencentcloud/wedata/v20210820/model/TaskInfoData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskInfoData::TaskInfoData() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_projectIdentHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_virtualFlagHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_crontabExpressionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastUpdateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_cycleStepHasBeenSet(false),
    m_startupTimeHasBeenSet(false),
    m_retryWaitHasBeenSet(false),
    m_retriableHasBeenSet(false),
    m_taskActionHasBeenSet(false),
    m_tryLimitHasBeenSet(false),
    m_runPriorityHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_brokerIpHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_minDateTimeHasBeenSet(false),
    m_maxDateTimeHasBeenSet(false),
    m_selfDependHasBeenSet(false),
    m_taskExtHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_yarnQueueHasBeenSet(false),
    m_submitHasBeenSet(false),
    m_lastSchedulerCommitTimeHasBeenSet(false),
    m_normalizedJobStartTimeHasBeenSet(false),
    m_sourceServerHasBeenSet(false),
    m_createrHasBeenSet(false),
    m_dependencyRelHasBeenSet(false),
    m_dependencyWorkflowHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_updateUserHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_updateUserIdHasBeenSet(false),
    m_schedulerDescHasBeenSet(false),
    m_resourceGroupHasBeenSet(false),
    m_versionDescHasBeenSet(false),
    m_realWorkflowIdHasBeenSet(false),
    m_targetServerHasBeenSet(false),
    m_dependencyConfigsHasBeenSet(false),
    m_virtualTaskStatusHasBeenSet(false),
    m_virtualTaskIdHasBeenSet(false)
{
}

CoreInternalOutcome TaskInfoData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectIdent") && !value["ProjectIdent"].IsNull())
    {
        if (!value["ProjectIdent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.ProjectIdent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectIdent = string(value["ProjectIdent"].GetString());
        m_projectIdentHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("InCharge") && !value["InCharge"].IsNull())
    {
        if (!value["InCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.InCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCharge = string(value["InCharge"].GetString());
        m_inChargeHasBeenSet = true;
    }

    if (value.HasMember("VirtualFlag") && !value["VirtualFlag"].IsNull())
    {
        if (!value["VirtualFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.VirtualFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_virtualFlag = value["VirtualFlag"].GetBool();
        m_virtualFlagHasBeenSet = true;
    }

    if (value.HasMember("DelayTime") && !value["DelayTime"].IsNull())
    {
        if (!value["DelayTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.DelayTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_delayTime = value["DelayTime"].GetUint64();
        m_delayTimeHasBeenSet = true;
    }

    if (value.HasMember("CrontabExpression") && !value["CrontabExpression"].IsNull())
    {
        if (!value["CrontabExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.CrontabExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crontabExpression = string(value["CrontabExpression"].GetString());
        m_crontabExpressionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdate") && !value["LastUpdate"].IsNull())
    {
        if (!value["LastUpdate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.LastUpdate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdate = string(value["LastUpdate"].GetString());
        m_lastUpdateHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStartTime") && !value["ExecutionStartTime"].IsNull())
    {
        if (!value["ExecutionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.ExecutionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStartTime = string(value["ExecutionStartTime"].GetString());
        m_executionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionEndTime") && !value["ExecutionEndTime"].IsNull())
    {
        if (!value["ExecutionEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.ExecutionEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionEndTime = string(value["ExecutionEndTime"].GetString());
        m_executionEndTimeHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.CycleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = value["CycleType"].GetInt64();
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("CycleStep") && !value["CycleStep"].IsNull())
    {
        if (!value["CycleStep"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.CycleStep` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleStep = value["CycleStep"].GetInt64();
        m_cycleStepHasBeenSet = true;
    }

    if (value.HasMember("StartupTime") && !value["StartupTime"].IsNull())
    {
        if (!value["StartupTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.StartupTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startupTime = value["StartupTime"].GetInt64();
        m_startupTimeHasBeenSet = true;
    }

    if (value.HasMember("RetryWait") && !value["RetryWait"].IsNull())
    {
        if (!value["RetryWait"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.RetryWait` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryWait = value["RetryWait"].GetInt64();
        m_retryWaitHasBeenSet = true;
    }

    if (value.HasMember("Retriable") && !value["Retriable"].IsNull())
    {
        if (!value["Retriable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.Retriable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retriable = value["Retriable"].GetInt64();
        m_retriableHasBeenSet = true;
    }

    if (value.HasMember("TaskAction") && !value["TaskAction"].IsNull())
    {
        if (!value["TaskAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.TaskAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskAction = string(value["TaskAction"].GetString());
        m_taskActionHasBeenSet = true;
    }

    if (value.HasMember("TryLimit") && !value["TryLimit"].IsNull())
    {
        if (!value["TryLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.TryLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tryLimit = value["TryLimit"].GetInt64();
        m_tryLimitHasBeenSet = true;
    }

    if (value.HasMember("RunPriority") && !value["RunPriority"].IsNull())
    {
        if (!value["RunPriority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.RunPriority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runPriority = value["RunPriority"].GetInt64();
        m_runPriorityHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.TaskType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetInt64();
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("BrokerIp") && !value["BrokerIp"].IsNull())
    {
        if (!value["BrokerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.BrokerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokerIp = string(value["BrokerIp"].GetString());
        m_brokerIpHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("MinDateTime") && !value["MinDateTime"].IsNull())
    {
        if (!value["MinDateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.MinDateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minDateTime = string(value["MinDateTime"].GetString());
        m_minDateTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxDateTime") && !value["MaxDateTime"].IsNull())
    {
        if (!value["MaxDateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.MaxDateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxDateTime = string(value["MaxDateTime"].GetString());
        m_maxDateTimeHasBeenSet = true;
    }

    if (value.HasMember("SelfDepend") && !value["SelfDepend"].IsNull())
    {
        if (!value["SelfDepend"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.SelfDepend` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_selfDepend = value["SelfDepend"].GetInt64();
        m_selfDependHasBeenSet = true;
    }

    if (value.HasMember("TaskExt") && !value["TaskExt"].IsNull())
    {
        if (!value["TaskExt"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.TaskExt` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskExt"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskExtInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskExt.push_back(item);
        }
        m_taskExtHasBeenSet = true;
    }

    if (value.HasMember("Notes") && !value["Notes"].IsNull())
    {
        if (!value["Notes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.Notes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notes = string(value["Notes"].GetString());
        m_notesHasBeenSet = true;
    }

    if (value.HasMember("YarnQueue") && !value["YarnQueue"].IsNull())
    {
        if (!value["YarnQueue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.YarnQueue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yarnQueue = string(value["YarnQueue"].GetString());
        m_yarnQueueHasBeenSet = true;
    }

    if (value.HasMember("Submit") && !value["Submit"].IsNull())
    {
        if (!value["Submit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.Submit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_submit = value["Submit"].GetBool();
        m_submitHasBeenSet = true;
    }

    if (value.HasMember("LastSchedulerCommitTime") && !value["LastSchedulerCommitTime"].IsNull())
    {
        if (!value["LastSchedulerCommitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.LastSchedulerCommitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastSchedulerCommitTime = string(value["LastSchedulerCommitTime"].GetString());
        m_lastSchedulerCommitTimeHasBeenSet = true;
    }

    if (value.HasMember("NormalizedJobStartTime") && !value["NormalizedJobStartTime"].IsNull())
    {
        if (!value["NormalizedJobStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.NormalizedJobStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_normalizedJobStartTime = string(value["NormalizedJobStartTime"].GetString());
        m_normalizedJobStartTimeHasBeenSet = true;
    }

    if (value.HasMember("SourceServer") && !value["SourceServer"].IsNull())
    {
        if (!value["SourceServer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.SourceServer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceServer = string(value["SourceServer"].GetString());
        m_sourceServerHasBeenSet = true;
    }

    if (value.HasMember("Creater") && !value["Creater"].IsNull())
    {
        if (!value["Creater"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.Creater` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creater = string(value["Creater"].GetString());
        m_createrHasBeenSet = true;
    }

    if (value.HasMember("DependencyRel") && !value["DependencyRel"].IsNull())
    {
        if (!value["DependencyRel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.DependencyRel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyRel = string(value["DependencyRel"].GetString());
        m_dependencyRelHasBeenSet = true;
    }

    if (value.HasMember("DependencyWorkflow") && !value["DependencyWorkflow"].IsNull())
    {
        if (!value["DependencyWorkflow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.DependencyWorkflow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyWorkflow = string(value["DependencyWorkflow"].GetString());
        m_dependencyWorkflowHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.Params` is not array type"));

        const rapidjson::Value &tmpValue = value["Params"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParamInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_params.push_back(item);
        }
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("UpdateUser") && !value["UpdateUser"].IsNull())
    {
        if (!value["UpdateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.UpdateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUser = string(value["UpdateUser"].GetString());
        m_updateUserHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateUserId") && !value["UpdateUserId"].IsNull())
    {
        if (!value["UpdateUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.UpdateUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUserId = string(value["UpdateUserId"].GetString());
        m_updateUserIdHasBeenSet = true;
    }

    if (value.HasMember("SchedulerDesc") && !value["SchedulerDesc"].IsNull())
    {
        if (!value["SchedulerDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.SchedulerDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerDesc = string(value["SchedulerDesc"].GetString());
        m_schedulerDescHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroup") && !value["ResourceGroup"].IsNull())
    {
        if (!value["ResourceGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.ResourceGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroup = string(value["ResourceGroup"].GetString());
        m_resourceGroupHasBeenSet = true;
    }

    if (value.HasMember("VersionDesc") && !value["VersionDesc"].IsNull())
    {
        if (!value["VersionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.VersionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionDesc = string(value["VersionDesc"].GetString());
        m_versionDescHasBeenSet = true;
    }

    if (value.HasMember("RealWorkflowId") && !value["RealWorkflowId"].IsNull())
    {
        if (!value["RealWorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.RealWorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realWorkflowId = string(value["RealWorkflowId"].GetString());
        m_realWorkflowIdHasBeenSet = true;
    }

    if (value.HasMember("TargetServer") && !value["TargetServer"].IsNull())
    {
        if (!value["TargetServer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.TargetServer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetServer = string(value["TargetServer"].GetString());
        m_targetServerHasBeenSet = true;
    }

    if (value.HasMember("DependencyConfigs") && !value["DependencyConfigs"].IsNull())
    {
        if (!value["DependencyConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.DependencyConfigs` is not array type"));

        const rapidjson::Value &tmpValue = value["DependencyConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DependencyConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dependencyConfigs.push_back(item);
        }
        m_dependencyConfigsHasBeenSet = true;
    }

    if (value.HasMember("VirtualTaskStatus") && !value["VirtualTaskStatus"].IsNull())
    {
        if (!value["VirtualTaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.VirtualTaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualTaskStatus = string(value["VirtualTaskStatus"].GetString());
        m_virtualTaskStatusHasBeenSet = true;
    }

    if (value.HasMember("VirtualTaskId") && !value["VirtualTaskId"].IsNull())
    {
        if (!value["VirtualTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfoData.VirtualTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualTaskId = string(value["VirtualTaskId"].GetString());
        m_virtualTaskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskInfoData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIdent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectIdent.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_folderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderName.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virtualFlag, allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayTime, allocator);
    }

    if (m_crontabExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrontabExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crontabExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdate.c_str(), allocator).Move(), allocator);
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

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycleType, allocator);
    }

    if (m_cycleStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycleStep, allocator);
    }

    if (m_startupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startupTime, allocator);
    }

    if (m_retryWaitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryWait";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryWait, allocator);
    }

    if (m_retriableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retriable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retriable, allocator);
    }

    if (m_taskActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskAction.c_str(), allocator).Move(), allocator);
    }

    if (m_tryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tryLimit, allocator);
    }

    if (m_runPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunPriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runPriority, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskType, allocator);
    }

    if (m_brokerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brokerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_minDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinDateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_minDateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_maxDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxDateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_selfDependHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfDepend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selfDepend, allocator);
    }

    if (m_taskExtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskExt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskExt.begin(); itr != m_taskExt.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_notesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notes.c_str(), allocator).Move(), allocator);
    }

    if (m_yarnQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YarnQueue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yarnQueue.c_str(), allocator).Move(), allocator);
    }

    if (m_submitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Submit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_submit, allocator);
    }

    if (m_lastSchedulerCommitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastSchedulerCommitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastSchedulerCommitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_normalizedJobStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalizedJobStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_normalizedJobStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceServer.c_str(), allocator).Move(), allocator);
    }

    if (m_createrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creater";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creater.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyRelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyRel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependencyRel.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyWorkflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyWorkflow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependencyWorkflow.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_params.begin(); itr != m_params.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_updateUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUser.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_versionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_realWorkflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealWorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realWorkflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetServer.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dependencyConfigs.begin(); itr != m_dependencyConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_virtualTaskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualTaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualTaskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualTaskId.c_str(), allocator).Move(), allocator);
    }

}


string TaskInfoData::GetTaskId() const
{
    return m_taskId;
}

void TaskInfoData::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskInfoData::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskInfoData::GetTaskName() const
{
    return m_taskName;
}

void TaskInfoData::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskInfoData::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TaskInfoData::GetWorkflowId() const
{
    return m_workflowId;
}

void TaskInfoData::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool TaskInfoData::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string TaskInfoData::GetWorkflowName() const
{
    return m_workflowName;
}

void TaskInfoData::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool TaskInfoData::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string TaskInfoData::GetProjectName() const
{
    return m_projectName;
}

void TaskInfoData::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool TaskInfoData::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string TaskInfoData::GetProjectIdent() const
{
    return m_projectIdent;
}

void TaskInfoData::SetProjectIdent(const string& _projectIdent)
{
    m_projectIdent = _projectIdent;
    m_projectIdentHasBeenSet = true;
}

bool TaskInfoData::ProjectIdentHasBeenSet() const
{
    return m_projectIdentHasBeenSet;
}

string TaskInfoData::GetStatus() const
{
    return m_status;
}

void TaskInfoData::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TaskInfoData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TaskInfoData::GetProjectId() const
{
    return m_projectId;
}

void TaskInfoData::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TaskInfoData::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TaskInfoData::GetFolderName() const
{
    return m_folderName;
}

void TaskInfoData::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool TaskInfoData::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string TaskInfoData::GetFolderId() const
{
    return m_folderId;
}

void TaskInfoData::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool TaskInfoData::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string TaskInfoData::GetInCharge() const
{
    return m_inCharge;
}

void TaskInfoData::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool TaskInfoData::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

bool TaskInfoData::GetVirtualFlag() const
{
    return m_virtualFlag;
}

void TaskInfoData::SetVirtualFlag(const bool& _virtualFlag)
{
    m_virtualFlag = _virtualFlag;
    m_virtualFlagHasBeenSet = true;
}

bool TaskInfoData::VirtualFlagHasBeenSet() const
{
    return m_virtualFlagHasBeenSet;
}

uint64_t TaskInfoData::GetDelayTime() const
{
    return m_delayTime;
}

void TaskInfoData::SetDelayTime(const uint64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool TaskInfoData::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

string TaskInfoData::GetCrontabExpression() const
{
    return m_crontabExpression;
}

void TaskInfoData::SetCrontabExpression(const string& _crontabExpression)
{
    m_crontabExpression = _crontabExpression;
    m_crontabExpressionHasBeenSet = true;
}

bool TaskInfoData::CrontabExpressionHasBeenSet() const
{
    return m_crontabExpressionHasBeenSet;
}

string TaskInfoData::GetCreateTime() const
{
    return m_createTime;
}

void TaskInfoData::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskInfoData::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskInfoData::GetLastUpdate() const
{
    return m_lastUpdate;
}

void TaskInfoData::SetLastUpdate(const string& _lastUpdate)
{
    m_lastUpdate = _lastUpdate;
    m_lastUpdateHasBeenSet = true;
}

bool TaskInfoData::LastUpdateHasBeenSet() const
{
    return m_lastUpdateHasBeenSet;
}

string TaskInfoData::GetStartTime() const
{
    return m_startTime;
}

void TaskInfoData::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TaskInfoData::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TaskInfoData::GetEndTime() const
{
    return m_endTime;
}

void TaskInfoData::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TaskInfoData::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string TaskInfoData::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void TaskInfoData::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool TaskInfoData::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string TaskInfoData::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void TaskInfoData::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool TaskInfoData::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

int64_t TaskInfoData::GetCycleType() const
{
    return m_cycleType;
}

void TaskInfoData::SetCycleType(const int64_t& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool TaskInfoData::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

int64_t TaskInfoData::GetCycleStep() const
{
    return m_cycleStep;
}

void TaskInfoData::SetCycleStep(const int64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool TaskInfoData::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

int64_t TaskInfoData::GetStartupTime() const
{
    return m_startupTime;
}

void TaskInfoData::SetStartupTime(const int64_t& _startupTime)
{
    m_startupTime = _startupTime;
    m_startupTimeHasBeenSet = true;
}

bool TaskInfoData::StartupTimeHasBeenSet() const
{
    return m_startupTimeHasBeenSet;
}

int64_t TaskInfoData::GetRetryWait() const
{
    return m_retryWait;
}

void TaskInfoData::SetRetryWait(const int64_t& _retryWait)
{
    m_retryWait = _retryWait;
    m_retryWaitHasBeenSet = true;
}

bool TaskInfoData::RetryWaitHasBeenSet() const
{
    return m_retryWaitHasBeenSet;
}

int64_t TaskInfoData::GetRetriable() const
{
    return m_retriable;
}

void TaskInfoData::SetRetriable(const int64_t& _retriable)
{
    m_retriable = _retriable;
    m_retriableHasBeenSet = true;
}

bool TaskInfoData::RetriableHasBeenSet() const
{
    return m_retriableHasBeenSet;
}

string TaskInfoData::GetTaskAction() const
{
    return m_taskAction;
}

void TaskInfoData::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool TaskInfoData::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

int64_t TaskInfoData::GetTryLimit() const
{
    return m_tryLimit;
}

void TaskInfoData::SetTryLimit(const int64_t& _tryLimit)
{
    m_tryLimit = _tryLimit;
    m_tryLimitHasBeenSet = true;
}

bool TaskInfoData::TryLimitHasBeenSet() const
{
    return m_tryLimitHasBeenSet;
}

int64_t TaskInfoData::GetRunPriority() const
{
    return m_runPriority;
}

void TaskInfoData::SetRunPriority(const int64_t& _runPriority)
{
    m_runPriority = _runPriority;
    m_runPriorityHasBeenSet = true;
}

bool TaskInfoData::RunPriorityHasBeenSet() const
{
    return m_runPriorityHasBeenSet;
}

int64_t TaskInfoData::GetTaskType() const
{
    return m_taskType;
}

void TaskInfoData::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool TaskInfoData::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string TaskInfoData::GetBrokerIp() const
{
    return m_brokerIp;
}

void TaskInfoData::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool TaskInfoData::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string TaskInfoData::GetClusterId() const
{
    return m_clusterId;
}

void TaskInfoData::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool TaskInfoData::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string TaskInfoData::GetMinDateTime() const
{
    return m_minDateTime;
}

void TaskInfoData::SetMinDateTime(const string& _minDateTime)
{
    m_minDateTime = _minDateTime;
    m_minDateTimeHasBeenSet = true;
}

bool TaskInfoData::MinDateTimeHasBeenSet() const
{
    return m_minDateTimeHasBeenSet;
}

string TaskInfoData::GetMaxDateTime() const
{
    return m_maxDateTime;
}

void TaskInfoData::SetMaxDateTime(const string& _maxDateTime)
{
    m_maxDateTime = _maxDateTime;
    m_maxDateTimeHasBeenSet = true;
}

bool TaskInfoData::MaxDateTimeHasBeenSet() const
{
    return m_maxDateTimeHasBeenSet;
}

int64_t TaskInfoData::GetSelfDepend() const
{
    return m_selfDepend;
}

void TaskInfoData::SetSelfDepend(const int64_t& _selfDepend)
{
    m_selfDepend = _selfDepend;
    m_selfDependHasBeenSet = true;
}

bool TaskInfoData::SelfDependHasBeenSet() const
{
    return m_selfDependHasBeenSet;
}

vector<TaskExtInfo> TaskInfoData::GetTaskExt() const
{
    return m_taskExt;
}

void TaskInfoData::SetTaskExt(const vector<TaskExtInfo>& _taskExt)
{
    m_taskExt = _taskExt;
    m_taskExtHasBeenSet = true;
}

bool TaskInfoData::TaskExtHasBeenSet() const
{
    return m_taskExtHasBeenSet;
}

string TaskInfoData::GetNotes() const
{
    return m_notes;
}

void TaskInfoData::SetNotes(const string& _notes)
{
    m_notes = _notes;
    m_notesHasBeenSet = true;
}

bool TaskInfoData::NotesHasBeenSet() const
{
    return m_notesHasBeenSet;
}

string TaskInfoData::GetYarnQueue() const
{
    return m_yarnQueue;
}

void TaskInfoData::SetYarnQueue(const string& _yarnQueue)
{
    m_yarnQueue = _yarnQueue;
    m_yarnQueueHasBeenSet = true;
}

bool TaskInfoData::YarnQueueHasBeenSet() const
{
    return m_yarnQueueHasBeenSet;
}

bool TaskInfoData::GetSubmit() const
{
    return m_submit;
}

void TaskInfoData::SetSubmit(const bool& _submit)
{
    m_submit = _submit;
    m_submitHasBeenSet = true;
}

bool TaskInfoData::SubmitHasBeenSet() const
{
    return m_submitHasBeenSet;
}

string TaskInfoData::GetLastSchedulerCommitTime() const
{
    return m_lastSchedulerCommitTime;
}

void TaskInfoData::SetLastSchedulerCommitTime(const string& _lastSchedulerCommitTime)
{
    m_lastSchedulerCommitTime = _lastSchedulerCommitTime;
    m_lastSchedulerCommitTimeHasBeenSet = true;
}

bool TaskInfoData::LastSchedulerCommitTimeHasBeenSet() const
{
    return m_lastSchedulerCommitTimeHasBeenSet;
}

string TaskInfoData::GetNormalizedJobStartTime() const
{
    return m_normalizedJobStartTime;
}

void TaskInfoData::SetNormalizedJobStartTime(const string& _normalizedJobStartTime)
{
    m_normalizedJobStartTime = _normalizedJobStartTime;
    m_normalizedJobStartTimeHasBeenSet = true;
}

bool TaskInfoData::NormalizedJobStartTimeHasBeenSet() const
{
    return m_normalizedJobStartTimeHasBeenSet;
}

string TaskInfoData::GetSourceServer() const
{
    return m_sourceServer;
}

void TaskInfoData::SetSourceServer(const string& _sourceServer)
{
    m_sourceServer = _sourceServer;
    m_sourceServerHasBeenSet = true;
}

bool TaskInfoData::SourceServerHasBeenSet() const
{
    return m_sourceServerHasBeenSet;
}

string TaskInfoData::GetCreater() const
{
    return m_creater;
}

void TaskInfoData::SetCreater(const string& _creater)
{
    m_creater = _creater;
    m_createrHasBeenSet = true;
}

bool TaskInfoData::CreaterHasBeenSet() const
{
    return m_createrHasBeenSet;
}

string TaskInfoData::GetDependencyRel() const
{
    return m_dependencyRel;
}

void TaskInfoData::SetDependencyRel(const string& _dependencyRel)
{
    m_dependencyRel = _dependencyRel;
    m_dependencyRelHasBeenSet = true;
}

bool TaskInfoData::DependencyRelHasBeenSet() const
{
    return m_dependencyRelHasBeenSet;
}

string TaskInfoData::GetDependencyWorkflow() const
{
    return m_dependencyWorkflow;
}

void TaskInfoData::SetDependencyWorkflow(const string& _dependencyWorkflow)
{
    m_dependencyWorkflow = _dependencyWorkflow;
    m_dependencyWorkflowHasBeenSet = true;
}

bool TaskInfoData::DependencyWorkflowHasBeenSet() const
{
    return m_dependencyWorkflowHasBeenSet;
}

vector<ParamInfo> TaskInfoData::GetParams() const
{
    return m_params;
}

void TaskInfoData::SetParams(const vector<ParamInfo>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool TaskInfoData::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

string TaskInfoData::GetUpdateUser() const
{
    return m_updateUser;
}

void TaskInfoData::SetUpdateUser(const string& _updateUser)
{
    m_updateUser = _updateUser;
    m_updateUserHasBeenSet = true;
}

bool TaskInfoData::UpdateUserHasBeenSet() const
{
    return m_updateUserHasBeenSet;
}

string TaskInfoData::GetUpdateTime() const
{
    return m_updateTime;
}

void TaskInfoData::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TaskInfoData::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TaskInfoData::GetUpdateUserId() const
{
    return m_updateUserId;
}

void TaskInfoData::SetUpdateUserId(const string& _updateUserId)
{
    m_updateUserId = _updateUserId;
    m_updateUserIdHasBeenSet = true;
}

bool TaskInfoData::UpdateUserIdHasBeenSet() const
{
    return m_updateUserIdHasBeenSet;
}

string TaskInfoData::GetSchedulerDesc() const
{
    return m_schedulerDesc;
}

void TaskInfoData::SetSchedulerDesc(const string& _schedulerDesc)
{
    m_schedulerDesc = _schedulerDesc;
    m_schedulerDescHasBeenSet = true;
}

bool TaskInfoData::SchedulerDescHasBeenSet() const
{
    return m_schedulerDescHasBeenSet;
}

string TaskInfoData::GetResourceGroup() const
{
    return m_resourceGroup;
}

void TaskInfoData::SetResourceGroup(const string& _resourceGroup)
{
    m_resourceGroup = _resourceGroup;
    m_resourceGroupHasBeenSet = true;
}

bool TaskInfoData::ResourceGroupHasBeenSet() const
{
    return m_resourceGroupHasBeenSet;
}

string TaskInfoData::GetVersionDesc() const
{
    return m_versionDesc;
}

void TaskInfoData::SetVersionDesc(const string& _versionDesc)
{
    m_versionDesc = _versionDesc;
    m_versionDescHasBeenSet = true;
}

bool TaskInfoData::VersionDescHasBeenSet() const
{
    return m_versionDescHasBeenSet;
}

string TaskInfoData::GetRealWorkflowId() const
{
    return m_realWorkflowId;
}

void TaskInfoData::SetRealWorkflowId(const string& _realWorkflowId)
{
    m_realWorkflowId = _realWorkflowId;
    m_realWorkflowIdHasBeenSet = true;
}

bool TaskInfoData::RealWorkflowIdHasBeenSet() const
{
    return m_realWorkflowIdHasBeenSet;
}

string TaskInfoData::GetTargetServer() const
{
    return m_targetServer;
}

void TaskInfoData::SetTargetServer(const string& _targetServer)
{
    m_targetServer = _targetServer;
    m_targetServerHasBeenSet = true;
}

bool TaskInfoData::TargetServerHasBeenSet() const
{
    return m_targetServerHasBeenSet;
}

vector<DependencyConfig> TaskInfoData::GetDependencyConfigs() const
{
    return m_dependencyConfigs;
}

void TaskInfoData::SetDependencyConfigs(const vector<DependencyConfig>& _dependencyConfigs)
{
    m_dependencyConfigs = _dependencyConfigs;
    m_dependencyConfigsHasBeenSet = true;
}

bool TaskInfoData::DependencyConfigsHasBeenSet() const
{
    return m_dependencyConfigsHasBeenSet;
}

string TaskInfoData::GetVirtualTaskStatus() const
{
    return m_virtualTaskStatus;
}

void TaskInfoData::SetVirtualTaskStatus(const string& _virtualTaskStatus)
{
    m_virtualTaskStatus = _virtualTaskStatus;
    m_virtualTaskStatusHasBeenSet = true;
}

bool TaskInfoData::VirtualTaskStatusHasBeenSet() const
{
    return m_virtualTaskStatusHasBeenSet;
}

string TaskInfoData::GetVirtualTaskId() const
{
    return m_virtualTaskId;
}

void TaskInfoData::SetVirtualTaskId(const string& _virtualTaskId)
{
    m_virtualTaskId = _virtualTaskId;
    m_virtualTaskIdHasBeenSet = true;
}

bool TaskInfoData::VirtualTaskIdHasBeenSet() const
{
    return m_virtualTaskIdHasBeenSet;
}

