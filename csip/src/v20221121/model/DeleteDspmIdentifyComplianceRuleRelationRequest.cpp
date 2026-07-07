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

#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyComplianceRuleRelationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DeleteDspmIdentifyComplianceRuleRelationRequest::DeleteDspmIdentifyComplianceRuleRelationRequest() :
    m_complianceIdHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_ruleIdsHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

string DeleteDspmIdentifyComplianceRuleRelationRequest::ToJsonString() const
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

    if (m_ruleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleIds.begin(); itr != m_ruleIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
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


uint64_t DeleteDspmIdentifyComplianceRuleRelationRequest::GetComplianceId() const
{
    return m_complianceId;
}

void DeleteDspmIdentifyComplianceRuleRelationRequest::SetComplianceId(const uint64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool DeleteDspmIdentifyComplianceRuleRelationRequest::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

int64_t DeleteDspmIdentifyComplianceRuleRelationRequest::GetCategoryId() const
{
    return m_categoryId;
}

void DeleteDspmIdentifyComplianceRuleRelationRequest::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool DeleteDspmIdentifyComplianceRuleRelationRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

vector<uint64_t> DeleteDspmIdentifyComplianceRuleRelationRequest::GetRuleIds() const
{
    return m_ruleIds;
}

void DeleteDspmIdentifyComplianceRuleRelationRequest::SetRuleIds(const vector<uint64_t>& _ruleIds)
{
    m_ruleIds = _ruleIds;
    m_ruleIdsHasBeenSet = true;
}

bool DeleteDspmIdentifyComplianceRuleRelationRequest::RuleIdsHasBeenSet() const
{
    return m_ruleIdsHasBeenSet;
}

vector<string> DeleteDspmIdentifyComplianceRuleRelationRequest::GetMemberId() const
{
    return m_memberId;
}

void DeleteDspmIdentifyComplianceRuleRelationRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DeleteDspmIdentifyComplianceRuleRelationRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}


