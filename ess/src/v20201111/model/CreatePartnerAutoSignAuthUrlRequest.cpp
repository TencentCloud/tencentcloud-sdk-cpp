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

#include <tencentcloud/ess/v20201111/model/CreatePartnerAutoSignAuthUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreatePartnerAutoSignAuthUrlRequest::CreatePartnerAutoSignAuthUrlRequest() :
    m_agentHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_authorizedOrganizationIdHasBeenSet(false),
    m_authorizedOrganizationNameHasBeenSet(false),
    m_sealTypesHasBeenSet(false),
    m_authToMeHasBeenSet(false)
{
}

string CreatePartnerAutoSignAuthUrlRequest::ToJsonString() const
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

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_sealTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sealTypes.begin(); itr != m_sealTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


Agent CreatePartnerAutoSignAuthUrlRequest::GetAgent() const
{
    return m_agent;
}

void CreatePartnerAutoSignAuthUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreatePartnerAutoSignAuthUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

UserInfo CreatePartnerAutoSignAuthUrlRequest::GetOperator() const
{
    return m_operator;
}

void CreatePartnerAutoSignAuthUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreatePartnerAutoSignAuthUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreatePartnerAutoSignAuthUrlRequest::GetAuthorizedOrganizationId() const
{
    return m_authorizedOrganizationId;
}

void CreatePartnerAutoSignAuthUrlRequest::SetAuthorizedOrganizationId(const string& _authorizedOrganizationId)
{
    m_authorizedOrganizationId = _authorizedOrganizationId;
    m_authorizedOrganizationIdHasBeenSet = true;
}

bool CreatePartnerAutoSignAuthUrlRequest::AuthorizedOrganizationIdHasBeenSet() const
{
    return m_authorizedOrganizationIdHasBeenSet;
}

string CreatePartnerAutoSignAuthUrlRequest::GetAuthorizedOrganizationName() const
{
    return m_authorizedOrganizationName;
}

void CreatePartnerAutoSignAuthUrlRequest::SetAuthorizedOrganizationName(const string& _authorizedOrganizationName)
{
    m_authorizedOrganizationName = _authorizedOrganizationName;
    m_authorizedOrganizationNameHasBeenSet = true;
}

bool CreatePartnerAutoSignAuthUrlRequest::AuthorizedOrganizationNameHasBeenSet() const
{
    return m_authorizedOrganizationNameHasBeenSet;
}

vector<string> CreatePartnerAutoSignAuthUrlRequest::GetSealTypes() const
{
    return m_sealTypes;
}

void CreatePartnerAutoSignAuthUrlRequest::SetSealTypes(const vector<string>& _sealTypes)
{
    m_sealTypes = _sealTypes;
    m_sealTypesHasBeenSet = true;
}

bool CreatePartnerAutoSignAuthUrlRequest::SealTypesHasBeenSet() const
{
    return m_sealTypesHasBeenSet;
}

bool CreatePartnerAutoSignAuthUrlRequest::GetAuthToMe() const
{
    return m_authToMe;
}

void CreatePartnerAutoSignAuthUrlRequest::SetAuthToMe(const bool& _authToMe)
{
    m_authToMe = _authToMe;
    m_authToMeHasBeenSet = true;
}

bool CreatePartnerAutoSignAuthUrlRequest::AuthToMeHasBeenSet() const
{
    return m_authToMeHasBeenSet;
}


