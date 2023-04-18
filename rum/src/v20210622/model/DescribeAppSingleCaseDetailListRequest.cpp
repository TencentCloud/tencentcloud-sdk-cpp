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

#include <tencentcloud/rum/v20210622/model/DescribeAppSingleCaseDetailListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeAppSingleCaseDetailListRequest::DescribeAppSingleCaseDetailListRequest() :
    m_projectIDHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_filterSimpleHasBeenSet(false),
    m_groupByHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeAppSingleCaseDetailListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectID, allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fields.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filter.c_str(), allocator).Move(), allocator);
    }

    if (m_filterSimpleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterSimple";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterSimple.c_str(), allocator).Move(), allocator);
    }

    if (m_groupByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupBy.begin(); itr != m_groupBy.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_orderBy.begin(); itr != m_orderBy.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAppSingleCaseDetailListRequest::GetProjectID() const
{
    return m_projectID;
}

void DescribeAppSingleCaseDetailListRequest::SetProjectID(const int64_t& _projectID)
{
    m_projectID = _projectID;
    m_projectIDHasBeenSet = true;
}

bool DescribeAppSingleCaseDetailListRequest::ProjectIDHasBeenSet() const
{
    return m_projectIDHasBeenSet;
}

string DescribeAppSingleCaseDetailListRequest::GetFrom() const
{
    return m_from;
}

void DescribeAppSingleCaseDetailListRequest::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool DescribeAppSingleCaseDetailListRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string DescribeAppSingleCaseDetailListRequest::GetFields() const
{
    return m_fields;
}

void DescribeAppSingleCaseDetailListRequest::SetFields(const string& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool DescribeAppSingleCaseDetailListRequest::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}

string DescribeAppSingleCaseDetailListRequest::GetFilter() const
{
    return m_filter;
}

void DescribeAppSingleCaseDetailListRequest::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeAppSingleCaseDetailListRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

string DescribeAppSingleCaseDetailListRequest::GetFilterSimple() const
{
    return m_filterSimple;
}

void DescribeAppSingleCaseDetailListRequest::SetFilterSimple(const string& _filterSimple)
{
    m_filterSimple = _filterSimple;
    m_filterSimpleHasBeenSet = true;
}

bool DescribeAppSingleCaseDetailListRequest::FilterSimpleHasBeenSet() const
{
    return m_filterSimpleHasBeenSet;
}

vector<string> DescribeAppSingleCaseDetailListRequest::GetGroupBy() const
{
    return m_groupBy;
}

void DescribeAppSingleCaseDetailListRequest::SetGroupBy(const vector<string>& _groupBy)
{
    m_groupBy = _groupBy;
    m_groupByHasBeenSet = true;
}

bool DescribeAppSingleCaseDetailListRequest::GroupByHasBeenSet() const
{
    return m_groupByHasBeenSet;
}

vector<string> DescribeAppSingleCaseDetailListRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeAppSingleCaseDetailListRequest::SetOrderBy(const vector<string>& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeAppSingleCaseDetailListRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

int64_t DescribeAppSingleCaseDetailListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAppSingleCaseDetailListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAppSingleCaseDetailListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeAppSingleCaseDetailListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAppSingleCaseDetailListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAppSingleCaseDetailListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


