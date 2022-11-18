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

#include <tencentcloud/tms/v20201229/model/User.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tms::V20201229::Model;
using namespace std;

User::User() :
    m_userIdHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_headUrlHasBeenSet(false),
    m_descHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_receiverIdHasBeenSet(false),
    m_sendTimeHasBeenSet(false)
{
}

CoreInternalOutcome User::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `User.AccountType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = value["AccountType"].GetInt64();
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `User.Gender` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gender = value["Gender"].GetInt64();
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `User.Age` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_age = value["Age"].GetInt64();
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `User.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("HeadUrl") && !value["HeadUrl"].IsNull())
    {
        if (!value["HeadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.HeadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headUrl = string(value["HeadUrl"].GetString());
        m_headUrlHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.RoomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = string(value["RoomId"].GetString());
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("ReceiverId") && !value["ReceiverId"].IsNull())
    {
        if (!value["ReceiverId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.ReceiverId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiverId = string(value["ReceiverId"].GetString());
        m_receiverIdHasBeenSet = true;
    }

    if (value.HasMember("SendTime") && !value["SendTime"].IsNull())
    {
        if (!value["SendTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `User.SendTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sendTime = value["SendTime"].GetInt64();
        m_sendTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void User::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountType, allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gender, allocator);
    }

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_age, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_headUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiverId.c_str(), allocator).Move(), allocator);
    }

    if (m_sendTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendTime, allocator);
    }

}


string User::GetUserId() const
{
    return m_userId;
}

void User::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool User::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string User::GetNickname() const
{
    return m_nickname;
}

void User::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool User::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

int64_t User::GetAccountType() const
{
    return m_accountType;
}

void User::SetAccountType(const int64_t& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool User::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

int64_t User::GetGender() const
{
    return m_gender;
}

void User::SetGender(const int64_t& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool User::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

int64_t User::GetAge() const
{
    return m_age;
}

void User::SetAge(const int64_t& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool User::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

int64_t User::GetLevel() const
{
    return m_level;
}

void User::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool User::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string User::GetPhone() const
{
    return m_phone;
}

void User::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool User::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string User::GetHeadUrl() const
{
    return m_headUrl;
}

void User::SetHeadUrl(const string& _headUrl)
{
    m_headUrl = _headUrl;
    m_headUrlHasBeenSet = true;
}

bool User::HeadUrlHasBeenSet() const
{
    return m_headUrlHasBeenSet;
}

string User::GetDesc() const
{
    return m_desc;
}

void User::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool User::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string User::GetRoomId() const
{
    return m_roomId;
}

void User::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool User::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string User::GetReceiverId() const
{
    return m_receiverId;
}

void User::SetReceiverId(const string& _receiverId)
{
    m_receiverId = _receiverId;
    m_receiverIdHasBeenSet = true;
}

bool User::ReceiverIdHasBeenSet() const
{
    return m_receiverIdHasBeenSet;
}

int64_t User::GetSendTime() const
{
    return m_sendTime;
}

void User::SetSendTime(const int64_t& _sendTime)
{
    m_sendTime = _sendTime;
    m_sendTimeHasBeenSet = true;
}

bool User::SendTimeHasBeenSet() const
{
    return m_sendTimeHasBeenSet;
}

