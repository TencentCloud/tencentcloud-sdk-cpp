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

#include <tencentcloud/essbasic/v20210526/model/ModifyPartnerAutoSignAuthUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ModifyPartnerAutoSignAuthUrlRequest::ModifyPartnerAutoSignAuthUrlRequest() :
    m_agentHasBeenSet(false),
    m_authorizedOrganizationIdHasBeenSet(false),
    m_authorizedOrganizationNameHasBeenSet(false),
    m_platformAppAuthorizationHasBeenSet(false),
    m_authToMeHasBeenSet(false)
{
}

string ModifyPartnerAutoSignAuthUrlRequest::ToJsonString() const
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

    if (m_authorizedOrganizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedOrganizationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authorizedOrganizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizedOrganizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedOrganizationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authorizedOrganizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_platformAppAuthorizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformAppAuthorization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_platformAppAuthorization, allocator);
    }

    if (m_authToMeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthToMe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authToMe, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ModifyPartnerAutoSignAuthUrlRequest::GetAgent() const
{
    return m_agent;
}

void ModifyPartnerAutoSignAuthUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ModifyPartnerAutoSignAuthUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ModifyPartnerAutoSignAuthUrlRequest::GetAuthorizedOrganizationId() const
{
    return m_authorizedOrganizationId;
}

void ModifyPartnerAutoSignAuthUrlRequest::SetAuthorizedOrganizationId(const string& _authorizedOrganizationId)
{
    m_authorizedOrganizationId = _authorizedOrganizationId;
    m_authorizedOrganizationIdHasBeenSet = true;
}

bool ModifyPartnerAutoSignAuthUrlRequest::AuthorizedOrganizationIdHasBeenSet() const
{
    return m_authorizedOrganizationIdHasBeenSet;
}

string ModifyPartnerAutoSignAuthUrlRequest::GetAuthorizedOrganizationName() const
{
    return m_authorizedOrganizationName;
}

void ModifyPartnerAutoSignAuthUrlRequest::SetAuthorizedOrganizationName(const string& _authorizedOrganizationName)
{
    m_authorizedOrganizationName = _authorizedOrganizationName;
    m_authorizedOrganizationNameHasBeenSet = true;
}

bool ModifyPartnerAutoSignAuthUrlRequest::AuthorizedOrganizationNameHasBeenSet() const
{
    return m_authorizedOrganizationNameHasBeenSet;
}

bool ModifyPartnerAutoSignAuthUrlRequest::GetPlatformAppAuthorization() const
{
    return m_platformAppAuthorization;
}

void ModifyPartnerAutoSignAuthUrlRequest::SetPlatformAppAuthorization(const bool& _platformAppAuthorization)
{
    m_platformAppAuthorization = _platformAppAuthorization;
    m_platformAppAuthorizationHasBeenSet = true;
}

bool ModifyPartnerAutoSignAuthUrlRequest::PlatformAppAuthorizationHasBeenSet() const
{
    return m_platformAppAuthorizationHasBeenSet;
}

bool ModifyPartnerAutoSignAuthUrlRequest::GetAuthToMe() const
{
    return m_authToMe;
}

void ModifyPartnerAutoSignAuthUrlRequest::SetAuthToMe(const bool& _authToMe)
{
    m_authToMe = _authToMe;
    m_authToMeHasBeenSet = true;
}

bool ModifyPartnerAutoSignAuthUrlRequest::AuthToMeHasBeenSet() const
{
    return m_authToMeHasBeenSet;
}


