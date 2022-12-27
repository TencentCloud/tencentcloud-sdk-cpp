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

#include <tencentcloud/dbbrain/v20210527/model/DescribeProxyProcessStatisticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeProxyProcessStatisticsRequest::DescribeProxyProcessStatisticsRequest() :
    m_instanceIdHasBeenSet(false),
    m_instanceProxyIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_productHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_orderDirectionHasBeenSet(false)
{
}

string DescribeProxyProcessStatisticsRequest::ToJsonString() const
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

    if (m_instanceProxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceProxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_sortByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderDirection.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeProxyProcessStatisticsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeProxyProcessStatisticsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeProxyProcessStatisticsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeProxyProcessStatisticsRequest::GetInstanceProxyId() const
{
    return m_instanceProxyId;
}

void DescribeProxyProcessStatisticsRequest::SetInstanceProxyId(const string& _instanceProxyId)
{
    m_instanceProxyId = _instanceProxyId;
    m_instanceProxyIdHasBeenSet = true;
}

bool DescribeProxyProcessStatisticsRequest::InstanceProxyIdHasBeenSet() const
{
    return m_instanceProxyIdHasBeenSet;
}

int64_t DescribeProxyProcessStatisticsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeProxyProcessStatisticsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeProxyProcessStatisticsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeProxyProcessStatisticsRequest::GetProduct() const
{
    return m_product;
}

void DescribeProxyProcessStatisticsRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeProxyProcessStatisticsRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

int64_t DescribeProxyProcessStatisticsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeProxyProcessStatisticsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeProxyProcessStatisticsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeProxyProcessStatisticsRequest::GetSortBy() const
{
    return m_sortBy;
}

void DescribeProxyProcessStatisticsRequest::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeProxyProcessStatisticsRequest::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

string DescribeProxyProcessStatisticsRequest::GetOrderDirection() const
{
    return m_orderDirection;
}

void DescribeProxyProcessStatisticsRequest::SetOrderDirection(const string& _orderDirection)
{
    m_orderDirection = _orderDirection;
    m_orderDirectionHasBeenSet = true;
}

bool DescribeProxyProcessStatisticsRequest::OrderDirectionHasBeenSet() const
{
    return m_orderDirectionHasBeenSet;
}


