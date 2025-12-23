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

#include <tencentcloud/teo/v20220901/model/ModifyPrefetchOriginLimitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyPrefetchOriginLimitRequest::ModifyPrefetchOriginLimitRequest() :
    m_zoneIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

string ModifyPrefetchOriginLimitRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPrefetchOriginLimitRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyPrefetchOriginLimitRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyPrefetchOriginLimitRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyPrefetchOriginLimitRequest::GetDomainName() const
{
    return m_domainName;
}

void ModifyPrefetchOriginLimitRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool ModifyPrefetchOriginLimitRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string ModifyPrefetchOriginLimitRequest::GetArea() const
{
    return m_area;
}

void ModifyPrefetchOriginLimitRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool ModifyPrefetchOriginLimitRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

int64_t ModifyPrefetchOriginLimitRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void ModifyPrefetchOriginLimitRequest::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool ModifyPrefetchOriginLimitRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string ModifyPrefetchOriginLimitRequest::GetEnabled() const
{
    return m_enabled;
}

void ModifyPrefetchOriginLimitRequest::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ModifyPrefetchOriginLimitRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}


