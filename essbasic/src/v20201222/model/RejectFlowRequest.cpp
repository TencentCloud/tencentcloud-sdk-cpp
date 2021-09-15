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

#include <tencentcloud/essbasic/v20201222/model/RejectFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

RejectFlowRequest::RejectFlowRequest() :
    m_callerHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_verifyResultHasBeenSet(false),
    m_verifyChannelHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_rejectMessageHasBeenSet(false),
    m_signIdHasBeenSet(false)
{
}

string RejectFlowRequest::ToJsonString() const
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

    if (m_verifyResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyResult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyResult.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_rejectMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RejectMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rejectMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_signIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_signId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller RejectFlowRequest::GetCaller() const
{
    return m_caller;
}

void RejectFlowRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool RejectFlowRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string RejectFlowRequest::GetFlowId() const
{
    return m_flowId;
}

void RejectFlowRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool RejectFlowRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string RejectFlowRequest::GetVerifyResult() const
{
    return m_verifyResult;
}

void RejectFlowRequest::SetVerifyResult(const string& _verifyResult)
{
    m_verifyResult = _verifyResult;
    m_verifyResultHasBeenSet = true;
}

bool RejectFlowRequest::VerifyResultHasBeenSet() const
{
    return m_verifyResultHasBeenSet;
}

string RejectFlowRequest::GetVerifyChannel() const
{
    return m_verifyChannel;
}

void RejectFlowRequest::SetVerifyChannel(const string& _verifyChannel)
{
    m_verifyChannel = _verifyChannel;
    m_verifyChannelHasBeenSet = true;
}

bool RejectFlowRequest::VerifyChannelHasBeenSet() const
{
    return m_verifyChannelHasBeenSet;
}

string RejectFlowRequest::GetSourceIp() const
{
    return m_sourceIp;
}

void RejectFlowRequest::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool RejectFlowRequest::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

string RejectFlowRequest::GetRejectMessage() const
{
    return m_rejectMessage;
}

void RejectFlowRequest::SetRejectMessage(const string& _rejectMessage)
{
    m_rejectMessage = _rejectMessage;
    m_rejectMessageHasBeenSet = true;
}

bool RejectFlowRequest::RejectMessageHasBeenSet() const
{
    return m_rejectMessageHasBeenSet;
}

string RejectFlowRequest::GetSignId() const
{
    return m_signId;
}

void RejectFlowRequest::SetSignId(const string& _signId)
{
    m_signId = _signId;
    m_signIdHasBeenSet = true;
}

bool RejectFlowRequest::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}


