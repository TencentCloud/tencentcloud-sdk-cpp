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

#include <tencentcloud/monitor/v20180724/model/DescribePrometheusClusterAgentsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePrometheusClusterAgentsRequest::DescribePrometheusClusterAgentsRequest() :
    m_instanceIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_clusterIdsHasBeenSet(false),
    m_clusterTypesHasBeenSet(false),
    m_clusterNameHasBeenSet(false)
{
}

string DescribePrometheusClusterAgentsRequest::ToJsonString() const
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

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_clusterIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterIds.begin(); itr != m_clusterIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterTypes.begin(); itr != m_clusterTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePrometheusClusterAgentsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribePrometheusClusterAgentsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribePrometheusClusterAgentsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t DescribePrometheusClusterAgentsRequest::GetOffset() const
{
    return m_offset;
}

void DescribePrometheusClusterAgentsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribePrometheusClusterAgentsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribePrometheusClusterAgentsRequest::GetLimit() const
{
    return m_limit;
}

void DescribePrometheusClusterAgentsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribePrometheusClusterAgentsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribePrometheusClusterAgentsRequest::GetClusterIds() const
{
    return m_clusterIds;
}

void DescribePrometheusClusterAgentsRequest::SetClusterIds(const vector<string>& _clusterIds)
{
    m_clusterIds = _clusterIds;
    m_clusterIdsHasBeenSet = true;
}

bool DescribePrometheusClusterAgentsRequest::ClusterIdsHasBeenSet() const
{
    return m_clusterIdsHasBeenSet;
}

vector<string> DescribePrometheusClusterAgentsRequest::GetClusterTypes() const
{
    return m_clusterTypes;
}

void DescribePrometheusClusterAgentsRequest::SetClusterTypes(const vector<string>& _clusterTypes)
{
    m_clusterTypes = _clusterTypes;
    m_clusterTypesHasBeenSet = true;
}

bool DescribePrometheusClusterAgentsRequest::ClusterTypesHasBeenSet() const
{
    return m_clusterTypesHasBeenSet;
}

string DescribePrometheusClusterAgentsRequest::GetClusterName() const
{
    return m_clusterName;
}

void DescribePrometheusClusterAgentsRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool DescribePrometheusClusterAgentsRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}


