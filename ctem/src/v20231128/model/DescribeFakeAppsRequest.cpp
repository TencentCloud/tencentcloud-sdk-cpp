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

#include <tencentcloud/ctem/v20231128/model/DescribeFakeAppsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DescribeFakeAppsRequest::DescribeFakeAppsRequest() :
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

string DescribeFakeAppsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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


bool DescribeFakeAppsRequest::GetIsNew() const
{
    return m_isNew;
}

void DescribeFakeAppsRequest::SetIsNew(const bool& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool DescribeFakeAppsRequest::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

int64_t DescribeFakeAppsRequest::GetCustomerId() const
{
    return m_customerId;
}

void DescribeFakeAppsRequest::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool DescribeFakeAppsRequest::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

uint64_t DescribeFakeAppsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeFakeAppsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeFakeAppsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeFakeAppsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeFakeAppsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeFakeAppsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<string> DescribeFakeAppsRequest::GetEnterpriseUidList() const
{
    return m_enterpriseUidList;
}

void DescribeFakeAppsRequest::SetEnterpriseUidList(const vector<string>& _enterpriseUidList)
{
    m_enterpriseUidList = _enterpriseUidList;
    m_enterpriseUidListHasBeenSet = true;
}

bool DescribeFakeAppsRequest::EnterpriseUidListHasBeenSet() const
{
    return m_enterpriseUidListHasBeenSet;
}

string DescribeFakeAppsRequest::GetFormat() const
{
    return m_format;
}

void DescribeFakeAppsRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool DescribeFakeAppsRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string DescribeFakeAppsRequest::GetCreateAtStart() const
{
    return m_createAtStart;
}

void DescribeFakeAppsRequest::SetCreateAtStart(const string& _createAtStart)
{
    m_createAtStart = _createAtStart;
    m_createAtStartHasBeenSet = true;
}

bool DescribeFakeAppsRequest::CreateAtStartHasBeenSet() const
{
    return m_createAtStartHasBeenSet;
}

string DescribeFakeAppsRequest::GetCreateAtEnd() const
{
    return m_createAtEnd;
}

void DescribeFakeAppsRequest::SetCreateAtEnd(const string& _createAtEnd)
{
    m_createAtEnd = _createAtEnd;
    m_createAtEndHasBeenSet = true;
}

bool DescribeFakeAppsRequest::CreateAtEndHasBeenSet() const
{
    return m_createAtEndHasBeenSet;
}

string DescribeFakeAppsRequest::GetUpdateAtStart() const
{
    return m_updateAtStart;
}

void DescribeFakeAppsRequest::SetUpdateAtStart(const string& _updateAtStart)
{
    m_updateAtStart = _updateAtStart;
    m_updateAtStartHasBeenSet = true;
}

bool DescribeFakeAppsRequest::UpdateAtStartHasBeenSet() const
{
    return m_updateAtStartHasBeenSet;
}

string DescribeFakeAppsRequest::GetUpdateAtEnd() const
{
    return m_updateAtEnd;
}

void DescribeFakeAppsRequest::SetUpdateAtEnd(const string& _updateAtEnd)
{
    m_updateAtEnd = _updateAtEnd;
    m_updateAtEndHasBeenSet = true;
}

bool DescribeFakeAppsRequest::UpdateAtEndHasBeenSet() const
{
    return m_updateAtEndHasBeenSet;
}

vector<Filter> DescribeFakeAppsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeFakeAppsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeFakeAppsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

bool DescribeFakeAppsRequest::GetIgnored() const
{
    return m_ignored;
}

void DescribeFakeAppsRequest::SetIgnored(const bool& _ignored)
{
    m_ignored = _ignored;
    m_ignoredHasBeenSet = true;
}

bool DescribeFakeAppsRequest::IgnoredHasBeenSet() const
{
    return m_ignoredHasBeenSet;
}


