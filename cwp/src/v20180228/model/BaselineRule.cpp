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

#include <tencentcloud/cwp/v20180228/model/BaselineRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineRule::BaselineRule() :
    m_ruleNameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_ruleDescHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_hostIdsHasBeenSet(false),
    m_hostIpsHasBeenSet(false)
{
}

CoreInternalOutcome BaselineRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRule.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRule.RuleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = value["RuleType"].GetInt64();
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRule.CategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetInt64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("RuleDesc") && !value["RuleDesc"].IsNull())
    {
        if (!value["RuleDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRule.RuleDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleDesc = string(value["RuleDesc"].GetString());
        m_ruleDescHasBeenSet = true;
    }

    if (value.HasMember("HostCount") && !value["HostCount"].IsNull())
    {
        if (!value["HostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRule.HostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = value["HostCount"].GetInt64();
        m_hostCountHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineRule.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Item item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRule.AssetType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = value["AssetType"].GetInt64();
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("HostIds") && !value["HostIds"].IsNull())
    {
        if (!value["HostIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineRule.HostIds` is not array type"));

        const rapidjson::Value &tmpValue = value["HostIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hostIds.push_back((*itr).GetString());
        }
        m_hostIdsHasBeenSet = true;
    }

    if (value.HasMember("HostIps") && !value["HostIps"].IsNull())
    {
        if (!value["HostIps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineRule.HostIps` is not array type"));

        const rapidjson::Value &tmpValue = value["HostIps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hostIps.push_back((*itr).GetString());
        }
        m_hostIpsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleType, allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_ruleDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetType, allocator);
    }

    if (m_hostIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostIds.begin(); itr != m_hostIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hostIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostIps.begin(); itr != m_hostIps.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string BaselineRule::GetRuleName() const
{
    return m_ruleName;
}

void BaselineRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool BaselineRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t BaselineRule::GetRuleId() const
{
    return m_ruleId;
}

void BaselineRule::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool BaselineRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

int64_t BaselineRule::GetRuleType() const
{
    return m_ruleType;
}

void BaselineRule::SetRuleType(const int64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool BaselineRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

int64_t BaselineRule::GetCategoryId() const
{
    return m_categoryId;
}

void BaselineRule::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool BaselineRule::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string BaselineRule::GetRuleDesc() const
{
    return m_ruleDesc;
}

void BaselineRule::SetRuleDesc(const string& _ruleDesc)
{
    m_ruleDesc = _ruleDesc;
    m_ruleDescHasBeenSet = true;
}

bool BaselineRule::RuleDescHasBeenSet() const
{
    return m_ruleDescHasBeenSet;
}

int64_t BaselineRule::GetHostCount() const
{
    return m_hostCount;
}

void BaselineRule::SetHostCount(const int64_t& _hostCount)
{
    m_hostCount = _hostCount;
    m_hostCountHasBeenSet = true;
}

bool BaselineRule::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

vector<Item> BaselineRule::GetItems() const
{
    return m_items;
}

void BaselineRule::SetItems(const vector<Item>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool BaselineRule::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

int64_t BaselineRule::GetAssetType() const
{
    return m_assetType;
}

void BaselineRule::SetAssetType(const int64_t& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool BaselineRule::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

vector<string> BaselineRule::GetHostIds() const
{
    return m_hostIds;
}

void BaselineRule::SetHostIds(const vector<string>& _hostIds)
{
    m_hostIds = _hostIds;
    m_hostIdsHasBeenSet = true;
}

bool BaselineRule::HostIdsHasBeenSet() const
{
    return m_hostIdsHasBeenSet;
}

vector<string> BaselineRule::GetHostIps() const
{
    return m_hostIps;
}

void BaselineRule::SetHostIps(const vector<string>& _hostIps)
{
    m_hostIps = _hostIps;
    m_hostIpsHasBeenSet = true;
}

bool BaselineRule::HostIpsHasBeenSet() const
{
    return m_hostIpsHasBeenSet;
}

