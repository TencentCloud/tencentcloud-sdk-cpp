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

#include <tencentcloud/essbasic/v20201222/model/SendFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

SendFlowRequest::SendFlowRequest() :
    m_callerHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_signComponentsHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_subOrganizationIdHasBeenSet(false),
    m_verifyChannelHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_isLastApproverHasBeenSet(false),
    m_jumpUrlHasBeenSet(false),
    m_smsTemplateHasBeenSet(false),
    m_isFullTextHasBeenSet(false),
    m_preReadTimeHasBeenSet(false),
    m_canOffLineHasBeenSet(false),
    m_callbackUrlHasBeenSet(false)
{
}

string SendFlowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_callerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_caller.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_signComponentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignComponents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_signComponents.begin(); itr != m_signComponents.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_subOrganizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOrganizationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subOrganizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_verifyChannel.begin(); itr != m_verifyChannel.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deadline, allocator);
    }

    if (m_isLastApproverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLastApprover";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isLastApprover, allocator);
    }

    if (m_jumpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jumpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_smsTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmsTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smsTemplate.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_isFullTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFullText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isFullText, allocator);
    }

    if (m_preReadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreReadTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_preReadTime, allocator);
    }

    if (m_canOffLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanOffLine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_canOffLine, allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller SendFlowRequest::GetCaller() const
{
    return m_caller;
}

void SendFlowRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool SendFlowRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string SendFlowRequest::GetFlowId() const
{
    return m_flowId;
}

void SendFlowRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool SendFlowRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string SendFlowRequest::GetUserId() const
{
    return m_userId;
}

void SendFlowRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool SendFlowRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

vector<Component> SendFlowRequest::GetSignComponents() const
{
    return m_signComponents;
}

void SendFlowRequest::SetSignComponents(const vector<Component>& _signComponents)
{
    m_signComponents = _signComponents;
    m_signComponentsHasBeenSet = true;
}

bool SendFlowRequest::SignComponentsHasBeenSet() const
{
    return m_signComponentsHasBeenSet;
}

string SendFlowRequest::GetMobile() const
{
    return m_mobile;
}

void SendFlowRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool SendFlowRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string SendFlowRequest::GetSubOrganizationId() const
{
    return m_subOrganizationId;
}

void SendFlowRequest::SetSubOrganizationId(const string& _subOrganizationId)
{
    m_subOrganizationId = _subOrganizationId;
    m_subOrganizationIdHasBeenSet = true;
}

bool SendFlowRequest::SubOrganizationIdHasBeenSet() const
{
    return m_subOrganizationIdHasBeenSet;
}

vector<string> SendFlowRequest::GetVerifyChannel() const
{
    return m_verifyChannel;
}

void SendFlowRequest::SetVerifyChannel(const vector<string>& _verifyChannel)
{
    m_verifyChannel = _verifyChannel;
    m_verifyChannelHasBeenSet = true;
}

bool SendFlowRequest::VerifyChannelHasBeenSet() const
{
    return m_verifyChannelHasBeenSet;
}

int64_t SendFlowRequest::GetDeadline() const
{
    return m_deadline;
}

void SendFlowRequest::SetDeadline(const int64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool SendFlowRequest::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

bool SendFlowRequest::GetIsLastApprover() const
{
    return m_isLastApprover;
}

void SendFlowRequest::SetIsLastApprover(const bool& _isLastApprover)
{
    m_isLastApprover = _isLastApprover;
    m_isLastApproverHasBeenSet = true;
}

bool SendFlowRequest::IsLastApproverHasBeenSet() const
{
    return m_isLastApproverHasBeenSet;
}

string SendFlowRequest::GetJumpUrl() const
{
    return m_jumpUrl;
}

void SendFlowRequest::SetJumpUrl(const string& _jumpUrl)
{
    m_jumpUrl = _jumpUrl;
    m_jumpUrlHasBeenSet = true;
}

bool SendFlowRequest::JumpUrlHasBeenSet() const
{
    return m_jumpUrlHasBeenSet;
}

SmsTemplate SendFlowRequest::GetSmsTemplate() const
{
    return m_smsTemplate;
}

void SendFlowRequest::SetSmsTemplate(const SmsTemplate& _smsTemplate)
{
    m_smsTemplate = _smsTemplate;
    m_smsTemplateHasBeenSet = true;
}

bool SendFlowRequest::SmsTemplateHasBeenSet() const
{
    return m_smsTemplateHasBeenSet;
}

bool SendFlowRequest::GetIsFullText() const
{
    return m_isFullText;
}

void SendFlowRequest::SetIsFullText(const bool& _isFullText)
{
    m_isFullText = _isFullText;
    m_isFullTextHasBeenSet = true;
}

bool SendFlowRequest::IsFullTextHasBeenSet() const
{
    return m_isFullTextHasBeenSet;
}

int64_t SendFlowRequest::GetPreReadTime() const
{
    return m_preReadTime;
}

void SendFlowRequest::SetPreReadTime(const int64_t& _preReadTime)
{
    m_preReadTime = _preReadTime;
    m_preReadTimeHasBeenSet = true;
}

bool SendFlowRequest::PreReadTimeHasBeenSet() const
{
    return m_preReadTimeHasBeenSet;
}

bool SendFlowRequest::GetCanOffLine() const
{
    return m_canOffLine;
}

void SendFlowRequest::SetCanOffLine(const bool& _canOffLine)
{
    m_canOffLine = _canOffLine;
    m_canOffLineHasBeenSet = true;
}

bool SendFlowRequest::CanOffLineHasBeenSet() const
{
    return m_canOffLineHasBeenSet;
}

string SendFlowRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void SendFlowRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool SendFlowRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}


