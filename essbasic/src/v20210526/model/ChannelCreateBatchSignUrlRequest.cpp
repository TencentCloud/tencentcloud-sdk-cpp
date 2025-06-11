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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateBatchSignUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateBatchSignUrlRequest::ChannelCreateBatchSignUrlRequest() :
    m_agentHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_idCardTypeHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_notifyTypeHasBeenSet(false),
    m_flowIdsHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_signatureTypesHasBeenSet(false),
    m_jumpToDetailHasBeenSet(false),
    m_flowBatchUrlInfoHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_organizationOpenIdHasBeenSet(false),
    m_autoJumpBackHasBeenSet(false),
    m_urlUseEnvHasBeenSet(false),
    m_canBatchRejectHasBeenSet(false),
    m_canSkipReadFlowHasBeenSet(false)
{
}

string ChannelCreateBatchSignUrlRequest::ToJsonString() const
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

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_notifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyType.c_str(), allocator).Move(), allocator);
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

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_signatureTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignatureTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_signatureTypes.begin(); itr != m_signatureTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_jumpToDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpToDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_jumpToDetail, allocator);
    }

    if (m_flowBatchUrlInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowBatchUrlInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_flowBatchUrlInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoJumpBackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoJumpBack";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoJumpBack, allocator);
    }

    if (m_urlUseEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlUseEnv";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_urlUseEnv.c_str(), allocator).Move(), allocator);
    }

    if (m_canBatchRejectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanBatchReject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_canBatchReject, allocator);
    }

    if (m_canSkipReadFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanSkipReadFlow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_canSkipReadFlow, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ChannelCreateBatchSignUrlRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreateBatchSignUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreateBatchSignUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelCreateBatchSignUrlRequest::GetName() const
{
    return m_name;
}

void ChannelCreateBatchSignUrlRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ChannelCreateBatchSignUrlRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ChannelCreateBatchSignUrlRequest::GetMobile() const
{
    return m_mobile;
}

void ChannelCreateBatchSignUrlRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool ChannelCreateBatchSignUrlRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

UserInfo ChannelCreateBatchSignUrlRequest::GetOperator() const
{
    return m_operator;
}

void ChannelCreateBatchSignUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ChannelCreateBatchSignUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string ChannelCreateBatchSignUrlRequest::GetIdCardType() const
{
    return m_idCardType;
}

void ChannelCreateBatchSignUrlRequest::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool ChannelCreateBatchSignUrlRequest::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
}

string ChannelCreateBatchSignUrlRequest::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void ChannelCreateBatchSignUrlRequest::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool ChannelCreateBatchSignUrlRequest::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string ChannelCreateBatchSignUrlRequest::GetNotifyType() const
{
    return m_notifyType;
}

void ChannelCreateBatchSignUrlRequest::SetNotifyType(const string& _notifyType)
{
    m_notifyType = _notifyType;
    m_notifyTypeHasBeenSet = true;
}

bool ChannelCreateBatchSignUrlRequest::NotifyTypeHasBeenSet() const
{
    return m_notifyTypeHasBeenSet;
}

vector<string> ChannelCreateBatchSignUrlRequest::GetFlowIds() const
{
    return m_flowIds;
}

void ChannelCreateBatchSignUrlRequest::SetFlowIds(const vector<string>& _flowIds)
{
    m_flowIds = _flowIds;
    m_flowIdsHasBeenSet = true;
}

bool ChannelCreateBatchSignUrlRequest::FlowIdsHasBeenSet() const
{
    return m_flowIdsHasBeenSet;
}

string ChannelCreateBatchSignUrlRequest::GetOrganizationName() const
{
    return m_organizationName;
}

void ChannelCreateBatchSignUrlRequest::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool ChannelCreateBatchSignUrlRequest::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

vector<int64_t> ChannelCreateBatchSignUrlRequest::GetSignatureTypes() const
{
    return m_signatureTypes;
}

void ChannelCreateBatchSignUrlRequest::SetSignatureTypes(const vector<int64_t>& _signatureTypes)
{
    m_signatureTypes = _signatureTypes;
    m_signatureTypesHasBeenSet = true;
}

