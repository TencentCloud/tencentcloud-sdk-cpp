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

#include <tencentcloud/ess/v20201111/model/CancelMultiFlowSignQRCodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CancelMultiFlowSignQRCodeRequest::CancelMultiFlowSignQRCodeRequest() :
    m_operatorHasBeenSet(false),
    m_qrCodeIdHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string CancelMultiFlowSignQRCodeRequest::ToJsonString() const
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

    if (m_qrCodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrCodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qrCodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CancelMultiFlowSignQRCodeRequest::GetOperator() const
{
    return m_operator;
}

void CancelMultiFlowSignQRCodeRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CancelMultiFlowSignQRCodeRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CancelMultiFlowSignQRCodeRequest::GetQrCodeId() const
{
    return m_qrCodeId;
}

void CancelMultiFlowSignQRCodeRequest::SetQrCodeId(const string& _qrCodeId)
{
    m_qrCodeId = _qrCodeId;
    m_qrCodeIdHasBeenSet = true;
}

bool CancelMultiFlowSignQRCodeRequest::QrCodeIdHasBeenSet() const
{
    return m_qrCodeIdHasBeenSet;
}

Agent CancelMultiFlowSignQRCodeRequest::GetAgent() const
{
    return m_agent;
}

void CancelMultiFlowSignQRCodeRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CancelMultiFlowSignQRCodeRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


