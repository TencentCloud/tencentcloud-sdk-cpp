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

#include <tencentcloud/dataagent/v20250513/model/ChatAIRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

ChatAIRequest::ChatAIRequest() :
    m_sessionIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_deepThinkingHasBeenSet(false),
    m_dataSourceIdsHasBeenSet(false),
    m_agentTypeHasBeenSet(false),
    m_oldRecordIdHasBeenSet(false),
    m_knowledgeBaseIdsHasBeenSet(false)
{
}

string ChatAIRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_deepThinkingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeepThinking";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deepThinking, allocator);
    }

    if (m_dataSourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataSourceIds.begin(); itr != m_dataSourceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_agentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentType.c_str(), allocator).Move(), allocator);
    }

    if (m_oldRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldRecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldRecordId.c_str(), allocator).Move(), allocator);
    }

    if (m_knowledgeBaseIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBaseIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_knowledgeBaseIds.begin(); itr != m_knowledgeBaseIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ChatAIRequest::GetSessionId() const
{
    return m_sessionId;
}

void ChatAIRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool ChatAIRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string ChatAIRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ChatAIRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ChatAIRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ChatAIRequest::GetQuestion() const
{
    return m_question;
}

void ChatAIRequest::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool ChatAIRequest::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

string ChatAIRequest::GetContext() const
{
    return m_context;
}

void ChatAIRequest::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool ChatAIRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

string ChatAIRequest::GetModel() const
{
    return m_model;
}

void ChatAIRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool ChatAIRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

bool ChatAIRequest::GetDeepThinking() const
{
    return m_deepThinking;
}

void ChatAIRequest::SetDeepThinking(const bool& _deepThinking)
{
    m_deepThinking = _deepThinking;
    m_deepThinkingHasBeenSet = true;
}

bool ChatAIRequest::DeepThinkingHasBeenSet() const
{
    return m_deepThinkingHasBeenSet;
}

vector<string> ChatAIRequest::GetDataSourceIds() const
{
    return m_dataSourceIds;
}

void ChatAIRequest::SetDataSourceIds(const vector<string>& _dataSourceIds)
{
    m_dataSourceIds = _dataSourceIds;
    m_dataSourceIdsHasBeenSet = true;
}

bool ChatAIRequest::DataSourceIdsHasBeenSet() const
{
    return m_dataSourceIdsHasBeenSet;
}

string ChatAIRequest::GetAgentType() const
{
    return m_agentType;
}

void ChatAIRequest::SetAgentType(const string& _agentType)
{
    m_agentType = _agentType;
    m_agentTypeHasBeenSet = true;
}

bool ChatAIRequest::AgentTypeHasBeenSet() const
{
    return m_agentTypeHasBeenSet;
}

string ChatAIRequest::GetOldRecordId() const
{
    return m_oldRecordId;
}

void ChatAIRequest::SetOldRecordId(const string& _oldRecordId)
{
    m_oldRecordId = _oldRecordId;
    m_oldRecordIdHasBeenSet = true;
}

bool ChatAIRequest::OldRecordIdHasBeenSet() const
{
    return m_oldRecordIdHasBeenSet;
}

vector<string> ChatAIRequest::GetKnowledgeBaseIds() const
{
    return m_knowledgeBaseIds;
}

void ChatAIRequest::SetKnowledgeBaseIds(const vector<string>& _knowledgeBaseIds)
{
    m_knowledgeBaseIds = _knowledgeBaseIds;
    m_knowledgeBaseIdsHasBeenSet = true;
}

bool ChatAIRequest::KnowledgeBaseIdsHasBeenSet() const
{
    return m_knowledgeBaseIdsHasBeenSet;
}


