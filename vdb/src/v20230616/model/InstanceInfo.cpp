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

#include <tencentcloud/vdb/v20230616/model/InstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vdb::V20230616::Model;
using namespace std;

InstanceInfo::InstanceInfo() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_productHasBeenSet(false),
    m_networksHasBeenSet(false),
    m_shardNumHasBeenSet(false),
    m_replicaNumHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_diskHasBeenSet(false),
    m_healthScoreHasBeenSet(false),
    m_warningHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_apiVersionHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_extendHasBeenSet(false),
    m_expiredAtHasBeenSet(false),
    m_isNoExpiredHasBeenSet(false),
    m_wanAddressHasBeenSet(false),
    m_isolateAtHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_taskStatusHasBeenSet(false)
{
}

CoreInternalOutcome InstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("Networks") && !value["Networks"].IsNull())
    {
        if (!value["Networks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Networks` is not array type"));

        const rapidjson::Value &tmpValue = value["Networks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Network item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_networks.push_back(item);
        }
        m_networksHasBeenSet = true;
    }

    if (value.HasMember("ShardNum") && !value["ShardNum"].IsNull())
    {
        if (!value["ShardNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ShardNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shardNum = value["ShardNum"].GetUint64();
        m_shardNumHasBeenSet = true;
    }

    if (value.HasMember("ReplicaNum") && !value["ReplicaNum"].IsNull())
    {
        if (!value["ReplicaNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ReplicaNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replicaNum = value["ReplicaNum"].GetUint64();
        m_replicaNumHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Cpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetDouble();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Memory` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetDouble();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Disk") && !value["Disk"].IsNull())
    {
        if (!value["Disk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Disk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_disk = value["Disk"].GetUint64();
        m_diskHasBeenSet = true;
    }

    if (value.HasMember("HealthScore") && !value["HealthScore"].IsNull())
    {
        if (!value["HealthScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.HealthScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_healthScore = value["HealthScore"].GetDouble();
        m_healthScoreHasBeenSet = true;
    }

    if (value.HasMember("Warning") && !value["Warning"].IsNull())
    {
        if (!value["Warning"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Warning` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_warning = value["Warning"].GetInt64();
        m_warningHasBeenSet = true;
    }

    if (value.HasMember("Project") && !value["Project"].IsNull())
    {
        if (!value["Project"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Project` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_project = string(value["Project"].GetString());
        m_projectHasBeenSet = true;
    }

    if (value.HasMember("ResourceTags") && !value["ResourceTags"].IsNull())
    {
        if (!value["ResourceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ResourceTags` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceTags.push_back(item);
        }
        m_resourceTagsHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EngineName") && !value["EngineName"].IsNull())
    {
        if (!value["EngineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EngineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineName = string(value["EngineName"].GetString());
        m_engineNameHasBeenSet = true;
    }

    if (value.HasMember("EngineVersion") && !value["EngineVersion"].IsNull())
    {
        if (!value["EngineVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EngineVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineVersion = string(value["EngineVersion"].GetString());
        m_engineVersionHasBeenSet = true;
    }

    if (value.HasMember("ApiVersion") && !value["ApiVersion"].IsNull())
    {
        if (!value["ApiVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ApiVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiVersion = string(value["ApiVersion"].GetString());
        m_apiVersionHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("Extend") && !value["Extend"].IsNull())
    {
        if (!value["Extend"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Extend` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extend = string(value["Extend"].GetString());
        m_extendHasBeenSet = true;
    }

    if (value.HasMember("ExpiredAt") && !value["ExpiredAt"].IsNull())
    {
        if (!value["ExpiredAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ExpiredAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredAt = string(value["ExpiredAt"].GetString());
        m_expiredAtHasBeenSet = true;
    }

    if (value.HasMember("IsNoExpired") && !value["IsNoExpired"].IsNull())
    {
        if (!value["IsNoExpired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.IsNoExpired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isNoExpired = value["IsNoExpired"].GetBool();
        m_isNoExpiredHasBeenSet = true;
    }

    if (value.HasMember("WanAddress") && !value["WanAddress"].IsNull())
    {
        if (!value["WanAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.WanAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanAddress = string(value["WanAddress"].GetString());
        m_wanAddressHasBeenSet = true;
    }

    if (value.HasMember("IsolateAt") && !value["IsolateAt"].IsNull())
    {
        if (!value["IsolateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.IsolateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateAt = string(value["IsolateAt"].GetString());
        m_isolateAtHasBeenSet = true;
    }

    if (value.HasMember("AutoRenew") && !value["AutoRenew"].IsNull())
    {
        if (!value["AutoRenew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AutoRenew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenew = value["AutoRenew"].GetInt64();
        m_autoRenewHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.TaskStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetInt64();
        m_taskStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_networksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Networks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_networks.begin(); itr != m_networks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_shardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shardNum, allocator);
    }

    if (m_replicaNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicaNum, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_diskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disk, allocator);
    }

    if (m_healthScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthScore, allocator);
    }

    if (m_warningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Warning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warning, allocator);
    }

    if (m_projectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Project";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_project.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_engineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineName.c_str(), allocator).Move(), allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_apiVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_extendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extend.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredAt.c_str(), allocator).Move(), allocator);
    }

    if (m_isNoExpiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNoExpired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNoExpired, allocator);
    }

    if (m_wanAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateAt.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
    }

}


string InstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceInfo::GetName() const
{
    return m_name;
}

void InstanceInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool InstanceInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t InstanceInfo::GetAppId() const
{
    return m_appId;
}

void InstanceInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool InstanceInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string InstanceInfo::GetRegion() const
{
    return m_region;
}

void InstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string InstanceInfo::GetZone() const
{
    return m_zone;
}

void InstanceInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InstanceInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string InstanceInfo::GetProduct() const
{
    return m_product;
}

void InstanceInfo::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool InstanceInfo::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

vector<Network> InstanceInfo::GetNetworks() const
{
    return m_networks;
}

void InstanceInfo::SetNetworks(const vector<Network>& _networks)
{
    m_networks = _networks;
    m_networksHasBeenSet = true;
}

bool InstanceInfo::NetworksHasBeenSet() const
{
    return m_networksHasBeenSet;
}

uint64_t InstanceInfo::GetShardNum() const
{
    return m_shardNum;
}

void InstanceInfo::SetShardNum(const uint64_t& _shardNum)
{
    m_shardNum = _shardNum;
    m_shardNumHasBeenSet = true;
}

bool InstanceInfo::ShardNumHasBeenSet() const
{
    return m_shardNumHasBeenSet;
}

uint64_t InstanceInfo::GetReplicaNum() const
{
    return m_replicaNum;
}

void InstanceInfo::SetReplicaNum(const uint64_t& _replicaNum)
{
    m_replicaNum = _replicaNum;
    m_replicaNumHasBeenSet = true;
}

bool InstanceInfo::ReplicaNumHasBeenSet() const
{
    return m_replicaNumHasBeenSet;
}

double InstanceInfo::GetCpu() const
{
    return m_cpu;
}

void InstanceInfo::SetCpu(const double& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool InstanceInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

double InstanceInfo::GetMemory() const
{
    return m_memory;
}

void InstanceInfo::SetMemory(const double& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InstanceInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t InstanceInfo::GetDisk() const
{
    return m_disk;
}

void InstanceInfo::SetDisk(const uint64_t& _disk)
{
    m_disk = _disk;
    m_diskHasBeenSet = true;
}

bool InstanceInfo::DiskHasBeenSet() const
{
    return m_diskHasBeenSet;
}

double InstanceInfo::GetHealthScore() const
{
    return m_healthScore;
}

void InstanceInfo::SetHealthScore(const double& _healthScore)
{
    m_healthScore = _healthScore;
    m_healthScoreHasBeenSet = true;
}

bool InstanceInfo::HealthScoreHasBeenSet() const
{
    return m_healthScoreHasBeenSet;
}

int64_t InstanceInfo::GetWarning() const
{
    return m_warning;
}

void InstanceInfo::SetWarning(const int64_t& _warning)
{
    m_warning = _warning;
    m_warningHasBeenSet = true;
}

bool InstanceInfo::WarningHasBeenSet() const
{
    return m_warningHasBeenSet;
}

string InstanceInfo::GetProject() const
{
    return m_project;
}

void InstanceInfo::SetProject(const string& _project)
{
    m_project = _project;
    m_projectHasBeenSet = true;
}

bool InstanceInfo::ProjectHasBeenSet() const
{
    return m_projectHasBeenSet;
}

vector<Tag> InstanceInfo::GetResourceTags() const
{
    return m_resourceTags;
}

void InstanceInfo::SetResourceTags(const vector<Tag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool InstanceInfo::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string InstanceInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void InstanceInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool InstanceInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string InstanceInfo::GetStatus() const
{
    return m_status;
}

void InstanceInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InstanceInfo::GetEngineName() const
{
    return m_engineName;
}

void InstanceInfo::SetEngineName(const string& _engineName)
{
    m_engineName = _engineName;
    m_engineNameHasBeenSet = true;
}

bool InstanceInfo::EngineNameHasBeenSet() const
{
    return m_engineNameHasBeenSet;
}

string InstanceInfo::GetEngineVersion() const
{
    return m_engineVersion;
}

void InstanceInfo::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool InstanceInfo::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

string InstanceInfo::GetApiVersion() const
{
    return m_apiVersion;
}

void InstanceInfo::SetApiVersion(const string& _apiVersion)
{
    m_apiVersion = _apiVersion;
    m_apiVersionHasBeenSet = true;
}

bool InstanceInfo::ApiVersionHasBeenSet() const
{
    return m_apiVersionHasBeenSet;
}

int64_t InstanceInfo::GetPayMode() const
{
    return m_payMode;
}

void InstanceInfo::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool InstanceInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string InstanceInfo::GetExtend() const
{
    return m_extend;
}

void InstanceInfo::SetExtend(const string& _extend)
{
    m_extend = _extend;
    m_extendHasBeenSet = true;
}

bool InstanceInfo::ExtendHasBeenSet() const
{
    return m_extendHasBeenSet;
}

string InstanceInfo::GetExpiredAt() const
{
    return m_expiredAt;
}

void InstanceInfo::SetExpiredAt(const string& _expiredAt)
{
    m_expiredAt = _expiredAt;
    m_expiredAtHasBeenSet = true;
}

bool InstanceInfo::ExpiredAtHasBeenSet() const
{
    return m_expiredAtHasBeenSet;
}

bool InstanceInfo::GetIsNoExpired() const
{
    return m_isNoExpired;
}

void InstanceInfo::SetIsNoExpired(const bool& _isNoExpired)
{
    m_isNoExpired = _isNoExpired;
    m_isNoExpiredHasBeenSet = true;
}

bool InstanceInfo::IsNoExpiredHasBeenSet() const
{
    return m_isNoExpiredHasBeenSet;
}

string InstanceInfo::GetWanAddress() const
{
    return m_wanAddress;
}

void InstanceInfo::SetWanAddress(const string& _wanAddress)
{
    m_wanAddress = _wanAddress;
    m_wanAddressHasBeenSet = true;
}

bool InstanceInfo::WanAddressHasBeenSet() const
{
    return m_wanAddressHasBeenSet;
}

string InstanceInfo::GetIsolateAt() const
{
    return m_isolateAt;
}

void InstanceInfo::SetIsolateAt(const string& _isolateAt)
{
    m_isolateAt = _isolateAt;
    m_isolateAtHasBeenSet = true;
}

bool InstanceInfo::IsolateAtHasBeenSet() const
{
    return m_isolateAtHasBeenSet;
}

int64_t InstanceInfo::GetAutoRenew() const
{
    return m_autoRenew;
}

void InstanceInfo::SetAutoRenew(const int64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool InstanceInfo::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

int64_t InstanceInfo::GetTaskStatus() const
{
    return m_taskStatus;
}

void InstanceInfo::SetTaskStatus(const int64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool InstanceInfo::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

