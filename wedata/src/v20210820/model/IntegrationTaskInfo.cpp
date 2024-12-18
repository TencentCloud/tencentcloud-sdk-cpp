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
    m_inLongManagerVersionHasBeenSet(false),
    m_dataProxyUrlHasBeenSet(false),
    m_submitHasBeenSet(false),
    m_inputDatasourceTypeHasBeenSet(false),
    m_outputDatasourceTypeHasBeenSet(false),
    m_numRecordsInHasBeenSet(false),
    m_numRecordsOutHasBeenSet(false),
    m_readerDelayHasBeenSet(false),
    m_numRestartsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_lastRunTimeHasBeenSet(false),
    m_stopTimeHasBeenSet(false),
    m_hasVersionHasBeenSet(false),
    m_lockedHasBeenSet(false),
    m_lockerHasBeenSet(false),
    m_runningCuHasBeenSet(false),
    m_taskAlarmRegularListHasBeenSet(false),
    m_switchResourceHasBeenSet(false),
    m_readPhaseHasBeenSet(false),
    m_instanceVersionHasBeenSet(false),
    m_arrangeSpaceTaskIdHasBeenSet(false),
    m_offlineTaskStatusHasBeenSet(false),
    m_taskImportInfoHasBeenSet(false),
    m_businessLatencyHasBeenSet(false),
    m_currentSyncPositionHasBeenSet(false)
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

    if (value.HasMember("DataProxyUrl") && !value["DataProxyUrl"].IsNull())
    {
        if (!value["DataProxyUrl"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.DataProxyUrl` is not array type"));

        const rapidjson::Value &tmpValue = value["DataProxyUrl"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dataProxyUrl.push_back((*itr).GetString());
        }
        m_dataProxyUrlHasBeenSet = true;
    }

    if (value.HasMember("Submit") && !value["Submit"].IsNull())
    {
        if (!value["Submit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.Submit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_submit = value["Submit"].GetBool();
        m_submitHasBeenSet = true;
    }

    if (value.HasMember("InputDatasourceType") && !value["InputDatasourceType"].IsNull())
    {
        if (!value["InputDatasourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.InputDatasourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputDatasourceType = string(value["InputDatasourceType"].GetString());
        m_inputDatasourceTypeHasBeenSet = true;
    }

    if (value.HasMember("OutputDatasourceType") && !value["OutputDatasourceType"].IsNull())
    {
        if (!value["OutputDatasourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.OutputDatasourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputDatasourceType = string(value["OutputDatasourceType"].GetString());
        m_outputDatasourceTypeHasBeenSet = true;
    }

    if (value.HasMember("NumRecordsIn") && !value["NumRecordsIn"].IsNull())
    {
        if (!value["NumRecordsIn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.NumRecordsIn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numRecordsIn = value["NumRecordsIn"].GetInt64();
        m_numRecordsInHasBeenSet = true;
    }

    if (value.HasMember("NumRecordsOut") && !value["NumRecordsOut"].IsNull())
    {
        if (!value["NumRecordsOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.NumRecordsOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numRecordsOut = value["NumRecordsOut"].GetInt64();
        m_numRecordsOutHasBeenSet = true;
    }

    if (value.HasMember("ReaderDelay") && !value["ReaderDelay"].IsNull())
    {
        if (!value["ReaderDelay"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.ReaderDelay` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_readerDelay = value["ReaderDelay"].GetDouble();
        m_readerDelayHasBeenSet = true;
    }

    if (value.HasMember("NumRestarts") && !value["NumRestarts"].IsNull())
    {
        if (!value["NumRestarts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.NumRestarts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numRestarts = value["NumRestarts"].GetInt64();
        m_numRestartsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("LastRunTime") && !value["LastRunTime"].IsNull())
    {
        if (!value["LastRunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.LastRunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastRunTime = string(value["LastRunTime"].GetString());
        m_lastRunTimeHasBeenSet = true;
    }

    if (value.HasMember("StopTime") && !value["StopTime"].IsNull())
    {
        if (!value["StopTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.StopTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stopTime = string(value["StopTime"].GetString());
        m_stopTimeHasBeenSet = true;
    }

    if (value.HasMember("HasVersion") && !value["HasVersion"].IsNull())
    {
        if (!value["HasVersion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.HasVersion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasVersion = value["HasVersion"].GetBool();
        m_hasVersionHasBeenSet = true;
    }

    if (value.HasMember("Locked") && !value["Locked"].IsNull())
    {
        if (!value["Locked"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.Locked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_locked = value["Locked"].GetBool();
        m_lockedHasBeenSet = true;
    }

    if (value.HasMember("Locker") && !value["Locker"].IsNull())
    {
        if (!value["Locker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.Locker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locker = string(value["Locker"].GetString());
        m_lockerHasBeenSet = true;
    }

    if (value.HasMember("RunningCu") && !value["RunningCu"].IsNull())
    {
        if (!value["RunningCu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.RunningCu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_runningCu = value["RunningCu"].GetDouble();
        m_runningCuHasBeenSet = true;
    }

    if (value.HasMember("TaskAlarmRegularList") && !value["TaskAlarmRegularList"].IsNull())
    {
        if (!value["TaskAlarmRegularList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.TaskAlarmRegularList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskAlarmRegularList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskAlarmRegularList.push_back((*itr).GetString());
        }
        m_taskAlarmRegularListHasBeenSet = true;
    }

    if (value.HasMember("SwitchResource") && !value["SwitchResource"].IsNull())
    {
        if (!value["SwitchResource"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.SwitchResource` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_switchResource = value["SwitchResource"].GetInt64();
        m_switchResourceHasBeenSet = true;
    }

    if (value.HasMember("ReadPhase") && !value["ReadPhase"].IsNull())
    {
        if (!value["ReadPhase"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.ReadPhase` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readPhase = value["ReadPhase"].GetInt64();
        m_readPhaseHasBeenSet = true;
    }

    if (value.HasMember("InstanceVersion") && !value["InstanceVersion"].IsNull())
    {
        if (!value["InstanceVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.InstanceVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceVersion = value["InstanceVersion"].GetInt64();
        m_instanceVersionHasBeenSet = true;
    }

    if (value.HasMember("ArrangeSpaceTaskId") && !value["ArrangeSpaceTaskId"].IsNull())
    {
        if (!value["ArrangeSpaceTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.ArrangeSpaceTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_arrangeSpaceTaskId = string(value["ArrangeSpaceTaskId"].GetString());
        m_arrangeSpaceTaskIdHasBeenSet = true;
    }

    if (value.HasMember("OfflineTaskStatus") && !value["OfflineTaskStatus"].IsNull())
    {
        if (!value["OfflineTaskStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.OfflineTaskStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offlineTaskStatus = value["OfflineTaskStatus"].GetInt64();
        m_offlineTaskStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskImportInfo") && !value["TaskImportInfo"].IsNull())
    {
        if (!value["TaskImportInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.TaskImportInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskImportInfo.Deserialize(value["TaskImportInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskImportInfoHasBeenSet = true;
    }

    if (value.HasMember("BusinessLatency") && !value["BusinessLatency"].IsNull())
    {
        if (!value["BusinessLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.BusinessLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_businessLatency = value["BusinessLatency"].GetInt64();
        m_businessLatencyHasBeenSet = true;
    }

    if (value.HasMember("CurrentSyncPosition") && !value["CurrentSyncPosition"].IsNull())
    {
        if (!value["CurrentSyncPosition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationTaskInfo.CurrentSyncPosition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentSyncPosition = value["CurrentSyncPosition"].GetInt64();
        m_currentSyncPositionHasBeenSet = true;
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

    if (m_dataProxyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataProxyUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataProxyUrl.begin(); itr != m_dataProxyUrl.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_submitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Submit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_submit, allocator);
    }

    if (m_inputDatasourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputDatasourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputDatasourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_outputDatasourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputDatasourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputDatasourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_numRecordsInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumRecordsIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numRecordsIn, allocator);
    }

    if (m_numRecordsOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumRecordsOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numRecordsOut, allocator);
    }

    if (m_readerDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReaderDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readerDelay, allocator);
    }

    if (m_numRestartsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumRestarts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numRestarts, allocator);
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

    if (m_lastRunTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRunTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastRunTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stopTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stopTime.c_str(), allocator).Move(), allocator);
    }

    if (m_hasVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasVersion, allocator);
    }

    if (m_lockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locked, allocator);
    }

    if (m_lockerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locker.c_str(), allocator).Move(), allocator);
    }

    if (m_runningCuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningCu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningCu, allocator);
    }

    if (m_taskAlarmRegularListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAlarmRegularList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskAlarmRegularList.begin(); itr != m_taskAlarmRegularList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_switchResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switchResource, allocator);
    }

    if (m_readPhaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadPhase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readPhase, allocator);
    }

    if (m_instanceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceVersion, allocator);
    }

    if (m_arrangeSpaceTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArrangeSpaceTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_arrangeSpaceTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_offlineTaskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineTaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offlineTaskStatus, allocator);
    }

    if (m_taskImportInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskImportInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskImportInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_businessLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_businessLatency, allocator);
    }

    if (m_currentSyncPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentSyncPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentSyncPosition, allocator);
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

vector<string> IntegrationTaskInfo::GetDataProxyUrl() const
{
    return m_dataProxyUrl;
}

void IntegrationTaskInfo::SetDataProxyUrl(const vector<string>& _dataProxyUrl)
{
    m_dataProxyUrl = _dataProxyUrl;
    m_dataProxyUrlHasBeenSet = true;
}

bool IntegrationTaskInfo::DataProxyUrlHasBeenSet() const
{
    return m_dataProxyUrlHasBeenSet;
}

bool IntegrationTaskInfo::GetSubmit() const
{
    return m_submit;
}

void IntegrationTaskInfo::SetSubmit(const bool& _submit)
{
    m_submit = _submit;
    m_submitHasBeenSet = true;
}

bool IntegrationTaskInfo::SubmitHasBeenSet() const
{
    return m_submitHasBeenSet;
}

string IntegrationTaskInfo::GetInputDatasourceType() const
{
    return m_inputDatasourceType;
}

void IntegrationTaskInfo::SetInputDatasourceType(const string& _inputDatasourceType)
{
    m_inputDatasourceType = _inputDatasourceType;
    m_inputDatasourceTypeHasBeenSet = true;
}

bool IntegrationTaskInfo::InputDatasourceTypeHasBeenSet() const
{
    return m_inputDatasourceTypeHasBeenSet;
}

string IntegrationTaskInfo::GetOutputDatasourceType() const
{
    return m_outputDatasourceType;
}

void IntegrationTaskInfo::SetOutputDatasourceType(const string& _outputDatasourceType)
{
    m_outputDatasourceType = _outputDatasourceType;
    m_outputDatasourceTypeHasBeenSet = true;
}

bool IntegrationTaskInfo::OutputDatasourceTypeHasBeenSet() const
{
    return m_outputDatasourceTypeHasBeenSet;
}

int64_t IntegrationTaskInfo::GetNumRecordsIn() const
{
    return m_numRecordsIn;
}

void IntegrationTaskInfo::SetNumRecordsIn(const int64_t& _numRecordsIn)
{
    m_numRecordsIn = _numRecordsIn;
    m_numRecordsInHasBeenSet = true;
}

bool IntegrationTaskInfo::NumRecordsInHasBeenSet() const
{
    return m_numRecordsInHasBeenSet;
}

int64_t IntegrationTaskInfo::GetNumRecordsOut() const
{
    return m_numRecordsOut;
}

void IntegrationTaskInfo::SetNumRecordsOut(const int64_t& _numRecordsOut)
{
    m_numRecordsOut = _numRecordsOut;
    m_numRecordsOutHasBeenSet = true;
}

bool IntegrationTaskInfo::NumRecordsOutHasBeenSet() const
{
    return m_numRecordsOutHasBeenSet;
}

double IntegrationTaskInfo::GetReaderDelay() const
{
    return m_readerDelay;
}

void IntegrationTaskInfo::SetReaderDelay(const double& _readerDelay)
{
    m_readerDelay = _readerDelay;
    m_readerDelayHasBeenSet = true;
}

bool IntegrationTaskInfo::ReaderDelayHasBeenSet() const
{
    return m_readerDelayHasBeenSet;
}

int64_t IntegrationTaskInfo::GetNumRestarts() const
{
    return m_numRestarts;
}

void IntegrationTaskInfo::SetNumRestarts(const int64_t& _numRestarts)
{
    m_numRestarts = _numRestarts;
    m_numRestartsHasBeenSet = true;
}

bool IntegrationTaskInfo::NumRestartsHasBeenSet() const
{
    return m_numRestartsHasBeenSet;
}

string IntegrationTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void IntegrationTaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool IntegrationTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string IntegrationTaskInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void IntegrationTaskInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool IntegrationTaskInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string IntegrationTaskInfo::GetLastRunTime() const
{
    return m_lastRunTime;
}

void IntegrationTaskInfo::SetLastRunTime(const string& _lastRunTime)
{
    m_lastRunTime = _lastRunTime;
    m_lastRunTimeHasBeenSet = true;
}

bool IntegrationTaskInfo::LastRunTimeHasBeenSet() const
{
    return m_lastRunTimeHasBeenSet;
}

string IntegrationTaskInfo::GetStopTime() const
{
    return m_stopTime;
}

void IntegrationTaskInfo::SetStopTime(const string& _stopTime)
{
    m_stopTime = _stopTime;
    m_stopTimeHasBeenSet = true;
}

bool IntegrationTaskInfo::StopTimeHasBeenSet() const
{
    return m_stopTimeHasBeenSet;
}

bool IntegrationTaskInfo::GetHasVersion() const
{
    return m_hasVersion;
}

void IntegrationTaskInfo::SetHasVersion(const bool& _hasVersion)
{
    m_hasVersion = _hasVersion;
    m_hasVersionHasBeenSet = true;
}

bool IntegrationTaskInfo::HasVersionHasBeenSet() const
{
    return m_hasVersionHasBeenSet;
}

bool IntegrationTaskInfo::GetLocked() const
{
    return m_locked;
}

void IntegrationTaskInfo::SetLocked(const bool& _locked)
{
    m_locked = _locked;
    m_lockedHasBeenSet = true;
}

bool IntegrationTaskInfo::LockedHasBeenSet() const
{
    return m_lockedHasBeenSet;
}

string IntegrationTaskInfo::GetLocker() const
{
    return m_locker;
}

void IntegrationTaskInfo::SetLocker(const string& _locker)
{
    m_locker = _locker;
    m_lockerHasBeenSet = true;
}

bool IntegrationTaskInfo::LockerHasBeenSet() const
{
    return m_lockerHasBeenSet;
}

double IntegrationTaskInfo::GetRunningCu() const
{
    return m_runningCu;
}

void IntegrationTaskInfo::SetRunningCu(const double& _runningCu)
{
    m_runningCu = _runningCu;
    m_runningCuHasBeenSet = true;
}

bool IntegrationTaskInfo::RunningCuHasBeenSet() const
{
    return m_runningCuHasBeenSet;
}

vector<string> IntegrationTaskInfo::GetTaskAlarmRegularList() const
{
    return m_taskAlarmRegularList;
}

void IntegrationTaskInfo::SetTaskAlarmRegularList(const vector<string>& _taskAlarmRegularList)
{
    m_taskAlarmRegularList = _taskAlarmRegularList;
    m_taskAlarmRegularListHasBeenSet = true;
}

bool IntegrationTaskInfo::TaskAlarmRegularListHasBeenSet() const
{
    return m_taskAlarmRegularListHasBeenSet;
}

int64_t IntegrationTaskInfo::GetSwitchResource() const
{
    return m_switchResource;
}

void IntegrationTaskInfo::SetSwitchResource(const int64_t& _switchResource)
{
    m_switchResource = _switchResource;
    m_switchResourceHasBeenSet = true;
}

bool IntegrationTaskInfo::SwitchResourceHasBeenSet() const
{
    return m_switchResourceHasBeenSet;
}

int64_t IntegrationTaskInfo::GetReadPhase() const
{
    return m_readPhase;
}

void IntegrationTaskInfo::SetReadPhase(const int64_t& _readPhase)
{
    m_readPhase = _readPhase;
    m_readPhaseHasBeenSet = true;
}

bool IntegrationTaskInfo::ReadPhaseHasBeenSet() const
{
    return m_readPhaseHasBeenSet;
}

int64_t IntegrationTaskInfo::GetInstanceVersion() const
{
    return m_instanceVersion;
}

void IntegrationTaskInfo::SetInstanceVersion(const int64_t& _instanceVersion)
{
    m_instanceVersion = _instanceVersion;
    m_instanceVersionHasBeenSet = true;
}

bool IntegrationTaskInfo::InstanceVersionHasBeenSet() const
{
    return m_instanceVersionHasBeenSet;
}

string IntegrationTaskInfo::GetArrangeSpaceTaskId() const
{
    return m_arrangeSpaceTaskId;
}

void IntegrationTaskInfo::SetArrangeSpaceTaskId(const string& _arrangeSpaceTaskId)
{
    m_arrangeSpaceTaskId = _arrangeSpaceTaskId;
    m_arrangeSpaceTaskIdHasBeenSet = true;
}

bool IntegrationTaskInfo::ArrangeSpaceTaskIdHasBeenSet() const
{
    return m_arrangeSpaceTaskIdHasBeenSet;
}

int64_t IntegrationTaskInfo::GetOfflineTaskStatus() const
{
    return m_offlineTaskStatus;
}

void IntegrationTaskInfo::SetOfflineTaskStatus(const int64_t& _offlineTaskStatus)
{
    m_offlineTaskStatus = _offlineTaskStatus;
    m_offlineTaskStatusHasBeenSet = true;
}

bool IntegrationTaskInfo::OfflineTaskStatusHasBeenSet() const
{
    return m_offlineTaskStatusHasBeenSet;
}

TaskImportInfo IntegrationTaskInfo::GetTaskImportInfo() const
{
    return m_taskImportInfo;
}

void IntegrationTaskInfo::SetTaskImportInfo(const TaskImportInfo& _taskImportInfo)
{
    m_taskImportInfo = _taskImportInfo;
    m_taskImportInfoHasBeenSet = true;
}

bool IntegrationTaskInfo::TaskImportInfoHasBeenSet() const
{
    return m_taskImportInfoHasBeenSet;
}

int64_t IntegrationTaskInfo::GetBusinessLatency() const
{
    return m_businessLatency;
}

void IntegrationTaskInfo::SetBusinessLatency(const int64_t& _businessLatency)
{
    m_businessLatency = _businessLatency;
    m_businessLatencyHasBeenSet = true;
}

bool IntegrationTaskInfo::BusinessLatencyHasBeenSet() const
{
    return m_businessLatencyHasBeenSet;
}

int64_t IntegrationTaskInfo::GetCurrentSyncPosition() const
{
    return m_currentSyncPosition;
}

void IntegrationTaskInfo::SetCurrentSyncPosition(const int64_t& _currentSyncPosition)
{
    m_currentSyncPosition = _currentSyncPosition;
    m_currentSyncPositionHasBeenSet = true;
}

bool IntegrationTaskInfo::CurrentSyncPositionHasBeenSet() const
{
    return m_currentSyncPositionHasBeenSet;
}

