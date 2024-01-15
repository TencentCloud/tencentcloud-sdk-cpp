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

#include <tencentcloud/dbbrain/v20210527/model/DescribeRedisTopBigKeysRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeRedisTopBigKeysRequest::DescribeRedisTopBigKeysRequest() :
    m_instanceIdHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_productHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_keyTypeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_asyncRequestIdHasBeenSet(false),
    m_shardIdsHasBeenSet(false)
{
}

string DescribeRedisTopBigKeysRequest::ToJsonString() const
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

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_sortByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortBy.c_str(), allocator).Move(), allocator);
    }

    if (m_keyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyType.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
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


string DescribeRedisTopBigKeysRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeRedisTopBigKeysRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeRedisTopBigKeysRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeRedisTopBigKeysRequest::GetDate() const
{
    return m_date;
}

void DescribeRedisTopBigKeysRequest::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool DescribeRedisTopBigKeysRequest::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string DescribeRedisTopBigKeysRequest::GetProduct() const
{
    return m_product;
}

void DescribeRedisTopBigKeysRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeRedisTopBigKeysRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DescribeRedisTopBigKeysRequest::GetSortBy() const
{
    return m_sortBy;
}

void DescribeRedisTopBigKeysRequest::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeRedisTopBigKeysRequest::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

string DescribeRedisTopBigKeysRequest::GetKeyType() const
{
    return m_keyType;
}

void DescribeRedisTopBigKeysRequest::SetKeyType(const string& _keyType)
{
    m_keyType = _keyType;
    m_keyTypeHasBeenSet = true;
}

bool DescribeRedisTopBigKeysRequest::KeyTypeHasBeenSet() const
{
    return m_keyTypeHasBeenSet;
}

int64_t DescribeRedisTopBigKeysRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRedisTopBigKeysRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRedisTopBigKeysRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeRedisTopBigKeysRequest::GetAsyncRequestId() const
{
    return m_asyncRequestId;
}

void DescribeRedisTopBigKeysRequest::SetAsyncRequestId(const int64_t& _asyncRequestId)
{
    m_asyncRequestId = _asyncRequestId;
    m_asyncRequestIdHasBeenSet = true;
}

bool DescribeRedisTopBigKeysRequest::AsyncRequestIdHasBeenSet() const
{
    return m_asyncRequestIdHasBeenSet;
}

vector<int64_t> DescribeRedisTopBigKeysRequest::GetShardIds() const
{
    return m_shardIds;
}

void DescribeRedisTopBigKeysRequest::SetShardIds(const vector<int64_t>& _shardIds)
{
    m_shardIds = _shardIds;
    m_shardIdsHasBeenSet = true;
}

bool DescribeRedisTopBigKeysRequest::ShardIdsHasBeenSet() const
{
    return m_shardIdsHasBeenSet;
}


