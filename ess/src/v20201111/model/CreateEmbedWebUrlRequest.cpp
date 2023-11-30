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

#include <tencentcloud/ess/v20201111/model/CreateEmbedWebUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateEmbedWebUrlRequest::CreateEmbedWebUrlRequest() :
    m_operatorHasBeenSet(false),
    m_embedTypeHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_reviewerHasBeenSet(false),
    m_optionHasBeenSet(false),
    m_userDataHasBeenSet(false)
{
}

string CreateEmbedWebUrlRequest::ToJsonString() const
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

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_reviewerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reviewer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reviewer.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_optionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Option";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_option.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateEmbedWebUrlRequest::GetOperator() const
{
    return m_operator;
}

void CreateEmbedWebUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateEmbedWebUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateEmbedWebUrlRequest::GetEmbedType() const
{
    return m_embedType;
}

void CreateEmbedWebUrlRequest::SetEmbedType(const string& _embedType)
{
    m_embedType = _embedType;
    m_embedTypeHasBeenSet = true;
}

bool CreateEmbedWebUrlRequest::EmbedTypeHasBeenSet() const
{
    return m_embedTypeHasBeenSet;
}

string CreateEmbedWebUrlRequest::GetBusinessId() const
{
    return m_businessId;
}

void CreateEmbedWebUrlRequest::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool CreateEmbedWebUrlRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

Agent CreateEmbedWebUrlRequest::GetAgent() const
{
    return m_agent;
}

void CreateEmbedWebUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateEmbedWebUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

ReviewerInfo CreateEmbedWebUrlRequest::GetReviewer() const
{
    return m_reviewer;
}

void CreateEmbedWebUrlRequest::SetReviewer(const ReviewerInfo& _reviewer)
{
    m_reviewer = _reviewer;
    m_reviewerHasBeenSet = true;
}

bool CreateEmbedWebUrlRequest::ReviewerHasBeenSet() const
{
    return m_reviewerHasBeenSet;
}

EmbedUrlOption CreateEmbedWebUrlRequest::GetOption() const
{
    return m_option;
}

void CreateEmbedWebUrlRequest::SetOption(const EmbedUrlOption& _option)
{
    m_option = _option;
    m_optionHasBeenSet = true;
}

bool CreateEmbedWebUrlRequest::OptionHasBeenSet() const
{
    return m_optionHasBeenSet;
}

string CreateEmbedWebUrlRequest::GetUserData() const
{
    return m_userData;
}

void CreateEmbedWebUrlRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool CreateEmbedWebUrlRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}


