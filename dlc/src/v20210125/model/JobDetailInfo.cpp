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

#include <tencentcloud/dlc/v20210125/model/JobDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

JobDetailInfo::JobDetailInfo() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_creatorSubUinHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_majorTypeHasBeenSet(false),
    m_minorTypeHasBeenSet(false),
    m_runModeHasBeenSet(false),
    m_warehouseIdHasBeenSet(false),
    m_partitionCodeHasBeenSet(false),
    m_partitionNameHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_checkpointLocationHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_runningTimeMsHasBeenSet(false),
    m_warehouseNameHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_executionIdHasBeenSet(false),
    m_jobSourceHasBeenSet(false),
    m_waitingTimeMsHasBeenSet(false),
    m_historyUrlHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_customPropertiesHasBeenSet(false),
    m_envVarsHasBeenSet(false),
    m_runtimeCodeHasBeenSet(false),
    m_runtimeNameHasBeenSet(false),
    m_sysCatalogVersionHasBeenSet(false)
{
}

CoreInternalOutcome JobDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("CreatorSubUin") && !value["CreatorSubUin"].IsNull())
    {
        if (!value["CreatorSubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.CreatorSubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorSubUin = string(value["CreatorSubUin"].GetString());
        m_creatorSubUinHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("MajorType") && !value["MajorType"].IsNull())
    {
        if (!value["MajorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.MajorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_majorType = string(value["MajorType"].GetString());
        m_majorTypeHasBeenSet = true;
    }

    if (value.HasMember("MinorType") && !value["MinorType"].IsNull())
    {
        if (!value["MinorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.MinorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minorType = string(value["MinorType"].GetString());
        m_minorTypeHasBeenSet = true;
    }

    if (value.HasMember("RunMode") && !value["RunMode"].IsNull())
    {
        if (!value["RunMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.RunMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runMode = string(value["RunMode"].GetString());
        m_runModeHasBeenSet = true;
    }

    if (value.HasMember("WarehouseId") && !value["WarehouseId"].IsNull())
    {
        if (!value["WarehouseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.WarehouseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warehouseId = string(value["WarehouseId"].GetString());
        m_warehouseIdHasBeenSet = true;
    }

    if (value.HasMember("PartitionCode") && !value["PartitionCode"].IsNull())
    {
        if (!value["PartitionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.PartitionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionCode = string(value["PartitionCode"].GetString());
        m_partitionCodeHasBeenSet = true;
    }

    if (value.HasMember("PartitionName") && !value["PartitionName"].IsNull())
    {
        if (!value["PartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.PartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionName = string(value["PartitionName"].GetString());
        m_partitionNameHasBeenSet = true;
    }

    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("CheckpointLocation") && !value["CheckpointLocation"].IsNull())
    {
        if (!value["CheckpointLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.CheckpointLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkpointLocation = string(value["CheckpointLocation"].GetString());
        m_checkpointLocationHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SubmitTime") && !value["SubmitTime"].IsNull())
    {
        if (!value["SubmitTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.SubmitTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_submitTime = value["SubmitTime"].GetInt64();
        m_submitTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.FinishTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = value["FinishTime"].GetInt64();
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("RunningTimeMs") && !value["RunningTimeMs"].IsNull())
    {
        if (!value["RunningTimeMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.RunningTimeMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningTimeMs = value["RunningTimeMs"].GetInt64();
        m_runningTimeMsHasBeenSet = true;
    }

    if (value.HasMember("WarehouseName") && !value["WarehouseName"].IsNull())
    {
        if (!value["WarehouseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.WarehouseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warehouseName = string(value["WarehouseName"].GetString());
        m_warehouseNameHasBeenSet = true;
    }

    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutionId") && !value["ExecutionId"].IsNull())
    {
        if (!value["ExecutionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.ExecutionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionId = string(value["ExecutionId"].GetString());
        m_executionIdHasBeenSet = true;
    }

    if (value.HasMember("JobSource") && !value["JobSource"].IsNull())
    {
        if (!value["JobSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.JobSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobSource = string(value["JobSource"].GetString());
        m_jobSourceHasBeenSet = true;
    }

    if (value.HasMember("WaitingTimeMs") && !value["WaitingTimeMs"].IsNull())
    {
        if (!value["WaitingTimeMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.WaitingTimeMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_waitingTimeMs = value["WaitingTimeMs"].GetInt64();
        m_waitingTimeMsHasBeenSet = true;
    }

    if (value.HasMember("HistoryUrl") && !value["HistoryUrl"].IsNull())
    {
        if (!value["HistoryUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.HistoryUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_historyUrl = string(value["HistoryUrl"].GetString());
        m_historyUrlHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("CustomProperties") && !value["CustomProperties"].IsNull())
    {
        if (!value["CustomProperties"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.CustomProperties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customProperties = string(value["CustomProperties"].GetString());
        m_customPropertiesHasBeenSet = true;
    }

    if (value.HasMember("EnvVars") && !value["EnvVars"].IsNull())
    {
        if (!value["EnvVars"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.EnvVars` is not array type"));

        const rapidjson::Value &tmpValue = value["EnvVars"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envVars.push_back(item);
        }
        m_envVarsHasBeenSet = true;
    }

    if (value.HasMember("RuntimeCode") && !value["RuntimeCode"].IsNull())
    {
        if (!value["RuntimeCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.RuntimeCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeCode = string(value["RuntimeCode"].GetString());
        m_runtimeCodeHasBeenSet = true;
    }

    if (value.HasMember("RuntimeName") && !value["RuntimeName"].IsNull())
    {
        if (!value["RuntimeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.RuntimeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeName = string(value["RuntimeName"].GetString());
        m_runtimeNameHasBeenSet = true;
    }

    if (value.HasMember("SysCatalogVersion") && !value["SysCatalogVersion"].IsNull())
    {
        if (!value["SysCatalogVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDetailInfo.SysCatalogVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sysCatalogVersion = string(value["SysCatalogVersion"].GetString());
        m_sysCatalogVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorSubUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorSubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorSubUin.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_majorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MajorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_majorType.c_str(), allocator).Move(), allocator);
    }

    if (m_minorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_minorType.c_str(), allocator).Move(), allocator);
    }

    if (m_runModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runMode.c_str(), allocator).Move(), allocator);
    }

    if (m_warehouseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarehouseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warehouseId.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitionName.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_checkpointLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckpointLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkpointLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_submitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_submitTime, allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finishTime, allocator);
    }

    if (m_runningTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningTimeMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningTimeMs, allocator);
    }

    if (m_warehouseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarehouseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warehouseName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_executionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobSource.c_str(), allocator).Move(), allocator);
    }

    if (m_waitingTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitingTimeMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waitingTimeMs, allocator);
    }

    if (m_historyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistoryUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_historyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_customPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customProperties.c_str(), allocator).Move(), allocator);
    }

    if (m_envVarsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvVars";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envVars.begin(); itr != m_envVars.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_runtimeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeName.c_str(), allocator).Move(), allocator);
    }

    if (m_sysCatalogVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysCatalogVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sysCatalogVersion.c_str(), allocator).Move(), allocator);
    }

}


string JobDetailInfo::GetJobId() const
{
    return m_jobId;
}

void JobDetailInfo::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool JobDetailInfo::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string JobDetailInfo::GetJobName() const
{
    return m_jobName;
}

void JobDetailInfo::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool JobDetailInfo::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string JobDetailInfo::GetCreatorSubUin() const
{
    return m_creatorSubUin;
}

void JobDetailInfo::SetCreatorSubUin(const string& _creatorSubUin)
{
    m_creatorSubUin = _creatorSubUin;
    m_creatorSubUinHasBeenSet = true;
}

bool JobDetailInfo::CreatorSubUinHasBeenSet() const
{
    return m_creatorSubUinHasBeenSet;
}

string JobDetailInfo::GetState() const
{
    return m_state;
}

void JobDetailInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool JobDetailInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string JobDetailInfo::GetMajorType() const
{
    return m_majorType;
}

void JobDetailInfo::SetMajorType(const string& _majorType)
{
    m_majorType = _majorType;
    m_majorTypeHasBeenSet = true;
}

bool JobDetailInfo::MajorTypeHasBeenSet() const
{
    return m_majorTypeHasBeenSet;
}

string JobDetailInfo::GetMinorType() const
{
    return m_minorType;
}

void JobDetailInfo::SetMinorType(const string& _minorType)
{
    m_minorType = _minorType;
    m_minorTypeHasBeenSet = true;
}

bool JobDetailInfo::MinorTypeHasBeenSet() const
{
    return m_minorTypeHasBeenSet;
}

string JobDetailInfo::GetRunMode() const
{
    return m_runMode;
}

void JobDetailInfo::SetRunMode(const string& _runMode)
{
    m_runMode = _runMode;
    m_runModeHasBeenSet = true;
}

bool JobDetailInfo::RunModeHasBeenSet() const
{
    return m_runModeHasBeenSet;
}

string JobDetailInfo::GetWarehouseId() const
{
    return m_warehouseId;
}

void JobDetailInfo::SetWarehouseId(const string& _warehouseId)
{
    m_warehouseId = _warehouseId;
    m_warehouseIdHasBeenSet = true;
}

bool JobDetailInfo::WarehouseIdHasBeenSet() const
{
    return m_warehouseIdHasBeenSet;
}

string JobDetailInfo::GetPartitionCode() const
{
    return m_partitionCode;
}

void JobDetailInfo::SetPartitionCode(const string& _partitionCode)
{
    m_partitionCode = _partitionCode;
    m_partitionCodeHasBeenSet = true;
}

bool JobDetailInfo::PartitionCodeHasBeenSet() const
{
    return m_partitionCodeHasBeenSet;
}

string JobDetailInfo::GetPartitionName() const
{
    return m_partitionName;
}

void JobDetailInfo::SetPartitionName(const string& _partitionName)
{
    m_partitionName = _partitionName;
    m_partitionNameHasBeenSet = true;
}

bool JobDetailInfo::PartitionNameHasBeenSet() const
{
    return m_partitionNameHasBeenSet;
}

string JobDetailInfo::GetQueueName() const
{
    return m_queueName;
}

void JobDetailInfo::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool JobDetailInfo::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string JobDetailInfo::GetCheckpointLocation() const
{
    return m_checkpointLocation;
}

void JobDetailInfo::SetCheckpointLocation(const string& _checkpointLocation)
{
    m_checkpointLocation = _checkpointLocation;
    m_checkpointLocationHasBeenSet = true;
}

bool JobDetailInfo::CheckpointLocationHasBeenSet() const
{
    return m_checkpointLocationHasBeenSet;
}

int64_t JobDetailInfo::GetCreateTime() const
{
    return m_createTime;
}

void JobDetailInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool JobDetailInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t JobDetailInfo::GetSubmitTime() const
{
    return m_submitTime;
}

void JobDetailInfo::SetSubmitTime(const int64_t& _submitTime)
{
    m_submitTime = _submitTime;
    m_submitTimeHasBeenSet = true;
}

bool JobDetailInfo::SubmitTimeHasBeenSet() const
{
    return m_submitTimeHasBeenSet;
}

int64_t JobDetailInfo::GetFinishTime() const
{
    return m_finishTime;
}

void JobDetailInfo::SetFinishTime(const int64_t& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool JobDetailInfo::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

int64_t JobDetailInfo::GetRunningTimeMs() const
{
    return m_runningTimeMs;
}

void JobDetailInfo::SetRunningTimeMs(const int64_t& _runningTimeMs)
{
    m_runningTimeMs = _runningTimeMs;
    m_runningTimeMsHasBeenSet = true;
}

bool JobDetailInfo::RunningTimeMsHasBeenSet() const
{
    return m_runningTimeMsHasBeenSet;
}

string JobDetailInfo::GetWarehouseName() const
{
    return m_warehouseName;
}

void JobDetailInfo::SetWarehouseName(const string& _warehouseName)
{
    m_warehouseName = _warehouseName;
    m_warehouseNameHasBeenSet = true;
}

bool JobDetailInfo::WarehouseNameHasBeenSet() const
{
    return m_warehouseNameHasBeenSet;
}

string JobDetailInfo::GetFlowId() const
{
    return m_flowId;
}

void JobDetailInfo::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool JobDetailInfo::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string JobDetailInfo::GetExecutionId() const
{
    return m_executionId;
}

void JobDetailInfo::SetExecutionId(const string& _executionId)
{
    m_executionId = _executionId;
    m_executionIdHasBeenSet = true;
}

bool JobDetailInfo::ExecutionIdHasBeenSet() const
{
    return m_executionIdHasBeenSet;
}

string JobDetailInfo::GetJobSource() const
{
    return m_jobSource;
}

void JobDetailInfo::SetJobSource(const string& _jobSource)
{
    m_jobSource = _jobSource;
    m_jobSourceHasBeenSet = true;
}

bool JobDetailInfo::JobSourceHasBeenSet() const
{
    return m_jobSourceHasBeenSet;
}

int64_t JobDetailInfo::GetWaitingTimeMs() const
{
    return m_waitingTimeMs;
}

void JobDetailInfo::SetWaitingTimeMs(const int64_t& _waitingTimeMs)
{
    m_waitingTimeMs = _waitingTimeMs;
    m_waitingTimeMsHasBeenSet = true;
}

bool JobDetailInfo::WaitingTimeMsHasBeenSet() const
{
    return m_waitingTimeMsHasBeenSet;
}

string JobDetailInfo::GetHistoryUrl() const
{
    return m_historyUrl;
}

void JobDetailInfo::SetHistoryUrl(const string& _historyUrl)
{
    m_historyUrl = _historyUrl;
    m_historyUrlHasBeenSet = true;
}

bool JobDetailInfo::HistoryUrlHasBeenSet() const
{
    return m_historyUrlHasBeenSet;
}

string JobDetailInfo::GetErrorMessage() const
{
    return m_errorMessage;
}

void JobDetailInfo::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool JobDetailInfo::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string JobDetailInfo::GetCustomProperties() const
{
    return m_customProperties;
}

void JobDetailInfo::SetCustomProperties(const string& _customProperties)
{
    m_customProperties = _customProperties;
    m_customPropertiesHasBeenSet = true;
}

bool JobDetailInfo::CustomPropertiesHasBeenSet() const
{
    return m_customPropertiesHasBeenSet;
}

vector<KVPair> JobDetailInfo::GetEnvVars() const
{
    return m_envVars;
}

void JobDetailInfo::SetEnvVars(const vector<KVPair>& _envVars)
{
    m_envVars = _envVars;
    m_envVarsHasBeenSet = true;
}

bool JobDetailInfo::EnvVarsHasBeenSet() const
{
    return m_envVarsHasBeenSet;
}

string JobDetailInfo::GetRuntimeCode() const
{
    return m_runtimeCode;
}

void JobDetailInfo::SetRuntimeCode(const string& _runtimeCode)
{
    m_runtimeCode = _runtimeCode;
    m_runtimeCodeHasBeenSet = true;
}

bool JobDetailInfo::RuntimeCodeHasBeenSet() const
{
    return m_runtimeCodeHasBeenSet;
}

string JobDetailInfo::GetRuntimeName() const
{
    return m_runtimeName;
}

void JobDetailInfo::SetRuntimeName(const string& _runtimeName)
{
    m_runtimeName = _runtimeName;
    m_runtimeNameHasBeenSet = true;
}

bool JobDetailInfo::RuntimeNameHasBeenSet() const
{
    return m_runtimeNameHasBeenSet;
}

string JobDetailInfo::GetSysCatalogVersion() const
{
    return m_sysCatalogVersion;
}

void JobDetailInfo::SetSysCatalogVersion(const string& _sysCatalogVersion)
{
    m_sysCatalogVersion = _sysCatalogVersion;
    m_sysCatalogVersionHasBeenSet = true;
}

bool JobDetailInfo::SysCatalogVersionHasBeenSet() const
{
    return m_sysCatalogVersionHasBeenSet;
}

