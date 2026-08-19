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

#include <tencentcloud/csip/v20221121/model/AIScheduleUserIdentity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AIScheduleUserIdentity::AIScheduleUserIdentity() :
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_botIdHasBeenSet(false),
    m_chatIdHasBeenSet(false),
    m_channelHasBeenSet(false)
{
}

CoreInternalOutcome AIScheduleUserIdentity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIScheduleUserIdentity.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIScheduleUserIdentity.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIScheduleUserIdentity.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIScheduleUserIdentity.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("BotId") && !value["BotId"].IsNull())
    {
        if (!value["BotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIScheduleUserIdentity.BotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_botId = string(value["BotId"].GetString());
        m_botIdHasBeenSet = true;
    }

    if (value.HasMember("ChatId") && !value["ChatId"].IsNull())
    {
        if (!value["ChatId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIScheduleUserIdentity.ChatId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chatId = string(value["ChatId"].GetString());
        m_chatIdHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIScheduleUserIdentity.Channel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channel = string(value["Channel"].GetString());
        m_channelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIScheduleUserIdentity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUin.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_botIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_botId.c_str(), allocator).Move(), allocator);
    }

    if (m_chatIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChatId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chatId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

}


int64_t AIScheduleUserIdentity::GetAppId() const
{
    return m_appId;
}

void AIScheduleUserIdentity::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AIScheduleUserIdentity::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AIScheduleUserIdentity::GetUin() const
{
    return m_uin;
}

void AIScheduleUserIdentity::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AIScheduleUserIdentity::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AIScheduleUserIdentity::GetSubUin() const
{
    return m_subUin;
}

void AIScheduleUserIdentity::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool AIScheduleUserIdentity::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string AIScheduleUserIdentity::GetUserId() const
{
    return m_userId;
}

void AIScheduleUserIdentity::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool AIScheduleUserIdentity::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string AIScheduleUserIdentity::GetBotId() const
{
    return m_botId;
}

void AIScheduleUserIdentity::SetBotId(const string& _botId)
{
    m_botId = _botId;
    m_botIdHasBeenSet = true;
}

bool AIScheduleUserIdentity::BotIdHasBeenSet() const
{
    return m_botIdHasBeenSet;
}

string AIScheduleUserIdentity::GetChatId() const
{
    return m_chatId;
}

void AIScheduleUserIdentity::SetChatId(const string& _chatId)
{
    m_chatId = _chatId;
    m_chatIdHasBeenSet = true;
}

bool AIScheduleUserIdentity::ChatIdHasBeenSet() const
{
    return m_chatIdHasBeenSet;
}

string AIScheduleUserIdentity::GetChannel() const
{
    return m_channel;
}

void AIScheduleUserIdentity::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool AIScheduleUserIdentity::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

