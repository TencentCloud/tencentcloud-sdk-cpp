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

#include <tencentcloud/cam/v20190116/model/WeChatWorkSubAccount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

WeChatWorkSubAccount::WeChatWorkSubAccount() :
    m_uinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_consoleLoginHasBeenSet(false),
    m_phoneNumHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_weChatWorkUserIdHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome WeChatWorkSubAccount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatWorkSubAccount.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatWorkSubAccount.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatWorkSubAccount.Uid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uid = value["Uid"].GetUint64();
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatWorkSubAccount.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("ConsoleLogin") && !value["ConsoleLogin"].IsNull())
    {
        if (!value["ConsoleLogin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatWorkSubAccount.ConsoleLogin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_consoleLogin = value["ConsoleLogin"].GetUint64();
        m_consoleLoginHasBeenSet = true;
    }

    if (value.HasMember("PhoneNum") && !value["PhoneNum"].IsNull())
    {
        if (!value["PhoneNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatWorkSubAccount.PhoneNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNum = string(value["PhoneNum"].GetString());
        m_phoneNumHasBeenSet = true;
    }

    if (value.HasMember("CountryCode") && !value["CountryCode"].IsNull())
    {
        if (!value["CountryCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatWorkSubAccount.CountryCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryCode = string(value["CountryCode"].GetString());
        m_countryCodeHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatWorkSubAccount.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("WeChatWorkUserId") && !value["WeChatWorkUserId"].IsNull())
    {
        if (!value["WeChatWorkUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatWorkSubAccount.WeChatWorkUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weChatWorkUserId = string(value["WeChatWorkUserId"].GetString());
        m_weChatWorkUserIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatWorkSubAccount.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WeChatWorkSubAccount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_weChatWorkUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeChatWorkUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weChatWorkUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t WeChatWorkSubAccount::GetUin() const
{
    return m_uin;
}

void WeChatWorkSubAccount::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool WeChatWorkSubAccount::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string WeChatWorkSubAccount::GetName() const
{
    return m_name;
}

void WeChatWorkSubAccount::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WeChatWorkSubAccount::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t WeChatWorkSubAccount::GetUid() const
{
    return m_uid;
}

void WeChatWorkSubAccount::SetUid(const uint64_t& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool WeChatWorkSubAccount::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string WeChatWorkSubAccount::GetRemark() const
{
    return m_remark;
}

void WeChatWorkSubAccount::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool WeChatWorkSubAccount::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t WeChatWorkSubAccount::GetConsoleLogin() const
{
    return m_consoleLogin;
}

void WeChatWorkSubAccount::SetConsoleLogin(const uint64_t& _consoleLogin)
{
    m_consoleLogin = _consoleLogin;
    m_consoleLoginHasBeenSet = true;
}

bool WeChatWorkSubAccount::ConsoleLoginHasBeenSet() const
{
    return m_consoleLoginHasBeenSet;
}

string WeChatWorkSubAccount::GetPhoneNum() const
{
    return m_phoneNum;
}

void WeChatWorkSubAccount::SetPhoneNum(const string& _phoneNum)
{
    m_phoneNum = _phoneNum;
    m_phoneNumHasBeenSet = true;
}

bool WeChatWorkSubAccount::PhoneNumHasBeenSet() const
{
    return m_phoneNumHasBeenSet;
}

string WeChatWorkSubAccount::GetCountryCode() const
{
    return m_countryCode;
}

void WeChatWorkSubAccount::SetCountryCode(const string& _countryCode)
{
    m_countryCode = _countryCode;
    m_countryCodeHasBeenSet = true;
}

bool WeChatWorkSubAccount::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}

string WeChatWorkSubAccount::GetEmail() const
{
    return m_email;
}

void WeChatWorkSubAccount::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool WeChatWorkSubAccount::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string WeChatWorkSubAccount::GetWeChatWorkUserId() const
{
    return m_weChatWorkUserId;
}

void WeChatWorkSubAccount::SetWeChatWorkUserId(const string& _weChatWorkUserId)
{
    m_weChatWorkUserId = _weChatWorkUserId;
    m_weChatWorkUserIdHasBeenSet = true;
}

bool WeChatWorkSubAccount::WeChatWorkUserIdHasBeenSet() const
{
    return m_weChatWorkUserIdHasBeenSet;
}

string WeChatWorkSubAccount::GetCreateTime() const
{
    return m_createTime;
}

void WeChatWorkSubAccount::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WeChatWorkSubAccount::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

