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

#include <tencentcloud/dsgc/v20190723/model/ModifyDSPACategoryRelationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ModifyDSPACategoryRelationRequest::ModifyDSPACategoryRelationRequest() :
    m_dspaIdHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_mergedCategoryIdHasBeenSet(false),
    m_complianceIdHasBeenSet(false)
{
}

string ModifyDSPACategoryRelationRequest::ToJsonString() const
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

    if (m_mergedCategoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MergedCategoryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mergedCategoryId, allocator);
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


string ModifyDSPACategoryRelationRequest::GetDspaId() const
{
    return m_dspaId;
}

void ModifyDSPACategoryRelationRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool ModifyDSPACategoryRelationRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

uint64_t ModifyDSPACategoryRelationRequest::GetCategoryId() const
{
    return m_categoryId;
}

void ModifyDSPACategoryRelationRequest::SetCategoryId(const uint64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool ModifyDSPACategoryRelationRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

int64_t ModifyDSPACategoryRelationRequest::GetMergedCategoryId() const
{
    return m_mergedCategoryId;
}

void ModifyDSPACategoryRelationRequest::SetMergedCategoryId(const int64_t& _mergedCategoryId)
{
    m_mergedCategoryId = _mergedCategoryId;
    m_mergedCategoryIdHasBeenSet = true;
}

bool ModifyDSPACategoryRelationRequest::MergedCategoryIdHasBeenSet() const
{
    return m_mergedCategoryIdHasBeenSet;
}

uint64_t ModifyDSPACategoryRelationRequest::GetComplianceId() const
{
    return m_complianceId;
}

void ModifyDSPACategoryRelationRequest::SetComplianceId(const uint64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool ModifyDSPACategoryRelationRequest::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}


