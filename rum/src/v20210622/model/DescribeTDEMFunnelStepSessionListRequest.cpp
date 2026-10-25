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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMFunnelStepSessionListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMFunnelStepSessionListRequest::DescribeTDEMFunnelStepSessionListRequest() :
    m_appIdHasBeenSet(false),
    m_funnelIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_stepIndexHasBeenSet(false),
    m_stepsHasBeenSet(false),
    m_drillTypeHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_browserHasBeenSet(false),
    m_oSHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_referrerHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string DescribeTDEMFunnelStepSessionListRequest::ToJsonString() const
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

    if (m_funnelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunnelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_funnelId.c_str(), allocator).Move(), allocator);
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

    if (m_stepIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_stepIndex, allocator);
    }

    if (m_stepsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Steps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_steps.c_str(), allocator).Move(), allocator);
    }

    if (m_drillTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_drillType.c_str(), allocator).Move(), allocator);
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

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_browserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Browser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_browser.c_str(), allocator).Move(), allocator);
    }

    if (m_oSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oS.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_referrerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Referrer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_referrer.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTDEMFunnelStepSessionListRequest::GetAppId() const
{
    return m_appId;
}

void DescribeTDEMFunnelStepSessionListRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeTDEMFunnelStepSessionListRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeTDEMFunnelStepSessionListRequest::GetFunnelId() const
{
    return m_funnelId;
}

void DescribeTDEMFunnelStepSessionListRequest::SetFunnelId(const string& _funnelId)
{
    m_funnelId = _funnelId;
    m_funnelIdHasBeenSet = true;
}

bool DescribeTDEMFunnelStepSessionListRequest::FunnelIdHasBeenSet() const
{
    return m_funnelIdHasBeenSet;
}

int64_t DescribeTDEMFunnelStepSessionListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTDEMFunnelStepSessionListRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTDEMFunnelStepSessionListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeTDEMFunnelStepSessionListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTDEMFunnelStepSessionListRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTDEMFunnelStepSessionListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeTDEMFunnelStepSessionListRequest::GetStepIndex() const
{
    return m_stepIndex;
}

void DescribeTDEMFunnelStepSessionListRequest::SetStepIndex(const int64_t& _stepIndex)
{
    m_stepIndex = _stepIndex;
    m_stepIndexHasBeenSet = true;
}

bool DescribeTDEMFunnelStepSessionListRequest::StepIndexHasBeenSet() const
{
    return m_stepIndexHasBeenSet;
}

string DescribeTDEMFunnelStepSessionListRequest::GetSteps() const
{
    return m_steps;
}

void DescribeTDEMFunnelStepSessionListRequest::SetSteps(const string& _steps)
{
    m_steps = _steps;
    m_stepsHasBeenSet = true;
}

bool DescribeTDEMFunnelStepSessionListRequest::StepsHasBeenSet() const
{
    return m_stepsHasBeenSet;
}

string DescribeTDEMFunnelStepSessionListRequest::GetDrillType() const
{
    return m_drillType;
}

void DescribeTDEMFunnelStepSessionListRequest::SetDrillType(const string& _drillType)
{
    m_drillType = _drillType;
    m_drillTypeHasBeenSet = true;
}

bool DescribeTDEMFunnelStepSessionListRequest::DrillTypeHasBeenSet() const
{
    return m_drillTypeHasBeenSet;
}

int64_t DescribeTDEMFunnelStepSessionListRequest::GetPage() const
{
    return m_page;
}

void DescribeTDEMFunnelStepSessionListRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeTDEMFunnelStepSessionListRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeTDEMFunnelStepSessionListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeTDEMFunnelStepSessionListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeTDEMFunnelStepSessionListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeTDEMFunnelStepSessionListRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeTDEMFunnelStepSessionListRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeTDEMFunnelStepSessionListRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeTDEMFunnelStepSessionListRequest::GetAppVersion() const
{
    return m_appVersion;
}

void DescribeTDEMFunnelStepSessionListRequest::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool DescribeTDEMFunnelStepSessionListRequest::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string DescribeTDEMFunnelStepSessionListRequest::GetDeviceType() const
{
    return m_deviceType;
}

void DescribeTDEMFunnelStepSessionListRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool DescribeTDEMFunnelStepSessionListRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string DescribeTDEMFunnelStepSessionListRequest::GetBrowser() const
{
    return m_browser;
}

void DescribeTDEMFunnelStepSessionListRequest::SetBrowser(const string& _browser)
{
    m_browser = _browser;
    m_browserHasBeenSet = true;
}

bool DescribeTDEMFunnelStepSessionListRequest::BrowserHasBeenSet() const
{
    return m_browserHasBeenSet;
}

string DescribeTDEMFunnelStepSessionListRequest::GetOS() const
{
    return m_oS;
}

void DescribeTDEMFunnelStepSessionListRequest::SetOS(const string& _oS)
{
    m_oS = _oS;
    m_oSHasBeenSet = true;
}

bool DescribeTDEMFunnelStepSessionListRequest::OSHasBeenSet() const
{
    return m_oSHasBeenSet;
}

string DescribeTDEMFunnelStepSessionListRequest::GetCountry() const
{
    return m_country;
}

void DescribeTDEMFunnelStepSessionListRequest::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool DescribeTDEMFunnelStepSessionListRequest::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string DescribeTDEMFunnelStepSessionListRequest::GetReferrer() const
{
    return m_referrer;
}

void DescribeTDEMFunnelStepSessionListRequest::SetReferrer(const string& _referrer)
{
    m_referrer = _referrer;
    m_referrerHasBeenSet = true;
}

bool DescribeTDEMFunnelStepSessionListRequest::ReferrerHasBeenSet() const
{
    return m_referrerHasBeenSet;
}

string DescribeTDEMFunnelStepSessionListRequest::GetEnvironment() const
{
    return m_environment;
}

void DescribeTDEMFunnelStepSessionListRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool DescribeTDEMFunnelStepSessionListRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


