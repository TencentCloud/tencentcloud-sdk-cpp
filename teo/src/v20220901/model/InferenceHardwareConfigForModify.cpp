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

#include <tencentcloud/teo/v20220901/model/InferenceHardwareConfigForModify.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

InferenceHardwareConfigForModify::InferenceHardwareConfigForModify() :
    m_cPUNumHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_diskSizeHasBeenSet(false)
{
}

CoreInternalOutcome InferenceHardwareConfigForModify::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CPUNum") && !value["CPUNum"].IsNull())
    {
        if (!value["CPUNum"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceHardwareConfigForModify.CPUNum` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cPUNum = value["CPUNum"].GetDouble();
        m_cPUNumHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceHardwareConfigForModify.MemSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetInt64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceHardwareConfigForModify.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceHardwareConfigForModify::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cPUNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPUNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPUNum, allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memSize, allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

}


double InferenceHardwareConfigForModify::GetCPUNum() const
{
    return m_cPUNum;
}

void InferenceHardwareConfigForModify::SetCPUNum(const double& _cPUNum)
{
    m_cPUNum = _cPUNum;
    m_cPUNumHasBeenSet = true;
}

bool InferenceHardwareConfigForModify::CPUNumHasBeenSet() const
{
    return m_cPUNumHasBeenSet;
}

int64_t InferenceHardwareConfigForModify::GetMemSize() const
{
    return m_memSize;
}

void InferenceHardwareConfigForModify::SetMemSize(const int64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool InferenceHardwareConfigForModify::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

int64_t InferenceHardwareConfigForModify::GetDiskSize() const
{
    return m_diskSize;
}

void InferenceHardwareConfigForModify::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool InferenceHardwareConfigForModify::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

