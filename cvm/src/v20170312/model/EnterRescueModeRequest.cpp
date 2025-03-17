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

#include <tencentcloud/cvm/v20170312/model/EnterRescueModeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

EnterRescueModeRequest::EnterRescueModeRequest() :
    m_instanceIdHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_forceStopHasBeenSet(false),
    m_stopTypeHasBeenSet(false)
{
}

string EnterRescueModeRequest::ToJsonString() const
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

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_forceStopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceStop";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceStop, allocator);
    }

    if (m_stopTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_stopType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EnterRescueModeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void EnterRescueModeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool EnterRescueModeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string EnterRescueModeRequest::GetPassword() const
{
    return m_password;
}

void EnterRescueModeRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool EnterRescueModeRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string EnterRescueModeRequest::GetUsername() const
{
    return m_username;
}

void EnterRescueModeRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool EnterRescueModeRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

bool EnterRescueModeRequest::GetForceStop() const
{
    return m_forceStop;
}

void EnterRescueModeRequest::SetForceStop(const bool& _forceStop)
{
    m_forceStop = _forceStop;
    m_forceStopHasBeenSet = true;
}

bool EnterRescueModeRequest::ForceStopHasBeenSet() const
{
    return m_forceStopHasBeenSet;
}

string EnterRescueModeRequest::GetStopType() const
{
    return m_stopType;
}

void EnterRescueModeRequest::SetStopType(const string& _stopType)
{
    m_stopType = _stopType;
    m_stopTypeHasBeenSet = true;
}

bool EnterRescueModeRequest::StopTypeHasBeenSet() const
{
    return m_stopTypeHasBeenSet;
}


