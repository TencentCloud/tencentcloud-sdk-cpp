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

#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQConsumeStatsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeRocketMQConsumeStatsRequest::DescribeRocketMQConsumeStatsRequest() :
    m_clusterIdHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_consumerGroupHasBeenSet(false)
{
}

string DescribeRocketMQConsumeStatsRequest::ToJsonString() const
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

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consumerGroup.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRocketMQConsumeStatsRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeRocketMQConsumeStatsRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeRocketMQConsumeStatsRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeRocketMQConsumeStatsRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void DescribeRocketMQConsumeStatsRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool DescribeRocketMQConsumeStatsRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string DescribeRocketMQConsumeStatsRequest::GetConsumerGroup() const
{
    return m_consumerGroup;
}

void DescribeRocketMQConsumeStatsRequest::SetConsumerGroup(const string& _consumerGroup)
{
    m_consumerGroup = _consumerGroup;
    m_consumerGroupHasBeenSet = true;
}

bool DescribeRocketMQConsumeStatsRequest::ConsumerGroupHasBeenSet() const
{
    return m_consumerGroupHasBeenSet;
}


