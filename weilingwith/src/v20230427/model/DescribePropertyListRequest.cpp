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

#include <tencentcloud/weilingwith/v20230427/model/DescribePropertyListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribePropertyListRequest::DescribePropertyListRequest() :
    m_buildingIdHasBeenSet(false),
    m_elementIdHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_applicationTokenHasBeenSet(false)
{
}

string DescribePropertyListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_buildingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildingId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_buildingId.c_str(), allocator).Move(), allocator);
    }

    if (m_elementIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_elementId.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePropertyListRequest::GetBuildingId() const
{
    return m_buildingId;
}

void DescribePropertyListRequest::SetBuildingId(const string& _buildingId)
{
    m_buildingId = _buildingId;
    m_buildingIdHasBeenSet = true;
}

bool DescribePropertyListRequest::BuildingIdHasBeenSet() const
{
    return m_buildingIdHasBeenSet;
}

string DescribePropertyListRequest::GetElementId() const
{
    return m_elementId;
}

void DescribePropertyListRequest::SetElementId(const string& _elementId)
{
    m_elementId = _elementId;
    m_elementIdHasBeenSet = true;
}

bool DescribePropertyListRequest::ElementIdHasBeenSet() const
{
    return m_elementIdHasBeenSet;
}

string DescribePropertyListRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DescribePropertyListRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DescribePropertyListRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string DescribePropertyListRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void DescribePropertyListRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool DescribePropertyListRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}


