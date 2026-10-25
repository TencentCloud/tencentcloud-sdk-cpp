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

#include <tencentcloud/databuddy/v20260715/model/UpdateViewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

UpdateViewRequest::UpdateViewRequest() :
    m_catalogNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_newNameHasBeenSet(false),
    m_newCommentHasBeenSet(false)
{
}

string UpdateViewRequest::ToJsonString() const
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

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_newNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newName.c_str(), allocator).Move(), allocator);
    }

    if (m_newCommentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewComment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newComment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateViewRequest::GetCatalogName() const
{
    return m_catalogName;
}

void UpdateViewRequest::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool UpdateViewRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

string UpdateViewRequest::GetSchemaName() const
{
    return m_schemaName;
}

void UpdateViewRequest::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool UpdateViewRequest::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string UpdateViewRequest::GetViewName() const
{
    return m_viewName;
}

void UpdateViewRequest::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool UpdateViewRequest::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

string UpdateViewRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void UpdateViewRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool UpdateViewRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string UpdateViewRequest::GetNewName() const
{
    return m_newName;
}

void UpdateViewRequest::SetNewName(const string& _newName)
{
    m_newName = _newName;
    m_newNameHasBeenSet = true;
}

bool UpdateViewRequest::NewNameHasBeenSet() const
{
    return m_newNameHasBeenSet;
}

string UpdateViewRequest::GetNewComment() const
{
    return m_newComment;
}

void UpdateViewRequest::SetNewComment(const string& _newComment)
{
    m_newComment = _newComment;
    m_newCommentHasBeenSet = true;
}

bool UpdateViewRequest::NewCommentHasBeenSet() const
{
    return m_newCommentHasBeenSet;
}


