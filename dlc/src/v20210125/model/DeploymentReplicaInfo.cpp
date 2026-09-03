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

#include <tencentcloud/dlc/v20210125/model/DeploymentReplicaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DeploymentReplicaInfo::DeploymentReplicaInfo() :
    m_deploymentIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_restartCountHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_podIpHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_nodeIpHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_cpuRequestHasBeenSet(false),
    m_cpuLimitHasBeenSet(false),
    m_memoryRequestHasBeenSet(false),
    m_memoryLimitHasBeenSet(false),
    m_gpuCountHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome DeploymentReplicaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeploymentId") && !value["DeploymentId"].IsNull())
    {
        if (!value["DeploymentId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentReplicaInfo.DeploymentId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deploymentId = value["DeploymentId"].GetUint64();
        m_deploymentIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentReplicaInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentReplicaInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RestartCount") && !value["RestartCount"].IsNull())
    {
        if (!value["RestartCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentReplicaInfo.RestartCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restartCount = value["RestartCount"].GetInt64();
        m_restartCountHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentReplicaInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentReplicaInfo.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("PodIp") && !value["PodIp"].IsNull())
    {
        if (!value["PodIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentReplicaInfo.PodIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIp = string(value["PodIp"].GetString());
        m_podIpHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentReplicaInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("NodeIp") && !value["NodeIp"].IsNull())
    {
        if (!value["NodeIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentReplicaInfo.NodeIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeIp = string(value["NodeIp"].GetString());
        m_nodeIpHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentReplicaInfo.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("CpuRequest") && !value["CpuRequest"].IsNull())
    {
        if (!value["CpuRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentReplicaInfo.CpuRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuRequest = string(value["CpuRequest"].GetString());
        m_cpuRequestHasBeenSet = true;
    }

    if (value.HasMember("CpuLimit") && !value["CpuLimit"].IsNull())
    {
        if (!value["CpuLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentReplicaInfo.CpuLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuLimit = string(value["CpuLimit"].GetString());
        m_cpuLimitHasBeenSet = true;
    }

    if (value.HasMember("MemoryRequest") && !value["MemoryRequest"].IsNull())
    {
        if (!value["MemoryRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentReplicaInfo.MemoryRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memoryRequest = string(value["MemoryRequest"].GetString());
        m_memoryRequestHasBeenSet = true;
    }

    if (value.HasMember("MemoryLimit") && !value["MemoryLimit"].IsNull())
    {
        if (!value["MemoryLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentReplicaInfo.MemoryLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memoryLimit = string(value["MemoryLimit"].GetString());
        m_memoryLimitHasBeenSet = true;
    }

    if (value.HasMember("GpuCount") && !value["GpuCount"].IsNull())
    {
        if (!value["GpuCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentReplicaInfo.GpuCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuCount = value["GpuCount"].GetInt64();
        m_gpuCountHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentReplicaInfo.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentReplicaInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeploymentReplicaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deploymentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deploymentId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_restartCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restartCount, allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_podIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIp.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeIp.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memoryRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memoryLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuCount, allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

}


uint64_t DeploymentReplicaInfo::GetDeploymentId() const
{
    return m_deploymentId;
}

void DeploymentReplicaInfo::SetDeploymentId(const uint64_t& _deploymentId)
{
    m_deploymentId = _deploymentId;
    m_deploymentIdHasBeenSet = true;
}

bool DeploymentReplicaInfo::DeploymentIdHasBeenSet() const
{
    return m_deploymentIdHasBeenSet;
}

string DeploymentReplicaInfo::GetName() const
{
    return m_name;
}

void DeploymentReplicaInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DeploymentReplicaInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DeploymentReplicaInfo::GetStatus() const
{
    return m_status;
}

void DeploymentReplicaInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeploymentReplicaInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DeploymentReplicaInfo::GetRestartCount() const
{
    return m_restartCount;
}

void DeploymentReplicaInfo::SetRestartCount(const int64_t& _restartCount)
{
    m_restartCount = _restartCount;
    m_restartCountHasBeenSet = true;
}

bool DeploymentReplicaInfo::RestartCountHasBeenSet() const
{
    return m_restartCountHasBeenSet;
}

string DeploymentReplicaInfo::GetNodeType() const
{
    return m_nodeType;
}

void DeploymentReplicaInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool DeploymentReplicaInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

int64_t DeploymentReplicaInfo::GetStartTime() const
{
    return m_startTime;
}

void DeploymentReplicaInfo::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DeploymentReplicaInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DeploymentReplicaInfo::GetPodIp() const
{
    return m_podIp;
}

void DeploymentReplicaInfo::SetPodIp(const string& _podIp)
{
    m_podIp = _podIp;
    m_podIpHasBeenSet = true;
}

bool DeploymentReplicaInfo::PodIpHasBeenSet() const
{
    return m_podIpHasBeenSet;
}

string DeploymentReplicaInfo::GetNodeName() const
{
    return m_nodeName;
}

void DeploymentReplicaInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool DeploymentReplicaInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string DeploymentReplicaInfo::GetNodeIp() const
{
    return m_nodeIp;
}

void DeploymentReplicaInfo::SetNodeIp(const string& _nodeIp)
{
    m_nodeIp = _nodeIp;
    m_nodeIpHasBeenSet = true;
}

bool DeploymentReplicaInfo::NodeIpHasBeenSet() const
{
    return m_nodeIpHasBeenSet;
}

string DeploymentReplicaInfo::GetNamespace() const
{
    return m_namespace;
}

void DeploymentReplicaInfo::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DeploymentReplicaInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string DeploymentReplicaInfo::GetCpuRequest() const
{
    return m_cpuRequest;
}

void DeploymentReplicaInfo::SetCpuRequest(const string& _cpuRequest)
{
    m_cpuRequest = _cpuRequest;
    m_cpuRequestHasBeenSet = true;
}

bool DeploymentReplicaInfo::CpuRequestHasBeenSet() const
{
    return m_cpuRequestHasBeenSet;
}

string DeploymentReplicaInfo::GetCpuLimit() const
{
    return m_cpuLimit;
}

void DeploymentReplicaInfo::SetCpuLimit(const string& _cpuLimit)
{
    m_cpuLimit = _cpuLimit;
    m_cpuLimitHasBeenSet = true;
}

bool DeploymentReplicaInfo::CpuLimitHasBeenSet() const
{
    return m_cpuLimitHasBeenSet;
}

string DeploymentReplicaInfo::GetMemoryRequest() const
{
    return m_memoryRequest;
}

void DeploymentReplicaInfo::SetMemoryRequest(const string& _memoryRequest)
{
    m_memoryRequest = _memoryRequest;
    m_memoryRequestHasBeenSet = true;
}

bool DeploymentReplicaInfo::MemoryRequestHasBeenSet() const
{
    return m_memoryRequestHasBeenSet;
}

string DeploymentReplicaInfo::GetMemoryLimit() const
{
    return m_memoryLimit;
}

void DeploymentReplicaInfo::SetMemoryLimit(const string& _memoryLimit)
{
    m_memoryLimit = _memoryLimit;
    m_memoryLimitHasBeenSet = true;
}

bool DeploymentReplicaInfo::MemoryLimitHasBeenSet() const
{
    return m_memoryLimitHasBeenSet;
}

int64_t DeploymentReplicaInfo::GetGpuCount() const
{
    return m_gpuCount;
}

void DeploymentReplicaInfo::SetGpuCount(const int64_t& _gpuCount)
{
    m_gpuCount = _gpuCount;
    m_gpuCountHasBeenSet = true;
}

bool DeploymentReplicaInfo::GpuCountHasBeenSet() const
{
    return m_gpuCountHasBeenSet;
}

string DeploymentReplicaInfo::GetImage() const
{
    return m_image;
}

void DeploymentReplicaInfo::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool DeploymentReplicaInfo::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

int64_t DeploymentReplicaInfo::GetCreateTime() const
{
    return m_createTime;
}

void DeploymentReplicaInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DeploymentReplicaInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

