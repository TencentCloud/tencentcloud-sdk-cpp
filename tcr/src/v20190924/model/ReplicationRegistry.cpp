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

#include <tencentcloud/tcr/v20190924/model/ReplicationRegistry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

ReplicationRegistry::ReplicationRegistry() :
    m_registryIdHasBeenSet(false),
    m_replicationRegistryIdHasBeenSet(false),
    m_replicationRegionIdHasBeenSet(false),
    m_replicationRegionNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

CoreInternalOutcome ReplicationRegistry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegistryId") && !value["RegistryId"].IsNull())
    {
        if (!value["RegistryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationRegistry.RegistryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryId = string(value["RegistryId"].GetString());
        m_registryIdHasBeenSet = true;
    }

    if (value.HasMember("ReplicationRegistryId") && !value["ReplicationRegistryId"].IsNull())
    {
        if (!value["ReplicationRegistryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationRegistry.ReplicationRegistryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicationRegistryId = string(value["ReplicationRegistryId"].GetString());
        m_replicationRegistryIdHasBeenSet = true;
    }

    if (value.HasMember("ReplicationRegionId") && !value["ReplicationRegionId"].IsNull())
    {
        if (!value["ReplicationRegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationRegistry.ReplicationRegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replicationRegionId = value["ReplicationRegionId"].GetUint64();
        m_replicationRegionIdHasBeenSet = true;
    }

    if (value.HasMember("ReplicationRegionName") && !value["ReplicationRegionName"].IsNull())
    {
        if (!value["ReplicationRegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationRegistry.ReplicationRegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicationRegionName = string(value["ReplicationRegionName"].GetString());
        m_replicationRegionNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationRegistry.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationRegistry.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReplicationRegistry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_replicationRegistryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationRegistryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicationRegistryId.c_str(), allocator).Move(), allocator);
    }

    if (m_replicationRegionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationRegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicationRegionId, allocator);
    }

    if (m_replicationRegionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationRegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicationRegionName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

}


string ReplicationRegistry::GetRegistryId() const
{
    return m_registryId;
}

void ReplicationRegistry::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool ReplicationRegistry::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string ReplicationRegistry::GetReplicationRegistryId() const
{
    return m_replicationRegistryId;
}

void ReplicationRegistry::SetReplicationRegistryId(const string& _replicationRegistryId)
{
    m_replicationRegistryId = _replicationRegistryId;
    m_replicationRegistryIdHasBeenSet = true;
}

bool ReplicationRegistry::ReplicationRegistryIdHasBeenSet() const
{
    return m_replicationRegistryIdHasBeenSet;
}

uint64_t ReplicationRegistry::GetReplicationRegionId() const
{
    return m_replicationRegionId;
}

void ReplicationRegistry::SetReplicationRegionId(const uint64_t& _replicationRegionId)
{
    m_replicationRegionId = _replicationRegionId;
    m_replicationRegionIdHasBeenSet = true;
}

bool ReplicationRegistry::ReplicationRegionIdHasBeenSet() const
{
    return m_replicationRegionIdHasBeenSet;
}

string ReplicationRegistry::GetReplicationRegionName() const
{
    return m_replicationRegionName;
}

void ReplicationRegistry::SetReplicationRegionName(const string& _replicationRegionName)
{
    m_replicationRegionName = _replicationRegionName;
    m_replicationRegionNameHasBeenSet = true;
}

bool ReplicationRegistry::ReplicationRegionNameHasBeenSet() const
{
    return m_replicationRegionNameHasBeenSet;
}

string ReplicationRegistry::GetStatus() const
{
    return m_status;
}

void ReplicationRegistry::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReplicationRegistry::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ReplicationRegistry::GetCreatedAt() const
{
    return m_createdAt;
}

void ReplicationRegistry::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool ReplicationRegistry::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

