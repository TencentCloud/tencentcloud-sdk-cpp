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

#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSCloneInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

DescribeDBSCloneInstancesRequest::DescribeDBSCloneInstancesRequest() :
    m_sourceInstanceIdHasBeenSet(false),
    m_dBTypeHasBeenSet(false),
    m_endCreateTimeHasBeenSet(false),
    m_filterCloneTypeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_startCreateTimeHasBeenSet(false)
{
}

string DescribeDBSCloneInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dBTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBType.c_str(), allocator).Move(), allocator);
    }

    if (m_endCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndCreateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_filterCloneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterCloneType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterCloneType.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderType.c_str(), allocator).Move(), allocator);
    }

    if (m_startCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartCreateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startCreateTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDBSCloneInstancesRequest::GetSourceInstanceId() const
{
    return m_sourceInstanceId;
}

void DescribeDBSCloneInstancesRequest::SetSourceInstanceId(const string& _sourceInstanceId)
{
    m_sourceInstanceId = _sourceInstanceId;
    m_sourceInstanceIdHasBeenSet = true;
}

bool DescribeDBSCloneInstancesRequest::SourceInstanceIdHasBeenSet() const
{
    return m_sourceInstanceIdHasBeenSet;
}

string DescribeDBSCloneInstancesRequest::GetDBType() const
{
    return m_dBType;
}

void DescribeDBSCloneInstancesRequest::SetDBType(const string& _dBType)
{
    m_dBType = _dBType;
    m_dBTypeHasBeenSet = true;
}

bool DescribeDBSCloneInstancesRequest::DBTypeHasBeenSet() const
{
    return m_dBTypeHasBeenSet;
}

string DescribeDBSCloneInstancesRequest::GetEndCreateTime() const
{
    return m_endCreateTime;
}

void DescribeDBSCloneInstancesRequest::SetEndCreateTime(const string& _endCreateTime)
{
    m_endCreateTime = _endCreateTime;
    m_endCreateTimeHasBeenSet = true;
}

bool DescribeDBSCloneInstancesRequest::EndCreateTimeHasBeenSet() const
{
    return m_endCreateTimeHasBeenSet;
}

string DescribeDBSCloneInstancesRequest::GetFilterCloneType() const
{
    return m_filterCloneType;
}

void DescribeDBSCloneInstancesRequest::SetFilterCloneType(const string& _filterCloneType)
{
    m_filterCloneType = _filterCloneType;
    m_filterCloneTypeHasBeenSet = true;
}

bool DescribeDBSCloneInstancesRequest::FilterCloneTypeHasBeenSet() const
{
    return m_filterCloneTypeHasBeenSet;
}

int64_t DescribeDBSCloneInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDBSCloneInstancesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDBSCloneInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeDBSCloneInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDBSCloneInstancesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDBSCloneInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeDBSCloneInstancesRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeDBSCloneInstancesRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeDBSCloneInstancesRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeDBSCloneInstancesRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeDBSCloneInstancesRequest::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeDBSCloneInstancesRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

string DescribeDBSCloneInstancesRequest::GetStartCreateTime() const
{
    return m_startCreateTime;
}

void DescribeDBSCloneInstancesRequest::SetStartCreateTime(const string& _startCreateTime)
{
    m_startCreateTime = _startCreateTime;
    m_startCreateTimeHasBeenSet = true;
}

bool DescribeDBSCloneInstancesRequest::StartCreateTimeHasBeenSet() const
{
    return m_startCreateTimeHasBeenSet;
}


