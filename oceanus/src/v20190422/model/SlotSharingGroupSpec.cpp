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

#include <tencentcloud/oceanus/v20190422/model/SlotSharingGroupSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

SlotSharingGroupSpec::SlotSharingGroupSpec() :
    m_cPUHasBeenSet(false),
    m_heapMemoryHasBeenSet(false),
    m_offHeapMemoryHasBeenSet(false),
    m_managedMemoryHasBeenSet(false)
{
}

CoreInternalOutcome SlotSharingGroupSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlotSharingGroupSpec.CPU` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetDouble();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("HeapMemory") && !value["HeapMemory"].IsNull())
    {
        if (!value["HeapMemory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlotSharingGroupSpec.HeapMemory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_heapMemory = string(value["HeapMemory"].GetString());
        m_heapMemoryHasBeenSet = true;
    }

    if (value.HasMember("OffHeapMemory") && !value["OffHeapMemory"].IsNull())
    {
        if (!value["OffHeapMemory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlotSharingGroupSpec.OffHeapMemory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offHeapMemory = string(value["OffHeapMemory"].GetString());
        m_offHeapMemoryHasBeenSet = true;
    }

    if (value.HasMember("ManagedMemory") && !value["ManagedMemory"].IsNull())
    {
        if (!value["ManagedMemory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlotSharingGroupSpec.ManagedMemory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managedMemory = string(value["ManagedMemory"].GetString());
        m_managedMemoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlotSharingGroupSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
    }

    if (m_heapMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeapMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_heapMemory.c_str(), allocator).Move(), allocator);
    }

    if (m_offHeapMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffHeapMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offHeapMemory.c_str(), allocator).Move(), allocator);
    }

    if (m_managedMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagedMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managedMemory.c_str(), allocator).Move(), allocator);
    }

}


double SlotSharingGroupSpec::GetCPU() const
{
    return m_cPU;
}

void SlotSharingGroupSpec::SetCPU(const double& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool SlotSharingGroupSpec::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

string SlotSharingGroupSpec::GetHeapMemory() const
{
    return m_heapMemory;
}

void SlotSharingGroupSpec::SetHeapMemory(const string& _heapMemory)
{
    m_heapMemory = _heapMemory;
    m_heapMemoryHasBeenSet = true;
}

bool SlotSharingGroupSpec::HeapMemoryHasBeenSet() const
{
    return m_heapMemoryHasBeenSet;
}

string SlotSharingGroupSpec::GetOffHeapMemory() const
{
    return m_offHeapMemory;
}

void SlotSharingGroupSpec::SetOffHeapMemory(const string& _offHeapMemory)
{
    m_offHeapMemory = _offHeapMemory;
    m_offHeapMemoryHasBeenSet = true;
}

bool SlotSharingGroupSpec::OffHeapMemoryHasBeenSet() const
{
    return m_offHeapMemoryHasBeenSet;
}

string SlotSharingGroupSpec::GetManagedMemory() const
{
    return m_managedMemory;
}

void SlotSharingGroupSpec::SetManagedMemory(const string& _managedMemory)
{
    m_managedMemory = _managedMemory;
    m_managedMemoryHasBeenSet = true;
}

bool SlotSharingGroupSpec::ManagedMemoryHasBeenSet() const
{
    return m_managedMemoryHasBeenSet;
}

