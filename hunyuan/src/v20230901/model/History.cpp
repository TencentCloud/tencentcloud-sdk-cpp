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

#include <tencentcloud/hunyuan/v20230901/model/History.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

History::History() :
    m_chatIdHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_revisedPromptHasBeenSet(false),
    m_seedHasBeenSet(false)
{
}

CoreInternalOutcome History::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChatId") && !value["ChatId"].IsNull())
    {
        if (!value["ChatId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `History.ChatId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chatId = string(value["ChatId"].GetString());
        m_chatIdHasBeenSet = true;
    }

    if (value.HasMember("Prompt") && !value["Prompt"].IsNull())
    {
        if (!value["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `History.Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(value["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }

    if (value.HasMember("RevisedPrompt") && !value["RevisedPrompt"].IsNull())
    {
        if (!value["RevisedPrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `History.RevisedPrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_revisedPrompt = string(value["RevisedPrompt"].GetString());
        m_revisedPromptHasBeenSet = true;
    }

    if (value.HasMember("Seed") && !value["Seed"].IsNull())
    {
        if (!value["Seed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `History.Seed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_seed = value["Seed"].GetInt64();
        m_seedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void History::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chatIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChatId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chatId.c_str(), allocator).Move(), allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_revisedPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RevisedPrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_revisedPrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_seedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seed, allocator);
    }

}


string History::GetChatId() const
{
    return m_chatId;
}

void History::SetChatId(const string& _chatId)
{
    m_chatId = _chatId;
    m_chatIdHasBeenSet = true;
}

bool History::ChatIdHasBeenSet() const
{
    return m_chatIdHasBeenSet;
}

string History::GetPrompt() const
{
    return m_prompt;
}

void History::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool History::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string History::GetRevisedPrompt() const
{
    return m_revisedPrompt;
}

void History::SetRevisedPrompt(const string& _revisedPrompt)
{
    m_revisedPrompt = _revisedPrompt;
    m_revisedPromptHasBeenSet = true;
}

bool History::RevisedPromptHasBeenSet() const
{
    return m_revisedPromptHasBeenSet;
}

int64_t History::GetSeed() const
{
    return m_seed;
}

void History::SetSeed(const int64_t& _seed)
{
    m_seed = _seed;
    m_seedHasBeenSet = true;
}

bool History::SeedHasBeenSet() const
{
    return m_seedHasBeenSet;
}

