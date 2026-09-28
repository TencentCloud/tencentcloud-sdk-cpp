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

#include <tencentcloud/databuddy/v20260715/model/CreateWorkspaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

CreateWorkspaceRequest::CreateWorkspaceRequest() :
    m_workspaceNameHasBeenSet(false),
    m_workspaceRegionHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateWorkspaceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceRegion.c_str(), allocator).Move(), allocator);
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


string CreateWorkspaceRequest::GetWorkspaceName() const
{
    return m_workspaceName;
}

void CreateWorkspaceRequest::SetWorkspaceName(const string& _workspaceName)
{
    m_workspaceName = _workspaceName;
    m_workspaceNameHasBeenSet = true;
}

bool CreateWorkspaceRequest::WorkspaceNameHasBeenSet() const
{
    return m_workspaceNameHasBeenSet;
}

string CreateWorkspaceRequest::GetWorkspaceRegion() const
{
    return m_workspaceRegion;
}

void CreateWorkspaceRequest::SetWorkspaceRegion(const string& _workspaceRegion)
{
    m_workspaceRegion = _workspaceRegion;
    m_workspaceRegionHasBeenSet = true;
}

bool CreateWorkspaceRequest::WorkspaceRegionHasBeenSet() const
{
    return m_workspaceRegionHasBeenSet;
}

string CreateWorkspaceRequest::GetDescription() const
{
    return m_description;
}

void CreateWorkspaceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateWorkspaceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


