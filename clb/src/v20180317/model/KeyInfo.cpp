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

#include <tencentcloud/clb/v20180317/model/KeyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

KeyInfo::KeyInfo() :
    m_blockedHasBeenSet(false),
    m_budgetIdHasBeenSet(false),
    m_budgetNameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_creditUsageSetHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_rateLimitConfigHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_userGroupIdHasBeenSet(false),
    m_userGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome KeyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Blocked") && !value["Blocked"].IsNull())
    {
        if (!value["Blocked"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KeyInfo.Blocked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_blocked = value["Blocked"].GetBool();
        m_blockedHasBeenSet = true;
    }

    if (value.HasMember("BudgetId") && !value["BudgetId"].IsNull())
    {
        if (!value["BudgetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyInfo.BudgetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetId = string(value["BudgetId"].GetString());
        m_budgetIdHasBeenSet = true;
    }

    if (value.HasMember("BudgetName") && !value["BudgetName"].IsNull())
    {
        if (!value["BudgetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyInfo.BudgetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetName = string(value["BudgetName"].GetString());
        m_budgetNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("CreditUsageSet") && !value["CreditUsageSet"].IsNull())
    {
        if (!value["CreditUsageSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KeyInfo.CreditUsageSet` is not array type"));

        const rapidjson::Value &tmpValue = value["CreditUsageSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CreditUsage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_creditUsageSet.push_back(item);
        }
        m_creditUsageSetHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyInfo.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyInfo.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("KeyName") && !value["KeyName"].IsNull())
    {
        if (!value["KeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyInfo.KeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyName = string(value["KeyName"].GetString());
        m_keyNameHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyInfo.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("RateLimitConfig") && !value["RateLimitConfig"].IsNull())
    {
        if (!value["RateLimitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KeyInfo.RateLimitConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rateLimitConfig.Deserialize(value["RateLimitConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rateLimitConfigHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KeyInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("UserGroupId") && !value["UserGroupId"].IsNull())
    {
        if (!value["UserGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyInfo.UserGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroupId = string(value["UserGroupId"].GetString());
        m_userGroupIdHasBeenSet = true;
    }

    if (value.HasMember("UserGroupName") && !value["UserGroupName"].IsNull())
    {
        if (!value["UserGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyInfo.UserGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroupName = string(value["UserGroupName"].GetString());
        m_userGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KeyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_blockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Blocked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blocked, allocator);
    }

    if (m_budgetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_budgetId.c_str(), allocator).Move(), allocator);
    }

    if (m_budgetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_budgetName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creditUsageSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditUsageSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_creditUsageSet.begin(); itr != m_creditUsageSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyName.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_rateLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rateLimitConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_userGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroupName.c_str(), allocator).Move(), allocator);
    }

}


bool KeyInfo::GetBlocked() const
{
    return m_blocked;
}

void KeyInfo::SetBlocked(const bool& _blocked)
{
    m_blocked = _blocked;
    m_blockedHasBeenSet = true;
}

bool KeyInfo::BlockedHasBeenSet() const
{
    return m_blockedHasBeenSet;
}

string KeyInfo::GetBudgetId() const
{
    return m_budgetId;
}

void KeyInfo::SetBudgetId(const string& _budgetId)
{
    m_budgetId = _budgetId;
    m_budgetIdHasBeenSet = true;
}

bool KeyInfo::BudgetIdHasBeenSet() const
{
    return m_budgetIdHasBeenSet;
}

string KeyInfo::GetBudgetName() const
{
    return m_budgetName;
}

void KeyInfo::SetBudgetName(const string& _budgetName)
{
    m_budgetName = _budgetName;
    m_budgetNameHasBeenSet = true;
}

bool KeyInfo::BudgetNameHasBeenSet() const
{
    return m_budgetNameHasBeenSet;
}

string KeyInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void KeyInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool KeyInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<CreditUsage> KeyInfo::GetCreditUsageSet() const
{
    return m_creditUsageSet;
}

void KeyInfo::SetCreditUsageSet(const vector<CreditUsage>& _creditUsageSet)
{
    m_creditUsageSet = _creditUsageSet;
    m_creditUsageSetHasBeenSet = true;
}

bool KeyInfo::CreditUsageSetHasBeenSet() const
{
    return m_creditUsageSetHasBeenSet;
}

string KeyInfo::GetKey() const
{
    return m_key;
}

void KeyInfo::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool KeyInfo::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string KeyInfo::GetKeyId() const
{
    return m_keyId;
}

void KeyInfo::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool KeyInfo::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string KeyInfo::GetKeyName() const
{
    return m_keyName;
}

void KeyInfo::SetKeyName(const string& _keyName)
{
    m_keyName = _keyName;
    m_keyNameHasBeenSet = true;
}

bool KeyInfo::KeyNameHasBeenSet() const
{
    return m_keyNameHasBeenSet;
}

string KeyInfo::GetModifiedTime() const
{
    return m_modifiedTime;
}

void KeyInfo::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool KeyInfo::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

RateLimitConfigForKey KeyInfo::GetRateLimitConfig() const
{
    return m_rateLimitConfig;
}

void KeyInfo::SetRateLimitConfig(const RateLimitConfigForKey& _rateLimitConfig)
{
    m_rateLimitConfig = _rateLimitConfig;
    m_rateLimitConfigHasBeenSet = true;
}

bool KeyInfo::RateLimitConfigHasBeenSet() const
{
    return m_rateLimitConfigHasBeenSet;
}

string KeyInfo::GetStatus() const
{
    return m_status;
}

void KeyInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool KeyInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<TagInfo> KeyInfo::GetTags() const
{
    return m_tags;
}

void KeyInfo::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool KeyInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string KeyInfo::GetUserGroupId() const
{
    return m_userGroupId;
}

void KeyInfo::SetUserGroupId(const string& _userGroupId)
{
    m_userGroupId = _userGroupId;
    m_userGroupIdHasBeenSet = true;
}

bool KeyInfo::UserGroupIdHasBeenSet() const
{
    return m_userGroupIdHasBeenSet;
}

string KeyInfo::GetUserGroupName() const
{
    return m_userGroupName;
}

void KeyInfo::SetUserGroupName(const string& _userGroupName)
{
    m_userGroupName = _userGroupName;
    m_userGroupNameHasBeenSet = true;
}

bool KeyInfo::UserGroupNameHasBeenSet() const
{
    return m_userGroupNameHasBeenSet;
}

