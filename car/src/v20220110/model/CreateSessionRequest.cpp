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

#include <tencentcloud/car/v20220110/model/CreateSessionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

CreateSessionRequest::CreateSessionRequest() :
    m_userIdHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_clientSessionHasBeenSet(false),
    m_runModeHasBeenSet(false),
    m_applicationParametersHasBeenSet(false),
    m_hostUserIdHasBeenSet(false),
    m_roleHasBeenSet(false)
{
}

string CreateSessionRequest::ToJsonString() const
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

    if (m_clientSessionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientSession";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientSession.c_str(), allocator).Move(), allocator);
    }

    if (m_runModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runMode.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationParameters.c_str(), allocator).Move(), allocator);
    }

    if (m_hostUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSessionRequest::GetUserId() const
{
    return m_userId;
}

void CreateSessionRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateSessionRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CreateSessionRequest::GetUserIp() const
{
    return m_userIp;
}

void CreateSessionRequest::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool CreateSessionRequest::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

string CreateSessionRequest::GetClientSession() const
{
    return m_clientSession;
}

void CreateSessionRequest::SetClientSession(const string& _clientSession)
{
    m_clientSession = _clientSession;
    m_clientSessionHasBeenSet = true;
}

bool CreateSessionRequest::ClientSessionHasBeenSet() const
{
    return m_clientSessionHasBeenSet;
}

string CreateSessionRequest::GetRunMode() const
{
    return m_runMode;
}

void CreateSessionRequest::SetRunMode(const string& _runMode)
{
    m_runMode = _runMode;
    m_runModeHasBeenSet = true;
}

bool CreateSessionRequest::RunModeHasBeenSet() const
{
    return m_runModeHasBeenSet;
}

string CreateSessionRequest::GetApplicationParameters() const
{
    return m_applicationParameters;
}

void CreateSessionRequest::SetApplicationParameters(const string& _applicationParameters)
{
    m_applicationParameters = _applicationParameters;
    m_applicationParametersHasBeenSet = true;
}

bool CreateSessionRequest::ApplicationParametersHasBeenSet() const
{
    return m_applicationParametersHasBeenSet;
}

string CreateSessionRequest::GetHostUserId() const
{
    return m_hostUserId;
}

void CreateSessionRequest::SetHostUserId(const string& _hostUserId)
{
    m_hostUserId = _hostUserId;
    m_hostUserIdHasBeenSet = true;
}

bool CreateSessionRequest::HostUserIdHasBeenSet() const
{
    return m_hostUserIdHasBeenSet;
}

string CreateSessionRequest::GetRole() const
{
    return m_role;
}

void CreateSessionRequest::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool CreateSessionRequest::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}


