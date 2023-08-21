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

#include <tencentcloud/essbasic/v20210526/model/CreateConsoleLoginUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateConsoleLoginUrlRequest::CreateConsoleLoginUrlRequest() :
    m_agentHasBeenSet(false),
    m_proxyOrganizationNameHasBeenSet(false),
    m_uniformSocialCreditCodeHasBeenSet(false),
    m_proxyOperatorNameHasBeenSet(false),
    m_moduleHasBeenSet(false),
    m_moduleIdHasBeenSet(false),
    m_menuStatusHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_autoJumpBackEventHasBeenSet(false),
    m_authorizationTypesHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string CreateConsoleLoginUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_proxyOrganizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyOrganizationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyOrganizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_uniformSocialCreditCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniformSocialCreditCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniformSocialCreditCode.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyOperatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyOperatorName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyOperatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_moduleId.c_str(), allocator).Move(), allocator);
    }

    if (m_menuStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenuStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_menuStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_autoJumpBackEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoJumpBackEvent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoJumpBackEvent.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authorizationTypes.begin(); itr != m_authorizationTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent CreateConsoleLoginUrlRequest::GetAgent() const
{
    return m_agent;
}

void CreateConsoleLoginUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateConsoleLoginUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateConsoleLoginUrlRequest::GetProxyOrganizationName() const
{
    return m_proxyOrganizationName;
}

void CreateConsoleLoginUrlRequest::SetProxyOrganizationName(const string& _proxyOrganizationName)
{
    m_proxyOrganizationName = _proxyOrganizationName;
    m_proxyOrganizationNameHasBeenSet = true;
}

bool CreateConsoleLoginUrlRequest::ProxyOrganizationNameHasBeenSet() const
{
    return m_proxyOrganizationNameHasBeenSet;
}

string CreateConsoleLoginUrlRequest::GetUniformSocialCreditCode() const
{
    return m_uniformSocialCreditCode;
}

void CreateConsoleLoginUrlRequest::SetUniformSocialCreditCode(const string& _uniformSocialCreditCode)
{
    m_uniformSocialCreditCode = _uniformSocialCreditCode;
    m_uniformSocialCreditCodeHasBeenSet = true;
}

bool CreateConsoleLoginUrlRequest::UniformSocialCreditCodeHasBeenSet() const
{
    return m_uniformSocialCreditCodeHasBeenSet;
}

string CreateConsoleLoginUrlRequest::GetProxyOperatorName() const
{
    return m_proxyOperatorName;
}

void CreateConsoleLoginUrlRequest::SetProxyOperatorName(const string& _proxyOperatorName)
{
    m_proxyOperatorName = _proxyOperatorName;
    m_proxyOperatorNameHasBeenSet = true;
}

bool CreateConsoleLoginUrlRequest::ProxyOperatorNameHasBeenSet() const
{
    return m_proxyOperatorNameHasBeenSet;
}

string CreateConsoleLoginUrlRequest::GetModule() const
{
    return m_module;
}

void CreateConsoleLoginUrlRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool CreateConsoleLoginUrlRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string CreateConsoleLoginUrlRequest::GetModuleId() const
{
    return m_moduleId;
}

void CreateConsoleLoginUrlRequest::SetModuleId(const string& _moduleId)
{
    m_moduleId = _moduleId;
    m_moduleIdHasBeenSet = true;
}

bool CreateConsoleLoginUrlRequest::ModuleIdHasBeenSet() const
{
    return m_moduleIdHasBeenSet;
}

string CreateConsoleLoginUrlRequest::GetMenuStatus() const
{
    return m_menuStatus;
}

void CreateConsoleLoginUrlRequest::SetMenuStatus(const string& _menuStatus)
{
    m_menuStatus = _menuStatus;
    m_menuStatusHasBeenSet = true;
}

bool CreateConsoleLoginUrlRequest::MenuStatusHasBeenSet() const
{
    return m_menuStatusHasBeenSet;
}

string CreateConsoleLoginUrlRequest::GetEndpoint() const
{
    return m_endpoint;
}

void CreateConsoleLoginUrlRequest::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool CreateConsoleLoginUrlRequest::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string CreateConsoleLoginUrlRequest::GetAutoJumpBackEvent() const
{
    return m_autoJumpBackEvent;
}

void CreateConsoleLoginUrlRequest::SetAutoJumpBackEvent(const string& _autoJumpBackEvent)
{
    m_autoJumpBackEvent = _autoJumpBackEvent;
    m_autoJumpBackEventHasBeenSet = true;
}

bool CreateConsoleLoginUrlRequest::AutoJumpBackEventHasBeenSet() const
{
    return m_autoJumpBackEventHasBeenSet;
}

vector<int64_t> CreateConsoleLoginUrlRequest::GetAuthorizationTypes() const
{
    return m_authorizationTypes;
}

void CreateConsoleLoginUrlRequest::SetAuthorizationTypes(const vector<int64_t>& _authorizationTypes)
{
    m_authorizationTypes = _authorizationTypes;
    m_authorizationTypesHasBeenSet = true;
}

bool CreateConsoleLoginUrlRequest::AuthorizationTypesHasBeenSet() const
{
    return m_authorizationTypesHasBeenSet;
}

UserInfo CreateConsoleLoginUrlRequest::GetOperator() const
{
    return m_operator;
}

void CreateConsoleLoginUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateConsoleLoginUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


