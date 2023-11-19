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

#include <tencentcloud/wedata/v20210820/model/TaskDsDTOLiteV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskDsDTOLiteV2::TaskDsDTOLiteV2() :
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
    m_userFileIdHasBeenSet(false),
    m_sourceServiceIdHasBeenSet(false),
    m_sourceServiceTypeHasBeenSet(false),
    m_targetServiceIdHasBeenSet(false),
    m_targetServiceTypeHasBeenSet(false),
    m_paramInListHasBeenSet(false),
    m_paramOutListHasBeenSet(false)
{
}

CoreInternalOutcome TaskDsDTOLiteV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("VirtualTaskId") && !value["VirtualTaskId"].IsNull())
    {
        if (!value["VirtualTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.VirtualTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualTaskId = string(value["VirtualTaskId"].GetString());
        m_virtualTaskIdHasBeenSet = true;
    }

    if (value.HasMember("VirtualFlag") && !value["VirtualFlag"].IsNull())
    {
        if (!value["VirtualFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.VirtualFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_virtualFlag = value["VirtualFlag"].GetBool();
        m_virtualFlagHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("RealWorkflowId") && !value["RealWorkflowId"].IsNull())
    {
        if (!value["RealWorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.RealWorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realWorkflowId = string(value["RealWorkflowId"].GetString());
        m_realWorkflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdate") && !value["LastUpdate"].IsNull())
    {
        if (!value["LastUpdate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.LastUpdate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdate = string(value["LastUpdate"].GetString());
        m_lastUpdateHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("InCharge") && !value["InCharge"].IsNull())
    {
        if (!value["InCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.InCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCharge = string(value["InCharge"].GetString());
        m_inChargeHasBeenSet = true;
    }

    if (value.HasMember("InChargeId") && !value["InChargeId"].IsNull())
    {
        if (!value["InChargeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.InChargeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inChargeId = string(value["InChargeId"].GetString());
        m_inChargeIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStartTime") && !value["ExecutionStartTime"].IsNull())
    {
        if (!value["ExecutionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.ExecutionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStartTime = string(value["ExecutionStartTime"].GetString());
        m_executionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionEndTime") && !value["ExecutionEndTime"].IsNull())
    {
        if (!value["ExecutionEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.ExecutionEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionEndTime = string(value["ExecutionEndTime"].GetString());
        m_executionEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectIdent") && !value["ProjectIdent"].IsNull())
    {
        if (!value["ProjectIdent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.ProjectIdent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectIdent = string(value["ProjectIdent"].GetString());
        m_projectIdentHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("CycleStep") && !value["CycleStep"].IsNull())
    {
        if (!value["CycleStep"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.CycleStep` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleStep = value["CycleStep"].GetInt64();
        m_cycleStepHasBeenSet = true;
    }

    if (value.HasMember("CrontabExpression") && !value["CrontabExpression"].IsNull())
    {
        if (!value["CrontabExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.CrontabExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crontabExpression = string(value["CrontabExpression"].GetString());
        m_crontabExpressionHasBeenSet = true;
    }

    if (value.HasMember("DelayTime") && !value["DelayTime"].IsNull())
    {
        if (!value["DelayTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.DelayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_delayTime = value["DelayTime"].GetInt64();
        m_delayTimeHasBeenSet = true;
    }

    if (value.HasMember("StartupTime") && !value["StartupTime"].IsNull())
    {
        if (!value["StartupTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.StartupTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startupTime = value["StartupTime"].GetInt64();
        m_startupTimeHasBeenSet = true;
    }

    if (value.HasMember("RetryWait") && !value["RetryWait"].IsNull())
    {
        if (!value["RetryWait"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.RetryWait` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryWait = value["RetryWait"].GetInt64();
        m_retryWaitHasBeenSet = true;
    }

    if (value.HasMember("Retriable") && !value["Retriable"].IsNull())
    {
        if (!value["Retriable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.Retriable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retriable = value["Retriable"].GetInt64();
        m_retriableHasBeenSet = true;
    }

    if (value.HasMember("TaskAction") && !value["TaskAction"].IsNull())
    {
        if (!value["TaskAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.TaskAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskAction = string(value["TaskAction"].GetString());
        m_taskActionHasBeenSet = true;
    }

    if (value.HasMember("TryLimit") && !value["TryLimit"].IsNull())
    {
        if (!value["TryLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.TryLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tryLimit = value["TryLimit"].GetInt64();
        m_tryLimitHasBeenSet = true;
    }

    if (value.HasMember("RunPriority") && !value["RunPriority"].IsNull())
    {
        if (!value["RunPriority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.RunPriority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runPriority = value["RunPriority"].GetInt64();
        m_runPriorityHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.TaskType` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.BrokerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokerIp = string(value["BrokerIp"].GetString());
        m_brokerIpHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("MinDateTime") && !value["MinDateTime"].IsNull())
    {
        if (!value["MinDateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.MinDateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minDateTime = string(value["MinDateTime"].GetString());
        m_minDateTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxDateTime") && !value["MaxDateTime"].IsNull())
    {
        if (!value["MaxDateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.MaxDateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxDateTime = string(value["MaxDateTime"].GetString());
        m_maxDateTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionTTL") && !value["ExecutionTTL"].IsNull())
    {
        if (!value["ExecutionTTL"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.ExecutionTTL` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executionTTL = value["ExecutionTTL"].GetInt64();
        m_executionTTLHasBeenSet = true;
    }

    if (value.HasMember("SelfDepend") && !value["SelfDepend"].IsNull())
    {
        if (!value["SelfDepend"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.SelfDepend` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selfDepend = string(value["SelfDepend"].GetString());
        m_selfDependHasBeenSet = true;
    }

    if (value.HasMember("LeftCoordinate") && !value["LeftCoordinate"].IsNull())
    {
        if (!value["LeftCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.LeftCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_leftCoordinate = value["LeftCoordinate"].GetDouble();
        m_leftCoordinateHasBeenSet = true;
    }

    if (value.HasMember("TopCoordinate") && !value["TopCoordinate"].IsNull())
    {
        if (!value["TopCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.TopCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_topCoordinate = value["TopCoordinate"].GetDouble();
        m_topCoordinateHasBeenSet = true;
    }

    if (value.HasMember("TaskExt") && !value["TaskExt"].IsNull())
    {
        if (!value["TaskExt"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.TaskExt` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.Properties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_properties = string(value["Properties"].GetString());
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("Notes") && !value["Notes"].IsNull())
    {
        if (!value["Notes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.Notes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notes = string(value["Notes"].GetString());
        m_notesHasBeenSet = true;
    }

    if (value.HasMember("InstanceInitStrategy") && !value["InstanceInitStrategy"].IsNull())
    {
        if (!value["InstanceInitStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.InstanceInitStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceInitStrategy = string(value["InstanceInitStrategy"].GetString());
        m_instanceInitStrategyHasBeenSet = true;
    }

    if (value.HasMember("YarnQueue") && !value["YarnQueue"].IsNull())
    {
        if (!value["YarnQueue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.YarnQueue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yarnQueue = string(value["YarnQueue"].GetString());
        m_yarnQueueHasBeenSet = true;
    }

    if (value.HasMember("Alarms") && !value["Alarms"].IsNull())
    {
        if (!value["Alarms"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.Alarms` is not array type"));

        const rapidjson::Value &tmpValue = value["Alarms"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmDsVO item;
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
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.Alarm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarm = string(value["Alarm"].GetString());
        m_alarmHasBeenSet = true;
    }

    if (value.HasMember("ScriptChange") && !value["ScriptChange"].IsNull())
    {
        if (!value["ScriptChange"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.ScriptChange` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scriptChange = value["ScriptChange"].GetBool();
        m_scriptChangeHasBeenSet = true;
    }

    if (value.HasMember("Submit") && !value["Submit"].IsNull())
    {
        if (!value["Submit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.Submit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_submit = value["Submit"].GetBool();
        m_submitHasBeenSet = true;
    }

    if (value.HasMember("LastSchedulerCommitTime") && !value["LastSchedulerCommitTime"].IsNull())
    {
        if (!value["LastSchedulerCommitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.LastSchedulerCommitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastSchedulerCommitTime = string(value["LastSchedulerCommitTime"].GetString());
        m_lastSchedulerCommitTimeHasBeenSet = true;
    }

    if (value.HasMember("NormalizedJobStartTime") && !value["NormalizedJobStartTime"].IsNull())
    {
        if (!value["NormalizedJobStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.NormalizedJobStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_normalizedJobStartTime = string(value["NormalizedJobStartTime"].GetString());
        m_normalizedJobStartTimeHasBeenSet = true;
    }

    if (value.HasMember("RecoverFreezeStartTime") && !value["RecoverFreezeStartTime"].IsNull())
    {
        if (!value["RecoverFreezeStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.RecoverFreezeStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recoverFreezeStartTime = string(value["RecoverFreezeStartTime"].GetString());
        m_recoverFreezeStartTimeHasBeenSet = true;
    }

    if (value.HasMember("SourceServer") && !value["SourceServer"].IsNull())
    {
        if (!value["SourceServer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.SourceServer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceServer = string(value["SourceServer"].GetString());
        m_sourceServerHasBeenSet = true;
    }

    if (value.HasMember("TargetServer") && !value["TargetServer"].IsNull())
    {
        if (!value["TargetServer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.TargetServer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetServer = string(value["TargetServer"].GetString());
        m_targetServerHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.Tasks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskDsDTONoRecurV2 item;
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
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.Creater` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creater = string(value["Creater"].GetString());
        m_createrHasBeenSet = true;
    }

    if (value.HasMember("DependencyRel") && !value["DependencyRel"].IsNull())
    {
        if (!value["DependencyRel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.DependencyRel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyRel = string(value["DependencyRel"].GetString());
        m_dependencyRelHasBeenSet = true;
    }

    if (value.HasMember("DependencyWorkflow") && !value["DependencyWorkflow"].IsNull())
    {
        if (!value["DependencyWorkflow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.DependencyWorkflow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyWorkflow = string(value["DependencyWorkflow"].GetString());
        m_dependencyWorkflowHasBeenSet = true;
    }

    if (value.HasMember("EventListenerConfig") && !value["EventListenerConfig"].IsNull())
    {
        if (!value["EventListenerConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.EventListenerConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventListenerConfig = string(value["EventListenerConfig"].GetString());
        m_eventListenerConfigHasBeenSet = true;
    }

    if (value.HasMember("EventPublisherConfig") && !value["EventPublisherConfig"].IsNull())
    {
        if (!value["EventPublisherConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.EventPublisherConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventPublisherConfig = string(value["EventPublisherConfig"].GetString());
        m_eventPublisherConfigHasBeenSet = true;
    }

    if (value.HasMember("DependencyConfigList") && !value["DependencyConfigList"].IsNull())
    {
        if (!value["DependencyConfigList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.DependencyConfigList` is not array type"));

        const rapidjson::Value &tmpValue = value["DependencyConfigList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DependencyConfigDsDTONoRecurV2 item;
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
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.VirtualTaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualTaskStatus = string(value["VirtualTaskStatus"].GetString());
        m_virtualTaskStatusHasBeenSet = true;
    }

    if (value.HasMember("RecycleTips") && !value["RecycleTips"].IsNull())
    {
        if (!value["RecycleTips"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.RecycleTips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recycleTips = string(value["RecycleTips"].GetString());
        m_recycleTipsHasBeenSet = true;
    }

    if (value.HasMember("RecycleUser") && !value["RecycleUser"].IsNull())
    {
        if (!value["RecycleUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.RecycleUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recycleUser = string(value["RecycleUser"].GetString());
        m_recycleUserHasBeenSet = true;
    }

    if (value.HasMember("NewOrUpdate") && !value["NewOrUpdate"].IsNull())
    {
        if (!value["NewOrUpdate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.NewOrUpdate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newOrUpdate = string(value["NewOrUpdate"].GetString());
        m_newOrUpdateHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.Params` is not array type"));

        const rapidjson::Value &tmpValue = value["Params"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParameterTaskDsDto item;
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
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.TaskLinkInfo` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.ImportResult` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_importResult = value["ImportResult"].GetBool();
        m_importResultHasBeenSet = true;
    }

    if (value.HasMember("ImportErrMsg") && !value["ImportErrMsg"].IsNull())
    {
        if (!value["ImportErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.ImportErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_importErrMsg = string(value["ImportErrMsg"].GetString());
        m_importErrMsgHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.ContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = string(value["ContentType"].GetString());
        m_contentTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskAutoSubmit") && !value["TaskAutoSubmit"].IsNull())
    {
        if (!value["TaskAutoSubmit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.TaskAutoSubmit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_taskAutoSubmit = value["TaskAutoSubmit"].GetBool();
        m_taskAutoSubmitHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("OwnId") && !value["OwnId"].IsNull())
    {
        if (!value["OwnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.OwnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownId = string(value["OwnId"].GetString());
        m_ownIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.TenantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = string(value["TenantId"].GetString());
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateUser") && !value["UpdateUser"].IsNull())
    {
        if (!value["UpdateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.UpdateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUser = string(value["UpdateUser"].GetString());
        m_updateUserHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateUserId") && !value["UpdateUserId"].IsNull())
    {
        if (!value["UpdateUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.UpdateUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUserId = string(value["UpdateUserId"].GetString());
        m_updateUserIdHasBeenSet = true;
    }

    if (value.HasMember("SchedulerDesc") && !value["SchedulerDesc"].IsNull())
    {
        if (!value["SchedulerDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.SchedulerDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerDesc = string(value["SchedulerDesc"].GetString());
        m_schedulerDescHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroup") && !value["ResourceGroup"].IsNull())
    {
        if (!value["ResourceGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.ResourceGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroup = string(value["ResourceGroup"].GetString());
        m_resourceGroupHasBeenSet = true;
    }

    if (value.HasMember("VersionDesc") && !value["VersionDesc"].IsNull())
    {
        if (!value["VersionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.VersionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionDesc = string(value["VersionDesc"].GetString());
        m_versionDescHasBeenSet = true;
    }

    if (value.HasMember("LinkId") && !value["LinkId"].IsNull())
    {
        if (!value["LinkId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.LinkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkId = string(value["LinkId"].GetString());
        m_linkIdHasBeenSet = true;
    }

    if (value.HasMember("UserFileId") && !value["UserFileId"].IsNull())
    {
        if (!value["UserFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.UserFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userFileId = string(value["UserFileId"].GetString());
        m_userFileIdHasBeenSet = true;
    }

    if (value.HasMember("SourceServiceId") && !value["SourceServiceId"].IsNull())
    {
        if (!value["SourceServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.SourceServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceServiceId = string(value["SourceServiceId"].GetString());
        m_sourceServiceIdHasBeenSet = true;
    }

    if (value.HasMember("SourceServiceType") && !value["SourceServiceType"].IsNull())
    {
        if (!value["SourceServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.SourceServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceServiceType = string(value["SourceServiceType"].GetString());
        m_sourceServiceTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetServiceId") && !value["TargetServiceId"].IsNull())
    {
        if (!value["TargetServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.TargetServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetServiceId = string(value["TargetServiceId"].GetString());
        m_targetServiceIdHasBeenSet = true;
    }

    if (value.HasMember("TargetServiceType") && !value["TargetServiceType"].IsNull())
    {
        if (!value["TargetServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.TargetServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetServiceType = string(value["TargetServiceType"].GetString());
        m_targetServiceTypeHasBeenSet = true;
    }

    if (value.HasMember("ParamInList") && !value["ParamInList"].IsNull())
    {
        if (!value["ParamInList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.ParamInList` is not array type"));

        const rapidjson::Value &tmpValue = value["ParamInList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParameterTaskInDsDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_paramInList.push_back(item);
        }
        m_paramInListHasBeenSet = true;
    }

    if (value.HasMember("ParamOutList") && !value["ParamOutList"].IsNull())
    {
        if (!value["ParamOutList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskDsDTOLiteV2.ParamOutList` is not array type"));

        const rapidjson::Value &tmpValue = value["ParamOutList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParameterTaskOutDsDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_paramOutList.push_back(item);
        }
        m_paramOutListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskDsDTOLiteV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_paramInListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamInList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramInList.begin(); itr != m_paramInList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_paramOutListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamOutList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramOutList.begin(); itr != m_paramOutList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TaskDsDTOLiteV2::GetTaskId() const
{
    return m_taskId;
}

void TaskDsDTOLiteV2::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskDsDTOLiteV2::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskDsDTOLiteV2::GetVirtualTaskId() const
{
    return m_virtualTaskId;
}

void TaskDsDTOLiteV2::SetVirtualTaskId(const string& _virtualTaskId)
{
    m_virtualTaskId = _virtualTaskId;
    m_virtualTaskIdHasBeenSet = true;
}

bool TaskDsDTOLiteV2::VirtualTaskIdHasBeenSet() const
{
    return m_virtualTaskIdHasBeenSet;
}

bool TaskDsDTOLiteV2::GetVirtualFlag() const
{
    return m_virtualFlag;
}

void TaskDsDTOLiteV2::SetVirtualFlag(const bool& _virtualFlag)
{
    m_virtualFlag = _virtualFlag;
    m_virtualFlagHasBeenSet = true;
}

bool TaskDsDTOLiteV2::VirtualFlagHasBeenSet() const
{
    return m_virtualFlagHasBeenSet;
}

string TaskDsDTOLiteV2::GetTaskName() const
{
    return m_taskName;
}

void TaskDsDTOLiteV2::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskDsDTOLiteV2::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TaskDsDTOLiteV2::GetWorkflowId() const
{
    return m_workflowId;
}

void TaskDsDTOLiteV2::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool TaskDsDTOLiteV2::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string TaskDsDTOLiteV2::GetRealWorkflowId() const
{
    return m_realWorkflowId;
}

void TaskDsDTOLiteV2::SetRealWorkflowId(const string& _realWorkflowId)
{
    m_realWorkflowId = _realWorkflowId;
    m_realWorkflowIdHasBeenSet = true;
}

bool TaskDsDTOLiteV2::RealWorkflowIdHasBeenSet() const
{
    return m_realWorkflowIdHasBeenSet;
}

string TaskDsDTOLiteV2::GetWorkflowName() const
{
    return m_workflowName;
}

void TaskDsDTOLiteV2::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool TaskDsDTOLiteV2::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string TaskDsDTOLiteV2::GetFolderId() const
{
    return m_folderId;
}

void TaskDsDTOLiteV2::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool TaskDsDTOLiteV2::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string TaskDsDTOLiteV2::GetFolderName() const
{
    return m_folderName;
}

void TaskDsDTOLiteV2::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool TaskDsDTOLiteV2::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string TaskDsDTOLiteV2::GetCreateTime() const
{
    return m_createTime;
}

void TaskDsDTOLiteV2::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskDsDTOLiteV2::GetLastUpdate() const
{
    return m_lastUpdate;
}

void TaskDsDTOLiteV2::SetLastUpdate(const string& _lastUpdate)
{
    m_lastUpdate = _lastUpdate;
    m_lastUpdateHasBeenSet = true;
}

bool TaskDsDTOLiteV2::LastUpdateHasBeenSet() const
{
    return m_lastUpdateHasBeenSet;
}

string TaskDsDTOLiteV2::GetStatus() const
{
    return m_status;
}

void TaskDsDTOLiteV2::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TaskDsDTOLiteV2::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TaskDsDTOLiteV2::GetInCharge() const
{
    return m_inCharge;
}

void TaskDsDTOLiteV2::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

string TaskDsDTOLiteV2::GetInChargeId() const
{
    return m_inChargeId;
}

void TaskDsDTOLiteV2::SetInChargeId(const string& _inChargeId)
{
    m_inChargeId = _inChargeId;
    m_inChargeIdHasBeenSet = true;
}

bool TaskDsDTOLiteV2::InChargeIdHasBeenSet() const
{
    return m_inChargeIdHasBeenSet;
}

string TaskDsDTOLiteV2::GetStartTime() const
{
    return m_startTime;
}

void TaskDsDTOLiteV2::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TaskDsDTOLiteV2::GetEndTime() const
{
    return m_endTime;
}

void TaskDsDTOLiteV2::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string TaskDsDTOLiteV2::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void TaskDsDTOLiteV2::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string TaskDsDTOLiteV2::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void TaskDsDTOLiteV2::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

string TaskDsDTOLiteV2::GetProjectId() const
{
    return m_projectId;
}

void TaskDsDTOLiteV2::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TaskDsDTOLiteV2::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TaskDsDTOLiteV2::GetProjectIdent() const
{
    return m_projectIdent;
}

void TaskDsDTOLiteV2::SetProjectIdent(const string& _projectIdent)
{
    m_projectIdent = _projectIdent;
    m_projectIdentHasBeenSet = true;
}

bool TaskDsDTOLiteV2::ProjectIdentHasBeenSet() const
{
    return m_projectIdentHasBeenSet;
}

string TaskDsDTOLiteV2::GetProjectName() const
{
    return m_projectName;
}

void TaskDsDTOLiteV2::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool TaskDsDTOLiteV2::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string TaskDsDTOLiteV2::GetCycleType() const
{
    return m_cycleType;
}

void TaskDsDTOLiteV2::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

int64_t TaskDsDTOLiteV2::GetCycleStep() const
{
    return m_cycleStep;
}

void TaskDsDTOLiteV2::SetCycleStep(const int64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool TaskDsDTOLiteV2::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

string TaskDsDTOLiteV2::GetCrontabExpression() const
{
    return m_crontabExpression;
}

void TaskDsDTOLiteV2::SetCrontabExpression(const string& _crontabExpression)
{
    m_crontabExpression = _crontabExpression;
    m_crontabExpressionHasBeenSet = true;
}

bool TaskDsDTOLiteV2::CrontabExpressionHasBeenSet() const
{
    return m_crontabExpressionHasBeenSet;
}

int64_t TaskDsDTOLiteV2::GetDelayTime() const
{
    return m_delayTime;
}

void TaskDsDTOLiteV2::SetDelayTime(const int64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

int64_t TaskDsDTOLiteV2::GetStartupTime() const
{
    return m_startupTime;
}

void TaskDsDTOLiteV2::SetStartupTime(const int64_t& _startupTime)
{
    m_startupTime = _startupTime;
    m_startupTimeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::StartupTimeHasBeenSet() const
{
    return m_startupTimeHasBeenSet;
}

int64_t TaskDsDTOLiteV2::GetRetryWait() const
{
    return m_retryWait;
}

void TaskDsDTOLiteV2::SetRetryWait(const int64_t& _retryWait)
{
    m_retryWait = _retryWait;
    m_retryWaitHasBeenSet = true;
}

bool TaskDsDTOLiteV2::RetryWaitHasBeenSet() const
{
    return m_retryWaitHasBeenSet;
}

int64_t TaskDsDTOLiteV2::GetRetriable() const
{
    return m_retriable;
}

void TaskDsDTOLiteV2::SetRetriable(const int64_t& _retriable)
{
    m_retriable = _retriable;
    m_retriableHasBeenSet = true;
}

bool TaskDsDTOLiteV2::RetriableHasBeenSet() const
{
    return m_retriableHasBeenSet;
}

string TaskDsDTOLiteV2::GetTaskAction() const
{
    return m_taskAction;
}

void TaskDsDTOLiteV2::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool TaskDsDTOLiteV2::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

int64_t TaskDsDTOLiteV2::GetTryLimit() const
{
    return m_tryLimit;
}

void TaskDsDTOLiteV2::SetTryLimit(const int64_t& _tryLimit)
{
    m_tryLimit = _tryLimit;
    m_tryLimitHasBeenSet = true;
}

bool TaskDsDTOLiteV2::TryLimitHasBeenSet() const
{
    return m_tryLimitHasBeenSet;
}

int64_t TaskDsDTOLiteV2::GetRunPriority() const
{
    return m_runPriority;
}

void TaskDsDTOLiteV2::SetRunPriority(const int64_t& _runPriority)
{
    m_runPriority = _runPriority;
    m_runPriorityHasBeenSet = true;
}

bool TaskDsDTOLiteV2::RunPriorityHasBeenSet() const
{
    return m_runPriorityHasBeenSet;
}

TaskTypeDsVO TaskDsDTOLiteV2::GetTaskType() const
{
    return m_taskType;
}

void TaskDsDTOLiteV2::SetTaskType(const TaskTypeDsVO& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string TaskDsDTOLiteV2::GetBrokerIp() const
{
    return m_brokerIp;
}

void TaskDsDTOLiteV2::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool TaskDsDTOLiteV2::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string TaskDsDTOLiteV2::GetClusterId() const
{
    return m_clusterId;
}

void TaskDsDTOLiteV2::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool TaskDsDTOLiteV2::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string TaskDsDTOLiteV2::GetMinDateTime() const
{
    return m_minDateTime;
}

void TaskDsDTOLiteV2::SetMinDateTime(const string& _minDateTime)
{
    m_minDateTime = _minDateTime;
    m_minDateTimeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::MinDateTimeHasBeenSet() const
{
    return m_minDateTimeHasBeenSet;
}

string TaskDsDTOLiteV2::GetMaxDateTime() const
{
    return m_maxDateTime;
}

void TaskDsDTOLiteV2::SetMaxDateTime(const string& _maxDateTime)
{
    m_maxDateTime = _maxDateTime;
    m_maxDateTimeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::MaxDateTimeHasBeenSet() const
{
    return m_maxDateTimeHasBeenSet;
}

int64_t TaskDsDTOLiteV2::GetExecutionTTL() const
{
    return m_executionTTL;
}

void TaskDsDTOLiteV2::SetExecutionTTL(const int64_t& _executionTTL)
{
    m_executionTTL = _executionTTL;
    m_executionTTLHasBeenSet = true;
}

bool TaskDsDTOLiteV2::ExecutionTTLHasBeenSet() const
{
    return m_executionTTLHasBeenSet;
}

string TaskDsDTOLiteV2::GetSelfDepend() const
{
    return m_selfDepend;
}

void TaskDsDTOLiteV2::SetSelfDepend(const string& _selfDepend)
{
    m_selfDepend = _selfDepend;
    m_selfDependHasBeenSet = true;
}

bool TaskDsDTOLiteV2::SelfDependHasBeenSet() const
{
    return m_selfDependHasBeenSet;
}

double TaskDsDTOLiteV2::GetLeftCoordinate() const
{
    return m_leftCoordinate;
}

void TaskDsDTOLiteV2::SetLeftCoordinate(const double& _leftCoordinate)
{
    m_leftCoordinate = _leftCoordinate;
    m_leftCoordinateHasBeenSet = true;
}

bool TaskDsDTOLiteV2::LeftCoordinateHasBeenSet() const
{
    return m_leftCoordinateHasBeenSet;
}

double TaskDsDTOLiteV2::GetTopCoordinate() const
{
    return m_topCoordinate;
}

void TaskDsDTOLiteV2::SetTopCoordinate(const double& _topCoordinate)
{
    m_topCoordinate = _topCoordinate;
    m_topCoordinateHasBeenSet = true;
}

bool TaskDsDTOLiteV2::TopCoordinateHasBeenSet() const
{
    return m_topCoordinateHasBeenSet;
}

TaskExtDsVO TaskDsDTOLiteV2::GetTaskExt() const
{
    return m_taskExt;
}

void TaskDsDTOLiteV2::SetTaskExt(const TaskExtDsVO& _taskExt)
{
    m_taskExt = _taskExt;
    m_taskExtHasBeenSet = true;
}

bool TaskDsDTOLiteV2::TaskExtHasBeenSet() const
{
    return m_taskExtHasBeenSet;
}

string TaskDsDTOLiteV2::GetProperties() const
{
    return m_properties;
}

void TaskDsDTOLiteV2::SetProperties(const string& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool TaskDsDTOLiteV2::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

string TaskDsDTOLiteV2::GetNotes() const
{
    return m_notes;
}

void TaskDsDTOLiteV2::SetNotes(const string& _notes)
{
    m_notes = _notes;
    m_notesHasBeenSet = true;
}

bool TaskDsDTOLiteV2::NotesHasBeenSet() const
{
    return m_notesHasBeenSet;
}

string TaskDsDTOLiteV2::GetInstanceInitStrategy() const
{
    return m_instanceInitStrategy;
}

void TaskDsDTOLiteV2::SetInstanceInitStrategy(const string& _instanceInitStrategy)
{
    m_instanceInitStrategy = _instanceInitStrategy;
    m_instanceInitStrategyHasBeenSet = true;
}

bool TaskDsDTOLiteV2::InstanceInitStrategyHasBeenSet() const
{
    return m_instanceInitStrategyHasBeenSet;
}

string TaskDsDTOLiteV2::GetYarnQueue() const
{
    return m_yarnQueue;
}

void TaskDsDTOLiteV2::SetYarnQueue(const string& _yarnQueue)
{
    m_yarnQueue = _yarnQueue;
    m_yarnQueueHasBeenSet = true;
}

bool TaskDsDTOLiteV2::YarnQueueHasBeenSet() const
{
    return m_yarnQueueHasBeenSet;
}

vector<AlarmDsVO> TaskDsDTOLiteV2::GetAlarms() const
{
    return m_alarms;
}

void TaskDsDTOLiteV2::SetAlarms(const vector<AlarmDsVO>& _alarms)
{
    m_alarms = _alarms;
    m_alarmsHasBeenSet = true;
}

bool TaskDsDTOLiteV2::AlarmsHasBeenSet() const
{
    return m_alarmsHasBeenSet;
}

string TaskDsDTOLiteV2::GetAlarm() const
{
    return m_alarm;
}

void TaskDsDTOLiteV2::SetAlarm(const string& _alarm)
{
    m_alarm = _alarm;
    m_alarmHasBeenSet = true;
}

bool TaskDsDTOLiteV2::AlarmHasBeenSet() const
{
    return m_alarmHasBeenSet;
}

bool TaskDsDTOLiteV2::GetScriptChange() const
{
    return m_scriptChange;
}

void TaskDsDTOLiteV2::SetScriptChange(const bool& _scriptChange)
{
    m_scriptChange = _scriptChange;
    m_scriptChangeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::ScriptChangeHasBeenSet() const
{
    return m_scriptChangeHasBeenSet;
}

bool TaskDsDTOLiteV2::GetSubmit() const
{
    return m_submit;
}

void TaskDsDTOLiteV2::SetSubmit(const bool& _submit)
{
    m_submit = _submit;
    m_submitHasBeenSet = true;
}

bool TaskDsDTOLiteV2::SubmitHasBeenSet() const
{
    return m_submitHasBeenSet;
}

string TaskDsDTOLiteV2::GetLastSchedulerCommitTime() const
{
    return m_lastSchedulerCommitTime;
}

void TaskDsDTOLiteV2::SetLastSchedulerCommitTime(const string& _lastSchedulerCommitTime)
{
    m_lastSchedulerCommitTime = _lastSchedulerCommitTime;
    m_lastSchedulerCommitTimeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::LastSchedulerCommitTimeHasBeenSet() const
{
    return m_lastSchedulerCommitTimeHasBeenSet;
}

string TaskDsDTOLiteV2::GetNormalizedJobStartTime() const
{
    return m_normalizedJobStartTime;
}

void TaskDsDTOLiteV2::SetNormalizedJobStartTime(const string& _normalizedJobStartTime)
{
    m_normalizedJobStartTime = _normalizedJobStartTime;
    m_normalizedJobStartTimeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::NormalizedJobStartTimeHasBeenSet() const
{
    return m_normalizedJobStartTimeHasBeenSet;
}

string TaskDsDTOLiteV2::GetRecoverFreezeStartTime() const
{
    return m_recoverFreezeStartTime;
}

void TaskDsDTOLiteV2::SetRecoverFreezeStartTime(const string& _recoverFreezeStartTime)
{
    m_recoverFreezeStartTime = _recoverFreezeStartTime;
    m_recoverFreezeStartTimeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::RecoverFreezeStartTimeHasBeenSet() const
{
    return m_recoverFreezeStartTimeHasBeenSet;
}

string TaskDsDTOLiteV2::GetSourceServer() const
{
    return m_sourceServer;
}

void TaskDsDTOLiteV2::SetSourceServer(const string& _sourceServer)
{
    m_sourceServer = _sourceServer;
    m_sourceServerHasBeenSet = true;
}

bool TaskDsDTOLiteV2::SourceServerHasBeenSet() const
{
    return m_sourceServerHasBeenSet;
}

string TaskDsDTOLiteV2::GetTargetServer() const
{
    return m_targetServer;
}

void TaskDsDTOLiteV2::SetTargetServer(const string& _targetServer)
{
    m_targetServer = _targetServer;
    m_targetServerHasBeenSet = true;
}

bool TaskDsDTOLiteV2::TargetServerHasBeenSet() const
{
    return m_targetServerHasBeenSet;
}

vector<TaskDsDTONoRecurV2> TaskDsDTOLiteV2::GetTasks() const
{
    return m_tasks;
}

void TaskDsDTOLiteV2::SetTasks(const vector<TaskDsDTONoRecurV2>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool TaskDsDTOLiteV2::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string TaskDsDTOLiteV2::GetCreater() const
{
    return m_creater;
}

void TaskDsDTOLiteV2::SetCreater(const string& _creater)
{
    m_creater = _creater;
    m_createrHasBeenSet = true;
}

bool TaskDsDTOLiteV2::CreaterHasBeenSet() const
{
    return m_createrHasBeenSet;
}

string TaskDsDTOLiteV2::GetDependencyRel() const
{
    return m_dependencyRel;
}

void TaskDsDTOLiteV2::SetDependencyRel(const string& _dependencyRel)
{
    m_dependencyRel = _dependencyRel;
    m_dependencyRelHasBeenSet = true;
}

bool TaskDsDTOLiteV2::DependencyRelHasBeenSet() const
{
    return m_dependencyRelHasBeenSet;
}

string TaskDsDTOLiteV2::GetDependencyWorkflow() const
{
    return m_dependencyWorkflow;
}

void TaskDsDTOLiteV2::SetDependencyWorkflow(const string& _dependencyWorkflow)
{
    m_dependencyWorkflow = _dependencyWorkflow;
    m_dependencyWorkflowHasBeenSet = true;
}

bool TaskDsDTOLiteV2::DependencyWorkflowHasBeenSet() const
{
    return m_dependencyWorkflowHasBeenSet;
}

string TaskDsDTOLiteV2::GetEventListenerConfig() const
{
    return m_eventListenerConfig;
}

void TaskDsDTOLiteV2::SetEventListenerConfig(const string& _eventListenerConfig)
{
    m_eventListenerConfig = _eventListenerConfig;
    m_eventListenerConfigHasBeenSet = true;
}

bool TaskDsDTOLiteV2::EventListenerConfigHasBeenSet() const
{
    return m_eventListenerConfigHasBeenSet;
}

string TaskDsDTOLiteV2::GetEventPublisherConfig() const
{
    return m_eventPublisherConfig;
}

void TaskDsDTOLiteV2::SetEventPublisherConfig(const string& _eventPublisherConfig)
{
    m_eventPublisherConfig = _eventPublisherConfig;
    m_eventPublisherConfigHasBeenSet = true;
}

bool TaskDsDTOLiteV2::EventPublisherConfigHasBeenSet() const
{
    return m_eventPublisherConfigHasBeenSet;
}

vector<DependencyConfigDsDTONoRecurV2> TaskDsDTOLiteV2::GetDependencyConfigList() const
{
    return m_dependencyConfigList;
}

void TaskDsDTOLiteV2::SetDependencyConfigList(const vector<DependencyConfigDsDTONoRecurV2>& _dependencyConfigList)
{
    m_dependencyConfigList = _dependencyConfigList;
    m_dependencyConfigListHasBeenSet = true;
}

bool TaskDsDTOLiteV2::DependencyConfigListHasBeenSet() const
{
    return m_dependencyConfigListHasBeenSet;
}

string TaskDsDTOLiteV2::GetVirtualTaskStatus() const
{
    return m_virtualTaskStatus;
}

void TaskDsDTOLiteV2::SetVirtualTaskStatus(const string& _virtualTaskStatus)
{
    m_virtualTaskStatus = _virtualTaskStatus;
    m_virtualTaskStatusHasBeenSet = true;
}

bool TaskDsDTOLiteV2::VirtualTaskStatusHasBeenSet() const
{
    return m_virtualTaskStatusHasBeenSet;
}

string TaskDsDTOLiteV2::GetRecycleTips() const
{
    return m_recycleTips;
}

void TaskDsDTOLiteV2::SetRecycleTips(const string& _recycleTips)
{
    m_recycleTips = _recycleTips;
    m_recycleTipsHasBeenSet = true;
}

bool TaskDsDTOLiteV2::RecycleTipsHasBeenSet() const
{
    return m_recycleTipsHasBeenSet;
}

string TaskDsDTOLiteV2::GetRecycleUser() const
{
    return m_recycleUser;
}

void TaskDsDTOLiteV2::SetRecycleUser(const string& _recycleUser)
{
    m_recycleUser = _recycleUser;
    m_recycleUserHasBeenSet = true;
}

bool TaskDsDTOLiteV2::RecycleUserHasBeenSet() const
{
    return m_recycleUserHasBeenSet;
}

string TaskDsDTOLiteV2::GetNewOrUpdate() const
{
    return m_newOrUpdate;
}

void TaskDsDTOLiteV2::SetNewOrUpdate(const string& _newOrUpdate)
{
    m_newOrUpdate = _newOrUpdate;
    m_newOrUpdateHasBeenSet = true;
}

bool TaskDsDTOLiteV2::NewOrUpdateHasBeenSet() const
{
    return m_newOrUpdateHasBeenSet;
}

vector<ParameterTaskDsDto> TaskDsDTOLiteV2::GetParams() const
{
    return m_params;
}

void TaskDsDTOLiteV2::SetParams(const vector<ParameterTaskDsDto>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool TaskDsDTOLiteV2::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

vector<TaskLinkDsDTO> TaskDsDTOLiteV2::GetTaskLinkInfo() const
{
    return m_taskLinkInfo;
}

void TaskDsDTOLiteV2::SetTaskLinkInfo(const vector<TaskLinkDsDTO>& _taskLinkInfo)
{
    m_taskLinkInfo = _taskLinkInfo;
    m_taskLinkInfoHasBeenSet = true;
}

bool TaskDsDTOLiteV2::TaskLinkInfoHasBeenSet() const
{
    return m_taskLinkInfoHasBeenSet;
}

bool TaskDsDTOLiteV2::GetImportResult() const
{
    return m_importResult;
}

void TaskDsDTOLiteV2::SetImportResult(const bool& _importResult)
{
    m_importResult = _importResult;
    m_importResultHasBeenSet = true;
}

bool TaskDsDTOLiteV2::ImportResultHasBeenSet() const
{
    return m_importResultHasBeenSet;
}

string TaskDsDTOLiteV2::GetImportErrMsg() const
{
    return m_importErrMsg;
}

void TaskDsDTOLiteV2::SetImportErrMsg(const string& _importErrMsg)
{
    m_importErrMsg = _importErrMsg;
    m_importErrMsgHasBeenSet = true;
}

bool TaskDsDTOLiteV2::ImportErrMsgHasBeenSet() const
{
    return m_importErrMsgHasBeenSet;
}

string TaskDsDTOLiteV2::GetContentType() const
{
    return m_contentType;
}

void TaskDsDTOLiteV2::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

bool TaskDsDTOLiteV2::GetTaskAutoSubmit() const
{
    return m_taskAutoSubmit;
}

void TaskDsDTOLiteV2::SetTaskAutoSubmit(const bool& _taskAutoSubmit)
{
    m_taskAutoSubmit = _taskAutoSubmit;
    m_taskAutoSubmitHasBeenSet = true;
}

bool TaskDsDTOLiteV2::TaskAutoSubmitHasBeenSet() const
{
    return m_taskAutoSubmitHasBeenSet;
}

string TaskDsDTOLiteV2::GetProductName() const
{
    return m_productName;
}

void TaskDsDTOLiteV2::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool TaskDsDTOLiteV2::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string TaskDsDTOLiteV2::GetOwnId() const
{
    return m_ownId;
}

void TaskDsDTOLiteV2::SetOwnId(const string& _ownId)
{
    m_ownId = _ownId;
    m_ownIdHasBeenSet = true;
}

bool TaskDsDTOLiteV2::OwnIdHasBeenSet() const
{
    return m_ownIdHasBeenSet;
}

string TaskDsDTOLiteV2::GetUserId() const
{
    return m_userId;
}

void TaskDsDTOLiteV2::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool TaskDsDTOLiteV2::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string TaskDsDTOLiteV2::GetTenantId() const
{
    return m_tenantId;
}

void TaskDsDTOLiteV2::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool TaskDsDTOLiteV2::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string TaskDsDTOLiteV2::GetUpdateUser() const
{
    return m_updateUser;
}

void TaskDsDTOLiteV2::SetUpdateUser(const string& _updateUser)
{
    m_updateUser = _updateUser;
    m_updateUserHasBeenSet = true;
}

bool TaskDsDTOLiteV2::UpdateUserHasBeenSet() const
{
    return m_updateUserHasBeenSet;
}

string TaskDsDTOLiteV2::GetUpdateTime() const
{
    return m_updateTime;
}

void TaskDsDTOLiteV2::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TaskDsDTOLiteV2::GetUpdateUserId() const
{
    return m_updateUserId;
}

void TaskDsDTOLiteV2::SetUpdateUserId(const string& _updateUserId)
{
    m_updateUserId = _updateUserId;
    m_updateUserIdHasBeenSet = true;
}

bool TaskDsDTOLiteV2::UpdateUserIdHasBeenSet() const
{
    return m_updateUserIdHasBeenSet;
}

string TaskDsDTOLiteV2::GetSchedulerDesc() const
{
    return m_schedulerDesc;
}

void TaskDsDTOLiteV2::SetSchedulerDesc(const string& _schedulerDesc)
{
    m_schedulerDesc = _schedulerDesc;
    m_schedulerDescHasBeenSet = true;
}

bool TaskDsDTOLiteV2::SchedulerDescHasBeenSet() const
{
    return m_schedulerDescHasBeenSet;
}

string TaskDsDTOLiteV2::GetResourceGroup() const
{
    return m_resourceGroup;
}

void TaskDsDTOLiteV2::SetResourceGroup(const string& _resourceGroup)
{
    m_resourceGroup = _resourceGroup;
    m_resourceGroupHasBeenSet = true;
}

bool TaskDsDTOLiteV2::ResourceGroupHasBeenSet() const
{
    return m_resourceGroupHasBeenSet;
}

string TaskDsDTOLiteV2::GetVersionDesc() const
{
    return m_versionDesc;
}

void TaskDsDTOLiteV2::SetVersionDesc(const string& _versionDesc)
{
    m_versionDesc = _versionDesc;
    m_versionDescHasBeenSet = true;
}

bool TaskDsDTOLiteV2::VersionDescHasBeenSet() const
{
    return m_versionDescHasBeenSet;
}

string TaskDsDTOLiteV2::GetLinkId() const
{
    return m_linkId;
}

void TaskDsDTOLiteV2::SetLinkId(const string& _linkId)
{
    m_linkId = _linkId;
    m_linkIdHasBeenSet = true;
}

bool TaskDsDTOLiteV2::LinkIdHasBeenSet() const
{
    return m_linkIdHasBeenSet;
}

string TaskDsDTOLiteV2::GetUserFileId() const
{
    return m_userFileId;
}

void TaskDsDTOLiteV2::SetUserFileId(const string& _userFileId)
{
    m_userFileId = _userFileId;
    m_userFileIdHasBeenSet = true;
}

bool TaskDsDTOLiteV2::UserFileIdHasBeenSet() const
{
    return m_userFileIdHasBeenSet;
}

string TaskDsDTOLiteV2::GetSourceServiceId() const
{
    return m_sourceServiceId;
}

void TaskDsDTOLiteV2::SetSourceServiceId(const string& _sourceServiceId)
{
    m_sourceServiceId = _sourceServiceId;
    m_sourceServiceIdHasBeenSet = true;
}

bool TaskDsDTOLiteV2::SourceServiceIdHasBeenSet() const
{
    return m_sourceServiceIdHasBeenSet;
}

string TaskDsDTOLiteV2::GetSourceServiceType() const
{
    return m_sourceServiceType;
}

void TaskDsDTOLiteV2::SetSourceServiceType(const string& _sourceServiceType)
{
    m_sourceServiceType = _sourceServiceType;
    m_sourceServiceTypeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::SourceServiceTypeHasBeenSet() const
{
    return m_sourceServiceTypeHasBeenSet;
}

string TaskDsDTOLiteV2::GetTargetServiceId() const
{
    return m_targetServiceId;
}

void TaskDsDTOLiteV2::SetTargetServiceId(const string& _targetServiceId)
{
    m_targetServiceId = _targetServiceId;
    m_targetServiceIdHasBeenSet = true;
}

bool TaskDsDTOLiteV2::TargetServiceIdHasBeenSet() const
{
    return m_targetServiceIdHasBeenSet;
}

string TaskDsDTOLiteV2::GetTargetServiceType() const
{
    return m_targetServiceType;
}

void TaskDsDTOLiteV2::SetTargetServiceType(const string& _targetServiceType)
{
    m_targetServiceType = _targetServiceType;
    m_targetServiceTypeHasBeenSet = true;
}

bool TaskDsDTOLiteV2::TargetServiceTypeHasBeenSet() const
{
    return m_targetServiceTypeHasBeenSet;
}

vector<ParameterTaskInDsDto> TaskDsDTOLiteV2::GetParamInList() const
{
    return m_paramInList;
}

void TaskDsDTOLiteV2::SetParamInList(const vector<ParameterTaskInDsDto>& _paramInList)
{
    m_paramInList = _paramInList;
    m_paramInListHasBeenSet = true;
}

bool TaskDsDTOLiteV2::ParamInListHasBeenSet() const
{
    return m_paramInListHasBeenSet;
}

vector<ParameterTaskOutDsDto> TaskDsDTOLiteV2::GetParamOutList() const
{
    return m_paramOutList;
}

void TaskDsDTOLiteV2::SetParamOutList(const vector<ParameterTaskOutDsDto>& _paramOutList)
{
    m_paramOutList = _paramOutList;
    m_paramOutListHasBeenSet = true;
}

bool TaskDsDTOLiteV2::ParamOutListHasBeenSet() const
{
    return m_paramOutListHasBeenSet;
}

