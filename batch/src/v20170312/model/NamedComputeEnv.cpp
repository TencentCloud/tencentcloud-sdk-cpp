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

#include <tencentcloud/batch/v20170312/model/NamedComputeEnv.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

NamedComputeEnv::NamedComputeEnv() :
    m_envNameHasBeenSet(false),
    m_desiredComputeNodeCountHasBeenSet(false),
    m_envDescriptionHasBeenSet(false),
    m_envTypeHasBeenSet(false),
    m_envDataHasBeenSet(false),
    m_mountDataDisksHasBeenSet(false),
    m_authenticationsHasBeenSet(false),
    m_inputMappingsHasBeenSet(false),
    m_agentRunningModeHasBeenSet(false),
    m_notificationsHasBeenSet(false),
    m_actionIfComputeNodeInactiveHasBeenSet(false),
    m_resourceMaxRetryCountHasBeenSet(false)
{
}

CoreInternalOutcome NamedComputeEnv::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvName") && !value["EnvName"].IsNull())
    {
        if (!value["EnvName"].IsString())
        {
            return CoreInternalOutcome(Error("response `NamedComputeEnv.EnvName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envName = string(value["EnvName"].GetString());
        m_envNameHasBeenSet = true;
    }

    if (value.HasMember("DesiredComputeNodeCount") && !value["DesiredComputeNodeCount"].IsNull())
    {
        if (!value["DesiredComputeNodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `NamedComputeEnv.DesiredComputeNodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredComputeNodeCount = value["DesiredComputeNodeCount"].GetInt64();
        m_desiredComputeNodeCountHasBeenSet = true;
    }

    if (value.HasMember("EnvDescription") && !value["EnvDescription"].IsNull())
    {
        if (!value["EnvDescription"].IsString())
        {
            return CoreInternalOutcome(Error("response `NamedComputeEnv.EnvDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envDescription = string(value["EnvDescription"].GetString());
        m_envDescriptionHasBeenSet = true;
    }

    if (value.HasMember("EnvType") && !value["EnvType"].IsNull())
    {
        if (!value["EnvType"].IsString())
        {
            return CoreInternalOutcome(Error("response `NamedComputeEnv.EnvType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envType = string(value["EnvType"].GetString());
        m_envTypeHasBeenSet = true;
    }

    if (value.HasMember("EnvData") && !value["EnvData"].IsNull())
    {
        if (!value["EnvData"].IsObject())
        {
            return CoreInternalOutcome(Error("response `NamedComputeEnv.EnvData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_envData.Deserialize(value["EnvData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_envDataHasBeenSet = true;
    }

    if (value.HasMember("MountDataDisks") && !value["MountDataDisks"].IsNull())
    {
        if (!value["MountDataDisks"].IsArray())
            return CoreInternalOutcome(Error("response `NamedComputeEnv.MountDataDisks` is not array type"));

        const Value &tmpValue = value["MountDataDisks"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MountDataDisk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mountDataDisks.push_back(item);
        }
        m_mountDataDisksHasBeenSet = true;
    }

    if (value.HasMember("Authentications") && !value["Authentications"].IsNull())
    {
        if (!value["Authentications"].IsArray())
            return CoreInternalOutcome(Error("response `NamedComputeEnv.Authentications` is not array type"));

        const Value &tmpValue = value["Authentications"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Authentication item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_authentications.push_back(item);
        }
        m_authenticationsHasBeenSet = true;
    }

    if (value.HasMember("InputMappings") && !value["InputMappings"].IsNull())
    {
        if (!value["InputMappings"].IsArray())
            return CoreInternalOutcome(Error("response `NamedComputeEnv.InputMappings` is not array type"));

        const Value &tmpValue = value["InputMappings"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InputMapping item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputMappings.push_back(item);
        }
        m_inputMappingsHasBeenSet = true;
    }

    if (value.HasMember("AgentRunningMode") && !value["AgentRunningMode"].IsNull())
    {
        if (!value["AgentRunningMode"].IsObject())
        {
            return CoreInternalOutcome(Error("response `NamedComputeEnv.AgentRunningMode` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_agentRunningMode.Deserialize(value["AgentRunningMode"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_agentRunningModeHasBeenSet = true;
    }

    if (value.HasMember("Notifications") && !value["Notifications"].IsNull())
    {
        if (!value["Notifications"].IsObject())
        {
            return CoreInternalOutcome(Error("response `NamedComputeEnv.Notifications` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_notifications.Deserialize(value["Notifications"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_notificationsHasBeenSet = true;
    }

    if (value.HasMember("ActionIfComputeNodeInactive") && !value["ActionIfComputeNodeInactive"].IsNull())
    {
        if (!value["ActionIfComputeNodeInactive"].IsString())
        {
            return CoreInternalOutcome(Error("response `NamedComputeEnv.ActionIfComputeNodeInactive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionIfComputeNodeInactive = string(value["ActionIfComputeNodeInactive"].GetString());
        m_actionIfComputeNodeInactiveHasBeenSet = true;
    }

    if (value.HasMember("ResourceMaxRetryCount") && !value["ResourceMaxRetryCount"].IsNull())
    {
        if (!value["ResourceMaxRetryCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `NamedComputeEnv.ResourceMaxRetryCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceMaxRetryCount = value["ResourceMaxRetryCount"].GetInt64();
        m_resourceMaxRetryCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NamedComputeEnv::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_envNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_envName.c_str(), allocator).Move(), allocator);
    }

    if (m_desiredComputeNodeCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DesiredComputeNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredComputeNodeCount, allocator);
    }

    if (m_envDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_envDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_envTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_envType.c_str(), allocator).Move(), allocator);
    }

    if (m_envDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_envData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mountDataDisksHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MountDataDisks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mountDataDisks.begin(); itr != m_mountDataDisks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_authenticationsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Authentications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authentications.begin(); itr != m_authentications.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_inputMappingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InputMappings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputMappings.begin(); itr != m_inputMappings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_agentRunningModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AgentRunningMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_agentRunningMode.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_notificationsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Notifications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_notifications.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_actionIfComputeNodeInactiveHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ActionIfComputeNodeInactive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_actionIfComputeNodeInactive.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceMaxRetryCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceMaxRetryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceMaxRetryCount, allocator);
    }

}


string NamedComputeEnv::GetEnvName() const
{
    return m_envName;
}

void NamedComputeEnv::SetEnvName(const string& _envName)
{
    m_envName = _envName;
    m_envNameHasBeenSet = true;
}

bool NamedComputeEnv::EnvNameHasBeenSet() const
{
    return m_envNameHasBeenSet;
}

int64_t NamedComputeEnv::GetDesiredComputeNodeCount() const
{
    return m_desiredComputeNodeCount;
}

void NamedComputeEnv::SetDesiredComputeNodeCount(const int64_t& _desiredComputeNodeCount)
{
    m_desiredComputeNodeCount = _desiredComputeNodeCount;
    m_desiredComputeNodeCountHasBeenSet = true;
}

bool NamedComputeEnv::DesiredComputeNodeCountHasBeenSet() const
{
    return m_desiredComputeNodeCountHasBeenSet;
}

string NamedComputeEnv::GetEnvDescription() const
{
    return m_envDescription;
}

void NamedComputeEnv::SetEnvDescription(const string& _envDescription)
{
    m_envDescription = _envDescription;
    m_envDescriptionHasBeenSet = true;
}

bool NamedComputeEnv::EnvDescriptionHasBeenSet() const
{
    return m_envDescriptionHasBeenSet;
}

string NamedComputeEnv::GetEnvType() const
{
    return m_envType;
}

void NamedComputeEnv::SetEnvType(const string& _envType)
{
    m_envType = _envType;
    m_envTypeHasBeenSet = true;
}

bool NamedComputeEnv::EnvTypeHasBeenSet() const
{
    return m_envTypeHasBeenSet;
}

EnvData NamedComputeEnv::GetEnvData() const
{
    return m_envData;
}

void NamedComputeEnv::SetEnvData(const EnvData& _envData)
{
    m_envData = _envData;
    m_envDataHasBeenSet = true;
}

bool NamedComputeEnv::EnvDataHasBeenSet() const
{
    return m_envDataHasBeenSet;
}

vector<MountDataDisk> NamedComputeEnv::GetMountDataDisks() const
{
    return m_mountDataDisks;
}

void NamedComputeEnv::SetMountDataDisks(const vector<MountDataDisk>& _mountDataDisks)
{
    m_mountDataDisks = _mountDataDisks;
    m_mountDataDisksHasBeenSet = true;
}

bool NamedComputeEnv::MountDataDisksHasBeenSet() const
{
    return m_mountDataDisksHasBeenSet;
}

vector<Authentication> NamedComputeEnv::GetAuthentications() const
{
    return m_authentications;
}

void NamedComputeEnv::SetAuthentications(const vector<Authentication>& _authentications)
{
    m_authentications = _authentications;
    m_authenticationsHasBeenSet = true;
}

bool NamedComputeEnv::AuthenticationsHasBeenSet() const
{
    return m_authenticationsHasBeenSet;
}

vector<InputMapping> NamedComputeEnv::GetInputMappings() const
{
    return m_inputMappings;
}

void NamedComputeEnv::SetInputMappings(const vector<InputMapping>& _inputMappings)
{
    m_inputMappings = _inputMappings;
    m_inputMappingsHasBeenSet = true;
}

bool NamedComputeEnv::InputMappingsHasBeenSet() const
{
    return m_inputMappingsHasBeenSet;
}

AgentRunningMode NamedComputeEnv::GetAgentRunningMode() const
{
    return m_agentRunningMode;
}

void NamedComputeEnv::SetAgentRunningMode(const AgentRunningMode& _agentRunningMode)
{
    m_agentRunningMode = _agentRunningMode;
    m_agentRunningModeHasBeenSet = true;
}

bool NamedComputeEnv::AgentRunningModeHasBeenSet() const
{
    return m_agentRunningModeHasBeenSet;
}

Notification NamedComputeEnv::GetNotifications() const
{
    return m_notifications;
}

void NamedComputeEnv::SetNotifications(const Notification& _notifications)
{
    m_notifications = _notifications;
    m_notificationsHasBeenSet = true;
}

bool NamedComputeEnv::NotificationsHasBeenSet() const
{
    return m_notificationsHasBeenSet;
}

string NamedComputeEnv::GetActionIfComputeNodeInactive() const
{
    return m_actionIfComputeNodeInactive;
}

void NamedComputeEnv::SetActionIfComputeNodeInactive(const string& _actionIfComputeNodeInactive)
{
    m_actionIfComputeNodeInactive = _actionIfComputeNodeInactive;
    m_actionIfComputeNodeInactiveHasBeenSet = true;
}

bool NamedComputeEnv::ActionIfComputeNodeInactiveHasBeenSet() const
{
    return m_actionIfComputeNodeInactiveHasBeenSet;
}

int64_t NamedComputeEnv::GetResourceMaxRetryCount() const
{
    return m_resourceMaxRetryCount;
}

void NamedComputeEnv::SetResourceMaxRetryCount(const int64_t& _resourceMaxRetryCount)
{
    m_resourceMaxRetryCount = _resourceMaxRetryCount;
    m_resourceMaxRetryCountHasBeenSet = true;
}

bool NamedComputeEnv::ResourceMaxRetryCountHasBeenSet() const
{
    return m_resourceMaxRetryCountHasBeenSet;
}

