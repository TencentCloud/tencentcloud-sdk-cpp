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

#include <tencentcloud/config/v20220802/model/ListConfigRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

ListConfigRulesRequest::ListConfigRulesRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_complianceResultHasBeenSet(false),
    m_ruleNameHasBeenSet(false)
{
}

string ListConfigRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderType.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskLevel.begin(); itr != m_riskLevel.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceResult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_complianceResult.begin(); itr != m_complianceResult.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ListConfigRulesRequest::GetLimit() const
{
    return m_limit;
}

void ListConfigRulesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListConfigRulesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t ListConfigRulesRequest::GetOffset() const
{
    return m_offset;
}

void ListConfigRulesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListConfigRulesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string ListConfigRulesRequest::GetOrderType() const
{
    return m_orderType;
}

void ListConfigRulesRequest::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool ListConfigRulesRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

vector<uint64_t> ListConfigRulesRequest::GetRiskLevel() const
{
    return m_riskLevel;
}

void ListConfigRulesRequest::SetRiskLevel(const vector<uint64_t>& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool ListConfigRulesRequest::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string ListConfigRulesRequest::GetState() const
{
    return m_state;
}

void ListConfigRulesRequest::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool ListConfigRulesRequest::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

vector<string> ListConfigRulesRequest::GetComplianceResult() const
{
    return m_complianceResult;
}

void ListConfigRulesRequest::SetComplianceResult(const vector<string>& _complianceResult)
{
    m_complianceResult = _complianceResult;
    m_complianceResultHasBeenSet = true;
}

bool ListConfigRulesRequest::ComplianceResultHasBeenSet() const
{
    return m_complianceResultHasBeenSet;
}

string ListConfigRulesRequest::GetRuleName() const
{
    return m_ruleName;
}

void ListConfigRulesRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ListConfigRulesRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}


