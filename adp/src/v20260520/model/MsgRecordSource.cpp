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

#include <tencentcloud/adp/v20260520/model/MsgRecordSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

MsgRecordSource::MsgRecordSource() :
    m_channelTypeHasBeenSet(false),
    m_fromIdHasBeenSet(false),
    m_fromTypeHasBeenSet(false),
    m_userAvatarHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userNicknameHasBeenSet(false)
{
}

CoreInternalOutcome MsgRecordSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelType") && !value["ChannelType"].IsNull())
    {
        if (!value["ChannelType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecordSource.ChannelType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_channelType = value["ChannelType"].GetUint64();
        m_channelTypeHasBeenSet = true;
    }

    if (value.HasMember("FromId") && !value["FromId"].IsNull())
    {
        if (!value["FromId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecordSource.FromId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromId = string(value["FromId"].GetString());
        m_fromIdHasBeenSet = true;
    }

    if (value.HasMember("FromType") && !value["FromType"].IsNull())
    {
        if (!value["FromType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecordSource.FromType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fromType = value["FromType"].GetUint64();
        m_fromTypeHasBeenSet = true;
    }

    if (value.HasMember("UserAvatar") && !value["UserAvatar"].IsNull())
    {
        if (!value["UserAvatar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecordSource.UserAvatar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAvatar = string(value["UserAvatar"].GetString());
        m_userAvatarHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecordSource.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserNickname") && !value["UserNickname"].IsNull())
    {
        if (!value["UserNickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecordSource.UserNickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userNickname = string(value["UserNickname"].GetString());
        m_userNicknameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MsgRecordSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelType, allocator);
    }

    if (m_fromIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromId.c_str(), allocator).Move(), allocator);
    }

    if (m_fromTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fromType, allocator);
    }

    if (m_userAvatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAvatar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAvatar.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userNickname.c_str(), allocator).Move(), allocator);
    }

}


uint64_t MsgRecordSource::GetChannelType() const
{
    return m_channelType;
}

void MsgRecordSource::SetChannelType(const uint64_t& _channelType)
{
    m_channelType = _channelType;
    m_channelTypeHasBeenSet = true;
}

bool MsgRecordSource::ChannelTypeHasBeenSet() const
{
    return m_channelTypeHasBeenSet;
}

string MsgRecordSource::GetFromId() const
{
    return m_fromId;
}

void MsgRecordSource::SetFromId(const string& _fromId)
{
    m_fromId = _fromId;
    m_fromIdHasBeenSet = true;
}

bool MsgRecordSource::FromIdHasBeenSet() const
{
    return m_fromIdHasBeenSet;
}

uint64_t MsgRecordSource::GetFromType() const
{
    return m_fromType;
}

void MsgRecordSource::SetFromType(const uint64_t& _fromType)
{
    m_fromType = _fromType;
    m_fromTypeHasBeenSet = true;
}

bool MsgRecordSource::FromTypeHasBeenSet() const
{
    return m_fromTypeHasBeenSet;
}

string MsgRecordSource::GetUserAvatar() const
{
    return m_userAvatar;
}

void MsgRecordSource::SetUserAvatar(const string& _userAvatar)
{
    m_userAvatar = _userAvatar;
    m_userAvatarHasBeenSet = true;
}

bool MsgRecordSource::UserAvatarHasBeenSet() const
{
    return m_userAvatarHasBeenSet;
}

string MsgRecordSource::GetUserId() const
{
    return m_userId;
}

void MsgRecordSource::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool MsgRecordSource::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string MsgRecordSource::GetUserNickname() const
{
    return m_userNickname;
}

void MsgRecordSource::SetUserNickname(const string& _userNickname)
{
    m_userNickname = _userNickname;
    m_userNicknameHasBeenSet = true;
}

bool MsgRecordSource::UserNicknameHasBeenSet() const
{
    return m_userNicknameHasBeenSet;
}

