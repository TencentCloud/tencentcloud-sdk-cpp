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

#include <tencentcloud/batch/v20170312/model/InstanceTypeOptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

InstanceTypeOptions::InstanceTypeOptions() :
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_instanceCategoriesHasBeenSet(false)
{
}

CoreInternalOutcome InstanceTypeOptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeOptions.CPU` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetUint64();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeOptions.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("InstanceCategories") && !value["InstanceCategories"].IsNull())
    {
        if (!value["InstanceCategories"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceTypeOptions.InstanceCategories` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceCategories"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceCategories.push_back((*itr).GetString());
        }
        m_instanceCategoriesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceTypeOptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_instanceCategoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCategories";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceCategories.begin(); itr != m_instanceCategories.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t InstanceTypeOptions::GetCPU() const
{
    return m_cPU;
}

void InstanceTypeOptions::SetCPU(const uint64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool InstanceTypeOptions::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

uint64_t InstanceTypeOptions::GetMemory() const
{
    return m_memory;
}

void InstanceTypeOptions::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InstanceTypeOptions::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

vector<string> InstanceTypeOptions::GetInstanceCategories() const
{
    return m_instanceCategories;
}

void InstanceTypeOptions::SetInstanceCategories(const vector<string>& _instanceCategories)
{
    m_instanceCategories = _instanceCategories;
    m_instanceCategoriesHasBeenSet = true;
}

bool InstanceTypeOptions::InstanceCategoriesHasBeenSet() const
{
    return m_instanceCategoriesHasBeenSet;
}

