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

#include <tencentcloud/redis/v20180412/model/ResetPasswordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace rapidjson;
using namespace std;

ResetPasswordRequest::ResetPasswordRequest() :
    m_instanceIdHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_noAuthHasBeenSet(false)
{
}

string ResetPasswordRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_noAuthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NoAuth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_noAuth, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResetPasswordRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ResetPasswordRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ResetPasswordRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ResetPasswordRequest::GetPassword() const
{
    return m_password;
}

void ResetPasswordRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ResetPasswordRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

bool ResetPasswordRequest::GetNoAuth() const
{
    return m_noAuth;
}

void ResetPasswordRequest::SetNoAuth(const bool& _noAuth)
{
    m_noAuth = _noAuth;
    m_noAuthHasBeenSet = true;
}

bool ResetPasswordRequest::NoAuthHasBeenSet() const
{
    return m_noAuthHasBeenSet;
}


