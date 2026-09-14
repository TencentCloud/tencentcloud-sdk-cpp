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

#include <tencentcloud/adp/v20260520/model/CreateCategoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CreateCategoryRequest::CreateCategoryRequest() :
    m_categoryTypeHasBeenSet(false),
    m_kbIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parentCategoryIdHasBeenSet(false)
{
}

string CreateCategoryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_categoryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_categoryType, allocator);
    }

    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kbId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_parentCategoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentCategoryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentCategoryId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateCategoryRequest::GetCategoryType() const
{
    return m_categoryType;
}

void CreateCategoryRequest::SetCategoryType(const int64_t& _categoryType)
{
    m_categoryType = _categoryType;
    m_categoryTypeHasBeenSet = true;
}

bool CreateCategoryRequest::CategoryTypeHasBeenSet() const
{
    return m_categoryTypeHasBeenSet;
}

string CreateCategoryRequest::GetKbId() const
{
    return m_kbId;
}

void CreateCategoryRequest::SetKbId(const string& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool CreateCategoryRequest::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

string CreateCategoryRequest::GetName() const
{
    return m_name;
}

void CreateCategoryRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCategoryRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCategoryRequest::GetParentCategoryId() const
{
    return m_parentCategoryId;
}

void CreateCategoryRequest::SetParentCategoryId(const string& _parentCategoryId)
{
    m_parentCategoryId = _parentCategoryId;
    m_parentCategoryIdHasBeenSet = true;
}

bool CreateCategoryRequest::ParentCategoryIdHasBeenSet() const
{
    return m_parentCategoryIdHasBeenSet;
}


