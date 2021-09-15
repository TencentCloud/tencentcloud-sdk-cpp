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

#include <tencentcloud/essbasic/v20201222/model/SignFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

SignFlowRequest::SignFlowRequest() :
    m_callerHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_verifyResultHasBeenSet(false),
    m_verifyChannelHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_signSealsHasBeenSet(false),
    m_approveMessageHasBeenSet(false),
    m_signIdHasBeenSet(false)
{
}

string SignFlowRequest::ToJsonString() const
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

    if (m_signSealsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignSeals";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_signSeals.begin(); itr != m_signSeals.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_approveMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_approveMessage.c_str(), allocator).Move(), allocator);
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


Caller SignFlowRequest::GetCaller() const
{
    return m_caller;
}

void SignFlowRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool SignFlowRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string SignFlowRequest::GetFlowId() const
{
    return m_flowId;
}

void SignFlowRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool SignFlowRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string SignFlowRequest::GetVerifyResult() const
{
    return m_verifyResult;
}

void SignFlowRequest::SetVerifyResult(const string& _verifyResult)
{
    m_verifyResult = _verifyResult;
    m_verifyResultHasBeenSet = true;
}

bool SignFlowRequest::VerifyResultHasBeenSet() const
{
    return m_verifyResultHasBeenSet;
}

string SignFlowRequest::GetVerifyChannel() const
{
    return m_verifyChannel;
}

void SignFlowRequest::SetVerifyChannel(const string& _verifyChannel)
{
    m_verifyChannel = _verifyChannel;
    m_verifyChannelHasBeenSet = true;
}

bool SignFlowRequest::VerifyChannelHasBeenSet() const
{
    return m_verifyChannelHasBeenSet;
}

string SignFlowRequest::GetSourceIp() const
{
    return m_sourceIp;
}

void SignFlowRequest::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool SignFlowRequest::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

vector<SignSeal> SignFlowRequest::GetSignSeals() const
{
    return m_signSeals;
}

void SignFlowRequest::SetSignSeals(const vector<SignSeal>& _signSeals)
{
    m_signSeals = _signSeals;
    m_signSealsHasBeenSet = true;
}

bool SignFlowRequest::SignSealsHasBeenSet() const
{
    return m_signSealsHasBeenSet;
}

string SignFlowRequest::GetApproveMessage() const
{
    return m_approveMessage;
}

void SignFlowRequest::SetApproveMessage(const string& _approveMessage)
{
    m_approveMessage = _approveMessage;
    m_approveMessageHasBeenSet = true;
}

bool SignFlowRequest::ApproveMessageHasBeenSet() const
{
    return m_approveMessageHasBeenSet;
}

string SignFlowRequest::GetSignId() const
{
    return m_signId;
}

void SignFlowRequest::SetSignId(const string& _signId)
{
    m_signId = _signId;
    m_signIdHasBeenSet = true;
}

bool SignFlowRequest::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}


