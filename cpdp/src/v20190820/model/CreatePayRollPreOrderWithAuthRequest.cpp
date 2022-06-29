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

#include <tencentcloud/cpdp/v20190820/model/CreatePayRollPreOrderWithAuthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreatePayRollPreOrderWithAuthRequest::CreatePayRollPreOrderWithAuthRequest() :
    m_openIdHasBeenSet(false),
    m_subMerchantIdHasBeenSet(false),
    m_authNumberHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_idNoHasBeenSet(false),
    m_employmentTypeHasBeenSet(false),
    m_wechatAppIdHasBeenSet(false),
    m_wechatSubAppIdHasBeenSet(false)
{
}

string CreatePayRollPreOrderWithAuthRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_subMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_authNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_idNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idNo.c_str(), allocator).Move(), allocator);
    }

    if (m_employmentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmploymentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_employmentType.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wechatAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatSubAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatSubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wechatSubAppId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePayRollPreOrderWithAuthRequest::GetOpenId() const
{
    return m_openId;
}

void CreatePayRollPreOrderWithAuthRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool CreatePayRollPreOrderWithAuthRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string CreatePayRollPreOrderWithAuthRequest::GetSubMerchantId() const
{
    return m_subMerchantId;
}

void CreatePayRollPreOrderWithAuthRequest::SetSubMerchantId(const string& _subMerchantId)
{
    m_subMerchantId = _subMerchantId;
    m_subMerchantIdHasBeenSet = true;
}

bool CreatePayRollPreOrderWithAuthRequest::SubMerchantIdHasBeenSet() const
{
    return m_subMerchantIdHasBeenSet;
}

string CreatePayRollPreOrderWithAuthRequest::GetAuthNumber() const
{
    return m_authNumber;
}

void CreatePayRollPreOrderWithAuthRequest::SetAuthNumber(const string& _authNumber)
{
    m_authNumber = _authNumber;
    m_authNumberHasBeenSet = true;
}

bool CreatePayRollPreOrderWithAuthRequest::AuthNumberHasBeenSet() const
{
    return m_authNumberHasBeenSet;
}

string CreatePayRollPreOrderWithAuthRequest::GetProjectName() const
{
    return m_projectName;
}

void CreatePayRollPreOrderWithAuthRequest::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool CreatePayRollPreOrderWithAuthRequest::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string CreatePayRollPreOrderWithAuthRequest::GetCompanyName() const
{
    return m_companyName;
}

void CreatePayRollPreOrderWithAuthRequest::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool CreatePayRollPreOrderWithAuthRequest::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

string CreatePayRollPreOrderWithAuthRequest::GetUserName() const
{
    return m_userName;
}

void CreatePayRollPreOrderWithAuthRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CreatePayRollPreOrderWithAuthRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CreatePayRollPreOrderWithAuthRequest::GetIdNo() const
{
    return m_idNo;
}

void CreatePayRollPreOrderWithAuthRequest::SetIdNo(const string& _idNo)
{
    m_idNo = _idNo;
    m_idNoHasBeenSet = true;
}

bool CreatePayRollPreOrderWithAuthRequest::IdNoHasBeenSet() const
{
    return m_idNoHasBeenSet;
}

string CreatePayRollPreOrderWithAuthRequest::GetEmploymentType() const
{
    return m_employmentType;
}

void CreatePayRollPreOrderWithAuthRequest::SetEmploymentType(const string& _employmentType)
{
    m_employmentType = _employmentType;
    m_employmentTypeHasBeenSet = true;
}

bool CreatePayRollPreOrderWithAuthRequest::EmploymentTypeHasBeenSet() const
{
    return m_employmentTypeHasBeenSet;
}

string CreatePayRollPreOrderWithAuthRequest::GetWechatAppId() const
{
    return m_wechatAppId;
}

void CreatePayRollPreOrderWithAuthRequest::SetWechatAppId(const string& _wechatAppId)
{
    m_wechatAppId = _wechatAppId;
    m_wechatAppIdHasBeenSet = true;
}

bool CreatePayRollPreOrderWithAuthRequest::WechatAppIdHasBeenSet() const
{
    return m_wechatAppIdHasBeenSet;
}

string CreatePayRollPreOrderWithAuthRequest::GetWechatSubAppId() const
{
    return m_wechatSubAppId;
}

void CreatePayRollPreOrderWithAuthRequest::SetWechatSubAppId(const string& _wechatSubAppId)
{
    m_wechatSubAppId = _wechatSubAppId;
    m_wechatSubAppIdHasBeenSet = true;
}

bool CreatePayRollPreOrderWithAuthRequest::WechatSubAppIdHasBeenSet() const
{
    return m_wechatSubAppIdHasBeenSet;
}


