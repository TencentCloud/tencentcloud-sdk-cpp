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

#include <tencentcloud/csip/v20221121/model/CreateDspmAuditFilterStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateDspmAuditFilterStrategyRequest::CreateDspmAuditFilterStrategyRequest() :
    m_nameHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_isEnabledHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

string CreateDspmAuditFilterStrategyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEnabled, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDspmAuditFilterStrategyRequest::GetName() const
{
    return m_name;
}

void CreateDspmAuditFilterStrategyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDspmAuditFilterStrategyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateDspmAuditFilterStrategyRequest::GetRule() const
{
    return m_rule;
}

void CreateDspmAuditFilterStrategyRequest::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool CreateDspmAuditFilterStrategyRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

int64_t CreateDspmAuditFilterStrategyRequest::GetIsEnabled() const
{
    return m_isEnabled;
}

void CreateDspmAuditFilterStrategyRequest::SetIsEnabled(const int64_t& _isEnabled)
{
    m_isEnabled = _isEnabled;
    m_isEnabledHasBeenSet = true;
}

bool CreateDspmAuditFilterStrategyRequest::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

string CreateDspmAuditFilterStrategyRequest::GetDescription() const
{
    return m_description;
}

void CreateDspmAuditFilterStrategyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateDspmAuditFilterStrategyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateDspmAuditFilterStrategyRequest::GetRemark() const
{
    return m_remark;
}

void CreateDspmAuditFilterStrategyRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateDspmAuditFilterStrategyRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<string> CreateDspmAuditFilterStrategyRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateDspmAuditFilterStrategyRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateDspmAuditFilterStrategyRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}


