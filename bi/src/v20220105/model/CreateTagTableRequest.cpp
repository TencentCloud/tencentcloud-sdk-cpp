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

#include <tencentcloud/bi/v20220105/model/CreateTagTableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

CreateTagTableRequest::CreateTagTableRequest() :
    m_nameHasBeenSet(false),
    m_autoImportProjectIdHasBeenSet(false),
    m_autoImportTableIdHasBeenSet(false),
    m_autoImportUinFieldHasBeenSet(false)
{
}

string CreateTagTableRequest::ToJsonString() const
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

    if (m_autoImportProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoImportProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoImportProjectId, allocator);
    }

    if (m_autoImportTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoImportTableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoImportTableId, allocator);
    }

    if (m_autoImportUinFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoImportUinField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoImportUinField.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTagTableRequest::GetName() const
{
    return m_name;
}

void CreateTagTableRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateTagTableRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateTagTableRequest::GetAutoImportProjectId() const
{
    return m_autoImportProjectId;
}

void CreateTagTableRequest::SetAutoImportProjectId(const int64_t& _autoImportProjectId)
{
    m_autoImportProjectId = _autoImportProjectId;
    m_autoImportProjectIdHasBeenSet = true;
}

bool CreateTagTableRequest::AutoImportProjectIdHasBeenSet() const
{
    return m_autoImportProjectIdHasBeenSet;
}

int64_t CreateTagTableRequest::GetAutoImportTableId() const
{
    return m_autoImportTableId;
}

void CreateTagTableRequest::SetAutoImportTableId(const int64_t& _autoImportTableId)
{
    m_autoImportTableId = _autoImportTableId;
    m_autoImportTableIdHasBeenSet = true;
}

bool CreateTagTableRequest::AutoImportTableIdHasBeenSet() const
{
    return m_autoImportTableIdHasBeenSet;
}

string CreateTagTableRequest::GetAutoImportUinField() const
{
    return m_autoImportUinField;
}

void CreateTagTableRequest::SetAutoImportUinField(const string& _autoImportUinField)
{
    m_autoImportUinField = _autoImportUinField;
    m_autoImportUinFieldHasBeenSet = true;
}

bool CreateTagTableRequest::AutoImportUinFieldHasBeenSet() const
{
    return m_autoImportUinFieldHasBeenSet;
}


