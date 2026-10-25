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

#include <tencentcloud/rum/v20210622/model/DescribeFieldValuesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeFieldValuesRequest::DescribeFieldValuesRequest() :
    m_appIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_fieldNameHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_strictPiiPrefixHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_hasErrorHasBeenSet(false),
    m_minDurationHasBeenSet(false),
    m_maxDurationHasBeenSet(false)
{
}

string DescribeFieldValuesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_fieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fieldName.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filters.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_prefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prefix.c_str(), allocator).Move(), allocator);
    }

    if (m_strictPiiPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrictPiiPrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_strictPiiPrefix, allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_hasErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasError";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hasError, allocator);
    }

    if (m_minDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minDuration, allocator);
    }

    if (m_maxDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDuration, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeFieldValuesRequest::GetAppId() const
{
    return m_appId;
}

void DescribeFieldValuesRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeFieldValuesRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DescribeFieldValuesRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeFieldValuesRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeFieldValuesRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeFieldValuesRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeFieldValuesRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeFieldValuesRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeFieldValuesRequest::GetFieldName() const
{
    return m_fieldName;
}

void DescribeFieldValuesRequest::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool DescribeFieldValuesRequest::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

int64_t DescribeFieldValuesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeFieldValuesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeFieldValuesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeFieldValuesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeFieldValuesRequest::SetFilters(const string& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeFieldValuesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeFieldValuesRequest::GetCategory() const
{
    return m_category;
}

void DescribeFieldValuesRequest::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool DescribeFieldValuesRequest::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string DescribeFieldValuesRequest::GetPrefix() const
{
    return m_prefix;
}

void DescribeFieldValuesRequest::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool DescribeFieldValuesRequest::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

bool DescribeFieldValuesRequest::GetStrictPiiPrefix() const
{
    return m_strictPiiPrefix;
}

void DescribeFieldValuesRequest::SetStrictPiiPrefix(const bool& _strictPiiPrefix)
{
    m_strictPiiPrefix = _strictPiiPrefix;
    m_strictPiiPrefixHasBeenSet = true;
}

bool DescribeFieldValuesRequest::StrictPiiPrefixHasBeenSet() const
{
    return m_strictPiiPrefixHasBeenSet;
}

string DescribeFieldValuesRequest::GetScope() const
{
    return m_scope;
}

void DescribeFieldValuesRequest::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool DescribeFieldValuesRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

bool DescribeFieldValuesRequest::GetHasError() const
{
    return m_hasError;
}

void DescribeFieldValuesRequest::SetHasError(const bool& _hasError)
{
    m_hasError = _hasError;
    m_hasErrorHasBeenSet = true;
}

bool DescribeFieldValuesRequest::HasErrorHasBeenSet() const
{
    return m_hasErrorHasBeenSet;
}

int64_t DescribeFieldValuesRequest::GetMinDuration() const
{
    return m_minDuration;
}

void DescribeFieldValuesRequest::SetMinDuration(const int64_t& _minDuration)
{
    m_minDuration = _minDuration;
    m_minDurationHasBeenSet = true;
}

bool DescribeFieldValuesRequest::MinDurationHasBeenSet() const
{
    return m_minDurationHasBeenSet;
}

int64_t DescribeFieldValuesRequest::GetMaxDuration() const
{
    return m_maxDuration;
}

void DescribeFieldValuesRequest::SetMaxDuration(const int64_t& _maxDuration)
{
    m_maxDuration = _maxDuration;
    m_maxDurationHasBeenSet = true;
}

bool DescribeFieldValuesRequest::MaxDurationHasBeenSet() const
{
    return m_maxDurationHasBeenSet;
}


