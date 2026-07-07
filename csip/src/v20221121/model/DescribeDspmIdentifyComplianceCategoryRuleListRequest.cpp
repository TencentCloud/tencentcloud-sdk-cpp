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

#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyComplianceCategoryRuleListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeDspmIdentifyComplianceCategoryRuleListRequest::DescribeDspmIdentifyComplianceCategoryRuleListRequest() :
    m_complianceIdHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

string DescribeDspmIdentifyComplianceCategoryRuleListRequest::ToJsonString() const
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

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeDspmIdentifyComplianceCategoryRuleListRequest::GetComplianceId() const
{
    return m_complianceId;
}

void DescribeDspmIdentifyComplianceCategoryRuleListRequest::SetComplianceId(const uint64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool DescribeDspmIdentifyComplianceCategoryRuleListRequest::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

int64_t DescribeDspmIdentifyComplianceCategoryRuleListRequest::GetCategoryId() const
{
    return m_categoryId;
}

void DescribeDspmIdentifyComplianceCategoryRuleListRequest::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool DescribeDspmIdentifyComplianceCategoryRuleListRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

vector<string> DescribeDspmIdentifyComplianceCategoryRuleListRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeDspmIdentifyComplianceCategoryRuleListRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeDspmIdentifyComplianceCategoryRuleListRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

Filter DescribeDspmIdentifyComplianceCategoryRuleListRequest::GetFilter() const
{
    return m_filter;
}

void DescribeDspmIdentifyComplianceCategoryRuleListRequest::SetFilter(const Filter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeDspmIdentifyComplianceCategoryRuleListRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}


