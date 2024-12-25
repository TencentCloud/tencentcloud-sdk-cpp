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

#include <tencentcloud/essbasic/v20210526/model/CreateSignUrlsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateSignUrlsRequest::CreateSignUrlsRequest() :
    m_agentHasBeenSet(false),
    m_flowIdsHasBeenSet(false),
    m_flowGroupIdHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_generateTypeHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_idCardTypeHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_organizationOpenIdHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_autoJumpBackHasBeenSet(false),
    m_jumpUrlHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_hidesHasBeenSet(false),
    m_recipientIdsHasBeenSet(false),
    m_flowGroupUrlInfoHasBeenSet(false),
    m_urlUseEnvHasBeenSet(false)
{
}

string CreateSignUrlsRequest::ToJsonString() const
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

    if (m_flowIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_flowIds.begin(); itr != m_flowIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_flowGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_generateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_generateType.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoJumpBackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoJumpBack";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoJumpBack, allocator);
    }

    if (m_jumpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jumpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_hidesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hides";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hides.begin(); itr != m_hides.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_recipientIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recipientIds.begin(); itr != m_recipientIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_flowGroupUrlInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupUrlInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_flowGroupUrlInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_urlUseEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlUseEnv";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_urlUseEnv.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent CreateSignUrlsRequest::GetAgent() const
{
    return m_agent;
}

void CreateSignUrlsRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateSignUrlsRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<string> CreateSignUrlsRequest::GetFlowIds() const
{
    return m_flowIds;
}

void CreateSignUrlsRequest::SetFlowIds(const vector<string>& _flowIds)
{
    m_flowIds = _flowIds;
    m_flowIdsHasBeenSet = true;
}

bool CreateSignUrlsRequest::FlowIdsHasBeenSet() const
{
    return m_flowIdsHasBeenSet;
}

string CreateSignUrlsRequest::GetFlowGroupId() const
{
    return m_flowGroupId;
}

void CreateSignUrlsRequest::SetFlowGroupId(const string& _flowGroupId)
{
    m_flowGroupId = _flowGroupId;
    m_flowGroupIdHasBeenSet = true;
}

bool CreateSignUrlsRequest::FlowGroupIdHasBeenSet() const
{
    return m_flowGroupIdHasBeenSet;
}

string CreateSignUrlsRequest::GetEndpoint() const
{
    return m_endpoint;
}

void CreateSignUrlsRequest::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool CreateSignUrlsRequest::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string CreateSignUrlsRequest::GetGenerateType() const
{
    return m_generateType;
}

void CreateSignUrlsRequest::SetGenerateType(const string& _generateType)
{
    m_generateType = _generateType;
    m_generateTypeHasBeenSet = true;
}

bool CreateSignUrlsRequest::GenerateTypeHasBeenSet() const
{
    return m_generateTypeHasBeenSet;
}

string CreateSignUrlsRequest::GetOrganizationName() const
{
    return m_organizationName;
}

void CreateSignUrlsRequest::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool CreateSignUrlsRequest::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string CreateSignUrlsRequest::GetName() const
{
    return m_name;
}

void CreateSignUrlsRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateSignUrlsRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateSignUrlsRequest::GetMobile() const
{
    return m_mobile;
}

void CreateSignUrlsRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool CreateSignUrlsRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string CreateSignUrlsRequest::GetIdCardType() const
{
    return m_idCardType;
}

void CreateSignUrlsRequest::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool CreateSignUrlsRequest::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
}

string CreateSignUrlsRequest::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void CreateSignUrlsRequest::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool CreateSignUrlsRequest::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string CreateSignUrlsRequest::GetOrganizationOpenId() const
{
    return m_organizationOpenId;
}

void CreateSignUrlsRequest::SetOrganizationOpenId(const string& _organizationOpenId)
{
    m_organizationOpenId = _organizationOpenId;
    m_organizationOpenIdHasBeenSet = true;
}

bool CreateSignUrlsRequest::OrganizationOpenIdHasBeenSet() const
{
    return m_organizationOpenIdHasBeenSet;
}

string CreateSignUrlsRequest::GetOpenId() const
{
    return m_openId;
}

void CreateSignUrlsRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool CreateSignUrlsRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

bool CreateSignUrlsRequest::GetAutoJumpBack() const
{
    return m_autoJumpBack;
}

void CreateSignUrlsRequest::SetAutoJumpBack(const bool& _autoJumpBack)
{
    m_autoJumpBack = _autoJumpBack;
    m_autoJumpBackHasBeenSet = true;
}

bool CreateSignUrlsRequest::AutoJumpBackHasBeenSet() const
{
    return m_autoJumpBackHasBeenSet;
}

string CreateSignUrlsRequest::GetJumpUrl() const
{
    return m_jumpUrl;
}

void CreateSignUrlsRequest::SetJumpUrl(const string& _jumpUrl)
{
    m_jumpUrl = _jumpUrl;
    m_jumpUrlHasBeenSet = true;
}

bool CreateSignUrlsRequest::JumpUrlHasBeenSet() const
{
    return m_jumpUrlHasBeenSet;
}

UserInfo CreateSignUrlsRequest::GetOperator() const
{
    return m_operator;
}

void CreateSignUrlsRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateSignUrlsRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<int64_t> CreateSignUrlsRequest::GetHides() const
{
    return m_hides;
}

void CreateSignUrlsRequest::SetHides(const vector<int64_t>& _hides)
{
    m_hides = _hides;
    m_hidesHasBeenSet = true;
}

bool CreateSignUrlsRequest::HidesHasBeenSet() const
{
    return m_hidesHasBeenSet;
}

vector<string> CreateSignUrlsRequest::GetRecipientIds() const
{
    return m_recipientIds;
}

void CreateSignUrlsRequest::SetRecipientIds(const vector<string>& _recipientIds)
{
    m_recipientIds = _recipientIds;
    m_recipientIdsHasBeenSet = true;
}

bool CreateSignUrlsRequest::RecipientIdsHasBeenSet() const
{
    return m_recipientIdsHasBeenSet;
}

FlowGroupUrlInfo CreateSignUrlsRequest::GetFlowGroupUrlInfo() const
{
    return m_flowGroupUrlInfo;
}

void CreateSignUrlsRequest::SetFlowGroupUrlInfo(const FlowGroupUrlInfo& _flowGroupUrlInfo)
{
    m_flowGroupUrlInfo = _flowGroupUrlInfo;
    m_flowGroupUrlInfoHasBeenSet = true;
}

bool CreateSignUrlsRequest::FlowGroupUrlInfoHasBeenSet() const
{
    return m_flowGroupUrlInfoHasBeenSet;
}

string CreateSignUrlsRequest::GetUrlUseEnv() const
{
    return m_urlUseEnv;
}

void CreateSignUrlsRequest::SetUrlUseEnv(const string& _urlUseEnv)
{
    m_urlUseEnv = _urlUseEnv;
    m_urlUseEnvHasBeenSet = true;
}

bool CreateSignUrlsRequest::UrlUseEnvHasBeenSet() const
{
    return m_urlUseEnvHasBeenSet;
}


