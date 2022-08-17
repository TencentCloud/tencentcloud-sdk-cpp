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

#include <tencentcloud/bma/v20210624/model/CreateCRUserVerifyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

CreateCRUserVerifyRequest::CreateCRUserVerifyRequest() :
    m_userNameHasBeenSet(false),
    m_userIDHasBeenSet(false),
    m_userPhoneHasBeenSet(false),
    m_verificationCodeHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string CreateCRUserVerifyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_userIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userID.c_str(), allocator).Move(), allocator);
    }

    if (m_userPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPhone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_verificationCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verificationCode.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCRUserVerifyRequest::GetUserName() const
{
    return m_userName;
}

void CreateCRUserVerifyRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CreateCRUserVerifyRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CreateCRUserVerifyRequest::GetUserID() const
{
    return m_userID;
}

void CreateCRUserVerifyRequest::SetUserID(const string& _userID)
{
    m_userID = _userID;
    m_userIDHasBeenSet = true;
}

bool CreateCRUserVerifyRequest::UserIDHasBeenSet() const
{
    return m_userIDHasBeenSet;
}

string CreateCRUserVerifyRequest::GetUserPhone() const
{
    return m_userPhone;
}

void CreateCRUserVerifyRequest::SetUserPhone(const string& _userPhone)
{
    m_userPhone = _userPhone;
    m_userPhoneHasBeenSet = true;
}

bool CreateCRUserVerifyRequest::UserPhoneHasBeenSet() const
{
    return m_userPhoneHasBeenSet;
}

string CreateCRUserVerifyRequest::GetVerificationCode() const
{
    return m_verificationCode;
}

void CreateCRUserVerifyRequest::SetVerificationCode(const string& _verificationCode)
{
    m_verificationCode = _verificationCode;
    m_verificationCodeHasBeenSet = true;
}

bool CreateCRUserVerifyRequest::VerificationCodeHasBeenSet() const
{
    return m_verificationCodeHasBeenSet;
}

string CreateCRUserVerifyRequest::GetType() const
{
    return m_type;
}

void CreateCRUserVerifyRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateCRUserVerifyRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


