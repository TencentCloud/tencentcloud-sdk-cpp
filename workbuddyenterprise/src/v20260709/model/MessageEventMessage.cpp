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

#include <tencentcloud/workbuddyenterprise/v20260709/model/MessageEventMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

MessageEventMessage::MessageEventMessage() :
    m_contentHasBeenSet(false),
    m_tokenUsageHasBeenSet(false)
{
}

CoreInternalOutcome MessageEventMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageEventMessage.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("TokenUsage") && !value["TokenUsage"].IsNull())
    {
        if (!value["TokenUsage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MessageEventMessage.TokenUsage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tokenUsage.Deserialize(value["TokenUsage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tokenUsageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MessageEventMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tokenUsage.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MessageEventMessage::GetContent() const
{
    return m_content;
}

void MessageEventMessage::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool MessageEventMessage::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

TokenUsage MessageEventMessage::GetTokenUsage() const
{
    return m_tokenUsage;
}

void MessageEventMessage::SetTokenUsage(const TokenUsage& _tokenUsage)
{
    m_tokenUsage = _tokenUsage;
    m_tokenUsageHasBeenSet = true;
}

bool MessageEventMessage::TokenUsageHasBeenSet() const
{
    return m_tokenUsageHasBeenSet;
}

