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

#include <tencentcloud/tcb/v20180608/model/BindCloudBaseGWDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

BindCloudBaseGWDomainRequest::BindCloudBaseGWDomainRequest() :
    m_serviceIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_enableRegionHasBeenSet(false)
{
}

string BindCloudBaseGWDomainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableRegion, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindCloudBaseGWDomainRequest::GetServiceId() const
{
    return m_serviceId;
}

void BindCloudBaseGWDomainRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool BindCloudBaseGWDomainRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string BindCloudBaseGWDomainRequest::GetDomain() const
{
    return m_domain;
}

void BindCloudBaseGWDomainRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool BindCloudBaseGWDomainRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string BindCloudBaseGWDomainRequest::GetCertId() const
{
    return m_certId;
}

void BindCloudBaseGWDomainRequest::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool BindCloudBaseGWDomainRequest::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

bool BindCloudBaseGWDomainRequest::GetEnableRegion() const
{
    return m_enableRegion;
}

void BindCloudBaseGWDomainRequest::SetEnableRegion(const bool& _enableRegion)
{
    m_enableRegion = _enableRegion;
    m_enableRegionHasBeenSet = true;
}

bool BindCloudBaseGWDomainRequest::EnableRegionHasBeenSet() const
{
    return m_enableRegionHasBeenSet;
}


