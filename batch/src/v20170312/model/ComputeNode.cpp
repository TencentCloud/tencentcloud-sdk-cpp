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

#include <tencentcloud/batch/v20170312/model/ComputeNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

ComputeNode::ComputeNode() :
    m_computeNodeIdHasBeenSet(false),
    m_computeNodeInstanceIdHasBeenSet(false),
    m_computeNodeStateHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_resourceCreatedTimeHasBeenSet(false),
    m_taskInstanceNumAvailableHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_publicIpAddressesHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceOriginHasBeenSet(false)
{
}

CoreInternalOutcome ComputeNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComputeNodeId") && !value["ComputeNodeId"].IsNull())
    {
        if (!value["ComputeNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeNode.ComputeNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeNodeId = string(value["ComputeNodeId"].GetString());
        m_computeNodeIdHasBeenSet = true;
    }

    if (value.HasMember("ComputeNodeInstanceId") && !value["ComputeNodeInstanceId"].IsNull())
    {
        if (!value["ComputeNodeInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeNode.ComputeNodeInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeNodeInstanceId = string(value["ComputeNodeInstanceId"].GetString());
        m_computeNodeInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("ComputeNodeState") && !value["ComputeNodeState"].IsNull())
    {
        if (!value["ComputeNodeState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeNode.ComputeNodeState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeNodeState = string(value["ComputeNodeState"].GetString());
        m_computeNodeStateHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeNode.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeNode.Mem` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetUint64();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("ResourceCreatedTime") && !value["ResourceCreatedTime"].IsNull())
    {
        if (!value["ResourceCreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeNode.ResourceCreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceCreatedTime = string(value["ResourceCreatedTime"].GetString());
        m_resourceCreatedTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskInstanceNumAvailable") && !value["TaskInstanceNumAvailable"].IsNull())
    {
        if (!value["TaskInstanceNumAvailable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeNode.TaskInstanceNumAvailable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskInstanceNumAvailable = value["TaskInstanceNumAvailable"].GetUint64();
        m_taskInstanceNumAvailableHasBeenSet = true;
    }

    if (value.HasMember("AgentVersion") && !value["AgentVersion"].IsNull())
    {
        if (!value["AgentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeNode.AgentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentVersion = string(value["AgentVersion"].GetString());
        m_agentVersionHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddresses") && !value["PrivateIpAddresses"].IsNull())
    {
        if (!value["PrivateIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComputeNode.PrivateIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateIpAddresses.push_back((*itr).GetString());
        }
        m_privateIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddresses") && !value["PublicIpAddresses"].IsNull())
    {
        if (!value["PublicIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComputeNode.PublicIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicIpAddresses.push_back((*itr).GetString());
        }
        m_publicIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeNode.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceOrigin") && !value["ResourceOrigin"].IsNull())
    {
        if (!value["ResourceOrigin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeNode.ResourceOrigin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceOrigin = string(value["ResourceOrigin"].GetString());
        m_resourceOriginHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComputeNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_computeNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_computeNodeInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeNodeInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeNodeInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_computeNodeStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeNodeState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeNodeState.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mem, allocator);
    }

    if (m_resourceCreatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceCreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceCreatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskInstanceNumAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInstanceNumAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskInstanceNumAvailable, allocator);
    }

    if (m_agentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privateIpAddresses.begin(); itr != m_privateIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_publicIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_publicIpAddresses.begin(); itr != m_publicIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceOrigin.c_str(), allocator).Move(), allocator);
    }

}


string ComputeNode::GetComputeNodeId() const
{
    return m_computeNodeId;
}

void ComputeNode::SetComputeNodeId(const string& _computeNodeId)
{
    m_computeNodeId = _computeNodeId;
    m_computeNodeIdHasBeenSet = true;
}

bool ComputeNode::ComputeNodeIdHasBeenSet() const
{
    return m_computeNodeIdHasBeenSet;
}

string ComputeNode::GetComputeNodeInstanceId() const
{
    return m_computeNodeInstanceId;
}

void ComputeNode::SetComputeNodeInstanceId(const string& _computeNodeInstanceId)
{
    m_computeNodeInstanceId = _computeNodeInstanceId;
    m_computeNodeInstanceIdHasBeenSet = true;
}

bool ComputeNode::ComputeNodeInstanceIdHasBeenSet() const
{
    return m_computeNodeInstanceIdHasBeenSet;
}

string ComputeNode::GetComputeNodeState() const
{
    return m_computeNodeState;
}

void ComputeNode::SetComputeNodeState(const string& _computeNodeState)
{
    m_computeNodeState = _computeNodeState;
    m_computeNodeStateHasBeenSet = true;
}

bool ComputeNode::ComputeNodeStateHasBeenSet() const
{
    return m_computeNodeStateHasBeenSet;
}

uint64_t ComputeNode::GetCpu() const
{
    return m_cpu;
}

void ComputeNode::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ComputeNode::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t ComputeNode::GetMem() const
{
    return m_mem;
}

void ComputeNode::SetMem(const uint64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool ComputeNode::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

string ComputeNode::GetResourceCreatedTime() const
{
    return m_resourceCreatedTime;
}

void ComputeNode::SetResourceCreatedTime(const string& _resourceCreatedTime)
{
    m_resourceCreatedTime = _resourceCreatedTime;
    m_resourceCreatedTimeHasBeenSet = true;
}

bool ComputeNode::ResourceCreatedTimeHasBeenSet() const
{
    return m_resourceCreatedTimeHasBeenSet;
}

uint64_t ComputeNode::GetTaskInstanceNumAvailable() const
{
    return m_taskInstanceNumAvailable;
}

void ComputeNode::SetTaskInstanceNumAvailable(const uint64_t& _taskInstanceNumAvailable)
{
    m_taskInstanceNumAvailable = _taskInstanceNumAvailable;
    m_taskInstanceNumAvailableHasBeenSet = true;
}

bool ComputeNode::TaskInstanceNumAvailableHasBeenSet() const
{
    return m_taskInstanceNumAvailableHasBeenSet;
}

string ComputeNode::GetAgentVersion() const
{
    return m_agentVersion;
}

void ComputeNode::SetAgentVersion(const string& _agentVersion)
{
    m_agentVersion = _agentVersion;
    m_agentVersionHasBeenSet = true;
}

bool ComputeNode::AgentVersionHasBeenSet() const
{
    return m_agentVersionHasBeenSet;
}

vector<string> ComputeNode::GetPrivateIpAddresses() const
{
    return m_privateIpAddresses;
}

void ComputeNode::SetPrivateIpAddresses(const vector<string>& _privateIpAddresses)
{
    m_privateIpAddresses = _privateIpAddresses;
    m_privateIpAddressesHasBeenSet = true;
}

bool ComputeNode::PrivateIpAddressesHasBeenSet() const
{
    return m_privateIpAddressesHasBeenSet;
}

vector<string> ComputeNode::GetPublicIpAddresses() const
{
    return m_publicIpAddresses;
}

void ComputeNode::SetPublicIpAddresses(const vector<string>& _publicIpAddresses)
{
    m_publicIpAddresses = _publicIpAddresses;
    m_publicIpAddressesHasBeenSet = true;
}

bool ComputeNode::PublicIpAddressesHasBeenSet() const
{
    return m_publicIpAddressesHasBeenSet;
}

string ComputeNode::GetResourceType() const
{
    return m_resourceType;
}

void ComputeNode::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ComputeNode::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ComputeNode::GetResourceOrigin() const
{
    return m_resourceOrigin;
}

void ComputeNode::SetResourceOrigin(const string& _resourceOrigin)
{
    m_resourceOrigin = _resourceOrigin;
    m_resourceOriginHasBeenSet = true;
}

bool ComputeNode::ResourceOriginHasBeenSet() const
{
    return m_resourceOriginHasBeenSet;
}

