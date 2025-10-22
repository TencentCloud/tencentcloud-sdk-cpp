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

#include <tencentcloud/ctem/v20231128/model/DescribeAppsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DescribeAppsRequest::DescribeAppsRequest() :
    m_customerIdListHasBeenSet(false),
    m_enterpriseUidListHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_customerIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_createAtStartHasBeenSet(false),
    m_createAtEndHasBeenSet(false),
    m_updateAtStartHasBeenSet(false),
    m_updateAtEndHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_ignoredHasBeenSet(false)
{
}

string DescribeAppsRequest::ToJsonString() const
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


vector<int64_t> DescribeAppsRequest::GetCustomerIdList() const
{
    return m_customerIdList;
}

void DescribeAppsRequest::SetCustomerIdList(const vector<int64_t>& _customerIdList)
{
    m_customerIdList = _customerIdList;
    m_customerIdListHasBeenSet = true;
}

bool DescribeAppsRequest::CustomerIdListHasBeenSet() const
{
    return m_customerIdListHasBeenSet;
}

vector<string> DescribeAppsRequest::GetEnterpriseUidList() const
{
    return m_enterpriseUidList;
}

void DescribeAppsRequest::SetEnterpriseUidList(const vector<string>& _enterpriseUidList)
{
    m_enterpriseUidList = _enterpriseUidList;
    m_enterpriseUidListHasBeenSet = true;
}

bool DescribeAppsRequest::EnterpriseUidListHasBeenSet() const
{
    return m_enterpriseUidListHasBeenSet;
}

bool DescribeAppsRequest::GetIsNew() const
{
    return m_isNew;
}

void DescribeAppsRequest::SetIsNew(const bool& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool DescribeAppsRequest::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

int64_t DescribeAppsRequest::GetCustomerId() const
{
    return m_customerId;
}

void DescribeAppsRequest::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool DescribeAppsRequest::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

uint64_t DescribeAppsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAppsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAppsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeAppsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAppsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAppsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeAppsRequest::GetFormat() const
{
    return m_format;
}

void DescribeAppsRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool DescribeAppsRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string DescribeAppsRequest::GetCreateAtStart() const
{
    return m_createAtStart;
}

void DescribeAppsRequest::SetCreateAtStart(const string& _createAtStart)
{
    m_createAtStart = _createAtStart;
    m_createAtStartHasBeenSet = true;
}

bool DescribeAppsRequest::CreateAtStartHasBeenSet() const
{
    return m_createAtStartHasBeenSet;
}

string DescribeAppsRequest::GetCreateAtEnd() const
{
    return m_createAtEnd;
}

void DescribeAppsRequest::SetCreateAtEnd(const string& _createAtEnd)
{
    m_createAtEnd = _createAtEnd;
    m_createAtEndHasBeenSet = true;
}

bool DescribeAppsRequest::CreateAtEndHasBeenSet() const
{
    return m_createAtEndHasBeenSet;
}

string DescribeAppsRequest::GetUpdateAtStart() const
{
    return m_updateAtStart;
}

void DescribeAppsRequest::SetUpdateAtStart(const string& _updateAtStart)
{
    m_updateAtStart = _updateAtStart;
    m_updateAtStartHasBeenSet = true;
}

bool DescribeAppsRequest::UpdateAtStartHasBeenSet() const
{
    return m_updateAtStartHasBeenSet;
}

string DescribeAppsRequest::GetUpdateAtEnd() const
{
    return m_updateAtEnd;
}

void DescribeAppsRequest::SetUpdateAtEnd(const string& _updateAtEnd)
{
    m_updateAtEnd = _updateAtEnd;
    m_updateAtEndHasBeenSet = true;
}

bool DescribeAppsRequest::UpdateAtEndHasBeenSet() const
{
    return m_updateAtEndHasBeenSet;
}

vector<Filter> DescribeAppsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeAppsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeAppsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

bool DescribeAppsRequest::GetIgnored() const
{
    return m_ignored;
}

void DescribeAppsRequest::SetIgnored(const bool& _ignored)
{
    m_ignored = _ignored;
    m_ignoredHasBeenSet = true;
}

bool DescribeAppsRequest::IgnoredHasBeenSet() const
{
    return m_ignoredHasBeenSet;
}


