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

#include <tencentcloud/adp/v20260520/model/ModifyMsgRecordCategoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModifyMsgRecordCategoryRequest::ModifyMsgRecordCategoryRequest() :
    m_appIdHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

string ModifyMsgRecordCategoryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_categoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMsgRecordCategoryRequest::GetAppId() const
{
    return m_appId;
}

void ModifyMsgRecordCategoryRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ModifyMsgRecordCategoryRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ModifyMsgRecordCategoryRequest::GetCategoryId() const
{
    return m_categoryId;
}

void ModifyMsgRecordCategoryRequest::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool ModifyMsgRecordCategoryRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string ModifyMsgRecordCategoryRequest::GetName() const
{
    return m_name;
}

void ModifyMsgRecordCategoryRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyMsgRecordCategoryRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


