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

#include <tencentcloud/mqtt/v20240516/model/CreateAuthorizationPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

CreateAuthorizationPolicyRequest::CreateAuthorizationPolicyRequest() :
    m_instanceIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyVersionHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_effectHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_retainHasBeenSet(false),
    m_qosHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreateAuthorizationPolicyRequest::ToJsonString() const
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

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyVersion, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }

    if (m_effectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Effect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_effect.c_str(), allocator).Move(), allocator);
    }

    if (m_actionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Actions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_actions.c_str(), allocator).Move(), allocator);
    }

    if (m_retainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retain, allocator);
    }

    if (m_qosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qos.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resources.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
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


string CreateAuthorizationPolicyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateAuthorizationPolicyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateAuthorizationPolicyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateAuthorizationPolicyRequest::GetPolicyName() const
{
    return m_policyName;
}

void CreateAuthorizationPolicyRequest::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool CreateAuthorizationPolicyRequest::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

int64_t CreateAuthorizationPolicyRequest::GetPolicyVersion() const
{
    return m_policyVersion;
}

void CreateAuthorizationPolicyRequest::SetPolicyVersion(const int64_t& _policyVersion)
{
    m_policyVersion = _policyVersion;
    m_policyVersionHasBeenSet = true;
}

bool CreateAuthorizationPolicyRequest::PolicyVersionHasBeenSet() const
{
    return m_policyVersionHasBeenSet;
}

int64_t CreateAuthorizationPolicyRequest::GetPriority() const
{
    return m_priority;
}

void CreateAuthorizationPolicyRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CreateAuthorizationPolicyRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string CreateAuthorizationPolicyRequest::GetEffect() const
{
    return m_effect;
}

void CreateAuthorizationPolicyRequest::SetEffect(const string& _effect)
{
    m_effect = _effect;
    m_effectHasBeenSet = true;
}

bool CreateAuthorizationPolicyRequest::EffectHasBeenSet() const
{
    return m_effectHasBeenSet;
}

string CreateAuthorizationPolicyRequest::GetActions() const
{
    return m_actions;
}

void CreateAuthorizationPolicyRequest::SetActions(const string& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool CreateAuthorizationPolicyRequest::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

int64_t CreateAuthorizationPolicyRequest::GetRetain() const
{
    return m_retain;
}

void CreateAuthorizationPolicyRequest::SetRetain(const int64_t& _retain)
{
    m_retain = _retain;
    m_retainHasBeenSet = true;
}

bool CreateAuthorizationPolicyRequest::RetainHasBeenSet() const
{
    return m_retainHasBeenSet;
}

string CreateAuthorizationPolicyRequest::GetQos() const
{
    return m_qos;
}

void CreateAuthorizationPolicyRequest::SetQos(const string& _qos)
{
    m_qos = _qos;
    m_qosHasBeenSet = true;
}

bool CreateAuthorizationPolicyRequest::QosHasBeenSet() const
{
    return m_qosHasBeenSet;
}

string CreateAuthorizationPolicyRequest::GetResources() const
{
    return m_resources;
}

void CreateAuthorizationPolicyRequest::SetResources(const string& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool CreateAuthorizationPolicyRequest::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

string CreateAuthorizationPolicyRequest::GetUsername() const
{
    return m_username;
}

void CreateAuthorizationPolicyRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool CreateAuthorizationPolicyRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string CreateAuthorizationPolicyRequest::GetClientId() const
{
    return m_clientId;
}

void CreateAuthorizationPolicyRequest::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool CreateAuthorizationPolicyRequest::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string CreateAuthorizationPolicyRequest::GetIp() const
{
    return m_ip;
}

void CreateAuthorizationPolicyRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool CreateAuthorizationPolicyRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string CreateAuthorizationPolicyRequest::GetRemark() const
{
    return m_remark;
}

void CreateAuthorizationPolicyRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateAuthorizationPolicyRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


