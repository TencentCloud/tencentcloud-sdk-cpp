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

#include <tencentcloud/redis/v20180412/model/InstanceClusterNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

InstanceClusterNode::InstanceClusterNode() :
    m_nameHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_connectedHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_downTimeHasBeenSet(false),
    m_slotsHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_qpsSlopeHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_storageSlopeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceClusterNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterNode.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RunId") && !value["RunId"].IsNull())
    {
        if (!value["RunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterNode.RunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runId = string(value["RunId"].GetString());
        m_runIdHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterNode.Role` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_role = value["Role"].GetInt64();
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterNode.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Connected") && !value["Connected"].IsNull())
    {
        if (!value["Connected"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterNode.Connected` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connected = value["Connected"].GetInt64();
        m_connectedHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterNode.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DownTime") && !value["DownTime"].IsNull())
    {
        if (!value["DownTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterNode.DownTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downTime = string(value["DownTime"].GetString());
        m_downTimeHasBeenSet = true;
    }

    if (value.HasMember("Slots") && !value["Slots"].IsNull())
    {
        if (!value["Slots"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterNode.Slots` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slots = string(value["Slots"].GetString());
        m_slotsHasBeenSet = true;
    }

    if (value.HasMember("Keys") && !value["Keys"].IsNull())
    {
        if (!value["Keys"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterNode.Keys` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keys = value["Keys"].GetInt64();
        m_keysHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterNode.Qps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetInt64();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("QpsSlope") && !value["QpsSlope"].IsNull())
    {
        if (!value["QpsSlope"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterNode.QpsSlope` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_qpsSlope = value["QpsSlope"].GetDouble();
        m_qpsSlopeHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterNode.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("StorageSlope") && !value["StorageSlope"].IsNull())
    {
        if (!value["StorageSlope"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceClusterNode.StorageSlope` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_storageSlope = value["StorageSlope"].GetDouble();
        m_storageSlopeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceClusterNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_runIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_role, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_connectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Connected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connected, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_downTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downTime.c_str(), allocator).Move(), allocator);
    }

    if (m_slotsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Slots";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slots.c_str(), allocator).Move(), allocator);
    }

    if (m_keysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keys, allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_qpsSlopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QpsSlope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qpsSlope, allocator);
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

}


string InstanceClusterNode::GetName() const
{
    return m_name;
}

void InstanceClusterNode::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool InstanceClusterNode::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string InstanceClusterNode::GetRunId() const
{
    return m_runId;
}

void InstanceClusterNode::SetRunId(const string& _runId)
{
    m_runId = _runId;
    m_runIdHasBeenSet = true;
}

bool InstanceClusterNode::RunIdHasBeenSet() const
{
    return m_runIdHasBeenSet;
}

int64_t InstanceClusterNode::GetRole() const
{
    return m_role;
}

void InstanceClusterNode::SetRole(const int64_t& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool InstanceClusterNode::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

int64_t InstanceClusterNode::GetStatus() const
{
    return m_status;
}

void InstanceClusterNode::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceClusterNode::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t InstanceClusterNode::GetConnected() const
{
    return m_connected;
}

void InstanceClusterNode::SetConnected(const int64_t& _connected)
{
    m_connected = _connected;
    m_connectedHasBeenSet = true;
}

bool InstanceClusterNode::ConnectedHasBeenSet() const
{
    return m_connectedHasBeenSet;
}

string InstanceClusterNode::GetCreateTime() const
{
    return m_createTime;
}

void InstanceClusterNode::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceClusterNode::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InstanceClusterNode::GetDownTime() const
{
    return m_downTime;
}

void InstanceClusterNode::SetDownTime(const string& _downTime)
{
    m_downTime = _downTime;
    m_downTimeHasBeenSet = true;
}

bool InstanceClusterNode::DownTimeHasBeenSet() const
{
    return m_downTimeHasBeenSet;
}

string InstanceClusterNode::GetSlots() const
{
    return m_slots;
}

void InstanceClusterNode::SetSlots(const string& _slots)
{
    m_slots = _slots;
    m_slotsHasBeenSet = true;
}

bool InstanceClusterNode::SlotsHasBeenSet() const
{
    return m_slotsHasBeenSet;
}

int64_t InstanceClusterNode::GetKeys() const
{
    return m_keys;
}

void InstanceClusterNode::SetKeys(const int64_t& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool InstanceClusterNode::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

int64_t InstanceClusterNode::GetQps() const
{
    return m_qps;
}

void InstanceClusterNode::SetQps(const int64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool InstanceClusterNode::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

double InstanceClusterNode::GetQpsSlope() const
{
    return m_qpsSlope;
}

void InstanceClusterNode::SetQpsSlope(const double& _qpsSlope)
{
    m_qpsSlope = _qpsSlope;
    m_qpsSlopeHasBeenSet = true;
}

bool InstanceClusterNode::QpsSlopeHasBeenSet() const
{
    return m_qpsSlopeHasBeenSet;
}

int64_t InstanceClusterNode::GetStorage() const
{
    return m_storage;
}

void InstanceClusterNode::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool InstanceClusterNode::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

double InstanceClusterNode::GetStorageSlope() const
{
    return m_storageSlope;
}

void InstanceClusterNode::SetStorageSlope(const double& _storageSlope)
{
    m_storageSlope = _storageSlope;
    m_storageSlopeHasBeenSet = true;
}

bool InstanceClusterNode::StorageSlopeHasBeenSet() const
{
    return m_storageSlopeHasBeenSet;
}

