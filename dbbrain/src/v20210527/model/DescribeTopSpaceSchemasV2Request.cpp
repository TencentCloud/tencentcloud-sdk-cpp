/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceSchemasV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeTopSpaceSchemasV2Request::DescribeTopSpaceSchemasV2Request() :
    m_instanceIdHasBeenSet(false),
    m_productHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeTopSpaceSchemasV2Request::ToJsonString() const
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

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_sortByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortBy.c_str(), allocator).Move(), allocator);
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


string DescribeTopSpaceSchemasV2Request::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeTopSpaceSchemasV2Request::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeTopSpaceSchemasV2Request::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeTopSpaceSchemasV2Request::GetProduct() const
{
    return m_product;
}

void DescribeTopSpaceSchemasV2Request::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeTopSpaceSchemasV2Request::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DescribeTopSpaceSchemasV2Request::GetDate() const
{
    return m_date;
}

void DescribeTopSpaceSchemasV2Request::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool DescribeTopSpaceSchemasV2Request::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string DescribeTopSpaceSchemasV2Request::GetSortBy() const
{
    return m_sortBy;
}

void DescribeTopSpaceSchemasV2Request::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeTopSpaceSchemasV2Request::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

int64_t DescribeTopSpaceSchemasV2Request::GetLimit() const
{
    return m_limit;
}

void DescribeTopSpaceSchemasV2Request::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTopSpaceSchemasV2Request::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


