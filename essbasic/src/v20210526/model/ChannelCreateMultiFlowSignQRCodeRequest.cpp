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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateMultiFlowSignQRCodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateMultiFlowSignQRCodeRequest::ChannelCreateMultiFlowSignQRCodeRequest() :
    m_agentHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_maxFlowNumHasBeenSet(false),
    m_flowEffectiveDayHasBeenSet(false),
    m_qrEffectiveDayHasBeenSet(false),
    m_restrictionsHasBeenSet(false),
    m_approverComponentLimitTypesHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_approverRestrictionsHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_forbidPersonalMultipleSignHasBeenSet(false),
    m_flowNameAppendScannerInfoHasBeenSet(false)
{
}

string ChannelCreateMultiFlowSignQRCodeRequest::ToJsonString() const
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

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_maxFlowNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFlowNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxFlowNum, allocator);
    }

    if (m_flowEffectiveDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowEffectiveDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flowEffectiveDay, allocator);
    }

    if (m_qrEffectiveDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrEffectiveDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_qrEffectiveDay, allocator);
    }

    if (m_restrictionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Restrictions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_restrictions.begin(); itr != m_restrictions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_approverComponentLimitTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverComponentLimitTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_approverComponentLimitTypes.begin(); itr != m_approverComponentLimitTypes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_approverRestrictionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverRestrictions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_approverRestrictions.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_forbidPersonalMultipleSignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForbidPersonalMultipleSign";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forbidPersonalMultipleSign, allocator);
    }

    if (m_flowNameAppendScannerInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowNameAppendScannerInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flowNameAppendScannerInfo, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ChannelCreateMultiFlowSignQRCodeRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreateMultiFlowSignQRCodeRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreateMultiFlowSignQRCodeRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelCreateMultiFlowSignQRCodeRequest::GetTemplateId() const
{
    return m_templateId;
}

void ChannelCreateMultiFlowSignQRCodeRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ChannelCreateMultiFlowSignQRCodeRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string ChannelCreateMultiFlowSignQRCodeRequest::GetFlowName() const
{
    return m_flowName;
}

void ChannelCreateMultiFlowSignQRCodeRequest::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool ChannelCreateMultiFlowSignQRCodeRequest::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

int64_t ChannelCreateMultiFlowSignQRCodeRequest::GetMaxFlowNum() const
{
    return m_maxFlowNum;
}

void ChannelCreateMultiFlowSignQRCodeRequest::SetMaxFlowNum(const int64_t& _maxFlowNum)
{
    m_maxFlowNum = _maxFlowNum;
    m_maxFlowNumHasBeenSet = true;
}

bool ChannelCreateMultiFlowSignQRCodeRequest::MaxFlowNumHasBeenSet() const
{
    return m_maxFlowNumHasBeenSet;
}

int64_t ChannelCreateMultiFlowSignQRCodeRequest::GetFlowEffectiveDay() const
{
    return m_flowEffectiveDay;
}

void ChannelCreateMultiFlowSignQRCodeRequest::SetFlowEffectiveDay(const int64_t& _flowEffectiveDay)
{
    m_flowEffectiveDay = _flowEffectiveDay;
    m_flowEffectiveDayHasBeenSet = true;
}

bool ChannelCreateMultiFlowSignQRCodeRequest::FlowEffectiveDayHasBeenSet() const
{
    return m_flowEffectiveDayHasBeenSet;
}

int64_t ChannelCreateMultiFlowSignQRCodeRequest::GetQrEffectiveDay() const
{
    return m_qrEffectiveDay;
}

void ChannelCreateMultiFlowSignQRCodeRequest::SetQrEffectiveDay(const int64_t& _qrEffectiveDay)
{
    m_qrEffectiveDay = _qrEffectiveDay;
    m_qrEffectiveDayHasBeenSet = true;
}

bool ChannelCreateMultiFlowSignQRCodeRequest::QrEffectiveDayHasBeenSet() const
{
    return m_qrEffectiveDayHasBeenSet;
}

vector<ApproverRestriction> ChannelCreateMultiFlowSignQRCodeRequest::GetRestrictions() const
{
    return m_restrictions;
}

void ChannelCreateMultiFlowSignQRCodeRequest::SetRestrictions(const vector<ApproverRestriction>& _restrictions)
{
    m_restrictions = _restrictions;
    m_restrictionsHasBeenSet = true;
}

bool ChannelCreateMultiFlowSignQRCodeRequest::RestrictionsHasBeenSet() const
{
    return m_restrictionsHasBeenSet;
}

vector<ApproverComponentLimitType> ChannelCreateMultiFlowSignQRCodeRequest::GetApproverComponentLimitTypes() const
{
    return m_approverComponentLimitTypes;
}

void ChannelCreateMultiFlowSignQRCodeRequest::SetApproverComponentLimitTypes(const vector<ApproverComponentLimitType>& _approverComponentLimitTypes)
{
    m_approverComponentLimitTypes = _approverComponentLimitTypes;
    m_approverComponentLimitTypesHasBeenSet = true;
}

bool ChannelCreateMultiFlowSignQRCodeRequest::ApproverComponentLimitTypesHasBeenSet() const
{
    return m_approverComponentLimitTypesHasBeenSet;
}

string ChannelCreateMultiFlowSignQRCodeRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void ChannelCreateMultiFlowSignQRCodeRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool ChannelCreateMultiFlowSignQRCodeRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

ApproverRestriction ChannelCreateMultiFlowSignQRCodeRequest::GetApproverRestrictions() const
{
    return m_approverRestrictions;
}

void ChannelCreateMultiFlowSignQRCodeRequest::SetApproverRestrictions(const ApproverRestriction& _approverRestrictions)
{
    m_approverRestrictions = _approverRestrictions;
    m_approverRestrictionsHasBeenSet = true;
}

bool ChannelCreateMultiFlowSignQRCodeRequest::ApproverRestrictionsHasBeenSet() const
{
    return m_approverRestrictionsHasBeenSet;
}

UserInfo ChannelCreateMultiFlowSignQRCodeRequest::GetOperator() const
{
    return m_operator;
}

void ChannelCreateMultiFlowSignQRCodeRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ChannelCreateMultiFlowSignQRCodeRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

bool ChannelCreateMultiFlowSignQRCodeRequest::GetForbidPersonalMultipleSign() const
{
    return m_forbidPersonalMultipleSign;
}

void ChannelCreateMultiFlowSignQRCodeRequest::SetForbidPersonalMultipleSign(const bool& _forbidPersonalMultipleSign)
{
    m_forbidPersonalMultipleSign = _forbidPersonalMultipleSign;
    m_forbidPersonalMultipleSignHasBeenSet = true;
}

bool ChannelCreateMultiFlowSignQRCodeRequest::ForbidPersonalMultipleSignHasBeenSet() const
{
    return m_forbidPersonalMultipleSignHasBeenSet;
}

bool ChannelCreateMultiFlowSignQRCodeRequest::GetFlowNameAppendScannerInfo() const
{
    return m_flowNameAppendScannerInfo;
}

void ChannelCreateMultiFlowSignQRCodeRequest::SetFlowNameAppendScannerInfo(const bool& _flowNameAppendScannerInfo)
{
    m_flowNameAppendScannerInfo = _flowNameAppendScannerInfo;
    m_flowNameAppendScannerInfoHasBeenSet = true;
}

bool ChannelCreateMultiFlowSignQRCodeRequest::FlowNameAppendScannerInfoHasBeenSet() const
{
    return m_flowNameAppendScannerInfoHasBeenSet;
}


