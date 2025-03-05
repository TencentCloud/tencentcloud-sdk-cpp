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

#include <tencentcloud/cdwpg/v20201230/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

ResetAccountPasswordRequest::ResetAccountPasswordRequest() :
    m_instanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_newPasswordHasBeenSet(false)
{
}

string ResetAccountPasswordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_newPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newPassword.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResetAccountPasswordRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ResetAccountPasswordRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ResetAccountPasswordRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ResetAccountPasswordRequest::GetUserName() const
{
    return m_userName;
}

void ResetAccountPasswordRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ResetAccountPasswordRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ResetAccountPasswordRequest::GetNewPassword() const
{
    return m_newPassword;
}

void ResetAccountPasswordRequest::SetNewPassword(const string& _newPassword)
{
    m_newPassword = _newPassword;
    m_newPasswordHasBeenSet = true;
}

bool ResetAccountPasswordRequest::NewPasswordHasBeenSet() const
{
    return m_newPasswordHasBeenSet;
}


