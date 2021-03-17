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

#include <tencentcloud/tbaas/v20180416/model/GetBcosBlockByNumberRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace rapidjson;
using namespace std;

GetBcosBlockByNumberRequest::GetBcosBlockByNumberRequest() :
    m_clusterIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_blockNumberHasBeenSet(false)
{
}

string GetBcosBlockByNumberRequest::ToJsonString() const
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

    if (m_blockNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BlockNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_blockNumber, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetBcosBlockByNumberRequest::GetClusterId() const
{
    return m_clusterId;
}

void GetBcosBlockByNumberRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool GetBcosBlockByNumberRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t GetBcosBlockByNumberRequest::GetGroupId() const
{
    return m_groupId;
}

void GetBcosBlockByNumberRequest::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool GetBcosBlockByNumberRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t GetBcosBlockByNumberRequest::GetBlockNumber() const
{
    return m_blockNumber;
}

void GetBcosBlockByNumberRequest::SetBlockNumber(const int64_t& _blockNumber)
{
    m_blockNumber = _blockNumber;
    m_blockNumberHasBeenSet = true;
}

bool GetBcosBlockByNumberRequest::BlockNumberHasBeenSet() const
{
    return m_blockNumberHasBeenSet;
}


