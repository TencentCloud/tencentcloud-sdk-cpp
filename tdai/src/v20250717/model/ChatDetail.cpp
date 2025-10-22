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

#include <tencentcloud/tdai/v20250717/model/ChatDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

ChatDetail::ChatDetail() :
    m_roleHasBeenSet(false),
    m_userMessageHasBeenSet(false),
    m_assistantMessageHasBeenSet(false)
{
}

CoreInternalOutcome ChatDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatDetail.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("UserMessage") && !value["UserMessage"].IsNull())
    {
        if (!value["UserMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatDetail.UserMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userMessage = string(value["UserMessage"].GetString());
        m_userMessageHasBeenSet = true;
    }

    if (value.HasMember("AssistantMessage") && !value["AssistantMessage"].IsNull())
    {
        if (!value["AssistantMessage"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChatDetail.AssistantMessage` is not array type"));

        const rapidjson::Value &tmpValue = value["AssistantMessage"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CreateChatCompletionRes item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assistantMessage.push_back(item);
        }
        m_assistantMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChatDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_userMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_assistantMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssistantMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assistantMessage.begin(); itr != m_assistantMessage.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ChatDetail::GetRole() const
{
    return m_role;
}

void ChatDetail::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool ChatDetail::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string ChatDetail::GetUserMessage() const
{
    return m_userMessage;
}

void ChatDetail::SetUserMessage(const string& _userMessage)
{
    m_userMessage = _userMessage;
    m_userMessageHasBeenSet = true;
}

bool ChatDetail::UserMessageHasBeenSet() const
{
    return m_userMessageHasBeenSet;
}

vector<CreateChatCompletionRes> ChatDetail::GetAssistantMessage() const
{
    return m_assistantMessage;
}

void ChatDetail::SetAssistantMessage(const vector<CreateChatCompletionRes>& _assistantMessage)
{
    m_assistantMessage = _assistantMessage;
    m_assistantMessageHasBeenSet = true;
}

bool ChatDetail::AssistantMessageHasBeenSet() const
{
    return m_assistantMessageHasBeenSet;
}