bool ChannelCreateBatchSignUrlRequest::SignatureTypesHasBeenSet() const
{
    return m_signatureTypesHasBeenSet;
}

bool ChannelCreateBatchSignUrlRequest::GetJumpToDetail() const
{
    return m_jumpToDetail;
}

void ChannelCreateBatchSignUrlRequest::SetJumpToDetail(const bool& _jumpToDetail)
{
    m_jumpToDetail = _jumpToDetail;
    m_jumpToDetailHasBeenSet = true;
}

bool ChannelCreateBatchSignUrlRequest::JumpToDetailHasBeenSet() const
{
    return m_jumpToDetailHasBeenSet;
}

FlowBatchUrlInfo ChannelCreateBatchSignUrlRequest::GetFlowBatchUrlInfo() const
{
    return m_flowBatchUrlInfo;
}

void ChannelCreateBatchSignUrlRequest::SetFlowBatchUrlInfo(const FlowBatchUrlInfo& _flowBatchUrlInfo)
{
    m_flowBatchUrlInfo = _flowBatchUrlInfo;
    m_flowBatchUrlInfoHasBeenSet = true;
}

bool ChannelCreateBatchSignUrlRequest::FlowBatchUrlInfoHasBeenSet() const
{
    return m_flowBatchUrlInfoHasBeenSet;
}

string ChannelCreateBatchSignUrlRequest::GetOpenId() const
{
    return m_openId;
}

void ChannelCreateBatchSignUrlRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool ChannelCreateBatchSignUrlRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string ChannelCreateBatchSignUrlRequest::GetOrganizationOpenId() const
{
    return m_organizationOpenId;
}

void ChannelCreateBatchSignUrlRequest::SetOrganizationOpenId(const string& _organizationOpenId)
{
    m_organizationOpenId = _organizationOpenId;
    m_organizationOpenIdHasBeenSet = true;
}

bool ChannelCreateBatchSignUrlRequest::OrganizationOpenIdHasBeenSet() const
{
    return m_organizationOpenIdHasBeenSet;
}

bool ChannelCreateBatchSignUrlRequest::GetAutoJumpBack() const
{
    return m_autoJumpBack;
}

void ChannelCreateBatchSignUrlRequest::SetAutoJumpBack(const bool& _autoJumpBack)
{
    m_autoJumpBack = _autoJumpBack;
    m_autoJumpBackHasBeenSet = true;
}

bool ChannelCreateBatchSignUrlRequest::AutoJumpBackHasBeenSet() const
{
    return m_autoJumpBackHasBeenSet;
}

string ChannelCreateBatchSignUrlRequest::GetUrlUseEnv() const
{
    return m_urlUseEnv;
}

void ChannelCreateBatchSignUrlRequest::SetUrlUseEnv(const string& _urlUseEnv)
{
    m_urlUseEnv = _urlUseEnv;
    m_urlUseEnvHasBeenSet = true;
}

bool ChannelCreateBatchSignUrlRequest::UrlUseEnvHasBeenSet() const
{
    return m_urlUseEnvHasBeenSet;
}

bool ChannelCreateBatchSignUrlRequest::GetCanBatchReject() const
{
    return m_canBatchReject;
}

void ChannelCreateBatchSignUrlRequest::SetCanBatchReject(const bool& _canBatchReject)
{
    m_canBatchReject = _canBatchReject;
    m_canBatchRejectHasBeenSet = true;
}

bool ChannelCreateBatchSignUrlRequest::CanBatchRejectHasBeenSet() const
{
    return m_canBatchRejectHasBeenSet;
}

bool ChannelCreateBatchSignUrlRequest::GetCanSkipReadFlow() const
{
    return m_canSkipReadFlow;
}

void ChannelCreateBatchSignUrlRequest::SetCanSkipReadFlow(const bool& _canSkipReadFlow)
{
    m_canSkipReadFlow = _canSkipReadFlow;
    m_canSkipReadFlowHasBeenSet = true;
}

bool ChannelCreateBatchSignUrlRequest::CanSkipReadFlowHasBeenSet() const
{
    return m_canSkipReadFlowHasBeenSet;
}


