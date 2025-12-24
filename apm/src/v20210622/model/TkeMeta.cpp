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

#include <tencentcloud/apm/v20210622/model/TkeMeta.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

TkeMeta::TkeMeta() :
    m_regionHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_deploymentHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_nodeIPHasBeenSet(false)
{
}

CoreInternalOutcome TkeMeta::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TkeMeta.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TkeMeta.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TkeMeta.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TkeMeta.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Deployment") && !value["Deployment"].IsNull())
    {
        if (!value["Deployment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TkeMeta.Deployment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployment = string(value["Deployment"].GetString());
        m_deploymentHasBeenSet = true;
    }

    if (value.HasMember("PodIP") && !value["PodIP"].IsNull())
    {
        if (!value["PodIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TkeMeta.PodIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIP = string(value["PodIP"].GetString());
        m_podIPHasBeenSet = true;
    }

    if (value.HasMember("NodeIP") && !value["NodeIP"].IsNull())
    {
        if (!value["NodeIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TkeMeta.NodeIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeIP = string(value["NodeIP"].GetString());
        m_nodeIPHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TkeMeta::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_deploymentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deployment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployment.c_str(), allocator).Move(), allocator);
    }

    if (m_podIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIP.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeIP.c_str(), allocator).Move(), allocator);
    }

}


string TkeMeta::GetRegion() const
{
    return m_region;
}

void TkeMeta::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool TkeMeta::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string TkeMeta::GetClusterID() const
{
    return m_clusterID;
}

void TkeMeta::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool TkeMeta::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string TkeMeta::GetPodName() const
{
    return m_podName;
}

void TkeMeta::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool TkeMeta::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string TkeMeta::GetNamespace() const
{
    return m_namespace;
}

void TkeMeta::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool TkeMeta::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string TkeMeta::GetDeployment() const
{
    return m_deployment;
}

void TkeMeta::SetDeployment(const string& _deployment)
{
    m_deployment = _deployment;
    m_deploymentHasBeenSet = true;
}

bool TkeMeta::DeploymentHasBeenSet() const
{
    return m_deploymentHasBeenSet;
}

string TkeMeta::GetPodIP() const
{
    return m_podIP;
}

void TkeMeta::SetPodIP(const string& _podIP)
{
    m_podIP = _podIP;
    m_podIPHasBeenSet = true;
}

bool TkeMeta::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string TkeMeta::GetNodeIP() const
{
    return m_nodeIP;
}

void TkeMeta::SetNodeIP(const string& _nodeIP)
{
    m_nodeIP = _nodeIP;
    m_nodeIPHasBeenSet = true;
}

bool TkeMeta::NodeIPHasBeenSet() const
{
    return m_nodeIPHasBeenSet;
}

