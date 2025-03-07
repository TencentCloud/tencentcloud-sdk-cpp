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

#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQTopUsagesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeRocketMQTopUsagesRequest::DescribeRocketMQTopUsagesRequest() :
    m_clusterIdHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeRocketMQTopUsagesRequest::ToJsonString() const
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

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRocketMQTopUsagesRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeRocketMQTopUsagesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeRocketMQTopUsagesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeRocketMQTopUsagesRequest::GetMetricName() const
{
    return m_metricName;
}

void DescribeRocketMQTopUsagesRequest::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool DescribeRocketMQTopUsagesRequest::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

uint64_t DescribeRocketMQTopUsagesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRocketMQTopUsagesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRocketMQTopUsagesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


