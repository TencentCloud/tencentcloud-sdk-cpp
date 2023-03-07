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

#include <tencentcloud/cwp/v20180228/model/ModifyBaselineRuleIgnoreRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyBaselineRuleIgnoreRequest::ModifyBaselineRuleIgnoreRequest() :
    m_ruleNameHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_itemIdsHasBeenSet(false),
    m_hostIdsHasBeenSet(false),
    m_hostIpsHasBeenSet(false),
    m_selectAllHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string ModifyBaselineRuleIgnoreRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_assetType, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_itemIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_itemIds.begin(); itr != m_itemIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_hostIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostIds.begin(); itr != m_hostIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hostIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostIps.begin(); itr != m_hostIps.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_selectAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_selectAll, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBaselineRuleIgnoreRequest::GetRuleName() const
{
    return m_ruleName;
}

void ModifyBaselineRuleIgnoreRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ModifyBaselineRuleIgnoreRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t ModifyBaselineRuleIgnoreRequest::GetAssetType() const
{
    return m_assetType;
}

void ModifyBaselineRuleIgnoreRequest::SetAssetType(const int64_t& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool ModifyBaselineRuleIgnoreRequest::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

int64_t ModifyBaselineRuleIgnoreRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyBaselineRuleIgnoreRequest::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyBaselineRuleIgnoreRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

vector<int64_t> ModifyBaselineRuleIgnoreRequest::GetItemIds() const
{
    return m_itemIds;
}

void ModifyBaselineRuleIgnoreRequest::SetItemIds(const vector<int64_t>& _itemIds)
{
    m_itemIds = _itemIds;
    m_itemIdsHasBeenSet = true;
}

bool ModifyBaselineRuleIgnoreRequest::ItemIdsHasBeenSet() const
{
    return m_itemIdsHasBeenSet;
}

vector<string> ModifyBaselineRuleIgnoreRequest::GetHostIds() const
{
    return m_hostIds;
}

void ModifyBaselineRuleIgnoreRequest::SetHostIds(const vector<string>& _hostIds)
{
    m_hostIds = _hostIds;
    m_hostIdsHasBeenSet = true;
}

bool ModifyBaselineRuleIgnoreRequest::HostIdsHasBeenSet() const
{
    return m_hostIdsHasBeenSet;
}

vector<string> ModifyBaselineRuleIgnoreRequest::GetHostIps() const
{
    return m_hostIps;
}

void ModifyBaselineRuleIgnoreRequest::SetHostIps(const vector<string>& _hostIps)
{
    m_hostIps = _hostIps;
    m_hostIpsHasBeenSet = true;
}

bool ModifyBaselineRuleIgnoreRequest::HostIpsHasBeenSet() const
{
    return m_hostIpsHasBeenSet;
}

int64_t ModifyBaselineRuleIgnoreRequest::GetSelectAll() const
{
    return m_selectAll;
}

void ModifyBaselineRuleIgnoreRequest::SetSelectAll(const int64_t& _selectAll)
{
    m_selectAll = _selectAll;
    m_selectAllHasBeenSet = true;
}

bool ModifyBaselineRuleIgnoreRequest::SelectAllHasBeenSet() const
{
    return m_selectAllHasBeenSet;
}

vector<Filter> ModifyBaselineRuleIgnoreRequest::GetFilters() const
{
    return m_filters;
}

void ModifyBaselineRuleIgnoreRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ModifyBaselineRuleIgnoreRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


