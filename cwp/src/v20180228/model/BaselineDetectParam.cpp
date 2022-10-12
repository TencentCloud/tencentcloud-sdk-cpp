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

#include <tencentcloud/cwp/v20180228/model/BaselineDetectParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineDetectParam::BaselineDetectParam() :
    m_policyIdsHasBeenSet(false),
    m_ruleIdsHasBeenSet(false),
    m_itemIdsHasBeenSet(false),
    m_hostIdsHasBeenSet(false)
{
}

CoreInternalOutcome BaselineDetectParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyIds") && !value["PolicyIds"].IsNull())
    {
        if (!value["PolicyIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineDetectParam.PolicyIds` is not array type"));

        const rapidjson::Value &tmpValue = value["PolicyIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_policyIds.push_back((*itr).GetInt64());
        }
        m_policyIdsHasBeenSet = true;
    }

    if (value.HasMember("RuleIds") && !value["RuleIds"].IsNull())
    {
        if (!value["RuleIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineDetectParam.RuleIds` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleIds.push_back((*itr).GetInt64());
        }
        m_ruleIdsHasBeenSet = true;
    }

    if (value.HasMember("ItemIds") && !value["ItemIds"].IsNull())
    {
        if (!value["ItemIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineDetectParam.ItemIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ItemIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_itemIds.push_back((*itr).GetInt64());
        }
        m_itemIdsHasBeenSet = true;
    }

    if (value.HasMember("HostIds") && !value["HostIds"].IsNull())
    {
        if (!value["HostIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineDetectParam.HostIds` is not array type"));

        const rapidjson::Value &tmpValue = value["HostIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hostIds.push_back((*itr).GetString());
        }
        m_hostIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineDetectParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_policyIds.begin(); itr != m_policyIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_ruleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleIds.begin(); itr != m_ruleIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_itemIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_itemIds.begin(); itr != m_itemIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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

}


vector<int64_t> BaselineDetectParam::GetPolicyIds() const
{
    return m_policyIds;
}

void BaselineDetectParam::SetPolicyIds(const vector<int64_t>& _policyIds)
{
    m_policyIds = _policyIds;
    m_policyIdsHasBeenSet = true;
}

bool BaselineDetectParam::PolicyIdsHasBeenSet() const
{
    return m_policyIdsHasBeenSet;
}

vector<int64_t> BaselineDetectParam::GetRuleIds() const
{
    return m_ruleIds;
}

void BaselineDetectParam::SetRuleIds(const vector<int64_t>& _ruleIds)
{
    m_ruleIds = _ruleIds;
    m_ruleIdsHasBeenSet = true;
}

bool BaselineDetectParam::RuleIdsHasBeenSet() const
{
    return m_ruleIdsHasBeenSet;
}

vector<int64_t> BaselineDetectParam::GetItemIds() const
{
    return m_itemIds;
}

void BaselineDetectParam::SetItemIds(const vector<int64_t>& _itemIds)
{
    m_itemIds = _itemIds;
    m_itemIdsHasBeenSet = true;
}

bool BaselineDetectParam::ItemIdsHasBeenSet() const
{
    return m_itemIdsHasBeenSet;
}

vector<string> BaselineDetectParam::GetHostIds() const
{
    return m_hostIds;
}

void BaselineDetectParam::SetHostIds(const vector<string>& _hostIds)
{
    m_hostIds = _hostIds;
    m_hostIdsHasBeenSet = true;
}

bool BaselineDetectParam::HostIdsHasBeenSet() const
{
    return m_hostIdsHasBeenSet;
}

