/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ciam/v20220331/model/CreateUserStoreRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

CreateUserStoreRequest::CreateUserStoreRequest() :
    m_userPoolNameHasBeenSet(false),
    m_userPoolDescHasBeenSet(false),
    m_userPoolLogoHasBeenSet(false)
{
}

string CreateUserStoreRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userPoolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPoolName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userPoolName.c_str(), allocator).Move(), allocator);
    }

    if (m_userPoolDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPoolDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userPoolDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_userPoolLogoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPoolLogo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userPoolLogo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateUserStoreRequest::GetUserPoolName() const
{
    return m_userPoolName;
}

void CreateUserStoreRequest::SetUserPoolName(const string& _userPoolName)
{
    m_userPoolName = _userPoolName;
    m_userPoolNameHasBeenSet = true;
}

bool CreateUserStoreRequest::UserPoolNameHasBeenSet() const
{
    return m_userPoolNameHasBeenSet;
}

string CreateUserStoreRequest::GetUserPoolDesc() const
{
    return m_userPoolDesc;
}

void CreateUserStoreRequest::SetUserPoolDesc(const string& _userPoolDesc)
{
    m_userPoolDesc = _userPoolDesc;
    m_userPoolDescHasBeenSet = true;
}

bool CreateUserStoreRequest::UserPoolDescHasBeenSet() const
{
    return m_userPoolDescHasBeenSet;
}

string CreateUserStoreRequest::GetUserPoolLogo() const
{
    return m_userPoolLogo;
}

void CreateUserStoreRequest::SetUserPoolLogo(const string& _userPoolLogo)
{
    m_userPoolLogo = _userPoolLogo;
    m_userPoolLogoHasBeenSet = true;
}

bool CreateUserStoreRequest::UserPoolLogoHasBeenSet() const
{
    return m_userPoolLogoHasBeenSet;
}


