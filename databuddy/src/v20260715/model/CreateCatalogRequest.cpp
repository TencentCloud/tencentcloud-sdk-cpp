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

#include <tencentcloud/databuddy/v20260715/model/CreateCatalogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

CreateCatalogRequest::CreateCatalogRequest() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_catalogSourceHasBeenSet(false)
{
}

string CreateCatalogRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectionId.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalogSource.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCatalogRequest::GetName() const
{
    return m_name;
}

void CreateCatalogRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCatalogRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCatalogRequest::GetType() const
{
    return m_type;
}

void CreateCatalogRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateCatalogRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateCatalogRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void CreateCatalogRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool CreateCatalogRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string CreateCatalogRequest::GetComment() const
{
    return m_comment;
}

void CreateCatalogRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateCatalogRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string CreateCatalogRequest::GetConnectionId() const
{
    return m_connectionId;
}

void CreateCatalogRequest::SetConnectionId(const string& _connectionId)
{
    m_connectionId = _connectionId;
    m_connectionIdHasBeenSet = true;
}

bool CreateCatalogRequest::ConnectionIdHasBeenSet() const
{
    return m_connectionIdHasBeenSet;
}

string CreateCatalogRequest::GetCatalogSource() const
{
    return m_catalogSource;
}

void CreateCatalogRequest::SetCatalogSource(const string& _catalogSource)
{
    m_catalogSource = _catalogSource;
    m_catalogSourceHasBeenSet = true;
}

bool CreateCatalogRequest::CatalogSourceHasBeenSet() const
{
    return m_catalogSourceHasBeenSet;
}


