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

#include <tencentcloud/databuddy/v20260715/model/CreateSchemaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

CreateSchemaRequest::CreateSchemaRequest() :
    m_catalogNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_connectionIdHasBeenSet(false)
{
}

string CreateSchemaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSchemaRequest::GetCatalogName() const
{
    return m_catalogName;
}

void CreateSchemaRequest::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool CreateSchemaRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

string CreateSchemaRequest::GetName() const
{
    return m_name;
}

void CreateSchemaRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateSchemaRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateSchemaRequest::GetComment() const
{
    return m_comment;
}

void CreateSchemaRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateSchemaRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string CreateSchemaRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void CreateSchemaRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool CreateSchemaRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string CreateSchemaRequest::GetConnectionId() const
{
    return m_connectionId;
}

void CreateSchemaRequest::SetConnectionId(const string& _connectionId)
{
    m_connectionId = _connectionId;
    m_connectionIdHasBeenSet = true;
}

bool CreateSchemaRequest::ConnectionIdHasBeenSet() const
{
    return m_connectionIdHasBeenSet;
}


