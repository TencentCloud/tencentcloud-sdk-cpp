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

#include <tencentcloud/dlc/v20210125/model/WarehouseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

WarehouseInfo::WarehouseInfo() :
    m_warehouseIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_creatorSubUinHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_partitionCodeHasBeenSet(false),
    m_partitionNameHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_activeClustersHasBeenSet(false),
    m_minClustersHasBeenSet(false),
    m_maxClustersHasBeenSet(false),
    m_runtimeCodeHasBeenSet(false),
    m_runtimeNameHasBeenSet(false),
    m_sysCatalogVersionHasBeenSet(false),
    m_envVarsHasBeenSet(false),
    m_runtimeConfHasBeenSet(false),
    m_dynamicPropertiesHasBeenSet(false)
{
}

CoreInternalOutcome WarehouseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WarehouseId") && !value["WarehouseId"].IsNull())
    {
        if (!value["WarehouseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.WarehouseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warehouseId = string(value["WarehouseId"].GetString());
        m_warehouseIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CreatorSubUin") && !value["CreatorSubUin"].IsNull())
    {
        if (!value["CreatorSubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.CreatorSubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorSubUin = string(value["CreatorSubUin"].GetString());
        m_creatorSubUinHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("PartitionCode") && !value["PartitionCode"].IsNull())
    {
        if (!value["PartitionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.PartitionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionCode = string(value["PartitionCode"].GetString());
        m_partitionCodeHasBeenSet = true;
    }

    if (value.HasMember("PartitionName") && !value["PartitionName"].IsNull())
    {
        if (!value["PartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.PartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionName = string(value["PartitionName"].GetString());
        m_partitionNameHasBeenSet = true;
    }

    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ActiveClusters") && !value["ActiveClusters"].IsNull())
    {
        if (!value["ActiveClusters"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.ActiveClusters` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activeClusters = value["ActiveClusters"].GetInt64();
        m_activeClustersHasBeenSet = true;
    }

    if (value.HasMember("MinClusters") && !value["MinClusters"].IsNull())
    {
        if (!value["MinClusters"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.MinClusters` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minClusters = value["MinClusters"].GetInt64();
        m_minClustersHasBeenSet = true;
    }

    if (value.HasMember("MaxClusters") && !value["MaxClusters"].IsNull())
    {
        if (!value["MaxClusters"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.MaxClusters` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxClusters = value["MaxClusters"].GetInt64();
        m_maxClustersHasBeenSet = true;
    }

    if (value.HasMember("RuntimeCode") && !value["RuntimeCode"].IsNull())
    {
        if (!value["RuntimeCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.RuntimeCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeCode = string(value["RuntimeCode"].GetString());
        m_runtimeCodeHasBeenSet = true;
    }

    if (value.HasMember("RuntimeName") && !value["RuntimeName"].IsNull())
    {
        if (!value["RuntimeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.RuntimeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeName = string(value["RuntimeName"].GetString());
        m_runtimeNameHasBeenSet = true;
    }

    if (value.HasMember("SysCatalogVersion") && !value["SysCatalogVersion"].IsNull())
    {
        if (!value["SysCatalogVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.SysCatalogVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sysCatalogVersion = string(value["SysCatalogVersion"].GetString());
        m_sysCatalogVersionHasBeenSet = true;
    }

    if (value.HasMember("EnvVars") && !value["EnvVars"].IsNull())
    {
        if (!value["EnvVars"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.EnvVars` is not array type"));

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

    if (value.HasMember("RuntimeConf") && !value["RuntimeConf"].IsNull())
    {
        if (!value["RuntimeConf"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.RuntimeConf` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeConf = string(value["RuntimeConf"].GetString());
        m_runtimeConfHasBeenSet = true;
    }

    if (value.HasMember("DynamicProperties") && !value["DynamicProperties"].IsNull())
    {
        if (!value["DynamicProperties"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseInfo.DynamicProperties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dynamicProperties = string(value["DynamicProperties"].GetString());
        m_dynamicPropertiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WarehouseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_warehouseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarehouseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warehouseId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorSubUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorSubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorSubUin.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_activeClustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveClusters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeClusters, allocator);
    }

    if (m_minClustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinClusters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minClusters, allocator);
    }

    if (m_maxClustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxClusters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxClusters, allocator);
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

    if (m_runtimeConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeConf.c_str(), allocator).Move(), allocator);
    }

    if (m_dynamicPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dynamicProperties.c_str(), allocator).Move(), allocator);
    }

}


string WarehouseInfo::GetWarehouseId() const
{
    return m_warehouseId;
}

void WarehouseInfo::SetWarehouseId(const string& _warehouseId)
{
    m_warehouseId = _warehouseId;
    m_warehouseIdHasBeenSet = true;
}

bool WarehouseInfo::WarehouseIdHasBeenSet() const
{
    return m_warehouseIdHasBeenSet;
}

string WarehouseInfo::GetName() const
{
    return m_name;
}

void WarehouseInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WarehouseInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string WarehouseInfo::GetCreatorSubUin() const
{
    return m_creatorSubUin;
}

void WarehouseInfo::SetCreatorSubUin(const string& _creatorSubUin)
{
    m_creatorSubUin = _creatorSubUin;
    m_creatorSubUinHasBeenSet = true;
}

bool WarehouseInfo::CreatorSubUinHasBeenSet() const
{
    return m_creatorSubUinHasBeenSet;
}

string WarehouseInfo::GetDescription() const
{
    return m_description;
}

void WarehouseInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool WarehouseInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string WarehouseInfo::GetState() const
{
    return m_state;
}

void WarehouseInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool WarehouseInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string WarehouseInfo::GetPartitionCode() const
{
    return m_partitionCode;
}

void WarehouseInfo::SetPartitionCode(const string& _partitionCode)
{
    m_partitionCode = _partitionCode;
    m_partitionCodeHasBeenSet = true;
}

bool WarehouseInfo::PartitionCodeHasBeenSet() const
{
    return m_partitionCodeHasBeenSet;
}

string WarehouseInfo::GetPartitionName() const
{
    return m_partitionName;
}

void WarehouseInfo::SetPartitionName(const string& _partitionName)
{
    m_partitionName = _partitionName;
    m_partitionNameHasBeenSet = true;
}

bool WarehouseInfo::PartitionNameHasBeenSet() const
{
    return m_partitionNameHasBeenSet;
}

string WarehouseInfo::GetQueueName() const
{
    return m_queueName;
}

void WarehouseInfo::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool WarehouseInfo::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

int64_t WarehouseInfo::GetCreateTime() const
{
    return m_createTime;
}

void WarehouseInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WarehouseInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t WarehouseInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void WarehouseInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool WarehouseInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t WarehouseInfo::GetActiveClusters() const
{
    return m_activeClusters;
}

void WarehouseInfo::SetActiveClusters(const int64_t& _activeClusters)
{
    m_activeClusters = _activeClusters;
    m_activeClustersHasBeenSet = true;
}

bool WarehouseInfo::ActiveClustersHasBeenSet() const
{
    return m_activeClustersHasBeenSet;
}

int64_t WarehouseInfo::GetMinClusters() const
{
    return m_minClusters;
}

void WarehouseInfo::SetMinClusters(const int64_t& _minClusters)
{
    m_minClusters = _minClusters;
    m_minClustersHasBeenSet = true;
}

bool WarehouseInfo::MinClustersHasBeenSet() const
{
    return m_minClustersHasBeenSet;
}

int64_t WarehouseInfo::GetMaxClusters() const
{
    return m_maxClusters;
}

void WarehouseInfo::SetMaxClusters(const int64_t& _maxClusters)
{
    m_maxClusters = _maxClusters;
    m_maxClustersHasBeenSet = true;
}

bool WarehouseInfo::MaxClustersHasBeenSet() const
{
    return m_maxClustersHasBeenSet;
}

string WarehouseInfo::GetRuntimeCode() const
{
    return m_runtimeCode;
}

void WarehouseInfo::SetRuntimeCode(const string& _runtimeCode)
{
    m_runtimeCode = _runtimeCode;
    m_runtimeCodeHasBeenSet = true;
}

bool WarehouseInfo::RuntimeCodeHasBeenSet() const
{
    return m_runtimeCodeHasBeenSet;
}

string WarehouseInfo::GetRuntimeName() const
{
    return m_runtimeName;
}

void WarehouseInfo::SetRuntimeName(const string& _runtimeName)
{
    m_runtimeName = _runtimeName;
    m_runtimeNameHasBeenSet = true;
}

bool WarehouseInfo::RuntimeNameHasBeenSet() const
{
    return m_runtimeNameHasBeenSet;
}

string WarehouseInfo::GetSysCatalogVersion() const
{
    return m_sysCatalogVersion;
}

void WarehouseInfo::SetSysCatalogVersion(const string& _sysCatalogVersion)
{
    m_sysCatalogVersion = _sysCatalogVersion;
    m_sysCatalogVersionHasBeenSet = true;
}

bool WarehouseInfo::SysCatalogVersionHasBeenSet() const
{
    return m_sysCatalogVersionHasBeenSet;
}

vector<KVPair> WarehouseInfo::GetEnvVars() const
{
    return m_envVars;
}

void WarehouseInfo::SetEnvVars(const vector<KVPair>& _envVars)
{
    m_envVars = _envVars;
    m_envVarsHasBeenSet = true;
}

bool WarehouseInfo::EnvVarsHasBeenSet() const
{
    return m_envVarsHasBeenSet;
}

string WarehouseInfo::GetRuntimeConf() const
{
    return m_runtimeConf;
}

void WarehouseInfo::SetRuntimeConf(const string& _runtimeConf)
{
    m_runtimeConf = _runtimeConf;
    m_runtimeConfHasBeenSet = true;
}

bool WarehouseInfo::RuntimeConfHasBeenSet() const
{
    return m_runtimeConfHasBeenSet;
}

string WarehouseInfo::GetDynamicProperties() const
{
    return m_dynamicProperties;
}

void WarehouseInfo::SetDynamicProperties(const string& _dynamicProperties)
{
    m_dynamicProperties = _dynamicProperties;
    m_dynamicPropertiesHasBeenSet = true;
}

bool WarehouseInfo::DynamicPropertiesHasBeenSet() const
{
    return m_dynamicPropertiesHasBeenSet;
}

