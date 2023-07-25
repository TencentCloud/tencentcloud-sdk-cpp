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

#include <tencentcloud/ess/v20201111/model/ModifyApplicationCallbackInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ModifyApplicationCallbackInfoRequest::ModifyApplicationCallbackInfoRequest() :
    m_operatorHasBeenSet(false),
    m_operateTypeHasBeenSet(false),
    m_callbackInfoHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string ModifyApplicationCallbackInfoRequest::ToJsonString() const
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

    if (m_operateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_operateType, allocator);
    }

    if (m_callbackInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_callbackInfo.ToJsonObject(d[key.c_str()], allocator);
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


UserInfo ModifyApplicationCallbackInfoRequest::GetOperator() const
{
    return m_operator;
}

void ModifyApplicationCallbackInfoRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ModifyApplicationCallbackInfoRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

int64_t ModifyApplicationCallbackInfoRequest::GetOperateType() const
{
    return m_operateType;
}

void ModifyApplicationCallbackInfoRequest::SetOperateType(const int64_t& _operateType)
{
    m_operateType = _operateType;
    m_operateTypeHasBeenSet = true;
}

bool ModifyApplicationCallbackInfoRequest::OperateTypeHasBeenSet() const
{
    return m_operateTypeHasBeenSet;
}

CallbackInfo ModifyApplicationCallbackInfoRequest::GetCallbackInfo() const
{
    return m_callbackInfo;
}

void ModifyApplicationCallbackInfoRequest::SetCallbackInfo(const CallbackInfo& _callbackInfo)
{
    m_callbackInfo = _callbackInfo;
    m_callbackInfoHasBeenSet = true;
}

bool ModifyApplicationCallbackInfoRequest::CallbackInfoHasBeenSet() const
{
    return m_callbackInfoHasBeenSet;
}

Agent ModifyApplicationCallbackInfoRequest::GetAgent() const
{
    return m_agent;
}

void ModifyApplicationCallbackInfoRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ModifyApplicationCallbackInfoRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


