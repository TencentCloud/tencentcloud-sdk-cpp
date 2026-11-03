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

#include <tencentcloud/cngw/v20230418/model/CreateAIGWCustomGuardrailPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CreateAIGWCustomGuardrailPolicyRequest::CreateAIGWCustomGuardrailPolicyRequest() :
    m_gatewayIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serviceConfigHasBeenSet(false),
    m_decisionConfigHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_authConfigHasBeenSet(false),
    m_behaviorConfigHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_filterConfigHasBeenSet(false)
{
}

string CreateAIGWCustomGuardrailPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_decisionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DecisionConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_decisionConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scope.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_authConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_behaviorConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BehaviorConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_behaviorConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabled, allocator);
    }

    if (m_filterConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filterConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAIGWCustomGuardrailPolicyRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CreateAIGWCustomGuardrailPolicyRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreateAIGWCustomGuardrailPolicyRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreateAIGWCustomGuardrailPolicyRequest::GetName() const
{
    return m_name;
}

void CreateAIGWCustomGuardrailPolicyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAIGWCustomGuardrailPolicyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

CustomGuardrailServiceConfigInput CreateAIGWCustomGuardrailPolicyRequest::GetServiceConfig() const
{
    return m_serviceConfig;
}

void CreateAIGWCustomGuardrailPolicyRequest::SetServiceConfig(const CustomGuardrailServiceConfigInput& _serviceConfig)
{
    m_serviceConfig = _serviceConfig;
    m_serviceConfigHasBeenSet = true;
}

bool CreateAIGWCustomGuardrailPolicyRequest::ServiceConfigHasBeenSet() const
{
    return m_serviceConfigHasBeenSet;
}

CustomGuardrailDecisionConfigInput CreateAIGWCustomGuardrailPolicyRequest::GetDecisionConfig() const
{
    return m_decisionConfig;
}

void CreateAIGWCustomGuardrailPolicyRequest::SetDecisionConfig(const CustomGuardrailDecisionConfigInput& _decisionConfig)
{
    m_decisionConfig = _decisionConfig;
    m_decisionConfigHasBeenSet = true;
}

bool CreateAIGWCustomGuardrailPolicyRequest::DecisionConfigHasBeenSet() const
{
    return m_decisionConfigHasBeenSet;
}

CustomGuardrailScopeInput CreateAIGWCustomGuardrailPolicyRequest::GetScope() const
{
    return m_scope;
}

void CreateAIGWCustomGuardrailPolicyRequest::SetScope(const CustomGuardrailScopeInput& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool CreateAIGWCustomGuardrailPolicyRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

CustomGuardrailAuthConfigInput CreateAIGWCustomGuardrailPolicyRequest::GetAuthConfig() const
{
    return m_authConfig;
}

void CreateAIGWCustomGuardrailPolicyRequest::SetAuthConfig(const CustomGuardrailAuthConfigInput& _authConfig)
{
    m_authConfig = _authConfig;
    m_authConfigHasBeenSet = true;
}

bool CreateAIGWCustomGuardrailPolicyRequest::AuthConfigHasBeenSet() const
{
    return m_authConfigHasBeenSet;
}

CustomGuardrailBehaviorConfigInput CreateAIGWCustomGuardrailPolicyRequest::GetBehaviorConfig() const
{
    return m_behaviorConfig;
}

void CreateAIGWCustomGuardrailPolicyRequest::SetBehaviorConfig(const CustomGuardrailBehaviorConfigInput& _behaviorConfig)
{
    m_behaviorConfig = _behaviorConfig;
    m_behaviorConfigHasBeenSet = true;
}

bool CreateAIGWCustomGuardrailPolicyRequest::BehaviorConfigHasBeenSet() const
{
    return m_behaviorConfigHasBeenSet;
}

string CreateAIGWCustomGuardrailPolicyRequest::GetDescription() const
{
    return m_description;
}

void CreateAIGWCustomGuardrailPolicyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAIGWCustomGuardrailPolicyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool CreateAIGWCustomGuardrailPolicyRequest::GetEnabled() const
{
    return m_enabled;
}

void CreateAIGWCustomGuardrailPolicyRequest::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CreateAIGWCustomGuardrailPolicyRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

CustomGuardrailFilterConfigInput CreateAIGWCustomGuardrailPolicyRequest::GetFilterConfig() const
{
    return m_filterConfig;
}

void CreateAIGWCustomGuardrailPolicyRequest::SetFilterConfig(const CustomGuardrailFilterConfigInput& _filterConfig)
{
    m_filterConfig = _filterConfig;
    m_filterConfigHasBeenSet = true;
}

bool CreateAIGWCustomGuardrailPolicyRequest::FilterConfigHasBeenSet() const
{
    return m_filterConfigHasBeenSet;
}


