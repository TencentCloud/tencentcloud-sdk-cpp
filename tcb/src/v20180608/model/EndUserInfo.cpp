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

#include <tencentcloud/tcb/v20180608/model/EndUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

EndUserInfo::EndUserInfo() :
    m_uUIdHasBeenSet(false),
    m_wXOpenIdHasBeenSet(false),
    m_qQOpenIdHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_avatarUrlHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_isAnonymousHasBeenSet(false),
    m_isDisabledHasBeenSet(false),
    m_hasPasswordHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

CoreInternalOutcome EndUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UUId") && !value["UUId"].IsNull())
    {
        if (!value["UUId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndUserInfo.UUId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUId = string(value["UUId"].GetString());
        m_uUIdHasBeenSet = true;
    }

    if (value.HasMember("WXOpenId") && !value["WXOpenId"].IsNull())
    {
        if (!value["WXOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndUserInfo.WXOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wXOpenId = string(value["WXOpenId"].GetString());
        m_wXOpenIdHasBeenSet = true;
    }

    if (value.HasMember("QQOpenId") && !value["QQOpenId"].IsNull())
    {
        if (!value["QQOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndUserInfo.QQOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qQOpenId = string(value["QQOpenId"].GetString());
        m_qQOpenIdHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndUserInfo.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndUserInfo.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndUserInfo.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndUserInfo.Gender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gender = string(value["Gender"].GetString());
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("AvatarUrl") && !value["AvatarUrl"].IsNull())
    {
        if (!value["AvatarUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndUserInfo.AvatarUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatarUrl = string(value["AvatarUrl"].GetString());
        m_avatarUrlHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndUserInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndUserInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("IsAnonymous") && !value["IsAnonymous"].IsNull())
    {
        if (!value["IsAnonymous"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EndUserInfo.IsAnonymous` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAnonymous = value["IsAnonymous"].GetBool();
        m_isAnonymousHasBeenSet = true;
    }

    if (value.HasMember("IsDisabled") && !value["IsDisabled"].IsNull())
    {
        if (!value["IsDisabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EndUserInfo.IsDisabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDisabled = value["IsDisabled"].GetBool();
        m_isDisabledHasBeenSet = true;
    }

    if (value.HasMember("HasPassword") && !value["HasPassword"].IsNull())
    {
        if (!value["HasPassword"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EndUserInfo.HasPassword` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasPassword = value["HasPassword"].GetBool();
        m_hasPasswordHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndUserInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EndUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uUIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUId.c_str(), allocator).Move(), allocator);
    }

    if (m_wXOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WXOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wXOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_qQOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QQOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qQOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gender.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvatarUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatarUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isAnonymousHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAnonymous";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAnonymous, allocator);
    }

    if (m_isDisabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDisabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDisabled, allocator);
    }

    if (m_hasPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasPassword, allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

}


string EndUserInfo::GetUUId() const
{
    return m_uUId;
}

void EndUserInfo::SetUUId(const string& _uUId)
{
    m_uUId = _uUId;
    m_uUIdHasBeenSet = true;
}

bool EndUserInfo::UUIdHasBeenSet() const
{
    return m_uUIdHasBeenSet;
}

string EndUserInfo::GetWXOpenId() const
{
    return m_wXOpenId;
}

void EndUserInfo::SetWXOpenId(const string& _wXOpenId)
{
    m_wXOpenId = _wXOpenId;
    m_wXOpenIdHasBeenSet = true;
}

bool EndUserInfo::WXOpenIdHasBeenSet() const
{
    return m_wXOpenIdHasBeenSet;
}

string EndUserInfo::GetQQOpenId() const
{
    return m_qQOpenId;
}

void EndUserInfo::SetQQOpenId(const string& _qQOpenId)
{
    m_qQOpenId = _qQOpenId;
    m_qQOpenIdHasBeenSet = true;
}

bool EndUserInfo::QQOpenIdHasBeenSet() const
{
    return m_qQOpenIdHasBeenSet;
}

string EndUserInfo::GetPhone() const
{
    return m_phone;
}

void EndUserInfo::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool EndUserInfo::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string EndUserInfo::GetEmail() const
{
    return m_email;
}

void EndUserInfo::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool EndUserInfo::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string EndUserInfo::GetNickName() const
{
    return m_nickName;
}

void EndUserInfo::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool EndUserInfo::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string EndUserInfo::GetGender() const
{
    return m_gender;
}

void EndUserInfo::SetGender(const string& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool EndUserInfo::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string EndUserInfo::GetAvatarUrl() const
{
    return m_avatarUrl;
}

void EndUserInfo::SetAvatarUrl(const string& _avatarUrl)
{
    m_avatarUrl = _avatarUrl;
    m_avatarUrlHasBeenSet = true;
}

bool EndUserInfo::AvatarUrlHasBeenSet() const
{
    return m_avatarUrlHasBeenSet;
}

string EndUserInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void EndUserInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool EndUserInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string EndUserInfo::GetCreateTime() const
{
    return m_createTime;
}

void EndUserInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool EndUserInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

bool EndUserInfo::GetIsAnonymous() const
{
    return m_isAnonymous;
}

void EndUserInfo::SetIsAnonymous(const bool& _isAnonymous)
{
    m_isAnonymous = _isAnonymous;
    m_isAnonymousHasBeenSet = true;
}

bool EndUserInfo::IsAnonymousHasBeenSet() const
{
    return m_isAnonymousHasBeenSet;
}

bool EndUserInfo::GetIsDisabled() const
{
    return m_isDisabled;
}

void EndUserInfo::SetIsDisabled(const bool& _isDisabled)
{
    m_isDisabled = _isDisabled;
    m_isDisabledHasBeenSet = true;
}

bool EndUserInfo::IsDisabledHasBeenSet() const
{
    return m_isDisabledHasBeenSet;
}

bool EndUserInfo::GetHasPassword() const
{
    return m_hasPassword;
}

void EndUserInfo::SetHasPassword(const bool& _hasPassword)
{
    m_hasPassword = _hasPassword;
    m_hasPasswordHasBeenSet = true;
}

bool EndUserInfo::HasPasswordHasBeenSet() const
{
    return m_hasPasswordHasBeenSet;
}

string EndUserInfo::GetUserName() const
{
    return m_userName;
}

void EndUserInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool EndUserInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

