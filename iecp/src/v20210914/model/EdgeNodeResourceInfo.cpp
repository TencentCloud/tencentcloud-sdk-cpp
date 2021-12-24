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

#include <tencentcloud/iecp/v20210914/model/EdgeNodeResourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

EdgeNodeResourceInfo::EdgeNodeResourceInfo() :
    m_allocatedCPUHasBeenSet(false),
    m_totalCPUHasBeenSet(false),
    m_allocatedMemoryHasBeenSet(false),
    m_totalMemoryHasBeenSet(false),
    m_allocatedGPUHasBeenSet(false),
    m_totalGPUHasBeenSet(false),
    m_availableCPUHasBeenSet(false),
    m_availableMemoryHasBeenSet(false),
    m_availableGPUHasBeenSet(false)
{
}

CoreInternalOutcome EdgeNodeResourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AllocatedCPU") && !value["AllocatedCPU"].IsNull())
    {
        if (!value["AllocatedCPU"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeResourceInfo.AllocatedCPU` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allocatedCPU = string(value["AllocatedCPU"].GetString());
        m_allocatedCPUHasBeenSet = true;
    }

    if (value.HasMember("TotalCPU") && !value["TotalCPU"].IsNull())
    {
        if (!value["TotalCPU"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeResourceInfo.TotalCPU` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCPU = string(value["TotalCPU"].GetString());
        m_totalCPUHasBeenSet = true;
    }

    if (value.HasMember("AllocatedMemory") && !value["AllocatedMemory"].IsNull())
    {
        if (!value["AllocatedMemory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeResourceInfo.AllocatedMemory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allocatedMemory = string(value["AllocatedMemory"].GetString());
        m_allocatedMemoryHasBeenSet = true;
    }

    if (value.HasMember("TotalMemory") && !value["TotalMemory"].IsNull())
    {
        if (!value["TotalMemory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeResourceInfo.TotalMemory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalMemory = string(value["TotalMemory"].GetString());
        m_totalMemoryHasBeenSet = true;
    }

    if (value.HasMember("AllocatedGPU") && !value["AllocatedGPU"].IsNull())
    {
        if (!value["AllocatedGPU"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeResourceInfo.AllocatedGPU` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allocatedGPU = string(value["AllocatedGPU"].GetString());
        m_allocatedGPUHasBeenSet = true;
    }

    if (value.HasMember("TotalGPU") && !value["TotalGPU"].IsNull())
    {
        if (!value["TotalGPU"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeResourceInfo.TotalGPU` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalGPU = string(value["TotalGPU"].GetString());
        m_totalGPUHasBeenSet = true;
    }

    if (value.HasMember("AvailableCPU") && !value["AvailableCPU"].IsNull())
    {
        if (!value["AvailableCPU"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeResourceInfo.AvailableCPU` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availableCPU = string(value["AvailableCPU"].GetString());
        m_availableCPUHasBeenSet = true;
    }

    if (value.HasMember("AvailableMemory") && !value["AvailableMemory"].IsNull())
    {
        if (!value["AvailableMemory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeResourceInfo.AvailableMemory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availableMemory = string(value["AvailableMemory"].GetString());
        m_availableMemoryHasBeenSet = true;
    }

    if (value.HasMember("AvailableGPU") && !value["AvailableGPU"].IsNull())
    {
        if (!value["AvailableGPU"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeResourceInfo.AvailableGPU` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availableGPU = string(value["AvailableGPU"].GetString());
        m_availableGPUHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeNodeResourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_allocatedCPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocatedCPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allocatedCPU.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCPU.c_str(), allocator).Move(), allocator);
    }

    if (m_allocatedMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocatedMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allocatedMemory.c_str(), allocator).Move(), allocator);
    }

    if (m_totalMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalMemory.c_str(), allocator).Move(), allocator);
    }

    if (m_allocatedGPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocatedGPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allocatedGPU.c_str(), allocator).Move(), allocator);
    }

    if (m_totalGPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalGPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalGPU.c_str(), allocator).Move(), allocator);
    }

    if (m_availableCPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableCPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_availableCPU.c_str(), allocator).Move(), allocator);
    }

    if (m_availableMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_availableMemory.c_str(), allocator).Move(), allocator);
    }

    if (m_availableGPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableGPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_availableGPU.c_str(), allocator).Move(), allocator);
    }

}


