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

#include <tencentcloud/cynosdb/v20190107/model/AutoCopyConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

AutoCopyConfig::AutoCopyConfig() :
    m_clusterIdHasBeenSet(false),
    m_vaultIdHasBeenSet(false),
    m_vaultRegionHasBeenSet(false),
    m_copyTypeHasBeenSet(false)
{
}

CoreInternalOutcome AutoCopyConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoCopyConfig.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("VaultId") && !value["VaultId"].IsNull())
    {
        if (!value["VaultId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoCopyConfig.VaultId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultId = string(value["VaultId"].GetString());
        m_vaultIdHasBeenSet = true;
    }

    if (value.HasMember("VaultRegion") && !value["VaultRegion"].IsNull())
    {
        if (!value["VaultRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoCopyConfig.VaultRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultRegion = string(value["VaultRegion"].GetString());
        m_vaultRegionHasBeenSet = true;
    }

    if (value.HasMember("CopyType") && !value["CopyType"].IsNull())
    {
        if (!value["CopyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoCopyConfig.CopyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_copyType = string(value["CopyType"].GetString());
        m_copyTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoCopyConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_vaultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vaultId.c_str(), allocator).Move(), allocator);
    }

    if (m_vaultRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vaultRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_copyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_copyType.c_str(), allocator).Move(), allocator);
    }

}


string AutoCopyConfig::GetClusterId() const
{
    return m_clusterId;
}

void AutoCopyConfig::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AutoCopyConfig::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string AutoCopyConfig::GetVaultId() const
{
    return m_vaultId;
}

void AutoCopyConfig::SetVaultId(const string& _vaultId)
{
    m_vaultId = _vaultId;
    m_vaultIdHasBeenSet = true;
}

bool AutoCopyConfig::VaultIdHasBeenSet() const
{
    return m_vaultIdHasBeenSet;
}

string AutoCopyConfig::GetVaultRegion() const
{
    return m_vaultRegion;
}

void AutoCopyConfig::SetVaultRegion(const string& _vaultRegion)
{
    m_vaultRegion = _vaultRegion;
    m_vaultRegionHasBeenSet = true;
}

bool AutoCopyConfig::VaultRegionHasBeenSet() const
{
    return m_vaultRegionHasBeenSet;
}

string AutoCopyConfig::GetCopyType() const
{
    return m_copyType;
}

void AutoCopyConfig::SetCopyType(const string& _copyType)
{
    m_copyType = _copyType;
    m_copyTypeHasBeenSet = true;
}

bool AutoCopyConfig::CopyTypeHasBeenSet() const
{
    return m_copyTypeHasBeenSet;
}

