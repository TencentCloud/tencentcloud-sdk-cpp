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

#include <tencentcloud/rce/v20260130/model/Inviter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Inviter::Inviter() :
    m_inviterUserIdHasBeenSet(false),
    m_inviterPhoneHasBeenSet(false),
    m_inviteCodeHasBeenSet(false),
    m_inviteChannelHasBeenSet(false)
{
}

CoreInternalOutcome Inviter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InviterUserId") && !value["InviterUserId"].IsNull())
    {
        if (!value["InviterUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Inviter.InviterUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inviterUserId = string(value["InviterUserId"].GetString());
        m_inviterUserIdHasBeenSet = true;
    }

    if (value.HasMember("InviterPhone") && !value["InviterPhone"].IsNull())
    {
        if (!value["InviterPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Inviter.InviterPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inviterPhone = string(value["InviterPhone"].GetString());
        m_inviterPhoneHasBeenSet = true;
    }

    if (value.HasMember("InviteCode") && !value["InviteCode"].IsNull())
    {
        if (!value["InviteCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Inviter.InviteCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inviteCode = string(value["InviteCode"].GetString());
        m_inviteCodeHasBeenSet = true;
    }

    if (value.HasMember("InviteChannel") && !value["InviteChannel"].IsNull())
    {
        if (!value["InviteChannel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Inviter.InviteChannel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inviteChannel = string(value["InviteChannel"].GetString());
        m_inviteChannelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Inviter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inviterUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InviterUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inviterUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_inviterPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InviterPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inviterPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_inviteCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InviteCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inviteCode.c_str(), allocator).Move(), allocator);
    }

    if (m_inviteChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InviteChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inviteChannel.c_str(), allocator).Move(), allocator);
    }

}


string Inviter::GetInviterUserId() const
{
    return m_inviterUserId;
}

void Inviter::SetInviterUserId(const string& _inviterUserId)
{
    m_inviterUserId = _inviterUserId;
    m_inviterUserIdHasBeenSet = true;
}

bool Inviter::InviterUserIdHasBeenSet() const
{
    return m_inviterUserIdHasBeenSet;
}

string Inviter::GetInviterPhone() const
{
    return m_inviterPhone;
}

void Inviter::SetInviterPhone(const string& _inviterPhone)
{
    m_inviterPhone = _inviterPhone;
    m_inviterPhoneHasBeenSet = true;
}

bool Inviter::InviterPhoneHasBeenSet() const
{
    return m_inviterPhoneHasBeenSet;
}

string Inviter::GetInviteCode() const
{
    return m_inviteCode;
}

void Inviter::SetInviteCode(const string& _inviteCode)
{
    m_inviteCode = _inviteCode;
    m_inviteCodeHasBeenSet = true;
}

bool Inviter::InviteCodeHasBeenSet() const
{
    return m_inviteCodeHasBeenSet;
}

string Inviter::GetInviteChannel() const
{
    return m_inviteChannel;
}

void Inviter::SetInviteChannel(const string& _inviteChannel)
{
    m_inviteChannel = _inviteChannel;
    m_inviteChannelHasBeenSet = true;
}

bool Inviter::InviteChannelHasBeenSet() const
{
    return m_inviteChannelHasBeenSet;
}

