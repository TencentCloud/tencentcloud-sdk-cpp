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

#include <tencentcloud/adp/v20260520/model/ModifyCategoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModifyCategoryRequest::ModifyCategoryRequest() :
    m_categoryIdHasBeenSet(false),
    m_categoryTypeHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_kbIdHasBeenSet(false),
    m_updateMaskHasBeenSet(false)
{
}

string ModifyCategoryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_categoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_categoryType, allocator);
    }

    if (m_fieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fields.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kbId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateMaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateMask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_updateMask.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCategoryRequest::GetCategoryId() const
{
    return m_categoryId;
}

void ModifyCategoryRequest::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool ModifyCategoryRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

int64_t ModifyCategoryRequest::GetCategoryType() const
{
    return m_categoryType;
}

void ModifyCategoryRequest::SetCategoryType(const int64_t& _categoryType)
{
    m_categoryType = _categoryType;
    m_categoryTypeHasBeenSet = true;
}

bool ModifyCategoryRequest::CategoryTypeHasBeenSet() const
{
    return m_categoryTypeHasBeenSet;
}

CategoryModifyFields ModifyCategoryRequest::GetFields() const
{
    return m_fields;
}

void ModifyCategoryRequest::SetFields(const CategoryModifyFields& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool ModifyCategoryRequest::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}

string ModifyCategoryRequest::GetKbId() const
{
    return m_kbId;
}

void ModifyCategoryRequest::SetKbId(const string& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool ModifyCategoryRequest::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

FieldMask ModifyCategoryRequest::GetUpdateMask() const
{
    return m_updateMask;
}

void ModifyCategoryRequest::SetUpdateMask(const FieldMask& _updateMask)
{
    m_updateMask = _updateMask;
    m_updateMaskHasBeenSet = true;
}

bool ModifyCategoryRequest::UpdateMaskHasBeenSet() const
{
    return m_updateMaskHasBeenSet;
}


