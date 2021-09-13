/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/privatedns/v20201028/model/PrivateDNSAccount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

PrivateDNSAccount::PrivateDNSAccount() :
    m_uinHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_nicknameHasBeenSet(false)
{
}

CoreInternalOutcome PrivateDNSAccount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateDNSAccount.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateDNSAccount.Account` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_account = string(value["Account"].GetString());
        m_accountHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateDNSAccount.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivateDNSAccount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

}


string PrivateDNSAccount::GetUin() const
{
    return m_uin;
}

void PrivateDNSAccount::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool PrivateDNSAccount::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string PrivateDNSAccount::GetAccount() const
{
    return m_account;
}

void PrivateDNSAccount::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool PrivateDNSAccount::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string PrivateDNSAccount::GetNickname() const
{
    return m_nickname;
}

void PrivateDNSAccount::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool PrivateDNSAccount::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

