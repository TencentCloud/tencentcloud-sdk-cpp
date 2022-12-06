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

#include <tencentcloud/trdp/v20220726/model/UserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trdp::V20220726::Model;
using namespace std;

UserInfo::UserInfo() :
    m_ipHasBeenSet(false),
    m_channelSourceHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_residentIdentityCardHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_nicknameHasBeenSet(false)
{
}

CoreInternalOutcome UserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("ChannelSource") && !value["ChannelSource"].IsNull())
    {
        if (!value["ChannelSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.ChannelSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelSource = string(value["ChannelSource"].GetString());
        m_channelSourceHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.Platform` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_platform = value["Platform"].GetInt64();
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.Age` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_age = value["Age"].GetInt64();
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.Gender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gender = string(value["Gender"].GetString());
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("ResidentIdentityCard") && !value["ResidentIdentityCard"].IsNull())
    {
        if (!value["ResidentIdentityCard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.ResidentIdentityCard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_residentIdentityCard = string(value["ResidentIdentityCard"].GetString());
        m_residentIdentityCardHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

void UserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_channelSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelSource.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_platform, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_age, allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gender.c_str(), allocator).Move(), allocator);
    }

    if (m_residentIdentityCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResidentIdentityCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_residentIdentityCard.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

}


string UserInfo::GetIp() const
{
    return m_ip;
}

void UserInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool UserInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string UserInfo::GetChannelSource() const
{
    return m_channelSource;
}

void UserInfo::SetChannelSource(const string& _channelSource)
{
    m_channelSource = _channelSource;
    m_channelSourceHasBeenSet = true;
}

bool UserInfo::ChannelSourceHasBeenSet() const
{
    return m_channelSourceHasBeenSet;
}

int64_t UserInfo::GetPlatform() const
{
    return m_platform;
}

void UserInfo::SetPlatform(const int64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool UserInfo::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string UserInfo::GetName() const
{
    return m_name;
}

void UserInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UserInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t UserInfo::GetAge() const
{
    return m_age;
}

void UserInfo::SetAge(const int64_t& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool UserInfo::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

string UserInfo::GetGender() const
{
    return m_gender;
}

void UserInfo::SetGender(const string& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool UserInfo::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string UserInfo::GetResidentIdentityCard() const
{
    return m_residentIdentityCard;
}

void UserInfo::SetResidentIdentityCard(const string& _residentIdentityCard)
{
    m_residentIdentityCard = _residentIdentityCard;
    m_residentIdentityCardHasBeenSet = true;
}

bool UserInfo::ResidentIdentityCardHasBeenSet() const
{
    return m_residentIdentityCardHasBeenSet;
}

string UserInfo::GetEmail() const
{
    return m_email;
}

void UserInfo::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool UserInfo::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string UserInfo::GetAddress() const
{
    return m_address;
}

void UserInfo::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool UserInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
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

