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

#include <tencentcloud/edgezone/v20260401/model/PrivateNetworkInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Edgezone::V20260401::Model;
using namespace std;

PrivateNetworkInstanceInfo::PrivateNetworkInstanceInfo() :
    m_networkInstanceIdHasBeenSet(false),
    m_networkInstanceNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_networkHasBeenSet(false),
    m_maskHasBeenSet(false),
    m_serverCountHasBeenSet(false),
    m_availableIpCountHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome PrivateNetworkInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NetworkInstanceId") && !value["NetworkInstanceId"].IsNull())
    {
        if (!value["NetworkInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNetworkInstanceInfo.NetworkInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInstanceId = string(value["NetworkInstanceId"].GetString());
        m_networkInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("NetworkInstanceName") && !value["NetworkInstanceName"].IsNull())
    {
        if (!value["NetworkInstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNetworkInstanceInfo.NetworkInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInstanceName = string(value["NetworkInstanceName"].GetString());
        m_networkInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNetworkInstanceInfo.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("Network") && !value["Network"].IsNull())
    {
        if (!value["Network"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNetworkInstanceInfo.Network` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_network = string(value["Network"].GetString());
        m_networkHasBeenSet = true;
    }

    if (value.HasMember("Mask") && !value["Mask"].IsNull())
    {
        if (!value["Mask"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNetworkInstanceInfo.Mask` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mask = value["Mask"].GetInt64();
        m_maskHasBeenSet = true;
    }

    if (value.HasMember("ServerCount") && !value["ServerCount"].IsNull())
    {
        if (!value["ServerCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNetworkInstanceInfo.ServerCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serverCount = value["ServerCount"].GetInt64();
        m_serverCountHasBeenSet = true;
    }

    if (value.HasMember("AvailableIpCount") && !value["AvailableIpCount"].IsNull())
    {
        if (!value["AvailableIpCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNetworkInstanceInfo.AvailableIpCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableIpCount = value["AvailableIpCount"].GetInt64();
        m_availableIpCountHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNetworkInstanceInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNetworkInstanceInfo.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivateNetworkInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_networkInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Network";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_network.c_str(), allocator).Move(), allocator);
    }

    if (m_maskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mask, allocator);
    }

    if (m_serverCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serverCount, allocator);
    }

    if (m_availableIpCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableIpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableIpCount, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

}


string PrivateNetworkInstanceInfo::GetNetworkInstanceId() const
{
    return m_networkInstanceId;
}

void PrivateNetworkInstanceInfo::SetNetworkInstanceId(const string& _networkInstanceId)
{
    m_networkInstanceId = _networkInstanceId;
    m_networkInstanceIdHasBeenSet = true;
}

bool PrivateNetworkInstanceInfo::NetworkInstanceIdHasBeenSet() const
{
    return m_networkInstanceIdHasBeenSet;
}

string PrivateNetworkInstanceInfo::GetNetworkInstanceName() const
{
    return m_networkInstanceName;
}

void PrivateNetworkInstanceInfo::SetNetworkInstanceName(const string& _networkInstanceName)
{
    m_networkInstanceName = _networkInstanceName;
    m_networkInstanceNameHasBeenSet = true;
}

bool PrivateNetworkInstanceInfo::NetworkInstanceNameHasBeenSet() const
{
    return m_networkInstanceNameHasBeenSet;
}

string PrivateNetworkInstanceInfo::GetZoneId() const
{
    return m_zoneId;
}

void PrivateNetworkInstanceInfo::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool PrivateNetworkInstanceInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string PrivateNetworkInstanceInfo::GetNetwork() const
{
    return m_network;
}

void PrivateNetworkInstanceInfo::SetNetwork(const string& _network)
{
    m_network = _network;
    m_networkHasBeenSet = true;
}

bool PrivateNetworkInstanceInfo::NetworkHasBeenSet() const
{
    return m_networkHasBeenSet;
}

int64_t PrivateNetworkInstanceInfo::GetMask() const
{
    return m_mask;
}

void PrivateNetworkInstanceInfo::SetMask(const int64_t& _mask)
{
    m_mask = _mask;
    m_maskHasBeenSet = true;
}

bool PrivateNetworkInstanceInfo::MaskHasBeenSet() const
{
    return m_maskHasBeenSet;
}

int64_t PrivateNetworkInstanceInfo::GetServerCount() const
{
    return m_serverCount;
}

void PrivateNetworkInstanceInfo::SetServerCount(const int64_t& _serverCount)
{
    m_serverCount = _serverCount;
    m_serverCountHasBeenSet = true;
}

bool PrivateNetworkInstanceInfo::ServerCountHasBeenSet() const
{
    return m_serverCountHasBeenSet;
}

int64_t PrivateNetworkInstanceInfo::GetAvailableIpCount() const
{
    return m_availableIpCount;
}

void PrivateNetworkInstanceInfo::SetAvailableIpCount(const int64_t& _availableIpCount)
{
    m_availableIpCount = _availableIpCount;
    m_availableIpCountHasBeenSet = true;
}

bool PrivateNetworkInstanceInfo::AvailableIpCountHasBeenSet() const
{
    return m_availableIpCountHasBeenSet;
}

string PrivateNetworkInstanceInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void PrivateNetworkInstanceInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool PrivateNetworkInstanceInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string PrivateNetworkInstanceInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void PrivateNetworkInstanceInfo::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool PrivateNetworkInstanceInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

