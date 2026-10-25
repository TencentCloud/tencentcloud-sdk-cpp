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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMFunnelTrendRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMFunnelTrendRequest::DescribeTDEMFunnelTrendRequest() :
    m_appIdHasBeenSet(false),
    m_funnelIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_intervalHasBeenSet(false),
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

string DescribeTDEMFunnelTrendRequest::ToJsonString() const
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

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_interval.c_str(), allocator).Move(), allocator);
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


string DescribeTDEMFunnelTrendRequest::GetAppId() const
{
    return m_appId;
}

void DescribeTDEMFunnelTrendRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeTDEMFunnelTrendRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeTDEMFunnelTrendRequest::GetFunnelId() const
{
    return m_funnelId;
}

void DescribeTDEMFunnelTrendRequest::SetFunnelId(const string& _funnelId)
{
    m_funnelId = _funnelId;
    m_funnelIdHasBeenSet = true;
}

bool DescribeTDEMFunnelTrendRequest::FunnelIdHasBeenSet() const
{
    return m_funnelIdHasBeenSet;
}

int64_t DescribeTDEMFunnelTrendRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTDEMFunnelTrendRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTDEMFunnelTrendRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeTDEMFunnelTrendRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTDEMFunnelTrendRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTDEMFunnelTrendRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeTDEMFunnelTrendRequest::GetInterval() const
{
    return m_interval;
}

void DescribeTDEMFunnelTrendRequest::SetInterval(const string& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool DescribeTDEMFunnelTrendRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

string DescribeTDEMFunnelTrendRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeTDEMFunnelTrendRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeTDEMFunnelTrendRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeTDEMFunnelTrendRequest::GetAppVersion() const
{
    return m_appVersion;
}

void DescribeTDEMFunnelTrendRequest::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool DescribeTDEMFunnelTrendRequest::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string DescribeTDEMFunnelTrendRequest::GetDeviceType() const
{
    return m_deviceType;
}

void DescribeTDEMFunnelTrendRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool DescribeTDEMFunnelTrendRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string DescribeTDEMFunnelTrendRequest::GetBrowser() const
{
    return m_browser;
}

void DescribeTDEMFunnelTrendRequest::SetBrowser(const string& _browser)
{
    m_browser = _browser;
    m_browserHasBeenSet = true;
}

bool DescribeTDEMFunnelTrendRequest::BrowserHasBeenSet() const
{
    return m_browserHasBeenSet;
}

string DescribeTDEMFunnelTrendRequest::GetOS() const
{
    return m_oS;
}

void DescribeTDEMFunnelTrendRequest::SetOS(const string& _oS)
{
    m_oS = _oS;
    m_oSHasBeenSet = true;
}

bool DescribeTDEMFunnelTrendRequest::OSHasBeenSet() const
{
    return m_oSHasBeenSet;
}

string DescribeTDEMFunnelTrendRequest::GetCountry() const
{
    return m_country;
}

void DescribeTDEMFunnelTrendRequest::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool DescribeTDEMFunnelTrendRequest::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string DescribeTDEMFunnelTrendRequest::GetReferrer() const
{
    return m_referrer;
}

void DescribeTDEMFunnelTrendRequest::SetReferrer(const string& _referrer)
{
    m_referrer = _referrer;
    m_referrerHasBeenSet = true;
}

bool DescribeTDEMFunnelTrendRequest::ReferrerHasBeenSet() const
{
    return m_referrerHasBeenSet;
}

string DescribeTDEMFunnelTrendRequest::GetEnvironment() const
{
    return m_environment;
}

void DescribeTDEMFunnelTrendRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool DescribeTDEMFunnelTrendRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


