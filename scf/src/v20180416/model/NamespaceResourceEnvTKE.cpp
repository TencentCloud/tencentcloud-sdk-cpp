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

#include <tencentcloud/scf/v20180416/model/NamespaceResourceEnvTKE.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

NamespaceResourceEnvTKE::NamespaceResourceEnvTKE() :
    m_clusterIDHasBeenSet(false),
    m_subnetIDHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_dataPathHasBeenSet(false),
    m_nodeSelectorHasBeenSet(false),
    m_tolerationsHasBeenSet(false),
    m_portHasBeenSet(false),
    m_podTemplatePatchHasBeenSet(false)
{
}

CoreInternalOutcome NamespaceResourceEnvTKE::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceResourceEnvTKE.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("SubnetID") && !value["SubnetID"].IsNull())
    {
        if (!value["SubnetID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceResourceEnvTKE.SubnetID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetID = string(value["SubnetID"].GetString());
        m_subnetIDHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceResourceEnvTKE.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("DataPath") && !value["DataPath"].IsNull())
    {
        if (!value["DataPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceResourceEnvTKE.DataPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataPath = string(value["DataPath"].GetString());
        m_dataPathHasBeenSet = true;
    }

    if (value.HasMember("NodeSelector") && !value["NodeSelector"].IsNull())
    {
        if (!value["NodeSelector"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NamespaceResourceEnvTKE.NodeSelector` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeSelector"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            K8SLabel item;
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

    if (value.HasMember("Tolerations") && !value["Tolerations"].IsNull())
    {
        if (!value["Tolerations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NamespaceResourceEnvTKE.Tolerations` is not array type"));

        const rapidjson::Value &tmpValue = value["Tolerations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            K8SToleration item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tolerations.push_back(item);
        }
        m_tolerationsHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceResourceEnvTKE.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("PodTemplatePatch") && !value["PodTemplatePatch"].IsNull())
    {
        if (!value["PodTemplatePatch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceResourceEnvTKE.PodTemplatePatch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podTemplatePatch = string(value["PodTemplatePatch"].GetString());
        m_podTemplatePatchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NamespaceResourceEnvTKE::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetID.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_dataPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataPath.c_str(), allocator).Move(), allocator);
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

    if (m_tolerationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tolerations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tolerations.begin(); itr != m_tolerations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_podTemplatePatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodTemplatePatch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podTemplatePatch.c_str(), allocator).Move(), allocator);
    }

}


string NamespaceResourceEnvTKE::GetClusterID() const
{
    return m_clusterID;
}

void NamespaceResourceEnvTKE::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool NamespaceResourceEnvTKE::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string NamespaceResourceEnvTKE::GetSubnetID() const
{
    return m_subnetID;
}

void NamespaceResourceEnvTKE::SetSubnetID(const string& _subnetID)
{
    m_subnetID = _subnetID;
    m_subnetIDHasBeenSet = true;
}

bool NamespaceResourceEnvTKE::SubnetIDHasBeenSet() const
{
    return m_subnetIDHasBeenSet;
}

string NamespaceResourceEnvTKE::GetNamespace() const
{
    return m_namespace;
}

void NamespaceResourceEnvTKE::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool NamespaceResourceEnvTKE::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string NamespaceResourceEnvTKE::GetDataPath() const
{
    return m_dataPath;
}

void NamespaceResourceEnvTKE::SetDataPath(const string& _dataPath)
{
    m_dataPath = _dataPath;
    m_dataPathHasBeenSet = true;
}

bool NamespaceResourceEnvTKE::DataPathHasBeenSet() const
{
    return m_dataPathHasBeenSet;
}

vector<K8SLabel> NamespaceResourceEnvTKE::GetNodeSelector() const
{
    return m_nodeSelector;
}

void NamespaceResourceEnvTKE::SetNodeSelector(const vector<K8SLabel>& _nodeSelector)
{
    m_nodeSelector = _nodeSelector;
    m_nodeSelectorHasBeenSet = true;
}

bool NamespaceResourceEnvTKE::NodeSelectorHasBeenSet() const
{
    return m_nodeSelectorHasBeenSet;
}

vector<K8SToleration> NamespaceResourceEnvTKE::GetTolerations() const
{
    return m_tolerations;
}

void NamespaceResourceEnvTKE::SetTolerations(const vector<K8SToleration>& _tolerations)
{
    m_tolerations = _tolerations;
    m_tolerationsHasBeenSet = true;
}

bool NamespaceResourceEnvTKE::TolerationsHasBeenSet() const
{
    return m_tolerationsHasBeenSet;
}

uint64_t NamespaceResourceEnvTKE::GetPort() const
{
    return m_port;
}

void NamespaceResourceEnvTKE::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool NamespaceResourceEnvTKE::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string NamespaceResourceEnvTKE::GetPodTemplatePatch() const
{
    return m_podTemplatePatch;
}

void NamespaceResourceEnvTKE::SetPodTemplatePatch(const string& _podTemplatePatch)
{
    m_podTemplatePatch = _podTemplatePatch;
    m_podTemplatePatchHasBeenSet = true;
}

bool NamespaceResourceEnvTKE::PodTemplatePatchHasBeenSet() const
{
    return m_podTemplatePatchHasBeenSet;
}

