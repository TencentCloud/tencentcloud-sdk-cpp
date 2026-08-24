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

#include <tencentcloud/bdrc/v20260330/model/ModifyAutoBackupPolicyAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

ModifyAutoBackupPolicyAttributeRequest::ModifyAutoBackupPolicyAttributeRequest() :
    m_autoBackupPolicyIdHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_isPermanentHasBeenSet(false),
    m_autoBackupPolicyNameHasBeenSet(false),
    m_isActivatedHasBeenSet(false),
    m_retentionDaysHasBeenSet(false),
    m_retentionMonthsHasBeenSet(false),
    m_retentionAmountHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_vaultIdHasBeenSet(false),
    m_advancedRetentionPolicyHasBeenSet(false)
{
}

string ModifyAutoBackupPolicyAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoBackupPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoBackupPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policy.begin(); itr != m_policy.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isPermanentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPermanent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPermanent, allocator);
    }

    if (m_autoBackupPolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupPolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoBackupPolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_isActivatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsActivated";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isActivated, allocator);
    }

    if (m_retentionDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retentionDays, allocator);
    }

    if (m_retentionMonthsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionMonths";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retentionMonths, allocator);
    }

    if (m_retentionAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retentionAmount, allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_vaultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vaultId.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedRetentionPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedRetentionPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advancedRetentionPolicy.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAutoBackupPolicyAttributeRequest::GetAutoBackupPolicyId() const
{
    return m_autoBackupPolicyId;
}

void ModifyAutoBackupPolicyAttributeRequest::SetAutoBackupPolicyId(const string& _autoBackupPolicyId)
{
    m_autoBackupPolicyId = _autoBackupPolicyId;
    m_autoBackupPolicyIdHasBeenSet = true;
}

bool ModifyAutoBackupPolicyAttributeRequest::AutoBackupPolicyIdHasBeenSet() const
{
    return m_autoBackupPolicyIdHasBeenSet;
}

vector<Policy> ModifyAutoBackupPolicyAttributeRequest::GetPolicy() const
{
    return m_policy;
}

void ModifyAutoBackupPolicyAttributeRequest::SetPolicy(const vector<Policy>& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool ModifyAutoBackupPolicyAttributeRequest::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

bool ModifyAutoBackupPolicyAttributeRequest::GetIsPermanent() const
{
    return m_isPermanent;
}

void ModifyAutoBackupPolicyAttributeRequest::SetIsPermanent(const bool& _isPermanent)
{
    m_isPermanent = _isPermanent;
    m_isPermanentHasBeenSet = true;
}

bool ModifyAutoBackupPolicyAttributeRequest::IsPermanentHasBeenSet() const
{
    return m_isPermanentHasBeenSet;
}

string ModifyAutoBackupPolicyAttributeRequest::GetAutoBackupPolicyName() const
{
    return m_autoBackupPolicyName;
}

void ModifyAutoBackupPolicyAttributeRequest::SetAutoBackupPolicyName(const string& _autoBackupPolicyName)
{
    m_autoBackupPolicyName = _autoBackupPolicyName;
    m_autoBackupPolicyNameHasBeenSet = true;
}

bool ModifyAutoBackupPolicyAttributeRequest::AutoBackupPolicyNameHasBeenSet() const
{
    return m_autoBackupPolicyNameHasBeenSet;
}

bool ModifyAutoBackupPolicyAttributeRequest::GetIsActivated() const
{
    return m_isActivated;
}

void ModifyAutoBackupPolicyAttributeRequest::SetIsActivated(const bool& _isActivated)
{
    m_isActivated = _isActivated;
    m_isActivatedHasBeenSet = true;
}

bool ModifyAutoBackupPolicyAttributeRequest::IsActivatedHasBeenSet() const
{
    return m_isActivatedHasBeenSet;
}

uint64_t ModifyAutoBackupPolicyAttributeRequest::GetRetentionDays() const
{
    return m_retentionDays;
}

void ModifyAutoBackupPolicyAttributeRequest::SetRetentionDays(const uint64_t& _retentionDays)
{
    m_retentionDays = _retentionDays;
    m_retentionDaysHasBeenSet = true;
}

bool ModifyAutoBackupPolicyAttributeRequest::RetentionDaysHasBeenSet() const
{
    return m_retentionDaysHasBeenSet;
}

uint64_t ModifyAutoBackupPolicyAttributeRequest::GetRetentionMonths() const
{
    return m_retentionMonths;
}

void ModifyAutoBackupPolicyAttributeRequest::SetRetentionMonths(const uint64_t& _retentionMonths)
{
    m_retentionMonths = _retentionMonths;
    m_retentionMonthsHasBeenSet = true;
}

bool ModifyAutoBackupPolicyAttributeRequest::RetentionMonthsHasBeenSet() const
{
    return m_retentionMonthsHasBeenSet;
}

uint64_t ModifyAutoBackupPolicyAttributeRequest::GetRetentionAmount() const
{
    return m_retentionAmount;
}

void ModifyAutoBackupPolicyAttributeRequest::SetRetentionAmount(const uint64_t& _retentionAmount)
{
    m_retentionAmount = _retentionAmount;
    m_retentionAmountHasBeenSet = true;
}

bool ModifyAutoBackupPolicyAttributeRequest::RetentionAmountHasBeenSet() const
{
    return m_retentionAmountHasBeenSet;
}

string ModifyAutoBackupPolicyAttributeRequest::GetStorageType() const
{
    return m_storageType;
}

void ModifyAutoBackupPolicyAttributeRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool ModifyAutoBackupPolicyAttributeRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string ModifyAutoBackupPolicyAttributeRequest::GetVaultId() const
{
    return m_vaultId;
}

void ModifyAutoBackupPolicyAttributeRequest::SetVaultId(const string& _vaultId)
{
    m_vaultId = _vaultId;
    m_vaultIdHasBeenSet = true;
}

bool ModifyAutoBackupPolicyAttributeRequest::VaultIdHasBeenSet() const
{
    return m_vaultIdHasBeenSet;
}

AdvancedRetentionPolicy ModifyAutoBackupPolicyAttributeRequest::GetAdvancedRetentionPolicy() const
{
    return m_advancedRetentionPolicy;
}

void ModifyAutoBackupPolicyAttributeRequest::SetAdvancedRetentionPolicy(const AdvancedRetentionPolicy& _advancedRetentionPolicy)
{
    m_advancedRetentionPolicy = _advancedRetentionPolicy;
    m_advancedRetentionPolicyHasBeenSet = true;
}

bool ModifyAutoBackupPolicyAttributeRequest::AdvancedRetentionPolicyHasBeenSet() const
{
    return m_advancedRetentionPolicyHasBeenSet;
}


