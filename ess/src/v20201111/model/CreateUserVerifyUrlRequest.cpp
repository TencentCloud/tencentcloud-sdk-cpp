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

#include <tencentcloud/ess/v20201111/model/CreateUserVerifyUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateUserVerifyUrlRequest::CreateUserVerifyUrlRequest() :
    m_operatorHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_idCardTypeHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_jumpUrlHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_autoJumpBackHasBeenSet(false),
    m_userDataHasBeenSet(false)
{
}

string CreateUserVerifyUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_jumpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jumpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_autoJumpBackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoJumpBack";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoJumpBack, allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateUserVerifyUrlRequest::GetOperator() const
{
    return m_operator;
}

void CreateUserVerifyUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateUserVerifyUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateUserVerifyUrlRequest::GetName() const
{
    return m_name;
}

void CreateUserVerifyUrlRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateUserVerifyUrlRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateUserVerifyUrlRequest::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void CreateUserVerifyUrlRequest::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool CreateUserVerifyUrlRequest::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string CreateUserVerifyUrlRequest::GetIdCardType() const
{
    return m_idCardType;
}

void CreateUserVerifyUrlRequest::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool CreateUserVerifyUrlRequest::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
}

string CreateUserVerifyUrlRequest::GetMobile() const
{
    return m_mobile;
}

void CreateUserVerifyUrlRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool CreateUserVerifyUrlRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string CreateUserVerifyUrlRequest::GetJumpUrl() const
{
    return m_jumpUrl;
}

void CreateUserVerifyUrlRequest::SetJumpUrl(const string& _jumpUrl)
{
    m_jumpUrl = _jumpUrl;
    m_jumpUrlHasBeenSet = true;
}

bool CreateUserVerifyUrlRequest::JumpUrlHasBeenSet() const
{
    return m_jumpUrlHasBeenSet;
}

string CreateUserVerifyUrlRequest::GetEndpoint() const
{
    return m_endpoint;
}

void CreateUserVerifyUrlRequest::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool CreateUserVerifyUrlRequest::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

bool CreateUserVerifyUrlRequest::GetAutoJumpBack() const
{
    return m_autoJumpBack;
}

void CreateUserVerifyUrlRequest::SetAutoJumpBack(const bool& _autoJumpBack)
{
    m_autoJumpBack = _autoJumpBack;
    m_autoJumpBackHasBeenSet = true;
}

bool CreateUserVerifyUrlRequest::AutoJumpBackHasBeenSet() const
{
    return m_autoJumpBackHasBeenSet;
}

string CreateUserVerifyUrlRequest::GetUserData() const
{
    return m_userData;
}

void CreateUserVerifyUrlRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool CreateUserVerifyUrlRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}


