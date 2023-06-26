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

#include <tencentcloud/cdn/v20180606/model/ModifyDomainConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ModifyDomainConfigRequest::ModifyDomainConfigRequest() :
    m_domainHasBeenSet(false),
    m_routeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

string ModifyDomainConfigRequest::ToJsonString() const
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

    if (m_routeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Route";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_route.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDomainConfigRequest::GetDomain() const
{
    return m_domain;
}

void ModifyDomainConfigRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyDomainConfigRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyDomainConfigRequest::GetRoute() const
{
    return m_route;
}

void ModifyDomainConfigRequest::SetRoute(const string& _route)
{
    m_route = _route;
    m_routeHasBeenSet = true;
}

bool ModifyDomainConfigRequest::RouteHasBeenSet() const
{
    return m_routeHasBeenSet;
}

string ModifyDomainConfigRequest::GetValue() const
{
    return m_value;
}

void ModifyDomainConfigRequest::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ModifyDomainConfigRequest::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}


