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

#include <tencentcloud/dsgc/v20190723/model/CreateDSPACategoryRelationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

CreateDSPACategoryRelationRequest::CreateDSPACategoryRelationRequest() :
    m_dspaIdHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_parentCategoryIdHasBeenSet(false),
    m_complianceIdHasBeenSet(false)
{
}

string CreateDSPACategoryRelationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
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

    if (m_complianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_complianceId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDSPACategoryRelationRequest::GetDspaId() const
{
    return m_dspaId;
}

void CreateDSPACategoryRelationRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool CreateDSPACategoryRelationRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

uint64_t CreateDSPACategoryRelationRequest::GetCategoryId() const
{
    return m_categoryId;
}

void CreateDSPACategoryRelationRequest::SetCategoryId(const uint64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool CreateDSPACategoryRelationRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

int64_t CreateDSPACategoryRelationRequest::GetParentCategoryId() const
{
    return m_parentCategoryId;
}

void CreateDSPACategoryRelationRequest::SetParentCategoryId(const int64_t& _parentCategoryId)
{
    m_parentCategoryId = _parentCategoryId;
    m_parentCategoryIdHasBeenSet = true;
}

bool CreateDSPACategoryRelationRequest::ParentCategoryIdHasBeenSet() const
{
    return m_parentCategoryIdHasBeenSet;
}

uint64_t CreateDSPACategoryRelationRequest::GetComplianceId() const
{
    return m_complianceId;
}

void CreateDSPACategoryRelationRequest::SetComplianceId(const uint64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool CreateDSPACategoryRelationRequest::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}


