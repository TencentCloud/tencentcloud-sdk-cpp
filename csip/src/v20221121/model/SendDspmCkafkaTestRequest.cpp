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

#include <tencentcloud/csip/v20221121/model/SendDspmCkafkaTestRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

SendDspmCkafkaTestRequest::SendDspmCkafkaTestRequest() :
    m_vipTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_domainPortHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

string SendDspmCkafkaTestRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vipTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vipType, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vport.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainPort.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t SendDspmCkafkaTestRequest::GetVipType() const
{
    return m_vipType;
}

void SendDspmCkafkaTestRequest::SetVipType(const int64_t& _vipType)
{
    m_vipType = _vipType;
    m_vipTypeHasBeenSet = true;
}

bool SendDspmCkafkaTestRequest::VipTypeHasBeenSet() const
{
    return m_vipTypeHasBeenSet;
}

string SendDspmCkafkaTestRequest::GetInstanceId() const
{
    return m_instanceId;
}

void SendDspmCkafkaTestRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SendDspmCkafkaTestRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> SendDspmCkafkaTestRequest::GetMemberId() const
{
    return m_memberId;
}

void SendDspmCkafkaTestRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool SendDspmCkafkaTestRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string SendDspmCkafkaTestRequest::GetVip() const
{
    return m_vip;
}

void SendDspmCkafkaTestRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool SendDspmCkafkaTestRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string SendDspmCkafkaTestRequest::GetVport() const
{
    return m_vport;
}

void SendDspmCkafkaTestRequest::SetVport(const string& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool SendDspmCkafkaTestRequest::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string SendDspmCkafkaTestRequest::GetDomain() const
{
    return m_domain;
}

void SendDspmCkafkaTestRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool SendDspmCkafkaTestRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string SendDspmCkafkaTestRequest::GetDomainPort() const
{
    return m_domainPort;
}

void SendDspmCkafkaTestRequest::SetDomainPort(const string& _domainPort)
{
    m_domainPort = _domainPort;
    m_domainPortHasBeenSet = true;
}

bool SendDspmCkafkaTestRequest::DomainPortHasBeenSet() const
{
    return m_domainPortHasBeenSet;
}

string SendDspmCkafkaTestRequest::GetUsername() const
{
    return m_username;
}

void SendDspmCkafkaTestRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool SendDspmCkafkaTestRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string SendDspmCkafkaTestRequest::GetPassword() const
{
    return m_password;
}

void SendDspmCkafkaTestRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool SendDspmCkafkaTestRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}


