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

#include <tencentcloud/teo/v20220901/model/ModifySecurityPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifySecurityPolicyRequest::ModifySecurityPolicyRequest() :
    m_zoneIdHasBeenSet(false),
    m_securityConfigHasBeenSet(false),
    m_securityPolicyHasBeenSet(false),
    m_entityHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
}

string ModifySecurityPolicyRequest::ToJsonString() const
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

    if (m_securityConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_securityConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_securityPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_securityPolicy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_entityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entity.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySecurityPolicyRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifySecurityPolicyRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifySecurityPolicyRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

SecurityConfig ModifySecurityPolicyRequest::GetSecurityConfig() const
{
    return m_securityConfig;
}

void ModifySecurityPolicyRequest::SetSecurityConfig(const SecurityConfig& _securityConfig)
{
    m_securityConfig = _securityConfig;
    m_securityConfigHasBeenSet = true;
}

bool ModifySecurityPolicyRequest::SecurityConfigHasBeenSet() const
{
    return m_securityConfigHasBeenSet;
}

SecurityPolicy ModifySecurityPolicyRequest::GetSecurityPolicy() const
{
    return m_securityPolicy;
}

void ModifySecurityPolicyRequest::SetSecurityPolicy(const SecurityPolicy& _securityPolicy)
{
    m_securityPolicy = _securityPolicy;
    m_securityPolicyHasBeenSet = true;
}

bool ModifySecurityPolicyRequest::SecurityPolicyHasBeenSet() const
{
    return m_securityPolicyHasBeenSet;
}

string ModifySecurityPolicyRequest::GetEntity() const
{
    return m_entity;
}

void ModifySecurityPolicyRequest::SetEntity(const string& _entity)
{
    m_entity = _entity;
    m_entityHasBeenSet = true;
}

bool ModifySecurityPolicyRequest::EntityHasBeenSet() const
{
    return m_entityHasBeenSet;
}

string ModifySecurityPolicyRequest::GetHost() const
{
    return m_host;
}

void ModifySecurityPolicyRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool ModifySecurityPolicyRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string ModifySecurityPolicyRequest::GetTemplateId() const
{
    return m_templateId;
}

void ModifySecurityPolicyRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ModifySecurityPolicyRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}


