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

#include <tencentcloud/billing/v20180709/model/DescribeAllocationSummaryByBusinessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeAllocationSummaryByBusinessRequest::DescribeAllocationSummaryByBusinessRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_monthHasBeenSet(false),
    m_periodTypeHasBeenSet(false),
    m_treeNodeUniqKeysHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_billDatesHasBeenSet(false),
    m_businessCodesHasBeenSet(false),
    m_searchKeyHasBeenSet(false)
{
}

string DescribeAllocationSummaryByBusinessRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_month.c_str(), allocator).Move(), allocator);
    }

    if (m_periodTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_periodType.c_str(), allocator).Move(), allocator);
    }

    if (m_treeNodeUniqKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreeNodeUniqKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_treeNodeUniqKeys.begin(); itr != m_treeNodeUniqKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortType.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_billDatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillDates";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_billDates.begin(); itr != m_billDates.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_businessCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_businessCodes.begin(); itr != m_businessCodes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeAllocationSummaryByBusinessRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAllocationSummaryByBusinessRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAllocationSummaryByBusinessRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeAllocationSummaryByBusinessRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAllocationSummaryByBusinessRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAllocationSummaryByBusinessRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeAllocationSummaryByBusinessRequest::GetMonth() const
{
    return m_month;
}

void DescribeAllocationSummaryByBusinessRequest::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool DescribeAllocationSummaryByBusinessRequest::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}

string DescribeAllocationSummaryByBusinessRequest::GetPeriodType() const
{
    return m_periodType;
}

void DescribeAllocationSummaryByBusinessRequest::SetPeriodType(const string& _periodType)
{
    m_periodType = _periodType;
    m_periodTypeHasBeenSet = true;
}

bool DescribeAllocationSummaryByBusinessRequest::PeriodTypeHasBeenSet() const
{
    return m_periodTypeHasBeenSet;
}

vector<string> DescribeAllocationSummaryByBusinessRequest::GetTreeNodeUniqKeys() const
{
    return m_treeNodeUniqKeys;
}

void DescribeAllocationSummaryByBusinessRequest::SetTreeNodeUniqKeys(const vector<string>& _treeNodeUniqKeys)
{
    m_treeNodeUniqKeys = _treeNodeUniqKeys;
    m_treeNodeUniqKeysHasBeenSet = true;
}

bool DescribeAllocationSummaryByBusinessRequest::TreeNodeUniqKeysHasBeenSet() const
{
    return m_treeNodeUniqKeysHasBeenSet;
}

string DescribeAllocationSummaryByBusinessRequest::GetSortType() const
{
    return m_sortType;
}

void DescribeAllocationSummaryByBusinessRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribeAllocationSummaryByBusinessRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

string DescribeAllocationSummaryByBusinessRequest::GetSort() const
{
    return m_sort;
}

void DescribeAllocationSummaryByBusinessRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeAllocationSummaryByBusinessRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

vector<string> DescribeAllocationSummaryByBusinessRequest::GetBillDates() const
{
    return m_billDates;
}

void DescribeAllocationSummaryByBusinessRequest::SetBillDates(const vector<string>& _billDates)
{
    m_billDates = _billDates;
    m_billDatesHasBeenSet = true;
}

bool DescribeAllocationSummaryByBusinessRequest::BillDatesHasBeenSet() const
{
    return m_billDatesHasBeenSet;
}

vector<string> DescribeAllocationSummaryByBusinessRequest::GetBusinessCodes() const
{
    return m_businessCodes;
}

void DescribeAllocationSummaryByBusinessRequest::SetBusinessCodes(const vector<string>& _businessCodes)
{
    m_businessCodes = _businessCodes;
    m_businessCodesHasBeenSet = true;
}

bool DescribeAllocationSummaryByBusinessRequest::BusinessCodesHasBeenSet() const
{
    return m_businessCodesHasBeenSet;
}

string DescribeAllocationSummaryByBusinessRequest::GetSearchKey() const
{
    return m_searchKey;
}

void DescribeAllocationSummaryByBusinessRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool DescribeAllocationSummaryByBusinessRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}


