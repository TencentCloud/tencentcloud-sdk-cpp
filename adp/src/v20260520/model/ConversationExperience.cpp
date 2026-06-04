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

#include <tencentcloud/adp/v20260520/model/ConversationExperience.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConversationExperience::ConversationExperience() :
    m_aiCallHasBeenSet(false),
    m_backgroundImageHasBeenSet(false),
    m_enableFallbackReplyHasBeenSet(false),
    m_enableRecommendedHasBeenSet(false),
    m_enableWebSearchHasBeenSet(false),
    m_fallbackReplyHasBeenSet(false),
    m_inputBoxConfigHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_recommendPromptModeHasBeenSet(false)
{
}

CoreInternalOutcome ConversationExperience::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AiCall") && !value["AiCall"].IsNull())
    {
        if (!value["AiCall"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationExperience.AiCall` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiCall.Deserialize(value["AiCall"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiCallHasBeenSet = true;
    }

    if (value.HasMember("BackgroundImage") && !value["BackgroundImage"].IsNull())
    {
        if (!value["BackgroundImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationExperience.BackgroundImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backgroundImage.Deserialize(value["BackgroundImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backgroundImageHasBeenSet = true;
    }

    if (value.HasMember("EnableFallbackReply") && !value["EnableFallbackReply"].IsNull())
    {
        if (!value["EnableFallbackReply"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationExperience.EnableFallbackReply` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableFallbackReply = value["EnableFallbackReply"].GetBool();
        m_enableFallbackReplyHasBeenSet = true;
    }

    if (value.HasMember("EnableRecommended") && !value["EnableRecommended"].IsNull())
    {
        if (!value["EnableRecommended"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationExperience.EnableRecommended` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableRecommended = value["EnableRecommended"].GetBool();
        m_enableRecommendedHasBeenSet = true;
    }

    if (value.HasMember("EnableWebSearch") && !value["EnableWebSearch"].IsNull())
    {
        if (!value["EnableWebSearch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationExperience.EnableWebSearch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableWebSearch = value["EnableWebSearch"].GetBool();
        m_enableWebSearchHasBeenSet = true;
    }

    if (value.HasMember("FallbackReply") && !value["FallbackReply"].IsNull())
    {
        if (!value["FallbackReply"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationExperience.FallbackReply` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fallbackReply = string(value["FallbackReply"].GetString());
        m_fallbackReplyHasBeenSet = true;
    }

    if (value.HasMember("InputBoxConfig") && !value["InputBoxConfig"].IsNull())
    {
        if (!value["InputBoxConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationExperience.InputBoxConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inputBoxConfig.Deserialize(value["InputBoxConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputBoxConfigHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationExperience.Method` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_method = value["Method"].GetInt64();
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("RecommendPromptMode") && !value["RecommendPromptMode"].IsNull())
    {
        if (!value["RecommendPromptMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationExperience.RecommendPromptMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recommendPromptMode = value["RecommendPromptMode"].GetInt64();
        m_recommendPromptModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConversationExperience::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aiCallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiCall";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiCall.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backgroundImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backgroundImage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enableFallbackReplyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFallbackReply";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableFallbackReply, allocator);
    }

    if (m_enableRecommendedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRecommended";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableRecommended, allocator);
    }

    if (m_enableWebSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableWebSearch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableWebSearch, allocator);
    }

    if (m_fallbackReplyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FallbackReply";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fallbackReply.c_str(), allocator).Move(), allocator);
    }

    if (m_inputBoxConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputBoxConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputBoxConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_method, allocator);
    }

    if (m_recommendPromptModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecommendPromptMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recommendPromptMode, allocator);
    }

}


AICallConfig ConversationExperience::GetAiCall() const
{
    return m_aiCall;
}

void ConversationExperience::SetAiCall(const AICallConfig& _aiCall)
{
    m_aiCall = _aiCall;
    m_aiCallHasBeenSet = true;
}

bool ConversationExperience::AiCallHasBeenSet() const
{
    return m_aiCallHasBeenSet;
}

BackgroundImage ConversationExperience::GetBackgroundImage() const
{
    return m_backgroundImage;
}

void ConversationExperience::SetBackgroundImage(const BackgroundImage& _backgroundImage)
{
    m_backgroundImage = _backgroundImage;
    m_backgroundImageHasBeenSet = true;
}

bool ConversationExperience::BackgroundImageHasBeenSet() const
{
    return m_backgroundImageHasBeenSet;
}

bool ConversationExperience::GetEnableFallbackReply() const
{
    return m_enableFallbackReply;
}

void ConversationExperience::SetEnableFallbackReply(const bool& _enableFallbackReply)
{
    m_enableFallbackReply = _enableFallbackReply;
    m_enableFallbackReplyHasBeenSet = true;
}

bool ConversationExperience::EnableFallbackReplyHasBeenSet() const
{
    return m_enableFallbackReplyHasBeenSet;
}

bool ConversationExperience::GetEnableRecommended() const
{
    return m_enableRecommended;
}

void ConversationExperience::SetEnableRecommended(const bool& _enableRecommended)
{
    m_enableRecommended = _enableRecommended;
    m_enableRecommendedHasBeenSet = true;
}

bool ConversationExperience::EnableRecommendedHasBeenSet() const
{
    return m_enableRecommendedHasBeenSet;
}

bool ConversationExperience::GetEnableWebSearch() const
{
    return m_enableWebSearch;
}

void ConversationExperience::SetEnableWebSearch(const bool& _enableWebSearch)
{
    m_enableWebSearch = _enableWebSearch;
    m_enableWebSearchHasBeenSet = true;
}

bool ConversationExperience::EnableWebSearchHasBeenSet() const
{
    return m_enableWebSearchHasBeenSet;
}

string ConversationExperience::GetFallbackReply() const
{
    return m_fallbackReply;
}

void ConversationExperience::SetFallbackReply(const string& _fallbackReply)
{
    m_fallbackReply = _fallbackReply;
    m_fallbackReplyHasBeenSet = true;
}

bool ConversationExperience::FallbackReplyHasBeenSet() const
{
    return m_fallbackReplyHasBeenSet;
}

InputBoxConfig ConversationExperience::GetInputBoxConfig() const
{
    return m_inputBoxConfig;
}

void ConversationExperience::SetInputBoxConfig(const InputBoxConfig& _inputBoxConfig)
{
    m_inputBoxConfig = _inputBoxConfig;
    m_inputBoxConfigHasBeenSet = true;
}

bool ConversationExperience::InputBoxConfigHasBeenSet() const
{
    return m_inputBoxConfigHasBeenSet;
}

int64_t ConversationExperience::GetMethod() const
{
    return m_method;
}

void ConversationExperience::SetMethod(const int64_t& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ConversationExperience::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

int64_t ConversationExperience::GetRecommendPromptMode() const
{
    return m_recommendPromptMode;
}

void ConversationExperience::SetRecommendPromptMode(const int64_t& _recommendPromptMode)
{
    m_recommendPromptMode = _recommendPromptMode;
    m_recommendPromptModeHasBeenSet = true;
}

bool ConversationExperience::RecommendPromptModeHasBeenSet() const
{
    return m_recommendPromptModeHasBeenSet;
}

