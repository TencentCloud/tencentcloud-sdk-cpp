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

#include <tencentcloud/waf/v20180125/model/ModifyModuleStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyModuleStatusRequest::ModifyModuleStatusRequest() :
    m_domainHasBeenSet(false),
    m_webSecurityHasBeenSet(false),
    m_accessControlHasBeenSet(false),
    m_ccProtectionHasBeenSet(false),
    m_apiProtectionHasBeenSet(false),
    m_antiTamperHasBeenSet(false),
    m_antiLeakageHasBeenSet(false),
    m_rateLimitHasBeenSet(false)
{
}

string ModifyModuleStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_webSecurityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebSecurity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_webSecurity, allocator);
    }

    if (m_accessControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessControl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accessControl, allocator);
    }

    if (m_ccProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcProtection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ccProtection, allocator);
    }

    if (m_apiProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiProtection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_apiProtection, allocator);
    }

    if (m_antiTamperHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiTamper";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_antiTamper, allocator);
    }

    if (m_antiLeakageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiLeakage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_antiLeakage, allocator);
    }

    if (m_rateLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rateLimit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyModuleStatusRequest::GetDomain() const
{
    return m_domain;
}

void ModifyModuleStatusRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyModuleStatusRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t ModifyModuleStatusRequest::GetWebSecurity() const
{
    return m_webSecurity;
}

void ModifyModuleStatusRequest::SetWebSecurity(const uint64_t& _webSecurity)
{
    m_webSecurity = _webSecurity;
    m_webSecurityHasBeenSet = true;
}

bool ModifyModuleStatusRequest::WebSecurityHasBeenSet() const
{
    return m_webSecurityHasBeenSet;
}

uint64_t ModifyModuleStatusRequest::GetAccessControl() const
{
    return m_accessControl;
}

void ModifyModuleStatusRequest::SetAccessControl(const uint64_t& _accessControl)
{
    m_accessControl = _accessControl;
    m_accessControlHasBeenSet = true;
}

bool ModifyModuleStatusRequest::AccessControlHasBeenSet() const
{
    return m_accessControlHasBeenSet;
}

uint64_t ModifyModuleStatusRequest::GetCcProtection() const
{
    return m_ccProtection;
}

void ModifyModuleStatusRequest::SetCcProtection(const uint64_t& _ccProtection)
{
    m_ccProtection = _ccProtection;
    m_ccProtectionHasBeenSet = true;
}

bool ModifyModuleStatusRequest::CcProtectionHasBeenSet() const
{
    return m_ccProtectionHasBeenSet;
}

uint64_t ModifyModuleStatusRequest::GetApiProtection() const
{
    return m_apiProtection;
}

void ModifyModuleStatusRequest::SetApiProtection(const uint64_t& _apiProtection)
{
    m_apiProtection = _apiProtection;
    m_apiProtectionHasBeenSet = true;
}

bool ModifyModuleStatusRequest::ApiProtectionHasBeenSet() const
{
    return m_apiProtectionHasBeenSet;
}

uint64_t ModifyModuleStatusRequest::GetAntiTamper() const
{
    return m_antiTamper;
}

void ModifyModuleStatusRequest::SetAntiTamper(const uint64_t& _antiTamper)
{
    m_antiTamper = _antiTamper;
    m_antiTamperHasBeenSet = true;
}

bool ModifyModuleStatusRequest::AntiTamperHasBeenSet() const
{
    return m_antiTamperHasBeenSet;
}

uint64_t ModifyModuleStatusRequest::GetAntiLeakage() const
{
    return m_antiLeakage;
}

void ModifyModuleStatusRequest::SetAntiLeakage(const uint64_t& _antiLeakage)
{
    m_antiLeakage = _antiLeakage;
    m_antiLeakageHasBeenSet = true;
}

bool ModifyModuleStatusRequest::AntiLeakageHasBeenSet() const
{
    return m_antiLeakageHasBeenSet;
}

uint64_t ModifyModuleStatusRequest::GetRateLimit() const
{
    return m_rateLimit;
}

void ModifyModuleStatusRequest::SetRateLimit(const uint64_t& _rateLimit)
{
    m_rateLimit = _rateLimit;
    m_rateLimitHasBeenSet = true;
}

bool ModifyModuleStatusRequest::RateLimitHasBeenSet() const
{
    return m_rateLimitHasBeenSet;
}


