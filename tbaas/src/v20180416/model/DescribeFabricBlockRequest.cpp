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

#include <tencentcloud/tbaas/v20180416/model/DescribeFabricBlockRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

DescribeFabricBlockRequest::DescribeFabricBlockRequest() :
    m_clusterIdHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_blockHeightHasBeenSet(false)
{
}

string DescribeFabricBlockRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_blockHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockHeight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_blockHeight, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeFabricBlockRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeFabricBlockRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeFabricBlockRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeFabricBlockRequest::GetChannelId() const
{
    return m_channelId;
}

void DescribeFabricBlockRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool DescribeFabricBlockRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

int64_t DescribeFabricBlockRequest::GetBlockHeight() const
{
    return m_blockHeight;
}

void DescribeFabricBlockRequest::SetBlockHeight(const int64_t& _blockHeight)
{
    m_blockHeight = _blockHeight;
    m_blockHeightHasBeenSet = true;
}

bool DescribeFabricBlockRequest::BlockHeightHasBeenSet() const
{
    return m_blockHeightHasBeenSet;
}


