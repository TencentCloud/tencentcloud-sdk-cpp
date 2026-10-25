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

#include <tencentcloud/rum/v20210622/model/DescribeSessionListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeSessionListRequest::DescribeSessionListRequest() :
    m_appIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sessionTypeHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_sortOrderHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_deviceTypesHasBeenSet(false),
    m_browsersHasBeenSet(false),
    m_oSListHasBeenSet(false),
    m_platformsHasBeenSet(false),
    m_appVersionsHasBeenSet(false),
    m_countriesHasBeenSet(false),
    m_hasStruggleHasBeenSet(false),
    m_struggleRanksHasBeenSet(false),
    m_struggleTypesHasBeenSet(false),
    m_hasErrorHasBeenSet(false),
    m_visitedPageHasBeenSet(false),
    m_containsEventHasBeenSet(false),
    m_minDurationHasBeenSet(false),
    m_maxDurationHasBeenSet(false),
    m_perfFilterHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_environmentsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_startPageHasBeenSet(false),
    m_endPageHasBeenSet(false),
    m_journeyFiltersHasBeenSet(false)
{
}

string DescribeSessionListRequest::ToJsonString() const
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

    if (m_sessionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionType.c_str(), allocator).Move(), allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_sortByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortBy.c_str(), allocator).Move(), allocator);
    }

    if (m_sortOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceTypes.begin(); itr != m_deviceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_browsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Browsers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_browsers.begin(); itr != m_browsers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_oSListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OSList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_oSList.begin(); itr != m_oSList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_platformsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platforms";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_platforms.begin(); itr != m_platforms.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_appVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_appVersions.begin(); itr != m_appVersions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_countriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Countries";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_countries.begin(); itr != m_countries.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hasStruggleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasStruggle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hasStruggle, allocator);
    }

    if (m_struggleRanksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StruggleRanks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_struggleRanks.begin(); itr != m_struggleRanks.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_struggleTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StruggleTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_struggleTypes.begin(); itr != m_struggleTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hasErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasError";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hasError, allocator);
    }

    if (m_visitedPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisitedPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_visitedPage.c_str(), allocator).Move(), allocator);
    }

    if (m_containsEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainsEvent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_containsEvent.c_str(), allocator).Move(), allocator);
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

    if (m_perfFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerfFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_perfFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_regionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regions.begin(); itr != m_regions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_environmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environments";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_environments.begin(); itr != m_environments.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filters.c_str(), allocator).Move(), allocator);
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

    if (m_journeyFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JourneyFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_journeyFilters.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSessionListRequest::GetAppId() const
{
    return m_appId;
}

void DescribeSessionListRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeSessionListRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DescribeSessionListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeSessionListRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeSessionListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeSessionListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeSessionListRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeSessionListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeSessionListRequest::GetSessionType() const
{
    return m_sessionType;
}

void DescribeSessionListRequest::SetSessionType(const string& _sessionType)
{
    m_sessionType = _sessionType;
    m_sessionTypeHasBeenSet = true;
}

bool DescribeSessionListRequest::SessionTypeHasBeenSet() const
{
    return m_sessionTypeHasBeenSet;
}

int64_t DescribeSessionListRequest::GetPage() const
{
    return m_page;
}

void DescribeSessionListRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeSessionListRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeSessionListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeSessionListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeSessionListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeSessionListRequest::GetSortBy() const
{
    return m_sortBy;
}

void DescribeSessionListRequest::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeSessionListRequest::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

string DescribeSessionListRequest::GetSortOrder() const
{
    return m_sortOrder;
}

void DescribeSessionListRequest::SetSortOrder(const string& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool DescribeSessionListRequest::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}

string DescribeSessionListRequest::GetUserId() const
{
    return m_userId;
}

void DescribeSessionListRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeSessionListRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeSessionListRequest::GetSessionId() const
{
    return m_sessionId;
}

void DescribeSessionListRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DescribeSessionListRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

vector<string> DescribeSessionListRequest::GetDeviceTypes() const
{
    return m_deviceTypes;
}

void DescribeSessionListRequest::SetDeviceTypes(const vector<string>& _deviceTypes)
{
    m_deviceTypes = _deviceTypes;
    m_deviceTypesHasBeenSet = true;
}

bool DescribeSessionListRequest::DeviceTypesHasBeenSet() const
{
    return m_deviceTypesHasBeenSet;
}

vector<string> DescribeSessionListRequest::GetBrowsers() const
{
    return m_browsers;
}

void DescribeSessionListRequest::SetBrowsers(const vector<string>& _browsers)
{
    m_browsers = _browsers;
    m_browsersHasBeenSet = true;
}

bool DescribeSessionListRequest::BrowsersHasBeenSet() const
{
    return m_browsersHasBeenSet;
}

vector<string> DescribeSessionListRequest::GetOSList() const
{
    return m_oSList;
}

void DescribeSessionListRequest::SetOSList(const vector<string>& _oSList)
{
    m_oSList = _oSList;
    m_oSListHasBeenSet = true;
}

bool DescribeSessionListRequest::OSListHasBeenSet() const
{
    return m_oSListHasBeenSet;
}

vector<string> DescribeSessionListRequest::GetPlatforms() const
{
    return m_platforms;
}

void DescribeSessionListRequest::SetPlatforms(const vector<string>& _platforms)
{
    m_platforms = _platforms;
    m_platformsHasBeenSet = true;
}

bool DescribeSessionListRequest::PlatformsHasBeenSet() const
{
    return m_platformsHasBeenSet;
}

vector<string> DescribeSessionListRequest::GetAppVersions() const
{
    return m_appVersions;
}

void DescribeSessionListRequest::SetAppVersions(const vector<string>& _appVersions)
{
    m_appVersions = _appVersions;
    m_appVersionsHasBeenSet = true;
}

bool DescribeSessionListRequest::AppVersionsHasBeenSet() const
{
    return m_appVersionsHasBeenSet;
}

vector<string> DescribeSessionListRequest::GetCountries() const
{
    return m_countries;
}

void DescribeSessionListRequest::SetCountries(const vector<string>& _countries)
{
    m_countries = _countries;
    m_countriesHasBeenSet = true;
}

bool DescribeSessionListRequest::CountriesHasBeenSet() const
{
    return m_countriesHasBeenSet;
}

bool DescribeSessionListRequest::GetHasStruggle() const
{
    return m_hasStruggle;
}

void DescribeSessionListRequest::SetHasStruggle(const bool& _hasStruggle)
{
    m_hasStruggle = _hasStruggle;
    m_hasStruggleHasBeenSet = true;
}

bool DescribeSessionListRequest::HasStruggleHasBeenSet() const
{
    return m_hasStruggleHasBeenSet;
}

vector<string> DescribeSessionListRequest::GetStruggleRanks() const
{
    return m_struggleRanks;
}

void DescribeSessionListRequest::SetStruggleRanks(const vector<string>& _struggleRanks)
{
    m_struggleRanks = _struggleRanks;
    m_struggleRanksHasBeenSet = true;
}

bool DescribeSessionListRequest::StruggleRanksHasBeenSet() const
{
    return m_struggleRanksHasBeenSet;
}

vector<string> DescribeSessionListRequest::GetStruggleTypes() const
{
    return m_struggleTypes;
}

void DescribeSessionListRequest::SetStruggleTypes(const vector<string>& _struggleTypes)
{
    m_struggleTypes = _struggleTypes;
    m_struggleTypesHasBeenSet = true;
}

bool DescribeSessionListRequest::StruggleTypesHasBeenSet() const
{
    return m_struggleTypesHasBeenSet;
}

bool DescribeSessionListRequest::GetHasError() const
{
    return m_hasError;
}

void DescribeSessionListRequest::SetHasError(const bool& _hasError)
{
    m_hasError = _hasError;
    m_hasErrorHasBeenSet = true;
}

bool DescribeSessionListRequest::HasErrorHasBeenSet() const
{
    return m_hasErrorHasBeenSet;
}

string DescribeSessionListRequest::GetVisitedPage() const
{
    return m_visitedPage;
}

void DescribeSessionListRequest::SetVisitedPage(const string& _visitedPage)
{
    m_visitedPage = _visitedPage;
    m_visitedPageHasBeenSet = true;
}

bool DescribeSessionListRequest::VisitedPageHasBeenSet() const
{
    return m_visitedPageHasBeenSet;
}

string DescribeSessionListRequest::GetContainsEvent() const
{
    return m_containsEvent;
}

void DescribeSessionListRequest::SetContainsEvent(const string& _containsEvent)
{
    m_containsEvent = _containsEvent;
    m_containsEventHasBeenSet = true;
}

bool DescribeSessionListRequest::ContainsEventHasBeenSet() const
{
    return m_containsEventHasBeenSet;
}

int64_t DescribeSessionListRequest::GetMinDuration() const
{
    return m_minDuration;
}

void DescribeSessionListRequest::SetMinDuration(const int64_t& _minDuration)
{
    m_minDuration = _minDuration;
    m_minDurationHasBeenSet = true;
}

bool DescribeSessionListRequest::MinDurationHasBeenSet() const
{
    return m_minDurationHasBeenSet;
}

int64_t DescribeSessionListRequest::GetMaxDuration() const
{
    return m_maxDuration;
}

void DescribeSessionListRequest::SetMaxDuration(const int64_t& _maxDuration)
{
    m_maxDuration = _maxDuration;
    m_maxDurationHasBeenSet = true;
}

bool DescribeSessionListRequest::MaxDurationHasBeenSet() const
{
    return m_maxDurationHasBeenSet;
}

string DescribeSessionListRequest::GetPerfFilter() const
{
    return m_perfFilter;
}

void DescribeSessionListRequest::SetPerfFilter(const string& _perfFilter)
{
    m_perfFilter = _perfFilter;
    m_perfFilterHasBeenSet = true;
}

bool DescribeSessionListRequest::PerfFilterHasBeenSet() const
{
    return m_perfFilterHasBeenSet;
}

vector<string> DescribeSessionListRequest::GetRegions() const
{
    return m_regions;
}

void DescribeSessionListRequest::SetRegions(const vector<string>& _regions)
{
    m_regions = _regions;
    m_regionsHasBeenSet = true;
}

bool DescribeSessionListRequest::RegionsHasBeenSet() const
{
    return m_regionsHasBeenSet;
}

vector<string> DescribeSessionListRequest::GetEnvironments() const
{
    return m_environments;
}

void DescribeSessionListRequest::SetEnvironments(const vector<string>& _environments)
{
    m_environments = _environments;
    m_environmentsHasBeenSet = true;
}

bool DescribeSessionListRequest::EnvironmentsHasBeenSet() const
{
    return m_environmentsHasBeenSet;
}

string DescribeSessionListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeSessionListRequest::SetFilters(const string& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeSessionListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeSessionListRequest::GetStartPage() const
{
    return m_startPage;
}

void DescribeSessionListRequest::SetStartPage(const string& _startPage)
{
    m_startPage = _startPage;
    m_startPageHasBeenSet = true;
}

bool DescribeSessionListRequest::StartPageHasBeenSet() const
{
    return m_startPageHasBeenSet;
}

string DescribeSessionListRequest::GetEndPage() const
{
    return m_endPage;
}

void DescribeSessionListRequest::SetEndPage(const string& _endPage)
{
    m_endPage = _endPage;
    m_endPageHasBeenSet = true;
}

bool DescribeSessionListRequest::EndPageHasBeenSet() const
{
    return m_endPageHasBeenSet;
}

string DescribeSessionListRequest::GetJourneyFilters() const
{
    return m_journeyFilters;
}

void DescribeSessionListRequest::SetJourneyFilters(const string& _journeyFilters)
{
    m_journeyFilters = _journeyFilters;
    m_journeyFiltersHasBeenSet = true;
}

bool DescribeSessionListRequest::JourneyFiltersHasBeenSet() const
{
    return m_journeyFiltersHasBeenSet;
}


