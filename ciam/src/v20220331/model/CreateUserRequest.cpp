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

#include <tencentcloud/ciam/v20220331/model/CreateUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

CreateUserRequest::CreateUserRequest() :
    m_userStoreIdHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_userGroupHasBeenSet(false),
    m_birthdateHasBeenSet(false),
    m_customizationAttributesHasBeenSet(false),
    m_indexedAttribute1HasBeenSet(false),
    m_indexedAttribute2HasBeenSet(false),
    m_indexedAttribute3HasBeenSet(false),
    m_indexedAttribute4HasBeenSet(false),
    m_indexedAttribute5HasBeenSet(false)
{
}

string CreateUserRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userStoreIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStoreId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userStoreId.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userGroup.begin(); itr != m_userGroup.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_birthdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthdate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_birthdate, allocator);
    }

    if (m_customizationAttributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomizationAttributes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customizationAttributes.begin(); itr != m_customizationAttributes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_indexedAttribute1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexedAttribute1";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_indexedAttribute1.c_str(), allocator).Move(), allocator);
    }

    if (m_indexedAttribute2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexedAttribute2";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_indexedAttribute2.c_str(), allocator).Move(), allocator);
    }

    if (m_indexedAttribute3HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexedAttribute3";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_indexedAttribute3.c_str(), allocator).Move(), allocator);
    }

    if (m_indexedAttribute4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexedAttribute4";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_indexedAttribute4.c_str(), allocator).Move(), allocator);
    }

    if (m_indexedAttribute5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexedAttribute5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_indexedAttribute5.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateUserRequest::GetUserStoreId() const
{
    return m_userStoreId;
}

void CreateUserRequest::SetUserStoreId(const string& _userStoreId)
{
    m_userStoreId = _userStoreId;
    m_userStoreIdHasBeenSet = true;
}

bool CreateUserRequest::UserStoreIdHasBeenSet() const
{
    return m_userStoreIdHasBeenSet;
}

string CreateUserRequest::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void CreateUserRequest::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool CreateUserRequest::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string CreateUserRequest::GetEmail() const
{
    return m_email;
}

void CreateUserRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool CreateUserRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string CreateUserRequest::GetPassword() const
{
    return m_password;
}

void CreateUserRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateUserRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string CreateUserRequest::GetUserName() const
{
    return m_userName;
}

void CreateUserRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CreateUserRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CreateUserRequest::GetNickname() const
{
    return m_nickname;
}

void CreateUserRequest::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool CreateUserRequest::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string CreateUserRequest::GetAddress() const
{
    return m_address;
}

void CreateUserRequest::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool CreateUserRequest::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

vector<string> CreateUserRequest::GetUserGroup() const
{
    return m_userGroup;
}

void CreateUserRequest::SetUserGroup(const vector<string>& _userGroup)
{
    m_userGroup = _userGroup;
    m_userGroupHasBeenSet = true;
}

bool CreateUserRequest::UserGroupHasBeenSet() const
{
    return m_userGroupHasBeenSet;
}

int64_t CreateUserRequest::GetBirthdate() const
{
    return m_birthdate;
}

void CreateUserRequest::SetBirthdate(const int64_t& _birthdate)
{
    m_birthdate = _birthdate;
    m_birthdateHasBeenSet = true;
}

bool CreateUserRequest::BirthdateHasBeenSet() const
{
    return m_birthdateHasBeenSet;
}

vector<MemberMap> CreateUserRequest::GetCustomizationAttributes() const
{
    return m_customizationAttributes;
}

void CreateUserRequest::SetCustomizationAttributes(const vector<MemberMap>& _customizationAttributes)
{
    m_customizationAttributes = _customizationAttributes;
    m_customizationAttributesHasBeenSet = true;
}

bool CreateUserRequest::CustomizationAttributesHasBeenSet() const
{
    return m_customizationAttributesHasBeenSet;
}

string CreateUserRequest::GetIndexedAttribute1() const
{
    return m_indexedAttribute1;
}

void CreateUserRequest::SetIndexedAttribute1(const string& _indexedAttribute1)
{
    m_indexedAttribute1 = _indexedAttribute1;
    m_indexedAttribute1HasBeenSet = true;
}

bool CreateUserRequest::IndexedAttribute1HasBeenSet() const
{
    return m_indexedAttribute1HasBeenSet;
}

string CreateUserRequest::GetIndexedAttribute2() const
{
    return m_indexedAttribute2;
}

void CreateUserRequest::SetIndexedAttribute2(const string& _indexedAttribute2)
{
    m_indexedAttribute2 = _indexedAttribute2;
    m_indexedAttribute2HasBeenSet = true;
}

bool CreateUserRequest::IndexedAttribute2HasBeenSet() const
{
    return m_indexedAttribute2HasBeenSet;
}

string CreateUserRequest::GetIndexedAttribute3() const
{
    return m_indexedAttribute3;
}

void CreateUserRequest::SetIndexedAttribute3(const string& _indexedAttribute3)
{
    m_indexedAttribute3 = _indexedAttribute3;
    m_indexedAttribute3HasBeenSet = true;
}

bool CreateUserRequest::IndexedAttribute3HasBeenSet() const
{
    return m_indexedAttribute3HasBeenSet;
}

string CreateUserRequest::GetIndexedAttribute4() const
{
    return m_indexedAttribute4;
}

void CreateUserRequest::SetIndexedAttribute4(const string& _indexedAttribute4)
{
    m_indexedAttribute4 = _indexedAttribute4;
    m_indexedAttribute4HasBeenSet = true;
}

bool CreateUserRequest::IndexedAttribute4HasBeenSet() const
{
    return m_indexedAttribute4HasBeenSet;
}

string CreateUserRequest::GetIndexedAttribute5() const
{
    return m_indexedAttribute5;
}

void CreateUserRequest::SetIndexedAttribute5(const string& _indexedAttribute5)
{
    m_indexedAttribute5 = _indexedAttribute5;
    m_indexedAttribute5HasBeenSet = true;
}

bool CreateUserRequest::IndexedAttribute5HasBeenSet() const
{
    return m_indexedAttribute5HasBeenSet;
}


