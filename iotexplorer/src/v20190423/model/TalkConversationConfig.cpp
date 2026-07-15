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

#include <tencentcloud/iotexplorer/v20190423/model/TalkConversationConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkConversationConfig::TalkConversationConfig() :
    m_welcomeMessageHasBeenSet(false),
    m_welcomeMessagePriorityHasBeenSet(false),
    m_interruptModeHasBeenSet(false),
    m_interruptWordListHasBeenSet(false)
{
}

CoreInternalOutcome TalkConversationConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WelcomeMessage") && !value["WelcomeMessage"].IsNull())
    {
        if (!value["WelcomeMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkConversationConfig.WelcomeMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_welcomeMessage = string(value["WelcomeMessage"].GetString());
        m_welcomeMessageHasBeenSet = true;
    }

    if (value.HasMember("WelcomeMessagePriority") && !value["WelcomeMessagePriority"].IsNull())
    {
        if (!value["WelcomeMessagePriority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkConversationConfig.WelcomeMessagePriority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_welcomeMessagePriority = value["WelcomeMessagePriority"].GetInt64();
        m_welcomeMessagePriorityHasBeenSet = true;
    }

    if (value.HasMember("InterruptMode") && !value["InterruptMode"].IsNull())
    {
        if (!value["InterruptMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkConversationConfig.InterruptMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interruptMode = value["InterruptMode"].GetInt64();
        m_interruptModeHasBeenSet = true;
    }

    if (value.HasMember("InterruptWordList") && !value["InterruptWordList"].IsNull())
    {
        if (!value["InterruptWordList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TalkConversationConfig.InterruptWordList` is not array type"));

        const rapidjson::Value &tmpValue = value["InterruptWordList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_interruptWordList.push_back((*itr).GetString());
        }
        m_interruptWordListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkConversationConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_welcomeMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WelcomeMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_welcomeMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_welcomeMessagePriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WelcomeMessagePriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_welcomeMessagePriority, allocator);
    }

    if (m_interruptModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterruptMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interruptMode, allocator);
    }

    if (m_interruptWordListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterruptWordList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_interruptWordList.begin(); itr != m_interruptWordList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TalkConversationConfig::GetWelcomeMessage() const
{
    return m_welcomeMessage;
}

void TalkConversationConfig::SetWelcomeMessage(const string& _welcomeMessage)
{
    m_welcomeMessage = _welcomeMessage;
    m_welcomeMessageHasBeenSet = true;
}

bool TalkConversationConfig::WelcomeMessageHasBeenSet() const
{
    return m_welcomeMessageHasBeenSet;
}

int64_t TalkConversationConfig::GetWelcomeMessagePriority() const
{
    return m_welcomeMessagePriority;
}

void TalkConversationConfig::SetWelcomeMessagePriority(const int64_t& _welcomeMessagePriority)
{
    m_welcomeMessagePriority = _welcomeMessagePriority;
    m_welcomeMessagePriorityHasBeenSet = true;
}

bool TalkConversationConfig::WelcomeMessagePriorityHasBeenSet() const
{
    return m_welcomeMessagePriorityHasBeenSet;
}

int64_t TalkConversationConfig::GetInterruptMode() const
{
    return m_interruptMode;
}

void TalkConversationConfig::SetInterruptMode(const int64_t& _interruptMode)
{
    m_interruptMode = _interruptMode;
    m_interruptModeHasBeenSet = true;
}

bool TalkConversationConfig::InterruptModeHasBeenSet() const
{
    return m_interruptModeHasBeenSet;
}

vector<string> TalkConversationConfig::GetInterruptWordList() const
{
    return m_interruptWordList;
}

void TalkConversationConfig::SetInterruptWordList(const vector<string>& _interruptWordList)
{
    m_interruptWordList = _interruptWordList;
    m_interruptWordListHasBeenSet = true;
}

bool TalkConversationConfig::InterruptWordListHasBeenSet() const
{
    return m_interruptWordListHasBeenSet;
}

