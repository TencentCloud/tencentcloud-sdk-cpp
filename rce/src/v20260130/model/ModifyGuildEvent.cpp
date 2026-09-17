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

#include <tencentcloud/rce/v20260130/model/ModifyGuildEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

ModifyGuildEvent::ModifyGuildEvent() :
    m_guildNameAfterHasBeenSet(false),
    m_guildSignatureAfterHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_userInfoHasBeenSet(false),
    m_guildHasBeenSet(false)
{
}

CoreInternalOutcome ModifyGuildEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GuildNameAfter") && !value["GuildNameAfter"].IsNull())
    {
        if (!value["GuildNameAfter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyGuildEvent.GuildNameAfter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_guildNameAfter = string(value["GuildNameAfter"].GetString());
        m_guildNameAfterHasBeenSet = true;
    }

    if (value.HasMember("GuildSignatureAfter") && !value["GuildSignatureAfter"].IsNull())
    {
        if (!value["GuildSignatureAfter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyGuildEvent.GuildSignatureAfter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_guildSignatureAfter = string(value["GuildSignatureAfter"].GetString());
        m_guildSignatureAfterHasBeenSet = true;
    }

    if (value.HasMember("ServerId") && !value["ServerId"].IsNull())
    {
        if (!value["ServerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyGuildEvent.ServerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverId = string(value["ServerId"].GetString());
        m_serverIdHasBeenSet = true;
    }

    if (value.HasMember("UserInfo") && !value["UserInfo"].IsNull())
    {
        if (!value["UserInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyGuildEvent.UserInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userInfo.Deserialize(value["UserInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userInfoHasBeenSet = true;
    }

    if (value.HasMember("Guild") && !value["Guild"].IsNull())
    {
        if (!value["Guild"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyGuildEvent.Guild` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_guild.Deserialize(value["Guild"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_guildHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyGuildEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_guildNameAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GuildNameAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_guildNameAfter.c_str(), allocator).Move(), allocator);
    }

    if (m_guildSignatureAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GuildSignatureAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_guildSignatureAfter.c_str(), allocator).Move(), allocator);
    }

    if (m_serverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverId.c_str(), allocator).Move(), allocator);
    }

    if (m_userInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_guildHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Guild";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_guild.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ModifyGuildEvent::GetGuildNameAfter() const
{
    return m_guildNameAfter;
}

void ModifyGuildEvent::SetGuildNameAfter(const string& _guildNameAfter)
{
    m_guildNameAfter = _guildNameAfter;
    m_guildNameAfterHasBeenSet = true;
}

bool ModifyGuildEvent::GuildNameAfterHasBeenSet() const
{
    return m_guildNameAfterHasBeenSet;
}

string ModifyGuildEvent::GetGuildSignatureAfter() const
{
    return m_guildSignatureAfter;
}

void ModifyGuildEvent::SetGuildSignatureAfter(const string& _guildSignatureAfter)
{
    m_guildSignatureAfter = _guildSignatureAfter;
    m_guildSignatureAfterHasBeenSet = true;
}

bool ModifyGuildEvent::GuildSignatureAfterHasBeenSet() const
{
    return m_guildSignatureAfterHasBeenSet;
}

string ModifyGuildEvent::GetServerId() const
{
    return m_serverId;
}

void ModifyGuildEvent::SetServerId(const string& _serverId)
{
    m_serverId = _serverId;
    m_serverIdHasBeenSet = true;
}

bool ModifyGuildEvent::ServerIdHasBeenSet() const
{
    return m_serverIdHasBeenSet;
}

User ModifyGuildEvent::GetUserInfo() const
{
    return m_userInfo;
}

void ModifyGuildEvent::SetUserInfo(const User& _userInfo)
{
    m_userInfo = _userInfo;
    m_userInfoHasBeenSet = true;
}

bool ModifyGuildEvent::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

Guild ModifyGuildEvent::GetGuild() const
{
    return m_guild;
}

void ModifyGuildEvent::SetGuild(const Guild& _guild)
{
    m_guild = _guild;
    m_guildHasBeenSet = true;
}

bool ModifyGuildEvent::GuildHasBeenSet() const
{
    return m_guildHasBeenSet;
}

