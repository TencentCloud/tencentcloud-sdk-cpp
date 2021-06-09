/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/cws/v20180312/model/ModifyMonitorAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cws::V20180312::Model;
using namespace std;

ModifyMonitorAttributeRequest::ModifyMonitorAttributeRequest() :
    m_monitorIdHasBeenSet(false),
    m_urlsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scannerTypeHasBeenSet(false),
    m_crontabHasBeenSet(false),
    m_rateLimitHasBeenSet(false),
    m_firstScanStartTimeHasBeenSet(false),
    m_monitorStatusHasBeenSet(false)
{
}

string ModifyMonitorAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_monitorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_monitorId, allocator);
    }

    if (m_urlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Urls";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_urls.begin(); itr != m_urls.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_scannerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScannerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scannerType.c_str(), allocator).Move(), allocator);
    }

    if (m_crontabHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Crontab";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_crontab, allocator);
    }

    if (m_rateLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rateLimit, allocator);
    }

    if (m_firstScanStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstScanStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_firstScanStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_monitorStatus, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyMonitorAttributeRequest::GetMonitorId() const
{
    return m_monitorId;
}

void ModifyMonitorAttributeRequest::SetMonitorId(const uint64_t& _monitorId)
{
    m_monitorId = _monitorId;
    m_monitorIdHasBeenSet = true;
}

bool ModifyMonitorAttributeRequest::MonitorIdHasBeenSet() const
{
    return m_monitorIdHasBeenSet;
}

vector<string> ModifyMonitorAttributeRequest::GetUrls() const
{
    return m_urls;
}

void ModifyMonitorAttributeRequest::SetUrls(const vector<string>& _urls)
{
    m_urls = _urls;
    m_urlsHasBeenSet = true;
}

bool ModifyMonitorAttributeRequest::UrlsHasBeenSet() const
{
    return m_urlsHasBeenSet;
}

string ModifyMonitorAttributeRequest::GetName() const
{
    return m_name;
}

void ModifyMonitorAttributeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyMonitorAttributeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyMonitorAttributeRequest::GetScannerType() const
{
    return m_scannerType;
}

void ModifyMonitorAttributeRequest::SetScannerType(const string& _scannerType)
{
    m_scannerType = _scannerType;
    m_scannerTypeHasBeenSet = true;
}

bool ModifyMonitorAttributeRequest::ScannerTypeHasBeenSet() const
{
    return m_scannerTypeHasBeenSet;
}

uint64_t ModifyMonitorAttributeRequest::GetCrontab() const
{
    return m_crontab;
}

void ModifyMonitorAttributeRequest::SetCrontab(const uint64_t& _crontab)
{
    m_crontab = _crontab;
    m_crontabHasBeenSet = true;
}

bool ModifyMonitorAttributeRequest::CrontabHasBeenSet() const
{
    return m_crontabHasBeenSet;
}

uint64_t ModifyMonitorAttributeRequest::GetRateLimit() const
{
    return m_rateLimit;
}

void ModifyMonitorAttributeRequest::SetRateLimit(const uint64_t& _rateLimit)
{
    m_rateLimit = _rateLimit;
    m_rateLimitHasBeenSet = true;
}

bool ModifyMonitorAttributeRequest::RateLimitHasBeenSet() const
{
    return m_rateLimitHasBeenSet;
}

string ModifyMonitorAttributeRequest::GetFirstScanStartTime() const
{
    return m_firstScanStartTime;
}

void ModifyMonitorAttributeRequest::SetFirstScanStartTime(const string& _firstScanStartTime)
{
    m_firstScanStartTime = _firstScanStartTime;
    m_firstScanStartTimeHasBeenSet = true;
}

bool ModifyMonitorAttributeRequest::FirstScanStartTimeHasBeenSet() const
{
    return m_firstScanStartTimeHasBeenSet;
}

uint64_t ModifyMonitorAttributeRequest::GetMonitorStatus() const
{
    return m_monitorStatus;
}

void ModifyMonitorAttributeRequest::SetMonitorStatus(const uint64_t& _monitorStatus)
{
    m_monitorStatus = _monitorStatus;
    m_monitorStatusHasBeenSet = true;
}

bool ModifyMonitorAttributeRequest::MonitorStatusHasBeenSet() const
{
    return m_monitorStatusHasBeenSet;
}


