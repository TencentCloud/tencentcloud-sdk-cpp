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

#include <tencentcloud/redis/v20180412/model/DescribeRedisClustersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

DescribeRedisClustersRequest::DescribeRedisClustersRequest() :
    m_redisClusterIdsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_dedicatedClusterIdHasBeenSet(false)
{
}

string DescribeRedisClustersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_redisClusterIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisClusterIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_redisClusterIds.begin(); itr != m_redisClusterIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_autoRenewFlag.begin(); itr != m_autoRenewFlag.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_dedicatedClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dedicatedClusterId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeRedisClustersRequest::GetRedisClusterIds() const
{
    return m_redisClusterIds;
}

void DescribeRedisClustersRequest::SetRedisClusterIds(const vector<string>& _redisClusterIds)
{
    m_redisClusterIds = _redisClusterIds;
    m_redisClusterIdsHasBeenSet = true;
}

bool DescribeRedisClustersRequest::RedisClusterIdsHasBeenSet() const
{
    return m_redisClusterIdsHasBeenSet;
}

vector<int64_t> DescribeRedisClustersRequest::GetStatus() const
{
    return m_status;
}

void DescribeRedisClustersRequest::SetStatus(const vector<int64_t>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeRedisClustersRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<int64_t> DescribeRedisClustersRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeRedisClustersRequest::SetProjectIds(const vector<int64_t>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeRedisClustersRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

vector<int64_t> DescribeRedisClustersRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void DescribeRedisClustersRequest::SetAutoRenewFlag(const vector<int64_t>& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool DescribeRedisClustersRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string DescribeRedisClustersRequest::GetClusterName() const
{
    return m_clusterName;
}

void DescribeRedisClustersRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool DescribeRedisClustersRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string DescribeRedisClustersRequest::GetSearchKey() const
{
    return m_searchKey;
}

void DescribeRedisClustersRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool DescribeRedisClustersRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}

int64_t DescribeRedisClustersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRedisClustersRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRedisClustersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeRedisClustersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRedisClustersRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRedisClustersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeRedisClustersRequest::GetDedicatedClusterId() const
{
    return m_dedicatedClusterId;
}

void DescribeRedisClustersRequest::SetDedicatedClusterId(const string& _dedicatedClusterId)
{
    m_dedicatedClusterId = _dedicatedClusterId;
    m_dedicatedClusterIdHasBeenSet = true;
}

bool DescribeRedisClustersRequest::DedicatedClusterIdHasBeenSet() const
{
    return m_dedicatedClusterIdHasBeenSet;
}


