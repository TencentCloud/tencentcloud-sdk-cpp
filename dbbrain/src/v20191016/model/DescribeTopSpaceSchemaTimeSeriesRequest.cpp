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

#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceSchemaTimeSeriesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace std;

DescribeTopSpaceSchemaTimeSeriesRequest::DescribeTopSpaceSchemaTimeSeriesRequest() :
    m_instanceIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_productHasBeenSet(false)
{
}

string DescribeTopSpaceSchemaTimeSeriesRequest::ToJsonString() const
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

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_sortByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortBy.c_str(), allocator).Move(), allocator);
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTopSpaceSchemaTimeSeriesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeTopSpaceSchemaTimeSeriesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeTopSpaceSchemaTimeSeriesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeTopSpaceSchemaTimeSeriesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTopSpaceSchemaTimeSeriesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTopSpaceSchemaTimeSeriesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeTopSpaceSchemaTimeSeriesRequest::GetSortBy() const
{
    return m_sortBy;
}

void DescribeTopSpaceSchemaTimeSeriesRequest::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeTopSpaceSchemaTimeSeriesRequest::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

string DescribeTopSpaceSchemaTimeSeriesRequest::GetStartDate() const
{
    return m_startDate;
}

void DescribeTopSpaceSchemaTimeSeriesRequest::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool DescribeTopSpaceSchemaTimeSeriesRequest::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string DescribeTopSpaceSchemaTimeSeriesRequest::GetEndDate() const
{
    return m_endDate;
}

void DescribeTopSpaceSchemaTimeSeriesRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool DescribeTopSpaceSchemaTimeSeriesRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

string DescribeTopSpaceSchemaTimeSeriesRequest::GetProduct() const
{
    return m_product;
}

void DescribeTopSpaceSchemaTimeSeriesRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeTopSpaceSchemaTimeSeriesRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}


