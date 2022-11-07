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

#include <tencentcloud/wedata/v20210820/model/DescribeInLongTkeClusterListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeInLongTkeClusterListRequest::DescribeInLongTkeClusterListRequest() :
    m_projectIdHasBeenSet(false),
    m_tkeRegionHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_hasAgentHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_pageIndexHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribeInLongTkeClusterListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_tkeRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TkeRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tkeRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_hasAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasAgent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hasAgent, allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_pageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageIndex, allocator);
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


string DescribeInLongTkeClusterListRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeInLongTkeClusterListRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeInLongTkeClusterListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeInLongTkeClusterListRequest::GetTkeRegion() const
{
    return m_tkeRegion;
}

void DescribeInLongTkeClusterListRequest::SetTkeRegion(const string& _tkeRegion)
{
    m_tkeRegion = _tkeRegion;
    m_tkeRegionHasBeenSet = true;
}

bool DescribeInLongTkeClusterListRequest::TkeRegionHasBeenSet() const
{
    return m_tkeRegionHasBeenSet;
}

string DescribeInLongTkeClusterListRequest::GetClusterName() const
{
    return m_clusterName;
}

void DescribeInLongTkeClusterListRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool DescribeInLongTkeClusterListRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string DescribeInLongTkeClusterListRequest::GetStatus() const
{
    return m_status;
}

void DescribeInLongTkeClusterListRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeInLongTkeClusterListRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool DescribeInLongTkeClusterListRequest::GetHasAgent() const
{
    return m_hasAgent;
}

void DescribeInLongTkeClusterListRequest::SetHasAgent(const bool& _hasAgent)
{
    m_hasAgent = _hasAgent;
    m_hasAgentHasBeenSet = true;
}

bool DescribeInLongTkeClusterListRequest::HasAgentHasBeenSet() const
{
    return m_hasAgentHasBeenSet;
}

string DescribeInLongTkeClusterListRequest::GetClusterType() const
{
    return m_clusterType;
}

void DescribeInLongTkeClusterListRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool DescribeInLongTkeClusterListRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

uint64_t DescribeInLongTkeClusterListRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void DescribeInLongTkeClusterListRequest::SetPageIndex(const uint64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool DescribeInLongTkeClusterListRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

uint64_t DescribeInLongTkeClusterListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeInLongTkeClusterListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeInLongTkeClusterListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


