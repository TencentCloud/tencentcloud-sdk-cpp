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

#include <tencentcloud/wedata/v20210820/model/TaskDsDTOLite.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskDsDTOLite::TaskDsDTOLite() :
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
    m_projectIdHasBeenSet(false),
    m_projectIdentHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_cycleStepHasBeenSet(false),
    m_crontabExpressionHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
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
    m_executionTTLHasBeenSet(false),
    m_selfDependHasBeenSet(false),
    m_leftCoordinateHasBeenSet(false),
    m_topCoordinateHasBeenSet(false),
    m_taskExtHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_instanceInitStrategyHasBeenSet(false),
    m_yarnQueueHasBeenSet(false),
    m_alarmsHasBeenSet(false),
    m_alarmHasBeenSet(false),
    m_scriptChangeHasBeenSet(false),
    m_submitHasBeenSet(false),
    m_lastSchedulerCommitTimeHasBeenSet(false),
    m_normalizedJobStartTimeHasBeenSet(false),
    m_recoverFreezeStartTimeHasBeenSet(false),
    m_sourceServerHasBeenSet(false),
    m_targetServerHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_createrHasBeenSet(false),
    m_dependencyRelHasBeenSet(false),
    m_dependencyWorkflowHasBeenSet(false),
    m_eventListenerConfigHasBeenSet(false),
    m_eventPublisherConfigHasBeenSet(false),
    m_dependencyConfigListHasBeenSet(false),
    m_virtualTaskStatusHasBeenSet(false),
    m_recycleTipsHasBeenSet(false),
    m_recycleUserHasBeenSet(false),
    m_newOrUpdateHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_taskLinkInfoHasBeenSet(false),
    m_importResultHasBeenSet(false),
    m_importErrMsgHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_taskAutoSubmitHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_ownIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_updateUserHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_updateUserIdHasBeenSet(false),
    m_schedulerDescHasBeenSet(false),
    m_resourceGroupHasBeenSet(false),
    m_versionDescHasBeenSet(false),
    m_linkIdHasBeenSet(false),
    m_userFileIdHasBeenSet(false)
{
}

