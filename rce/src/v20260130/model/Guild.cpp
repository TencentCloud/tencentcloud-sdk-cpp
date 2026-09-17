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

#include <tencentcloud/rce/v20260130/model/Guild.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Guild::Guild() :
    m_guildIdHasBeenSet(false),
    m_guildNameHasBeenSet(false),
    m_guildSignatureHasBeenSet(false),
    m_presidentUserIdHasBeenSet(false),
    m_presidentRoleIdHasBeenSet(false)
{
}

CoreInternalOutcome Guild::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GuildId") && !value["GuildId"].IsNull())
    {
        if (!value["GuildId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Guild.GuildId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_guildId = string(value["GuildId"].GetString());
        m_guildIdHasBeenSet = true;
    }

    if (value.HasMember("GuildName") && !value["GuildName"].IsNull())
    {
        if (!value["GuildName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Guild.GuildName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_guildName = string(value["GuildName"].GetString());
        m_guildNameHasBeenSet = true;
    }

    if (value.HasMember("GuildSignature") && !value["GuildSignature"].IsNull())
    {
        if (!value["GuildSignature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Guild.GuildSignature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_guildSignature = string(value["GuildSignature"].GetString());
        m_guildSignatureHasBeenSet = true;
    }

    if (value.HasMember("PresidentUserId") && !value["PresidentUserId"].IsNull())
    {
        if (!value["PresidentUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Guild.PresidentUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_presidentUserId = string(value["PresidentUserId"].GetString());
        m_presidentUserIdHasBeenSet = true;
    }

    if (value.HasMember("PresidentRoleId") && !value["PresidentRoleId"].IsNull())
    {
        if (!value["PresidentRoleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Guild.PresidentRoleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_presidentRoleId = string(value["PresidentRoleId"].GetString());
        m_presidentRoleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Guild::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_guildIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GuildId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_guildId.c_str(), allocator).Move(), allocator);
    }

    if (m_guildNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GuildName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_guildName.c_str(), allocator).Move(), allocator);
    }

    if (m_guildSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GuildSignature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_guildSignature.c_str(), allocator).Move(), allocator);
    }

    if (m_presidentUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresidentUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_presidentUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_presidentRoleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresidentRoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_presidentRoleId.c_str(), allocator).Move(), allocator);
    }

}


string Guild::GetGuildId() const
{
    return m_guildId;
}

void Guild::SetGuildId(const string& _guildId)
{
    m_guildId = _guildId;
    m_guildIdHasBeenSet = true;
}

bool Guild::GuildIdHasBeenSet() const
{
    return m_guildIdHasBeenSet;
}

string Guild::GetGuildName() const
{
    return m_guildName;
}

void Guild::SetGuildName(const string& _guildName)
{
    m_guildName = _guildName;
    m_guildNameHasBeenSet = true;
}

bool Guild::GuildNameHasBeenSet() const
{
    return m_guildNameHasBeenSet;
}

string Guild::GetGuildSignature() const
{
    return m_guildSignature;
}

void Guild::SetGuildSignature(const string& _guildSignature)
{
    m_guildSignature = _guildSignature;
    m_guildSignatureHasBeenSet = true;
}

bool Guild::GuildSignatureHasBeenSet() const
{
    return m_guildSignatureHasBeenSet;
}

string Guild::GetPresidentUserId() const
{
    return m_presidentUserId;
}

void Guild::SetPresidentUserId(const string& _presidentUserId)
{
    m_presidentUserId = _presidentUserId;
    m_presidentUserIdHasBeenSet = true;
}

bool Guild::PresidentUserIdHasBeenSet() const
{
    return m_presidentUserIdHasBeenSet;
}

string Guild::GetPresidentRoleId() const
{
    return m_presidentRoleId;
}

void Guild::SetPresidentRoleId(const string& _presidentRoleId)
{
    m_presidentRoleId = _presidentRoleId;
    m_presidentRoleIdHasBeenSet = true;
}

bool Guild::PresidentRoleIdHasBeenSet() const
{
    return m_presidentRoleIdHasBeenSet;
}

