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

#include <tencentcloud/ivld/v20210903/model/UpdateCustomCategoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

UpdateCustomCategoryRequest::UpdateCustomCategoryRequest() :
    m_categoryIdHasBeenSet(false),
    m_l1CategoryHasBeenSet(false),
    m_l2CategoryHasBeenSet(false)
{
}

string UpdateCustomCategoryRequest::ToJsonString() const
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

    if (m_l1CategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L1Category";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_l1Category.c_str(), allocator).Move(), allocator);
    }

    if (m_l2CategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L2Category";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_l2Category.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateCustomCategoryRequest::GetCategoryId() const
{
    return m_categoryId;
}

void UpdateCustomCategoryRequest::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool UpdateCustomCategoryRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string UpdateCustomCategoryRequest::GetL1Category() const
{
    return m_l1Category;
}

void UpdateCustomCategoryRequest::SetL1Category(const string& _l1Category)
{
    m_l1Category = _l1Category;
    m_l1CategoryHasBeenSet = true;
}

bool UpdateCustomCategoryRequest::L1CategoryHasBeenSet() const
{
    return m_l1CategoryHasBeenSet;
}

string UpdateCustomCategoryRequest::GetL2Category() const
{
    return m_l2Category;
}

void UpdateCustomCategoryRequest::SetL2Category(const string& _l2Category)
{
    m_l2Category = _l2Category;
    m_l2CategoryHasBeenSet = true;
}

bool UpdateCustomCategoryRequest::L2CategoryHasBeenSet() const
{
    return m_l2CategoryHasBeenSet;
}


