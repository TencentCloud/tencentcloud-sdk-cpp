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

#include <tencentcloud/tcss/v20201101/model/ClusterPodInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ClusterPodInfo::ClusterPodInfo() :
    m_podNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_nodeLanIPHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_workloadKindHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_restartsHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceCountHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_containerCountHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_workloadLabelsHasBeenSet(false),
    m_containerIdHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_hostIdHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_chargeCoresCntHasBeenSet(false)
{
}

CoreInternalOutcome ClusterPodInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PodIP") && !value["PodIP"].IsNull())
    {
        if (!value["PodIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.PodIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIP = string(value["PodIP"].GetString());
        m_podIPHasBeenSet = true;
    }

    if (value.HasMember("NodeLanIP") && !value["NodeLanIP"].IsNull())
    {
        if (!value["NodeLanIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.NodeLanIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeLanIP = string(value["NodeLanIP"].GetString());
        m_nodeLanIPHasBeenSet = true;
    }

    if (value.HasMember("WorkloadName") && !value["WorkloadName"].IsNull())
    {
        if (!value["WorkloadName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.WorkloadName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadName = string(value["WorkloadName"].GetString());
        m_workloadNameHasBeenSet = true;
    }

    if (value.HasMember("WorkloadKind") && !value["WorkloadKind"].IsNull())
    {
        if (!value["WorkloadKind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.WorkloadKind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadKind = string(value["WorkloadKind"].GetString());
        m_workloadKindHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.Age` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_age = string(value["Age"].GetString());
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Restarts") && !value["Restarts"].IsNull())
    {
        if (!value["Restarts"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.Restarts` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_restarts = value["Restarts"].GetUint64();
        m_restartsHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceCount") && !value["ServiceCount"].IsNull())
    {
        if (!value["ServiceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.ServiceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCount = value["ServiceCount"].GetUint64();
        m_serviceCountHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("ContainerCount") && !value["ContainerCount"].IsNull())
    {
        if (!value["ContainerCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.ContainerCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCount = value["ContainerCount"].GetUint64();
        m_containerCountHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.CPU` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetUint64();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.Labels` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labels = string(value["Labels"].GetString());
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("ClusterStatus") && !value["ClusterStatus"].IsNull())
    {
        if (!value["ClusterStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.ClusterStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = string(value["ClusterStatus"].GetString());
        m_clusterStatusHasBeenSet = true;
    }

    if (value.HasMember("WorkloadLabels") && !value["WorkloadLabels"].IsNull())
    {
        if (!value["WorkloadLabels"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.WorkloadLabels` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadLabels = string(value["WorkloadLabels"].GetString());
        m_workloadLabelsHasBeenSet = true;
    }

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("HostId") && !value["HostId"].IsNull())
    {
        if (!value["HostId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.HostId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostId = string(value["HostId"].GetString());
        m_hostIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("ChargeCoresCnt") && !value["ChargeCoresCnt"].IsNull())
    {
        if (!value["ChargeCoresCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodInfo.ChargeCoresCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeCoresCnt = value["ChargeCoresCnt"].GetUint64();
        m_chargeCoresCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterPodInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_podIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIP.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeLanIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeLanIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeLanIP.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadName.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadKind.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_age.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_restartsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Restarts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restarts, allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceCount, allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_containerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCount, allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labels.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadLabels.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeCoresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeCoresCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeCoresCnt, allocator);
    }

}


string ClusterPodInfo::GetPodName() const
{
    return m_podName;
}

void ClusterPodInfo::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool ClusterPodInfo::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string ClusterPodInfo::GetStatus() const
{
    return m_status;
}

void ClusterPodInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClusterPodInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ClusterPodInfo::GetPodIP() const
{
    return m_podIP;
}

void ClusterPodInfo::SetPodIP(const string& _podIP)
{
    m_podIP = _podIP;
    m_podIPHasBeenSet = true;
}

bool ClusterPodInfo::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string ClusterPodInfo::GetNodeLanIP() const
{
    return m_nodeLanIP;
}

void ClusterPodInfo::SetNodeLanIP(const string& _nodeLanIP)
{
    m_nodeLanIP = _nodeLanIP;
    m_nodeLanIPHasBeenSet = true;
}

bool ClusterPodInfo::NodeLanIPHasBeenSet() const
{
    return m_nodeLanIPHasBeenSet;
}

string ClusterPodInfo::GetWorkloadName() const
{
    return m_workloadName;
}

void ClusterPodInfo::SetWorkloadName(const string& _workloadName)
{
    m_workloadName = _workloadName;
    m_workloadNameHasBeenSet = true;
}

bool ClusterPodInfo::WorkloadNameHasBeenSet() const
{
    return m_workloadNameHasBeenSet;
}

string ClusterPodInfo::GetWorkloadKind() const
{
    return m_workloadKind;
}

void ClusterPodInfo::SetWorkloadKind(const string& _workloadKind)
{
    m_workloadKind = _workloadKind;
    m_workloadKindHasBeenSet = true;
}

bool ClusterPodInfo::WorkloadKindHasBeenSet() const
{
    return m_workloadKindHasBeenSet;
}

string ClusterPodInfo::GetClusterName() const
{
    return m_clusterName;
}

void ClusterPodInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ClusterPodInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ClusterPodInfo::GetClusterId() const
{
    return m_clusterId;
}

void ClusterPodInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterPodInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterPodInfo::GetNamespace() const
{
    return m_namespace;
}

void ClusterPodInfo::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ClusterPodInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ClusterPodInfo::GetRegion() const
{
    return m_region;
}

void ClusterPodInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ClusterPodInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ClusterPodInfo::GetAge() const
{
    return m_age;
}

void ClusterPodInfo::SetAge(const string& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool ClusterPodInfo::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

string ClusterPodInfo::GetStartTime() const
{
    return m_startTime;
}

void ClusterPodInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ClusterPodInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t ClusterPodInfo::GetRestarts() const
{
    return m_restarts;
}

void ClusterPodInfo::SetRestarts(const uint64_t& _restarts)
{
    m_restarts = _restarts;
    m_restartsHasBeenSet = true;
}

bool ClusterPodInfo::RestartsHasBeenSet() const
{
    return m_restartsHasBeenSet;
}

string ClusterPodInfo::GetServiceName() const
{
    return m_serviceName;
}

void ClusterPodInfo::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ClusterPodInfo::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

uint64_t ClusterPodInfo::GetServiceCount() const
{
    return m_serviceCount;
}

void ClusterPodInfo::SetServiceCount(const uint64_t& _serviceCount)
{
    m_serviceCount = _serviceCount;
    m_serviceCountHasBeenSet = true;
}

bool ClusterPodInfo::ServiceCountHasBeenSet() const
{
    return m_serviceCountHasBeenSet;
}

string ClusterPodInfo::GetContainerName() const
{
    return m_containerName;
}

void ClusterPodInfo::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool ClusterPodInfo::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

uint64_t ClusterPodInfo::GetContainerCount() const
{
    return m_containerCount;
}

void ClusterPodInfo::SetContainerCount(const uint64_t& _containerCount)
{
    m_containerCount = _containerCount;
    m_containerCountHasBeenSet = true;
}

bool ClusterPodInfo::ContainerCountHasBeenSet() const
{
    return m_containerCountHasBeenSet;
}

uint64_t ClusterPodInfo::GetCPU() const
{
    return m_cPU;
}

void ClusterPodInfo::SetCPU(const uint64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool ClusterPodInfo::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

uint64_t ClusterPodInfo::GetMemory() const
{
    return m_memory;
}

void ClusterPodInfo::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ClusterPodInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string ClusterPodInfo::GetLabels() const
{
    return m_labels;
}

void ClusterPodInfo::SetLabels(const string& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool ClusterPodInfo::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

string ClusterPodInfo::GetClusterStatus() const
{
    return m_clusterStatus;
}

void ClusterPodInfo::SetClusterStatus(const string& _clusterStatus)
{
    m_clusterStatus = _clusterStatus;
    m_clusterStatusHasBeenSet = true;
}

bool ClusterPodInfo::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

string ClusterPodInfo::GetWorkloadLabels() const
{
    return m_workloadLabels;
}

void ClusterPodInfo::SetWorkloadLabels(const string& _workloadLabels)
{
    m_workloadLabels = _workloadLabels;
    m_workloadLabelsHasBeenSet = true;
}

bool ClusterPodInfo::WorkloadLabelsHasBeenSet() const
{
    return m_workloadLabelsHasBeenSet;
}

string ClusterPodInfo::GetContainerId() const
{
    return m_containerId;
}

void ClusterPodInfo::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool ClusterPodInfo::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string ClusterPodInfo::GetHostName() const
{
    return m_hostName;
}

void ClusterPodInfo::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool ClusterPodInfo::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string ClusterPodInfo::GetHostId() const
{
    return m_hostId;
}

void ClusterPodInfo::SetHostId(const string& _hostId)
{
    m_hostId = _hostId;
    m_hostIdHasBeenSet = true;
}

bool ClusterPodInfo::HostIdHasBeenSet() const
{
    return m_hostIdHasBeenSet;
}

string ClusterPodInfo::GetClusterType() const
{
    return m_clusterType;
}

void ClusterPodInfo::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool ClusterPodInfo::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string ClusterPodInfo::GetNodeName() const
{
    return m_nodeName;
}

void ClusterPodInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool ClusterPodInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string ClusterPodInfo::GetNodeType() const
{
    return m_nodeType;
}

void ClusterPodInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool ClusterPodInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

uint64_t ClusterPodInfo::GetChargeCoresCnt() const
{
    return m_chargeCoresCnt;
}

void ClusterPodInfo::SetChargeCoresCnt(const uint64_t& _chargeCoresCnt)
{
    m_chargeCoresCnt = _chargeCoresCnt;
    m_chargeCoresCntHasBeenSet = true;
}

bool ClusterPodInfo::ChargeCoresCntHasBeenSet() const
{
    return m_chargeCoresCntHasBeenSet;
}