CoreInternalOutcome TaskDsDTOLite::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("VirtualTaskId") && !value["VirtualTaskId"].IsNull())
    {
        if (!value["VirtualTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.VirtualTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualTaskId = string(value["VirtualTaskId"].GetString());
        m_virtualTaskIdHasBeenSet = true;
    }

    if (value.HasMember("VirtualFlag") && !value["VirtualFlag"].IsNull())
    {
        if (!value["VirtualFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.VirtualFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_virtualFlag = value["VirtualFlag"].GetBool();
        m_virtualFlagHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("RealWorkflowId") && !value["RealWorkflowId"].IsNull())
    {
        if (!value["RealWorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.RealWorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realWorkflowId = string(value["RealWorkflowId"].GetString());
        m_realWorkflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdate") && !value["LastUpdate"].IsNull())
    {
        if (!value["LastUpdate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.LastUpdate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdate = string(value["LastUpdate"].GetString());
        m_lastUpdateHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("InCharge") && !value["InCharge"].IsNull())
    {
        if (!value["InCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.InCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCharge = string(value["InCharge"].GetString());
        m_inChargeHasBeenSet = true;
    }

    if (value.HasMember("InChargeId") && !value["InChargeId"].IsNull())
    {
        if (!value["InChargeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.InChargeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inChargeId = string(value["InChargeId"].GetString());
        m_inChargeIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStartTime") && !value["ExecutionStartTime"].IsNull())
    {
        if (!value["ExecutionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.ExecutionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStartTime = string(value["ExecutionStartTime"].GetString());
        m_executionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionEndTime") && !value["ExecutionEndTime"].IsNull())
    {
        if (!value["ExecutionEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.ExecutionEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionEndTime = string(value["ExecutionEndTime"].GetString());
        m_executionEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectIdent") && !value["ProjectIdent"].IsNull())
    {
        if (!value["ProjectIdent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.ProjectIdent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectIdent = string(value["ProjectIdent"].GetString());
        m_projectIdentHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("CycleStep") && !value["CycleStep"].IsNull())
    {
        if (!value["CycleStep"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.CycleStep` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleStep = value["CycleStep"].GetInt64();
        m_cycleStepHasBeenSet = true;
    }

    if (value.HasMember("CrontabExpression") && !value["CrontabExpression"].IsNull())
    {
        if (!value["CrontabExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.CrontabExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crontabExpression = string(value["CrontabExpression"].GetString());
        m_crontabExpressionHasBeenSet = true;
    }

    if (value.HasMember("DelayTime") && !value["DelayTime"].IsNull())
    {
        if (!value["DelayTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.DelayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_delayTime = value["DelayTime"].GetInt64();
        m_delayTimeHasBeenSet = true;
    }

    if (value.HasMember("StartupTime") && !value["StartupTime"].IsNull())
    {
        if (!value["StartupTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.StartupTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startupTime = value["StartupTime"].GetInt64();
        m_startupTimeHasBeenSet = true;
    }

    if (value.HasMember("RetryWait") && !value["RetryWait"].IsNull())
    {
        if (!value["RetryWait"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.RetryWait` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryWait = value["RetryWait"].GetInt64();
        m_retryWaitHasBeenSet = true;
    }

    if (value.HasMember("Retriable") && !value["Retriable"].IsNull())
    {
        if (!value["Retriable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.Retriable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retriable = value["Retriable"].GetInt64();
        m_retriableHasBeenSet = true;
    }

    if (value.HasMember("TaskAction") && !value["TaskAction"].IsNull())
    {
        if (!value["TaskAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.TaskAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskAction = string(value["TaskAction"].GetString());
        m_taskActionHasBeenSet = true;
    }

    if (value.HasMember("TryLimit") && !value["TryLimit"].IsNull())
    {
        if (!value["TryLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.TryLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tryLimit = value["TryLimit"].GetInt64();
        m_tryLimitHasBeenSet = true;
    }

    if (value.HasMember("RunPriority") && !value["RunPriority"].IsNull())
    {
        if (!value["RunPriority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.RunPriority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runPriority = value["RunPriority"].GetInt64();
        m_runPriorityHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.TaskType` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.BrokerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokerIp = string(value["BrokerIp"].GetString());
        m_brokerIpHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("MinDateTime") && !value["MinDateTime"].IsNull())
    {
        if (!value["MinDateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.MinDateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minDateTime = string(value["MinDateTime"].GetString());
        m_minDateTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxDateTime") && !value["MaxDateTime"].IsNull())
    {
        if (!value["MaxDateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.MaxDateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxDateTime = string(value["MaxDateTime"].GetString());
        m_maxDateTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionTTL") && !value["ExecutionTTL"].IsNull())
    {
        if (!value["ExecutionTTL"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.ExecutionTTL` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executionTTL = value["ExecutionTTL"].GetInt64();
        m_executionTTLHasBeenSet = true;
    }

    if (value.HasMember("SelfDepend") && !value["SelfDepend"].IsNull())
    {
        if (!value["SelfDepend"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.SelfDepend` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_selfDepend = value["SelfDepend"].GetInt64();
        m_selfDependHasBeenSet = true;
    }

    if (value.HasMember("LeftCoordinate") && !value["LeftCoordinate"].IsNull())
    {
        if (!value["LeftCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.LeftCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_leftCoordinate = value["LeftCoordinate"].GetDouble();
        m_leftCoordinateHasBeenSet = true;
    }

    if (value.HasMember("TopCoordinate") && !value["TopCoordinate"].IsNull())
    {
        if (!value["TopCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.TopCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_topCoordinate = value["TopCoordinate"].GetDouble();
        m_topCoordinateHasBeenSet = true;
    }

    if (value.HasMember("TaskExt") && !value["TaskExt"].IsNull())
    {
        if (!value["TaskExt"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.TaskExt` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskExt.Deserialize(value["TaskExt"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskExtHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.Properties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_properties = string(value["Properties"].GetString());
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("Notes") && !value["Notes"].IsNull())
    {
        if (!value["Notes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.Notes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notes = string(value["Notes"].GetString());
        m_notesHasBeenSet = true;
    }

    if (value.HasMember("InstanceInitStrategy") && !value["InstanceInitStrategy"].IsNull())
    {
        if (!value["InstanceInitStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.InstanceInitStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceInitStrategy = string(value["InstanceInitStrategy"].GetString());
        m_instanceInitStrategyHasBeenSet = true;
    }

    if (value.HasMember("YarnQueue") && !value["YarnQueue"].IsNull())
    {
        if (!value["YarnQueue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.YarnQueue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yarnQueue = string(value["YarnQueue"].GetString());
        m_yarnQueueHasBeenSet = true;
    }

    if (value.HasMember("Alarms") && !value["Alarms"].IsNull())
    {
        if (!value["Alarms"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.Alarms` is not array type"));

        const rapidjson::Value &tmpValue = value["Alarms"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_alarms.push_back(item);
        }
        m_alarmsHasBeenSet = true;
    }

    if (value.HasMember("Alarm") && !value["Alarm"].IsNull())
    {
        if (!value["Alarm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.Alarm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarm = string(value["Alarm"].GetString());
        m_alarmHasBeenSet = true;
    }

    if (value.HasMember("ScriptChange") && !value["ScriptChange"].IsNull())
    {
        if (!value["ScriptChange"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.ScriptChange` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scriptChange = value["ScriptChange"].GetBool();
        m_scriptChangeHasBeenSet = true;
    }

    if (value.HasMember("Submit") && !value["Submit"].IsNull())
    {
        if (!value["Submit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.Submit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_submit = value["Submit"].GetBool();
        m_submitHasBeenSet = true;
    }

    if (value.HasMember("LastSchedulerCommitTime") && !value["LastSchedulerCommitTime"].IsNull())
    {
        if (!value["LastSchedulerCommitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.LastSchedulerCommitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastSchedulerCommitTime = string(value["LastSchedulerCommitTime"].GetString());
        m_lastSchedulerCommitTimeHasBeenSet = true;
    }

    if (value.HasMember("NormalizedJobStartTime") && !value["NormalizedJobStartTime"].IsNull())
    {
        if (!value["NormalizedJobStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.NormalizedJobStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_normalizedJobStartTime = string(value["NormalizedJobStartTime"].GetString());
        m_normalizedJobStartTimeHasBeenSet = true;
    }

    if (value.HasMember("RecoverFreezeStartTime") && !value["RecoverFreezeStartTime"].IsNull())
    {
        if (!value["RecoverFreezeStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.RecoverFreezeStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recoverFreezeStartTime = string(value["RecoverFreezeStartTime"].GetString());
        m_recoverFreezeStartTimeHasBeenSet = true;
    }

    if (value.HasMember("SourceServer") && !value["SourceServer"].IsNull())
    {
        if (!value["SourceServer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.SourceServer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceServer = string(value["SourceServer"].GetString());
        m_sourceServerHasBeenSet = true;
    }

    if (value.HasMember("TargetServer") && !value["TargetServer"].IsNull())
    {
        if (!value["TargetServer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.TargetServer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetServer = string(value["TargetServer"].GetString());
        m_targetServerHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.Tasks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskDsDTONoRecur item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tasks.push_back(item);
        }
        m_tasksHasBeenSet = true;
    }

    if (value.HasMember("Creater") && !value["Creater"].IsNull())
    {
        if (!value["Creater"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.Creater` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creater = string(value["Creater"].GetString());
        m_createrHasBeenSet = true;
    }

    if (value.HasMember("DependencyRel") && !value["DependencyRel"].IsNull())
    {
        if (!value["DependencyRel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.DependencyRel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyRel = string(value["DependencyRel"].GetString());
        m_dependencyRelHasBeenSet = true;
    }

    if (value.HasMember("DependencyWorkflow") && !value["DependencyWorkflow"].IsNull())
    {
        if (!value["DependencyWorkflow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.DependencyWorkflow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyWorkflow = string(value["DependencyWorkflow"].GetString());
        m_dependencyWorkflowHasBeenSet = true;
    }

    if (value.HasMember("EventListenerConfig") && !value["EventListenerConfig"].IsNull())
    {
        if (!value["EventListenerConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.EventListenerConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventListenerConfig = string(value["EventListenerConfig"].GetString());
        m_eventListenerConfigHasBeenSet = true;
    }

    if (value.HasMember("EventPublisherConfig") && !value["EventPublisherConfig"].IsNull())
    {
        if (!value["EventPublisherConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.EventPublisherConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventPublisherConfig = string(value["EventPublisherConfig"].GetString());
        m_eventPublisherConfigHasBeenSet = true;
    }

    if (value.HasMember("DependencyConfigList") && !value["DependencyConfigList"].IsNull())
    {
        if (!value["DependencyConfigList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.DependencyConfigList` is not array type"));

        const rapidjson::Value &tmpValue = value["DependencyConfigList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DependencyConfigDsDTONoRecur item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dependencyConfigList.push_back(item);
        }
        m_dependencyConfigListHasBeenSet = true;
    }

    if (value.HasMember("VirtualTaskStatus") && !value["VirtualTaskStatus"].IsNull())
    {
        if (!value["VirtualTaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.VirtualTaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualTaskStatus = string(value["VirtualTaskStatus"].GetString());
        m_virtualTaskStatusHasBeenSet = true;
    }

    if (value.HasMember("RecycleTips") && !value["RecycleTips"].IsNull())
    {
        if (!value["RecycleTips"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.RecycleTips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recycleTips = string(value["RecycleTips"].GetString());
        m_recycleTipsHasBeenSet = true;
    }

    if (value.HasMember("RecycleUser") && !value["RecycleUser"].IsNull())
    {
        if (!value["RecycleUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.RecycleUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recycleUser = string(value["RecycleUser"].GetString());
        m_recycleUserHasBeenSet = true;
    }

    if (value.HasMember("NewOrUpdate") && !value["NewOrUpdate"].IsNull())
    {
        if (!value["NewOrUpdate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.NewOrUpdate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newOrUpdate = string(value["NewOrUpdate"].GetString());
        m_newOrUpdateHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.Params` is not array type"));

        const rapidjson::Value &tmpValue = value["Params"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Params item;
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

    if (value.HasMember("TaskLinkInfo") && !value["TaskLinkInfo"].IsNull())
    {
        if (!value["TaskLinkInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.TaskLinkInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskLinkInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskLinkDsDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskLinkInfo.push_back(item);
        }
        m_taskLinkInfoHasBeenSet = true;
    }

    if (value.HasMember("ImportResult") && !value["ImportResult"].IsNull())
    {
        if (!value["ImportResult"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.ImportResult` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_importResult = value["ImportResult"].GetBool();
        m_importResultHasBeenSet = true;
    }

    if (value.HasMember("ImportErrMsg") && !value["ImportErrMsg"].IsNull())
    {
        if (!value["ImportErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.ImportErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_importErrMsg = string(value["ImportErrMsg"].GetString());
        m_importErrMsgHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.ContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = string(value["ContentType"].GetString());
        m_contentTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskAutoSubmit") && !value["TaskAutoSubmit"].IsNull())
    {
        if (!value["TaskAutoSubmit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.TaskAutoSubmit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_taskAutoSubmit = value["TaskAutoSubmit"].GetBool();
        m_taskAutoSubmitHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("OwnId") && !value["OwnId"].IsNull())
    {
        if (!value["OwnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.OwnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownId = string(value["OwnId"].GetString());
        m_ownIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.TenantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = string(value["TenantId"].GetString());
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateUser") && !value["UpdateUser"].IsNull())
    {
        if (!value["UpdateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.UpdateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUser = string(value["UpdateUser"].GetString());
        m_updateUserHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateUserId") && !value["UpdateUserId"].IsNull())
    {
        if (!value["UpdateUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.UpdateUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUserId = string(value["UpdateUserId"].GetString());
        m_updateUserIdHasBeenSet = true;
    }

    if (value.HasMember("SchedulerDesc") && !value["SchedulerDesc"].IsNull())
    {
        if (!value["SchedulerDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.SchedulerDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerDesc = string(value["SchedulerDesc"].GetString());
        m_schedulerDescHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroup") && !value["ResourceGroup"].IsNull())
    {
        if (!value["ResourceGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.ResourceGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroup = string(value["ResourceGroup"].GetString());
        m_resourceGroupHasBeenSet = true;
    }

    if (value.HasMember("VersionDesc") && !value["VersionDesc"].IsNull())
    {
        if (!value["VersionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.VersionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionDesc = string(value["VersionDesc"].GetString());
        m_versionDescHasBeenSet = true;
    }

    if (value.HasMember("LinkId") && !value["LinkId"].IsNull())
    {
        if (!value["LinkId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.LinkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkId = string(value["LinkId"].GetString());
        m_linkIdHasBeenSet = true;
    }

    if (value.HasMember("UserFileId") && !value["UserFileId"].IsNull())
    {
        if (!value["UserFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLite.UserFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userFileId = string(value["UserFileId"].GetString());
        m_userFileIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskDsDTOLite::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, m_selfDepend, allocator);
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

    if (m_taskExtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskExt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskExt.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_properties.c_str(), allocator).Move(), allocator);
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

    if (m_alarmsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alarms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarms.begin(); itr != m_alarms.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_alarmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alarm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarm.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptChangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptChange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scriptChange, allocator);
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

    if (m_recoverFreezeStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoverFreezeStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recoverFreezeStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceServer.c_str(), allocator).Move(), allocator);
    }

    if (m_targetServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetServer.c_str(), allocator).Move(), allocator);
    }

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_dependencyConfigListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyConfigList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dependencyConfigList.begin(); itr != m_dependencyConfigList.end(); ++itr, ++i)
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

    if (m_recycleTipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecycleTips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recycleTips.c_str(), allocator).Move(), allocator);
    }

    if (m_recycleUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecycleUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recycleUser.c_str(), allocator).Move(), allocator);
    }

    if (m_newOrUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewOrUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newOrUpdate.c_str(), allocator).Move(), allocator);
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

    if (m_taskLinkInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskLinkInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskLinkInfo.begin(); itr != m_taskLinkInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_importResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_importResult, allocator);
    }

    if (m_importErrMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_importErrMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskAutoSubmitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAutoSubmit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskAutoSubmit, allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
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

    if (m_linkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkId.c_str(), allocator).Move(), allocator);
    }

    if (m_userFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userFileId.c_str(), allocator).Move(), allocator);
    }

}


string TaskDsDTOLite::GetTaskId() const
{
    return m_taskId;
}

void TaskDsDTOLite::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskDsDTOLite::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskDsDTOLite::GetVirtualTaskId() const
{
    return m_virtualTaskId;
}

void TaskDsDTOLite::SetVirtualTaskId(const string& _virtualTaskId)
{
    m_virtualTaskId = _virtualTaskId;
    m_virtualTaskIdHasBeenSet = true;
}

bool TaskDsDTOLite::VirtualTaskIdHasBeenSet() const
{
    return m_virtualTaskIdHasBeenSet;
}

bool TaskDsDTOLite::GetVirtualFlag() const
{
    return m_virtualFlag;
}

void TaskDsDTOLite::SetVirtualFlag(const bool& _virtualFlag)
{
    m_virtualFlag = _virtualFlag;
    m_virtualFlagHasBeenSet = true;
}

bool TaskDsDTOLite::VirtualFlagHasBeenSet() const
{
    return m_virtualFlagHasBeenSet;
}

string TaskDsDTOLite::GetTaskName() const
{
    return m_taskName;
}

void TaskDsDTOLite::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskDsDTOLite::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TaskDsDTOLite::GetWorkflowId() const
{
    return m_workflowId;
}

void TaskDsDTOLite::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool TaskDsDTOLite::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string TaskDsDTOLite::GetRealWorkflowId() const
{
    return m_realWorkflowId;
}

void TaskDsDTOLite::SetRealWorkflowId(const string& _realWorkflowId)
{
    m_realWorkflowId = _realWorkflowId;
    m_realWorkflowIdHasBeenSet = true;
}

bool TaskDsDTOLite::RealWorkflowIdHasBeenSet() const
{
    return m_realWorkflowIdHasBeenSet;
}

string TaskDsDTOLite::GetWorkflowName() const
{
    return m_workflowName;
}

void TaskDsDTOLite::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool TaskDsDTOLite::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string TaskDsDTOLite::GetFolderId() const
{
    return m_folderId;
}

void TaskDsDTOLite::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool TaskDsDTOLite::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string TaskDsDTOLite::GetFolderName() const
{
    return m_folderName;
}

void TaskDsDTOLite::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool TaskDsDTOLite::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string TaskDsDTOLite::GetCreateTime() const
{
    return m_createTime;
}

void TaskDsDTOLite::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskDsDTOLite::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskDsDTOLite::GetLastUpdate() const
{
    return m_lastUpdate;
}

void TaskDsDTOLite::SetLastUpdate(const string& _lastUpdate)
{
    m_lastUpdate = _lastUpdate;
    m_lastUpdateHasBeenSet = true;
}

bool TaskDsDTOLite::LastUpdateHasBeenSet() const
{
    return m_lastUpdateHasBeenSet;
}

string TaskDsDTOLite::GetStatus() const
{
    return m_status;
}

void TaskDsDTOLite::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TaskDsDTOLite::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TaskDsDTOLite::GetInCharge() const
{
    return m_inCharge;
}

void TaskDsDTOLite::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool TaskDsDTOLite::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

string TaskDsDTOLite::GetInChargeId() const
{
    return m_inChargeId;
}

void TaskDsDTOLite::SetInChargeId(const string& _inChargeId)
{
    m_inChargeId = _inChargeId;
    m_inChargeIdHasBeenSet = true;
}

bool TaskDsDTOLite::InChargeIdHasBeenSet() const
{
    return m_inChargeIdHasBeenSet;
}

string TaskDsDTOLite::GetStartTime() const
{
    return m_startTime;
}

void TaskDsDTOLite::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TaskDsDTOLite::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TaskDsDTOLite::GetEndTime() const
{
    return m_endTime;
}

void TaskDsDTOLite::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TaskDsDTOLite::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string TaskDsDTOLite::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void TaskDsDTOLite::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool TaskDsDTOLite::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string TaskDsDTOLite::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void TaskDsDTOLite::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool TaskDsDTOLite::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

string TaskDsDTOLite::GetProjectId() const
{
    return m_projectId;
}

void TaskDsDTOLite::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TaskDsDTOLite::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TaskDsDTOLite::GetProjectIdent() const
{
    return m_projectIdent;
}

void TaskDsDTOLite::SetProjectIdent(const string& _projectIdent)
{
    m_projectIdent = _projectIdent;
    m_projectIdentHasBeenSet = true;
}

bool TaskDsDTOLite::ProjectIdentHasBeenSet() const
{
    return m_projectIdentHasBeenSet;
}

string TaskDsDTOLite::GetProjectName() const
{
    return m_projectName;
}

void TaskDsDTOLite::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool TaskDsDTOLite::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string TaskDsDTOLite::GetCycleType() const
{
    return m_cycleType;
}

void TaskDsDTOLite::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool TaskDsDTOLite::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

int64_t TaskDsDTOLite::GetCycleStep() const
{
    return m_cycleStep;
}

void TaskDsDTOLite::SetCycleStep(const int64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool TaskDsDTOLite::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

string TaskDsDTOLite::GetCrontabExpression() const
{
    return m_crontabExpression;
}

void TaskDsDTOLite::SetCrontabExpression(const string& _crontabExpression)
{
    m_crontabExpression = _crontabExpression;
    m_crontabExpressionHasBeenSet = true;
}

bool TaskDsDTOLite::CrontabExpressionHasBeenSet() const
{
    return m_crontabExpressionHasBeenSet;
}

int64_t TaskDsDTOLite::GetDelayTime() const
{
    return m_delayTime;
}

void TaskDsDTOLite::SetDelayTime(const int64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool TaskDsDTOLite::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

int64_t TaskDsDTOLite::GetStartupTime() const
{
    return m_startupTime;
}

void TaskDsDTOLite::SetStartupTime(const int64_t& _startupTime)
{
    m_startupTime = _startupTime;
    m_startupTimeHasBeenSet = true;
}

bool TaskDsDTOLite::StartupTimeHasBeenSet() const
{
    return m_startupTimeHasBeenSet;
}

int64_t TaskDsDTOLite::GetRetryWait() const
{
    return m_retryWait;
}

void TaskDsDTOLite::SetRetryWait(const int64_t& _retryWait)
{
    m_retryWait = _retryWait;
    m_retryWaitHasBeenSet = true;
}

bool TaskDsDTOLite::RetryWaitHasBeenSet() const
{
    return m_retryWaitHasBeenSet;
}

int64_t TaskDsDTOLite::GetRetriable() const
{
    return m_retriable;
}

void TaskDsDTOLite::SetRetriable(const int64_t& _retriable)
{
    m_retriable = _retriable;
    m_retriableHasBeenSet = true;
}

bool TaskDsDTOLite::RetriableHasBeenSet() const
{
    return m_retriableHasBeenSet;
}

string TaskDsDTOLite::GetTaskAction() const
{
    return m_taskAction;
}

void TaskDsDTOLite::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool TaskDsDTOLite::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

int64_t TaskDsDTOLite::GetTryLimit() const
{
    return m_tryLimit;
}

void TaskDsDTOLite::SetTryLimit(const int64_t& _tryLimit)
{
    m_tryLimit = _tryLimit;
    m_tryLimitHasBeenSet = true;
}

bool TaskDsDTOLite::TryLimitHasBeenSet() const
{
    return m_tryLimitHasBeenSet;
}

int64_t TaskDsDTOLite::GetRunPriority() const
{
    return m_runPriority;
}

void TaskDsDTOLite::SetRunPriority(const int64_t& _runPriority)
{
    m_runPriority = _runPriority;
    m_runPriorityHasBeenSet = true;
}

bool TaskDsDTOLite::RunPriorityHasBeenSet() const
{
    return m_runPriorityHasBeenSet;
}

TaskTypeVO TaskDsDTOLite::GetTaskType() const
{
    return m_taskType;
}

void TaskDsDTOLite::SetTaskType(const TaskTypeVO& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool TaskDsDTOLite::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string TaskDsDTOLite::GetBrokerIp() const
{
    return m_brokerIp;
}

void TaskDsDTOLite::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool TaskDsDTOLite::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string TaskDsDTOLite::GetClusterId() const
{
    return m_clusterId;
}

void TaskDsDTOLite::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool TaskDsDTOLite::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string TaskDsDTOLite::GetMinDateTime() const
{
    return m_minDateTime;
}

void TaskDsDTOLite::SetMinDateTime(const string& _minDateTime)
{
    m_minDateTime = _minDateTime;
    m_minDateTimeHasBeenSet = true;
}

bool TaskDsDTOLite::MinDateTimeHasBeenSet() const
{
    return m_minDateTimeHasBeenSet;
}

string TaskDsDTOLite::GetMaxDateTime() const
{
    return m_maxDateTime;
}

void TaskDsDTOLite::SetMaxDateTime(const string& _maxDateTime)
{
    m_maxDateTime = _maxDateTime;
    m_maxDateTimeHasBeenSet = true;
}

bool TaskDsDTOLite::MaxDateTimeHasBeenSet() const
{
    return m_maxDateTimeHasBeenSet;
}

int64_t TaskDsDTOLite::GetExecutionTTL() const
{
    return m_executionTTL;
}

void TaskDsDTOLite::SetExecutionTTL(const int64_t& _executionTTL)
{
    m_executionTTL = _executionTTL;
    m_executionTTLHasBeenSet = true;
}

bool TaskDsDTOLite::ExecutionTTLHasBeenSet() const
{
    return m_executionTTLHasBeenSet;
}

int64_t TaskDsDTOLite::GetSelfDepend() const
{
    return m_selfDepend;
}

void TaskDsDTOLite::SetSelfDepend(const int64_t& _selfDepend)
{
    m_selfDepend = _selfDepend;
    m_selfDependHasBeenSet = true;
}

bool TaskDsDTOLite::SelfDependHasBeenSet() const
{
    return m_selfDependHasBeenSet;
}

double TaskDsDTOLite::GetLeftCoordinate() const
{
    return m_leftCoordinate;
}

void TaskDsDTOLite::SetLeftCoordinate(const double& _leftCoordinate)
{
    m_leftCoordinate = _leftCoordinate;
    m_leftCoordinateHasBeenSet = true;
}

bool TaskDsDTOLite::LeftCoordinateHasBeenSet() const
{
    return m_leftCoordinateHasBeenSet;
}

double TaskDsDTOLite::GetTopCoordinate() const
{
    return m_topCoordinate;
}

void TaskDsDTOLite::SetTopCoordinate(const double& _topCoordinate)
{
    m_topCoordinate = _topCoordinate;
    m_topCoordinateHasBeenSet = true;
}

bool TaskDsDTOLite::TopCoordinateHasBeenSet() const
{
    return m_topCoordinateHasBeenSet;
}

TaskExtVO TaskDsDTOLite::GetTaskExt() const
{
    return m_taskExt;
}

void TaskDsDTOLite::SetTaskExt(const TaskExtVO& _taskExt)
{
    m_taskExt = _taskExt;
    m_taskExtHasBeenSet = true;
}

bool TaskDsDTOLite::TaskExtHasBeenSet() const
{
    return m_taskExtHasBeenSet;
}

string TaskDsDTOLite::GetProperties() const
{
    return m_properties;
}

void TaskDsDTOLite::SetProperties(const string& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool TaskDsDTOLite::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

string TaskDsDTOLite::GetNotes() const
{
    return m_notes;
}

void TaskDsDTOLite::SetNotes(const string& _notes)
{
    m_notes = _notes;
    m_notesHasBeenSet = true;
}

bool TaskDsDTOLite::NotesHasBeenSet() const
{
    return m_notesHasBeenSet;
}

string TaskDsDTOLite::GetInstanceInitStrategy() const
{
    return m_instanceInitStrategy;
}

void TaskDsDTOLite::SetInstanceInitStrategy(const string& _instanceInitStrategy)
{
    m_instanceInitStrategy = _instanceInitStrategy;
    m_instanceInitStrategyHasBeenSet = true;
}

bool TaskDsDTOLite::InstanceInitStrategyHasBeenSet() const
{
    return m_instanceInitStrategyHasBeenSet;
}

string TaskDsDTOLite::GetYarnQueue() const
{
    return m_yarnQueue;
}

void TaskDsDTOLite::SetYarnQueue(const string& _yarnQueue)
{
    m_yarnQueue = _yarnQueue;
    m_yarnQueueHasBeenSet = true;
}

bool TaskDsDTOLite::YarnQueueHasBeenSet() const
{
    return m_yarnQueueHasBeenSet;
}

vector<AlarmVO> TaskDsDTOLite::GetAlarms() const
{
    return m_alarms;
}

void TaskDsDTOLite::SetAlarms(const vector<AlarmVO>& _alarms)
{
    m_alarms = _alarms;
    m_alarmsHasBeenSet = true;
}

bool TaskDsDTOLite::AlarmsHasBeenSet() const
{
    return m_alarmsHasBeenSet;
}

string TaskDsDTOLite::GetAlarm() const
{
    return m_alarm;
}

void TaskDsDTOLite::SetAlarm(const string& _alarm)
{
    m_alarm = _alarm;
    m_alarmHasBeenSet = true;
}

bool TaskDsDTOLite::AlarmHasBeenSet() const
{
    return m_alarmHasBeenSet;
}

bool TaskDsDTOLite::GetScriptChange() const
{
    return m_scriptChange;
}

void TaskDsDTOLite::SetScriptChange(const bool& _scriptChange)
{
    m_scriptChange = _scriptChange;
    m_scriptChangeHasBeenSet = true;
}

bool TaskDsDTOLite::ScriptChangeHasBeenSet() const
{
    return m_scriptChangeHasBeenSet;
}

bool TaskDsDTOLite::GetSubmit() const
{
    return m_submit;
}

void TaskDsDTOLite::SetSubmit(const bool& _submit)
{
    m_submit = _submit;
    m_submitHasBeenSet = true;
}

bool TaskDsDTOLite::SubmitHasBeenSet() const
{
    return m_submitHasBeenSet;
}

string TaskDsDTOLite::GetLastSchedulerCommitTime() const
{
    return m_lastSchedulerCommitTime;
}

void TaskDsDTOLite::SetLastSchedulerCommitTime(const string& _lastSchedulerCommitTime)
{
    m_lastSchedulerCommitTime = _lastSchedulerCommitTime;
    m_lastSchedulerCommitTimeHasBeenSet = true;
}

bool TaskDsDTOLite::LastSchedulerCommitTimeHasBeenSet() const
{
    return m_lastSchedulerCommitTimeHasBeenSet;
}

string TaskDsDTOLite::GetNormalizedJobStartTime() const
{
    return m_normalizedJobStartTime;
}

void TaskDsDTOLite::SetNormalizedJobStartTime(const string& _normalizedJobStartTime)
{
    m_normalizedJobStartTime = _normalizedJobStartTime;
    m_normalizedJobStartTimeHasBeenSet = true;
}

bool TaskDsDTOLite::NormalizedJobStartTimeHasBeenSet() const
{
    return m_normalizedJobStartTimeHasBeenSet;
}

string TaskDsDTOLite::GetRecoverFreezeStartTime() const
{
    return m_recoverFreezeStartTime;
}

void TaskDsDTOLite::SetRecoverFreezeStartTime(const string& _recoverFreezeStartTime)
{
    m_recoverFreezeStartTime = _recoverFreezeStartTime;
    m_recoverFreezeStartTimeHasBeenSet = true;
}

bool TaskDsDTOLite::RecoverFreezeStartTimeHasBeenSet() const
{
    return m_recoverFreezeStartTimeHasBeenSet;
}

string TaskDsDTOLite::GetSourceServer() const
{
    return m_sourceServer;
}

void TaskDsDTOLite::SetSourceServer(const string& _sourceServer)
{
    m_sourceServer = _sourceServer;
    m_sourceServerHasBeenSet = true;
}

bool TaskDsDTOLite::SourceServerHasBeenSet() const
{
    return m_sourceServerHasBeenSet;
}

string TaskDsDTOLite::GetTargetServer() const
{
    return m_targetServer;
}

void TaskDsDTOLite::SetTargetServer(const string& _targetServer)
{
    m_targetServer = _targetServer;
    m_targetServerHasBeenSet = true;
}

bool TaskDsDTOLite::TargetServerHasBeenSet() const
{
    return m_targetServerHasBeenSet;
}

vector<TaskDsDTONoRecur> TaskDsDTOLite::GetTasks() const
{
    return m_tasks;
}

void TaskDsDTOLite::SetTasks(const vector<TaskDsDTONoRecur>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool TaskDsDTOLite::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string TaskDsDTOLite::GetCreater() const
{
    return m_creater;
}

void TaskDsDTOLite::SetCreater(const string& _creater)
{
    m_creater = _creater;
    m_createrHasBeenSet = true;
}

bool TaskDsDTOLite::CreaterHasBeenSet() const
{
    return m_createrHasBeenSet;
}

string TaskDsDTOLite::GetDependencyRel() const
{
    return m_dependencyRel;
}

void TaskDsDTOLite::SetDependencyRel(const string& _dependencyRel)
{
    m_dependencyRel = _dependencyRel;
    m_dependencyRelHasBeenSet = true;
}

bool TaskDsDTOLite::DependencyRelHasBeenSet() const
{
    return m_dependencyRelHasBeenSet;
}

string TaskDsDTOLite::GetDependencyWorkflow() const
{
    return m_dependencyWorkflow;
}

void TaskDsDTOLite::SetDependencyWorkflow(const string& _dependencyWorkflow)
{
    m_dependencyWorkflow = _dependencyWorkflow;
    m_dependencyWorkflowHasBeenSet = true;
}

bool TaskDsDTOLite::DependencyWorkflowHasBeenSet() const
{
    return m_dependencyWorkflowHasBeenSet;
}

string TaskDsDTOLite::GetEventListenerConfig() const
{
    return m_eventListenerConfig;
}

void TaskDsDTOLite::SetEventListenerConfig(const string& _eventListenerConfig)
{
    m_eventListenerConfig = _eventListenerConfig;
    m_eventListenerConfigHasBeenSet = true;
}

bool TaskDsDTOLite::EventListenerConfigHasBeenSet() const
{
    return m_eventListenerConfigHasBeenSet;
}

string TaskDsDTOLite::GetEventPublisherConfig() const
{
    return m_eventPublisherConfig;
}

void TaskDsDTOLite::SetEventPublisherConfig(const string& _eventPublisherConfig)
{
    m_eventPublisherConfig = _eventPublisherConfig;
    m_eventPublisherConfigHasBeenSet = true;
}

bool TaskDsDTOLite::EventPublisherConfigHasBeenSet() const
{
    return m_eventPublisherConfigHasBeenSet;
}

vector<DependencyConfigDsDTONoRecur> TaskDsDTOLite::GetDependencyConfigList() const
{
    return m_dependencyConfigList;
}

void TaskDsDTOLite::SetDependencyConfigList(const vector<DependencyConfigDsDTONoRecur>& _dependencyConfigList)
{
    m_dependencyConfigList = _dependencyConfigList;
    m_dependencyConfigListHasBeenSet = true;
}

bool TaskDsDTOLite::DependencyConfigListHasBeenSet() const
{
    return m_dependencyConfigListHasBeenSet;
}

string TaskDsDTOLite::GetVirtualTaskStatus() const
{
    return m_virtualTaskStatus;
}

void TaskDsDTOLite::SetVirtualTaskStatus(const string& _virtualTaskStatus)
{
    m_virtualTaskStatus = _virtualTaskStatus;
    m_virtualTaskStatusHasBeenSet = true;
}

bool TaskDsDTOLite::VirtualTaskStatusHasBeenSet() const
{
    return m_virtualTaskStatusHasBeenSet;
}

string TaskDsDTOLite::GetRecycleTips() const
{
    return m_recycleTips;
}

void TaskDsDTOLite::SetRecycleTips(const string& _recycleTips)
{
    m_recycleTips = _recycleTips;
    m_recycleTipsHasBeenSet = true;
}

bool TaskDsDTOLite::RecycleTipsHasBeenSet() const
{
    return m_recycleTipsHasBeenSet;
}

string TaskDsDTOLite::GetRecycleUser() const
{
    return m_recycleUser;
}

void TaskDsDTOLite::SetRecycleUser(const string& _recycleUser)
{
    m_recycleUser = _recycleUser;
    m_recycleUserHasBeenSet = true;
}

bool TaskDsDTOLite::RecycleUserHasBeenSet() const
{
    return m_recycleUserHasBeenSet;
}

string TaskDsDTOLite::GetNewOrUpdate() const
{
    return m_newOrUpdate;
}

void TaskDsDTOLite::SetNewOrUpdate(const string& _newOrUpdate)
{
    m_newOrUpdate = _newOrUpdate;
    m_newOrUpdateHasBeenSet = true;
}

bool TaskDsDTOLite::NewOrUpdateHasBeenSet() const
{
    return m_newOrUpdateHasBeenSet;
}

vector<Params> TaskDsDTOLite::GetParams() const
{
    return m_params;
}

void TaskDsDTOLite::SetParams(const vector<Params>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool TaskDsDTOLite::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

vector<TaskLinkDsDTO> TaskDsDTOLite::GetTaskLinkInfo() const
{
    return m_taskLinkInfo;
}

void TaskDsDTOLite::SetTaskLinkInfo(const vector<TaskLinkDsDTO>& _taskLinkInfo)
{
    m_taskLinkInfo = _taskLinkInfo;
    m_taskLinkInfoHasBeenSet = true;
}

bool TaskDsDTOLite::TaskLinkInfoHasBeenSet() const
{
    return m_taskLinkInfoHasBeenSet;
}

bool TaskDsDTOLite::GetImportResult() const
{
    return m_importResult;
}

void TaskDsDTOLite::SetImportResult(const bool& _importResult)
{
    m_importResult = _importResult;
    m_importResultHasBeenSet = true;
}

bool TaskDsDTOLite::ImportResultHasBeenSet() const
{
    return m_importResultHasBeenSet;
}

string TaskDsDTOLite::GetImportErrMsg() const
{
    return m_importErrMsg;
}

void TaskDsDTOLite::SetImportErrMsg(const string& _importErrMsg)
{
    m_importErrMsg = _importErrMsg;
    m_importErrMsgHasBeenSet = true;
}

bool TaskDsDTOLite::ImportErrMsgHasBeenSet() const
{
    return m_importErrMsgHasBeenSet;
}

string TaskDsDTOLite::GetContentType() const
{
    return m_contentType;
}

void TaskDsDTOLite::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool TaskDsDTOLite::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

bool TaskDsDTOLite::GetTaskAutoSubmit() const
{
    return m_taskAutoSubmit;
}

void TaskDsDTOLite::SetTaskAutoSubmit(const bool& _taskAutoSubmit)
{
    m_taskAutoSubmit = _taskAutoSubmit;
    m_taskAutoSubmitHasBeenSet = true;
}

bool TaskDsDTOLite::TaskAutoSubmitHasBeenSet() const
{
    return m_taskAutoSubmitHasBeenSet;
}

string TaskDsDTOLite::GetProductName() const
{
    return m_productName;
}

void TaskDsDTOLite::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool TaskDsDTOLite::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string TaskDsDTOLite::GetOwnId() const
{
    return m_ownId;
}

void TaskDsDTOLite::SetOwnId(const string& _ownId)
{
    m_ownId = _ownId;
    m_ownIdHasBeenSet = true;
}

bool TaskDsDTOLite::OwnIdHasBeenSet() const
{
    return m_ownIdHasBeenSet;
}

string TaskDsDTOLite::GetUserId() const
{
    return m_userId;
}

void TaskDsDTOLite::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool TaskDsDTOLite::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string TaskDsDTOLite::GetTenantId() const
{
    return m_tenantId;
}

void TaskDsDTOLite::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool TaskDsDTOLite::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string TaskDsDTOLite::GetUpdateUser() const
{
    return m_updateUser;
}

void TaskDsDTOLite::SetUpdateUser(const string& _updateUser)
{
    m_updateUser = _updateUser;
    m_updateUserHasBeenSet = true;
}

bool TaskDsDTOLite::UpdateUserHasBeenSet() const
{
    return m_updateUserHasBeenSet;
}

string TaskDsDTOLite::GetUpdateTime() const
{
    return m_updateTime;
}

void TaskDsDTOLite::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TaskDsDTOLite::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TaskDsDTOLite::GetUpdateUserId() const
{
    return m_updateUserId;
}

void TaskDsDTOLite::SetUpdateUserId(const string& _updateUserId)
{
    m_updateUserId = _updateUserId;
    m_updateUserIdHasBeenSet = true;
}

bool TaskDsDTOLite::UpdateUserIdHasBeenSet() const
{
    return m_updateUserIdHasBeenSet;
}

string TaskDsDTOLite::GetSchedulerDesc() const
{
    return m_schedulerDesc;
}

void TaskDsDTOLite::SetSchedulerDesc(const string& _schedulerDesc)
{
    m_schedulerDesc = _schedulerDesc;
    m_schedulerDescHasBeenSet = true;
}

bool TaskDsDTOLite::SchedulerDescHasBeenSet() const
{
    return m_schedulerDescHasBeenSet;
}

string TaskDsDTOLite::GetResourceGroup() const
{
    return m_resourceGroup;
}

void TaskDsDTOLite::SetResourceGroup(const string& _resourceGroup)
{
    m_resourceGroup = _resourceGroup;
    m_resourceGroupHasBeenSet = true;
}

bool TaskDsDTOLite::ResourceGroupHasBeenSet() const
{
    return m_resourceGroupHasBeenSet;
}

string TaskDsDTOLite::GetVersionDesc() const
{
    return m_versionDesc;
}

void TaskDsDTOLite::SetVersionDesc(const string& _versionDesc)
{
    m_versionDesc = _versionDesc;
    m_versionDescHasBeenSet = true;
}

bool TaskDsDTOLite::VersionDescHasBeenSet() const
{
    return m_versionDescHasBeenSet;
}

string TaskDsDTOLite::GetLinkId() const
{
    return m_linkId;
}

void TaskDsDTOLite::SetLinkId(const string& _linkId)
{
    m_linkId = _linkId;
    m_linkIdHasBeenSet = true;
}

bool TaskDsDTOLite::LinkIdHasBeenSet() const
{
    return m_linkIdHasBeenSet;
}

string TaskDsDTOLite::GetUserFileId() const
{
    return m_userFileId;
}

void TaskDsDTOLite::SetUserFileId(const string& _userFileId)
{
    m_userFileId = _userFileId;
    m_userFileIdHasBeenSet = true;
}

bool TaskDsDTOLite::UserFileIdHasBeenSet() const
{
    return m_userFileIdHasBeenSet;
}

