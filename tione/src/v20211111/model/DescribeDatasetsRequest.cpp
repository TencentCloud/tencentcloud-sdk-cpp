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

#include <tencentcloud/tione/v20211111/model/DescribeDatasetsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DescribeDatasetsRequest::DescribeDatasetsRequest() :
    m_datasetIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_tagFiltersHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_cFSCheckingHasBeenSet(false),
    m_cFSDetailHasBeenSet(false)
{
}

string DescribeDatasetsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_datasetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_datasetIds.begin(); itr != m_datasetIds.end(); ++itr)
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

    if (m_tagFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagFilters.begin(); itr != m_tagFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_cFSCheckingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFSChecking";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cFSChecking, allocator);
    }

    if (m_cFSDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFSDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cFSDetail, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeDatasetsRequest::GetDatasetIds() const
{
    return m_datasetIds;
}

void DescribeDatasetsRequest::SetDatasetIds(const vector<string>& _datasetIds)
{
    m_datasetIds = _datasetIds;
    m_datasetIdsHasBeenSet = true;
}

bool DescribeDatasetsRequest::DatasetIdsHasBeenSet() const
{
    return m_datasetIdsHasBeenSet;
}

vector<Filter> DescribeDatasetsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeDatasetsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeDatasetsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<TagFilter> DescribeDatasetsRequest::GetTagFilters() const
{
    return m_tagFilters;
}

void DescribeDatasetsRequest::SetTagFilters(const vector<TagFilter>& _tagFilters)
{
    m_tagFilters = _tagFilters;
    m_tagFiltersHasBeenSet = true;
}

bool DescribeDatasetsRequest::TagFiltersHasBeenSet() const
{
    return m_tagFiltersHasBeenSet;
}

string DescribeDatasetsRequest::GetOrder() const
{
    return m_order;
}

void DescribeDatasetsRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeDatasetsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeDatasetsRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeDatasetsRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeDatasetsRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

uint64_t DescribeDatasetsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDatasetsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDatasetsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeDatasetsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDatasetsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDatasetsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeDatasetsRequest::GetCFSChecking() const
{
    return m_cFSChecking;
}

void DescribeDatasetsRequest::SetCFSChecking(const bool& _cFSChecking)
{
    m_cFSChecking = _cFSChecking;
    m_cFSCheckingHasBeenSet = true;
}

bool DescribeDatasetsRequest::CFSCheckingHasBeenSet() const
{
    return m_cFSCheckingHasBeenSet;
}

bool DescribeDatasetsRequest::GetCFSDetail() const
{
    return m_cFSDetail;
}

void DescribeDatasetsRequest::SetCFSDetail(const bool& _cFSDetail)
{
    m_cFSDetail = _cFSDetail;
    m_cFSDetailHasBeenSet = true;
}

bool DescribeDatasetsRequest::CFSDetailHasBeenSet() const
{
    return m_cFSDetailHasBeenSet;
}


