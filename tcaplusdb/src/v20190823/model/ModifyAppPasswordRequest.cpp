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

#include <tencentcloud/tcaplusdb/v20190823/model/ModifyAppPasswordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace rapidjson;
using namespace std;

ModifyAppPasswordRequest::ModifyAppPasswordRequest() :
    m_applicationIdHasBeenSet(false),
    m_oldPasswordHasBeenSet(false),
    m_oldPasswordExpireTimeHasBeenSet(false),
    m_newPasswordHasBeenSet(false),
    m_modeHasBeenSet(false)
{
}

string ModifyAppPasswordRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_oldPasswordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OldPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_oldPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_oldPasswordExpireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OldPasswordExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_oldPasswordExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_newPasswordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NewPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_newPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mode.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAppPasswordRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ModifyAppPasswordRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ModifyAppPasswordRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ModifyAppPasswordRequest::GetOldPassword() const
{
    return m_oldPassword;
}

void ModifyAppPasswordRequest::SetOldPassword(const string& _oldPassword)
{
    m_oldPassword = _oldPassword;
    m_oldPasswordHasBeenSet = true;
}

bool ModifyAppPasswordRequest::OldPasswordHasBeenSet() const
{
    return m_oldPasswordHasBeenSet;
}

string ModifyAppPasswordRequest::GetOldPasswordExpireTime() const
{
    return m_oldPasswordExpireTime;
}

void ModifyAppPasswordRequest::SetOldPasswordExpireTime(const string& _oldPasswordExpireTime)
{
    m_oldPasswordExpireTime = _oldPasswordExpireTime;
    m_oldPasswordExpireTimeHasBeenSet = true;
}

bool ModifyAppPasswordRequest::OldPasswordExpireTimeHasBeenSet() const
{
    return m_oldPasswordExpireTimeHasBeenSet;
}

string ModifyAppPasswordRequest::GetNewPassword() const
{
    return m_newPassword;
}

void ModifyAppPasswordRequest::SetNewPassword(const string& _newPassword)
{
    m_newPassword = _newPassword;
    m_newPasswordHasBeenSet = true;
}

bool ModifyAppPasswordRequest::NewPasswordHasBeenSet() const
{
    return m_newPasswordHasBeenSet;
}

string ModifyAppPasswordRequest::GetMode() const
{
    return m_mode;
}

void ModifyAppPasswordRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ModifyAppPasswordRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}


