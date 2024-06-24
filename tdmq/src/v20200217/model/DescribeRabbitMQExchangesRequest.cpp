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

#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQExchangesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeRabbitMQExchangesRequest::DescribeRabbitMQExchangesRequest() :
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchWordHasBeenSet(false),
    m_exchangeTypeFiltersHasBeenSet(false),
    m_exchangeCreatorFiltersHasBeenSet(false),
    m_exchangeNameHasBeenSet(false),
    m_sortElementHasBeenSet(false),
    m_sortOrderHasBeenSet(false)
{
}

string DescribeRabbitMQExchangesRequest::ToJsonString() const
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

    if (m_exchangeTypeFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeTypeFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_exchangeTypeFilters.begin(); itr != m_exchangeTypeFilters.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_exchangeCreatorFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeCreatorFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_exchangeCreatorFilters.begin(); itr != m_exchangeCreatorFilters.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_exchangeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_exchangeName.c_str(), allocator).Move(), allocator);
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


string DescribeRabbitMQExchangesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeRabbitMQExchangesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeRabbitMQExchangesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeRabbitMQExchangesRequest::GetVirtualHost() const
{
    return m_virtualHost;
}

void DescribeRabbitMQExchangesRequest::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool DescribeRabbitMQExchangesRequest::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

int64_t DescribeRabbitMQExchangesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRabbitMQExchangesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRabbitMQExchangesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeRabbitMQExchangesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRabbitMQExchangesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRabbitMQExchangesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeRabbitMQExchangesRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeRabbitMQExchangesRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeRabbitMQExchangesRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

vector<string> DescribeRabbitMQExchangesRequest::GetExchangeTypeFilters() const
{
    return m_exchangeTypeFilters;
}

void DescribeRabbitMQExchangesRequest::SetExchangeTypeFilters(const vector<string>& _exchangeTypeFilters)
{
    m_exchangeTypeFilters = _exchangeTypeFilters;
    m_exchangeTypeFiltersHasBeenSet = true;
}

bool DescribeRabbitMQExchangesRequest::ExchangeTypeFiltersHasBeenSet() const
{
    return m_exchangeTypeFiltersHasBeenSet;
}

vector<string> DescribeRabbitMQExchangesRequest::GetExchangeCreatorFilters() const
{
    return m_exchangeCreatorFilters;
}

void DescribeRabbitMQExchangesRequest::SetExchangeCreatorFilters(const vector<string>& _exchangeCreatorFilters)
{
    m_exchangeCreatorFilters = _exchangeCreatorFilters;
    m_exchangeCreatorFiltersHasBeenSet = true;
}

bool DescribeRabbitMQExchangesRequest::ExchangeCreatorFiltersHasBeenSet() const
{
    return m_exchangeCreatorFiltersHasBeenSet;
}

string DescribeRabbitMQExchangesRequest::GetExchangeName() const
{
    return m_exchangeName;
}

void DescribeRabbitMQExchangesRequest::SetExchangeName(const string& _exchangeName)
{
    m_exchangeName = _exchangeName;
    m_exchangeNameHasBeenSet = true;
}

bool DescribeRabbitMQExchangesRequest::ExchangeNameHasBeenSet() const
{
    return m_exchangeNameHasBeenSet;
}

string DescribeRabbitMQExchangesRequest::GetSortElement() const
{
    return m_sortElement;
}

void DescribeRabbitMQExchangesRequest::SetSortElement(const string& _sortElement)
{
    m_sortElement = _sortElement;
    m_sortElementHasBeenSet = true;
}

bool DescribeRabbitMQExchangesRequest::SortElementHasBeenSet() const
{
    return m_sortElementHasBeenSet;
}

string DescribeRabbitMQExchangesRequest::GetSortOrder() const
{
    return m_sortOrder;
}

void DescribeRabbitMQExchangesRequest::SetSortOrder(const string& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool DescribeRabbitMQExchangesRequest::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}


