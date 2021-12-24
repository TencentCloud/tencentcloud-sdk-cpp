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

#include <tencentcloud/iecp/v20210914/model/ApplicationBasicConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

ApplicationBasicConfig::ApplicationBasicConfig() :
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_workflowKindHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_gridUniqKeyHasBeenSet(false),
    m_nodeSelectorHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_availableReplicasHasBeenSet(false),
    m_enableServiceLinksHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationBasicConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationBasicConfig.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationBasicConfig.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("WorkflowKind") && !value["WorkflowKind"].IsNull())
    {
        if (!value["WorkflowKind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationBasicConfig.WorkflowKind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowKind = string(value["WorkflowKind"].GetString());
        m_workflowKindHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApplicationBasicConfig.Labels` is not array type"));

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

    if (value.HasMember("GridUniqKey") && !value["GridUniqKey"].IsNull())
    {
        if (!value["GridUniqKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationBasicConfig.GridUniqKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gridUniqKey = string(value["GridUniqKey"].GetString());
        m_gridUniqKeyHasBeenSet = true;
    }

    if (value.HasMember("NodeSelector") && !value["NodeSelector"].IsNull())
    {
        if (!value["NodeSelector"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApplicationBasicConfig.NodeSelector` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeSelector"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Label item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeSelector.push_back(item);
        }
        m_nodeSelectorHasBeenSet = true;
    }

    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationBasicConfig.Replicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetInt64();
        m_replicasHasBeenSet = true;
    }

    if (value.HasMember("AvailableReplicas") && !value["AvailableReplicas"].IsNull())
    {
        if (!value["AvailableReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationBasicConfig.AvailableReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableReplicas = value["AvailableReplicas"].GetInt64();
        m_availableReplicasHasBeenSet = true;
    }

    if (value.HasMember("EnableServiceLinks") && !value["EnableServiceLinks"].IsNull())
    {
        if (!value["EnableServiceLinks"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationBasicConfig.EnableServiceLinks` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableServiceLinks = value["EnableServiceLinks"].GetBool();
        m_enableServiceLinksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationBasicConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowKind.c_str(), allocator).Move(), allocator);
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

    if (m_gridUniqKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GridUniqKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gridUniqKey.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeSelector.begin(); itr != m_nodeSelector.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
    }

    if (m_availableReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableReplicas, allocator);
    }

    if (m_enableServiceLinksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableServiceLinks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableServiceLinks, allocator);
    }

}


string ApplicationBasicConfig::GetName() const
{
    return m_name;
}

void ApplicationBasicConfig::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ApplicationBasicConfig::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ApplicationBasicConfig::GetNamespace() const
{
    return m_namespace;
}

void ApplicationBasicConfig::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ApplicationBasicConfig::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ApplicationBasicConfig::GetWorkflowKind() const
{
    return m_workflowKind;
}

void ApplicationBasicConfig::SetWorkflowKind(const string& _workflowKind)
{
    m_workflowKind = _workflowKind;
    m_workflowKindHasBeenSet = true;
}

bool ApplicationBasicConfig::WorkflowKindHasBeenSet() const
{
    return m_workflowKindHasBeenSet;
}

vector<Label> ApplicationBasicConfig::GetLabels() const
{
    return m_labels;
}

void ApplicationBasicConfig::SetLabels(const vector<Label>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool ApplicationBasicConfig::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

string ApplicationBasicConfig::GetGridUniqKey() const
{
    return m_gridUniqKey;
}

void ApplicationBasicConfig::SetGridUniqKey(const string& _gridUniqKey)
{
    m_gridUniqKey = _gridUniqKey;
    m_gridUniqKeyHasBeenSet = true;
}

bool ApplicationBasicConfig::GridUniqKeyHasBeenSet() const
{
    return m_gridUniqKeyHasBeenSet;
}

vector<Label> ApplicationBasicConfig::GetNodeSelector() const
{
    return m_nodeSelector;
}

void ApplicationBasicConfig::SetNodeSelector(const vector<Label>& _nodeSelector)
{
    m_nodeSelector = _nodeSelector;
    m_nodeSelectorHasBeenSet = true;
}

bool ApplicationBasicConfig::NodeSelectorHasBeenSet() const
{
    return m_nodeSelectorHasBeenSet;
}

int64_t ApplicationBasicConfig::GetReplicas() const
{
    return m_replicas;
}

void ApplicationBasicConfig::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool ApplicationBasicConfig::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

int64_t ApplicationBasicConfig::GetAvailableReplicas() const
{
    return m_availableReplicas;
}

void ApplicationBasicConfig::SetAvailableReplicas(const int64_t& _availableReplicas)
{
    m_availableReplicas = _availableReplicas;
    m_availableReplicasHasBeenSet = true;
}

bool ApplicationBasicConfig::AvailableReplicasHasBeenSet() const
{
    return m_availableReplicasHasBeenSet;
}

bool ApplicationBasicConfig::GetEnableServiceLinks() const
{
    return m_enableServiceLinks;
}

void ApplicationBasicConfig::SetEnableServiceLinks(const bool& _enableServiceLinks)
{
    m_enableServiceLinks = _enableServiceLinks;
    m_enableServiceLinksHasBeenSet = true;
}

bool ApplicationBasicConfig::EnableServiceLinksHasBeenSet() const
{
    return m_enableServiceLinksHasBeenSet;
}

