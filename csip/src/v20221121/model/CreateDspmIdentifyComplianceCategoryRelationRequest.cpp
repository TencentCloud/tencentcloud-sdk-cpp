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

#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceCategoryRelationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateDspmIdentifyComplianceCategoryRelationRequest::CreateDspmIdentifyComplianceCategoryRelationRequest() :
    m_complianceIdHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_parentCategoryIdHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

string CreateDspmIdentifyComplianceCategoryRelationRequest::ToJsonString() const
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

    if (m_parentCategoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentCategoryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_parentCategoryId, allocator);
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


uint64_t CreateDspmIdentifyComplianceCategoryRelationRequest::GetComplianceId() const
{
    return m_complianceId;
}

void CreateDspmIdentifyComplianceCategoryRelationRequest::SetComplianceId(const uint64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool CreateDspmIdentifyComplianceCategoryRelationRequest::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

int64_t CreateDspmIdentifyComplianceCategoryRelationRequest::GetCategoryId() const
{
    return m_categoryId;
}

void CreateDspmIdentifyComplianceCategoryRelationRequest::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool CreateDspmIdentifyComplianceCategoryRelationRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

int64_t CreateDspmIdentifyComplianceCategoryRelationRequest::GetParentCategoryId() const
{
    return m_parentCategoryId;
}

void CreateDspmIdentifyComplianceCategoryRelationRequest::SetParentCategoryId(const int64_t& _parentCategoryId)
{
    m_parentCategoryId = _parentCategoryId;
    m_parentCategoryIdHasBeenSet = true;
}

bool CreateDspmIdentifyComplianceCategoryRelationRequest::ParentCategoryIdHasBeenSet() const
{
    return m_parentCategoryIdHasBeenSet;
}

vector<string> CreateDspmIdentifyComplianceCategoryRelationRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateDspmIdentifyComplianceCategoryRelationRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateDspmIdentifyComplianceCategoryRelationRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}


