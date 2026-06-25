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

#include <tencentcloud/clb/v20180317/model/UserGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

UserGroupInfo::UserGroupInfo() :
    m_userGroupIdHasBeenSet(false),
    m_userGroupNameHasBeenSet(false),
    m_modelRouterIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_modelsHasBeenSet(false),
    m_intentRoutersHasBeenSet(false),
    m_budgetIdHasBeenSet(false),
    m_budgetNameHasBeenSet(false),
    m_creditUsageSetHasBeenSet(false),
    m_keyCountHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false)
{
}

CoreInternalOutcome UserGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserGroupId") && !value["UserGroupId"].IsNull())
    {
        if (!value["UserGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupInfo.UserGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroupId = string(value["UserGroupId"].GetString());
        m_userGroupIdHasBeenSet = true;
    }

    if (value.HasMember("UserGroupName") && !value["UserGroupName"].IsNull())
    {
        if (!value["UserGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupInfo.UserGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroupName = string(value["UserGroupName"].GetString());
        m_userGroupNameHasBeenSet = true;
    }

    if (value.HasMember("ModelRouterId") && !value["ModelRouterId"].IsNull())
    {
        if (!value["ModelRouterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupInfo.ModelRouterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelRouterId = string(value["ModelRouterId"].GetString());
        m_modelRouterIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Models") && !value["Models"].IsNull())
    {
        if (!value["Models"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserGroupInfo.Models` is not array type"));

        const rapidjson::Value &tmpValue = value["Models"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_models.push_back((*itr).GetString());
        }
        m_modelsHasBeenSet = true;
    }

    if (value.HasMember("IntentRouters") && !value["IntentRouters"].IsNull())
    {
        if (!value["IntentRouters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserGroupInfo.IntentRouters` is not array type"));

        const rapidjson::Value &tmpValue = value["IntentRouters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_intentRouters.push_back((*itr).GetString());
        }
        m_intentRoutersHasBeenSet = true;
    }

    if (value.HasMember("BudgetId") && !value["BudgetId"].IsNull())
    {
        if (!value["BudgetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupInfo.BudgetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetId = string(value["BudgetId"].GetString());
        m_budgetIdHasBeenSet = true;
    }

    if (value.HasMember("BudgetName") && !value["BudgetName"].IsNull())
    {
        if (!value["BudgetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupInfo.BudgetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetName = string(value["BudgetName"].GetString());
        m_budgetNameHasBeenSet = true;
    }

    if (value.HasMember("CreditUsageSet") && !value["CreditUsageSet"].IsNull())
    {
        if (!value["CreditUsageSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserGroupInfo.CreditUsageSet` is not array type"));

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

    if (value.HasMember("KeyCount") && !value["KeyCount"].IsNull())
    {
        if (!value["KeyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupInfo.KeyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keyCount = value["KeyCount"].GetInt64();
        m_keyCountHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserGroupInfo.Tags` is not array type"));

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

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupInfo.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_modelRouterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelRouterId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_modelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Models";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_models.begin(); itr != m_models.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_intentRoutersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentRouters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_intentRouters.begin(); itr != m_intentRouters.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_keyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keyCount, allocator);
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

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

}


string UserGroupInfo::GetUserGroupId() const
{
    return m_userGroupId;
}

void UserGroupInfo::SetUserGroupId(const string& _userGroupId)
{
    m_userGroupId = _userGroupId;
    m_userGroupIdHasBeenSet = true;
}

bool UserGroupInfo::UserGroupIdHasBeenSet() const
{
    return m_userGroupIdHasBeenSet;
}

string UserGroupInfo::GetUserGroupName() const
{
    return m_userGroupName;
}

void UserGroupInfo::SetUserGroupName(const string& _userGroupName)
{
    m_userGroupName = _userGroupName;
    m_userGroupNameHasBeenSet = true;
}

bool UserGroupInfo::UserGroupNameHasBeenSet() const
{
    return m_userGroupNameHasBeenSet;
}

string UserGroupInfo::GetModelRouterId() const
{
    return m_modelRouterId;
}

void UserGroupInfo::SetModelRouterId(const string& _modelRouterId)
{
    m_modelRouterId = _modelRouterId;
    m_modelRouterIdHasBeenSet = true;
}

bool UserGroupInfo::ModelRouterIdHasBeenSet() const
{
    return m_modelRouterIdHasBeenSet;
}

string UserGroupInfo::GetStatus() const
{
    return m_status;
}

void UserGroupInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UserGroupInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> UserGroupInfo::GetModels() const
{
    return m_models;
}

void UserGroupInfo::SetModels(const vector<string>& _models)
{
    m_models = _models;
    m_modelsHasBeenSet = true;
}

bool UserGroupInfo::ModelsHasBeenSet() const
{
    return m_modelsHasBeenSet;
}

vector<string> UserGroupInfo::GetIntentRouters() const
{
    return m_intentRouters;
}

void UserGroupInfo::SetIntentRouters(const vector<string>& _intentRouters)
{
    m_intentRouters = _intentRouters;
    m_intentRoutersHasBeenSet = true;
}

bool UserGroupInfo::IntentRoutersHasBeenSet() const
{
    return m_intentRoutersHasBeenSet;
}

string UserGroupInfo::GetBudgetId() const
{
    return m_budgetId;
}

void UserGroupInfo::SetBudgetId(const string& _budgetId)
{
    m_budgetId = _budgetId;
    m_budgetIdHasBeenSet = true;
}

bool UserGroupInfo::BudgetIdHasBeenSet() const
{
    return m_budgetIdHasBeenSet;
}

string UserGroupInfo::GetBudgetName() const
{
    return m_budgetName;
}

void UserGroupInfo::SetBudgetName(const string& _budgetName)
{
    m_budgetName = _budgetName;
    m_budgetNameHasBeenSet = true;
}

bool UserGroupInfo::BudgetNameHasBeenSet() const
{
    return m_budgetNameHasBeenSet;
}

vector<CreditUsage> UserGroupInfo::GetCreditUsageSet() const
{
    return m_creditUsageSet;
}

void UserGroupInfo::SetCreditUsageSet(const vector<CreditUsage>& _creditUsageSet)
{
    m_creditUsageSet = _creditUsageSet;
    m_creditUsageSetHasBeenSet = true;
}

bool UserGroupInfo::CreditUsageSetHasBeenSet() const
{
    return m_creditUsageSetHasBeenSet;
}

int64_t UserGroupInfo::GetKeyCount() const
{
    return m_keyCount;
}

void UserGroupInfo::SetKeyCount(const int64_t& _keyCount)
{
    m_keyCount = _keyCount;
    m_keyCountHasBeenSet = true;
}

bool UserGroupInfo::KeyCountHasBeenSet() const
{
    return m_keyCountHasBeenSet;
}

vector<TagInfo> UserGroupInfo::GetTags() const
{
    return m_tags;
}

void UserGroupInfo::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool UserGroupInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string UserGroupInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void UserGroupInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool UserGroupInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string UserGroupInfo::GetModifiedTime() const
{
    return m_modifiedTime;
}

void UserGroupInfo::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool UserGroupInfo::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

