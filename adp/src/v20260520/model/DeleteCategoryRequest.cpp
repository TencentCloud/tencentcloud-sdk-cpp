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

#include <tencentcloud/adp/v20260520/model/DeleteCategoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DeleteCategoryRequest::DeleteCategoryRequest() :
    m_categoryIdHasBeenSet(false),
    m_categoryTypeHasBeenSet(false),
    m_kbIdHasBeenSet(false)
{
}

string DeleteCategoryRequest::ToJsonString() const
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

    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kbId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteCategoryRequest::GetCategoryId() const
{
    return m_categoryId;
}

void DeleteCategoryRequest::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool DeleteCategoryRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

int64_t DeleteCategoryRequest::GetCategoryType() const
{
    return m_categoryType;
}

void DeleteCategoryRequest::SetCategoryType(const int64_t& _categoryType)
{
    m_categoryType = _categoryType;
    m_categoryTypeHasBeenSet = true;
}

bool DeleteCategoryRequest::CategoryTypeHasBeenSet() const
{
    return m_categoryTypeHasBeenSet;
}

string DeleteCategoryRequest::GetKbId() const
{
    return m_kbId;
}

void DeleteCategoryRequest::SetKbId(const string& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool DeleteCategoryRequest::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}