string EdgeNodeResourceInfo::GetAllocatedCPU() const
{
    return m_allocatedCPU;
}

void EdgeNodeResourceInfo::SetAllocatedCPU(const string& _allocatedCPU)
{
    m_allocatedCPU = _allocatedCPU;
    m_allocatedCPUHasBeenSet = true;
}

bool EdgeNodeResourceInfo::AllocatedCPUHasBeenSet() const
{
    return m_allocatedCPUHasBeenSet;
}

string EdgeNodeResourceInfo::GetTotalCPU() const
{
    return m_totalCPU;
}

void EdgeNodeResourceInfo::SetTotalCPU(const string& _totalCPU)
{
    m_totalCPU = _totalCPU;
    m_totalCPUHasBeenSet = true;
}

bool EdgeNodeResourceInfo::TotalCPUHasBeenSet() const
{
    return m_totalCPUHasBeenSet;
}

string EdgeNodeResourceInfo::GetAllocatedMemory() const
{
    return m_allocatedMemory;
}

void EdgeNodeResourceInfo::SetAllocatedMemory(const string& _allocatedMemory)
{
    m_allocatedMemory = _allocatedMemory;
    m_allocatedMemoryHasBeenSet = true;
}

bool EdgeNodeResourceInfo::AllocatedMemoryHasBeenSet() const
{
    return m_allocatedMemoryHasBeenSet;
}

string EdgeNodeResourceInfo::GetTotalMemory() const
{
    return m_totalMemory;
}

void EdgeNodeResourceInfo::SetTotalMemory(const string& _totalMemory)
{
    m_totalMemory = _totalMemory;
    m_totalMemoryHasBeenSet = true;
}

bool EdgeNodeResourceInfo::TotalMemoryHasBeenSet() const
{
    return m_totalMemoryHasBeenSet;
}

string EdgeNodeResourceInfo::GetAllocatedGPU() const
{
    return m_allocatedGPU;
}

void EdgeNodeResourceInfo::SetAllocatedGPU(const string& _allocatedGPU)
{
    m_allocatedGPU = _allocatedGPU;
    m_allocatedGPUHasBeenSet = true;
}

bool EdgeNodeResourceInfo::AllocatedGPUHasBeenSet() const
{
    return m_allocatedGPUHasBeenSet;
}

string EdgeNodeResourceInfo::GetTotalGPU() const
{
    return m_totalGPU;
}

void EdgeNodeResourceInfo::SetTotalGPU(const string& _totalGPU)
{
    m_totalGPU = _totalGPU;
    m_totalGPUHasBeenSet = true;
}

bool EdgeNodeResourceInfo::TotalGPUHasBeenSet() const
{
    return m_totalGPUHasBeenSet;
}

string EdgeNodeResourceInfo::GetAvailableCPU() const
{
    return m_availableCPU;
}

void EdgeNodeResourceInfo::SetAvailableCPU(const string& _availableCPU)
{
    m_availableCPU = _availableCPU;
    m_availableCPUHasBeenSet = true;
}

bool EdgeNodeResourceInfo::AvailableCPUHasBeenSet() const
{
    return m_availableCPUHasBeenSet;
}

string EdgeNodeResourceInfo::GetAvailableMemory() const
{
    return m_availableMemory;
}

void EdgeNodeResourceInfo::SetAvailableMemory(const string& _availableMemory)
{
    m_availableMemory = _availableMemory;
    m_availableMemoryHasBeenSet = true;
}

bool EdgeNodeResourceInfo::AvailableMemoryHasBeenSet() const
{
    return m_availableMemoryHasBeenSet;
}

string EdgeNodeResourceInfo::GetAvailableGPU() const
{
    return m_availableGPU;
}

void EdgeNodeResourceInfo::SetAvailableGPU(const string& _availableGPU)
{
    m_availableGPU = _availableGPU;
    m_availableGPUHasBeenSet = true;
}

bool EdgeNodeResourceInfo::AvailableGPUHasBeenSet() const
{
    return m_availableGPUHasBeenSet;
}

