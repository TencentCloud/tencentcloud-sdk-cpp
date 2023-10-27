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

#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQQueuesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeRabbitMQQueuesRequest::DescribeRabbitMQQueuesRequest() :
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchWordHasBeenSet(false),
    m_queueTypeHasBeenSet(false),
    m_sortElementHasBeenSet(false),
    m_sortOrderHasBeenSet(false)
{
}

string DescribeRabbitMQQueuesRequest::ToJsonString() const
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

    if (m_queueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueType.c_str(), allocator).Move(), allocator);
    }

    if (m_sortElementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortElement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortElement.c_str(), allocator).Move(), allocator);
    }

    if (m_sortOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortOrder.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRabbitMQQueuesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeRabbitMQQueuesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeRabbitMQQueuesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeRabbitMQQueuesRequest::GetVirtualHost() const
{
    return m_virtualHost;
}

void DescribeRabbitMQQueuesRequest::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool DescribeRabbitMQQueuesRequest::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

int64_t DescribeRabbitMQQueuesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRabbitMQQueuesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRabbitMQQueuesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeRabbitMQQueuesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRabbitMQQueuesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRabbitMQQueuesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeRabbitMQQueuesRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeRabbitMQQueuesRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeRabbitMQQueuesRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

string DescribeRabbitMQQueuesRequest::GetQueueType() const
{
    return m_queueType;
}

void DescribeRabbitMQQueuesRequest::SetQueueType(const string& _queueType)
{
    m_queueType = _queueType;
    m_queueTypeHasBeenSet = true;
}

bool DescribeRabbitMQQueuesRequest::QueueTypeHasBeenSet() const
{
    return m_queueTypeHasBeenSet;
}

string DescribeRabbitMQQueuesRequest::GetSortElement() const
{
    return m_sortElement;
}

void DescribeRabbitMQQueuesRequest::SetSortElement(const string& _sortElement)
{
    m_sortElement = _sortElement;
    m_sortElementHasBeenSet = true;
}

bool DescribeRabbitMQQueuesRequest::SortElementHasBeenSet() const
{
    return m_sortElementHasBeenSet;
}

string DescribeRabbitMQQueuesRequest::GetSortOrder() const
{
    return m_sortOrder;
}

void DescribeRabbitMQQueuesRequest::SetSortOrder(const string& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool DescribeRabbitMQQueuesRequest::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}


