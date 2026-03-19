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

#include <tencentcloud/ess/v20201111/model/VerifyDigitalDataSignRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

VerifyDigitalDataSignRequest::VerifyDigitalDataSignRequest() :
    m_agentHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_plainTextHasBeenSet(false),
    m_signValueHasBeenSet(false)
{
}

string VerifyDigitalDataSignRequest::ToJsonString() const
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

    if (m_plainTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlainText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_plainText.c_str(), allocator).Move(), allocator);
    }

    if (m_signValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_signValue.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent VerifyDigitalDataSignRequest::GetAgent() const
{
    return m_agent;
}

void VerifyDigitalDataSignRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool VerifyDigitalDataSignRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

UserInfo VerifyDigitalDataSignRequest::GetOperator() const
{
    return m_operator;
}

void VerifyDigitalDataSignRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool VerifyDigitalDataSignRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string VerifyDigitalDataSignRequest::GetPlainText() const
{
    return m_plainText;
}

void VerifyDigitalDataSignRequest::SetPlainText(const string& _plainText)
{
    m_plainText = _plainText;
    m_plainTextHasBeenSet = true;
}

bool VerifyDigitalDataSignRequest::PlainTextHasBeenSet() const
{
    return m_plainTextHasBeenSet;
}

string VerifyDigitalDataSignRequest::GetSignValue() const
{
    return m_signValue;
}

void VerifyDigitalDataSignRequest::SetSignValue(const string& _signValue)
{
    m_signValue = _signValue;
    m_signValueHasBeenSet = true;
}

bool VerifyDigitalDataSignRequest::SignValueHasBeenSet() const
{
    return m_signValueHasBeenSet;
}


