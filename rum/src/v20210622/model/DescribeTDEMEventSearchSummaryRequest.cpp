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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMEventSearchSummaryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMEventSearchSummaryRequest::DescribeTDEMEventSearchSummaryRequest() :
    m_appIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_intervalSecHasBeenSet(false),
    m_hasErrorHasBeenSet(false),
    m_minDurationHasBeenSet(false),
    m_maxDurationHasBeenSet(false)
{
}

string DescribeTDEMEventSearchSummaryRequest::ToJsonString() const
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

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filters.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalSec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_intervalSec, allocator);
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


string DescribeTDEMEventSearchSummaryRequest::GetAppId() const
{
    return m_appId;
}

void DescribeTDEMEventSearchSummaryRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeTDEMEventSearchSummaryRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DescribeTDEMEventSearchSummaryRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTDEMEventSearchSummaryRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTDEMEventSearchSummaryRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeTDEMEventSearchSummaryRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTDEMEventSearchSummaryRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTDEMEventSearchSummaryRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeTDEMEventSearchSummaryRequest::GetCategory() const
{
    return m_category;
}

void DescribeTDEMEventSearchSummaryRequest::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool DescribeTDEMEventSearchSummaryRequest::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string DescribeTDEMEventSearchSummaryRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTDEMEventSearchSummaryRequest::SetFilters(const string& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTDEMEventSearchSummaryRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeTDEMEventSearchSummaryRequest::GetIntervalSec() const
{
    return m_intervalSec;
}

void DescribeTDEMEventSearchSummaryRequest::SetIntervalSec(const int64_t& _intervalSec)
{
    m_intervalSec = _intervalSec;
    m_intervalSecHasBeenSet = true;
}

bool DescribeTDEMEventSearchSummaryRequest::IntervalSecHasBeenSet() const
{
    return m_intervalSecHasBeenSet;
}

bool DescribeTDEMEventSearchSummaryRequest::GetHasError() const
{
    return m_hasError;
}

void DescribeTDEMEventSearchSummaryRequest::SetHasError(const bool& _hasError)
{
    m_hasError = _hasError;
    m_hasErrorHasBeenSet = true;
}

bool DescribeTDEMEventSearchSummaryRequest::HasErrorHasBeenSet() const
{
    return m_hasErrorHasBeenSet;
}

int64_t DescribeTDEMEventSearchSummaryRequest::GetMinDuration() const
{
    return m_minDuration;
}

void DescribeTDEMEventSearchSummaryRequest::SetMinDuration(const int64_t& _minDuration)
{
    m_minDuration = _minDuration;
    m_minDurationHasBeenSet = true;
}

bool DescribeTDEMEventSearchSummaryRequest::MinDurationHasBeenSet() const
{
    return m_minDurationHasBeenSet;
}

int64_t DescribeTDEMEventSearchSummaryRequest::GetMaxDuration() const
{
    return m_maxDuration;
}

void DescribeTDEMEventSearchSummaryRequest::SetMaxDuration(const int64_t& _maxDuration)
{
    m_maxDuration = _maxDuration;
    m_maxDurationHasBeenSet = true;
}

bool DescribeTDEMEventSearchSummaryRequest::MaxDurationHasBeenSet() const
{
    return m_maxDurationHasBeenSet;
}


