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

#include <tencentcloud/wedata/v20210820/model/InstanceOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceOpsDto::InstanceOpsDto() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_nextCurDateHasBeenSet(false),
    m_runPriorityHasBeenSet(false),
    m_tryLimitHasBeenSet(false),
    m_triesHasBeenSet(false),
    m_totalRunNumHasBeenSet(false),
    m_doFlagHasBeenSet(false),
    m_redoFlagHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_runtimeBrokerHasBeenSet(false),
    m_errorDescHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_dependenceFulfillTimeHasBeenSet(false),
    m_firstDependenceFulfillTimeHasBeenSet(false),
    m_firstStartTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_costTimeHasBeenSet(false),
    m_costMillisecondHasBeenSet(false),
    m_maxCostTimeHasBeenSet(false),
    m_minCostTimeHasBeenSet(false),
    m_avgCostTimeHasBeenSet(false),
    m_lastLogHasBeenSet(false),
    m_schedulerDateTimeHasBeenSet(false),
    m_lastSchedulerDateTimeHasBeenSet(false),
    m_lastUpdateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_dependencyRelHasBeenSet(false),
    m_executionSpaceHasBeenSet(false),
    m_ignoreEventHasBeenSet(false),
    m_virtualFlagHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_sonListHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_resourceGroupHasBeenSet(false),
    m_resourceInstanceIdHasBeenSet(false),
    m_yarnQueueHasBeenSet(false),
    m_schedulerDescHasBeenSet(false),
    m_firstSubmitTimeHasBeenSet(false),
    m_firstRunTimeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectIdentHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_instanceKeyHasBeenSet(false),
    m_executorGroupIdHasBeenSet(false),
    m_executorGroupNameHasBeenSet(false),
    m_relatedInstanceListHasBeenSet(false),
    m_relatedInstanceSizeHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_instanceLifeCycleOpsDtoHasBeenSet(false),
    m_retryAttemptsHasBeenSet(false),
    m_deletedFatherListHasBeenSet(false),
    m_circulateInstanceListHasBeenSet(false),
    m_concurrentStrategyHasBeenSet(false),
    m_scheduleRunTypeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("InCharge") && !value["InCharge"].IsNull())
    {
        if (!value["InCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.InCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCharge = string(value["InCharge"].GetString());
        m_inChargeHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("CurRunDate") && !value["CurRunDate"].IsNull())
    {
        if (!value["CurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.CurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunDate = string(value["CurRunDate"].GetString());
        m_curRunDateHasBeenSet = true;
    }

    if (value.HasMember("NextCurDate") && !value["NextCurDate"].IsNull())
    {
        if (!value["NextCurDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.NextCurDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextCurDate = string(value["NextCurDate"].GetString());
        m_nextCurDateHasBeenSet = true;
    }

    if (value.HasMember("RunPriority") && !value["RunPriority"].IsNull())
    {
        if (!value["RunPriority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.RunPriority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runPriority = value["RunPriority"].GetUint64();
        m_runPriorityHasBeenSet = true;
    }

    if (value.HasMember("TryLimit") && !value["TryLimit"].IsNull())
    {
        if (!value["TryLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.TryLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tryLimit = value["TryLimit"].GetUint64();
        m_tryLimitHasBeenSet = true;
    }

    if (value.HasMember("Tries") && !value["Tries"].IsNull())
    {
        if (!value["Tries"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.Tries` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tries = value["Tries"].GetUint64();
        m_triesHasBeenSet = true;
    }

    if (value.HasMember("TotalRunNum") && !value["TotalRunNum"].IsNull())
    {
        if (!value["TotalRunNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.TotalRunNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRunNum = value["TotalRunNum"].GetUint64();
        m_totalRunNumHasBeenSet = true;
    }

    if (value.HasMember("DoFlag") && !value["DoFlag"].IsNull())
    {
        if (!value["DoFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.DoFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_doFlag = value["DoFlag"].GetUint64();
        m_doFlagHasBeenSet = true;
    }

    if (value.HasMember("RedoFlag") && !value["RedoFlag"].IsNull())
    {
        if (!value["RedoFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.RedoFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_redoFlag = value["RedoFlag"].GetUint64();
        m_redoFlagHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("RuntimeBroker") && !value["RuntimeBroker"].IsNull())
    {
        if (!value["RuntimeBroker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.RuntimeBroker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeBroker = string(value["RuntimeBroker"].GetString());
        m_runtimeBrokerHasBeenSet = true;
    }

    if (value.HasMember("ErrorDesc") && !value["ErrorDesc"].IsNull())
    {
        if (!value["ErrorDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.ErrorDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorDesc = string(value["ErrorDesc"].GetString());
        m_errorDescHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.TaskType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskType.Deserialize(value["TaskType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("DependenceFulfillTime") && !value["DependenceFulfillTime"].IsNull())
    {
        if (!value["DependenceFulfillTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.DependenceFulfillTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependenceFulfillTime = string(value["DependenceFulfillTime"].GetString());
        m_dependenceFulfillTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstDependenceFulfillTime") && !value["FirstDependenceFulfillTime"].IsNull())
    {
        if (!value["FirstDependenceFulfillTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.FirstDependenceFulfillTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstDependenceFulfillTime = string(value["FirstDependenceFulfillTime"].GetString());
        m_firstDependenceFulfillTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstStartTime") && !value["FirstStartTime"].IsNull())
    {
        if (!value["FirstStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.FirstStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstStartTime = string(value["FirstStartTime"].GetString());
        m_firstStartTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.CostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = string(value["CostTime"].GetString());
        m_costTimeHasBeenSet = true;
    }

    if (value.HasMember("CostMillisecond") && !value["CostMillisecond"].IsNull())
    {
        if (!value["CostMillisecond"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.CostMillisecond` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_costMillisecond = value["CostMillisecond"].GetUint64();
        m_costMillisecondHasBeenSet = true;
    }

    if (value.HasMember("MaxCostTime") && !value["MaxCostTime"].IsNull())
    {
        if (!value["MaxCostTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.MaxCostTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxCostTime = value["MaxCostTime"].GetUint64();
        m_maxCostTimeHasBeenSet = true;
    }

    if (value.HasMember("MinCostTime") && !value["MinCostTime"].IsNull())
    {
        if (!value["MinCostTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.MinCostTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minCostTime = value["MinCostTime"].GetUint64();
        m_minCostTimeHasBeenSet = true;
    }

    if (value.HasMember("AvgCostTime") && !value["AvgCostTime"].IsNull())
    {
        if (!value["AvgCostTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.AvgCostTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgCostTime = value["AvgCostTime"].GetDouble();
        m_avgCostTimeHasBeenSet = true;
    }

    if (value.HasMember("LastLog") && !value["LastLog"].IsNull())
    {
        if (!value["LastLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.LastLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLog = string(value["LastLog"].GetString());
        m_lastLogHasBeenSet = true;
    }

    if (value.HasMember("SchedulerDateTime") && !value["SchedulerDateTime"].IsNull())
    {
        if (!value["SchedulerDateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.SchedulerDateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerDateTime = string(value["SchedulerDateTime"].GetString());
        m_schedulerDateTimeHasBeenSet = true;
    }

    if (value.HasMember("LastSchedulerDateTime") && !value["LastSchedulerDateTime"].IsNull())
    {
        if (!value["LastSchedulerDateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.LastSchedulerDateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastSchedulerDateTime = string(value["LastSchedulerDateTime"].GetString());
        m_lastSchedulerDateTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdate") && !value["LastUpdate"].IsNull())
    {
        if (!value["LastUpdate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.LastUpdate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdate = string(value["LastUpdate"].GetString());
        m_lastUpdateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DependencyRel") && !value["DependencyRel"].IsNull())
    {
        if (!value["DependencyRel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.DependencyRel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyRel = string(value["DependencyRel"].GetString());
        m_dependencyRelHasBeenSet = true;
    }

    if (value.HasMember("ExecutionSpace") && !value["ExecutionSpace"].IsNull())
    {
        if (!value["ExecutionSpace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.ExecutionSpace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionSpace = string(value["ExecutionSpace"].GetString());
        m_executionSpaceHasBeenSet = true;
    }

    if (value.HasMember("IgnoreEvent") && !value["IgnoreEvent"].IsNull())
    {
        if (!value["IgnoreEvent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.IgnoreEvent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreEvent = value["IgnoreEvent"].GetBool();
        m_ignoreEventHasBeenSet = true;
    }

    if (value.HasMember("VirtualFlag") && !value["VirtualFlag"].IsNull())
    {
        if (!value["VirtualFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.VirtualFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_virtualFlag = value["VirtualFlag"].GetBool();
        m_virtualFlagHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("SonList") && !value["SonList"].IsNull())
    {
        if (!value["SonList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.SonList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sonList = string(value["SonList"].GetString());
        m_sonListHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroup") && !value["ResourceGroup"].IsNull())
    {
        if (!value["ResourceGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.ResourceGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroup = string(value["ResourceGroup"].GetString());
        m_resourceGroupHasBeenSet = true;
    }

    if (value.HasMember("ResourceInstanceId") && !value["ResourceInstanceId"].IsNull())
    {
        if (!value["ResourceInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.ResourceInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceInstanceId = string(value["ResourceInstanceId"].GetString());
        m_resourceInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("YarnQueue") && !value["YarnQueue"].IsNull())
    {
        if (!value["YarnQueue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.YarnQueue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yarnQueue = string(value["YarnQueue"].GetString());
        m_yarnQueueHasBeenSet = true;
    }

    if (value.HasMember("SchedulerDesc") && !value["SchedulerDesc"].IsNull())
    {
        if (!value["SchedulerDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.SchedulerDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerDesc = string(value["SchedulerDesc"].GetString());
        m_schedulerDescHasBeenSet = true;
    }

    if (value.HasMember("FirstSubmitTime") && !value["FirstSubmitTime"].IsNull())
    {
        if (!value["FirstSubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.FirstSubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstSubmitTime = string(value["FirstSubmitTime"].GetString());
        m_firstSubmitTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstRunTime") && !value["FirstRunTime"].IsNull())
    {
        if (!value["FirstRunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.FirstRunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstRunTime = string(value["FirstRunTime"].GetString());
        m_firstRunTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectIdent") && !value["ProjectIdent"].IsNull())
    {
        if (!value["ProjectIdent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.ProjectIdent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectIdent = string(value["ProjectIdent"].GetString());
        m_projectIdentHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.TenantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = string(value["TenantId"].GetString());
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceKey") && !value["InstanceKey"].IsNull())
    {
        if (!value["InstanceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.InstanceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceKey = string(value["InstanceKey"].GetString());
        m_instanceKeyHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupId") && !value["ExecutorGroupId"].IsNull())
    {
        if (!value["ExecutorGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.ExecutorGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupId = string(value["ExecutorGroupId"].GetString());
        m_executorGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupName") && !value["ExecutorGroupName"].IsNull())
    {
        if (!value["ExecutorGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.ExecutorGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupName = string(value["ExecutorGroupName"].GetString());
        m_executorGroupNameHasBeenSet = true;
    }

    if (value.HasMember("RelatedInstanceList") && !value["RelatedInstanceList"].IsNull())
    {
        if (!value["RelatedInstanceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.RelatedInstanceList` is not array type"));

        const rapidjson::Value &tmpValue = value["RelatedInstanceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceOpsDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_relatedInstanceList.push_back(item);
        }
        m_relatedInstanceListHasBeenSet = true;
    }

    if (value.HasMember("RelatedInstanceSize") && !value["RelatedInstanceSize"].IsNull())
    {
        if (!value["RelatedInstanceSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.RelatedInstanceSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_relatedInstanceSize = value["RelatedInstanceSize"].GetInt64();
        m_relatedInstanceSizeHasBeenSet = true;
    }

    if (value.HasMember("OwnerId") && !value["OwnerId"].IsNull())
    {
        if (!value["OwnerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.OwnerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerId = string(value["OwnerId"].GetString());
        m_ownerIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceLifeCycleOpsDto") && !value["InstanceLifeCycleOpsDto"].IsNull())
    {
        if (!value["InstanceLifeCycleOpsDto"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.InstanceLifeCycleOpsDto` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceLifeCycleOpsDto.Deserialize(value["InstanceLifeCycleOpsDto"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceLifeCycleOpsDtoHasBeenSet = true;
    }

    if (value.HasMember("RetryAttempts") && !value["RetryAttempts"].IsNull())
    {
        if (!value["RetryAttempts"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.RetryAttempts` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retryAttempts = value["RetryAttempts"].GetUint64();
        m_retryAttemptsHasBeenSet = true;
    }

    if (value.HasMember("DeletedFatherList") && !value["DeletedFatherList"].IsNull())
    {
        if (!value["DeletedFatherList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.DeletedFatherList` is not array type"));

        const rapidjson::Value &tmpValue = value["DeletedFatherList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_deletedFatherList.push_back((*itr).GetString());
        }
        m_deletedFatherListHasBeenSet = true;
    }

    if (value.HasMember("CirculateInstanceList") && !value["CirculateInstanceList"].IsNull())
    {
        if (!value["CirculateInstanceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.CirculateInstanceList` is not array type"));

        const rapidjson::Value &tmpValue = value["CirculateInstanceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceOpsDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_circulateInstanceList.push_back(item);
        }
        m_circulateInstanceListHasBeenSet = true;
    }

    if (value.HasMember("ConcurrentStrategy") && !value["ConcurrentStrategy"].IsNull())
    {
        if (!value["ConcurrentStrategy"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.ConcurrentStrategy` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_concurrentStrategy = value["ConcurrentStrategy"].GetUint64();
        m_concurrentStrategyHasBeenSet = true;
    }

    if (value.HasMember("ScheduleRunType") && !value["ScheduleRunType"].IsNull())
    {
        if (!value["ScheduleRunType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOpsDto.ScheduleRunType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleRunType = value["ScheduleRunType"].GetUint64();
        m_scheduleRunTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_inChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_nextCurDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextCurDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextCurDate.c_str(), allocator).Move(), allocator);
    }

    if (m_runPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunPriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runPriority, allocator);
    }

    if (m_tryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tryLimit, allocator);
    }

    if (m_triesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tries, allocator);
    }

    if (m_totalRunNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRunNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRunNum, allocator);
    }

    if (m_doFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_doFlag, allocator);
    }

    if (m_redoFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedoFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redoFlag, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeBrokerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeBroker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeBroker.c_str(), allocator).Move(), allocator);
    }

    if (m_errorDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskType.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dependenceFulfillTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependenceFulfillTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependenceFulfillTime.c_str(), allocator).Move(), allocator);
    }

    if (m_firstDependenceFulfillTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstDependenceFulfillTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstDependenceFulfillTime.c_str(), allocator).Move(), allocator);
    }

    if (m_firstStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstStartTime.c_str(), allocator).Move(), allocator);
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

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_costTime.c_str(), allocator).Move(), allocator);
    }

    if (m_costMillisecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostMillisecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costMillisecond, allocator);
    }

    if (m_maxCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCostTime, allocator);
    }

    if (m_minCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minCostTime, allocator);
    }

    if (m_avgCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgCostTime, allocator);
    }

    if (m_lastLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastLog.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerDateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerDateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastSchedulerDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastSchedulerDateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastSchedulerDateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdate.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyRelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyRel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependencyRel.c_str(), allocator).Move(), allocator);
    }

    if (m_executionSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionSpace.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoreEvent, allocator);
    }

    if (m_virtualFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virtualFlag, allocator);
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

    if (m_sonListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SonList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sonList.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_yarnQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YarnQueue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yarnQueue.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerDesc.c_str(), allocator).Move(), allocator);
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

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceKey.c_str(), allocator).Move(), allocator);
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

    if (m_relatedInstanceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedInstanceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_relatedInstanceList.begin(); itr != m_relatedInstanceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_relatedInstanceSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedInstanceSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relatedInstanceSize, allocator);
    }

    if (m_ownerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceLifeCycleOpsDtoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceLifeCycleOpsDto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceLifeCycleOpsDto.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_retryAttemptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryAttempts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryAttempts, allocator);
    }

    if (m_deletedFatherListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletedFatherList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deletedFatherList.begin(); itr != m_deletedFatherList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_circulateInstanceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CirculateInstanceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_circulateInstanceList.begin(); itr != m_circulateInstanceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_concurrentStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcurrentStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concurrentStrategy, allocator);
    }

    if (m_scheduleRunTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleRunType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scheduleRunType, allocator);
    }

}


string InstanceOpsDto::GetTaskId() const
{
    return m_taskId;
}

void InstanceOpsDto::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool InstanceOpsDto::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string InstanceOpsDto::GetTaskName() const
{
    return m_taskName;
}

void InstanceOpsDto::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool InstanceOpsDto::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string InstanceOpsDto::GetWorkflowId() const
{
    return m_workflowId;
}

void InstanceOpsDto::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool InstanceOpsDto::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string InstanceOpsDto::GetWorkflowName() const
{
    return m_workflowName;
}

void InstanceOpsDto::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool InstanceOpsDto::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string InstanceOpsDto::GetInCharge() const
{
    return m_inCharge;
}

void InstanceOpsDto::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool InstanceOpsDto::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

string InstanceOpsDto::GetCycleType() const
{
    return m_cycleType;
}

void InstanceOpsDto::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool InstanceOpsDto::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

string InstanceOpsDto::GetCurRunDate() const
{
    return m_curRunDate;
}

void InstanceOpsDto::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool InstanceOpsDto::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string InstanceOpsDto::GetNextCurDate() const
{
    return m_nextCurDate;
}

void InstanceOpsDto::SetNextCurDate(const string& _nextCurDate)
{
    m_nextCurDate = _nextCurDate;
    m_nextCurDateHasBeenSet = true;
}

bool InstanceOpsDto::NextCurDateHasBeenSet() const
{
    return m_nextCurDateHasBeenSet;
}

uint64_t InstanceOpsDto::GetRunPriority() const
{
    return m_runPriority;
}

void InstanceOpsDto::SetRunPriority(const uint64_t& _runPriority)
{
    m_runPriority = _runPriority;
    m_runPriorityHasBeenSet = true;
}

bool InstanceOpsDto::RunPriorityHasBeenSet() const
{
    return m_runPriorityHasBeenSet;
}

uint64_t InstanceOpsDto::GetTryLimit() const
{
    return m_tryLimit;
}

void InstanceOpsDto::SetTryLimit(const uint64_t& _tryLimit)
{
    m_tryLimit = _tryLimit;
    m_tryLimitHasBeenSet = true;
}

bool InstanceOpsDto::TryLimitHasBeenSet() const
{
    return m_tryLimitHasBeenSet;
}

uint64_t InstanceOpsDto::GetTries() const
{
    return m_tries;
}

void InstanceOpsDto::SetTries(const uint64_t& _tries)
{
    m_tries = _tries;
    m_triesHasBeenSet = true;
}

bool InstanceOpsDto::TriesHasBeenSet() const
{
    return m_triesHasBeenSet;
}

uint64_t InstanceOpsDto::GetTotalRunNum() const
{
    return m_totalRunNum;
}

void InstanceOpsDto::SetTotalRunNum(const uint64_t& _totalRunNum)
{
    m_totalRunNum = _totalRunNum;
    m_totalRunNumHasBeenSet = true;
}

bool InstanceOpsDto::TotalRunNumHasBeenSet() const
{
    return m_totalRunNumHasBeenSet;
}

uint64_t InstanceOpsDto::GetDoFlag() const
{
    return m_doFlag;
}

void InstanceOpsDto::SetDoFlag(const uint64_t& _doFlag)
{
    m_doFlag = _doFlag;
    m_doFlagHasBeenSet = true;
}

bool InstanceOpsDto::DoFlagHasBeenSet() const
{
    return m_doFlagHasBeenSet;
}

uint64_t InstanceOpsDto::GetRedoFlag() const
{
    return m_redoFlag;
}

void InstanceOpsDto::SetRedoFlag(const uint64_t& _redoFlag)
{
    m_redoFlag = _redoFlag;
    m_redoFlagHasBeenSet = true;
}

bool InstanceOpsDto::RedoFlagHasBeenSet() const
{
    return m_redoFlagHasBeenSet;
}

string InstanceOpsDto::GetState() const
{
    return m_state;
}

void InstanceOpsDto::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool InstanceOpsDto::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string InstanceOpsDto::GetRuntimeBroker() const
{
    return m_runtimeBroker;
}

void InstanceOpsDto::SetRuntimeBroker(const string& _runtimeBroker)
{
    m_runtimeBroker = _runtimeBroker;
    m_runtimeBrokerHasBeenSet = true;
}

bool InstanceOpsDto::RuntimeBrokerHasBeenSet() const
{
    return m_runtimeBrokerHasBeenSet;
}

string InstanceOpsDto::GetErrorDesc() const
{
    return m_errorDesc;
}

void InstanceOpsDto::SetErrorDesc(const string& _errorDesc)
{
    m_errorDesc = _errorDesc;
    m_errorDescHasBeenSet = true;
}

bool InstanceOpsDto::ErrorDescHasBeenSet() const
{
    return m_errorDescHasBeenSet;
}

TaskTypeOpsDto InstanceOpsDto::GetTaskType() const
{
    return m_taskType;
}

void InstanceOpsDto::SetTaskType(const TaskTypeOpsDto& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool InstanceOpsDto::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string InstanceOpsDto::GetDependenceFulfillTime() const
{
    return m_dependenceFulfillTime;
}

void InstanceOpsDto::SetDependenceFulfillTime(const string& _dependenceFulfillTime)
{
    m_dependenceFulfillTime = _dependenceFulfillTime;
    m_dependenceFulfillTimeHasBeenSet = true;
}

bool InstanceOpsDto::DependenceFulfillTimeHasBeenSet() const
{
    return m_dependenceFulfillTimeHasBeenSet;
}

string InstanceOpsDto::GetFirstDependenceFulfillTime() const
{
    return m_firstDependenceFulfillTime;
}

void InstanceOpsDto::SetFirstDependenceFulfillTime(const string& _firstDependenceFulfillTime)
{
    m_firstDependenceFulfillTime = _firstDependenceFulfillTime;
    m_firstDependenceFulfillTimeHasBeenSet = true;
}

bool InstanceOpsDto::FirstDependenceFulfillTimeHasBeenSet() const
{
    return m_firstDependenceFulfillTimeHasBeenSet;
}

string InstanceOpsDto::GetFirstStartTime() const
{
    return m_firstStartTime;
}

void InstanceOpsDto::SetFirstStartTime(const string& _firstStartTime)
{
    m_firstStartTime = _firstStartTime;
    m_firstStartTimeHasBeenSet = true;
}

bool InstanceOpsDto::FirstStartTimeHasBeenSet() const
{
    return m_firstStartTimeHasBeenSet;
}

string InstanceOpsDto::GetStartTime() const
{
    return m_startTime;
}

void InstanceOpsDto::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool InstanceOpsDto::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string InstanceOpsDto::GetEndTime() const
{
    return m_endTime;
}

void InstanceOpsDto::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool InstanceOpsDto::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string InstanceOpsDto::GetCostTime() const
{
    return m_costTime;
}

void InstanceOpsDto::SetCostTime(const string& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool InstanceOpsDto::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

uint64_t InstanceOpsDto::GetCostMillisecond() const
{
    return m_costMillisecond;
}

void InstanceOpsDto::SetCostMillisecond(const uint64_t& _costMillisecond)
{
    m_costMillisecond = _costMillisecond;
    m_costMillisecondHasBeenSet = true;
}

bool InstanceOpsDto::CostMillisecondHasBeenSet() const
{
    return m_costMillisecondHasBeenSet;
}

uint64_t InstanceOpsDto::GetMaxCostTime() const
{
    return m_maxCostTime;
}

void InstanceOpsDto::SetMaxCostTime(const uint64_t& _maxCostTime)
{
    m_maxCostTime = _maxCostTime;
    m_maxCostTimeHasBeenSet = true;
}

bool InstanceOpsDto::MaxCostTimeHasBeenSet() const
{
    return m_maxCostTimeHasBeenSet;
}

uint64_t InstanceOpsDto::GetMinCostTime() const
{
    return m_minCostTime;
}

void InstanceOpsDto::SetMinCostTime(const uint64_t& _minCostTime)
{
    m_minCostTime = _minCostTime;
    m_minCostTimeHasBeenSet = true;
}

bool InstanceOpsDto::MinCostTimeHasBeenSet() const
{
    return m_minCostTimeHasBeenSet;
}

double InstanceOpsDto::GetAvgCostTime() const
{
    return m_avgCostTime;
}

void InstanceOpsDto::SetAvgCostTime(const double& _avgCostTime)
{
    m_avgCostTime = _avgCostTime;
    m_avgCostTimeHasBeenSet = true;
}

bool InstanceOpsDto::AvgCostTimeHasBeenSet() const
{
    return m_avgCostTimeHasBeenSet;
}

string InstanceOpsDto::GetLastLog() const
{
    return m_lastLog;
}

void InstanceOpsDto::SetLastLog(const string& _lastLog)
{
    m_lastLog = _lastLog;
    m_lastLogHasBeenSet = true;
}

bool InstanceOpsDto::LastLogHasBeenSet() const
{
    return m_lastLogHasBeenSet;
}

string InstanceOpsDto::GetSchedulerDateTime() const
{
    return m_schedulerDateTime;
}

void InstanceOpsDto::SetSchedulerDateTime(const string& _schedulerDateTime)
{
    m_schedulerDateTime = _schedulerDateTime;
    m_schedulerDateTimeHasBeenSet = true;
}

bool InstanceOpsDto::SchedulerDateTimeHasBeenSet() const
{
    return m_schedulerDateTimeHasBeenSet;
}

string InstanceOpsDto::GetLastSchedulerDateTime() const
{
    return m_lastSchedulerDateTime;
}

void InstanceOpsDto::SetLastSchedulerDateTime(const string& _lastSchedulerDateTime)
{
    m_lastSchedulerDateTime = _lastSchedulerDateTime;
    m_lastSchedulerDateTimeHasBeenSet = true;
}

bool InstanceOpsDto::LastSchedulerDateTimeHasBeenSet() const
{
    return m_lastSchedulerDateTimeHasBeenSet;
}

string InstanceOpsDto::GetLastUpdate() const
{
    return m_lastUpdate;
}

void InstanceOpsDto::SetLastUpdate(const string& _lastUpdate)
{
    m_lastUpdate = _lastUpdate;
    m_lastUpdateHasBeenSet = true;
}

bool InstanceOpsDto::LastUpdateHasBeenSet() const
{
    return m_lastUpdateHasBeenSet;
}

string InstanceOpsDto::GetCreateTime() const
{
    return m_createTime;
}

void InstanceOpsDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceOpsDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InstanceOpsDto::GetDependencyRel() const
{
    return m_dependencyRel;
}

void InstanceOpsDto::SetDependencyRel(const string& _dependencyRel)
{
    m_dependencyRel = _dependencyRel;
    m_dependencyRelHasBeenSet = true;
}

bool InstanceOpsDto::DependencyRelHasBeenSet() const
{
    return m_dependencyRelHasBeenSet;
}

string InstanceOpsDto::GetExecutionSpace() const
{
    return m_executionSpace;
}

void InstanceOpsDto::SetExecutionSpace(const string& _executionSpace)
{
    m_executionSpace = _executionSpace;
    m_executionSpaceHasBeenSet = true;
}

bool InstanceOpsDto::ExecutionSpaceHasBeenSet() const
{
    return m_executionSpaceHasBeenSet;
}

bool InstanceOpsDto::GetIgnoreEvent() const
{
    return m_ignoreEvent;
}

void InstanceOpsDto::SetIgnoreEvent(const bool& _ignoreEvent)
{
    m_ignoreEvent = _ignoreEvent;
    m_ignoreEventHasBeenSet = true;
}

bool InstanceOpsDto::IgnoreEventHasBeenSet() const
{
    return m_ignoreEventHasBeenSet;
}

bool InstanceOpsDto::GetVirtualFlag() const
{
    return m_virtualFlag;
}

void InstanceOpsDto::SetVirtualFlag(const bool& _virtualFlag)
{
    m_virtualFlag = _virtualFlag;
    m_virtualFlagHasBeenSet = true;
}

bool InstanceOpsDto::VirtualFlagHasBeenSet() const
{
    return m_virtualFlagHasBeenSet;
}

string InstanceOpsDto::GetFolderId() const
{
    return m_folderId;
}

void InstanceOpsDto::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool InstanceOpsDto::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string InstanceOpsDto::GetFolderName() const
{
    return m_folderName;
}

void InstanceOpsDto::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool InstanceOpsDto::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string InstanceOpsDto::GetSonList() const
{
    return m_sonList;
}

void InstanceOpsDto::SetSonList(const string& _sonList)
{
    m_sonList = _sonList;
    m_sonListHasBeenSet = true;
}

bool InstanceOpsDto::SonListHasBeenSet() const
{
    return m_sonListHasBeenSet;
}

string InstanceOpsDto::GetProductName() const
{
    return m_productName;
}

void InstanceOpsDto::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool InstanceOpsDto::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string InstanceOpsDto::GetResourceGroup() const
{
    return m_resourceGroup;
}

void InstanceOpsDto::SetResourceGroup(const string& _resourceGroup)
{
    m_resourceGroup = _resourceGroup;
    m_resourceGroupHasBeenSet = true;
}

bool InstanceOpsDto::ResourceGroupHasBeenSet() const
{
    return m_resourceGroupHasBeenSet;
}

string InstanceOpsDto::GetResourceInstanceId() const
{
    return m_resourceInstanceId;
}

void InstanceOpsDto::SetResourceInstanceId(const string& _resourceInstanceId)
{
    m_resourceInstanceId = _resourceInstanceId;
    m_resourceInstanceIdHasBeenSet = true;
}

bool InstanceOpsDto::ResourceInstanceIdHasBeenSet() const
{
    return m_resourceInstanceIdHasBeenSet;
}

string InstanceOpsDto::GetYarnQueue() const
{
    return m_yarnQueue;
}

void InstanceOpsDto::SetYarnQueue(const string& _yarnQueue)
{
    m_yarnQueue = _yarnQueue;
    m_yarnQueueHasBeenSet = true;
}

bool InstanceOpsDto::YarnQueueHasBeenSet() const
{
    return m_yarnQueueHasBeenSet;
}

string InstanceOpsDto::GetSchedulerDesc() const
{
    return m_schedulerDesc;
}

void InstanceOpsDto::SetSchedulerDesc(const string& _schedulerDesc)
{
    m_schedulerDesc = _schedulerDesc;
    m_schedulerDescHasBeenSet = true;
}

bool InstanceOpsDto::SchedulerDescHasBeenSet() const
{
    return m_schedulerDescHasBeenSet;
}

string InstanceOpsDto::GetFirstSubmitTime() const
{
    return m_firstSubmitTime;
}

void InstanceOpsDto::SetFirstSubmitTime(const string& _firstSubmitTime)
{
    m_firstSubmitTime = _firstSubmitTime;
    m_firstSubmitTimeHasBeenSet = true;
}

bool InstanceOpsDto::FirstSubmitTimeHasBeenSet() const
{
    return m_firstSubmitTimeHasBeenSet;
}

string InstanceOpsDto::GetFirstRunTime() const
{
    return m_firstRunTime;
}

void InstanceOpsDto::SetFirstRunTime(const string& _firstRunTime)
{
    m_firstRunTime = _firstRunTime;
    m_firstRunTimeHasBeenSet = true;
}

bool InstanceOpsDto::FirstRunTimeHasBeenSet() const
{
    return m_firstRunTimeHasBeenSet;
}

string InstanceOpsDto::GetProjectId() const
{
    return m_projectId;
}

void InstanceOpsDto::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool InstanceOpsDto::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string InstanceOpsDto::GetProjectIdent() const
{
    return m_projectIdent;
}

void InstanceOpsDto::SetProjectIdent(const string& _projectIdent)
{
    m_projectIdent = _projectIdent;
    m_projectIdentHasBeenSet = true;
}

bool InstanceOpsDto::ProjectIdentHasBeenSet() const
{
    return m_projectIdentHasBeenSet;
}

string InstanceOpsDto::GetProjectName() const
{
    return m_projectName;
}

void InstanceOpsDto::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool InstanceOpsDto::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string InstanceOpsDto::GetTenantId() const
{
    return m_tenantId;
}

void InstanceOpsDto::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool InstanceOpsDto::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string InstanceOpsDto::GetInstanceKey() const
{
    return m_instanceKey;
}

void InstanceOpsDto::SetInstanceKey(const string& _instanceKey)
{
    m_instanceKey = _instanceKey;
    m_instanceKeyHasBeenSet = true;
}

bool InstanceOpsDto::InstanceKeyHasBeenSet() const
{
    return m_instanceKeyHasBeenSet;
}

string InstanceOpsDto::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void InstanceOpsDto::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool InstanceOpsDto::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

string InstanceOpsDto::GetExecutorGroupName() const
{
    return m_executorGroupName;
}

void InstanceOpsDto::SetExecutorGroupName(const string& _executorGroupName)
{
    m_executorGroupName = _executorGroupName;
    m_executorGroupNameHasBeenSet = true;
}

bool InstanceOpsDto::ExecutorGroupNameHasBeenSet() const
{
    return m_executorGroupNameHasBeenSet;
}

vector<InstanceOpsDto> InstanceOpsDto::GetRelatedInstanceList() const
{
    return m_relatedInstanceList;
}

void InstanceOpsDto::SetRelatedInstanceList(const vector<InstanceOpsDto>& _relatedInstanceList)
{
    m_relatedInstanceList = _relatedInstanceList;
    m_relatedInstanceListHasBeenSet = true;
}

bool InstanceOpsDto::RelatedInstanceListHasBeenSet() const
{
    return m_relatedInstanceListHasBeenSet;
}

int64_t InstanceOpsDto::GetRelatedInstanceSize() const
{
    return m_relatedInstanceSize;
}

void InstanceOpsDto::SetRelatedInstanceSize(const int64_t& _relatedInstanceSize)
{
    m_relatedInstanceSize = _relatedInstanceSize;
    m_relatedInstanceSizeHasBeenSet = true;
}

bool InstanceOpsDto::RelatedInstanceSizeHasBeenSet() const
{
    return m_relatedInstanceSizeHasBeenSet;
}

string InstanceOpsDto::GetOwnerId() const
{
    return m_ownerId;
}

void InstanceOpsDto::SetOwnerId(const string& _ownerId)
{
    m_ownerId = _ownerId;
    m_ownerIdHasBeenSet = true;
}

bool InstanceOpsDto::OwnerIdHasBeenSet() const
{
    return m_ownerIdHasBeenSet;
}

string InstanceOpsDto::GetUserId() const
{
    return m_userId;
}

void InstanceOpsDto::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool InstanceOpsDto::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

InstanceLifeCycleOpsDto InstanceOpsDto::GetInstanceLifeCycleOpsDto() const
{
    return m_instanceLifeCycleOpsDto;
}

void InstanceOpsDto::SetInstanceLifeCycleOpsDto(const InstanceLifeCycleOpsDto& _instanceLifeCycleOpsDto)
{
    m_instanceLifeCycleOpsDto = _instanceLifeCycleOpsDto;
    m_instanceLifeCycleOpsDtoHasBeenSet = true;
}

bool InstanceOpsDto::InstanceLifeCycleOpsDtoHasBeenSet() const
{
    return m_instanceLifeCycleOpsDtoHasBeenSet;
}

uint64_t InstanceOpsDto::GetRetryAttempts() const
{
    return m_retryAttempts;
}

void InstanceOpsDto::SetRetryAttempts(const uint64_t& _retryAttempts)
{
    m_retryAttempts = _retryAttempts;
    m_retryAttemptsHasBeenSet = true;
}

bool InstanceOpsDto::RetryAttemptsHasBeenSet() const
{
    return m_retryAttemptsHasBeenSet;
}

vector<string> InstanceOpsDto::GetDeletedFatherList() const
{
    return m_deletedFatherList;
}

void InstanceOpsDto::SetDeletedFatherList(const vector<string>& _deletedFatherList)
{
    m_deletedFatherList = _deletedFatherList;
    m_deletedFatherListHasBeenSet = true;
}

bool InstanceOpsDto::DeletedFatherListHasBeenSet() const
{
    return m_deletedFatherListHasBeenSet;
}

vector<InstanceOpsDto> InstanceOpsDto::GetCirculateInstanceList() const
{
    return m_circulateInstanceList;
}

void InstanceOpsDto::SetCirculateInstanceList(const vector<InstanceOpsDto>& _circulateInstanceList)
{
    m_circulateInstanceList = _circulateInstanceList;
    m_circulateInstanceListHasBeenSet = true;
}

bool InstanceOpsDto::CirculateInstanceListHasBeenSet() const
{
    return m_circulateInstanceListHasBeenSet;
}

uint64_t InstanceOpsDto::GetConcurrentStrategy() const
{
    return m_concurrentStrategy;
}

void InstanceOpsDto::SetConcurrentStrategy(const uint64_t& _concurrentStrategy)
{
    m_concurrentStrategy = _concurrentStrategy;
    m_concurrentStrategyHasBeenSet = true;
}

bool InstanceOpsDto::ConcurrentStrategyHasBeenSet() const
{
    return m_concurrentStrategyHasBeenSet;
}

uint64_t InstanceOpsDto::GetScheduleRunType() const
{
    return m_scheduleRunType;
}

void InstanceOpsDto::SetScheduleRunType(const uint64_t& _scheduleRunType)
{
    m_scheduleRunType = _scheduleRunType;
    m_scheduleRunTypeHasBeenSet = true;
}

bool InstanceOpsDto::ScheduleRunTypeHasBeenSet() const
{
    return m_scheduleRunTypeHasBeenSet;
}

