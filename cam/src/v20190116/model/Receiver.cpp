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

#include <tencentcloud/cam/v20190116/model/Receiver.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

Receiver::Receiver() :
    m_uidHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_phoneFlagHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_emailFlagHasBeenSet(false),
    m_isReceiverOwnerHasBeenSet(false),
    m_wechatFlagHasBeenSet(false),
    m_uinHasBeenSet(false)
{
}

CoreInternalOutcome Receiver::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Receiver.Uid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uid = value["Uid"].GetUint64();
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Receiver.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Receiver.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Receiver.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("PhoneFlag") && !value["PhoneFlag"].IsNull())
    {
        if (!value["PhoneFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Receiver.PhoneFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_phoneFlag = value["PhoneFlag"].GetInt64();
        m_phoneFlagHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Receiver.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("EmailFlag") && !value["EmailFlag"].IsNull())
    {
        if (!value["EmailFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Receiver.EmailFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_emailFlag = value["EmailFlag"].GetInt64();
        m_emailFlagHasBeenSet = true;
    }

    if (value.HasMember("IsReceiverOwner") && !value["IsReceiverOwner"].IsNull())
    {
        if (!value["IsReceiverOwner"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Receiver.IsReceiverOwner` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isReceiverOwner = value["IsReceiverOwner"].GetInt64();
        m_isReceiverOwnerHasBeenSet = true;
    }

    if (value.HasMember("WechatFlag") && !value["WechatFlag"].IsNull())
    {
        if (!value["WechatFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Receiver.WechatFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wechatFlag = value["WechatFlag"].GetInt64();
        m_wechatFlagHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Receiver.Uin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetInt64();
        m_uinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Receiver::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uid, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
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

    if (m_isReceiverOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReceiverOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isReceiverOwner, allocator);
    }

    if (m_wechatFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wechatFlag, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

}


uint64_t Receiver::GetUid() const
{
    return m_uid;
}

void Receiver::SetUid(const uint64_t& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool Receiver::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string Receiver::GetName() const
{
    return m_name;
}

void Receiver::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Receiver::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Receiver::GetRemark() const
{
    return m_remark;
}

void Receiver::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool Receiver::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string Receiver::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void Receiver::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool Receiver::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

int64_t Receiver::GetPhoneFlag() const
{
    return m_phoneFlag;
}

void Receiver::SetPhoneFlag(const int64_t& _phoneFlag)
{
    m_phoneFlag = _phoneFlag;
    m_phoneFlagHasBeenSet = true;
}

bool Receiver::PhoneFlagHasBeenSet() const
{
    return m_phoneFlagHasBeenSet;
}

string Receiver::GetEmail() const
{
    return m_email;
}

void Receiver::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool Receiver::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

int64_t Receiver::GetEmailFlag() const
{
    return m_emailFlag;
}

void Receiver::SetEmailFlag(const int64_t& _emailFlag)
{
    m_emailFlag = _emailFlag;
    m_emailFlagHasBeenSet = true;
}

bool Receiver::EmailFlagHasBeenSet() const
{
    return m_emailFlagHasBeenSet;
}

int64_t Receiver::GetIsReceiverOwner() const
{
    return m_isReceiverOwner;
}

void Receiver::SetIsReceiverOwner(const int64_t& _isReceiverOwner)
{
    m_isReceiverOwner = _isReceiverOwner;
    m_isReceiverOwnerHasBeenSet = true;
}

bool Receiver::IsReceiverOwnerHasBeenSet() const
{
    return m_isReceiverOwnerHasBeenSet;
}

int64_t Receiver::GetWechatFlag() const
{
    return m_wechatFlag;
}

void Receiver::SetWechatFlag(const int64_t& _wechatFlag)
{
    m_wechatFlag = _wechatFlag;
    m_wechatFlagHasBeenSet = true;
}

bool Receiver::WechatFlagHasBeenSet() const
{
    return m_wechatFlagHasBeenSet;
}

int64_t Receiver::GetUin() const
{
    return m_uin;
}

void Receiver::SetUin(const int64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool Receiver::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

