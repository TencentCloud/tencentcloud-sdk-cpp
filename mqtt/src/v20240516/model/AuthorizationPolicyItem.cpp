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

#include <tencentcloud/mqtt/v20240516/model/AuthorizationPolicyItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

AuthorizationPolicyItem::AuthorizationPolicyItem() :
    m_idHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_effectHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_qosHasBeenSet(false),
    m_retainHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AuthorizationPolicyItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationPolicyItem.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationPolicyItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationPolicyItem.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationPolicyItem.Version` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetInt64();
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationPolicyItem.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Effect") && !value["Effect"].IsNull())
    {
        if (!value["Effect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationPolicyItem.Effect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effect = string(value["Effect"].GetString());
        m_effectHasBeenSet = true;
    }

    if (value.HasMember("Actions") && !value["Actions"].IsNull())
    {
        if (!value["Actions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationPolicyItem.Actions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actions = string(value["Actions"].GetString());
        m_actionsHasBeenSet = true;
    }

    if (value.HasMember("Resources") && !value["Resources"].IsNull())
    {
        if (!value["Resources"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationPolicyItem.Resources` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resources = string(value["Resources"].GetString());
        m_resourcesHasBeenSet = true;
    }

    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationPolicyItem.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationPolicyItem.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationPolicyItem.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Qos") && !value["Qos"].IsNull())
    {
        if (!value["Qos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationPolicyItem.Qos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qos = string(value["Qos"].GetString());
        m_qosHasBeenSet = true;
    }

    if (value.HasMember("Retain") && !value["Retain"].IsNull())
    {
        if (!value["Retain"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationPolicyItem.Retain` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retain = value["Retain"].GetInt64();
        m_retainHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationPolicyItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationPolicyItem.CreatedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = value["CreatedTime"].GetInt64();
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationPolicyItem.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthorizationPolicyItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_effectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Effect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effect.c_str(), allocator).Move(), allocator);
    }

    if (m_actionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Actions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actions.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resources.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_qosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qos.c_str(), allocator).Move(), allocator);
    }

    if (m_retainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retain, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


int64_t AuthorizationPolicyItem::GetId() const
{
    return m_id;
}

void AuthorizationPolicyItem::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AuthorizationPolicyItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AuthorizationPolicyItem::GetInstanceId() const
{
    return m_instanceId;
}

void AuthorizationPolicyItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AuthorizationPolicyItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AuthorizationPolicyItem::GetPolicyName() const
{
    return m_policyName;
}

void AuthorizationPolicyItem::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool AuthorizationPolicyItem::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

int64_t AuthorizationPolicyItem::GetVersion() const
{
    return m_version;
}

void AuthorizationPolicyItem::SetVersion(const int64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool AuthorizationPolicyItem::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

int64_t AuthorizationPolicyItem::GetPriority() const
{
    return m_priority;
}

void AuthorizationPolicyItem::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool AuthorizationPolicyItem::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string AuthorizationPolicyItem::GetEffect() const
{
    return m_effect;
}

void AuthorizationPolicyItem::SetEffect(const string& _effect)
{
    m_effect = _effect;
    m_effectHasBeenSet = true;
}

bool AuthorizationPolicyItem::EffectHasBeenSet() const
{
    return m_effectHasBeenSet;
}

string AuthorizationPolicyItem::GetActions() const
{
    return m_actions;
}

void AuthorizationPolicyItem::SetActions(const string& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool AuthorizationPolicyItem::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

string AuthorizationPolicyItem::GetResources() const
{
    return m_resources;
}

void AuthorizationPolicyItem::SetResources(const string& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool AuthorizationPolicyItem::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

string AuthorizationPolicyItem::GetClientId() const
{
    return m_clientId;
}

void AuthorizationPolicyItem::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool AuthorizationPolicyItem::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string AuthorizationPolicyItem::GetUsername() const
{
    return m_username;
}

void AuthorizationPolicyItem::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool AuthorizationPolicyItem::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string AuthorizationPolicyItem::GetIp() const
{
    return m_ip;
}

void AuthorizationPolicyItem::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool AuthorizationPolicyItem::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string AuthorizationPolicyItem::GetQos() const
{
    return m_qos;
}

void AuthorizationPolicyItem::SetQos(const string& _qos)
{
    m_qos = _qos;
    m_qosHasBeenSet = true;
}

bool AuthorizationPolicyItem::QosHasBeenSet() const
{
    return m_qosHasBeenSet;
}

int64_t AuthorizationPolicyItem::GetRetain() const
{
    return m_retain;
}

void AuthorizationPolicyItem::SetRetain(const int64_t& _retain)
{
    m_retain = _retain;
    m_retainHasBeenSet = true;
}

bool AuthorizationPolicyItem::RetainHasBeenSet() const
{
    return m_retainHasBeenSet;
}

string AuthorizationPolicyItem::GetRemark() const
{
    return m_remark;
}

void AuthorizationPolicyItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AuthorizationPolicyItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t AuthorizationPolicyItem::GetCreatedTime() const
{
    return m_createdTime;
}

void AuthorizationPolicyItem::SetCreatedTime(const int64_t& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool AuthorizationPolicyItem::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

int64_t AuthorizationPolicyItem::GetUpdateTime() const
{
    return m_updateTime;
}

void AuthorizationPolicyItem::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AuthorizationPolicyItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

