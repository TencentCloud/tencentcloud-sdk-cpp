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

#include <tencentcloud/ccc/v20200210/model/CreateAIAgentCallRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CreateAIAgentCallRequest::CreateAIAgentCallRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_aIAgentIdHasBeenSet(false),
    m_calleeHasBeenSet(false),
    m_callersHasBeenSet(false),
    m_promptVariablesHasBeenSet(false),
    m_variablesHasBeenSet(false)
{
}

string CreateAIAgentCallRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_aIAgentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AIAgentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_aIAgentId, allocator);
    }

    if (m_calleeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callee";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callee.c_str(), allocator).Move(), allocator);
    }

    if (m_callersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_callers.begin(); itr != m_callers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_promptVariablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptVariables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_promptVariables.begin(); itr != m_promptVariables.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_variablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Variables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_variables.begin(); itr != m_variables.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateAIAgentCallRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateAIAgentCallRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateAIAgentCallRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t CreateAIAgentCallRequest::GetAIAgentId() const
{
    return m_aIAgentId;
}

void CreateAIAgentCallRequest::SetAIAgentId(const uint64_t& _aIAgentId)
{
    m_aIAgentId = _aIAgentId;
    m_aIAgentIdHasBeenSet = true;
}

bool CreateAIAgentCallRequest::AIAgentIdHasBeenSet() const
{
    return m_aIAgentIdHasBeenSet;
}

string CreateAIAgentCallRequest::GetCallee() const
{
    return m_callee;
}

void CreateAIAgentCallRequest::SetCallee(const string& _callee)
{
    m_callee = _callee;
    m_calleeHasBeenSet = true;
}

bool CreateAIAgentCallRequest::CalleeHasBeenSet() const
{
    return m_calleeHasBeenSet;
}

vector<string> CreateAIAgentCallRequest::GetCallers() const
{
    return m_callers;
}

void CreateAIAgentCallRequest::SetCallers(const vector<string>& _callers)
{
    m_callers = _callers;
    m_callersHasBeenSet = true;
}

bool CreateAIAgentCallRequest::CallersHasBeenSet() const
{
    return m_callersHasBeenSet;
}

vector<Variable> CreateAIAgentCallRequest::GetPromptVariables() const
{
    return m_promptVariables;
}

void CreateAIAgentCallRequest::SetPromptVariables(const vector<Variable>& _promptVariables)
{
    m_promptVariables = _promptVariables;
    m_promptVariablesHasBeenSet = true;
}

bool CreateAIAgentCallRequest::PromptVariablesHasBeenSet() const
{
    return m_promptVariablesHasBeenSet;
}

vector<Variable> CreateAIAgentCallRequest::GetVariables() const
{
    return m_variables;
}

void CreateAIAgentCallRequest::SetVariables(const vector<Variable>& _variables)
{
    m_variables = _variables;
    m_variablesHasBeenSet = true;
}

bool CreateAIAgentCallRequest::VariablesHasBeenSet() const
{
    return m_variablesHasBeenSet;
}


