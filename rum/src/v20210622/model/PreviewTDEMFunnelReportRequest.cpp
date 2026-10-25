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

#include <tencentcloud/rum/v20210622/model/PreviewTDEMFunnelReportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

PreviewTDEMFunnelReportRequest::PreviewTDEMFunnelReportRequest() :
    m_appIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_stepsHasBeenSet(false),
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

string PreviewTDEMFunnelReportRequest::ToJsonString() const
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
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stepsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Steps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_steps.c_str(), allocator).Move(), allocator);
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


string PreviewTDEMFunnelReportRequest::GetAppId() const
{
    return m_appId;
}

void PreviewTDEMFunnelReportRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool PreviewTDEMFunnelReportRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string PreviewTDEMFunnelReportRequest::GetStartTime() const
{
    return m_startTime;
}

void PreviewTDEMFunnelReportRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool PreviewTDEMFunnelReportRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string PreviewTDEMFunnelReportRequest::GetEndTime() const
{
    return m_endTime;
}

void PreviewTDEMFunnelReportRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool PreviewTDEMFunnelReportRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string PreviewTDEMFunnelReportRequest::GetSteps() const
{
    return m_steps;
}

void PreviewTDEMFunnelReportRequest::SetSteps(const string& _steps)
{
    m_steps = _steps;
    m_stepsHasBeenSet = true;
}

bool PreviewTDEMFunnelReportRequest::StepsHasBeenSet() const
{
    return m_stepsHasBeenSet;
}

string PreviewTDEMFunnelReportRequest::GetPlatform() const
{
    return m_platform;
}

void PreviewTDEMFunnelReportRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool PreviewTDEMFunnelReportRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string PreviewTDEMFunnelReportRequest::GetAppVersion() const
{
    return m_appVersion;
}

void PreviewTDEMFunnelReportRequest::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool PreviewTDEMFunnelReportRequest::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string PreviewTDEMFunnelReportRequest::GetDeviceType() const
{
    return m_deviceType;
}

void PreviewTDEMFunnelReportRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool PreviewTDEMFunnelReportRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string PreviewTDEMFunnelReportRequest::GetBrowser() const
{
    return m_browser;
}

void PreviewTDEMFunnelReportRequest::SetBrowser(const string& _browser)
{
    m_browser = _browser;
    m_browserHasBeenSet = true;
}

bool PreviewTDEMFunnelReportRequest::BrowserHasBeenSet() const
{
    return m_browserHasBeenSet;
}

string PreviewTDEMFunnelReportRequest::GetOS() const
{
    return m_oS;
}

void PreviewTDEMFunnelReportRequest::SetOS(const string& _oS)
{
    m_oS = _oS;
    m_oSHasBeenSet = true;
}

bool PreviewTDEMFunnelReportRequest::OSHasBeenSet() const
{
    return m_oSHasBeenSet;
}

string PreviewTDEMFunnelReportRequest::GetCountry() const
{
    return m_country;
}

void PreviewTDEMFunnelReportRequest::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool PreviewTDEMFunnelReportRequest::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string PreviewTDEMFunnelReportRequest::GetReferrer() const
{
    return m_referrer;
}

void PreviewTDEMFunnelReportRequest::SetReferrer(const string& _referrer)
{
    m_referrer = _referrer;
    m_referrerHasBeenSet = true;
}

bool PreviewTDEMFunnelReportRequest::ReferrerHasBeenSet() const
{
    return m_referrerHasBeenSet;
}

string PreviewTDEMFunnelReportRequest::GetEnvironment() const
{
    return m_environment;
}

void PreviewTDEMFunnelReportRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool PreviewTDEMFunnelReportRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


