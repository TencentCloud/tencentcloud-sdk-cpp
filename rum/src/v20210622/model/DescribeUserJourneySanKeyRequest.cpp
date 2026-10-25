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

#include <tencentcloud/rum/v20210622/model/DescribeUserJourneySanKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeUserJourneySanKeyRequest::DescribeUserJourneySanKeyRequest() :
    m_appIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_topPagesPerStepHasBeenSet(false),
    m_minSessionThresholdHasBeenSet(false),
    m_startPageHasBeenSet(false),
    m_endPageHasBeenSet(false),
    m_hasStruggleHasBeenSet(false)
{
}

string DescribeUserJourneySanKeyRequest::ToJsonString() const
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

    if (m_topPagesPerStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopPagesPerStep";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topPagesPerStep, allocator);
    }

    if (m_minSessionThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinSessionThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minSessionThreshold, allocator);
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

    if (m_hasStruggleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasStruggle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hasStruggle, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeUserJourneySanKeyRequest::GetAppId() const
{
    return m_appId;
}

void DescribeUserJourneySanKeyRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeUserJourneySanKeyRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DescribeUserJourneySanKeyRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeUserJourneySanKeyRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeUserJourneySanKeyRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeUserJourneySanKeyRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeUserJourneySanKeyRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeUserJourneySanKeyRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeUserJourneySanKeyRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeUserJourneySanKeyRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeUserJourneySanKeyRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeUserJourneySanKeyRequest::GetFilters() const
{
    return m_filters;
}

void DescribeUserJourneySanKeyRequest::SetFilters(const string& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeUserJourneySanKeyRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeUserJourneySanKeyRequest::GetTopPagesPerStep() const
{
    return m_topPagesPerStep;
}

void DescribeUserJourneySanKeyRequest::SetTopPagesPerStep(const int64_t& _topPagesPerStep)
{
    m_topPagesPerStep = _topPagesPerStep;
    m_topPagesPerStepHasBeenSet = true;
}

bool DescribeUserJourneySanKeyRequest::TopPagesPerStepHasBeenSet() const
{
    return m_topPagesPerStepHasBeenSet;
}

int64_t DescribeUserJourneySanKeyRequest::GetMinSessionThreshold() const
{
    return m_minSessionThreshold;
}

void DescribeUserJourneySanKeyRequest::SetMinSessionThreshold(const int64_t& _minSessionThreshold)
{
    m_minSessionThreshold = _minSessionThreshold;
    m_minSessionThresholdHasBeenSet = true;
}

bool DescribeUserJourneySanKeyRequest::MinSessionThresholdHasBeenSet() const
{
    return m_minSessionThresholdHasBeenSet;
}

string DescribeUserJourneySanKeyRequest::GetStartPage() const
{
    return m_startPage;
}

void DescribeUserJourneySanKeyRequest::SetStartPage(const string& _startPage)
{
    m_startPage = _startPage;
    m_startPageHasBeenSet = true;
}

bool DescribeUserJourneySanKeyRequest::StartPageHasBeenSet() const
{
    return m_startPageHasBeenSet;
}

string DescribeUserJourneySanKeyRequest::GetEndPage() const
{
    return m_endPage;
}

void DescribeUserJourneySanKeyRequest::SetEndPage(const string& _endPage)
{
    m_endPage = _endPage;
    m_endPageHasBeenSet = true;
}

bool DescribeUserJourneySanKeyRequest::EndPageHasBeenSet() const
{
    return m_endPageHasBeenSet;
}

bool DescribeUserJourneySanKeyRequest::GetHasStruggle() const
{
    return m_hasStruggle;
}

void DescribeUserJourneySanKeyRequest::SetHasStruggle(const bool& _hasStruggle)
{
    m_hasStruggle = _hasStruggle;
    m_hasStruggleHasBeenSet = true;
}

bool DescribeUserJourneySanKeyRequest::HasStruggleHasBeenSet() const
{
    return m_hasStruggleHasBeenSet;
}


