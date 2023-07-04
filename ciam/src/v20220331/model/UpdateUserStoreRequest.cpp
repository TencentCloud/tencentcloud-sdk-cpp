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

#include <tencentcloud/ciam/v20220331/model/UpdateUserStoreRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

UpdateUserStoreRequest::UpdateUserStoreRequest() :
    m_userPoolIdHasBeenSet(false),
    m_userPoolNameHasBeenSet(false),
    m_userPoolDescHasBeenSet(false),
    m_userPoolLogoHasBeenSet(false)
{
}

string UpdateUserStoreRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userPoolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPoolId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userPoolId.c_str(), allocator).Move(), allocator);
    }

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


string UpdateUserStoreRequest::GetUserPoolId() const
{
    return m_userPoolId;
}

void UpdateUserStoreRequest::SetUserPoolId(const string& _userPoolId)
{
    m_userPoolId = _userPoolId;
    m_userPoolIdHasBeenSet = true;
}

bool UpdateUserStoreRequest::UserPoolIdHasBeenSet() const
{
    return m_userPoolIdHasBeenSet;
}

string UpdateUserStoreRequest::GetUserPoolName() const
{
    return m_userPoolName;
}

void UpdateUserStoreRequest::SetUserPoolName(const string& _userPoolName)
{
    m_userPoolName = _userPoolName;
    m_userPoolNameHasBeenSet = true;
}

bool UpdateUserStoreRequest::UserPoolNameHasBeenSet() const
{
    return m_userPoolNameHasBeenSet;
}

string UpdateUserStoreRequest::GetUserPoolDesc() const
{
    return m_userPoolDesc;
}

void UpdateUserStoreRequest::SetUserPoolDesc(const string& _userPoolDesc)
{
    m_userPoolDesc = _userPoolDesc;
    m_userPoolDescHasBeenSet = true;
}

bool UpdateUserStoreRequest::UserPoolDescHasBeenSet() const
{
    return m_userPoolDescHasBeenSet;
}

string UpdateUserStoreRequest::GetUserPoolLogo() const
{
    return m_userPoolLogo;
}

void UpdateUserStoreRequest::SetUserPoolLogo(const string& _userPoolLogo)
{
    m_userPoolLogo = _userPoolLogo;
    m_userPoolLogoHasBeenSet = true;
}

bool UpdateUserStoreRequest::UserPoolLogoHasBeenSet() const
{
    return m_userPoolLogoHasBeenSet;
}


