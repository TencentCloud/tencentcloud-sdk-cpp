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

#include <tencentcloud/adp/v20260520/model/CreateWorkspaceCredentialRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CreateWorkspaceCredentialRequest::CreateWorkspaceCredentialRequest() :
    m_typeHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false),
    m_loginUinHasBeenSet(false),
    m_shareCodeHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

string CreateWorkspaceCredentialRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_appKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appKey.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginSubAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_loginUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginUin.c_str(), allocator).Move(), allocator);
    }

    if (m_shareCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shareCode.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateWorkspaceCredentialRequest::GetType() const
{
    return m_type;
}

void CreateWorkspaceCredentialRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateWorkspaceCredentialRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateWorkspaceCredentialRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void CreateWorkspaceCredentialRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool CreateWorkspaceCredentialRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string CreateWorkspaceCredentialRequest::GetAppId() const
{
    return m_appId;
}

void CreateWorkspaceCredentialRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CreateWorkspaceCredentialRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CreateWorkspaceCredentialRequest::GetAppKey() const
{
    return m_appKey;
}

void CreateWorkspaceCredentialRequest::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool CreateWorkspaceCredentialRequest::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string CreateWorkspaceCredentialRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void CreateWorkspaceCredentialRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool CreateWorkspaceCredentialRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}

string CreateWorkspaceCredentialRequest::GetLoginUin() const
{
    return m_loginUin;
}

void CreateWorkspaceCredentialRequest::SetLoginUin(const string& _loginUin)
{
    m_loginUin = _loginUin;
    m_loginUinHasBeenSet = true;
}

bool CreateWorkspaceCredentialRequest::LoginUinHasBeenSet() const
{
    return m_loginUinHasBeenSet;
}

string CreateWorkspaceCredentialRequest::GetShareCode() const
{
    return m_shareCode;
}

void CreateWorkspaceCredentialRequest::SetShareCode(const string& _shareCode)
{
    m_shareCode = _shareCode;
    m_shareCodeHasBeenSet = true;
}

bool CreateWorkspaceCredentialRequest::ShareCodeHasBeenSet() const
{
    return m_shareCodeHasBeenSet;
}

string CreateWorkspaceCredentialRequest::GetUserId() const
{
    return m_userId;
}

void CreateWorkspaceCredentialRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateWorkspaceCredentialRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}


