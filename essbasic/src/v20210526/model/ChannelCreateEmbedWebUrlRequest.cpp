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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateEmbedWebUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateEmbedWebUrlRequest::ChannelCreateEmbedWebUrlRequest() :
    m_agentHasBeenSet(false),
    m_embedTypeHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_hiddenComponentsHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_optionHasBeenSet(false)
{
}

string ChannelCreateEmbedWebUrlRequest::ToJsonString() const
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

    if (m_embedTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmbedType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_embedType.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

    if (m_hiddenComponentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HiddenComponents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hiddenComponents, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_optionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Option";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_option.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ChannelCreateEmbedWebUrlRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreateEmbedWebUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreateEmbedWebUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelCreateEmbedWebUrlRequest::GetEmbedType() const
{
    return m_embedType;
}

void ChannelCreateEmbedWebUrlRequest::SetEmbedType(const string& _embedType)
{
    m_embedType = _embedType;
    m_embedTypeHasBeenSet = true;
}

bool ChannelCreateEmbedWebUrlRequest::EmbedTypeHasBeenSet() const
{
    return m_embedTypeHasBeenSet;
}

string ChannelCreateEmbedWebUrlRequest::GetBusinessId() const
{
    return m_businessId;
}

void ChannelCreateEmbedWebUrlRequest::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool ChannelCreateEmbedWebUrlRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

bool ChannelCreateEmbedWebUrlRequest::GetHiddenComponents() const
{
    return m_hiddenComponents;
}

void ChannelCreateEmbedWebUrlRequest::SetHiddenComponents(const bool& _hiddenComponents)
{
    m_hiddenComponents = _hiddenComponents;
    m_hiddenComponentsHasBeenSet = true;
}

bool ChannelCreateEmbedWebUrlRequest::HiddenComponentsHasBeenSet() const
{
    return m_hiddenComponentsHasBeenSet;
}

UserInfo ChannelCreateEmbedWebUrlRequest::GetOperator() const
{
    return m_operator;
}

void ChannelCreateEmbedWebUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ChannelCreateEmbedWebUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string ChannelCreateEmbedWebUrlRequest::GetUserData() const
{
    return m_userData;
}

void ChannelCreateEmbedWebUrlRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool ChannelCreateEmbedWebUrlRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

EmbedUrlOption ChannelCreateEmbedWebUrlRequest::GetOption() const
{
    return m_option;
}

void ChannelCreateEmbedWebUrlRequest::SetOption(const EmbedUrlOption& _option)
{
    m_option = _option;
    m_optionHasBeenSet = true;
}

bool ChannelCreateEmbedWebUrlRequest::OptionHasBeenSet() const
{
    return m_optionHasBeenSet;
}


