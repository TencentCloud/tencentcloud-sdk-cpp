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

#include <tencentcloud/redis/v20180412/model/InstanceClusterShard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

InstanceClusterShard::InstanceClusterShard() :
    m_shardNameHasBeenSet(false),
    m_shardIdHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_slotsHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_storageSlopeHasBeenSet(false),
    m_runidHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_connectedHasBeenSet(false)
{
}

CoreInternalOutcome InstanceClusterShard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShardName") && !value["ShardName"].IsNull())
    {
        if (!value["ShardName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterShard.ShardName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardName = string(value["ShardName"].GetString());
        m_shardNameHasBeenSet = true;
    }

    if (value.HasMember("ShardId") && !value["ShardId"].IsNull())
    {
        if (!value["ShardId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterShard.ShardId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardId = string(value["ShardId"].GetString());
        m_shardIdHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterShard.Role` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_role = value["Role"].GetInt64();
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Keys") && !value["Keys"].IsNull())
    {
        if (!value["Keys"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterShard.Keys` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keys = value["Keys"].GetInt64();
        m_keysHasBeenSet = true;
    }

    if (value.HasMember("Slots") && !value["Slots"].IsNull())
    {
        if (!value["Slots"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterShard.Slots` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slots = string(value["Slots"].GetString());
        m_slotsHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterShard.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("StorageSlope") && !value["StorageSlope"].IsNull())
    {
        if (!value["StorageSlope"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterShard.StorageSlope` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_storageSlope = value["StorageSlope"].GetDouble();
        m_storageSlopeHasBeenSet = true;
    }

    if (value.HasMember("Runid") && !value["Runid"].IsNull())
    {
        if (!value["Runid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterShard.Runid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runid = string(value["Runid"].GetString());
        m_runidHasBeenSet = true;
    }

    if (value.HasMember("RunId") && !value["RunId"].IsNull())
    {
        if (!value["RunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterShard.RunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runId = string(value["RunId"].GetString());
        m_runIdHasBeenSet = true;
    }

    if (value.HasMember("Connected") && !value["Connected"].IsNull())
    {
        if (!value["Connected"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterShard.Connected` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connected = value["Connected"].GetInt64();
        m_connectedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceClusterShard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_shardNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardName.c_str(), allocator).Move(), allocator);
    }

    if (m_shardIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_role, allocator);
    }

    if (m_keysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keys, allocator);
    }

    if (m_slotsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Slots";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slots.c_str(), allocator).Move(), allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storage, allocator);
    }

    if (m_storageSlopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSlope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageSlope, allocator);
    }

    if (m_runidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Runid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runid.c_str(), allocator).Move(), allocator);
    }

    if (m_runIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runId.c_str(), allocator).Move(), allocator);
    }

    if (m_connectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Connected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connected, allocator);
    }

}


string InstanceClusterShard::GetShardName() const
{
    return m_shardName;
}

void InstanceClusterShard::SetShardName(const string& _shardName)
{
    m_shardName = _shardName;
    m_shardNameHasBeenSet = true;
}

bool InstanceClusterShard::ShardNameHasBeenSet() const
{
    return m_shardNameHasBeenSet;
}

string InstanceClusterShard::GetShardId() const
{
    return m_shardId;
}

void InstanceClusterShard::SetShardId(const string& _shardId)
{
    m_shardId = _shardId;
    m_shardIdHasBeenSet = true;
}

bool InstanceClusterShard::ShardIdHasBeenSet() const
{
    return m_shardIdHasBeenSet;
}

int64_t InstanceClusterShard::GetRole() const
{
    return m_role;
}

void InstanceClusterShard::SetRole(const int64_t& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool InstanceClusterShard::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

int64_t InstanceClusterShard::GetKeys() const
{
    return m_keys;
}

void InstanceClusterShard::SetKeys(const int64_t& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool InstanceClusterShard::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

string InstanceClusterShard::GetSlots() const
{
    return m_slots;
}

void InstanceClusterShard::SetSlots(const string& _slots)
{
    m_slots = _slots;
    m_slotsHasBeenSet = true;
}

bool InstanceClusterShard::SlotsHasBeenSet() const
{
    return m_slotsHasBeenSet;
}

int64_t InstanceClusterShard::GetStorage() const
{
    return m_storage;
}

void InstanceClusterShard::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool InstanceClusterShard::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

double InstanceClusterShard::GetStorageSlope() const
{
    return m_storageSlope;
}

void InstanceClusterShard::SetStorageSlope(const double& _storageSlope)
{
    m_storageSlope = _storageSlope;
    m_storageSlopeHasBeenSet = true;
}

bool InstanceClusterShard::StorageSlopeHasBeenSet() const
{
    return m_storageSlopeHasBeenSet;
}

string InstanceClusterShard::GetRunid() const
{
    return m_runid;
}

void InstanceClusterShard::SetRunid(const string& _runid)
{
    m_runid = _runid;
    m_runidHasBeenSet = true;
}

bool InstanceClusterShard::RunidHasBeenSet() const
{
    return m_runidHasBeenSet;
}

string InstanceClusterShard::GetRunId() const
{
    return m_runId;
}

void InstanceClusterShard::SetRunId(const string& _runId)
{
    m_runId = _runId;
    m_runIdHasBeenSet = true;
}

bool InstanceClusterShard::RunIdHasBeenSet() const
{
    return m_runIdHasBeenSet;
}

int64_t InstanceClusterShard::GetConnected() const
{
    return m_connected;
}

void InstanceClusterShard::SetConnected(const int64_t& _connected)
{
    m_connected = _connected;
    m_connectedHasBeenSet = true;
}

bool InstanceClusterShard::ConnectedHasBeenSet() const
{
    return m_connectedHasBeenSet;
}

