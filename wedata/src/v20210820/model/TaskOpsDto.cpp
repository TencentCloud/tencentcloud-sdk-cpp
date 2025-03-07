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

#include <tencentcloud/wedata/v20210820/model/TaskOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskOpsDto::TaskOpsDto() :
    m_taskIdHasBeenSet(false),
    m_virtualTaskIdHasBeenSet(false),
    m_virtualFlagHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_realWorkflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastUpdateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_inChargeIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_cycleStepHasBeenSet(false),
    m_crontabExpressionHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_startupTimeHasBeenSet(false),
    m_retryWaitHasBeenSet(false),
    m_retryAbleHasBeenSet(false),
    m_taskActionHasBeenSet(false),
    m_tryLimitHasBeenSet(false),
    m_runPriorityHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_brokerIpHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_minDateTimeHasBeenSet(false),
    m_maxDateTimeHasBeenSet(false),
    m_executionTTLHasBeenSet(false),
    m_selfDependHasBeenSet(false),
    m_leftCoordinateHasBeenSet(false),
    m_topCoordinateHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_instanceInitStrategyHasBeenSet(false),
    m_yarnQueueHasBeenSet(false),
    m_lastSchedulerCommitTimeHasBeenSet(false),
    m_normalizedJobStartTimeHasBeenSet(false),
    m_schedulerDescHasBeenSet(false),
    m_resourceGroupHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_dependencyRelHasBeenSet(false),
    m_dependencyWorkflowHasBeenSet(false),
    m_eventListenerConfigHasBeenSet(false),
    m_eventPublisherConfigHasBeenSet(false),
    m_virtualTaskStatusHasBeenSet(false),
    m_taskLinkInfoHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectIdentHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_ownIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_updateUserHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_updateUserIdHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_taskTypeDescHasBeenSet(false),
    m_showWorkflowHasBeenSet(false),
    m_firstSubmitTimeHasBeenSet(false),
    m_firstRunTimeHasBeenSet(false),
    m_scheduleDescHasBeenSet(false),
    m_cycleNumHasBeenSet(false),
    m_crontabHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_cycleUnitHasBeenSet(false),
    m_initStrategyHasBeenSet(false),
    m_layerHasBeenSet(false),
    m_sourceServiceIdHasBeenSet(false),
    m_sourceServiceTypeHasBeenSet(false),
    m_targetServiceIdHasBeenSet(false),
    m_targetServiceTypeHasBeenSet(false),
    m_tasksStrHasBeenSet(false),
    m_submitHasBeenSet(false),
    m_executorGroupIdHasBeenSet(false),
    m_executorGroupNameHasBeenSet(false),
    m_taskExtInfoHasBeenSet(false),
    m_eventListenerInfosHasBeenSet(false),
    m_scriptInfoHasBeenSet(false),
    m_dLCResourceConfigHasBeenSet(false),
    m_parentTaskInfosHasBeenSet(false),
    m_extResourceFlagHasBeenSet(false),
    m_newParentTaskInfosHasBeenSet(false),
    m_selfWorkFlowDependTypeHasBeenSet(false)
{
}

