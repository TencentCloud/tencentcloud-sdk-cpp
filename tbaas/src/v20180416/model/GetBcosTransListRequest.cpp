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

#include <tencentcloud/tbaas/v20180416/model/GetBcosTransListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace rapidjson;
using namespace std;

GetBcosTransListRequest::GetBcosTransListRequest() :
    m_clusterIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_blockNumberHasBeenSet(false),
    m_transHashHasBeenSet(false)
{
}

string GetBcosTransListRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_blockNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BlockNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_blockNumber, allocator);
    }

    if (m_transHashHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TransHash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_transHash.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetBcosTransListRequest::GetClusterId() const
{
    return m_clusterId;
}

void GetBcosTransListRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool GetBcosTransListRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t GetBcosTransListRequest::GetGroupId() const
{
    return m_groupId;
}

void GetBcosTransListRequest::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool GetBcosTransListRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t GetBcosTransListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void GetBcosTransListRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool GetBcosTransListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t GetBcosTransListRequest::GetPageSize() const
{
    return m_pageSize;
}

void GetBcosTransListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool GetBcosTransListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t GetBcosTransListRequest::GetBlockNumber() const
{
    return m_blockNumber;
}

void GetBcosTransListRequest::SetBlockNumber(const int64_t& _blockNumber)
{
    m_blockNumber = _blockNumber;
    m_blockNumberHasBeenSet = true;
}

bool GetBcosTransListRequest::BlockNumberHasBeenSet() const
{
    return m_blockNumberHasBeenSet;
}

string GetBcosTransListRequest::GetTransHash() const
{
    return m_transHash;
}

void GetBcosTransListRequest::SetTransHash(const string& _transHash)
{
    m_transHash = _transHash;
    m_transHashHasBeenSet = true;
}

bool GetBcosTransListRequest::TransHashHasBeenSet() const
{
    return m_transHashHasBeenSet;
}


