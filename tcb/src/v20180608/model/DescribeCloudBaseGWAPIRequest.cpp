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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseGWAPIRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCloudBaseGWAPIRequest::DescribeCloudBaseGWAPIRequest() :
    m_serviceIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_aPIIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_enableRegionHasBeenSet(false),
    m_enableUnionHasBeenSet(false)
{
}

string DescribeCloudBaseGWAPIRequest::ToJsonString() const
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

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aPIId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
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


string DescribeCloudBaseGWAPIRequest::GetServiceId() const
{
    return m_serviceId;
}

void DescribeCloudBaseGWAPIRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool DescribeCloudBaseGWAPIRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string DescribeCloudBaseGWAPIRequest::GetDomain() const
{
    return m_domain;
}

void DescribeCloudBaseGWAPIRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeCloudBaseGWAPIRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeCloudBaseGWAPIRequest::GetPath() const
{
    return m_path;
}

void DescribeCloudBaseGWAPIRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool DescribeCloudBaseGWAPIRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string DescribeCloudBaseGWAPIRequest::GetAPIId() const
{
    return m_aPIId;
}

void DescribeCloudBaseGWAPIRequest::SetAPIId(const string& _aPIId)
{
    m_aPIId = _aPIId;
    m_aPIIdHasBeenSet = true;
}

bool DescribeCloudBaseGWAPIRequest::APIIdHasBeenSet() const
{
    return m_aPIIdHasBeenSet;
}

int64_t DescribeCloudBaseGWAPIRequest::GetType() const
{
    return m_type;
}

void DescribeCloudBaseGWAPIRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeCloudBaseGWAPIRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeCloudBaseGWAPIRequest::GetName() const
{
    return m_name;
}

void DescribeCloudBaseGWAPIRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeCloudBaseGWAPIRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DescribeCloudBaseGWAPIRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCloudBaseGWAPIRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCloudBaseGWAPIRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeCloudBaseGWAPIRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCloudBaseGWAPIRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCloudBaseGWAPIRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeCloudBaseGWAPIRequest::GetEnableRegion() const
{
    return m_enableRegion;
}

void DescribeCloudBaseGWAPIRequest::SetEnableRegion(const bool& _enableRegion)
{
    m_enableRegion = _enableRegion;
    m_enableRegionHasBeenSet = true;
}

bool DescribeCloudBaseGWAPIRequest::EnableRegionHasBeenSet() const
{
    return m_enableRegionHasBeenSet;
}

bool DescribeCloudBaseGWAPIRequest::GetEnableUnion() const
{
    return m_enableUnion;
}

void DescribeCloudBaseGWAPIRequest::SetEnableUnion(const bool& _enableUnion)
{
    m_enableUnion = _enableUnion;
    m_enableUnionHasBeenSet = true;
}

bool DescribeCloudBaseGWAPIRequest::EnableUnionHasBeenSet() const
{
    return m_enableUnionHasBeenSet;
}


