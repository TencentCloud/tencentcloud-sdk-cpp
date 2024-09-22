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

#include <tencentcloud/mqtt/v20240516/model/ModifyAuthorizationPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

ModifyAuthorizationPolicyRequest::ModifyAuthorizationPolicyRequest() :
    m_idHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyVersionHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_effectHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_retainHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_qosHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string ModifyAuthorizationPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

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

    if (m_retainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retain, allocator);
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

    if (m_qosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qos.c_str(), allocator).Move(), allocator);
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


int64_t ModifyAuthorizationPolicyRequest::GetId() const
{
    return m_id;
}

void ModifyAuthorizationPolicyRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyAuthorizationPolicyRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyAuthorizationPolicyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyAuthorizationPolicyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyAuthorizationPolicyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyAuthorizationPolicyRequest::GetPolicyName() const
{
    return m_policyName;
}

void ModifyAuthorizationPolicyRequest::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool ModifyAuthorizationPolicyRequest::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

int64_t ModifyAuthorizationPolicyRequest::GetPolicyVersion() const
{
    return m_policyVersion;
}

void ModifyAuthorizationPolicyRequest::SetPolicyVersion(const int64_t& _policyVersion)
{
    m_policyVersion = _policyVersion;
    m_policyVersionHasBeenSet = true;
}

bool ModifyAuthorizationPolicyRequest::PolicyVersionHasBeenSet() const
{
    return m_policyVersionHasBeenSet;
}

int64_t ModifyAuthorizationPolicyRequest::GetPriority() const
{
    return m_priority;
}

void ModifyAuthorizationPolicyRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool ModifyAuthorizationPolicyRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string ModifyAuthorizationPolicyRequest::GetEffect() const
{
    return m_effect;
}

void ModifyAuthorizationPolicyRequest::SetEffect(const string& _effect)
{
    m_effect = _effect;
    m_effectHasBeenSet = true;
}

bool ModifyAuthorizationPolicyRequest::EffectHasBeenSet() const
{
    return m_effectHasBeenSet;
}

string ModifyAuthorizationPolicyRequest::GetActions() const
{
    return m_actions;
}

void ModifyAuthorizationPolicyRequest::SetActions(const string& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool ModifyAuthorizationPolicyRequest::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

string ModifyAuthorizationPolicyRequest::GetResources() const
{
    return m_resources;
}

void ModifyAuthorizationPolicyRequest::SetResources(const string& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool ModifyAuthorizationPolicyRequest::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

string ModifyAuthorizationPolicyRequest::GetUsername() const
{
    return m_username;
}

void ModifyAuthorizationPolicyRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool ModifyAuthorizationPolicyRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

int64_t ModifyAuthorizationPolicyRequest::GetRetain() const
{
    return m_retain;
}

void ModifyAuthorizationPolicyRequest::SetRetain(const int64_t& _retain)
{
    m_retain = _retain;
    m_retainHasBeenSet = true;
}

bool ModifyAuthorizationPolicyRequest::RetainHasBeenSet() const
{
    return m_retainHasBeenSet;
}

string ModifyAuthorizationPolicyRequest::GetClientId() const
{
    return m_clientId;
}

void ModifyAuthorizationPolicyRequest::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool ModifyAuthorizationPolicyRequest::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string ModifyAuthorizationPolicyRequest::GetIp() const
{
    return m_ip;
}

void ModifyAuthorizationPolicyRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool ModifyAuthorizationPolicyRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string ModifyAuthorizationPolicyRequest::GetQos() const
{
    return m_qos;
}

void ModifyAuthorizationPolicyRequest::SetQos(const string& _qos)
{
    m_qos = _qos;
    m_qosHasBeenSet = true;
}

bool ModifyAuthorizationPolicyRequest::QosHasBeenSet() const
{
    return m_qosHasBeenSet;
}

string ModifyAuthorizationPolicyRequest::GetRemark() const
{
    return m_remark;
}

void ModifyAuthorizationPolicyRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyAuthorizationPolicyRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


