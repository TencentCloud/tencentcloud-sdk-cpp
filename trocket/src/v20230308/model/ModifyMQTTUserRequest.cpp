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

#include <tencentcloud/trocket/v20230308/model/ModifyMQTTUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

ModifyMQTTUserRequest::ModifyMQTTUserRequest() :
    m_instanceIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_permReadHasBeenSet(false),
    m_permWriteHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string ModifyMQTTUserRequest::ToJsonString() const
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

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_permReadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermRead";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_permRead, allocator);
    }

    if (m_permWriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermWrite";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_permWrite, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMQTTUserRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyMQTTUserRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyMQTTUserRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyMQTTUserRequest::GetUsername() const
{
    return m_username;
}

void ModifyMQTTUserRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool ModifyMQTTUserRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

bool ModifyMQTTUserRequest::GetPermRead() const
{
    return m_permRead;
}

void ModifyMQTTUserRequest::SetPermRead(const bool& _permRead)
{
    m_permRead = _permRead;
    m_permReadHasBeenSet = true;
}

bool ModifyMQTTUserRequest::PermReadHasBeenSet() const
{
    return m_permReadHasBeenSet;
}

bool ModifyMQTTUserRequest::GetPermWrite() const
{
    return m_permWrite;
}

void ModifyMQTTUserRequest::SetPermWrite(const bool& _permWrite)
{
    m_permWrite = _permWrite;
    m_permWriteHasBeenSet = true;
}

bool ModifyMQTTUserRequest::PermWriteHasBeenSet() const
{
    return m_permWriteHasBeenSet;
}

string ModifyMQTTUserRequest::GetRemark() const
{
    return m_remark;
}

void ModifyMQTTUserRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyMQTTUserRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


