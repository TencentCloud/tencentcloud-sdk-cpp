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

#include <tencentcloud/dbbrain/v20210527/model/DescribeRedisTopKeyPrefixListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeRedisTopKeyPrefixListRequest::DescribeRedisTopKeyPrefixListRequest() :
    m_instanceIdHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_productHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_shardIdsHasBeenSet(false)
{
}

string DescribeRedisTopKeyPrefixListRequest::ToJsonString() const
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

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
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


string DescribeRedisTopKeyPrefixListRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeRedisTopKeyPrefixListRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeRedisTopKeyPrefixListRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeRedisTopKeyPrefixListRequest::GetDate() const
{
    return m_date;
}

void DescribeRedisTopKeyPrefixListRequest::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool DescribeRedisTopKeyPrefixListRequest::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string DescribeRedisTopKeyPrefixListRequest::GetProduct() const
{
    return m_product;
}

void DescribeRedisTopKeyPrefixListRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeRedisTopKeyPrefixListRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

int64_t DescribeRedisTopKeyPrefixListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRedisTopKeyPrefixListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRedisTopKeyPrefixListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<int64_t> DescribeRedisTopKeyPrefixListRequest::GetShardIds() const
{
    return m_shardIds;
}

void DescribeRedisTopKeyPrefixListRequest::SetShardIds(const vector<int64_t>& _shardIds)
{
    m_shardIds = _shardIds;
    m_shardIdsHasBeenSet = true;
}

bool DescribeRedisTopKeyPrefixListRequest::ShardIdsHasBeenSet() const
{
    return m_shardIdsHasBeenSet;
}


