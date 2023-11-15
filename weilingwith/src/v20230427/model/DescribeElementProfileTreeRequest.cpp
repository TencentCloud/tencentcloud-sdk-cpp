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

#include <tencentcloud/weilingwith/v20230427/model/DescribeElementProfileTreeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeElementProfileTreeRequest::DescribeElementProfileTreeRequest() :
    m_buildingIdHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_elementIdHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_spaceTypeCodeHasBeenSet(false)
{
}

string DescribeElementProfileTreeRequest::ToJsonString() const
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

    if (m_elementIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_elementId.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_level, allocator);
    }

    if (m_spaceTypeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceTypeCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceTypeCode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeElementProfileTreeRequest::GetBuildingId() const
{
    return m_buildingId;
}

void DescribeElementProfileTreeRequest::SetBuildingId(const string& _buildingId)
{
    m_buildingId = _buildingId;
    m_buildingIdHasBeenSet = true;
}

bool DescribeElementProfileTreeRequest::BuildingIdHasBeenSet() const
{
    return m_buildingIdHasBeenSet;
}

string DescribeElementProfileTreeRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DescribeElementProfileTreeRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DescribeElementProfileTreeRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string DescribeElementProfileTreeRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void DescribeElementProfileTreeRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool DescribeElementProfileTreeRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

string DescribeElementProfileTreeRequest::GetElementId() const
{
    return m_elementId;
}

void DescribeElementProfileTreeRequest::SetElementId(const string& _elementId)
{
    m_elementId = _elementId;
    m_elementIdHasBeenSet = true;
}

bool DescribeElementProfileTreeRequest::ElementIdHasBeenSet() const
{
    return m_elementIdHasBeenSet;
}

uint64_t DescribeElementProfileTreeRequest::GetLevel() const
{
    return m_level;
}

void DescribeElementProfileTreeRequest::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DescribeElementProfileTreeRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string DescribeElementProfileTreeRequest::GetSpaceTypeCode() const
{
    return m_spaceTypeCode;
}

void DescribeElementProfileTreeRequest::SetSpaceTypeCode(const string& _spaceTypeCode)
{
    m_spaceTypeCode = _spaceTypeCode;
    m_spaceTypeCodeHasBeenSet = true;
}

bool DescribeElementProfileTreeRequest::SpaceTypeCodeHasBeenSet() const
{
    return m_spaceTypeCodeHasBeenSet;
}


