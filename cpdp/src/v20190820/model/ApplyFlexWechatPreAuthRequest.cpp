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

#include <tencentcloud/cpdp/v20190820/model/ApplyFlexWechatPreAuthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ApplyFlexWechatPreAuthRequest::ApplyFlexWechatPreAuthRequest() :
    m_authNoHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_employerNameHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_idNoHasBeenSet(false),
    m_employmentTypeHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string ApplyFlexWechatPreAuthRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_authNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authNo.c_str(), allocator).Move(), allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_employerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmployerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_employerName.c_str(), allocator).Move(), allocator);
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

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyFlexWechatPreAuthRequest::GetAuthNo() const
{
    return m_authNo;
}

void ApplyFlexWechatPreAuthRequest::SetAuthNo(const string& _authNo)
{
    m_authNo = _authNo;
    m_authNoHasBeenSet = true;
}

bool ApplyFlexWechatPreAuthRequest::AuthNoHasBeenSet() const
{
    return m_authNoHasBeenSet;
}

string ApplyFlexWechatPreAuthRequest::GetOpenId() const
{
    return m_openId;
}

void ApplyFlexWechatPreAuthRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool ApplyFlexWechatPreAuthRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string ApplyFlexWechatPreAuthRequest::GetProjectName() const
{
    return m_projectName;
}

void ApplyFlexWechatPreAuthRequest::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool ApplyFlexWechatPreAuthRequest::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string ApplyFlexWechatPreAuthRequest::GetEmployerName() const
{
    return m_employerName;
}

void ApplyFlexWechatPreAuthRequest::SetEmployerName(const string& _employerName)
{
    m_employerName = _employerName;
    m_employerNameHasBeenSet = true;
}

bool ApplyFlexWechatPreAuthRequest::EmployerNameHasBeenSet() const
{
    return m_employerNameHasBeenSet;
}

string ApplyFlexWechatPreAuthRequest::GetUserName() const
{
    return m_userName;
}

void ApplyFlexWechatPreAuthRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ApplyFlexWechatPreAuthRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ApplyFlexWechatPreAuthRequest::GetIdNo() const
{
    return m_idNo;
}

void ApplyFlexWechatPreAuthRequest::SetIdNo(const string& _idNo)
{
    m_idNo = _idNo;
    m_idNoHasBeenSet = true;
}

bool ApplyFlexWechatPreAuthRequest::IdNoHasBeenSet() const
{
    return m_idNoHasBeenSet;
}

string ApplyFlexWechatPreAuthRequest::GetEmploymentType() const
{
    return m_employmentType;
}

void ApplyFlexWechatPreAuthRequest::SetEmploymentType(const string& _employmentType)
{
    m_employmentType = _employmentType;
    m_employmentTypeHasBeenSet = true;
}

bool ApplyFlexWechatPreAuthRequest::EmploymentTypeHasBeenSet() const
{
    return m_employmentTypeHasBeenSet;
}

string ApplyFlexWechatPreAuthRequest::GetAuthType() const
{
    return m_authType;
}

void ApplyFlexWechatPreAuthRequest::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool ApplyFlexWechatPreAuthRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string ApplyFlexWechatPreAuthRequest::GetEnvironment() const
{
    return m_environment;
}

void ApplyFlexWechatPreAuthRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool ApplyFlexWechatPreAuthRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