CoreInternalOutcome TaskOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("VirtualTaskId") && !value["VirtualTaskId"].IsNull())
    {
        if (!value["VirtualTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.VirtualTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualTaskId = string(value["VirtualTaskId"].GetString());
        m_virtualTaskIdHasBeenSet = true;
    }

    if (value.HasMember("VirtualFlag") && !value["VirtualFlag"].IsNull())
    {
        if (!value["VirtualFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.VirtualFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_virtualFlag = value["VirtualFlag"].GetBool();
        m_virtualFlagHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("RealWorkflowId") && !value["RealWorkflowId"].IsNull())
    {
        if (!value["RealWorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.RealWorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realWorkflowId = string(value["RealWorkflowId"].GetString());
        m_realWorkflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdate") && !value["LastUpdate"].IsNull())
    {
        if (!value["LastUpdate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.LastUpdate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdate = string(value["LastUpdate"].GetString());
        m_lastUpdateHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("InCharge") && !value["InCharge"].IsNull())
    {
        if (!value["InCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.InCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCharge = string(value["InCharge"].GetString());
        m_inChargeHasBeenSet = true;
    }

    if (value.HasMember("InChargeId") && !value["InChargeId"].IsNull())
    {
        if (!value["InChargeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.InChargeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inChargeId = string(value["InChargeId"].GetString());
        m_inChargeIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStartTime") && !value["ExecutionStartTime"].IsNull())
    {
        if (!value["ExecutionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.ExecutionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStartTime = string(value["ExecutionStartTime"].GetString());
        m_executionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionEndTime") && !value["ExecutionEndTime"].IsNull())
    {
        if (!value["ExecutionEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.ExecutionEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionEndTime = string(value["ExecutionEndTime"].GetString());
        m_executionEndTimeHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("CycleStep") && !value["CycleStep"].IsNull())
    {
        if (!value["CycleStep"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.CycleStep` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleStep = value["CycleStep"].GetUint64();
        m_cycleStepHasBeenSet = true;
    }

    if (value.HasMember("CrontabExpression") && !value["CrontabExpression"].IsNull())
    {
        if (!value["CrontabExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.CrontabExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crontabExpression = string(value["CrontabExpression"].GetString());
        m_crontabExpressionHasBeenSet = true;
    }

    if (value.HasMember("DelayTime") && !value["DelayTime"].IsNull())
    {
        if (!value["DelayTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.DelayTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_delayTime = value["DelayTime"].GetUint64();
        m_delayTimeHasBeenSet = true;
    }

    if (value.HasMember("StartupTime") && !value["StartupTime"].IsNull())
    {
        if (!value["StartupTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.StartupTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startupTime = value["StartupTime"].GetUint64();
        m_startupTimeHasBeenSet = true;
    }

    if (value.HasMember("RetryWait") && !value["RetryWait"].IsNull())
    {
        if (!value["RetryWait"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.RetryWait` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retryWait = value["RetryWait"].GetUint64();
        m_retryWaitHasBeenSet = true;
    }

    if (value.HasMember("RetryAble") && !value["RetryAble"].IsNull())
    {
        if (!value["RetryAble"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.RetryAble` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retryAble = value["RetryAble"].GetUint64();
        m_retryAbleHasBeenSet = true;
    }

    if (value.HasMember("TaskAction") && !value["TaskAction"].IsNull())
    {
        if (!value["TaskAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.TaskAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskAction = string(value["TaskAction"].GetString());
        m_taskActionHasBeenSet = true;
    }

    if (value.HasMember("TryLimit") && !value["TryLimit"].IsNull())
    {
        if (!value["TryLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.TryLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tryLimit = value["TryLimit"].GetUint64();
        m_tryLimitHasBeenSet = true;
    }

    if (value.HasMember("RunPriority") && !value["RunPriority"].IsNull())
    {
        if (!value["RunPriority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.RunPriority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runPriority = value["RunPriority"].GetUint64();
        m_runPriorityHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.TaskType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskType.Deserialize(value["TaskType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("BrokerIp") && !value["BrokerIp"].IsNull())
    {
        if (!value["BrokerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.BrokerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokerIp = string(value["BrokerIp"].GetString());
        m_brokerIpHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("MinDateTime") && !value["MinDateTime"].IsNull())
    {
        if (!value["MinDateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.MinDateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minDateTime = string(value["MinDateTime"].GetString());
        m_minDateTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxDateTime") && !value["MaxDateTime"].IsNull())
    {
        if (!value["MaxDateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.MaxDateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxDateTime = string(value["MaxDateTime"].GetString());
        m_maxDateTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionTTL") && !value["ExecutionTTL"].IsNull())
    {
        if (!value["ExecutionTTL"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.ExecutionTTL` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executionTTL = value["ExecutionTTL"].GetInt64();
        m_executionTTLHasBeenSet = true;
    }

    if (value.HasMember("SelfDepend") && !value["SelfDepend"].IsNull())
    {
        if (!value["SelfDepend"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.SelfDepend` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selfDepend = string(value["SelfDepend"].GetString());
        m_selfDependHasBeenSet = true;
    }

    if (value.HasMember("LeftCoordinate") && !value["LeftCoordinate"].IsNull())
    {
        if (!value["LeftCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.LeftCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_leftCoordinate = value["LeftCoordinate"].GetDouble();
        m_leftCoordinateHasBeenSet = true;
    }

    if (value.HasMember("TopCoordinate") && !value["TopCoordinate"].IsNull())
    {
        if (!value["TopCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.TopCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_topCoordinate = value["TopCoordinate"].GetDouble();
        m_topCoordinateHasBeenSet = true;
    }

    if (value.HasMember("Notes") && !value["Notes"].IsNull())
    {
        if (!value["Notes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.Notes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notes = string(value["Notes"].GetString());
        m_notesHasBeenSet = true;
    }

    if (value.HasMember("InstanceInitStrategy") && !value["InstanceInitStrategy"].IsNull())
    {
        if (!value["InstanceInitStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.InstanceInitStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceInitStrategy = string(value["InstanceInitStrategy"].GetString());
        m_instanceInitStrategyHasBeenSet = true;
    }

    if (value.HasMember("YarnQueue") && !value["YarnQueue"].IsNull())
    {
        if (!value["YarnQueue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.YarnQueue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yarnQueue = string(value["YarnQueue"].GetString());
        m_yarnQueueHasBeenSet = true;
    }

    if (value.HasMember("LastSchedulerCommitTime") && !value["LastSchedulerCommitTime"].IsNull())
    {
        if (!value["LastSchedulerCommitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.LastSchedulerCommitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastSchedulerCommitTime = string(value["LastSchedulerCommitTime"].GetString());
        m_lastSchedulerCommitTimeHasBeenSet = true;
    }

    if (value.HasMember("NormalizedJobStartTime") && !value["NormalizedJobStartTime"].IsNull())
    {
        if (!value["NormalizedJobStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.NormalizedJobStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_normalizedJobStartTime = string(value["NormalizedJobStartTime"].GetString());
        m_normalizedJobStartTimeHasBeenSet = true;
    }

    if (value.HasMember("SchedulerDesc") && !value["SchedulerDesc"].IsNull())
    {
        if (!value["SchedulerDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.SchedulerDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerDesc = string(value["SchedulerDesc"].GetString());
        m_schedulerDescHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroup") && !value["ResourceGroup"].IsNull())
    {
        if (!value["ResourceGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.ResourceGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroup = string(value["ResourceGroup"].GetString());
        m_resourceGroupHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("DependencyRel") && !value["DependencyRel"].IsNull())
    {
        if (!value["DependencyRel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.DependencyRel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyRel = string(value["DependencyRel"].GetString());
        m_dependencyRelHasBeenSet = true;
    }

    if (value.HasMember("DependencyWorkflow") && !value["DependencyWorkflow"].IsNull())
    {
        if (!value["DependencyWorkflow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.DependencyWorkflow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyWorkflow = string(value["DependencyWorkflow"].GetString());
        m_dependencyWorkflowHasBeenSet = true;
    }

    if (value.HasMember("EventListenerConfig") && !value["EventListenerConfig"].IsNull())
    {
        if (!value["EventListenerConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.EventListenerConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventListenerConfig = string(value["EventListenerConfig"].GetString());
        m_eventListenerConfigHasBeenSet = true;
    }

    if (value.HasMember("EventPublisherConfig") && !value["EventPublisherConfig"].IsNull())
    {
        if (!value["EventPublisherConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.EventPublisherConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventPublisherConfig = string(value["EventPublisherConfig"].GetString());
        m_eventPublisherConfigHasBeenSet = true;
    }

    if (value.HasMember("VirtualTaskStatus") && !value["VirtualTaskStatus"].IsNull())
    {
        if (!value["VirtualTaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.VirtualTaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualTaskStatus = string(value["VirtualTaskStatus"].GetString());
        m_virtualTaskStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskLinkInfo") && !value["TaskLinkInfo"].IsNull())
    {
        if (!value["TaskLinkInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.TaskLinkInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskLinkInfo.Deserialize(value["TaskLinkInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskLinkInfoHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectIdent") && !value["ProjectIdent"].IsNull())
    {
        if (!value["ProjectIdent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.ProjectIdent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectIdent = string(value["ProjectIdent"].GetString());
        m_projectIdentHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("OwnId") && !value["OwnId"].IsNull())
    {
        if (!value["OwnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.OwnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownId = string(value["OwnId"].GetString());
        m_ownIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.TenantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = string(value["TenantId"].GetString());
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateUser") && !value["UpdateUser"].IsNull())
    {
        if (!value["UpdateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.UpdateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUser = string(value["UpdateUser"].GetString());
        m_updateUserHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateUserId") && !value["UpdateUserId"].IsNull())
    {
        if (!value["UpdateUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.UpdateUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUserId = string(value["UpdateUserId"].GetString());
        m_updateUserIdHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeId") && !value["TaskTypeId"].IsNull())
    {
        if (!value["TaskTypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.TaskTypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeId = value["TaskTypeId"].GetInt64();
        m_taskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeDesc") && !value["TaskTypeDesc"].IsNull())
    {
        if (!value["TaskTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.TaskTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeDesc = string(value["TaskTypeDesc"].GetString());
        m_taskTypeDescHasBeenSet = true;
    }

    if (value.HasMember("ShowWorkflow") && !value["ShowWorkflow"].IsNull())
    {
        if (!value["ShowWorkflow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.ShowWorkflow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_showWorkflow = value["ShowWorkflow"].GetBool();
        m_showWorkflowHasBeenSet = true;
    }

    if (value.HasMember("FirstSubmitTime") && !value["FirstSubmitTime"].IsNull())
    {
        if (!value["FirstSubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.FirstSubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstSubmitTime = string(value["FirstSubmitTime"].GetString());
        m_firstSubmitTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstRunTime") && !value["FirstRunTime"].IsNull())
    {
        if (!value["FirstRunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.FirstRunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstRunTime = string(value["FirstRunTime"].GetString());
        m_firstRunTimeHasBeenSet = true;
    }

    if (value.HasMember("ScheduleDesc") && !value["ScheduleDesc"].IsNull())
    {
        if (!value["ScheduleDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.ScheduleDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleDesc = string(value["ScheduleDesc"].GetString());
        m_scheduleDescHasBeenSet = true;
    }

    if (value.HasMember("CycleNum") && !value["CycleNum"].IsNull())
    {
        if (!value["CycleNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.CycleNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleNum = value["CycleNum"].GetInt64();
        m_cycleNumHasBeenSet = true;
    }

    if (value.HasMember("Crontab") && !value["Crontab"].IsNull())
    {
        if (!value["Crontab"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.Crontab` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crontab = string(value["Crontab"].GetString());
        m_crontabHasBeenSet = true;
    }

    if (value.HasMember("StartDate") && !value["StartDate"].IsNull())
    {
        if (!value["StartDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.StartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDate = string(value["StartDate"].GetString());
        m_startDateHasBeenSet = true;
    }

    if (value.HasMember("EndDate") && !value["EndDate"].IsNull())
    {
        if (!value["EndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.EndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endDate = string(value["EndDate"].GetString());
        m_endDateHasBeenSet = true;
    }

    if (value.HasMember("CycleUnit") && !value["CycleUnit"].IsNull())
    {
        if (!value["CycleUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.CycleUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleUnit = string(value["CycleUnit"].GetString());
        m_cycleUnitHasBeenSet = true;
    }

    if (value.HasMember("InitStrategy") && !value["InitStrategy"].IsNull())
    {
        if (!value["InitStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.InitStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initStrategy = string(value["InitStrategy"].GetString());
        m_initStrategyHasBeenSet = true;
    }

    if (value.HasMember("Layer") && !value["Layer"].IsNull())
    {
        if (!value["Layer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.Layer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_layer = string(value["Layer"].GetString());
        m_layerHasBeenSet = true;
    }

    if (value.HasMember("SourceServiceId") && !value["SourceServiceId"].IsNull())
    {
        if (!value["SourceServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.SourceServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceServiceId = string(value["SourceServiceId"].GetString());
        m_sourceServiceIdHasBeenSet = true;
    }

    if (value.HasMember("SourceServiceType") && !value["SourceServiceType"].IsNull())
    {
        if (!value["SourceServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.SourceServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceServiceType = string(value["SourceServiceType"].GetString());
        m_sourceServiceTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetServiceId") && !value["TargetServiceId"].IsNull())
    {
        if (!value["TargetServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.TargetServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetServiceId = string(value["TargetServiceId"].GetString());
        m_targetServiceIdHasBeenSet = true;
    }

    if (value.HasMember("TargetServiceType") && !value["TargetServiceType"].IsNull())
    {
        if (!value["TargetServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.TargetServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetServiceType = string(value["TargetServiceType"].GetString());
        m_targetServiceTypeHasBeenSet = true;
    }

    if (value.HasMember("TasksStr") && !value["TasksStr"].IsNull())
    {
        if (!value["TasksStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.TasksStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tasksStr = string(value["TasksStr"].GetString());
        m_tasksStrHasBeenSet = true;
    }

    if (value.HasMember("Submit") && !value["Submit"].IsNull())
    {
        if (!value["Submit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.Submit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_submit = value["Submit"].GetBool();
        m_submitHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupId") && !value["ExecutorGroupId"].IsNull())
    {
        if (!value["ExecutorGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.ExecutorGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupId = string(value["ExecutorGroupId"].GetString());
        m_executorGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupName") && !value["ExecutorGroupName"].IsNull())
    {
        if (!value["ExecutorGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.ExecutorGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupName = string(value["ExecutorGroupName"].GetString());
        m_executorGroupNameHasBeenSet = true;
    }

    if (value.HasMember("TaskExtInfo") && !value["TaskExtInfo"].IsNull())
    {
        if (!value["TaskExtInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.TaskExtInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskExtInfo = string(value["TaskExtInfo"].GetString());
        m_taskExtInfoHasBeenSet = true;
    }

    if (value.HasMember("EventListenerInfos") && !value["EventListenerInfos"].IsNull())
    {
        if (!value["EventListenerInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.EventListenerInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["EventListenerInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiOpsEventListenerDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventListenerInfos.push_back(item);
        }
        m_eventListenerInfosHasBeenSet = true;
    }

    if (value.HasMember("ScriptInfo") && !value["ScriptInfo"].IsNull())
    {
        if (!value["ScriptInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.ScriptInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scriptInfo.Deserialize(value["ScriptInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scriptInfoHasBeenSet = true;
    }

    if (value.HasMember("DLCResourceConfig") && !value["DLCResourceConfig"].IsNull())
    {
        if (!value["DLCResourceConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.DLCResourceConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dLCResourceConfig.Deserialize(value["DLCResourceConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dLCResourceConfigHasBeenSet = true;
    }

    if (value.HasMember("ParentTaskInfos") && !value["ParentTaskInfos"].IsNull())
    {
        if (!value["ParentTaskInfos"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.ParentTaskInfos` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_parentTaskInfos.Deserialize(value["ParentTaskInfos"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_parentTaskInfosHasBeenSet = true;
    }

    if (value.HasMember("ExtResourceFlag") && !value["ExtResourceFlag"].IsNull())
    {
        if (!value["ExtResourceFlag"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.ExtResourceFlag` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extResourceFlag.Deserialize(value["ExtResourceFlag"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extResourceFlagHasBeenSet = true;
    }

    if (value.HasMember("NewParentTaskInfos") && !value["NewParentTaskInfos"].IsNull())
    {
        if (!value["NewParentTaskInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.NewParentTaskInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["NewParentTaskInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiopsSimpleTaskDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_newParentTaskInfos.push_back(item);
        }
        m_newParentTaskInfosHasBeenSet = true;
    }

    if (value.HasMember("SelfWorkFlowDependType") && !value["SelfWorkFlowDependType"].IsNull())
    {
        if (!value["SelfWorkFlowDependType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOpsDto.SelfWorkFlowDependType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selfWorkFlowDependType = string(value["SelfWorkFlowDependType"].GetString());
        m_selfWorkFlowDependTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virtualFlag, allocator);
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

    if (m_realWorkflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealWorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realWorkflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inChargeId.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycleStep, allocator);
    }

    if (m_crontabExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrontabExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crontabExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayTime, allocator);
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

    if (m_retryAbleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryAble";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryAble, allocator);
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
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskType.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_executionTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionTTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executionTTL, allocator);
    }

    if (m_selfDependHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfDepend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selfDepend.c_str(), allocator).Move(), allocator);
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

    if (m_notesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notes.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceInitStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInitStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceInitStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_yarnQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YarnQueue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yarnQueue.c_str(), allocator).Move(), allocator);
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

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
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

    if (m_eventListenerConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventListenerConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventListenerConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_eventPublisherConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventPublisherConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventPublisherConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualTaskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualTaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualTaskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_taskLinkInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskLinkInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskLinkInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIdent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectIdent.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
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

    if (m_taskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTypeId, allocator);
    }

    if (m_taskTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTypeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_showWorkflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowWorkflow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_showWorkflow, allocator);
    }

    if (m_firstSubmitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstSubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstSubmitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_firstRunTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstRunTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstRunTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycleNum, allocator);
    }

    if (m_crontabHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Crontab";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crontab.c_str(), allocator).Move(), allocator);
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_initStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_initStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_layerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Layer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_layer.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceServiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceServiceType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetServiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetServiceType.c_str(), allocator).Move(), allocator);
    }

    if (m_tasksStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TasksStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tasksStr.c_str(), allocator).Move(), allocator);
    }

    if (m_submitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Submit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_submit, allocator);
    }

    if (m_executorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_executorGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskExtInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskExtInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_eventListenerInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventListenerInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventListenerInfos.begin(); itr != m_eventListenerInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_scriptInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scriptInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dLCResourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DLCResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dLCResourceConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_parentTaskInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentTaskInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_parentTaskInfos.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_extResourceFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtResourceFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extResourceFlag.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_newParentTaskInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewParentTaskInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_newParentTaskInfos.begin(); itr != m_newParentTaskInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_selfWorkFlowDependTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfWorkFlowDependType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selfWorkFlowDependType.c_str(), allocator).Move(), allocator);
    }

}


string TaskOpsDto::GetTaskId() const
{
    return m_taskId;
}

void TaskOpsDto::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskOpsDto::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskOpsDto::GetVirtualTaskId() const
{
    return m_virtualTaskId;
}

void TaskOpsDto::SetVirtualTaskId(const string& _virtualTaskId)
{
    m_virtualTaskId = _virtualTaskId;
    m_virtualTaskIdHasBeenSet = true;
}

bool TaskOpsDto::VirtualTaskIdHasBeenSet() const
{
    return m_virtualTaskIdHasBeenSet;
}

bool TaskOpsDto::GetVirtualFlag() const
{
    return m_virtualFlag;
}

void TaskOpsDto::SetVirtualFlag(const bool& _virtualFlag)
{
    m_virtualFlag = _virtualFlag;
    m_virtualFlagHasBeenSet = true;
}

bool TaskOpsDto::VirtualFlagHasBeenSet() const
{
    return m_virtualFlagHasBeenSet;
}

string TaskOpsDto::GetTaskName() const
{
    return m_taskName;
}

void TaskOpsDto::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskOpsDto::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TaskOpsDto::GetWorkflowId() const
{
    return m_workflowId;
}

void TaskOpsDto::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool TaskOpsDto::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string TaskOpsDto::GetRealWorkflowId() const
{
    return m_realWorkflowId;
}

void TaskOpsDto::SetRealWorkflowId(const string& _realWorkflowId)
{
    m_realWorkflowId = _realWorkflowId;
    m_realWorkflowIdHasBeenSet = true;
}

bool TaskOpsDto::RealWorkflowIdHasBeenSet() const
{
    return m_realWorkflowIdHasBeenSet;
}

string TaskOpsDto::GetWorkflowName() const
{
    return m_workflowName;
}

void TaskOpsDto::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool TaskOpsDto::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string TaskOpsDto::GetFolderId() const
{
    return m_folderId;
}

void TaskOpsDto::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool TaskOpsDto::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string TaskOpsDto::GetFolderName() const
{
    return m_folderName;
}

void TaskOpsDto::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool TaskOpsDto::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string TaskOpsDto::GetCreateTime() const
{
    return m_createTime;
}

void TaskOpsDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskOpsDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskOpsDto::GetLastUpdate() const
{
    return m_lastUpdate;
}

void TaskOpsDto::SetLastUpdate(const string& _lastUpdate)
{
    m_lastUpdate = _lastUpdate;
    m_lastUpdateHasBeenSet = true;
}

bool TaskOpsDto::LastUpdateHasBeenSet() const
{
    return m_lastUpdateHasBeenSet;
}

string TaskOpsDto::GetStatus() const
{
    return m_status;
}

void TaskOpsDto::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TaskOpsDto::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TaskOpsDto::GetInCharge() const
{
    return m_inCharge;
}

void TaskOpsDto::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool TaskOpsDto::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

string TaskOpsDto::GetInChargeId() const
{
    return m_inChargeId;
}

void TaskOpsDto::SetInChargeId(const string& _inChargeId)
{
    m_inChargeId = _inChargeId;
    m_inChargeIdHasBeenSet = true;
}

bool TaskOpsDto::InChargeIdHasBeenSet() const
{
    return m_inChargeIdHasBeenSet;
}

string TaskOpsDto::GetStartTime() const
{
    return m_startTime;
}

void TaskOpsDto::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TaskOpsDto::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TaskOpsDto::GetEndTime() const
{
    return m_endTime;
}

void TaskOpsDto::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TaskOpsDto::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string TaskOpsDto::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void TaskOpsDto::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool TaskOpsDto::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string TaskOpsDto::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void TaskOpsDto::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool TaskOpsDto::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

string TaskOpsDto::GetCycleType() const
{
    return m_cycleType;
}

void TaskOpsDto::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool TaskOpsDto::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

uint64_t TaskOpsDto::GetCycleStep() const
{
    return m_cycleStep;
}

void TaskOpsDto::SetCycleStep(const uint64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool TaskOpsDto::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

string TaskOpsDto::GetCrontabExpression() const
{
    return m_crontabExpression;
}

void TaskOpsDto::SetCrontabExpression(const string& _crontabExpression)
{
    m_crontabExpression = _crontabExpression;
    m_crontabExpressionHasBeenSet = true;
}

bool TaskOpsDto::CrontabExpressionHasBeenSet() const
{
    return m_crontabExpressionHasBeenSet;
}

uint64_t TaskOpsDto::GetDelayTime() const
{
    return m_delayTime;
}

void TaskOpsDto::SetDelayTime(const uint64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool TaskOpsDto::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

uint64_t TaskOpsDto::GetStartupTime() const
{
    return m_startupTime;
}

void TaskOpsDto::SetStartupTime(const uint64_t& _startupTime)
{
    m_startupTime = _startupTime;
    m_startupTimeHasBeenSet = true;
}

bool TaskOpsDto::StartupTimeHasBeenSet() const
{
    return m_startupTimeHasBeenSet;
}

uint64_t TaskOpsDto::GetRetryWait() const
{
    return m_retryWait;
}

void TaskOpsDto::SetRetryWait(const uint64_t& _retryWait)
{
    m_retryWait = _retryWait;
    m_retryWaitHasBeenSet = true;
}

bool TaskOpsDto::RetryWaitHasBeenSet() const
{
    return m_retryWaitHasBeenSet;
}

uint64_t TaskOpsDto::GetRetryAble() const
{
    return m_retryAble;
}

void TaskOpsDto::SetRetryAble(const uint64_t& _retryAble)
{
    m_retryAble = _retryAble;
    m_retryAbleHasBeenSet = true;
}

bool TaskOpsDto::RetryAbleHasBeenSet() const
{
    return m_retryAbleHasBeenSet;
}

string TaskOpsDto::GetTaskAction() const
{
    return m_taskAction;
}

void TaskOpsDto::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool TaskOpsDto::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

uint64_t TaskOpsDto::GetTryLimit() const
{
    return m_tryLimit;
}

void TaskOpsDto::SetTryLimit(const uint64_t& _tryLimit)
{
    m_tryLimit = _tryLimit;
    m_tryLimitHasBeenSet = true;
}

bool TaskOpsDto::TryLimitHasBeenSet() const
{
    return m_tryLimitHasBeenSet;
}

uint64_t TaskOpsDto::GetRunPriority() const
{
    return m_runPriority;
}

void TaskOpsDto::SetRunPriority(const uint64_t& _runPriority)
{
    m_runPriority = _runPriority;
    m_runPriorityHasBeenSet = true;
}

bool TaskOpsDto::RunPriorityHasBeenSet() const
{
    return m_runPriorityHasBeenSet;
}

TaskTypeOpsDto TaskOpsDto::GetTaskType() const
{
    return m_taskType;
}

void TaskOpsDto::SetTaskType(const TaskTypeOpsDto& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool TaskOpsDto::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string TaskOpsDto::GetBrokerIp() const
{
    return m_brokerIp;
}

void TaskOpsDto::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool TaskOpsDto::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string TaskOpsDto::GetClusterId() const
{
    return m_clusterId;
}

void TaskOpsDto::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool TaskOpsDto::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string TaskOpsDto::GetMinDateTime() const
{
    return m_minDateTime;
}

void TaskOpsDto::SetMinDateTime(const string& _minDateTime)
{
    m_minDateTime = _minDateTime;
    m_minDateTimeHasBeenSet = true;
}

bool TaskOpsDto::MinDateTimeHasBeenSet() const
{
    return m_minDateTimeHasBeenSet;
}

string TaskOpsDto::GetMaxDateTime() const
{
    return m_maxDateTime;
}

void TaskOpsDto::SetMaxDateTime(const string& _maxDateTime)
{
    m_maxDateTime = _maxDateTime;
    m_maxDateTimeHasBeenSet = true;
}

bool TaskOpsDto::MaxDateTimeHasBeenSet() const
{
    return m_maxDateTimeHasBeenSet;
}

int64_t TaskOpsDto::GetExecutionTTL() const
{
    return m_executionTTL;
}

void TaskOpsDto::SetExecutionTTL(const int64_t& _executionTTL)
{
    m_executionTTL = _executionTTL;
    m_executionTTLHasBeenSet = true;
}

bool TaskOpsDto::ExecutionTTLHasBeenSet() const
{
    return m_executionTTLHasBeenSet;
}

string TaskOpsDto::GetSelfDepend() const
{
    return m_selfDepend;
}

void TaskOpsDto::SetSelfDepend(const string& _selfDepend)
{
    m_selfDepend = _selfDepend;
    m_selfDependHasBeenSet = true;
}

bool TaskOpsDto::SelfDependHasBeenSet() const
{
    return m_selfDependHasBeenSet;
}

double TaskOpsDto::GetLeftCoordinate() const
{
    return m_leftCoordinate;
}

void TaskOpsDto::SetLeftCoordinate(const double& _leftCoordinate)
{
    m_leftCoordinate = _leftCoordinate;
    m_leftCoordinateHasBeenSet = true;
}

bool TaskOpsDto::LeftCoordinateHasBeenSet() const
{
    return m_leftCoordinateHasBeenSet;
}

double TaskOpsDto::GetTopCoordinate() const
{
    return m_topCoordinate;
}

void TaskOpsDto::SetTopCoordinate(const double& _topCoordinate)
{
    m_topCoordinate = _topCoordinate;
    m_topCoordinateHasBeenSet = true;
}

bool TaskOpsDto::TopCoordinateHasBeenSet() const
{
    return m_topCoordinateHasBeenSet;
}

string TaskOpsDto::GetNotes() const
{
    return m_notes;
}

void TaskOpsDto::SetNotes(const string& _notes)
{
    m_notes = _notes;
    m_notesHasBeenSet = true;
}

bool TaskOpsDto::NotesHasBeenSet() const
{
    return m_notesHasBeenSet;
}

string TaskOpsDto::GetInstanceInitStrategy() const
{
    return m_instanceInitStrategy;
}

void TaskOpsDto::SetInstanceInitStrategy(const string& _instanceInitStrategy)
{
    m_instanceInitStrategy = _instanceInitStrategy;
    m_instanceInitStrategyHasBeenSet = true;
}

bool TaskOpsDto::InstanceInitStrategyHasBeenSet() const
{
    return m_instanceInitStrategyHasBeenSet;
}

string TaskOpsDto::GetYarnQueue() const
{
    return m_yarnQueue;
}

void TaskOpsDto::SetYarnQueue(const string& _yarnQueue)
{
    m_yarnQueue = _yarnQueue;
    m_yarnQueueHasBeenSet = true;
}

bool TaskOpsDto::YarnQueueHasBeenSet() const
{
    return m_yarnQueueHasBeenSet;
}

string TaskOpsDto::GetLastSchedulerCommitTime() const
{
    return m_lastSchedulerCommitTime;
}

void TaskOpsDto::SetLastSchedulerCommitTime(const string& _lastSchedulerCommitTime)
{
    m_lastSchedulerCommitTime = _lastSchedulerCommitTime;
    m_lastSchedulerCommitTimeHasBeenSet = true;
}

bool TaskOpsDto::LastSchedulerCommitTimeHasBeenSet() const
{
    return m_lastSchedulerCommitTimeHasBeenSet;
}

string TaskOpsDto::GetNormalizedJobStartTime() const
{
    return m_normalizedJobStartTime;
}

void TaskOpsDto::SetNormalizedJobStartTime(const string& _normalizedJobStartTime)
{
    m_normalizedJobStartTime = _normalizedJobStartTime;
    m_normalizedJobStartTimeHasBeenSet = true;
}

bool TaskOpsDto::NormalizedJobStartTimeHasBeenSet() const
{
    return m_normalizedJobStartTimeHasBeenSet;
}

string TaskOpsDto::GetSchedulerDesc() const
{
    return m_schedulerDesc;
}

void TaskOpsDto::SetSchedulerDesc(const string& _schedulerDesc)
{
    m_schedulerDesc = _schedulerDesc;
    m_schedulerDescHasBeenSet = true;
}

bool TaskOpsDto::SchedulerDescHasBeenSet() const
{
    return m_schedulerDescHasBeenSet;
}

string TaskOpsDto::GetResourceGroup() const
{
    return m_resourceGroup;
}

void TaskOpsDto::SetResourceGroup(const string& _resourceGroup)
{
    m_resourceGroup = _resourceGroup;
    m_resourceGroupHasBeenSet = true;
}

bool TaskOpsDto::ResourceGroupHasBeenSet() const
{
    return m_resourceGroupHasBeenSet;
}

string TaskOpsDto::GetCreator() const
{
    return m_creator;
}

void TaskOpsDto::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool TaskOpsDto::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string TaskOpsDto::GetDependencyRel() const
{
    return m_dependencyRel;
}

void TaskOpsDto::SetDependencyRel(const string& _dependencyRel)
{
    m_dependencyRel = _dependencyRel;
    m_dependencyRelHasBeenSet = true;
}

bool TaskOpsDto::DependencyRelHasBeenSet() const
{
    return m_dependencyRelHasBeenSet;
}

string TaskOpsDto::GetDependencyWorkflow() const
{
    return m_dependencyWorkflow;
}

void TaskOpsDto::SetDependencyWorkflow(const string& _dependencyWorkflow)
{
    m_dependencyWorkflow = _dependencyWorkflow;
    m_dependencyWorkflowHasBeenSet = true;
}

bool TaskOpsDto::DependencyWorkflowHasBeenSet() const
{
    return m_dependencyWorkflowHasBeenSet;
}

string TaskOpsDto::GetEventListenerConfig() const
{
    return m_eventListenerConfig;
}

void TaskOpsDto::SetEventListenerConfig(const string& _eventListenerConfig)
{
    m_eventListenerConfig = _eventListenerConfig;
    m_eventListenerConfigHasBeenSet = true;
}

bool TaskOpsDto::EventListenerConfigHasBeenSet() const
{
    return m_eventListenerConfigHasBeenSet;
}

string TaskOpsDto::GetEventPublisherConfig() const
{
    return m_eventPublisherConfig;
}

void TaskOpsDto::SetEventPublisherConfig(const string& _eventPublisherConfig)
{
    m_eventPublisherConfig = _eventPublisherConfig;
    m_eventPublisherConfigHasBeenSet = true;
}

bool TaskOpsDto::EventPublisherConfigHasBeenSet() const
{
    return m_eventPublisherConfigHasBeenSet;
}

string TaskOpsDto::GetVirtualTaskStatus() const
{
    return m_virtualTaskStatus;
}

void TaskOpsDto::SetVirtualTaskStatus(const string& _virtualTaskStatus)
{
    m_virtualTaskStatus = _virtualTaskStatus;
    m_virtualTaskStatusHasBeenSet = true;
}

bool TaskOpsDto::VirtualTaskStatusHasBeenSet() const
{
    return m_virtualTaskStatusHasBeenSet;
}

LinkOpsDto TaskOpsDto::GetTaskLinkInfo() const
{
    return m_taskLinkInfo;
}

void TaskOpsDto::SetTaskLinkInfo(const LinkOpsDto& _taskLinkInfo)
{
    m_taskLinkInfo = _taskLinkInfo;
    m_taskLinkInfoHasBeenSet = true;
}

bool TaskOpsDto::TaskLinkInfoHasBeenSet() const
{
    return m_taskLinkInfoHasBeenSet;
}

string TaskOpsDto::GetProductName() const
{
    return m_productName;
}

void TaskOpsDto::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool TaskOpsDto::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string TaskOpsDto::GetProjectId() const
{
    return m_projectId;
}

void TaskOpsDto::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TaskOpsDto::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TaskOpsDto::GetProjectIdent() const
{
    return m_projectIdent;
}

void TaskOpsDto::SetProjectIdent(const string& _projectIdent)
{
    m_projectIdent = _projectIdent;
    m_projectIdentHasBeenSet = true;
}

bool TaskOpsDto::ProjectIdentHasBeenSet() const
{
    return m_projectIdentHasBeenSet;
}

string TaskOpsDto::GetProjectName() const
{
    return m_projectName;
}

void TaskOpsDto::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool TaskOpsDto::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string TaskOpsDto::GetOwnId() const
{
    return m_ownId;
}

void TaskOpsDto::SetOwnId(const string& _ownId)
{
    m_ownId = _ownId;
    m_ownIdHasBeenSet = true;
}

bool TaskOpsDto::OwnIdHasBeenSet() const
{
    return m_ownIdHasBeenSet;
}

string TaskOpsDto::GetUserId() const
{
    return m_userId;
}

void TaskOpsDto::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool TaskOpsDto::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string TaskOpsDto::GetTenantId() const
{
    return m_tenantId;
}

void TaskOpsDto::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool TaskOpsDto::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string TaskOpsDto::GetUpdateUser() const
{
    return m_updateUser;
}

void TaskOpsDto::SetUpdateUser(const string& _updateUser)
{
    m_updateUser = _updateUser;
    m_updateUserHasBeenSet = true;
}

bool TaskOpsDto::UpdateUserHasBeenSet() const
{
    return m_updateUserHasBeenSet;
}

string TaskOpsDto::GetUpdateTime() const
{
    return m_updateTime;
}

void TaskOpsDto::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TaskOpsDto::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TaskOpsDto::GetUpdateUserId() const
{
    return m_updateUserId;
}

void TaskOpsDto::SetUpdateUserId(const string& _updateUserId)
{
    m_updateUserId = _updateUserId;
    m_updateUserIdHasBeenSet = true;
}

bool TaskOpsDto::UpdateUserIdHasBeenSet() const
{
    return m_updateUserIdHasBeenSet;
}

int64_t TaskOpsDto::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void TaskOpsDto::SetTaskTypeId(const int64_t& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool TaskOpsDto::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string TaskOpsDto::GetTaskTypeDesc() const
{
    return m_taskTypeDesc;
}

void TaskOpsDto::SetTaskTypeDesc(const string& _taskTypeDesc)
{
    m_taskTypeDesc = _taskTypeDesc;
    m_taskTypeDescHasBeenSet = true;
}

bool TaskOpsDto::TaskTypeDescHasBeenSet() const
{
    return m_taskTypeDescHasBeenSet;
}

bool TaskOpsDto::GetShowWorkflow() const
{
    return m_showWorkflow;
}

void TaskOpsDto::SetShowWorkflow(const bool& _showWorkflow)
{
    m_showWorkflow = _showWorkflow;
    m_showWorkflowHasBeenSet = true;
}

bool TaskOpsDto::ShowWorkflowHasBeenSet() const
{
    return m_showWorkflowHasBeenSet;
}

string TaskOpsDto::GetFirstSubmitTime() const
{
    return m_firstSubmitTime;
}

void TaskOpsDto::SetFirstSubmitTime(const string& _firstSubmitTime)
{
    m_firstSubmitTime = _firstSubmitTime;
    m_firstSubmitTimeHasBeenSet = true;
}

bool TaskOpsDto::FirstSubmitTimeHasBeenSet() const
{
    return m_firstSubmitTimeHasBeenSet;
}

string TaskOpsDto::GetFirstRunTime() const
{
    return m_firstRunTime;
}

void TaskOpsDto::SetFirstRunTime(const string& _firstRunTime)
{
    m_firstRunTime = _firstRunTime;
    m_firstRunTimeHasBeenSet = true;
}

bool TaskOpsDto::FirstRunTimeHasBeenSet() const
{
    return m_firstRunTimeHasBeenSet;
}

string TaskOpsDto::GetScheduleDesc() const
{
    return m_scheduleDesc;
}

void TaskOpsDto::SetScheduleDesc(const string& _scheduleDesc)
{
    m_scheduleDesc = _scheduleDesc;
    m_scheduleDescHasBeenSet = true;
}

bool TaskOpsDto::ScheduleDescHasBeenSet() const
{
    return m_scheduleDescHasBeenSet;
}

int64_t TaskOpsDto::GetCycleNum() const
{
    return m_cycleNum;
}

void TaskOpsDto::SetCycleNum(const int64_t& _cycleNum)
{
    m_cycleNum = _cycleNum;
    m_cycleNumHasBeenSet = true;
}

bool TaskOpsDto::CycleNumHasBeenSet() const
{
    return m_cycleNumHasBeenSet;
}

string TaskOpsDto::GetCrontab() const
{
    return m_crontab;
}

void TaskOpsDto::SetCrontab(const string& _crontab)
{
    m_crontab = _crontab;
    m_crontabHasBeenSet = true;
}

bool TaskOpsDto::CrontabHasBeenSet() const
{
    return m_crontabHasBeenSet;
}

string TaskOpsDto::GetStartDate() const
{
    return m_startDate;
}

void TaskOpsDto::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool TaskOpsDto::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string TaskOpsDto::GetEndDate() const
{
    return m_endDate;
}

void TaskOpsDto::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool TaskOpsDto::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

string TaskOpsDto::GetCycleUnit() const
{
    return m_cycleUnit;
}

void TaskOpsDto::SetCycleUnit(const string& _cycleUnit)
{
    m_cycleUnit = _cycleUnit;
    m_cycleUnitHasBeenSet = true;
}

bool TaskOpsDto::CycleUnitHasBeenSet() const
{
    return m_cycleUnitHasBeenSet;
}

string TaskOpsDto::GetInitStrategy() const
{
    return m_initStrategy;
}

void TaskOpsDto::SetInitStrategy(const string& _initStrategy)
{
    m_initStrategy = _initStrategy;
    m_initStrategyHasBeenSet = true;
}

bool TaskOpsDto::InitStrategyHasBeenSet() const
{
    return m_initStrategyHasBeenSet;
}

string TaskOpsDto::GetLayer() const
{
    return m_layer;
}

void TaskOpsDto::SetLayer(const string& _layer)
{
    m_layer = _layer;
    m_layerHasBeenSet = true;
}

bool TaskOpsDto::LayerHasBeenSet() const
{
    return m_layerHasBeenSet;
}

string TaskOpsDto::GetSourceServiceId() const
{
    return m_sourceServiceId;
}

void TaskOpsDto::SetSourceServiceId(const string& _sourceServiceId)
{
    m_sourceServiceId = _sourceServiceId;
    m_sourceServiceIdHasBeenSet = true;
}

bool TaskOpsDto::SourceServiceIdHasBeenSet() const
{
    return m_sourceServiceIdHasBeenSet;
}

string TaskOpsDto::GetSourceServiceType() const
{
    return m_sourceServiceType;
}

void TaskOpsDto::SetSourceServiceType(const string& _sourceServiceType)
{
    m_sourceServiceType = _sourceServiceType;
    m_sourceServiceTypeHasBeenSet = true;
}

bool TaskOpsDto::SourceServiceTypeHasBeenSet() const
{
    return m_sourceServiceTypeHasBeenSet;
}

string TaskOpsDto::GetTargetServiceId() const
{
    return m_targetServiceId;
}

void TaskOpsDto::SetTargetServiceId(const string& _targetServiceId)
{
    m_targetServiceId = _targetServiceId;
    m_targetServiceIdHasBeenSet = true;
}

bool TaskOpsDto::TargetServiceIdHasBeenSet() const
{
    return m_targetServiceIdHasBeenSet;
}

string TaskOpsDto::GetTargetServiceType() const
{
    return m_targetServiceType;
}

void TaskOpsDto::SetTargetServiceType(const string& _targetServiceType)
{
    m_targetServiceType = _targetServiceType;
    m_targetServiceTypeHasBeenSet = true;
}

bool TaskOpsDto::TargetServiceTypeHasBeenSet() const
{
    return m_targetServiceTypeHasBeenSet;
}

string TaskOpsDto::GetTasksStr() const
{
    return m_tasksStr;
}

void TaskOpsDto::SetTasksStr(const string& _tasksStr)
{
    m_tasksStr = _tasksStr;
    m_tasksStrHasBeenSet = true;
}

bool TaskOpsDto::TasksStrHasBeenSet() const
{
    return m_tasksStrHasBeenSet;
}

bool TaskOpsDto::GetSubmit() const
{
    return m_submit;
}

void TaskOpsDto::SetSubmit(const bool& _submit)
{
    m_submit = _submit;
    m_submitHasBeenSet = true;
}

bool TaskOpsDto::SubmitHasBeenSet() const
{
    return m_submitHasBeenSet;
}

string TaskOpsDto::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void TaskOpsDto::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool TaskOpsDto::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

string TaskOpsDto::GetExecutorGroupName() const
{
    return m_executorGroupName;
}

void TaskOpsDto::SetExecutorGroupName(const string& _executorGroupName)
{
    m_executorGroupName = _executorGroupName;
    m_executorGroupNameHasBeenSet = true;
}

bool TaskOpsDto::ExecutorGroupNameHasBeenSet() const
{
    return m_executorGroupNameHasBeenSet;
}

string TaskOpsDto::GetTaskExtInfo() const
{
    return m_taskExtInfo;
}

void TaskOpsDto::SetTaskExtInfo(const string& _taskExtInfo)
{
    m_taskExtInfo = _taskExtInfo;
    m_taskExtInfoHasBeenSet = true;
}

bool TaskOpsDto::TaskExtInfoHasBeenSet() const
{
    return m_taskExtInfoHasBeenSet;
}

vector<AiOpsEventListenerDTO> TaskOpsDto::GetEventListenerInfos() const
{
    return m_eventListenerInfos;
}

void TaskOpsDto::SetEventListenerInfos(const vector<AiOpsEventListenerDTO>& _eventListenerInfos)
{
    m_eventListenerInfos = _eventListenerInfos;
    m_eventListenerInfosHasBeenSet = true;
}

bool TaskOpsDto::EventListenerInfosHasBeenSet() const
{
    return m_eventListenerInfosHasBeenSet;
}

AiopsScriptInfo TaskOpsDto::GetScriptInfo() const
{
    return m_scriptInfo;
}

void TaskOpsDto::SetScriptInfo(const AiopsScriptInfo& _scriptInfo)
{
    m_scriptInfo = _scriptInfo;
    m_scriptInfoHasBeenSet = true;
}

bool TaskOpsDto::ScriptInfoHasBeenSet() const
{
    return m_scriptInfoHasBeenSet;
}

AiopsDLCResourceConfigDto TaskOpsDto::GetDLCResourceConfig() const
{
    return m_dLCResourceConfig;
}

void TaskOpsDto::SetDLCResourceConfig(const AiopsDLCResourceConfigDto& _dLCResourceConfig)
{
    m_dLCResourceConfig = _dLCResourceConfig;
    m_dLCResourceConfigHasBeenSet = true;
}

bool TaskOpsDto::DLCResourceConfigHasBeenSet() const
{
    return m_dLCResourceConfigHasBeenSet;
}

AiopsSimpleTaskDto TaskOpsDto::GetParentTaskInfos() const
{
    return m_parentTaskInfos;
}

void TaskOpsDto::SetParentTaskInfos(const AiopsSimpleTaskDto& _parentTaskInfos)
{
    m_parentTaskInfos = _parentTaskInfos;
    m_parentTaskInfosHasBeenSet = true;
}

bool TaskOpsDto::ParentTaskInfosHasBeenSet() const
{
    return m_parentTaskInfosHasBeenSet;
}

ExtResourceFlagDto TaskOpsDto::GetExtResourceFlag() const
{
    return m_extResourceFlag;
}

void TaskOpsDto::SetExtResourceFlag(const ExtResourceFlagDto& _extResourceFlag)
{
    m_extResourceFlag = _extResourceFlag;
    m_extResourceFlagHasBeenSet = true;
}

bool TaskOpsDto::ExtResourceFlagHasBeenSet() const
{
    return m_extResourceFlagHasBeenSet;
}

vector<AiopsSimpleTaskDto> TaskOpsDto::GetNewParentTaskInfos() const
{
    return m_newParentTaskInfos;
}

void TaskOpsDto::SetNewParentTaskInfos(const vector<AiopsSimpleTaskDto>& _newParentTaskInfos)
{
    m_newParentTaskInfos = _newParentTaskInfos;
    m_newParentTaskInfosHasBeenSet = true;
}

bool TaskOpsDto::NewParentTaskInfosHasBeenSet() const
{
    return m_newParentTaskInfosHasBeenSet;
}

string TaskOpsDto::GetSelfWorkFlowDependType() const
{
    return m_selfWorkFlowDependType;
}

void TaskOpsDto::SetSelfWorkFlowDependType(const string& _selfWorkFlowDependType)
{
    m_selfWorkFlowDependType = _selfWorkFlowDependType;
    m_selfWorkFlowDependTypeHasBeenSet = true;
}

bool TaskOpsDto::SelfWorkFlowDependTypeHasBeenSet() const
{
    return m_selfWorkFlowDependTypeHasBeenSet;
}

