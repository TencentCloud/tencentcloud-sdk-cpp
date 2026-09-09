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

#include <tencentcloud/adp/v20260520/model/TelegramChannelConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

TelegramChannelConfig::TelegramChannelConfig() :
    m_botTokenHasBeenSet(false)
{
}

CoreInternalOutcome TelegramChannelConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BotToken") && !value["BotToken"].IsNull())
    {
        if (!value["BotToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TelegramChannelConfig.BotToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_botToken = string(value["BotToken"].GetString());
        m_botTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TelegramChannelConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_botTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_botToken.c_str(), allocator).Move(), allocator);
    }

}


string TelegramChannelConfig::GetBotToken() const
{
    return m_botToken;
}

void TelegramChannelConfig::SetBotToken(const string& _botToken)
{
    m_botToken = _botToken;
    m_botTokenHasBeenSet = true;
}

bool TelegramChannelConfig::BotTokenHasBeenSet() const
{
    return m_botTokenHasBeenSet;
}

