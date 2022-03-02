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

#include <tencentcloud/tdcpg/v20211118/model/ModifyClusterInstancesSpecRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdcpg::V20211118::Model;
using namespace std;

ModifyClusterInstancesSpecRequest::ModifyClusterInstancesSpecRequest() :
    m_clusterIdHasBeenSet(false),
    m_instanceIdSetHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_operationTimingHasBeenSet(false)
{
}

string ModifyClusterInstancesSpecRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdSet.begin(); itr != m_instanceIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cPU, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_operationTimingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationTiming";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationTiming.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterInstancesSpecRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterInstancesSpecRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterInstancesSpecRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> ModifyClusterInstancesSpecRequest::GetInstanceIdSet() const
{
    return m_instanceIdSet;
}

void ModifyClusterInstancesSpecRequest::SetInstanceIdSet(const vector<string>& _instanceIdSet)
{
    m_instanceIdSet = _instanceIdSet;
    m_instanceIdSetHasBeenSet = true;
}

bool ModifyClusterInstancesSpecRequest::InstanceIdSetHasBeenSet() const
{
    return m_instanceIdSetHasBeenSet;
}

uint64_t ModifyClusterInstancesSpecRequest::GetCPU() const
{
    return m_cPU;
}

void ModifyClusterInstancesSpecRequest::SetCPU(const uint64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool ModifyClusterInstancesSpecRequest::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

uint64_t ModifyClusterInstancesSpecRequest::GetMemory() const
{
    return m_memory;
}

void ModifyClusterInstancesSpecRequest::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ModifyClusterInstancesSpecRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string ModifyClusterInstancesSpecRequest::GetOperationTiming() const
{
    return m_operationTiming;
}

void ModifyClusterInstancesSpecRequest::SetOperationTiming(const string& _operationTiming)
{
    m_operationTiming = _operationTiming;
    m_operationTimingHasBeenSet = true;
}

bool ModifyClusterInstancesSpecRequest::OperationTimingHasBeenSet() const
{
    return m_operationTimingHasBeenSet;
}


