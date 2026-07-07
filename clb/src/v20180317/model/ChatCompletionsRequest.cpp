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

#include <tencentcloud/clb/v20180317/model/ChatCompletionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ChatCompletionsRequest::ChatCompletionsRequest() :
    m_apiKeyHasBeenSet(false),
    m_attachmentsHasBeenSet(false),
    m_chatContentHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_modelRouterIdHasBeenSet(false),
    m_requestPathHasBeenSet(false)
{
}

string ChatCompletionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_apiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiKey.c_str(), allocator).Move(), allocator);
    }

    if (m_attachmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attachments";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attachments.begin(); itr != m_attachments.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_chatContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChatContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chatContent.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_modelRouterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelRouterId.c_str(), allocator).Move(), allocator);
    }

    if (m_requestPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestPath.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ChatCompletionsRequest::GetApiKey() const
{
    return m_apiKey;
}

void ChatCompletionsRequest::SetApiKey(const string& _apiKey)
{
    m_apiKey = _apiKey;
    m_apiKeyHasBeenSet = true;
}

bool ChatCompletionsRequest::ApiKeyHasBeenSet() const
{
    return m_apiKeyHasBeenSet;
}

vector<MultiModalityAttachments> ChatCompletionsRequest::GetAttachments() const
{
    return m_attachments;
}

void ChatCompletionsRequest::SetAttachments(const vector<MultiModalityAttachments>& _attachments)
{
    m_attachments = _attachments;
    m_attachmentsHasBeenSet = true;
}

bool ChatCompletionsRequest::AttachmentsHasBeenSet() const
{
    return m_attachmentsHasBeenSet;
}

string ChatCompletionsRequest::GetChatContent() const
{
    return m_chatContent;
}

void ChatCompletionsRequest::SetChatContent(const string& _chatContent)
{
    m_chatContent = _chatContent;
    m_chatContentHasBeenSet = true;
}

bool ChatCompletionsRequest::ChatContentHasBeenSet() const
{
    return m_chatContentHasBeenSet;
}

string ChatCompletionsRequest::GetModel() const
{
    return m_model;
}

void ChatCompletionsRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool ChatCompletionsRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string ChatCompletionsRequest::GetModelRouterId() const
{
    return m_modelRouterId;
}

void ChatCompletionsRequest::SetModelRouterId(const string& _modelRouterId)
{
    m_modelRouterId = _modelRouterId;
    m_modelRouterIdHasBeenSet = true;
}

bool ChatCompletionsRequest::ModelRouterIdHasBeenSet() const
{
    return m_modelRouterIdHasBeenSet;
}

string ChatCompletionsRequest::GetRequestPath() const
{
    return m_requestPath;
}

void ChatCompletionsRequest::SetRequestPath(const string& _requestPath)
{
    m_requestPath = _requestPath;
    m_requestPathHasBeenSet = true;
}

bool ChatCompletionsRequest::RequestPathHasBeenSet() const
{
    return m_requestPathHasBeenSet;
}


