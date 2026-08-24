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

#include <tencentcloud/bdrc/v20260330/model/ModifyBackupVaultAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

ModifyBackupVaultAttributeRequest::ModifyBackupVaultAttributeRequest() :
    m_vaultIdHasBeenSet(false),
    m_vaultNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string ModifyBackupVaultAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vaultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vaultId.c_str(), allocator).Move(), allocator);
    }

    if (m_vaultNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vaultName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBackupVaultAttributeRequest::GetVaultId() const
{
    return m_vaultId;
}

void ModifyBackupVaultAttributeRequest::SetVaultId(const string& _vaultId)
{
    m_vaultId = _vaultId;
    m_vaultIdHasBeenSet = true;
}

bool ModifyBackupVaultAttributeRequest::VaultIdHasBeenSet() const
{
    return m_vaultIdHasBeenSet;
}

string ModifyBackupVaultAttributeRequest::GetVaultName() const
{
    return m_vaultName;
}

void ModifyBackupVaultAttributeRequest::SetVaultName(const string& _vaultName)
{
    m_vaultName = _vaultName;
    m_vaultNameHasBeenSet = true;
}

bool ModifyBackupVaultAttributeRequest::VaultNameHasBeenSet() const
{
    return m_vaultNameHasBeenSet;
}

string ModifyBackupVaultAttributeRequest::GetDescription() const
{
    return m_description;
}

void ModifyBackupVaultAttributeRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyBackupVaultAttributeRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


