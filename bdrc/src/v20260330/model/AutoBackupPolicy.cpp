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

#include <tencentcloud/bdrc/v20260330/model/AutoBackupPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

AutoBackupPolicy::AutoBackupPolicy() :
    m_isActivatedHasBeenSet(false),
    m_isPermanentHasBeenSet(false),
    m_nextTriggerTimeHasBeenSet(false),
    m_autoBackupPolicyStateHasBeenSet(false),
    m_autoBackupPolicyNameHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_autoBackupPolicyIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_retentionDaysHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_instanceIdSetHasBeenSet(false),
    m_retentionMonthsHasBeenSet(false),
    m_retentionAmountHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_accountUinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_vaultIdHasBeenSet(false),
    m_advancedRetentionPolicyHasBeenSet(false)
{
}

CoreInternalOutcome AutoBackupPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsActivated") && !value["IsActivated"].IsNull())
    {
        if (!value["IsActivated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.IsActivated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isActivated = value["IsActivated"].GetBool();
        m_isActivatedHasBeenSet = true;
    }

    if (value.HasMember("IsPermanent") && !value["IsPermanent"].IsNull())
    {
        if (!value["IsPermanent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.IsPermanent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPermanent = value["IsPermanent"].GetBool();
        m_isPermanentHasBeenSet = true;
    }

    if (value.HasMember("NextTriggerTime") && !value["NextTriggerTime"].IsNull())
    {
        if (!value["NextTriggerTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.NextTriggerTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextTriggerTime = string(value["NextTriggerTime"].GetString());
        m_nextTriggerTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoBackupPolicyState") && !value["AutoBackupPolicyState"].IsNull())
    {
        if (!value["AutoBackupPolicyState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.AutoBackupPolicyState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupPolicyState = string(value["AutoBackupPolicyState"].GetString());
        m_autoBackupPolicyStateHasBeenSet = true;
    }

    if (value.HasMember("AutoBackupPolicyName") && !value["AutoBackupPolicyName"].IsNull())
    {
        if (!value["AutoBackupPolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.AutoBackupPolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupPolicyName = string(value["AutoBackupPolicyName"].GetString());
        m_autoBackupPolicyNameHasBeenSet = true;
    }

    if (value.HasMember("Policy") && !value["Policy"].IsNull())
    {
        if (!value["Policy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.Policy` is not array type"));

        const rapidjson::Value &tmpValue = value["Policy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Policy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_policy.push_back(item);
        }
        m_policyHasBeenSet = true;
    }

    if (value.HasMember("AutoBackupPolicyId") && !value["AutoBackupPolicyId"].IsNull())
    {
        if (!value["AutoBackupPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.AutoBackupPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoBackupPolicyId = string(value["AutoBackupPolicyId"].GetString());
        m_autoBackupPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RetentionDays") && !value["RetentionDays"].IsNull())
    {
        if (!value["RetentionDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.RetentionDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionDays = value["RetentionDays"].GetUint64();
        m_retentionDaysHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceIdSet") && !value["InstanceIdSet"].IsNull())
    {
        if (!value["InstanceIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.InstanceIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIdSet.push_back((*itr).GetString());
        }
        m_instanceIdSetHasBeenSet = true;
    }

    if (value.HasMember("RetentionMonths") && !value["RetentionMonths"].IsNull())
    {
        if (!value["RetentionMonths"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.RetentionMonths` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionMonths = value["RetentionMonths"].GetUint64();
        m_retentionMonthsHasBeenSet = true;
    }

    if (value.HasMember("RetentionAmount") && !value["RetentionAmount"].IsNull())
    {
        if (!value["RetentionAmount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.RetentionAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionAmount = value["RetentionAmount"].GetUint64();
        m_retentionAmountHasBeenSet = true;
    }

    if (value.HasMember("AccountName") && !value["AccountName"].IsNull())
    {
        if (!value["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(value["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }

    if (value.HasMember("AccountUin") && !value["AccountUin"].IsNull())
    {
        if (!value["AccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.AccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountUin = string(value["AccountUin"].GetString());
        m_accountUinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("VaultId") && !value["VaultId"].IsNull())
    {
        if (!value["VaultId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.VaultId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultId = string(value["VaultId"].GetString());
        m_vaultIdHasBeenSet = true;
    }

    if (value.HasMember("AdvancedRetentionPolicy") && !value["AdvancedRetentionPolicy"].IsNull())
    {
        if (!value["AdvancedRetentionPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBackupPolicy.AdvancedRetentionPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advancedRetentionPolicy.Deserialize(value["AdvancedRetentionPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_advancedRetentionPolicyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoBackupPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isActivatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsActivated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isActivated, allocator);
    }

    if (m_isPermanentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPermanent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPermanent, allocator);
    }

    if (m_nextTriggerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextTriggerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextTriggerTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoBackupPolicyStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupPolicyState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoBackupPolicyState.c_str(), allocator).Move(), allocator);
    }

    if (m_autoBackupPolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupPolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoBackupPolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policy.begin(); itr != m_policy.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_autoBackupPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBackupPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoBackupPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_retentionDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionDays, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_instanceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdSet.begin(); itr != m_instanceIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_retentionMonthsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionMonths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionMonths, allocator);
    }

    if (m_retentionAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionAmount, allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_vaultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vaultId.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedRetentionPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedRetentionPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advancedRetentionPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool AutoBackupPolicy::GetIsActivated() const
{
    return m_isActivated;
}

void AutoBackupPolicy::SetIsActivated(const bool& _isActivated)
{
    m_isActivated = _isActivated;
    m_isActivatedHasBeenSet = true;
}

bool AutoBackupPolicy::IsActivatedHasBeenSet() const
{
    return m_isActivatedHasBeenSet;
}

bool AutoBackupPolicy::GetIsPermanent() const
{
    return m_isPermanent;
}

void AutoBackupPolicy::SetIsPermanent(const bool& _isPermanent)
{
    m_isPermanent = _isPermanent;
    m_isPermanentHasBeenSet = true;
}

bool AutoBackupPolicy::IsPermanentHasBeenSet() const
{
    return m_isPermanentHasBeenSet;
}

string AutoBackupPolicy::GetNextTriggerTime() const
{
    return m_nextTriggerTime;
}

void AutoBackupPolicy::SetNextTriggerTime(const string& _nextTriggerTime)
{
    m_nextTriggerTime = _nextTriggerTime;
    m_nextTriggerTimeHasBeenSet = true;
}

bool AutoBackupPolicy::NextTriggerTimeHasBeenSet() const
{
    return m_nextTriggerTimeHasBeenSet;
}

string AutoBackupPolicy::GetAutoBackupPolicyState() const
{
    return m_autoBackupPolicyState;
}

void AutoBackupPolicy::SetAutoBackupPolicyState(const string& _autoBackupPolicyState)
{
    m_autoBackupPolicyState = _autoBackupPolicyState;
    m_autoBackupPolicyStateHasBeenSet = true;
}

bool AutoBackupPolicy::AutoBackupPolicyStateHasBeenSet() const
{
    return m_autoBackupPolicyStateHasBeenSet;
}

string AutoBackupPolicy::GetAutoBackupPolicyName() const
{
    return m_autoBackupPolicyName;
}

void AutoBackupPolicy::SetAutoBackupPolicyName(const string& _autoBackupPolicyName)
{
    m_autoBackupPolicyName = _autoBackupPolicyName;
    m_autoBackupPolicyNameHasBeenSet = true;
}

bool AutoBackupPolicy::AutoBackupPolicyNameHasBeenSet() const
{
    return m_autoBackupPolicyNameHasBeenSet;
}

vector<Policy> AutoBackupPolicy::GetPolicy() const
{
    return m_policy;
}

void AutoBackupPolicy::SetPolicy(const vector<Policy>& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool AutoBackupPolicy::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

string AutoBackupPolicy::GetAutoBackupPolicyId() const
{
    return m_autoBackupPolicyId;
}

void AutoBackupPolicy::SetAutoBackupPolicyId(const string& _autoBackupPolicyId)
{
    m_autoBackupPolicyId = _autoBackupPolicyId;
    m_autoBackupPolicyIdHasBeenSet = true;
}

bool AutoBackupPolicy::AutoBackupPolicyIdHasBeenSet() const
{
    return m_autoBackupPolicyIdHasBeenSet;
}

string AutoBackupPolicy::GetCreateTime() const
{
    return m_createTime;
}

void AutoBackupPolicy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AutoBackupPolicy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t AutoBackupPolicy::GetRetentionDays() const
{
    return m_retentionDays;
}

void AutoBackupPolicy::SetRetentionDays(const uint64_t& _retentionDays)
{
    m_retentionDays = _retentionDays;
    m_retentionDaysHasBeenSet = true;
}

bool AutoBackupPolicy::RetentionDaysHasBeenSet() const
{
    return m_retentionDaysHasBeenSet;
}

uint64_t AutoBackupPolicy::GetAppId() const
{
    return m_appId;
}

void AutoBackupPolicy::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AutoBackupPolicy::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

vector<string> AutoBackupPolicy::GetInstanceIdSet() const
{
    return m_instanceIdSet;
}

void AutoBackupPolicy::SetInstanceIdSet(const vector<string>& _instanceIdSet)
{
    m_instanceIdSet = _instanceIdSet;
    m_instanceIdSetHasBeenSet = true;
}

bool AutoBackupPolicy::InstanceIdSetHasBeenSet() const
{
    return m_instanceIdSetHasBeenSet;
}

uint64_t AutoBackupPolicy::GetRetentionMonths() const
{
    return m_retentionMonths;
}

void AutoBackupPolicy::SetRetentionMonths(const uint64_t& _retentionMonths)
{
    m_retentionMonths = _retentionMonths;
    m_retentionMonthsHasBeenSet = true;
}

bool AutoBackupPolicy::RetentionMonthsHasBeenSet() const
{
    return m_retentionMonthsHasBeenSet;
}

uint64_t AutoBackupPolicy::GetRetentionAmount() const
{
    return m_retentionAmount;
}

void AutoBackupPolicy::SetRetentionAmount(const uint64_t& _retentionAmount)
{
    m_retentionAmount = _retentionAmount;
    m_retentionAmountHasBeenSet = true;
}

bool AutoBackupPolicy::RetentionAmountHasBeenSet() const
{
    return m_retentionAmountHasBeenSet;
}

string AutoBackupPolicy::GetAccountName() const
{
    return m_accountName;
}

void AutoBackupPolicy::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool AutoBackupPolicy::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string AutoBackupPolicy::GetAccountUin() const
{
    return m_accountUin;
}

void AutoBackupPolicy::SetAccountUin(const string& _accountUin)
{
    m_accountUin = _accountUin;
    m_accountUinHasBeenSet = true;
}

bool AutoBackupPolicy::AccountUinHasBeenSet() const
{
    return m_accountUinHasBeenSet;
}

string AutoBackupPolicy::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void AutoBackupPolicy::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool AutoBackupPolicy::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string AutoBackupPolicy::GetStorageType() const
{
    return m_storageType;
}

void AutoBackupPolicy::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool AutoBackupPolicy::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string AutoBackupPolicy::GetVaultId() const
{
    return m_vaultId;
}

void AutoBackupPolicy::SetVaultId(const string& _vaultId)
{
    m_vaultId = _vaultId;
    m_vaultIdHasBeenSet = true;
}

bool AutoBackupPolicy::VaultIdHasBeenSet() const
{
    return m_vaultIdHasBeenSet;
}

AdvancedRetentionPolicy AutoBackupPolicy::GetAdvancedRetentionPolicy() const
{
    return m_advancedRetentionPolicy;
}

void AutoBackupPolicy::SetAdvancedRetentionPolicy(const AdvancedRetentionPolicy& _advancedRetentionPolicy)
{
    m_advancedRetentionPolicy = _advancedRetentionPolicy;
    m_advancedRetentionPolicyHasBeenSet = true;
}

bool AutoBackupPolicy::AdvancedRetentionPolicyHasBeenSet() const
{
    return m_advancedRetentionPolicyHasBeenSet;
}

