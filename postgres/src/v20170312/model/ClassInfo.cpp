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

#include <tencentcloud/postgres/v20170312/model/ClassInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ClassInfo::ClassInfo() :
    m_specCodeHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_maxStorageHasBeenSet(false),
    m_minStorageHasBeenSet(false),
    m_qPSHasBeenSet(false)
{
}

CoreInternalOutcome ClassInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpecCode") && !value["SpecCode"].IsNull())
    {
        if (!value["SpecCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassInfo.SpecCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specCode = string(value["SpecCode"].GetString());
        m_specCodeHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassInfo.CPU` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetUint64();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassInfo.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("MaxStorage") && !value["MaxStorage"].IsNull())
    {
        if (!value["MaxStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassInfo.MaxStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorage = value["MaxStorage"].GetUint64();
        m_maxStorageHasBeenSet = true;
    }

    if (value.HasMember("MinStorage") && !value["MinStorage"].IsNull())
    {
        if (!value["MinStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassInfo.MinStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minStorage = value["MinStorage"].GetUint64();
        m_minStorageHasBeenSet = true;
    }

    if (value.HasMember("QPS") && !value["QPS"].IsNull())
    {
        if (!value["QPS"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassInfo.QPS` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qPS = value["QPS"].GetUint64();
        m_qPSHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClassInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specCode.c_str(), allocator).Move(), allocator);
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

    if (m_maxStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorage, allocator);
    }

    if (m_minStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minStorage, allocator);
    }

    if (m_qPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qPS, allocator);
    }

}


string ClassInfo::GetSpecCode() const
{
    return m_specCode;
}

void ClassInfo::SetSpecCode(const string& _specCode)
{
    m_specCode = _specCode;
    m_specCodeHasBeenSet = true;
}

bool ClassInfo::SpecCodeHasBeenSet() const
{
    return m_specCodeHasBeenSet;
}

uint64_t ClassInfo::GetCPU() const
{
    return m_cPU;
}

void ClassInfo::SetCPU(const uint64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool ClassInfo::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

uint64_t ClassInfo::GetMemory() const
{
    return m_memory;
}

void ClassInfo::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ClassInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t ClassInfo::GetMaxStorage() const
{
    return m_maxStorage;
}

void ClassInfo::SetMaxStorage(const uint64_t& _maxStorage)
{
    m_maxStorage = _maxStorage;
    m_maxStorageHasBeenSet = true;
}

bool ClassInfo::MaxStorageHasBeenSet() const
{
    return m_maxStorageHasBeenSet;
}

uint64_t ClassInfo::GetMinStorage() const
{
    return m_minStorage;
}

void ClassInfo::SetMinStorage(const uint64_t& _minStorage)
{
    m_minStorage = _minStorage;
    m_minStorageHasBeenSet = true;
}

bool ClassInfo::MinStorageHasBeenSet() const
{
    return m_minStorageHasBeenSet;
}

uint64_t ClassInfo::GetQPS() const
{
    return m_qPS;
}

void ClassInfo::SetQPS(const uint64_t& _qPS)
{
    m_qPS = _qPS;
    m_qPSHasBeenSet = true;
}

bool ClassInfo::QPSHasBeenSet() const
{
    return m_qPSHasBeenSet;
}

