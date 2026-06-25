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

#include <tencentcloud/clb/v20180317/model/BudgetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

BudgetInfo::BudgetInfo() :
    m_associationKeyCountHasBeenSet(false),
    m_associationModelRouterCountHasBeenSet(false),
    m_associationUserGroupCountHasBeenSet(false),
    m_budgetConfigsHasBeenSet(false),
    m_budgetIdHasBeenSet(false),
    m_budgetNameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_rateLimitConfigHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome BudgetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssociationKeyCount") && !value["AssociationKeyCount"].IsNull())
    {
        if (!value["AssociationKeyCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetInfo.AssociationKeyCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_associationKeyCount = value["AssociationKeyCount"].GetUint64();
        m_associationKeyCountHasBeenSet = true;
    }

    if (value.HasMember("AssociationModelRouterCount") && !value["AssociationModelRouterCount"].IsNull())
    {
        if (!value["AssociationModelRouterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetInfo.AssociationModelRouterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_associationModelRouterCount = value["AssociationModelRouterCount"].GetUint64();
        m_associationModelRouterCountHasBeenSet = true;
    }

    if (value.HasMember("AssociationUserGroupCount") && !value["AssociationUserGroupCount"].IsNull())
    {
        if (!value["AssociationUserGroupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetInfo.AssociationUserGroupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_associationUserGroupCount = value["AssociationUserGroupCount"].GetUint64();
        m_associationUserGroupCountHasBeenSet = true;
    }

    if (value.HasMember("BudgetConfigs") && !value["BudgetConfigs"].IsNull())
    {
        if (!value["BudgetConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetInfo.BudgetConfigs` is not array type"));

        const rapidjson::Value &tmpValue = value["BudgetConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BudgetConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_budgetConfigs.push_back(item);
        }
        m_budgetConfigsHasBeenSet = true;
    }

    if (value.HasMember("BudgetId") && !value["BudgetId"].IsNull())
    {
        if (!value["BudgetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetInfo.BudgetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetId = string(value["BudgetId"].GetString());
        m_budgetIdHasBeenSet = true;
    }

    if (value.HasMember("BudgetName") && !value["BudgetName"].IsNull())
    {
        if (!value["BudgetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetInfo.BudgetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetName = string(value["BudgetName"].GetString());
        m_budgetNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetInfo.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("RateLimitConfig") && !value["RateLimitConfig"].IsNull())
    {
        if (!value["RateLimitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetInfo.RateLimitConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `BudgetInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BudgetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_associationKeyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociationKeyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_associationKeyCount, allocator);
    }

    if (m_associationModelRouterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociationModelRouterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_associationModelRouterCount, allocator);
    }

    if (m_associationUserGroupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociationUserGroupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_associationUserGroupCount, allocator);
    }

    if (m_budgetConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_budgetConfigs.begin(); itr != m_budgetConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
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

}


uint64_t BudgetInfo::GetAssociationKeyCount() const
{
    return m_associationKeyCount;
}

void BudgetInfo::SetAssociationKeyCount(const uint64_t& _associationKeyCount)
{
    m_associationKeyCount = _associationKeyCount;
    m_associationKeyCountHasBeenSet = true;
}

bool BudgetInfo::AssociationKeyCountHasBeenSet() const
{
    return m_associationKeyCountHasBeenSet;
}

uint64_t BudgetInfo::GetAssociationModelRouterCount() const
{
    return m_associationModelRouterCount;
}

void BudgetInfo::SetAssociationModelRouterCount(const uint64_t& _associationModelRouterCount)
{
    m_associationModelRouterCount = _associationModelRouterCount;
    m_associationModelRouterCountHasBeenSet = true;
}

bool BudgetInfo::AssociationModelRouterCountHasBeenSet() const
{
    return m_associationModelRouterCountHasBeenSet;
}

uint64_t BudgetInfo::GetAssociationUserGroupCount() const
{
    return m_associationUserGroupCount;
}

void BudgetInfo::SetAssociationUserGroupCount(const uint64_t& _associationUserGroupCount)
{
    m_associationUserGroupCount = _associationUserGroupCount;
    m_associationUserGroupCountHasBeenSet = true;
}

bool BudgetInfo::AssociationUserGroupCountHasBeenSet() const
{
    return m_associationUserGroupCountHasBeenSet;
}

vector<BudgetConfig> BudgetInfo::GetBudgetConfigs() const
{
    return m_budgetConfigs;
}

void BudgetInfo::SetBudgetConfigs(const vector<BudgetConfig>& _budgetConfigs)
{
    m_budgetConfigs = _budgetConfigs;
    m_budgetConfigsHasBeenSet = true;
}

bool BudgetInfo::BudgetConfigsHasBeenSet() const
{
    return m_budgetConfigsHasBeenSet;
}

string BudgetInfo::GetBudgetId() const
{
    return m_budgetId;
}

void BudgetInfo::SetBudgetId(const string& _budgetId)
{
    m_budgetId = _budgetId;
    m_budgetIdHasBeenSet = true;
}

bool BudgetInfo::BudgetIdHasBeenSet() const
{
    return m_budgetIdHasBeenSet;
}

string BudgetInfo::GetBudgetName() const
{
    return m_budgetName;
}

void BudgetInfo::SetBudgetName(const string& _budgetName)
{
    m_budgetName = _budgetName;
    m_budgetNameHasBeenSet = true;
}

bool BudgetInfo::BudgetNameHasBeenSet() const
{
    return m_budgetNameHasBeenSet;
}

string BudgetInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void BudgetInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool BudgetInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string BudgetInfo::GetModifiedTime() const
{
    return m_modifiedTime;
}

void BudgetInfo::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool BudgetInfo::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

RateLimitConfigForBudget BudgetInfo::GetRateLimitConfig() const
{
    return m_rateLimitConfig;
}

void BudgetInfo::SetRateLimitConfig(const RateLimitConfigForBudget& _rateLimitConfig)
{
    m_rateLimitConfig = _rateLimitConfig;
    m_rateLimitConfigHasBeenSet = true;
}

bool BudgetInfo::RateLimitConfigHasBeenSet() const
{
    return m_rateLimitConfigHasBeenSet;
}

string BudgetInfo::GetStatus() const
{
    return m_status;
}

void BudgetInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BudgetInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

