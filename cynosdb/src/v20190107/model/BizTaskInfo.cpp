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

#include <tencentcloud/cynosdb/v20190107/model/BizTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

BizTaskInfo::BizTaskInfo() :
    m_iDHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_instanceGrpIdHasBeenSet(false),
    m_instanceGroupIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_objectIdHasBeenSet(false),
    m_objectTypeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_triggerTaskIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_processHasBeenSet(false),
    m_modifyParamsDataHasBeenSet(false),
    m_createClustersDataHasBeenSet(false),
    m_rollbackDataHasBeenSet(false),
    m_modifyInstanceDataHasBeenSet(false),
    m_manualBackupDataHasBeenSet(false),
    m_modifyDbVersionDataHasBeenSet(false),
    m_clusterSlaveDataHasBeenSet(false),
    m_switchClusterLogBinHasBeenSet(false),
    m_modifyInstanceParamsDataHasBeenSet(false),
    m_taskMaintainInfoHasBeenSet(false),
    m_instanceCLSDeliveryInfosHasBeenSet(false),
    m_taskProgressInfoHasBeenSet(false),
    m_gdnTaskInfoHasBeenSet(false)
{
}

CoreInternalOutcome BizTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DelayTime") && !value["DelayTime"].IsNull())
    {
        if (!value["DelayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.DelayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_delayTime = string(value["DelayTime"].GetString());
        m_delayTimeHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.FlowId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = value["FlowId"].GetInt64();
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.Input` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_input = string(value["Input"].GetString());
        m_inputHasBeenSet = true;
    }

    if (value.HasMember("InstanceGrpId") && !value["InstanceGrpId"].IsNull())
    {
        if (!value["InstanceGrpId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.InstanceGrpId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceGrpId = string(value["InstanceGrpId"].GetString());
        m_instanceGrpIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceGroupId") && !value["InstanceGroupId"].IsNull())
    {
        if (!value["InstanceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.InstanceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceGroupId = string(value["InstanceGroupId"].GetString());
        m_instanceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ObjectId") && !value["ObjectId"].IsNull())
    {
        if (!value["ObjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.ObjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectId = string(value["ObjectId"].GetString());
        m_objectIdHasBeenSet = true;
    }

    if (value.HasMember("ObjectType") && !value["ObjectType"].IsNull())
    {
        if (!value["ObjectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.ObjectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectType = string(value["ObjectType"].GetString());
        m_objectTypeHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.Output` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_output = string(value["Output"].GetString());
        m_outputHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("TriggerTaskId") && !value["TriggerTaskId"].IsNull())
    {
        if (!value["TriggerTaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.TriggerTaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerTaskId = value["TriggerTaskId"].GetInt64();
        m_triggerTaskIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Process") && !value["Process"].IsNull())
    {
        if (!value["Process"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.Process` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_process = value["Process"].GetInt64();
        m_processHasBeenSet = true;
    }

    if (value.HasMember("ModifyParamsData") && !value["ModifyParamsData"].IsNull())
    {
        if (!value["ModifyParamsData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.ModifyParamsData` is not array type"));

        const rapidjson::Value &tmpValue = value["ModifyParamsData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ModifyParamsData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_modifyParamsData.push_back(item);
        }
        m_modifyParamsDataHasBeenSet = true;
    }

    if (value.HasMember("CreateClustersData") && !value["CreateClustersData"].IsNull())
    {
        if (!value["CreateClustersData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.CreateClustersData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_createClustersData.Deserialize(value["CreateClustersData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_createClustersDataHasBeenSet = true;
    }

    if (value.HasMember("RollbackData") && !value["RollbackData"].IsNull())
    {
        if (!value["RollbackData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.RollbackData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rollbackData.Deserialize(value["RollbackData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rollbackDataHasBeenSet = true;
    }

    if (value.HasMember("ModifyInstanceData") && !value["ModifyInstanceData"].IsNull())
    {
        if (!value["ModifyInstanceData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.ModifyInstanceData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modifyInstanceData.Deserialize(value["ModifyInstanceData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modifyInstanceDataHasBeenSet = true;
    }

    if (value.HasMember("ManualBackupData") && !value["ManualBackupData"].IsNull())
    {
        if (!value["ManualBackupData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.ManualBackupData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_manualBackupData.Deserialize(value["ManualBackupData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_manualBackupDataHasBeenSet = true;
    }

    if (value.HasMember("ModifyDbVersionData") && !value["ModifyDbVersionData"].IsNull())
    {
        if (!value["ModifyDbVersionData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.ModifyDbVersionData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modifyDbVersionData.Deserialize(value["ModifyDbVersionData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modifyDbVersionDataHasBeenSet = true;
    }

    if (value.HasMember("ClusterSlaveData") && !value["ClusterSlaveData"].IsNull())
    {
        if (!value["ClusterSlaveData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.ClusterSlaveData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterSlaveData.Deserialize(value["ClusterSlaveData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterSlaveDataHasBeenSet = true;
    }

    if (value.HasMember("SwitchClusterLogBin") && !value["SwitchClusterLogBin"].IsNull())
    {
        if (!value["SwitchClusterLogBin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.SwitchClusterLogBin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_switchClusterLogBin.Deserialize(value["SwitchClusterLogBin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_switchClusterLogBinHasBeenSet = true;
    }

    if (value.HasMember("ModifyInstanceParamsData") && !value["ModifyInstanceParamsData"].IsNull())
    {
        if (!value["ModifyInstanceParamsData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.ModifyInstanceParamsData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modifyInstanceParamsData.Deserialize(value["ModifyInstanceParamsData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modifyInstanceParamsDataHasBeenSet = true;
    }

    if (value.HasMember("TaskMaintainInfo") && !value["TaskMaintainInfo"].IsNull())
    {
        if (!value["TaskMaintainInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.TaskMaintainInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskMaintainInfo.Deserialize(value["TaskMaintainInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskMaintainInfoHasBeenSet = true;
    }

    if (value.HasMember("InstanceCLSDeliveryInfos") && !value["InstanceCLSDeliveryInfos"].IsNull())
    {
        if (!value["InstanceCLSDeliveryInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.InstanceCLSDeliveryInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceCLSDeliveryInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceCLSDeliveryInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceCLSDeliveryInfos.push_back(item);
        }
        m_instanceCLSDeliveryInfosHasBeenSet = true;
    }

    if (value.HasMember("TaskProgressInfo") && !value["TaskProgressInfo"].IsNull())
    {
        if (!value["TaskProgressInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.TaskProgressInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskProgressInfo.Deserialize(value["TaskProgressInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskProgressInfoHasBeenSet = true;
    }

    if (value.HasMember("GdnTaskInfo") && !value["GdnTaskInfo"].IsNull())
    {
        if (!value["GdnTaskInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BizTaskInfo.GdnTaskInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gdnTaskInfo.Deserialize(value["GdnTaskInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gdnTaskInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BizTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_delayTime.c_str(), allocator).Move(), allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowId, allocator);
    }

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_input.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceGrpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGrpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceGrpId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_objectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectId.c_str(), allocator).Move(), allocator);
    }

    if (m_objectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectType.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_output.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerTaskId, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
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

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_processHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Process";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_process, allocator);
    }

    if (m_modifyParamsDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyParamsData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modifyParamsData.begin(); itr != m_modifyParamsData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createClustersDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateClustersData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_createClustersData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rollbackDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rollbackData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modifyInstanceDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyInstanceData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modifyInstanceData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_manualBackupDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBackupData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_manualBackupData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modifyDbVersionDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyDbVersionData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modifyDbVersionData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clusterSlaveDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterSlaveData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterSlaveData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_switchClusterLogBinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchClusterLogBin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_switchClusterLogBin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modifyInstanceParamsDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyInstanceParamsData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modifyInstanceParamsData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskMaintainInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskMaintainInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskMaintainInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceCLSDeliveryInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCLSDeliveryInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceCLSDeliveryInfos.begin(); itr != m_instanceCLSDeliveryInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskProgressInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskProgressInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskProgressInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gdnTaskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GdnTaskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gdnTaskInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t BizTaskInfo::GetID() const
{
    return m_iD;
}

void BizTaskInfo::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool BizTaskInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

int64_t BizTaskInfo::GetAppId() const
{
    return m_appId;
}

void BizTaskInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool BizTaskInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string BizTaskInfo::GetClusterId() const
{
    return m_clusterId;
}

void BizTaskInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool BizTaskInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string BizTaskInfo::GetRegion() const
{
    return m_region;
}

void BizTaskInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BizTaskInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string BizTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void BizTaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BizTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BizTaskInfo::GetDelayTime() const
{
    return m_delayTime;
}

void BizTaskInfo::SetDelayTime(const string& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool BizTaskInfo::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

string BizTaskInfo::GetErrMsg() const
{
    return m_errMsg;
}

void BizTaskInfo::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool BizTaskInfo::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

int64_t BizTaskInfo::GetFlowId() const
{
    return m_flowId;
}

void BizTaskInfo::SetFlowId(const int64_t& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool BizTaskInfo::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string BizTaskInfo::GetInput() const
{
    return m_input;
}

void BizTaskInfo::SetInput(const string& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool BizTaskInfo::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

string BizTaskInfo::GetInstanceGrpId() const
{
    return m_instanceGrpId;
}

void BizTaskInfo::SetInstanceGrpId(const string& _instanceGrpId)
{
    m_instanceGrpId = _instanceGrpId;
    m_instanceGrpIdHasBeenSet = true;
}

bool BizTaskInfo::InstanceGrpIdHasBeenSet() const
{
    return m_instanceGrpIdHasBeenSet;
}

string BizTaskInfo::GetInstanceGroupId() const
{
    return m_instanceGroupId;
}

void BizTaskInfo::SetInstanceGroupId(const string& _instanceGroupId)
{
    m_instanceGroupId = _instanceGroupId;
    m_instanceGroupIdHasBeenSet = true;
}

bool BizTaskInfo::InstanceGroupIdHasBeenSet() const
{
    return m_instanceGroupIdHasBeenSet;
}

string BizTaskInfo::GetInstanceId() const
{
    return m_instanceId;
}

void BizTaskInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BizTaskInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string BizTaskInfo::GetObjectId() const
{
    return m_objectId;
}

void BizTaskInfo::SetObjectId(const string& _objectId)
{
    m_objectId = _objectId;
    m_objectIdHasBeenSet = true;
}

bool BizTaskInfo::ObjectIdHasBeenSet() const
{
    return m_objectIdHasBeenSet;
}

string BizTaskInfo::GetObjectType() const
{
    return m_objectType;
}

void BizTaskInfo::SetObjectType(const string& _objectType)
{
    m_objectType = _objectType;
    m_objectTypeHasBeenSet = true;
}

bool BizTaskInfo::ObjectTypeHasBeenSet() const
{
    return m_objectTypeHasBeenSet;
}

string BizTaskInfo::GetOperator() const
{
    return m_operator;
}

void BizTaskInfo::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool BizTaskInfo::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string BizTaskInfo::GetOutput() const
{
    return m_output;
}

void BizTaskInfo::SetOutput(const string& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool BizTaskInfo::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string BizTaskInfo::GetStatus() const
{
    return m_status;
}

void BizTaskInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BizTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BizTaskInfo::GetTaskType() const
{
    return m_taskType;
}

void BizTaskInfo::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool BizTaskInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

int64_t BizTaskInfo::GetTriggerTaskId() const
{
    return m_triggerTaskId;
}

void BizTaskInfo::SetTriggerTaskId(const int64_t& _triggerTaskId)
{
    m_triggerTaskId = _triggerTaskId;
    m_triggerTaskIdHasBeenSet = true;
}

bool BizTaskInfo::TriggerTaskIdHasBeenSet() const
{
    return m_triggerTaskIdHasBeenSet;
}

string BizTaskInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void BizTaskInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool BizTaskInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string BizTaskInfo::GetStartTime() const
{
    return m_startTime;
}

void BizTaskInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BizTaskInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BizTaskInfo::GetEndTime() const
{
    return m_endTime;
}

void BizTaskInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool BizTaskInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string BizTaskInfo::GetClusterName() const
{
    return m_clusterName;
}

void BizTaskInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool BizTaskInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string BizTaskInfo::GetInstanceName() const
{
    return m_instanceName;
}

void BizTaskInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool BizTaskInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t BizTaskInfo::GetProcess() const
{
    return m_process;
}

void BizTaskInfo::SetProcess(const int64_t& _process)
{
    m_process = _process;
    m_processHasBeenSet = true;
}

bool BizTaskInfo::ProcessHasBeenSet() const
{
    return m_processHasBeenSet;
}

vector<ModifyParamsData> BizTaskInfo::GetModifyParamsData() const
{
    return m_modifyParamsData;
}

void BizTaskInfo::SetModifyParamsData(const vector<ModifyParamsData>& _modifyParamsData)
{
    m_modifyParamsData = _modifyParamsData;
    m_modifyParamsDataHasBeenSet = true;
}

bool BizTaskInfo::ModifyParamsDataHasBeenSet() const
{
    return m_modifyParamsDataHasBeenSet;
}

CreateClustersData BizTaskInfo::GetCreateClustersData() const
{
    return m_createClustersData;
}

void BizTaskInfo::SetCreateClustersData(const CreateClustersData& _createClustersData)
{
    m_createClustersData = _createClustersData;
    m_createClustersDataHasBeenSet = true;
}

bool BizTaskInfo::CreateClustersDataHasBeenSet() const
{
    return m_createClustersDataHasBeenSet;
}

RollbackData BizTaskInfo::GetRollbackData() const
{
    return m_rollbackData;
}

void BizTaskInfo::SetRollbackData(const RollbackData& _rollbackData)
{
    m_rollbackData = _rollbackData;
    m_rollbackDataHasBeenSet = true;
}

bool BizTaskInfo::RollbackDataHasBeenSet() const
{
    return m_rollbackDataHasBeenSet;
}

ModifyInstanceData BizTaskInfo::GetModifyInstanceData() const
{
    return m_modifyInstanceData;
}

void BizTaskInfo::SetModifyInstanceData(const ModifyInstanceData& _modifyInstanceData)
{
    m_modifyInstanceData = _modifyInstanceData;
    m_modifyInstanceDataHasBeenSet = true;
}

bool BizTaskInfo::ModifyInstanceDataHasBeenSet() const
{
    return m_modifyInstanceDataHasBeenSet;
}

ManualBackupData BizTaskInfo::GetManualBackupData() const
{
    return m_manualBackupData;
}

void BizTaskInfo::SetManualBackupData(const ManualBackupData& _manualBackupData)
{
    m_manualBackupData = _manualBackupData;
    m_manualBackupDataHasBeenSet = true;
}

bool BizTaskInfo::ManualBackupDataHasBeenSet() const
{
    return m_manualBackupDataHasBeenSet;
}

ModifyDbVersionData BizTaskInfo::GetModifyDbVersionData() const
{
    return m_modifyDbVersionData;
}

void BizTaskInfo::SetModifyDbVersionData(const ModifyDbVersionData& _modifyDbVersionData)
{
    m_modifyDbVersionData = _modifyDbVersionData;
    m_modifyDbVersionDataHasBeenSet = true;
}

bool BizTaskInfo::ModifyDbVersionDataHasBeenSet() const
{
    return m_modifyDbVersionDataHasBeenSet;
}

ClusterSlaveData BizTaskInfo::GetClusterSlaveData() const
{
    return m_clusterSlaveData;
}

void BizTaskInfo::SetClusterSlaveData(const ClusterSlaveData& _clusterSlaveData)
{
    m_clusterSlaveData = _clusterSlaveData;
    m_clusterSlaveDataHasBeenSet = true;
}

bool BizTaskInfo::ClusterSlaveDataHasBeenSet() const
{
    return m_clusterSlaveDataHasBeenSet;
}

SwitchClusterLogBin BizTaskInfo::GetSwitchClusterLogBin() const
{
    return m_switchClusterLogBin;
}

void BizTaskInfo::SetSwitchClusterLogBin(const SwitchClusterLogBin& _switchClusterLogBin)
{
    m_switchClusterLogBin = _switchClusterLogBin;
    m_switchClusterLogBinHasBeenSet = true;
}

bool BizTaskInfo::SwitchClusterLogBinHasBeenSet() const
{
    return m_switchClusterLogBinHasBeenSet;
}

BizTaskModifyParamsData BizTaskInfo::GetModifyInstanceParamsData() const
{
    return m_modifyInstanceParamsData;
}

void BizTaskInfo::SetModifyInstanceParamsData(const BizTaskModifyParamsData& _modifyInstanceParamsData)
{
    m_modifyInstanceParamsData = _modifyInstanceParamsData;
    m_modifyInstanceParamsDataHasBeenSet = true;
}

bool BizTaskInfo::ModifyInstanceParamsDataHasBeenSet() const
{
    return m_modifyInstanceParamsDataHasBeenSet;
}

TaskMaintainInfo BizTaskInfo::GetTaskMaintainInfo() const
{
    return m_taskMaintainInfo;
}

void BizTaskInfo::SetTaskMaintainInfo(const TaskMaintainInfo& _taskMaintainInfo)
{
    m_taskMaintainInfo = _taskMaintainInfo;
    m_taskMaintainInfoHasBeenSet = true;
}

bool BizTaskInfo::TaskMaintainInfoHasBeenSet() const
{
    return m_taskMaintainInfoHasBeenSet;
}

vector<InstanceCLSDeliveryInfo> BizTaskInfo::GetInstanceCLSDeliveryInfos() const
{
    return m_instanceCLSDeliveryInfos;
}

void BizTaskInfo::SetInstanceCLSDeliveryInfos(const vector<InstanceCLSDeliveryInfo>& _instanceCLSDeliveryInfos)
{
    m_instanceCLSDeliveryInfos = _instanceCLSDeliveryInfos;
    m_instanceCLSDeliveryInfosHasBeenSet = true;
}

bool BizTaskInfo::InstanceCLSDeliveryInfosHasBeenSet() const
{
    return m_instanceCLSDeliveryInfosHasBeenSet;
}

TaskProgressInfo BizTaskInfo::GetTaskProgressInfo() const
{
    return m_taskProgressInfo;
}

void BizTaskInfo::SetTaskProgressInfo(const TaskProgressInfo& _taskProgressInfo)
{
    m_taskProgressInfo = _taskProgressInfo;
    m_taskProgressInfoHasBeenSet = true;
}

bool BizTaskInfo::TaskProgressInfoHasBeenSet() const
{
    return m_taskProgressInfoHasBeenSet;
}

GdnTaskInfo BizTaskInfo::GetGdnTaskInfo() const
{
    return m_gdnTaskInfo;
}

void BizTaskInfo::SetGdnTaskInfo(const GdnTaskInfo& _gdnTaskInfo)
{
    m_gdnTaskInfo = _gdnTaskInfo;
    m_gdnTaskInfoHasBeenSet = true;
}

bool BizTaskInfo::GdnTaskInfoHasBeenSet() const
{
    return m_gdnTaskInfoHasBeenSet;
}

