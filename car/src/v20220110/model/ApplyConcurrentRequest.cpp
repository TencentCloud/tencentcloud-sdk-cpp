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

#include <tencentcloud/car/v20220110/model/ApplyConcurrentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

ApplyConcurrentRequest::ApplyConcurrentRequest() :
    m_userIdHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_applicationVersionIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false)
{
}

string ApplyConcurrentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyConcurrentRequest::GetUserId() const
{
    return m_userId;
}

void ApplyConcurrentRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ApplyConcurrentRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string ApplyConcurrentRequest::GetUserIp() const
{
    return m_userIp;
}

void ApplyConcurrentRequest::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool ApplyConcurrentRequest::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

string ApplyConcurrentRequest::GetProjectId() const
{
    return m_projectId;
}

void ApplyConcurrentRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ApplyConcurrentRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ApplyConcurrentRequest::GetApplicationVersionId() const
{
    return m_applicationVersionId;
}

void ApplyConcurrentRequest::SetApplicationVersionId(const string& _applicationVersionId)
{
    m_applicationVersionId = _applicationVersionId;
    m_applicationVersionIdHasBeenSet = true;
}

bool ApplyConcurrentRequest::ApplicationVersionIdHasBeenSet() const
{
    return m_applicationVersionIdHasBeenSet;
}

string ApplyConcurrentRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ApplyConcurrentRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ApplyConcurrentRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}


