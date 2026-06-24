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

#include <tencentcloud/cam/v20190116/model/ListAllUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

ListAllUser::ListAllUser() :
    m_uinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_consoleLoginHasBeenSet(false),
    m_phoneNumHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_userTypeHasBeenSet(false)
{
}

CoreInternalOutcome ListAllUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListAllUser.Uin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetInt64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListAllUser.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListAllUser.Uid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uid = value["Uid"].GetInt64();
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListAllUser.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("ConsoleLogin") && !value["ConsoleLogin"].IsNull())
    {
        if (!value["ConsoleLogin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListAllUser.ConsoleLogin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consoleLogin = value["ConsoleLogin"].GetInt64();
        m_consoleLoginHasBeenSet = true;
    }

    if (value.HasMember("PhoneNum") && !value["PhoneNum"].IsNull())
    {
        if (!value["PhoneNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListAllUser.PhoneNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNum = string(value["PhoneNum"].GetString());
        m_phoneNumHasBeenSet = true;
    }

    if (value.HasMember("CountryCode") && !value["CountryCode"].IsNull())
    {
        if (!value["CountryCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListAllUser.CountryCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryCode = string(value["CountryCode"].GetString());
        m_countryCodeHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListAllUser.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListAllUser.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListAllUser.UserType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userType = string(value["UserType"].GetString());
        m_userTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListAllUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uid, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_consoleLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsoleLogin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consoleLogin, allocator);
    }

    if (m_phoneNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNum.c_str(), allocator).Move(), allocator);
    }

    if (m_countryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }

}


int64_t ListAllUser::GetUin() const
{
    return m_uin;
}

void ListAllUser::SetUin(const int64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool ListAllUser::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string ListAllUser::GetName() const
{
    return m_name;
}

void ListAllUser::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ListAllUser::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ListAllUser::GetUid() const
{
    return m_uid;
}

void ListAllUser::SetUid(const int64_t& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool ListAllUser::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string ListAllUser::GetRemark() const
{
    return m_remark;
}

void ListAllUser::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ListAllUser::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t ListAllUser::GetConsoleLogin() const
{
    return m_consoleLogin;
}

void ListAllUser::SetConsoleLogin(const int64_t& _consoleLogin)
{
    m_consoleLogin = _consoleLogin;
    m_consoleLoginHasBeenSet = true;
}

bool ListAllUser::ConsoleLoginHasBeenSet() const
{
    return m_consoleLoginHasBeenSet;
}

string ListAllUser::GetPhoneNum() const
{
    return m_phoneNum;
}

void ListAllUser::SetPhoneNum(const string& _phoneNum)
{
    m_phoneNum = _phoneNum;
    m_phoneNumHasBeenSet = true;
}

bool ListAllUser::PhoneNumHasBeenSet() const
{
    return m_phoneNumHasBeenSet;
}

string ListAllUser::GetCountryCode() const
{
    return m_countryCode;
}

void ListAllUser::SetCountryCode(const string& _countryCode)
{
    m_countryCode = _countryCode;
    m_countryCodeHasBeenSet = true;
}

bool ListAllUser::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}

string ListAllUser::GetEmail() const
{
    return m_email;
}

void ListAllUser::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool ListAllUser::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string ListAllUser::GetCreateTime() const
{
    return m_createTime;
}

void ListAllUser::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ListAllUser::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ListAllUser::GetUserType() const
{
    return m_userType;
}

void ListAllUser::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool ListAllUser::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

