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

#include <tencentcloud/tcb/v20180608/model/ModifyPlatformHTTPServiceRouteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ModifyPlatformHTTPServiceRouteRequest::ModifyPlatformHTTPServiceRouteRequest() :
    m_platformIdHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

string ModifyPlatformHTTPServiceRouteRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_domain.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPlatformHTTPServiceRouteRequest::GetPlatformId() const
{
    return m_platformId;
}

void ModifyPlatformHTTPServiceRouteRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool ModifyPlatformHTTPServiceRouteRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

HTTPServiceDomainParam ModifyPlatformHTTPServiceRouteRequest::GetDomain() const
{
    return m_domain;
}

void ModifyPlatformHTTPServiceRouteRequest::SetDomain(const HTTPServiceDomainParam& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyPlatformHTTPServiceRouteRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}


