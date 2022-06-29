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

#include <tencentcloud/cam/v20190116/model/SubAccountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

SubAccountInfo::SubAccountInfo() :
    m_uinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_consoleLoginHasBeenSet(false),
    m_phoneNumHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_nickNameHasBeenSet(false)
{
}

CoreInternalOutcome SubAccountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountInfo.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountInfo.Uid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uid = value["Uid"].GetUint64();
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("ConsoleLogin") && !value["ConsoleLogin"].IsNull())
    {
        if (!value["ConsoleLogin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountInfo.ConsoleLogin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_consoleLogin = value["ConsoleLogin"].GetUint64();
        m_consoleLoginHasBeenSet = true;
    }

    if (value.HasMember("PhoneNum") && !value["PhoneNum"].IsNull())
    {
        if (!value["PhoneNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountInfo.PhoneNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNum = string(value["PhoneNum"].GetString());
        m_phoneNumHasBeenSet = true;
    }

    if (value.HasMember("CountryCode") && !value["CountryCode"].IsNull())
    {
        if (!value["CountryCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountInfo.CountryCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryCode = string(value["CountryCode"].GetString());
        m_countryCodeHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountInfo.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountInfo.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubAccountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t SubAccountInfo::GetUin() const
{
    return m_uin;
}

void SubAccountInfo::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool SubAccountInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string SubAccountInfo::GetName() const
{
    return m_name;
}

void SubAccountInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SubAccountInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t SubAccountInfo::GetUid() const
{
    return m_uid;
}

void SubAccountInfo::SetUid(const uint64_t& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool SubAccountInfo::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string SubAccountInfo::GetRemark() const
{
    return m_remark;
}

void SubAccountInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool SubAccountInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t SubAccountInfo::GetConsoleLogin() const
{
    return m_consoleLogin;
}

void SubAccountInfo::SetConsoleLogin(const uint64_t& _consoleLogin)
{
    m_consoleLogin = _consoleLogin;
    m_consoleLoginHasBeenSet = true;
}

bool SubAccountInfo::ConsoleLoginHasBeenSet() const
{
    return m_consoleLoginHasBeenSet;
}

string SubAccountInfo::GetPhoneNum() const
{
    return m_phoneNum;
}

void SubAccountInfo::SetPhoneNum(const string& _phoneNum)
{
    m_phoneNum = _phoneNum;
    m_phoneNumHasBeenSet = true;
}

bool SubAccountInfo::PhoneNumHasBeenSet() const
{
    return m_phoneNumHasBeenSet;
}

string SubAccountInfo::GetCountryCode() const
{
    return m_countryCode;
}

void SubAccountInfo::SetCountryCode(const string& _countryCode)
{
    m_countryCode = _countryCode;
    m_countryCodeHasBeenSet = true;
}

bool SubAccountInfo::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}

string SubAccountInfo::GetEmail() const
{
    return m_email;
}

void SubAccountInfo::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool SubAccountInfo::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string SubAccountInfo::GetCreateTime() const
{
    return m_createTime;
}

void SubAccountInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SubAccountInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SubAccountInfo::GetNickName() const
{
    return m_nickName;
}

void SubAccountInfo::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool SubAccountInfo::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

