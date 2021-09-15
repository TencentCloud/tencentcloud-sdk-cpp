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

#include <tencentcloud/essbasic/v20201222/model/SendSignInnerVerifyCodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

SendSignInnerVerifyCodeRequest::SendSignInnerVerifyCodeRequest() :
    m_callerHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_verifyTypeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_verifyTemplateIdHasBeenSet(false),
    m_verifySignHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_checkThreeElementResultHasBeenSet(false)
{
}

string SendSignInnerVerifyCodeRequest::ToJsonString() const
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

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_verifySignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifySign";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifySign.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_checkThreeElementResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckThreeElementResult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkThreeElementResult, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller SendSignInnerVerifyCodeRequest::GetCaller() const
{
    return m_caller;
}

void SendSignInnerVerifyCodeRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool SendSignInnerVerifyCodeRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string SendSignInnerVerifyCodeRequest::GetMobile() const
{
    return m_mobile;
}

void SendSignInnerVerifyCodeRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool SendSignInnerVerifyCodeRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string SendSignInnerVerifyCodeRequest::GetVerifyType() const
{
    return m_verifyType;
}

void SendSignInnerVerifyCodeRequest::SetVerifyType(const string& _verifyType)
{
    m_verifyType = _verifyType;
    m_verifyTypeHasBeenSet = true;
}

bool SendSignInnerVerifyCodeRequest::VerifyTypeHasBeenSet() const
{
    return m_verifyTypeHasBeenSet;
}

string SendSignInnerVerifyCodeRequest::GetUserId() const
{
    return m_userId;
}

void SendSignInnerVerifyCodeRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool SendSignInnerVerifyCodeRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string SendSignInnerVerifyCodeRequest::GetVerifyTemplateId() const
{
    return m_verifyTemplateId;
}

void SendSignInnerVerifyCodeRequest::SetVerifyTemplateId(const string& _verifyTemplateId)
{
    m_verifyTemplateId = _verifyTemplateId;
    m_verifyTemplateIdHasBeenSet = true;
}

bool SendSignInnerVerifyCodeRequest::VerifyTemplateIdHasBeenSet() const
{
    return m_verifyTemplateIdHasBeenSet;
}

string SendSignInnerVerifyCodeRequest::GetVerifySign() const
{
    return m_verifySign;
}

void SendSignInnerVerifyCodeRequest::SetVerifySign(const string& _verifySign)
{
    m_verifySign = _verifySign;
    m_verifySignHasBeenSet = true;
}

bool SendSignInnerVerifyCodeRequest::VerifySignHasBeenSet() const
{
    return m_verifySignHasBeenSet;
}

string SendSignInnerVerifyCodeRequest::GetFlowId() const
{
    return m_flowId;
}

void SendSignInnerVerifyCodeRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool SendSignInnerVerifyCodeRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

int64_t SendSignInnerVerifyCodeRequest::GetCheckThreeElementResult() const
{
    return m_checkThreeElementResult;
}

void SendSignInnerVerifyCodeRequest::SetCheckThreeElementResult(const int64_t& _checkThreeElementResult)
{
    m_checkThreeElementResult = _checkThreeElementResult;
    m_checkThreeElementResultHasBeenSet = true;
}

bool SendSignInnerVerifyCodeRequest::CheckThreeElementResultHasBeenSet() const
{
    return m_checkThreeElementResultHasBeenSet;
}


