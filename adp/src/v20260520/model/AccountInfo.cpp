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

#include <tencentcloud/adp/v20260520/model/AccountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AccountInfo::AccountInfo() :
    m_accountUinHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_avatarHasBeenSet(false)
{
}

CoreInternalOutcome AccountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountUin") && !value["AccountUin"].IsNull())
    {
        if (!value["AccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.AccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountUin = string(value["AccountUin"].GetString());
        m_accountUinHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("Avatar") && !value["Avatar"].IsNull())
    {
        if (!value["Avatar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.Avatar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatar = string(value["Avatar"].GetString());
        m_avatarHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Avatar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatar.c_str(), allocator).Move(), allocator);
    }

}


string AccountInfo::GetAccountUin() const
{
    return m_accountUin;
}

void AccountInfo::SetAccountUin(const string& _accountUin)
{
    m_accountUin = _accountUin;
    m_accountUinHasBeenSet = true;
}

bool AccountInfo::AccountUinHasBeenSet() const
{
    return m_accountUinHasBeenSet;
}

string AccountInfo::GetNickName() const
{
    return m_nickName;
}

void AccountInfo::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool AccountInfo::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string AccountInfo::GetAvatar() const
{
    return m_avatar;
}

void AccountInfo::SetAvatar(const string& _avatar)
{
    m_avatar = _avatar;
    m_avatarHasBeenSet = true;
}

bool AccountInfo::AvatarHasBeenSet() const
{
    return m_avatarHasBeenSet;
}

