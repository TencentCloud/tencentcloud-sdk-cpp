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

#include <tencentcloud/rum/v20210622/model/DescribeStruggleDistributionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeStruggleDistributionRequest::DescribeStruggleDistributionRequest() :
    m_appIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_journeyFiltersHasBeenSet(false),
    m_hasStruggleHasBeenSet(false),
    m_startPageHasBeenSet(false),
    m_endPageHasBeenSet(false)
{
}

string DescribeStruggleDistributionRequest::ToJsonString() const
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

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filters.c_str(), allocator).Move(), allocator);
    }

    if (m_journeyFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JourneyFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_journeyFilters.c_str(), allocator).Move(), allocator);
    }

    if (m_hasStruggleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasStruggle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hasStruggle, allocator);
    }

    if (m_startPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startPage.c_str(), allocator).Move(), allocator);
    }

    if (m_endPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endPage.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeStruggleDistributionRequest::GetAppId() const
{
    return m_appId;
}

void DescribeStruggleDistributionRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeStruggleDistributionRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DescribeStruggleDistributionRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeStruggleDistributionRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeStruggleDistributionRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeStruggleDistributionRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeStruggleDistributionRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeStruggleDistributionRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeStruggleDistributionRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeStruggleDistributionRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeStruggleDistributionRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeStruggleDistributionRequest::GetFilters() const
{
    return m_filters;
}

void DescribeStruggleDistributionRequest::SetFilters(const string& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeStruggleDistributionRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeStruggleDistributionRequest::GetJourneyFilters() const
{
    return m_journeyFilters;
}

void DescribeStruggleDistributionRequest::SetJourneyFilters(const string& _journeyFilters)
{
    m_journeyFilters = _journeyFilters;
    m_journeyFiltersHasBeenSet = true;
}

bool DescribeStruggleDistributionRequest::JourneyFiltersHasBeenSet() const
{
    return m_journeyFiltersHasBeenSet;
}

bool DescribeStruggleDistributionRequest::GetHasStruggle() const
{
    return m_hasStruggle;
}

void DescribeStruggleDistributionRequest::SetHasStruggle(const bool& _hasStruggle)
{
    m_hasStruggle = _hasStruggle;
    m_hasStruggleHasBeenSet = true;
}

bool DescribeStruggleDistributionRequest::HasStruggleHasBeenSet() const
{
    return m_hasStruggleHasBeenSet;
}

string DescribeStruggleDistributionRequest::GetStartPage() const
{
    return m_startPage;
}

void DescribeStruggleDistributionRequest::SetStartPage(const string& _startPage)
{
    m_startPage = _startPage;
    m_startPageHasBeenSet = true;
}

bool DescribeStruggleDistributionRequest::StartPageHasBeenSet() const
{
    return m_startPageHasBeenSet;
}

string DescribeStruggleDistributionRequest::GetEndPage() const
{
    return m_endPage;
}

void DescribeStruggleDistributionRequest::SetEndPage(const string& _endPage)
{
    m_endPage = _endPage;
    m_endPageHasBeenSet = true;
}

bool DescribeStruggleDistributionRequest::EndPageHasBeenSet() const
{
    return m_endPageHasBeenSet;
}


