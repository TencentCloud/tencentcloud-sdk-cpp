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

#include <tencentcloud/ccc/v20200210/model/SeatUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

SeatUserInfo::SeatUserInfo() :
    m_nameHasBeenSet(false),
    m_mailHasBeenSet(false),
    m_staffNumberHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_skillGroupNameListHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_extensionNumberHasBeenSet(false)
{
}

CoreInternalOutcome SeatUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeatUserInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Mail") && !value["Mail"].IsNull())
    {
        if (!value["Mail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeatUserInfo.Mail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mail = string(value["Mail"].GetString());
        m_mailHasBeenSet = true;
    }

    if (value.HasMember("StaffNumber") && !value["StaffNumber"].IsNull())
    {
        if (!value["StaffNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeatUserInfo.StaffNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staffNumber = string(value["StaffNumber"].GetString());
        m_staffNumberHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeatUserInfo.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeatUserInfo.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeatUserInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("SkillGroupNameList") && !value["SkillGroupNameList"].IsNull())
    {
        if (!value["SkillGroupNameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SeatUserInfo.SkillGroupNameList` is not array type"));

        const rapidjson::Value &tmpValue = value["SkillGroupNameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_skillGroupNameList.push_back((*itr).GetString());
        }
        m_skillGroupNameListHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeatUserInfo.Role` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_role = value["Role"].GetInt64();
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("ExtensionNumber") && !value["ExtensionNumber"].IsNull())
    {
        if (!value["ExtensionNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeatUserInfo.ExtensionNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extensionNumber = string(value["ExtensionNumber"].GetString());
        m_extensionNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeatUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_mailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mail.c_str(), allocator).Move(), allocator);
    }

    if (m_staffNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staffNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_nickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nick.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_skillGroupNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_skillGroupNameList.begin(); itr != m_skillGroupNameList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_role, allocator);
    }

    if (m_extensionNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extensionNumber.c_str(), allocator).Move(), allocator);
    }

}


string SeatUserInfo::GetName() const
{
    return m_name;
}

void SeatUserInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SeatUserInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SeatUserInfo::GetMail() const
{
    return m_mail;
}

void SeatUserInfo::SetMail(const string& _mail)
{
    m_mail = _mail;
    m_mailHasBeenSet = true;
}

bool SeatUserInfo::MailHasBeenSet() const
{
    return m_mailHasBeenSet;
}

string SeatUserInfo::GetStaffNumber() const
{
    return m_staffNumber;
}

void SeatUserInfo::SetStaffNumber(const string& _staffNumber)
{
    m_staffNumber = _staffNumber;
    m_staffNumberHasBeenSet = true;
}

bool SeatUserInfo::StaffNumberHasBeenSet() const
{
    return m_staffNumberHasBeenSet;
}

string SeatUserInfo::GetPhone() const
{
    return m_phone;
}

void SeatUserInfo::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool SeatUserInfo::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string SeatUserInfo::GetNick() const
{
    return m_nick;
}

void SeatUserInfo::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool SeatUserInfo::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string SeatUserInfo::GetUserId() const
{
    return m_userId;
}

void SeatUserInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool SeatUserInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

vector<string> SeatUserInfo::GetSkillGroupNameList() const
{
    return m_skillGroupNameList;
}

void SeatUserInfo::SetSkillGroupNameList(const vector<string>& _skillGroupNameList)
{
    m_skillGroupNameList = _skillGroupNameList;
    m_skillGroupNameListHasBeenSet = true;
}

bool SeatUserInfo::SkillGroupNameListHasBeenSet() const
{
    return m_skillGroupNameListHasBeenSet;
}

int64_t SeatUserInfo::GetRole() const
{
    return m_role;
}

void SeatUserInfo::SetRole(const int64_t& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool SeatUserInfo::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string SeatUserInfo::GetExtensionNumber() const
{
    return m_extensionNumber;
}

void SeatUserInfo::SetExtensionNumber(const string& _extensionNumber)
{
    m_extensionNumber = _extensionNumber;
    m_extensionNumberHasBeenSet = true;
}

bool SeatUserInfo::ExtensionNumberHasBeenSet() const
{
    return m_extensionNumberHasBeenSet;
}

