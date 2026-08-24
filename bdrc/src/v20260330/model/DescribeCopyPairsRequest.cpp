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

#include <tencentcloud/bdrc/v20260330/model/DescribeCopyPairsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

DescribeCopyPairsRequest::DescribeCopyPairsRequest() :
    m_copyPairTypeHasBeenSet(false),
    m_copyPairIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_queryProtectionTimeHasBeenSet(false),
    m_getAllCopyPairHasBeenSet(false),
    m_queryCvmCreateParamsHasBeenSet(false),
    m_createFromHasBeenSet(false)
{
}

string DescribeCopyPairsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_copyPairTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_copyPairType.c_str(), allocator).Move(), allocator);
    }

    if (m_copyPairIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_copyPairIds.begin(); itr != m_copyPairIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_orderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderField.c_str(), allocator).Move(), allocator);
    }

    if (m_queryProtectionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryProtectionTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryProtectionTime, allocator);
    }

    if (m_getAllCopyPairHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GetAllCopyPair";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_getAllCopyPair, allocator);
    }

    if (m_queryCvmCreateParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryCvmCreateParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryCvmCreateParams, allocator);
    }

    if (m_createFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createFrom.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCopyPairsRequest::GetCopyPairType() const
{
    return m_copyPairType;
}

void DescribeCopyPairsRequest::SetCopyPairType(const string& _copyPairType)
{
    m_copyPairType = _copyPairType;
    m_copyPairTypeHasBeenSet = true;
}

bool DescribeCopyPairsRequest::CopyPairTypeHasBeenSet() const
{
    return m_copyPairTypeHasBeenSet;
}

vector<string> DescribeCopyPairsRequest::GetCopyPairIds() const
{
    return m_copyPairIds;
}

void DescribeCopyPairsRequest::SetCopyPairIds(const vector<string>& _copyPairIds)
{
    m_copyPairIds = _copyPairIds;
    m_copyPairIdsHasBeenSet = true;
}

bool DescribeCopyPairsRequest::CopyPairIdsHasBeenSet() const
{
    return m_copyPairIdsHasBeenSet;
}

vector<FilterModel> DescribeCopyPairsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeCopyPairsRequest::SetFilters(const vector<FilterModel>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeCopyPairsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeCopyPairsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCopyPairsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCopyPairsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeCopyPairsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCopyPairsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCopyPairsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeCopyPairsRequest::GetOrder() const
{
    return m_order;
}

void DescribeCopyPairsRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeCopyPairsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeCopyPairsRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeCopyPairsRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeCopyPairsRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

bool DescribeCopyPairsRequest::GetQueryProtectionTime() const
{
    return m_queryProtectionTime;
}

void DescribeCopyPairsRequest::SetQueryProtectionTime(const bool& _queryProtectionTime)
{
    m_queryProtectionTime = _queryProtectionTime;
    m_queryProtectionTimeHasBeenSet = true;
}

bool DescribeCopyPairsRequest::QueryProtectionTimeHasBeenSet() const
{
    return m_queryProtectionTimeHasBeenSet;
}

bool DescribeCopyPairsRequest::GetGetAllCopyPair() const
{
    return m_getAllCopyPair;
}

void DescribeCopyPairsRequest::SetGetAllCopyPair(const bool& _getAllCopyPair)
{
    m_getAllCopyPair = _getAllCopyPair;
    m_getAllCopyPairHasBeenSet = true;
}

bool DescribeCopyPairsRequest::GetAllCopyPairHasBeenSet() const
{
    return m_getAllCopyPairHasBeenSet;
}

bool DescribeCopyPairsRequest::GetQueryCvmCreateParams() const
{
    return m_queryCvmCreateParams;
}

void DescribeCopyPairsRequest::SetQueryCvmCreateParams(const bool& _queryCvmCreateParams)
{
    m_queryCvmCreateParams = _queryCvmCreateParams;
    m_queryCvmCreateParamsHasBeenSet = true;
}

bool DescribeCopyPairsRequest::QueryCvmCreateParamsHasBeenSet() const
{
    return m_queryCvmCreateParamsHasBeenSet;
}

string DescribeCopyPairsRequest::GetCreateFrom() const
{
    return m_createFrom;
}

void DescribeCopyPairsRequest::SetCreateFrom(const string& _createFrom)
{
    m_createFrom = _createFrom;
    m_createFromHasBeenSet = true;
}

bool DescribeCopyPairsRequest::CreateFromHasBeenSet() const
{
    return m_createFromHasBeenSet;
}


