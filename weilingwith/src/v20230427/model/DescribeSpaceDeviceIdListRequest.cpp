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

#include <tencentcloud/weilingwith/v20230427/model/DescribeSpaceDeviceIdListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeSpaceDeviceIdListRequest::DescribeSpaceDeviceIdListRequest() :
    m_elementIdsHasBeenSet(false),
    m_isCascadeHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_applicationTokenHasBeenSet(false)
{
}

string DescribeSpaceDeviceIdListRequest::ToJsonString() const
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


vector<string> DescribeSpaceDeviceIdListRequest::GetElementIds() const
{
    return m_elementIds;
}

void DescribeSpaceDeviceIdListRequest::SetElementIds(const vector<string>& _elementIds)
{
    m_elementIds = _elementIds;
    m_elementIdsHasBeenSet = true;
}

bool DescribeSpaceDeviceIdListRequest::ElementIdsHasBeenSet() const
{
    return m_elementIdsHasBeenSet;
}

bool DescribeSpaceDeviceIdListRequest::GetIsCascade() const
{
    return m_isCascade;
}

void DescribeSpaceDeviceIdListRequest::SetIsCascade(const bool& _isCascade)
{
    m_isCascade = _isCascade;
    m_isCascadeHasBeenSet = true;
}

bool DescribeSpaceDeviceIdListRequest::IsCascadeHasBeenSet() const
{
    return m_isCascadeHasBeenSet;
}

string DescribeSpaceDeviceIdListRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DescribeSpaceDeviceIdListRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DescribeSpaceDeviceIdListRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

uint64_t DescribeSpaceDeviceIdListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeSpaceDeviceIdListRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeSpaceDeviceIdListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeSpaceDeviceIdListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeSpaceDeviceIdListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeSpaceDeviceIdListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeSpaceDeviceIdListRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void DescribeSpaceDeviceIdListRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool DescribeSpaceDeviceIdListRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}


