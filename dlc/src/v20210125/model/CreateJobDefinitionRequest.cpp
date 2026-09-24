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

#include <tencentcloud/dlc/v20210125/model/CreateJobDefinitionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateJobDefinitionRequest::CreateJobDefinitionRequest() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_majorTypeHasBeenSet(false),
    m_minorTypeHasBeenSet(false),
    m_checkpointLocationHasBeenSet(false),
    m_partitionCodeHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_runtimeCodeHasBeenSet(false),
    m_sysCatalogVersionHasBeenSet(false),
    m_customPropertiesHasBeenSet(false),
    m_envVarsHasBeenSet(false),
    m_runModeHasBeenSet(false),
    m_warehouseIdHasBeenSet(false)
{
}

string CreateJobDefinitionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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

    if (m_checkpointLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckpointLocation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkpointLocation.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateJobDefinitionRequest::GetName() const
{
    return m_name;
}

void CreateJobDefinitionRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateJobDefinitionRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateJobDefinitionRequest::GetDescription() const
{
    return m_description;
}

void CreateJobDefinitionRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateJobDefinitionRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateJobDefinitionRequest::GetMajorType() const
{
    return m_majorType;
}

void CreateJobDefinitionRequest::SetMajorType(const string& _majorType)
{
    m_majorType = _majorType;
    m_majorTypeHasBeenSet = true;
}

bool CreateJobDefinitionRequest::MajorTypeHasBeenSet() const
{
    return m_majorTypeHasBeenSet;
}

string CreateJobDefinitionRequest::GetMinorType() const
{
    return m_minorType;
}

void CreateJobDefinitionRequest::SetMinorType(const string& _minorType)
{
    m_minorType = _minorType;
    m_minorTypeHasBeenSet = true;
}

bool CreateJobDefinitionRequest::MinorTypeHasBeenSet() const
{
    return m_minorTypeHasBeenSet;
}

string CreateJobDefinitionRequest::GetCheckpointLocation() const
{
    return m_checkpointLocation;
}

void CreateJobDefinitionRequest::SetCheckpointLocation(const string& _checkpointLocation)
{
    m_checkpointLocation = _checkpointLocation;
    m_checkpointLocationHasBeenSet = true;
}

bool CreateJobDefinitionRequest::CheckpointLocationHasBeenSet() const
{
    return m_checkpointLocationHasBeenSet;
}

string CreateJobDefinitionRequest::GetPartitionCode() const
{
    return m_partitionCode;
}

void CreateJobDefinitionRequest::SetPartitionCode(const string& _partitionCode)
{
    m_partitionCode = _partitionCode;
    m_partitionCodeHasBeenSet = true;
}

bool CreateJobDefinitionRequest::PartitionCodeHasBeenSet() const
{
    return m_partitionCodeHasBeenSet;
}

string CreateJobDefinitionRequest::GetQueueName() const
{
    return m_queueName;
}

void CreateJobDefinitionRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool CreateJobDefinitionRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string CreateJobDefinitionRequest::GetRuntimeCode() const
{
    return m_runtimeCode;
}

void CreateJobDefinitionRequest::SetRuntimeCode(const string& _runtimeCode)
{
    m_runtimeCode = _runtimeCode;
    m_runtimeCodeHasBeenSet = true;
}

bool CreateJobDefinitionRequest::RuntimeCodeHasBeenSet() const
{
    return m_runtimeCodeHasBeenSet;
}

string CreateJobDefinitionRequest::GetSysCatalogVersion() const
{
    return m_sysCatalogVersion;
}

void CreateJobDefinitionRequest::SetSysCatalogVersion(const string& _sysCatalogVersion)
{
    m_sysCatalogVersion = _sysCatalogVersion;
    m_sysCatalogVersionHasBeenSet = true;
}

bool CreateJobDefinitionRequest::SysCatalogVersionHasBeenSet() const
{
    return m_sysCatalogVersionHasBeenSet;
}

string CreateJobDefinitionRequest::GetCustomProperties() const
{
    return m_customProperties;
}

void CreateJobDefinitionRequest::SetCustomProperties(const string& _customProperties)
{
    m_customProperties = _customProperties;
    m_customPropertiesHasBeenSet = true;
}

bool CreateJobDefinitionRequest::CustomPropertiesHasBeenSet() const
{
    return m_customPropertiesHasBeenSet;
}

vector<KVPair> CreateJobDefinitionRequest::GetEnvVars() const
{
    return m_envVars;
}

void CreateJobDefinitionRequest::SetEnvVars(const vector<KVPair>& _envVars)
{
    m_envVars = _envVars;
    m_envVarsHasBeenSet = true;
}

bool CreateJobDefinitionRequest::EnvVarsHasBeenSet() const
{
    return m_envVarsHasBeenSet;
}

string CreateJobDefinitionRequest::GetRunMode() const
{
    return m_runMode;
}

void CreateJobDefinitionRequest::SetRunMode(const string& _runMode)
{
    m_runMode = _runMode;
    m_runModeHasBeenSet = true;
}

bool CreateJobDefinitionRequest::RunModeHasBeenSet() const
{
    return m_runModeHasBeenSet;
}

string CreateJobDefinitionRequest::GetWarehouseId() const
{
    return m_warehouseId;
}

void CreateJobDefinitionRequest::SetWarehouseId(const string& _warehouseId)
{
    m_warehouseId = _warehouseId;
    m_warehouseIdHasBeenSet = true;
}

bool CreateJobDefinitionRequest::WarehouseIdHasBeenSet() const
{
    return m_warehouseIdHasBeenSet;
}


