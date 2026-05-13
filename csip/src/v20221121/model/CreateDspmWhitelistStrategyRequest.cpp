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

#include <tencentcloud/csip/v20221121/model/CreateDspmWhitelistStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateDspmWhitelistStrategyRequest::CreateDspmWhitelistStrategyRequest() :
    m_strategyTypeHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_riskIdHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreateDspmWhitelistStrategyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_strategyType.c_str(), allocator).Move(), allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rule.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_riskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_riskId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDspmWhitelistStrategyRequest::GetStrategyType() const
{
    return m_strategyType;
}

void CreateDspmWhitelistStrategyRequest::SetStrategyType(const string& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool CreateDspmWhitelistStrategyRequest::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

vector<string> CreateDspmWhitelistStrategyRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateDspmWhitelistStrategyRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateDspmWhitelistStrategyRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string CreateDspmWhitelistStrategyRequest::GetName() const
{
    return m_name;
}

void CreateDspmWhitelistStrategyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDspmWhitelistStrategyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateDspmWhitelistStrategyRequest::GetRule() const
{
    return m_rule;
}

void CreateDspmWhitelistStrategyRequest::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool CreateDspmWhitelistStrategyRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

string CreateDspmWhitelistStrategyRequest::GetAssetId() const
{
    return m_assetId;
}

void CreateDspmWhitelistStrategyRequest::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool CreateDspmWhitelistStrategyRequest::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string CreateDspmWhitelistStrategyRequest::GetAccount() const
{
    return m_account;
}

void CreateDspmWhitelistStrategyRequest::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool CreateDspmWhitelistStrategyRequest::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string CreateDspmWhitelistStrategyRequest::GetHost() const
{
    return m_host;
}

void CreateDspmWhitelistStrategyRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool CreateDspmWhitelistStrategyRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string CreateDspmWhitelistStrategyRequest::GetRiskId() const
{
    return m_riskId;
}

void CreateDspmWhitelistStrategyRequest::SetRiskId(const string& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool CreateDspmWhitelistStrategyRequest::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}

string CreateDspmWhitelistStrategyRequest::GetRemark() const
{
    return m_remark;
}

void CreateDspmWhitelistStrategyRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateDspmWhitelistStrategyRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


