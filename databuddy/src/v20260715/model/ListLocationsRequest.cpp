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

#include <tencentcloud/databuddy/v20260715/model/ListLocationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ListLocationsRequest::ListLocationsRequest() :
    m_workspaceIdHasBeenSet(false),
    m_locationNamePatternHasBeenSet(false),
    m_snapshotBasedHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string ListLocationsRequest::ToJsonString() const
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

    if (m_locationNamePatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationNamePattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_locationNamePattern.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotBasedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotBased";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_snapshotBased, allocator);
    }

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListLocationsRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ListLocationsRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ListLocationsRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string ListLocationsRequest::GetLocationNamePattern() const
{
    return m_locationNamePattern;
}

void ListLocationsRequest::SetLocationNamePattern(const string& _locationNamePattern)
{
    m_locationNamePattern = _locationNamePattern;
    m_locationNamePatternHasBeenSet = true;
}

bool ListLocationsRequest::LocationNamePatternHasBeenSet() const
{
    return m_locationNamePatternHasBeenSet;
}

bool ListLocationsRequest::GetSnapshotBased() const
{
    return m_snapshotBased;
}

void ListLocationsRequest::SetSnapshotBased(const bool& _snapshotBased)
{
    m_snapshotBased = _snapshotBased;
    m_snapshotBasedHasBeenSet = true;
}

bool ListLocationsRequest::SnapshotBasedHasBeenSet() const
{
    return m_snapshotBasedHasBeenSet;
}

string ListLocationsRequest::GetSnapshotId() const
{
    return m_snapshotId;
}

void ListLocationsRequest::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool ListLocationsRequest::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

int64_t ListLocationsRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListLocationsRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListLocationsRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListLocationsRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListLocationsRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListLocationsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


