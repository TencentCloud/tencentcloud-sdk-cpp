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

#include <tencentcloud/ess/v20201111/model/CreateSchemeUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateSchemeUrlRequest::CreateSchemeUrlRequest() :
    m_operatorHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_idCardTypeHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_endPointHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_flowGroupIdHasBeenSet(false),
    m_pathTypeHasBeenSet(false),
    m_autoJumpBackHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_hidesHasBeenSet(false),
    m_recipientIdHasBeenSet(false),
    m_flowGroupUrlInfoHasBeenSet(false),
    m_urlUseEnvHasBeenSet(false),
    m_pickUpAfterJoinedHasBeenSet(false)
{
}

string CreateSchemeUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_endPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endPoint.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_pathTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pathType, allocator);
    }

    if (m_autoJumpBackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoJumpBack";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoJumpBack, allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_recipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recipientId.c_str(), allocator).Move(), allocator);
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

    if (m_pickUpAfterJoinedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PickUpAfterJoined";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pickUpAfterJoined, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateSchemeUrlRequest::GetOperator() const
{
    return m_operator;
}

void CreateSchemeUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateSchemeUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateSchemeUrlRequest::GetOrganizationName() const
{
    return m_organizationName;
}

void CreateSchemeUrlRequest::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool CreateSchemeUrlRequest::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string CreateSchemeUrlRequest::GetName() const
{
    return m_name;
}

void CreateSchemeUrlRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateSchemeUrlRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateSchemeUrlRequest::GetMobile() const
{
    return m_mobile;
}

void CreateSchemeUrlRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool CreateSchemeUrlRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string CreateSchemeUrlRequest::GetIdCardType() const
{
    return m_idCardType;
}

void CreateSchemeUrlRequest::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool CreateSchemeUrlRequest::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
}

string CreateSchemeUrlRequest::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void CreateSchemeUrlRequest::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool CreateSchemeUrlRequest::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string CreateSchemeUrlRequest::GetEndPoint() const
{
    return m_endPoint;
}

void CreateSchemeUrlRequest::SetEndPoint(const string& _endPoint)
{
    m_endPoint = _endPoint;
    m_endPointHasBeenSet = true;
}

bool CreateSchemeUrlRequest::EndPointHasBeenSet() const
{
    return m_endPointHasBeenSet;
}

string CreateSchemeUrlRequest::GetFlowId() const
{
    return m_flowId;
}

void CreateSchemeUrlRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool CreateSchemeUrlRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string CreateSchemeUrlRequest::GetFlowGroupId() const
{
    return m_flowGroupId;
}

void CreateSchemeUrlRequest::SetFlowGroupId(const string& _flowGroupId)
{
    m_flowGroupId = _flowGroupId;
    m_flowGroupIdHasBeenSet = true;
}

bool CreateSchemeUrlRequest::FlowGroupIdHasBeenSet() const
{
    return m_flowGroupIdHasBeenSet;
}

uint64_t CreateSchemeUrlRequest::GetPathType() const
{
    return m_pathType;
}

void CreateSchemeUrlRequest::SetPathType(const uint64_t& _pathType)
{
    m_pathType = _pathType;
    m_pathTypeHasBeenSet = true;
}

bool CreateSchemeUrlRequest::PathTypeHasBeenSet() const
{
    return m_pathTypeHasBeenSet;
}

bool CreateSchemeUrlRequest::GetAutoJumpBack() const
{
    return m_autoJumpBack;
}

void CreateSchemeUrlRequest::SetAutoJumpBack(const bool& _autoJumpBack)
{
    m_autoJumpBack = _autoJumpBack;
    m_autoJumpBackHasBeenSet = true;
}

bool CreateSchemeUrlRequest::AutoJumpBackHasBeenSet() const
{
    return m_autoJumpBackHasBeenSet;
}

Agent CreateSchemeUrlRequest::GetAgent() const
{
    return m_agent;
}

void CreateSchemeUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateSchemeUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<int64_t> CreateSchemeUrlRequest::GetHides() const
{
    return m_hides;
}

void CreateSchemeUrlRequest::SetHides(const vector<int64_t>& _hides)
{
    m_hides = _hides;
    m_hidesHasBeenSet = true;
}

bool CreateSchemeUrlRequest::HidesHasBeenSet() const
{
    return m_hidesHasBeenSet;
}

string CreateSchemeUrlRequest::GetRecipientId() const
{
    return m_recipientId;
}

void CreateSchemeUrlRequest::SetRecipientId(const string& _recipientId)
{
    m_recipientId = _recipientId;
    m_recipientIdHasBeenSet = true;
}

bool CreateSchemeUrlRequest::RecipientIdHasBeenSet() const
{
    return m_recipientIdHasBeenSet;
}

FlowGroupUrlInfo CreateSchemeUrlRequest::GetFlowGroupUrlInfo() const
{
    return m_flowGroupUrlInfo;
}

void CreateSchemeUrlRequest::SetFlowGroupUrlInfo(const FlowGroupUrlInfo& _flowGroupUrlInfo)
{
    m_flowGroupUrlInfo = _flowGroupUrlInfo;
    m_flowGroupUrlInfoHasBeenSet = true;
}

bool CreateSchemeUrlRequest::FlowGroupUrlInfoHasBeenSet() const
{
    return m_flowGroupUrlInfoHasBeenSet;
}

string CreateSchemeUrlRequest::GetUrlUseEnv() const
{
    return m_urlUseEnv;
}

void CreateSchemeUrlRequest::SetUrlUseEnv(const string& _urlUseEnv)
{
    m_urlUseEnv = _urlUseEnv;
    m_urlUseEnvHasBeenSet = true;
}

bool CreateSchemeUrlRequest::UrlUseEnvHasBeenSet() const
{
    return m_urlUseEnvHasBeenSet;
}

bool CreateSchemeUrlRequest::GetPickUpAfterJoined() const
{
    return m_pickUpAfterJoined;
}

void CreateSchemeUrlRequest::SetPickUpAfterJoined(const bool& _pickUpAfterJoined)
{
    m_pickUpAfterJoined = _pickUpAfterJoined;
    m_pickUpAfterJoinedHasBeenSet = true;
}

bool CreateSchemeUrlRequest::PickUpAfterJoinedHasBeenSet() const
{
    return m_pickUpAfterJoinedHasBeenSet;
}


