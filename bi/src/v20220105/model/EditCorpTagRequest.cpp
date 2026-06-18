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

#include <tencentcloud/bi/v20220105/model/EditCorpTagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

EditCorpTagRequest::EditCorpTagRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_importTypeHasBeenSet(false),
    m_autoImportTagTableIdHasBeenSet(false),
    m_autoImportFieldHasBeenSet(false),
    m_asyncRequestHasBeenSet(false),
    m_autoImportTagTableNameHasBeenSet(false),
    m_tranIdHasBeenSet(false)
{
}

string EditCorpTagRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_importTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_importType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoImportTagTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoImportTagTableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoImportTagTableId, allocator);
    }

    if (m_autoImportFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoImportField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoImportField.c_str(), allocator).Move(), allocator);
    }

    if (m_asyncRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_asyncRequest, allocator);
    }

    if (m_autoImportTagTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoImportTagTableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoImportTagTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tranIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tranId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t EditCorpTagRequest::GetId() const
{
    return m_id;
}

void EditCorpTagRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EditCorpTagRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string EditCorpTagRequest::GetName() const
{
    return m_name;
}

void EditCorpTagRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EditCorpTagRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string EditCorpTagRequest::GetImportType() const
{
    return m_importType;
}

void EditCorpTagRequest::SetImportType(const string& _importType)
{
    m_importType = _importType;
    m_importTypeHasBeenSet = true;
}

bool EditCorpTagRequest::ImportTypeHasBeenSet() const
{
    return m_importTypeHasBeenSet;
}

int64_t EditCorpTagRequest::GetAutoImportTagTableId() const
{
    return m_autoImportTagTableId;
}

void EditCorpTagRequest::SetAutoImportTagTableId(const int64_t& _autoImportTagTableId)
{
    m_autoImportTagTableId = _autoImportTagTableId;
    m_autoImportTagTableIdHasBeenSet = true;
}

bool EditCorpTagRequest::AutoImportTagTableIdHasBeenSet() const
{
    return m_autoImportTagTableIdHasBeenSet;
}

string EditCorpTagRequest::GetAutoImportField() const
{
    return m_autoImportField;
}

void EditCorpTagRequest::SetAutoImportField(const string& _autoImportField)
{
    m_autoImportField = _autoImportField;
    m_autoImportFieldHasBeenSet = true;
}

bool EditCorpTagRequest::AutoImportFieldHasBeenSet() const
{
    return m_autoImportFieldHasBeenSet;
}

bool EditCorpTagRequest::GetAsyncRequest() const
{
    return m_asyncRequest;
}

void EditCorpTagRequest::SetAsyncRequest(const bool& _asyncRequest)
{
    m_asyncRequest = _asyncRequest;
    m_asyncRequestHasBeenSet = true;
}

bool EditCorpTagRequest::AsyncRequestHasBeenSet() const
{
    return m_asyncRequestHasBeenSet;
}

string EditCorpTagRequest::GetAutoImportTagTableName() const
{
    return m_autoImportTagTableName;
}

void EditCorpTagRequest::SetAutoImportTagTableName(const string& _autoImportTagTableName)
{
    m_autoImportTagTableName = _autoImportTagTableName;
    m_autoImportTagTableNameHasBeenSet = true;
}

bool EditCorpTagRequest::AutoImportTagTableNameHasBeenSet() const
{
    return m_autoImportTagTableNameHasBeenSet;
}

string EditCorpTagRequest::GetTranId() const
{
    return m_tranId;
}

void EditCorpTagRequest::SetTranId(const string& _tranId)
{
    m_tranId = _tranId;
    m_tranIdHasBeenSet = true;
}

bool EditCorpTagRequest::TranIdHasBeenSet() const
{
    return m_tranIdHasBeenSet;
}


