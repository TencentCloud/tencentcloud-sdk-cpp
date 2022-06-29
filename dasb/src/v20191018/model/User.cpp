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

#include <tencentcloud/dasb/v20191018/model/User.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

User::User() :
    m_userNameHasBeenSet(false),
    m_realNameHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_idHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_validateFromHasBeenSet(false),
    m_validateToHasBeenSet(false),
    m_groupSetHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_validateTimeHasBeenSet(false)
{
}

CoreInternalOutcome User::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("RealName") && !value["RealName"].IsNull())
    {
        if (!value["RealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.RealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realName = string(value["RealName"].GetString());
        m_realNameHasBeenSet = true;
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

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `User.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("ValidateFrom") && !value["ValidateFrom"].IsNull())
    {
        if (!value["ValidateFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.ValidateFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validateFrom = string(value["ValidateFrom"].GetString());
        m_validateFromHasBeenSet = true;
    }

    if (value.HasMember("ValidateTo") && !value["ValidateTo"].IsNull())
    {
        if (!value["ValidateTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.ValidateTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validateTo = string(value["ValidateTo"].GetString());
        m_validateToHasBeenSet = true;
    }

    if (value.HasMember("GroupSet") && !value["GroupSet"].IsNull())
    {
        if (!value["GroupSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `User.GroupSet` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Group item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupSet.push_back(item);
        }
        m_groupSetHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `User.AuthType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_authType = value["AuthType"].GetUint64();
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("ValidateTime") && !value["ValidateTime"].IsNull())
    {
        if (!value["ValidateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.ValidateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validateTime = string(value["ValidateTime"].GetString());
        m_validateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void User::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_realNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realName.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_validateFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidateFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validateFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_validateToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidateTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validateTo.c_str(), allocator).Move(), allocator);
    }

    if (m_groupSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupSet.begin(); itr != m_groupSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authType, allocator);
    }

    if (m_validateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validateTime.c_str(), allocator).Move(), allocator);
    }

}


string User::GetUserName() const
{
    return m_userName;
}

void User::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool User::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string User::GetRealName() const
{
    return m_realName;
}

void User::SetRealName(const string& _realName)
{
    m_realName = _realName;
    m_realNameHasBeenSet = true;
}

bool User::RealNameHasBeenSet() const
{
    return m_realNameHasBeenSet;
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

uint64_t User::GetId() const
{
    return m_id;
}

void User::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool User::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string User::GetEmail() const
{
    return m_email;
}

void User::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool User::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string User::GetValidateFrom() const
{
    return m_validateFrom;
}

void User::SetValidateFrom(const string& _validateFrom)
{
    m_validateFrom = _validateFrom;
    m_validateFromHasBeenSet = true;
}

bool User::ValidateFromHasBeenSet() const
{
    return m_validateFromHasBeenSet;
}

string User::GetValidateTo() const
{
    return m_validateTo;
}

void User::SetValidateTo(const string& _validateTo)
{
    m_validateTo = _validateTo;
    m_validateToHasBeenSet = true;
}

bool User::ValidateToHasBeenSet() const
{
    return m_validateToHasBeenSet;
}

vector<Group> User::GetGroupSet() const
{
    return m_groupSet;
}

void User::SetGroupSet(const vector<Group>& _groupSet)
{
    m_groupSet = _groupSet;
    m_groupSetHasBeenSet = true;
}

bool User::GroupSetHasBeenSet() const
{
    return m_groupSetHasBeenSet;
}

uint64_t User::GetAuthType() const
{
    return m_authType;
}

void User::SetAuthType(const uint64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool User::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string User::GetValidateTime() const
{
    return m_validateTime;
}

void User::SetValidateTime(const string& _validateTime)
{
    m_validateTime = _validateTime;
    m_validateTimeHasBeenSet = true;
}

bool User::ValidateTimeHasBeenSet() const
{
    return m_validateTimeHasBeenSet;
}

