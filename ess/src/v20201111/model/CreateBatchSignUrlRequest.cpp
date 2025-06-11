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

#include <tencentcloud/ess/v20201111/model/CreateBatchSignUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateBatchSignUrlRequest::CreateBatchSignUrlRequest() :
    m_operatorHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_idCardTypeHasBeenSet(false),
    m_signatureTypesHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_notifyTypeHasBeenSet(false),
    m_flowIdsHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_jumpToDetailHasBeenSet(false),
    m_flowBatchUrlInfoHasBeenSet(false),
    m_autoJumpBackHasBeenSet(false),
    m_urlUseEnvHasBeenSet(false),
    m_canBatchRejectHasBeenSet(false),
    m_canSkipReadFlowHasBeenSet(false)
{
}

string CreateBatchSignUrlRequest::ToJsonString() const
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

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_idCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardType.c_str(), allocator).Move(), allocator);
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


UserInfo CreateBatchSignUrlRequest::GetOperator() const
{
    return m_operator;
}

void CreateBatchSignUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateBatchSignUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateBatchSignUrlRequest::GetName() const
{
    return m_name;
}

void CreateBatchSignUrlRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateBatchSignUrlRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateBatchSignUrlRequest::GetMobile() const
{
    return m_mobile;
}

void CreateBatchSignUrlRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool CreateBatchSignUrlRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

Agent CreateBatchSignUrlRequest::GetAgent() const
{
    return m_agent;
}

void CreateBatchSignUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateBatchSignUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateBatchSignUrlRequest::GetIdCardType() const
{
    return m_idCardType;
}

void CreateBatchSignUrlRequest::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool CreateBatchSignUrlRequest::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
}

vector<int64_t> CreateBatchSignUrlRequest::GetSignatureTypes() const
{
    return m_signatureTypes;
}

void CreateBatchSignUrlRequest::SetSignatureTypes(const vector<int64_t>& _signatureTypes)
{
    m_signatureTypes = _signatureTypes;
    m_signatureTypesHasBeenSet = true;
}

bool CreateBatchSignUrlRequest::SignatureTypesHasBeenSet() const
{
    return m_signatureTypesHasBeenSet;
}

string CreateBatchSignUrlRequest::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void CreateBatchSignUrlRequest::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool CreateBatchSignUrlRequest::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string CreateBatchSignUrlRequest::GetNotifyType() const
{
    return m_notifyType;
}

void CreateBatchSignUrlRequest::SetNotifyType(const string& _notifyType)
{
    m_notifyType = _notifyType;
    m_notifyTypeHasBeenSet = true;
}

bool CreateBatchSignUrlRequest::NotifyTypeHasBeenSet() const
{
    return m_notifyTypeHasBeenSet;
}

vector<string> CreateBatchSignUrlRequest::GetFlowIds() const
{
    return m_flowIds;
}

void CreateBatchSignUrlRequest::SetFlowIds(const vector<string>& _flowIds)
{
    m_flowIds = _flowIds;
    m_flowIdsHasBeenSet = true;
}

bool CreateBatchSignUrlRequest::FlowIdsHasBeenSet() const
{
    return m_flowIdsHasBeenSet;
}

string CreateBatchSignUrlRequest::GetOrganizationName() const
{
    return m_organizationName;
}

void CreateBatchSignUrlRequest::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool CreateBatchSignUrlRequest::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

bool CreateBatchSignUrlRequest::GetJumpToDetail() const
{
    return m_jumpToDetail;
}

void CreateBatchSignUrlRequest::SetJumpToDetail(const bool& _jumpToDetail)
{
    m_jumpToDetail = _jumpToDetail;
    m_jumpToDetailHasBeenSet = true;
}

bool CreateBatchSignUrlRequest::JumpToDetailHasBeenSet() const
{
    return m_jumpToDetailHasBeenSet;
}

FlowBatchUrlInfo CreateBatchSignUrlRequest::GetFlowBatchUrlInfo() const
{
    return m_flowBatchUrlInfo;
}

void CreateBatchSignUrlRequest::SetFlowBatchUrlInfo(const FlowBatchUrlInfo& _flowBatchUrlInfo)
{
    m_flowBatchUrlInfo = _flowBatchUrlInfo;
    m_flowBatchUrlInfoHasBeenSet = true;
}

bool CreateBatchSignUrlRequest::FlowBatchUrlInfoHasBeenSet() const
{
    return m_flowBatchUrlInfoHasBeenSet;
}

bool CreateBatchSignUrlRequest::GetAutoJumpBack() const
{
    return m_autoJumpBack;
}

void CreateBatchSignUrlRequest::SetAutoJumpBack(const bool& _autoJumpBack)
{
    m_autoJumpBack = _autoJumpBack;
    m_autoJumpBackHasBeenSet = true;
}

bool CreateBatchSignUrlRequest::AutoJumpBackHasBeenSet() const
{
    return m_autoJumpBackHasBeenSet;
}

string CreateBatchSignUrlRequest::GetUrlUseEnv() const
{
    return m_urlUseEnv;
}

void CreateBatchSignUrlRequest::SetUrlUseEnv(const string& _urlUseEnv)
{
    m_urlUseEnv = _urlUseEnv;
    m_urlUseEnvHasBeenSet = true;
}

bool CreateBatchSignUrlRequest::UrlUseEnvHasBeenSet() const
{
    return m_urlUseEnvHasBeenSet;
}

bool CreateBatchSignUrlRequest::GetCanBatchReject() const
{
    return m_canBatchReject;
}

void CreateBatchSignUrlRequest::SetCanBatchReject(const bool& _canBatchReject)
{
    m_canBatchReject = _canBatchReject;
    m_canBatchRejectHasBeenSet = true;
}

bool CreateBatchSignUrlRequest::CanBatchRejectHasBeenSet() const
{
    return m_canBatchRejectHasBeenSet;
}

bool CreateBatchSignUrlRequest::GetCanSkipReadFlow() const
{
    return m_canSkipReadFlow;
}

void CreateBatchSignUrlRequest::SetCanSkipReadFlow(const bool& _canSkipReadFlow)
{
    m_canSkipReadFlow = _canSkipReadFlow;
    m_canSkipReadFlowHasBeenSet = true;
}

bool CreateBatchSignUrlRequest::CanSkipReadFlowHasBeenSet() const
{
    return m_canSkipReadFlowHasBeenSet;
}


