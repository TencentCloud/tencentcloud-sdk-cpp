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

#include <tencentcloud/adp/v20260520/model/WecomRobotWebsocketAccess.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

WecomRobotWebsocketAccess::WecomRobotWebsocketAccess() :
    m_bindTypeHasBeenSet(false),
    m_botIdHasBeenSet(false),
    m_botSecretHasBeenSet(false)
{
}

CoreInternalOutcome WecomRobotWebsocketAccess::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BindType") && !value["BindType"].IsNull())
    {
        if (!value["BindType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WecomRobotWebsocketAccess.BindType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindType = value["BindType"].GetInt64();
        m_bindTypeHasBeenSet = true;
    }

    if (value.HasMember("BotId") && !value["BotId"].IsNull())
    {
        if (!value["BotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WecomRobotWebsocketAccess.BotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_botId = string(value["BotId"].GetString());
        m_botIdHasBeenSet = true;
    }

    if (value.HasMember("BotSecret") && !value["BotSecret"].IsNull())
    {
        if (!value["BotSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WecomRobotWebsocketAccess.BotSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_botSecret = string(value["BotSecret"].GetString());
        m_botSecretHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WecomRobotWebsocketAccess::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bindTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindType, allocator);
    }

    if (m_botIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_botId.c_str(), allocator).Move(), allocator);
    }

    if (m_botSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_botSecret.c_str(), allocator).Move(), allocator);
    }

}


int64_t WecomRobotWebsocketAccess::GetBindType() const
{
    return m_bindType;
}

void WecomRobotWebsocketAccess::SetBindType(const int64_t& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool WecomRobotWebsocketAccess::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}

string WecomRobotWebsocketAccess::GetBotId() const
{
    return m_botId;
}

void WecomRobotWebsocketAccess::SetBotId(const string& _botId)
{
    m_botId = _botId;
    m_botIdHasBeenSet = true;
}

bool WecomRobotWebsocketAccess::BotIdHasBeenSet() const
{
    return m_botIdHasBeenSet;
}

string WecomRobotWebsocketAccess::GetBotSecret() const
{
    return m_botSecret;
}

void WecomRobotWebsocketAccess::SetBotSecret(const string& _botSecret)
{
    m_botSecret = _botSecret;
    m_botSecretHasBeenSet = true;
}

bool WecomRobotWebsocketAccess::BotSecretHasBeenSet() const
{
    return m_botSecretHasBeenSet;
}

