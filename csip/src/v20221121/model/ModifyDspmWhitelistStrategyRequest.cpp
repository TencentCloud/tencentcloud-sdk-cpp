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

#include <tencentcloud/csip/v20221121/model/ModifyDspmWhitelistStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyDspmWhitelistStrategyRequest::ModifyDspmWhitelistStrategyRequest() :
    m_memberIdHasBeenSet(false),
    m_whitelistStrategyIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string ModifyDspmWhitelistStrategyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_whitelistStrategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhitelistStrategyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_whitelistStrategyId.c_str(), allocator).Move(), allocator);
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


vector<string> ModifyDspmWhitelistStrategyRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyDspmWhitelistStrategyRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyDspmWhitelistStrategyRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string ModifyDspmWhitelistStrategyRequest::GetWhitelistStrategyId() const
{
    return m_whitelistStrategyId;
}

void ModifyDspmWhitelistStrategyRequest::SetWhitelistStrategyId(const string& _whitelistStrategyId)
{
    m_whitelistStrategyId = _whitelistStrategyId;
    m_whitelistStrategyIdHasBeenSet = true;
}

bool ModifyDspmWhitelistStrategyRequest::WhitelistStrategyIdHasBeenSet() const
{
    return m_whitelistStrategyIdHasBeenSet;
}

string ModifyDspmWhitelistStrategyRequest::GetName() const
{
    return m_name;
}

void ModifyDspmWhitelistStrategyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyDspmWhitelistStrategyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyDspmWhitelistStrategyRequest::GetRule() const
{
    return m_rule;
}

void ModifyDspmWhitelistStrategyRequest::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool ModifyDspmWhitelistStrategyRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

string ModifyDspmWhitelistStrategyRequest::GetRemark() const
{
    return m_remark;
}

void ModifyDspmWhitelistStrategyRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyDspmWhitelistStrategyRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


