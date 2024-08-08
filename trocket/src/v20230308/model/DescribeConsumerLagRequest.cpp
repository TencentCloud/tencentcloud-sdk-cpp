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

#include <tencentcloud/trocket/v20230308/model/DescribeConsumerLagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

DescribeConsumerLagRequest::DescribeConsumerLagRequest() :
    m_instanceIdHasBeenSet(false),
    m_consumerGroupHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_subscribeTopicHasBeenSet(false)
{
}

string DescribeConsumerLagRequest::ToJsonString() const
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

    if (m_consumerGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consumerGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeTopic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subscribeTopic.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeConsumerLagRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeConsumerLagRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeConsumerLagRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeConsumerLagRequest::GetConsumerGroup() const
{
    return m_consumerGroup;
}

void DescribeConsumerLagRequest::SetConsumerGroup(const string& _consumerGroup)
{
    m_consumerGroup = _consumerGroup;
    m_consumerGroupHasBeenSet = true;
}

bool DescribeConsumerLagRequest::ConsumerGroupHasBeenSet() const
{
    return m_consumerGroupHasBeenSet;
}

string DescribeConsumerLagRequest::GetNamespace() const
{
    return m_namespace;
}

void DescribeConsumerLagRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DescribeConsumerLagRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string DescribeConsumerLagRequest::GetSubscribeTopic() const
{
    return m_subscribeTopic;
}

void DescribeConsumerLagRequest::SetSubscribeTopic(const string& _subscribeTopic)
{
    m_subscribeTopic = _subscribeTopic;
    m_subscribeTopicHasBeenSet = true;
}

bool DescribeConsumerLagRequest::SubscribeTopicHasBeenSet() const
{
    return m_subscribeTopicHasBeenSet;
}


