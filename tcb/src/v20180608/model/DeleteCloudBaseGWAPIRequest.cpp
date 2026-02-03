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

#include <tencentcloud/tcb/v20180608/model/DeleteCloudBaseGWAPIRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DeleteCloudBaseGWAPIRequest::DeleteCloudBaseGWAPIRequest() :
    m_serviceIdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_aPIIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_customHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

string DeleteCloudBaseGWAPIRequest::ToJsonString() const
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

    if (m_customHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Custom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_custom.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteCloudBaseGWAPIRequest::GetServiceId() const
{
    return m_serviceId;
}

void DeleteCloudBaseGWAPIRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool DeleteCloudBaseGWAPIRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string DeleteCloudBaseGWAPIRequest::GetPath() const
{
    return m_path;
}

void DeleteCloudBaseGWAPIRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool DeleteCloudBaseGWAPIRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string DeleteCloudBaseGWAPIRequest::GetAPIId() const
{
    return m_aPIId;
}

void DeleteCloudBaseGWAPIRequest::SetAPIId(const string& _aPIId)
{
    m_aPIId = _aPIId;
    m_aPIIdHasBeenSet = true;
}

bool DeleteCloudBaseGWAPIRequest::APIIdHasBeenSet() const
{
    return m_aPIIdHasBeenSet;
}

int64_t DeleteCloudBaseGWAPIRequest::GetType() const
{
    return m_type;
}

void DeleteCloudBaseGWAPIRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DeleteCloudBaseGWAPIRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DeleteCloudBaseGWAPIRequest::GetName() const
{
    return m_name;
}

void DeleteCloudBaseGWAPIRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DeleteCloudBaseGWAPIRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DeleteCloudBaseGWAPIRequest::GetCustom() const
{
    return m_custom;
}

void DeleteCloudBaseGWAPIRequest::SetCustom(const string& _custom)
{
    m_custom = _custom;
    m_customHasBeenSet = true;
}

bool DeleteCloudBaseGWAPIRequest::CustomHasBeenSet() const
{
    return m_customHasBeenSet;
}

string DeleteCloudBaseGWAPIRequest::GetDomain() const
{
    return m_domain;
}

void DeleteCloudBaseGWAPIRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DeleteCloudBaseGWAPIRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}


