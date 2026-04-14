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

#include <tencentcloud/tke/v20180525/model/ExternalNodePool.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ExternalNodePool::ExternalNodePool() :
    m_nodePoolIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_lifeStateHasBeenSet(false),
    m_clusterCIDRHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_runtimeConfigHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_taintsHasBeenSet(false),
    m_instanceAdvancedSettingsHasBeenSet(false),
    m_deletionProtectionHasBeenSet(false),
    m_nodeTypeHasBeenSet(false)
{
}

CoreInternalOutcome ExternalNodePool::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodePoolId") && !value["NodePoolId"].IsNull())
    {
        if (!value["NodePoolId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalNodePool.NodePoolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodePoolId = string(value["NodePoolId"].GetString());
        m_nodePoolIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalNodePool.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("LifeState") && !value["LifeState"].IsNull())
    {
        if (!value["LifeState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalNodePool.LifeState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeState = string(value["LifeState"].GetString());
        m_lifeStateHasBeenSet = true;
    }

    if (value.HasMember("ClusterCIDR") && !value["ClusterCIDR"].IsNull())
    {
        if (!value["ClusterCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalNodePool.ClusterCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterCIDR = string(value["ClusterCIDR"].GetString());
        m_clusterCIDRHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalNodePool.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("RuntimeConfig") && !value["RuntimeConfig"].IsNull())
    {
        if (!value["RuntimeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalNodePool.RuntimeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_runtimeConfig.Deserialize(value["RuntimeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_runtimeConfigHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExternalNodePool.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Label item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("Taints") && !value["Taints"].IsNull())
    {
        if (!value["Taints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExternalNodePool.Taints` is not array type"));

        const rapidjson::Value &tmpValue = value["Taints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Taint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taints.push_back(item);
        }
        m_taintsHasBeenSet = true;
    }

    if (value.HasMember("InstanceAdvancedSettings") && !value["InstanceAdvancedSettings"].IsNull())
    {
        if (!value["InstanceAdvancedSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalNodePool.InstanceAdvancedSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceAdvancedSettings.Deserialize(value["InstanceAdvancedSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceAdvancedSettingsHasBeenSet = true;
    }

    if (value.HasMember("DeletionProtection") && !value["DeletionProtection"].IsNull())
    {
        if (!value["DeletionProtection"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalNodePool.DeletionProtection` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deletionProtection = value["DeletionProtection"].GetBool();
        m_deletionProtectionHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalNodePool.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalNodePool::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodePoolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePoolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodePoolId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifeState.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_runtimeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taintsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Taints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taints.begin(); itr != m_taints.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceAdvancedSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAdvancedSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceAdvancedSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deletionProtection, allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

}


string ExternalNodePool::GetNodePoolId() const
{
    return m_nodePoolId;
}

void ExternalNodePool::SetNodePoolId(const string& _nodePoolId)
{
    m_nodePoolId = _nodePoolId;
    m_nodePoolIdHasBeenSet = true;
}

bool ExternalNodePool::NodePoolIdHasBeenSet() const
{
    return m_nodePoolIdHasBeenSet;
}

string ExternalNodePool::GetName() const
{
    return m_name;
}

void ExternalNodePool::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ExternalNodePool::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ExternalNodePool::GetLifeState() const
{
    return m_lifeState;
}

void ExternalNodePool::SetLifeState(const string& _lifeState)
{
    m_lifeState = _lifeState;
    m_lifeStateHasBeenSet = true;
}

bool ExternalNodePool::LifeStateHasBeenSet() const
{
    return m_lifeStateHasBeenSet;
}

string ExternalNodePool::GetClusterCIDR() const
{
    return m_clusterCIDR;
}

void ExternalNodePool::SetClusterCIDR(const string& _clusterCIDR)
{
    m_clusterCIDR = _clusterCIDR;
    m_clusterCIDRHasBeenSet = true;
}

bool ExternalNodePool::ClusterCIDRHasBeenSet() const
{
    return m_clusterCIDRHasBeenSet;
}

string ExternalNodePool::GetNetworkType() const
{
    return m_networkType;
}

void ExternalNodePool::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool ExternalNodePool::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

RuntimeConfig ExternalNodePool::GetRuntimeConfig() const
{
    return m_runtimeConfig;
}

void ExternalNodePool::SetRuntimeConfig(const RuntimeConfig& _runtimeConfig)
{
    m_runtimeConfig = _runtimeConfig;
    m_runtimeConfigHasBeenSet = true;
}

bool ExternalNodePool::RuntimeConfigHasBeenSet() const
{
    return m_runtimeConfigHasBeenSet;
}

vector<Label> ExternalNodePool::GetLabels() const
{
    return m_labels;
}

void ExternalNodePool::SetLabels(const vector<Label>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool ExternalNodePool::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<Taint> ExternalNodePool::GetTaints() const
{
    return m_taints;
}

void ExternalNodePool::SetTaints(const vector<Taint>& _taints)
{
    m_taints = _taints;
    m_taintsHasBeenSet = true;
}

bool ExternalNodePool::TaintsHasBeenSet() const
{
    return m_taintsHasBeenSet;
}

InstanceAdvancedSettings ExternalNodePool::GetInstanceAdvancedSettings() const
{
    return m_instanceAdvancedSettings;
}

void ExternalNodePool::SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings)
{
    m_instanceAdvancedSettings = _instanceAdvancedSettings;
    m_instanceAdvancedSettingsHasBeenSet = true;
}

bool ExternalNodePool::InstanceAdvancedSettingsHasBeenSet() const
{
    return m_instanceAdvancedSettingsHasBeenSet;
}

bool ExternalNodePool::GetDeletionProtection() const
{
    return m_deletionProtection;
}

void ExternalNodePool::SetDeletionProtection(const bool& _deletionProtection)
{
    m_deletionProtection = _deletionProtection;
    m_deletionProtectionHasBeenSet = true;
}

bool ExternalNodePool::DeletionProtectionHasBeenSet() const
{
    return m_deletionProtectionHasBeenSet;
}

string ExternalNodePool::GetNodeType() const
{
    return m_nodeType;
}

void ExternalNodePool::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool ExternalNodePool::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

