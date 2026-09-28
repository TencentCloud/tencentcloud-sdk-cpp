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

#include <tencentcloud/databuddy/v20260715/model/UpdateWorkspaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

UpdateWorkspaceRequest::UpdateWorkspaceRequest() :
    m_workspaceIdHasBeenSet(false),
    m_workspaceNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string UpdateWorkspaceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateWorkspaceRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void UpdateWorkspaceRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool UpdateWorkspaceRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string UpdateWorkspaceRequest::GetWorkspaceName() const
{
    return m_workspaceName;
}

void UpdateWorkspaceRequest::SetWorkspaceName(const string& _workspaceName)
{
    m_workspaceName = _workspaceName;
    m_workspaceNameHasBeenSet = true;
}

bool UpdateWorkspaceRequest::WorkspaceNameHasBeenSet() const
{
    return m_workspaceNameHasBeenSet;
}

string UpdateWorkspaceRequest::GetDescription() const
{
    return m_description;
}

void UpdateWorkspaceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateWorkspaceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


