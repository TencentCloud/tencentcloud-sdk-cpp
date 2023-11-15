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

#include <tencentcloud/weilingwith/v20230427/model/DescribeElementProfilePageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeElementProfilePageRequest::DescribeElementProfilePageRequest() :
    m_buildingIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_parentElementIdsHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_spaceTypeCodeHasBeenSet(false),
    m_entityTypesHasBeenSet(false),
    m_includeDeleteHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string DescribeElementProfilePageRequest::ToJsonString() const
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

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
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

    if (m_parentElementIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentElementIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_parentElementIds.begin(); itr != m_parentElementIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_entityTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_entityTypes.begin(); itr != m_entityTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_includeDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeDelete";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeDelete, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeElementProfilePageRequest::GetBuildingId() const
{
    return m_buildingId;
}

void DescribeElementProfilePageRequest::SetBuildingId(const string& _buildingId)
{
    m_buildingId = _buildingId;
    m_buildingIdHasBeenSet = true;
}

bool DescribeElementProfilePageRequest::BuildingIdHasBeenSet() const
{
    return m_buildingIdHasBeenSet;
}

uint64_t DescribeElementProfilePageRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeElementProfilePageRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeElementProfilePageRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeElementProfilePageRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeElementProfilePageRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeElementProfilePageRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeElementProfilePageRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DescribeElementProfilePageRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DescribeElementProfilePageRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string DescribeElementProfilePageRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void DescribeElementProfilePageRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool DescribeElementProfilePageRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

vector<string> DescribeElementProfilePageRequest::GetParentElementIds() const
{
    return m_parentElementIds;
}

void DescribeElementProfilePageRequest::SetParentElementIds(const vector<string>& _parentElementIds)
{
    m_parentElementIds = _parentElementIds;
    m_parentElementIdsHasBeenSet = true;
}

bool DescribeElementProfilePageRequest::ParentElementIdsHasBeenSet() const
{
    return m_parentElementIdsHasBeenSet;
}

uint64_t DescribeElementProfilePageRequest::GetLevel() const
{
    return m_level;
}

void DescribeElementProfilePageRequest::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DescribeElementProfilePageRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string DescribeElementProfilePageRequest::GetSpaceTypeCode() const
{
    return m_spaceTypeCode;
}

void DescribeElementProfilePageRequest::SetSpaceTypeCode(const string& _spaceTypeCode)
{
    m_spaceTypeCode = _spaceTypeCode;
    m_spaceTypeCodeHasBeenSet = true;
}

bool DescribeElementProfilePageRequest::SpaceTypeCodeHasBeenSet() const
{
    return m_spaceTypeCodeHasBeenSet;
}

vector<string> DescribeElementProfilePageRequest::GetEntityTypes() const
{
    return m_entityTypes;
}

void DescribeElementProfilePageRequest::SetEntityTypes(const vector<string>& _entityTypes)
{
    m_entityTypes = _entityTypes;
    m_entityTypesHasBeenSet = true;
}

bool DescribeElementProfilePageRequest::EntityTypesHasBeenSet() const
{
    return m_entityTypesHasBeenSet;
}

bool DescribeElementProfilePageRequest::GetIncludeDelete() const
{
    return m_includeDelete;
}

void DescribeElementProfilePageRequest::SetIncludeDelete(const bool& _includeDelete)
{
    m_includeDelete = _includeDelete;
    m_includeDeleteHasBeenSet = true;
}

bool DescribeElementProfilePageRequest::IncludeDeleteHasBeenSet() const
{
    return m_includeDeleteHasBeenSet;
}

uint64_t DescribeElementProfilePageRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeElementProfilePageRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeElementProfilePageRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeElementProfilePageRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeElementProfilePageRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeElementProfilePageRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


