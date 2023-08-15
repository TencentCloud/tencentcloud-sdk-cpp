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

#include <tencentcloud/tione/v20211111/model/SendChatMessageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

SendChatMessageRequest::SendChatMessageRequest() :
    m_sessionIdHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_searchSourceHasBeenSet(false)
{
}

string SendChatMessageRequest::ToJsonString() const
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

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_searchSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchSource.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SendChatMessageRequest::GetSessionId() const
{
    return m_sessionId;
}

void SendChatMessageRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool SendChatMessageRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string SendChatMessageRequest::GetQuestion() const
{
    return m_question;
}

void SendChatMessageRequest::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool SendChatMessageRequest::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

string SendChatMessageRequest::GetModelVersion() const
{
    return m_modelVersion;
}

void SendChatMessageRequest::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool SendChatMessageRequest::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string SendChatMessageRequest::GetMode() const
{
    return m_mode;
}

void SendChatMessageRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool SendChatMessageRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string SendChatMessageRequest::GetSearchSource() const
{
    return m_searchSource;
}

void SendChatMessageRequest::SetSearchSource(const string& _searchSource)
{
    m_searchSource = _searchSource;
    m_searchSourceHasBeenSet = true;
}

bool SendChatMessageRequest::SearchSourceHasBeenSet() const
{
    return m_searchSourceHasBeenSet;
}


