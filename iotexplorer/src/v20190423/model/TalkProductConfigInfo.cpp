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

#include <tencentcloud/iotexplorer/v20190423/model/TalkProductConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkProductConfigInfo::TalkProductConfigInfo() :
    m_productIdHasBeenSet(false),
    m_targetLanguageHasBeenSet(false),
    m_systemPromptHasBeenSet(false),
    m_greetingMessageHasBeenSet(false),
    m_voiceTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome TalkProductConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigInfo.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("TargetLanguage") && !value["TargetLanguage"].IsNull())
    {
        if (!value["TargetLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigInfo.TargetLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetLanguage = string(value["TargetLanguage"].GetString());
        m_targetLanguageHasBeenSet = true;
    }

    if (value.HasMember("SystemPrompt") && !value["SystemPrompt"].IsNull())
    {
        if (!value["SystemPrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigInfo.SystemPrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systemPrompt = string(value["SystemPrompt"].GetString());
        m_systemPromptHasBeenSet = true;
    }

    if (value.HasMember("GreetingMessage") && !value["GreetingMessage"].IsNull())
    {
        if (!value["GreetingMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigInfo.GreetingMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_greetingMessage = string(value["GreetingMessage"].GetString());
        m_greetingMessageHasBeenSet = true;
    }

    if (value.HasMember("VoiceType") && !value["VoiceType"].IsNull())
    {
        if (!value["VoiceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigInfo.VoiceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_voiceType = value["VoiceType"].GetInt64();
        m_voiceTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkProductConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_systemPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemPrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_systemPrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_greetingMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GreetingMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_greetingMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voiceType, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string TalkProductConfigInfo::GetProductId() const
{
    return m_productId;
}

void TalkProductConfigInfo::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool TalkProductConfigInfo::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string TalkProductConfigInfo::GetTargetLanguage() const
{
    return m_targetLanguage;
}

void TalkProductConfigInfo::SetTargetLanguage(const string& _targetLanguage)
{
    m_targetLanguage = _targetLanguage;
    m_targetLanguageHasBeenSet = true;
}

bool TalkProductConfigInfo::TargetLanguageHasBeenSet() const
{
    return m_targetLanguageHasBeenSet;
}

string TalkProductConfigInfo::GetSystemPrompt() const
{
    return m_systemPrompt;
}

void TalkProductConfigInfo::SetSystemPrompt(const string& _systemPrompt)
{
    m_systemPrompt = _systemPrompt;
    m_systemPromptHasBeenSet = true;
}

bool TalkProductConfigInfo::SystemPromptHasBeenSet() const
{
    return m_systemPromptHasBeenSet;
}

string TalkProductConfigInfo::GetGreetingMessage() const
{
    return m_greetingMessage;
}

void TalkProductConfigInfo::SetGreetingMessage(const string& _greetingMessage)
{
    m_greetingMessage = _greetingMessage;
    m_greetingMessageHasBeenSet = true;
}

bool TalkProductConfigInfo::GreetingMessageHasBeenSet() const
{
    return m_greetingMessageHasBeenSet;
}

int64_t TalkProductConfigInfo::GetVoiceType() const
{
    return m_voiceType;
}

void TalkProductConfigInfo::SetVoiceType(const int64_t& _voiceType)
{
    m_voiceType = _voiceType;
    m_voiceTypeHasBeenSet = true;
}

bool TalkProductConfigInfo::VoiceTypeHasBeenSet() const
{
    return m_voiceTypeHasBeenSet;
}

int64_t TalkProductConfigInfo::GetCreateTime() const
{
    return m_createTime;
}

void TalkProductConfigInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TalkProductConfigInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t TalkProductConfigInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void TalkProductConfigInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TalkProductConfigInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

