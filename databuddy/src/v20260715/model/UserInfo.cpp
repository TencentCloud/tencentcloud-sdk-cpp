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

#include <tencentcloud/databuddy/v20260715/model/UserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

UserInfo::UserInfo() :
    m_userUinHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_userTagHasBeenSet(false)
{
}

CoreInternalOutcome UserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserUin") && !value["UserUin"].IsNull())
    {
        if (!value["UserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.UserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = string(value["UserUin"].GetString());
        m_userUinHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("UserTag") && !value["UserTag"].IsNull())
    {
        if (!value["UserTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.UserTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userTag = string(value["UserTag"].GetString());
        m_userTagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUin.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_userTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userTag.c_str(), allocator).Move(), allocator);
    }

}


string UserInfo::GetUserUin() const
{
    return m_userUin;
}

void UserInfo::SetUserUin(const string& _userUin)
{
    m_userUin = _userUin;
    m_userUinHasBeenSet = true;
}

bool UserInfo::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

string UserInfo::GetUserName() const
{
    return m_userName;
}

void UserInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UserInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string UserInfo::GetNickname() const
{
    return m_nickname;
}

void UserInfo::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool UserInfo::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string UserInfo::GetUserTag() const
{
    return m_userTag;
}

void UserInfo::SetUserTag(const string& _userTag)
{
    m_userTag = _userTag;
    m_userTagHasBeenSet = true;
}

bool UserInfo::UserTagHasBeenSet() const
{
    return m_userTagHasBeenSet;
}

