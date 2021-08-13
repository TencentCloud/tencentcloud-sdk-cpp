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

#include <tencentcloud/eiam/v20210420/model/DescribeUserResourcesAuthorizationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

DescribeUserResourcesAuthorizationRequest::DescribeUserResourcesAuthorizationRequest() :
    m_applicationIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_includeInheritedAuthorizationsHasBeenSet(false)
{
}

string DescribeUserResourcesAuthorizationRequest::ToJsonString() const
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

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_includeInheritedAuthorizationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeInheritedAuthorizations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeInheritedAuthorizations, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeUserResourcesAuthorizationRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeUserResourcesAuthorizationRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeUserResourcesAuthorizationRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string DescribeUserResourcesAuthorizationRequest::GetUserId() const
{
    return m_userId;
}

void DescribeUserResourcesAuthorizationRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeUserResourcesAuthorizationRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeUserResourcesAuthorizationRequest::GetUserName() const
{
    return m_userName;
}

void DescribeUserResourcesAuthorizationRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeUserResourcesAuthorizationRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

bool DescribeUserResourcesAuthorizationRequest::GetIncludeInheritedAuthorizations() const
{
    return m_includeInheritedAuthorizations;
}

void DescribeUserResourcesAuthorizationRequest::SetIncludeInheritedAuthorizations(const bool& _includeInheritedAuthorizations)
{
    m_includeInheritedAuthorizations = _includeInheritedAuthorizations;
    m_includeInheritedAuthorizationsHasBeenSet = true;
}

bool DescribeUserResourcesAuthorizationRequest::IncludeInheritedAuthorizationsHasBeenSet() const
{
    return m_includeInheritedAuthorizationsHasBeenSet;
}


