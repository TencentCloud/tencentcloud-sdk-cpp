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

#include <tencentcloud/cloudstudio/v20210524/model/WorkspaceResourceDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

WorkspaceResourceDTO::WorkspaceResourceDTO() :
    m_cpuCoreNumberHasBeenSet(false),
    m_normalMemoryHasBeenSet(false),
    m_systemStorageHasBeenSet(false),
    m_userStorageHasBeenSet(false),
    m_gpuNumberHasBeenSet(false),
    m_gpuMemoryHasBeenSet(false)
{
}

CoreInternalOutcome WorkspaceResourceDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CpuCoreNumber") && !value["CpuCoreNumber"].IsNull())
    {
        if (!value["CpuCoreNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceResourceDTO.CpuCoreNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuCoreNumber = value["CpuCoreNumber"].GetUint64();
        m_cpuCoreNumberHasBeenSet = true;
    }

    if (value.HasMember("NormalMemory") && !value["NormalMemory"].IsNull())
    {
        if (!value["NormalMemory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceResourceDTO.NormalMemory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_normalMemory = value["NormalMemory"].GetUint64();
        m_normalMemoryHasBeenSet = true;
    }

    if (value.HasMember("SystemStorage") && !value["SystemStorage"].IsNull())
    {
        if (!value["SystemStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceResourceDTO.SystemStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_systemStorage = value["SystemStorage"].GetUint64();
        m_systemStorageHasBeenSet = true;
    }

    if (value.HasMember("UserStorage") && !value["UserStorage"].IsNull())
    {
        if (!value["UserStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceResourceDTO.UserStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userStorage = value["UserStorage"].GetUint64();
        m_userStorageHasBeenSet = true;
    }

    if (value.HasMember("GpuNumber") && !value["GpuNumber"].IsNull())
    {
        if (!value["GpuNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceResourceDTO.GpuNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuNumber = value["GpuNumber"].GetUint64();
        m_gpuNumberHasBeenSet = true;
    }

    if (value.HasMember("GpuMemory") && !value["GpuMemory"].IsNull())
    {
        if (!value["GpuMemory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceResourceDTO.GpuMemory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuMemory = value["GpuMemory"].GetUint64();
        m_gpuMemoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkspaceResourceDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cpuCoreNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuCoreNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuCoreNumber, allocator);
    }

    if (m_normalMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_normalMemory, allocator);
    }

    if (m_systemStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemStorage, allocator);
    }

    if (m_userStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userStorage, allocator);
    }

    if (m_gpuNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuNumber, allocator);
    }

    if (m_gpuMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuMemory, allocator);
    }

}


uint64_t WorkspaceResourceDTO::GetCpuCoreNumber() const
{
    return m_cpuCoreNumber;
}

void WorkspaceResourceDTO::SetCpuCoreNumber(const uint64_t& _cpuCoreNumber)
{
    m_cpuCoreNumber = _cpuCoreNumber;
    m_cpuCoreNumberHasBeenSet = true;
}

bool WorkspaceResourceDTO::CpuCoreNumberHasBeenSet() const
{
    return m_cpuCoreNumberHasBeenSet;
}

uint64_t WorkspaceResourceDTO::GetNormalMemory() const
{
    return m_normalMemory;
}

void WorkspaceResourceDTO::SetNormalMemory(const uint64_t& _normalMemory)
{
    m_normalMemory = _normalMemory;
    m_normalMemoryHasBeenSet = true;
}

bool WorkspaceResourceDTO::NormalMemoryHasBeenSet() const
{
    return m_normalMemoryHasBeenSet;
}

uint64_t WorkspaceResourceDTO::GetSystemStorage() const
{
    return m_systemStorage;
}

void WorkspaceResourceDTO::SetSystemStorage(const uint64_t& _systemStorage)
{
    m_systemStorage = _systemStorage;
    m_systemStorageHasBeenSet = true;
}

bool WorkspaceResourceDTO::SystemStorageHasBeenSet() const
{
    return m_systemStorageHasBeenSet;
}

uint64_t WorkspaceResourceDTO::GetUserStorage() const
{
    return m_userStorage;
}

void WorkspaceResourceDTO::SetUserStorage(const uint64_t& _userStorage)
{
    m_userStorage = _userStorage;
    m_userStorageHasBeenSet = true;
}

bool WorkspaceResourceDTO::UserStorageHasBeenSet() const
{
    return m_userStorageHasBeenSet;
}

uint64_t WorkspaceResourceDTO::GetGpuNumber() const
{
    return m_gpuNumber;
}

void WorkspaceResourceDTO::SetGpuNumber(const uint64_t& _gpuNumber)
{
    m_gpuNumber = _gpuNumber;
    m_gpuNumberHasBeenSet = true;
}

bool WorkspaceResourceDTO::GpuNumberHasBeenSet() const
{
    return m_gpuNumberHasBeenSet;
}

uint64_t WorkspaceResourceDTO::GetGpuMemory() const
{
    return m_gpuMemory;
}

void WorkspaceResourceDTO::SetGpuMemory(const uint64_t& _gpuMemory)
{
    m_gpuMemory = _gpuMemory;
    m_gpuMemoryHasBeenSet = true;
}

bool WorkspaceResourceDTO::GpuMemoryHasBeenSet() const
{
    return m_gpuMemoryHasBeenSet;
}

