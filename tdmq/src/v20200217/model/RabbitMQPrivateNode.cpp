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

#include <tencentcloud/tdmq/v20200217/model/RabbitMQPrivateNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RabbitMQPrivateNode::RabbitMQPrivateNode() :
    m_nodeNameHasBeenSet(false),
    m_nodeStatusHasBeenSet(false),
    m_cPUUsageHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_diskUsageHasBeenSet(false),
    m_processNumberHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQPrivateNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQPrivateNode.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("NodeStatus") && !value["NodeStatus"].IsNull())
    {
        if (!value["NodeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQPrivateNode.NodeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeStatus = string(value["NodeStatus"].GetString());
        m_nodeStatusHasBeenSet = true;
    }

    if (value.HasMember("CPUUsage") && !value["CPUUsage"].IsNull())
    {
        if (!value["CPUUsage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQPrivateNode.CPUUsage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cPUUsage = string(value["CPUUsage"].GetString());
        m_cPUUsageHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQPrivateNode.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("DiskUsage") && !value["DiskUsage"].IsNull())
    {
        if (!value["DiskUsage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQPrivateNode.DiskUsage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskUsage = string(value["DiskUsage"].GetString());
        m_diskUsageHasBeenSet = true;
    }

    if (value.HasMember("ProcessNumber") && !value["ProcessNumber"].IsNull())
    {
        if (!value["ProcessNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQPrivateNode.ProcessNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_processNumber = value["ProcessNumber"].GetUint64();
        m_processNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQPrivateNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPUUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cPUUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_diskUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_processNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processNumber, allocator);
    }

}


string RabbitMQPrivateNode::GetNodeName() const
{
    return m_nodeName;
}

void RabbitMQPrivateNode::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool RabbitMQPrivateNode::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string RabbitMQPrivateNode::GetNodeStatus() const
{
    return m_nodeStatus;
}

void RabbitMQPrivateNode::SetNodeStatus(const string& _nodeStatus)
{
    m_nodeStatus = _nodeStatus;
    m_nodeStatusHasBeenSet = true;
}

bool RabbitMQPrivateNode::NodeStatusHasBeenSet() const
{
    return m_nodeStatusHasBeenSet;
}

string RabbitMQPrivateNode::GetCPUUsage() const
{
    return m_cPUUsage;
}

void RabbitMQPrivateNode::SetCPUUsage(const string& _cPUUsage)
{
    m_cPUUsage = _cPUUsage;
    m_cPUUsageHasBeenSet = true;
}

bool RabbitMQPrivateNode::CPUUsageHasBeenSet() const
{
    return m_cPUUsageHasBeenSet;
}

uint64_t RabbitMQPrivateNode::GetMemory() const
{
    return m_memory;
}

void RabbitMQPrivateNode::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool RabbitMQPrivateNode::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string RabbitMQPrivateNode::GetDiskUsage() const
{
    return m_diskUsage;
}

void RabbitMQPrivateNode::SetDiskUsage(const string& _diskUsage)
{
    m_diskUsage = _diskUsage;
    m_diskUsageHasBeenSet = true;
}

bool RabbitMQPrivateNode::DiskUsageHasBeenSet() const
{
    return m_diskUsageHasBeenSet;
}

uint64_t RabbitMQPrivateNode::GetProcessNumber() const
{
    return m_processNumber;
}

void RabbitMQPrivateNode::SetProcessNumber(const uint64_t& _processNumber)
{
    m_processNumber = _processNumber;
    m_processNumberHasBeenSet = true;
}

bool RabbitMQPrivateNode::ProcessNumberHasBeenSet() const
{
    return m_processNumberHasBeenSet;
}

