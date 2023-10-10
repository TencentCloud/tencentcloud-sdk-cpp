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

#include <tencentcloud/cwp/v20180228/model/CheckLogKafkaConnectionStateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

CheckLogKafkaConnectionStateRequest::CheckLogKafkaConnectionStateRequest() :
    m_accessTypeHasBeenSet(false),
    m_accessAddrHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_hasPwdHasBeenSet(false),
    m_pwdHasBeenSet(false),
    m_kafkaIdHasBeenSet(false),
    m_insVersionHasBeenSet(false)
{
}

string CheckLogKafkaConnectionStateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accessType, allocator);
    }

    if (m_accessAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessAddr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_hasPwdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasPwd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hasPwd, allocator);
    }

    if (m_pwdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pwd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pwd.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kafkaId.c_str(), allocator).Move(), allocator);
    }

    if (m_insVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_insVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CheckLogKafkaConnectionStateRequest::GetAccessType() const
{
    return m_accessType;
}

void CheckLogKafkaConnectionStateRequest::SetAccessType(const uint64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool CheckLogKafkaConnectionStateRequest::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string CheckLogKafkaConnectionStateRequest::GetAccessAddr() const
{
    return m_accessAddr;
}

void CheckLogKafkaConnectionStateRequest::SetAccessAddr(const string& _accessAddr)
{
    m_accessAddr = _accessAddr;
    m_accessAddrHasBeenSet = true;
}

bool CheckLogKafkaConnectionStateRequest::AccessAddrHasBeenSet() const
{
    return m_accessAddrHasBeenSet;
}

string CheckLogKafkaConnectionStateRequest::GetUsername() const
{
    return m_username;
}

void CheckLogKafkaConnectionStateRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool CheckLogKafkaConnectionStateRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

uint64_t CheckLogKafkaConnectionStateRequest::GetHasPwd() const
{
    return m_hasPwd;
}

void CheckLogKafkaConnectionStateRequest::SetHasPwd(const uint64_t& _hasPwd)
{
    m_hasPwd = _hasPwd;
    m_hasPwdHasBeenSet = true;
}

bool CheckLogKafkaConnectionStateRequest::HasPwdHasBeenSet() const
{
    return m_hasPwdHasBeenSet;
}

string CheckLogKafkaConnectionStateRequest::GetPwd() const
{
    return m_pwd;
}

void CheckLogKafkaConnectionStateRequest::SetPwd(const string& _pwd)
{
    m_pwd = _pwd;
    m_pwdHasBeenSet = true;
}

bool CheckLogKafkaConnectionStateRequest::PwdHasBeenSet() const
{
    return m_pwdHasBeenSet;
}

string CheckLogKafkaConnectionStateRequest::GetKafkaId() const
{
    return m_kafkaId;
}

void CheckLogKafkaConnectionStateRequest::SetKafkaId(const string& _kafkaId)
{
    m_kafkaId = _kafkaId;
    m_kafkaIdHasBeenSet = true;
}

bool CheckLogKafkaConnectionStateRequest::KafkaIdHasBeenSet() const
{
    return m_kafkaIdHasBeenSet;
}

string CheckLogKafkaConnectionStateRequest::GetInsVersion() const
{
    return m_insVersion;
}

void CheckLogKafkaConnectionStateRequest::SetInsVersion(const string& _insVersion)
{
    m_insVersion = _insVersion;
    m_insVersionHasBeenSet = true;
}

bool CheckLogKafkaConnectionStateRequest::InsVersionHasBeenSet() const
{
    return m_insVersionHasBeenSet;
}


