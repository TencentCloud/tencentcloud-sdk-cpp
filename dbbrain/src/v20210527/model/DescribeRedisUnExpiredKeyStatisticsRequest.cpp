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

#include <tencentcloud/dbbrain/v20210527/model/DescribeRedisUnExpiredKeyStatisticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeRedisUnExpiredKeyStatisticsRequest::DescribeRedisUnExpiredKeyStatisticsRequest() :
    m_instanceIdHasBeenSet(false),
    m_productHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_asyncRequestIdHasBeenSet(false),
    m_shardIdsHasBeenSet(false)
{
}

string DescribeRedisUnExpiredKeyStatisticsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_asyncRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncRequestId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_asyncRequestId, allocator);
    }

    if (m_shardIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_shardIds.begin(); itr != m_shardIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRedisUnExpiredKeyStatisticsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeRedisUnExpiredKeyStatisticsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeRedisUnExpiredKeyStatisticsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeRedisUnExpiredKeyStatisticsRequest::GetProduct() const
{
    return m_product;
}

void DescribeRedisUnExpiredKeyStatisticsRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeRedisUnExpiredKeyStatisticsRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DescribeRedisUnExpiredKeyStatisticsRequest::GetDate() const
{
    return m_date;
}

void DescribeRedisUnExpiredKeyStatisticsRequest::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool DescribeRedisUnExpiredKeyStatisticsRequest::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

int64_t DescribeRedisUnExpiredKeyStatisticsRequest::GetAsyncRequestId() const
{
    return m_asyncRequestId;
}

void DescribeRedisUnExpiredKeyStatisticsRequest::SetAsyncRequestId(const int64_t& _asyncRequestId)
{
    m_asyncRequestId = _asyncRequestId;
    m_asyncRequestIdHasBeenSet = true;
}

bool DescribeRedisUnExpiredKeyStatisticsRequest::AsyncRequestIdHasBeenSet() const
{
    return m_asyncRequestIdHasBeenSet;
}

vector<int64_t> DescribeRedisUnExpiredKeyStatisticsRequest::GetShardIds() const
{
    return m_shardIds;
}

void DescribeRedisUnExpiredKeyStatisticsRequest::SetShardIds(const vector<int64_t>& _shardIds)
{
    m_shardIds = _shardIds;
    m_shardIdsHasBeenSet = true;
}

bool DescribeRedisUnExpiredKeyStatisticsRequest::ShardIdsHasBeenSet() const
{
    return m_shardIdsHasBeenSet;
}


