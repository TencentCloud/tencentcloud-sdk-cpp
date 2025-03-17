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

#include <tencentcloud/hunyuan/v20230901/model/GroupChatCompletionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

GroupChatCompletionsRequest::GroupChatCompletionsRequest() :
    m_modelHasBeenSet(false),
    m_messagesHasBeenSet(false),
    m_streamHasBeenSet(false),
    m_targetCharacterNameHasBeenSet(false),
    m_groupChatConfigHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

string GroupChatCompletionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_messagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Messages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_messages.begin(); itr != m_messages.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_streamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stream";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_stream, allocator);
    }

    if (m_targetCharacterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetCharacterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetCharacterName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupChatConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupChatConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_groupChatConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GroupChatCompletionsRequest::GetModel() const
{
    return m_model;
}

void GroupChatCompletionsRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool GroupChatCompletionsRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<GroupMessage> GroupChatCompletionsRequest::GetMessages() const
{
    return m_messages;
}

void GroupChatCompletionsRequest::SetMessages(const vector<GroupMessage>& _messages)
{
    m_messages = _messages;
    m_messagesHasBeenSet = true;
}

bool GroupChatCompletionsRequest::MessagesHasBeenSet() const
{
    return m_messagesHasBeenSet;
}

bool GroupChatCompletionsRequest::GetStream() const
{
    return m_stream;
}

void GroupChatCompletionsRequest::SetStream(const bool& _stream)
{
    m_stream = _stream;
    m_streamHasBeenSet = true;
}

bool GroupChatCompletionsRequest::StreamHasBeenSet() const
{
    return m_streamHasBeenSet;
}

string GroupChatCompletionsRequest::GetTargetCharacterName() const
{
    return m_targetCharacterName;
}

void GroupChatCompletionsRequest::SetTargetCharacterName(const string& _targetCharacterName)
{
    m_targetCharacterName = _targetCharacterName;
    m_targetCharacterNameHasBeenSet = true;
}

bool GroupChatCompletionsRequest::TargetCharacterNameHasBeenSet() const
{
    return m_targetCharacterNameHasBeenSet;
}

GroupChatConfig GroupChatCompletionsRequest::GetGroupChatConfig() const
{
    return m_groupChatConfig;
}

void GroupChatCompletionsRequest::SetGroupChatConfig(const GroupChatConfig& _groupChatConfig)
{
    m_groupChatConfig = _groupChatConfig;
    m_groupChatConfigHasBeenSet = true;
}

bool GroupChatCompletionsRequest::GroupChatConfigHasBeenSet() const
{
    return m_groupChatConfigHasBeenSet;
}

string GroupChatCompletionsRequest::GetUserId() const
{
    return m_userId;
}

void GroupChatCompletionsRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool GroupChatCompletionsRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string GroupChatCompletionsRequest::GetSessionId() const
{
    return m_sessionId;
}

void GroupChatCompletionsRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool GroupChatCompletionsRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}


