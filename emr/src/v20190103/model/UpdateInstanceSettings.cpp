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

#include <tencentcloud/emr/v20190103/model/UpdateInstanceSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

UpdateInstanceSettings::UpdateInstanceSettings() :
    m_memoryHasBeenSet(false),
    m_cPUCoresHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false)
{
}

CoreInternalOutcome UpdateInstanceSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateInstanceSettings.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("CPUCores") && !value["CPUCores"].IsNull())
    {
        if (!value["CPUCores"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateInstanceSettings.CPUCores` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cPUCores = value["CPUCores"].GetUint64();
        m_cPUCoresHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateInstanceSettings.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateInstanceSettings.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateInstanceSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_cPUCoresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPUCores";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPUCores, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t UpdateInstanceSettings::GetMemory() const
{
    return m_memory;
}

void UpdateInstanceSettings::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool UpdateInstanceSettings::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t UpdateInstanceSettings::GetCPUCores() const
{
    return m_cPUCores;
}

void UpdateInstanceSettings::SetCPUCores(const uint64_t& _cPUCores)
{
    m_cPUCores = _cPUCores;
    m_cPUCoresHasBeenSet = true;
}

bool UpdateInstanceSettings::CPUCoresHasBeenSet() const
{
    return m_cPUCoresHasBeenSet;
}

string UpdateInstanceSettings::GetResourceId() const
{
    return m_resourceId;
}

void UpdateInstanceSettings::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool UpdateInstanceSettings::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string UpdateInstanceSettings::GetInstanceType() const
{
    return m_instanceType;
}

void UpdateInstanceSettings::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool UpdateInstanceSettings::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

