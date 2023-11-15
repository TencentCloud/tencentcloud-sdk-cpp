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

#include <tencentcloud/weilingwith/v20230427/model/DescribeSpaceDeviceRelationListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeSpaceDeviceRelationListRequest::DescribeSpaceDeviceRelationListRequest() :
    m_elementIdsHasBeenSet(false),
    m_isCascadeHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_applicationTokenHasBeenSet(false)
{
}

string DescribeSpaceDeviceRelationListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_elementIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_elementIds.begin(); itr != m_elementIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isCascadeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCascade";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCascade, allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
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


vector<string> DescribeSpaceDeviceRelationListRequest::GetElementIds() const
{
    return m_elementIds;
}

void DescribeSpaceDeviceRelationListRequest::SetElementIds(const vector<string>& _elementIds)
{
    m_elementIds = _elementIds;
    m_elementIdsHasBeenSet = true;
}

bool DescribeSpaceDeviceRelationListRequest::ElementIdsHasBeenSet() const
{
    return m_elementIdsHasBeenSet;
}

bool DescribeSpaceDeviceRelationListRequest::GetIsCascade() const
{
    return m_isCascade;
}

void DescribeSpaceDeviceRelationListRequest::SetIsCascade(const bool& _isCascade)
{
    m_isCascade = _isCascade;
    m_isCascadeHasBeenSet = true;
}

bool DescribeSpaceDeviceRelationListRequest::IsCascadeHasBeenSet() const
{
    return m_isCascadeHasBeenSet;
}

string DescribeSpaceDeviceRelationListRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DescribeSpaceDeviceRelationListRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DescribeSpaceDeviceRelationListRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

uint64_t DescribeSpaceDeviceRelationListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeSpaceDeviceRelationListRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeSpaceDeviceRelationListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeSpaceDeviceRelationListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeSpaceDeviceRelationListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeSpaceDeviceRelationListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeSpaceDeviceRelationListRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void DescribeSpaceDeviceRelationListRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool DescribeSpaceDeviceRelationListRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}


