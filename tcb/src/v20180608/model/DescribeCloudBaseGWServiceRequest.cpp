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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseGWServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCloudBaseGWServiceRequest::DescribeCloudBaseGWServiceRequest() :
    m_serviceIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_enableRegionHasBeenSet(false),
    m_enableUnionHasBeenSet(false)
{
}

string DescribeCloudBaseGWServiceRequest::ToJsonString() const
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

    if (m_enableRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableRegion, allocator);
    }

    if (m_enableUnionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableUnion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableUnion, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudBaseGWServiceRequest::GetServiceId() const
{
    return m_serviceId;
}

void DescribeCloudBaseGWServiceRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool DescribeCloudBaseGWServiceRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string DescribeCloudBaseGWServiceRequest::GetDomain() const
{
    return m_domain;
}

void DescribeCloudBaseGWServiceRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeCloudBaseGWServiceRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

bool DescribeCloudBaseGWServiceRequest::GetEnableRegion() const
{
    return m_enableRegion;
}

void DescribeCloudBaseGWServiceRequest::SetEnableRegion(const bool& _enableRegion)
{
    m_enableRegion = _enableRegion;
    m_enableRegionHasBeenSet = true;
}

bool DescribeCloudBaseGWServiceRequest::EnableRegionHasBeenSet() const
{
    return m_enableRegionHasBeenSet;
}

bool DescribeCloudBaseGWServiceRequest::GetEnableUnion() const
{
    return m_enableUnion;
}

void DescribeCloudBaseGWServiceRequest::SetEnableUnion(const bool& _enableUnion)
{
    m_enableUnion = _enableUnion;
    m_enableUnionHasBeenSet = true;
}

bool DescribeCloudBaseGWServiceRequest::EnableUnionHasBeenSet() const
{
    return m_enableUnionHasBeenSet;
}


