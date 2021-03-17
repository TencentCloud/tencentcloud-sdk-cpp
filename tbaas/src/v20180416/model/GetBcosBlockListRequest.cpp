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

#include <tencentcloud/tbaas/v20180416/model/GetBcosBlockListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace rapidjson;
using namespace std;

GetBcosBlockListRequest::GetBcosBlockListRequest() :
    m_clusterIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_blockNumberHasBeenSet(false),
    m_blockHashHasBeenSet(false)
{
}

string GetBcosBlockListRequest::ToJsonString() const
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

    if (m_blockHashHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BlockHash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_blockHash.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetBcosBlockListRequest::GetClusterId() const
{
    return m_clusterId;
}

void GetBcosBlockListRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool GetBcosBlockListRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t GetBcosBlockListRequest::GetGroupId() const
{
    return m_groupId;
}

void GetBcosBlockListRequest::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool GetBcosBlockListRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t GetBcosBlockListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void GetBcosBlockListRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool GetBcosBlockListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t GetBcosBlockListRequest::GetPageSize() const
{
    return m_pageSize;
}

void GetBcosBlockListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool GetBcosBlockListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t GetBcosBlockListRequest::GetBlockNumber() const
{
    return m_blockNumber;
}

void GetBcosBlockListRequest::SetBlockNumber(const int64_t& _blockNumber)
{
    m_blockNumber = _blockNumber;
    m_blockNumberHasBeenSet = true;
}

bool GetBcosBlockListRequest::BlockNumberHasBeenSet() const
{
    return m_blockNumberHasBeenSet;
}

string GetBcosBlockListRequest::GetBlockHash() const
{
    return m_blockHash;
}

void GetBcosBlockListRequest::SetBlockHash(const string& _blockHash)
{
    m_blockHash = _blockHash;
    m_blockHashHasBeenSet = true;
}

bool GetBcosBlockListRequest::BlockHashHasBeenSet() const
{
    return m_blockHashHasBeenSet;
}


