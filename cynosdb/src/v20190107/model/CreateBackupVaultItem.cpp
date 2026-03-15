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

#include <tencentcloud/cynosdb/v20190107/model/CreateBackupVaultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CreateBackupVaultItem::CreateBackupVaultItem() :
    m_vaultIdHasBeenSet(false),
    m_vaultRegionHasBeenSet(false)
{
}

CoreInternalOutcome CreateBackupVaultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VaultId") && !value["VaultId"].IsNull())
    {
        if (!value["VaultId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateBackupVaultItem.VaultId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultId = string(value["VaultId"].GetString());
        m_vaultIdHasBeenSet = true;
    }

    if (value.HasMember("VaultRegion") && !value["VaultRegion"].IsNull())
    {
        if (!value["VaultRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateBackupVaultItem.VaultRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultRegion = string(value["VaultRegion"].GetString());
        m_vaultRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateBackupVaultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

}


string CreateBackupVaultItem::GetVaultId() const
{
    return m_vaultId;
}

void CreateBackupVaultItem::SetVaultId(const string& _vaultId)
{
    m_vaultId = _vaultId;
    m_vaultIdHasBeenSet = true;
}

bool CreateBackupVaultItem::VaultIdHasBeenSet() const
{
    return m_vaultIdHasBeenSet;
}

string CreateBackupVaultItem::GetVaultRegion() const
{
    return m_vaultRegion;
}

void CreateBackupVaultItem::SetVaultRegion(const string& _vaultRegion)
{
    m_vaultRegion = _vaultRegion;
    m_vaultRegionHasBeenSet = true;
}

bool CreateBackupVaultItem::VaultRegionHasBeenSet() const
{
    return m_vaultRegionHasBeenSet;
}

