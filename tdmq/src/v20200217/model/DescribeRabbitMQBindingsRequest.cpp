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

#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQBindingsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeRabbitMQBindingsRequest::DescribeRabbitMQBindingsRequest() :
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchWordHasBeenSet(false),
    m_sourceExchangeHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_destinationExchangeHasBeenSet(false)
{
}

string DescribeRabbitMQBindingsRequest::ToJsonString() const
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

    if (m_virtualHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_virtualHost.c_str(), allocator).Move(), allocator);
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

    if (m_searchWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchWord.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceExchangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceExchange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceExchange.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationExchangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationExchange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destinationExchange.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRabbitMQBindingsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeRabbitMQBindingsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeRabbitMQBindingsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeRabbitMQBindingsRequest::GetVirtualHost() const
{
    return m_virtualHost;
}

void DescribeRabbitMQBindingsRequest::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool DescribeRabbitMQBindingsRequest::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

int64_t DescribeRabbitMQBindingsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRabbitMQBindingsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRabbitMQBindingsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeRabbitMQBindingsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRabbitMQBindingsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRabbitMQBindingsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeRabbitMQBindingsRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeRabbitMQBindingsRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeRabbitMQBindingsRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

string DescribeRabbitMQBindingsRequest::GetSourceExchange() const
{
    return m_sourceExchange;
}

void DescribeRabbitMQBindingsRequest::SetSourceExchange(const string& _sourceExchange)
{
    m_sourceExchange = _sourceExchange;
    m_sourceExchangeHasBeenSet = true;
}

bool DescribeRabbitMQBindingsRequest::SourceExchangeHasBeenSet() const
{
    return m_sourceExchangeHasBeenSet;
}

string DescribeRabbitMQBindingsRequest::GetQueueName() const
{
    return m_queueName;
}

void DescribeRabbitMQBindingsRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool DescribeRabbitMQBindingsRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string DescribeRabbitMQBindingsRequest::GetDestinationExchange() const
{
    return m_destinationExchange;
}

void DescribeRabbitMQBindingsRequest::SetDestinationExchange(const string& _destinationExchange)
{
    m_destinationExchange = _destinationExchange;
    m_destinationExchangeHasBeenSet = true;
}

bool DescribeRabbitMQBindingsRequest::DestinationExchangeHasBeenSet() const
{
    return m_destinationExchangeHasBeenSet;
}


