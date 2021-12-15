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

#include <tencentcloud/eiam/v20210420/model/CreateAppAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

CreateAppAccountRequest::CreateAppAccountRequest() :
    m_applicationIdHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateAppAccountRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAppAccountRequest::GetApplicationId() const
{
    return m_applicationId;
}

void CreateAppAccountRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool CreateAppAccountRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string CreateAppAccountRequest::GetAccountName() const
{
    return m_accountName;
}

void CreateAppAccountRequest::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool CreateAppAccountRequest::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string CreateAppAccountRequest::GetPassword() const
{
    return m_password;
}

void CreateAppAccountRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateAppAccountRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string CreateAppAccountRequest::GetDescription() const
{
    return m_description;
}

void CreateAppAccountRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAppAccountRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


