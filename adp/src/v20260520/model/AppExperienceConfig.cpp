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

#include <tencentcloud/adp/v20260520/model/AppExperienceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppExperienceConfig::AppExperienceConfig() :
    m_advancedHasBeenSet(false),
    m_conversationHasBeenSet(false),
    m_roleHasBeenSet(false)
{
}

CoreInternalOutcome AppExperienceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Advanced") && !value["Advanced"].IsNull())
    {
        if (!value["Advanced"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppExperienceConfig.Advanced` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advanced.Deserialize(value["Advanced"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_advancedHasBeenSet = true;
    }

    if (value.HasMember("Conversation") && !value["Conversation"].IsNull())
    {
        if (!value["Conversation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppExperienceConfig.Conversation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_conversation.Deserialize(value["Conversation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_conversationHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppExperienceConfig.Role` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_role.Deserialize(value["Role"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_roleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppExperienceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_advancedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Advanced";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advanced.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_conversationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conversation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_conversation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_role.ToJsonObject(value[key.c_str()], allocator);
    }

}


AppAdvancedConf AppExperienceConfig::GetAdvanced() const
{
    return m_advanced;
}

void AppExperienceConfig::SetAdvanced(const AppAdvancedConf& _advanced)
{
    m_advanced = _advanced;
    m_advancedHasBeenSet = true;
}

bool AppExperienceConfig::AdvancedHasBeenSet() const
{
    return m_advancedHasBeenSet;
}

ConversationExperience AppExperienceConfig::GetConversation() const
{
    return m_conversation;
}

void AppExperienceConfig::SetConversation(const ConversationExperience& _conversation)
{
    m_conversation = _conversation;
    m_conversationHasBeenSet = true;
}

bool AppExperienceConfig::ConversationHasBeenSet() const
{
    return m_conversationHasBeenSet;
}

RoleConfig AppExperienceConfig::GetRole() const
{
    return m_role;
}

void AppExperienceConfig::SetRole(const RoleConfig& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool AppExperienceConfig::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

