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

#include <tencentcloud/dlc/v20210125/model/CreateJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateJobRequest::CreateJobRequest() :
    m_jobNameHasBeenSet(false),
    m_checkpointLocationHasBeenSet(false),
    m_majorTypeHasBeenSet(false),
    m_minorTypeHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_executionIdHasBeenSet(false),
    m_runModeHasBeenSet(false),
    m_warehouseIdHasBeenSet(false),
    m_runtimeCodeHasBeenSet(false),
    m_sysCatalogVersionHasBeenSet(false),
    m_partitionCodeHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_customPropertiesHasBeenSet(false),
    m_envVarsHasBeenSet(false)
{
}

string CreateJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_checkpointLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckpointLocation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkpointLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_majorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MajorType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_majorType.c_str(), allocator).Move(), allocator);
    }

    if (m_minorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinorType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_minorType.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_executionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionId.c_str(), allocator).Move(), allocator);
    }

    if (m_runModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runMode.c_str(), allocator).Move(), allocator);
    }

    if (m_warehouseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarehouseId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_warehouseId.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runtimeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_sysCatalogVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysCatalogVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sysCatalogVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_partitionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_customPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomProperties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customProperties.c_str(), allocator).Move(), allocator);
    }

    if (m_envVarsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvVars";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envVars.begin(); itr != m_envVars.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateJobRequest::GetJobName() const
{
    return m_jobName;
}

void CreateJobRequest::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool CreateJobRequest::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string CreateJobRequest::GetCheckpointLocation() const
{
    return m_checkpointLocation;
}

void CreateJobRequest::SetCheckpointLocation(const string& _checkpointLocation)
{
    m_checkpointLocation = _checkpointLocation;
    m_checkpointLocationHasBeenSet = true;
}

bool CreateJobRequest::CheckpointLocationHasBeenSet() const
{
    return m_checkpointLocationHasBeenSet;
}

string CreateJobRequest::GetMajorType() const
{
    return m_majorType;
}

void CreateJobRequest::SetMajorType(const string& _majorType)
{
    m_majorType = _majorType;
    m_majorTypeHasBeenSet = true;
}

bool CreateJobRequest::MajorTypeHasBeenSet() const
{
    return m_majorTypeHasBeenSet;
}

string CreateJobRequest::GetMinorType() const
{
    return m_minorType;
}

void CreateJobRequest::SetMinorType(const string& _minorType)
{
    m_minorType = _minorType;
    m_minorTypeHasBeenSet = true;
}

bool CreateJobRequest::MinorTypeHasBeenSet() const
{
    return m_minorTypeHasBeenSet;
}

string CreateJobRequest::GetFlowId() const
{
    return m_flowId;
}

void CreateJobRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool CreateJobRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string CreateJobRequest::GetExecutionId() const
{
    return m_executionId;
}

void CreateJobRequest::SetExecutionId(const string& _executionId)
{
    m_executionId = _executionId;
    m_executionIdHasBeenSet = true;
}

bool CreateJobRequest::ExecutionIdHasBeenSet() const
{
    return m_executionIdHasBeenSet;
}

string CreateJobRequest::GetRunMode() const
{
    return m_runMode;
}

void CreateJobRequest::SetRunMode(const string& _runMode)
{
    m_runMode = _runMode;
    m_runModeHasBeenSet = true;
}

bool CreateJobRequest::RunModeHasBeenSet() const
{
    return m_runModeHasBeenSet;
}

string CreateJobRequest::GetWarehouseId() const
{
    return m_warehouseId;
}

void CreateJobRequest::SetWarehouseId(const string& _warehouseId)
{
    m_warehouseId = _warehouseId;
    m_warehouseIdHasBeenSet = true;
}

bool CreateJobRequest::WarehouseIdHasBeenSet() const
{
    return m_warehouseIdHasBeenSet;
}

string CreateJobRequest::GetRuntimeCode() const
{
    return m_runtimeCode;
}

void CreateJobRequest::SetRuntimeCode(const string& _runtimeCode)
{
    m_runtimeCode = _runtimeCode;
    m_runtimeCodeHasBeenSet = true;
}

bool CreateJobRequest::RuntimeCodeHasBeenSet() const
{
    return m_runtimeCodeHasBeenSet;
}

string CreateJobRequest::GetSysCatalogVersion() const
{
    return m_sysCatalogVersion;
}

void CreateJobRequest::SetSysCatalogVersion(const string& _sysCatalogVersion)
{
    m_sysCatalogVersion = _sysCatalogVersion;
    m_sysCatalogVersionHasBeenSet = true;
}

bool CreateJobRequest::SysCatalogVersionHasBeenSet() const
{
    return m_sysCatalogVersionHasBeenSet;
}

string CreateJobRequest::GetPartitionCode() const
{
    return m_partitionCode;
}

void CreateJobRequest::SetPartitionCode(const string& _partitionCode)
{
    m_partitionCode = _partitionCode;
    m_partitionCodeHasBeenSet = true;
}

bool CreateJobRequest::PartitionCodeHasBeenSet() const
{
    return m_partitionCodeHasBeenSet;
}

string CreateJobRequest::GetQueueName() const
{
    return m_queueName;
}

void CreateJobRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool CreateJobRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string CreateJobRequest::GetCustomProperties() const
{
    return m_customProperties;
}

void CreateJobRequest::SetCustomProperties(const string& _customProperties)
{
    m_customProperties = _customProperties;
    m_customPropertiesHasBeenSet = true;
}

bool CreateJobRequest::CustomPropertiesHasBeenSet() const
{
    return m_customPropertiesHasBeenSet;
}

vector<KVPair> CreateJobRequest::GetEnvVars() const
{
    return m_envVars;
}

void CreateJobRequest::SetEnvVars(const vector<KVPair>& _envVars)
{
    m_envVars = _envVars;
    m_envVarsHasBeenSet = true;
}

bool CreateJobRequest::EnvVarsHasBeenSet() const
{
    return m_envVarsHasBeenSet;
}


