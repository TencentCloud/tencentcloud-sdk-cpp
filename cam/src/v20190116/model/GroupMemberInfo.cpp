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

#include <tencentcloud/cam/v20190116/model/GroupMemberInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

GroupMemberInfo::GroupMemberInfo() :
    m_uidHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_phoneNumHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_phoneFlagHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_emailFlagHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_isReceiverOwnerHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome GroupMemberInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMemberInfo.Uid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uid = value["Uid"].GetUint64();
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMemberInfo.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMemberInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PhoneNum") && !value["PhoneNum"].IsNull())
    {
        if (!value["PhoneNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMemberInfo.PhoneNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNum = string(value["PhoneNum"].GetString());
        m_phoneNumHasBeenSet = true;
    }

    if (value.HasMember("CountryCode") && !value["CountryCode"].IsNull())
    {
        if (!value["CountryCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMemberInfo.CountryCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryCode = string(value["CountryCode"].GetString());
        m_countryCodeHasBeenSet = true;
    }

    if (value.HasMember("PhoneFlag") && !value["PhoneFlag"].IsNull())
    {
        if (!value["PhoneFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMemberInfo.PhoneFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_phoneFlag = value["PhoneFlag"].GetUint64();
        m_phoneFlagHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMemberInfo.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("EmailFlag") && !value["EmailFlag"].IsNull())
    {
        if (!value["EmailFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMemberInfo.EmailFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_emailFlag = value["EmailFlag"].GetUint64();
        m_emailFlagHasBeenSet = true;
    }

    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMemberInfo.UserType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userType = value["UserType"].GetUint64();
        m_userTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMemberInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("IsReceiverOwner") && !value["IsReceiverOwner"].IsNull())
    {
        if (!value["IsReceiverOwner"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMemberInfo.IsReceiverOwner` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isReceiverOwner = value["IsReceiverOwner"].GetUint64();
        m_isReceiverOwnerHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupMemberInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupMemberInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uid, allocator);
    }

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

    if (m_phoneFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_phoneFlag, allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_emailFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmailFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_emailFlag, allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userType, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isReceiverOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReceiverOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isReceiverOwner, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


uint64_t GroupMemberInfo::GetUid() const
{
    return m_uid;
}

void GroupMemberInfo::SetUid(const uint64_t& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool GroupMemberInfo::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

uint64_t GroupMemberInfo::GetUin() const
{
    return m_uin;
}

void GroupMemberInfo::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool GroupMemberInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string GroupMemberInfo::GetName() const
{
    return m_name;
}

void GroupMemberInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GroupMemberInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GroupMemberInfo::GetPhoneNum() const
{
    return m_phoneNum;
}

void GroupMemberInfo::SetPhoneNum(const string& _phoneNum)
{
    m_phoneNum = _phoneNum;
    m_phoneNumHasBeenSet = true;
}

bool GroupMemberInfo::PhoneNumHasBeenSet() const
{
    return m_phoneNumHasBeenSet;
}

string GroupMemberInfo::GetCountryCode() const
{
    return m_countryCode;
}

void GroupMemberInfo::SetCountryCode(const string& _countryCode)
{
    m_countryCode = _countryCode;
    m_countryCodeHasBeenSet = true;
}

bool GroupMemberInfo::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}

uint64_t GroupMemberInfo::GetPhoneFlag() const
{
    return m_phoneFlag;
}

void GroupMemberInfo::SetPhoneFlag(const uint64_t& _phoneFlag)
{
    m_phoneFlag = _phoneFlag;
    m_phoneFlagHasBeenSet = true;
}

bool GroupMemberInfo::PhoneFlagHasBeenSet() const
{
    return m_phoneFlagHasBeenSet;
}

string GroupMemberInfo::GetEmail() const
{
    return m_email;
}

void GroupMemberInfo::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool GroupMemberInfo::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

uint64_t GroupMemberInfo::GetEmailFlag() const
{
    return m_emailFlag;
}

void GroupMemberInfo::SetEmailFlag(const uint64_t& _emailFlag)
{
    m_emailFlag = _emailFlag;
    m_emailFlagHasBeenSet = true;
}

bool GroupMemberInfo::EmailFlagHasBeenSet() const
{
    return m_emailFlagHasBeenSet;
}

uint64_t GroupMemberInfo::GetUserType() const
{
    return m_userType;
}

void GroupMemberInfo::SetUserType(const uint64_t& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool GroupMemberInfo::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

string GroupMemberInfo::GetCreateTime() const
{
    return m_createTime;
}

void GroupMemberInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GroupMemberInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t GroupMemberInfo::GetIsReceiverOwner() const
{
    return m_isReceiverOwner;
}

void GroupMemberInfo::SetIsReceiverOwner(const uint64_t& _isReceiverOwner)
{
    m_isReceiverOwner = _isReceiverOwner;
    m_isReceiverOwnerHasBeenSet = true;
}

bool GroupMemberInfo::IsReceiverOwnerHasBeenSet() const
{
    return m_isReceiverOwnerHasBeenSet;
}

string GroupMemberInfo::GetRemark() const
{
    return m_remark;
}

void GroupMemberInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool GroupMemberInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

