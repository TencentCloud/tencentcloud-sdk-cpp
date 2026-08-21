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

#include <tencentcloud/adp/v20260520/model/CreateMsgRecordCategoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CreateMsgRecordCategoryRequest::CreateMsgRecordCategoryRequest() :
    m_nameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_parentIdHasBeenSet(false)
{
}

string CreateMsgRecordCategoryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMsgRecordCategoryRequest::GetName() const
{
    return m_name;
}

void CreateMsgRecordCategoryRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateMsgRecordCategoryRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateMsgRecordCategoryRequest::GetAppId() const
{
    return m_appId;
}

void CreateMsgRecordCategoryRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CreateMsgRecordCategoryRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CreateMsgRecordCategoryRequest::GetParentId() const
{
    return m_parentId;
}

void CreateMsgRecordCategoryRequest::SetParentId(const string& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool CreateMsgRecordCategoryRequest::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}


