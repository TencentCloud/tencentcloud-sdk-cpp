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

#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceRuleRelationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateDspmIdentifyComplianceRuleRelationRequest::CreateDspmIdentifyComplianceRuleRelationRequest() :
    m_complianceIdHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

string CreateDspmIdentifyComplianceRuleRelationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_complianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_complianceId, allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


uint64_t CreateDspmIdentifyComplianceRuleRelationRequest::GetComplianceId() const
{
    return m_complianceId;
}

void CreateDspmIdentifyComplianceRuleRelationRequest::SetComplianceId(const uint64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool CreateDspmIdentifyComplianceRuleRelationRequest::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

int64_t CreateDspmIdentifyComplianceRuleRelationRequest::GetCategoryId() const
{
    return m_categoryId;
}

void CreateDspmIdentifyComplianceRuleRelationRequest::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool CreateDspmIdentifyComplianceRuleRelationRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

vector<DspmIdentifyCategoryRuleRelateItem> CreateDspmIdentifyComplianceRuleRelationRequest::GetRules() const
{
    return m_rules;
}

void CreateDspmIdentifyComplianceRuleRelationRequest::SetRules(const vector<DspmIdentifyCategoryRuleRelateItem>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool CreateDspmIdentifyComplianceRuleRelationRequest::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

vector<string> CreateDspmIdentifyComplianceRuleRelationRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateDspmIdentifyComplianceRuleRelationRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateDspmIdentifyComplianceRuleRelationRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}


