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

#include <tencentcloud/ctem/v20231128/model/DescribeNetDisksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DescribeNetDisksRequest::DescribeNetDisksRequest() :
    m_customerIdListHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_customerIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_enterpriseUidListHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_createAtStartHasBeenSet(false),
    m_createAtEndHasBeenSet(false),
    m_updateAtStartHasBeenSet(false),
    m_updateAtEndHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_ignoredHasBeenSet(false)
{
}

string DescribeNetDisksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_customerIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customerIdList.begin(); itr != m_customerIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_isNewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isNew, allocator);
    }

    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customerId, allocator);
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

    if (m_enterpriseUidListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseUidList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_enterpriseUidList.begin(); itr != m_enterpriseUidList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_createAtStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAtStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createAtStart.c_str(), allocator).Move(), allocator);
    }

    if (m_createAtEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAtEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createAtEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_updateAtStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateAtStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updateAtStart.c_str(), allocator).Move(), allocator);
    }

    if (m_updateAtEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateAtEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updateAtEnd.c_str(), allocator).Move(), allocator);
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

    if (m_ignoredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ignored";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ignored, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> DescribeNetDisksRequest::GetCustomerIdList() const
{
    return m_customerIdList;
}

void DescribeNetDisksRequest::SetCustomerIdList(const vector<int64_t>& _customerIdList)
{
    m_customerIdList = _customerIdList;
    m_customerIdListHasBeenSet = true;
}

bool DescribeNetDisksRequest::CustomerIdListHasBeenSet() const
{
    return m_customerIdListHasBeenSet;
}

bool DescribeNetDisksRequest::GetIsNew() const
{
    return m_isNew;
}

void DescribeNetDisksRequest::SetIsNew(const bool& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool DescribeNetDisksRequest::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

int64_t DescribeNetDisksRequest::GetCustomerId() const
{
    return m_customerId;
}

void DescribeNetDisksRequest::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool DescribeNetDisksRequest::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

uint64_t DescribeNetDisksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeNetDisksRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeNetDisksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeNetDisksRequest::GetOffset() const
{
    return m_offset;
}

void DescribeNetDisksRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeNetDisksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<string> DescribeNetDisksRequest::GetEnterpriseUidList() const
{
    return m_enterpriseUidList;
}

void DescribeNetDisksRequest::SetEnterpriseUidList(const vector<string>& _enterpriseUidList)
{
    m_enterpriseUidList = _enterpriseUidList;
    m_enterpriseUidListHasBeenSet = true;
}

bool DescribeNetDisksRequest::EnterpriseUidListHasBeenSet() const
{
    return m_enterpriseUidListHasBeenSet;
}

string DescribeNetDisksRequest::GetFormat() const
{
    return m_format;
}

void DescribeNetDisksRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool DescribeNetDisksRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string DescribeNetDisksRequest::GetCreateAtStart() const
{
    return m_createAtStart;
}

void DescribeNetDisksRequest::SetCreateAtStart(const string& _createAtStart)
{
    m_createAtStart = _createAtStart;
    m_createAtStartHasBeenSet = true;
}

bool DescribeNetDisksRequest::CreateAtStartHasBeenSet() const
{
    return m_createAtStartHasBeenSet;
}

string DescribeNetDisksRequest::GetCreateAtEnd() const
{
    return m_createAtEnd;
}

void DescribeNetDisksRequest::SetCreateAtEnd(const string& _createAtEnd)
{
    m_createAtEnd = _createAtEnd;
    m_createAtEndHasBeenSet = true;
}

bool DescribeNetDisksRequest::CreateAtEndHasBeenSet() const
{
    return m_createAtEndHasBeenSet;
}

string DescribeNetDisksRequest::GetUpdateAtStart() const
{
    return m_updateAtStart;
}

void DescribeNetDisksRequest::SetUpdateAtStart(const string& _updateAtStart)
{
    m_updateAtStart = _updateAtStart;
    m_updateAtStartHasBeenSet = true;
}

bool DescribeNetDisksRequest::UpdateAtStartHasBeenSet() const
{
    return m_updateAtStartHasBeenSet;
}

string DescribeNetDisksRequest::GetUpdateAtEnd() const
{
    return m_updateAtEnd;
}

void DescribeNetDisksRequest::SetUpdateAtEnd(const string& _updateAtEnd)
{
    m_updateAtEnd = _updateAtEnd;
    m_updateAtEndHasBeenSet = true;
}

bool DescribeNetDisksRequest::UpdateAtEndHasBeenSet() const
{
    return m_updateAtEndHasBeenSet;
}

vector<Filter> DescribeNetDisksRequest::GetFilters() const
{
    return m_filters;
}

void DescribeNetDisksRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeNetDisksRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

bool DescribeNetDisksRequest::GetIgnored() const
{
    return m_ignored;
}

void DescribeNetDisksRequest::SetIgnored(const bool& _ignored)
{
    m_ignored = _ignored;
    m_ignoredHasBeenSet = true;
}

bool DescribeNetDisksRequest::IgnoredHasBeenSet() const
{
    return m_ignoredHasBeenSet;
}


