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

#include <tencentcloud/teo/v20220901/model/InferenceHardwareSpecification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

InferenceHardwareSpecification::InferenceHardwareSpecification() :
    m_specHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_cPUNumHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_gPUNumHasBeenSet(false),
    m_gPUMemSizeHasBeenSet(false)
{
}

CoreInternalOutcome InferenceHardwareSpecification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceHardwareSpecification.Spec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spec = string(value["Spec"].GetString());
        m_specHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceHardwareSpecification.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CPUNum") && !value["CPUNum"].IsNull())
    {
        if (!value["CPUNum"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceHardwareSpecification.CPUNum` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cPUNum = value["CPUNum"].GetDouble();
        m_cPUNumHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceHardwareSpecification.MemSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetInt64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("GPUNum") && !value["GPUNum"].IsNull())
    {
        if (!value["GPUNum"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceHardwareSpecification.GPUNum` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_gPUNum = value["GPUNum"].GetDouble();
        m_gPUNumHasBeenSet = true;
    }

    if (value.HasMember("GPUMemSize") && !value["GPUMemSize"].IsNull())
    {
        if (!value["GPUMemSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceHardwareSpecification.GPUMemSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gPUMemSize = value["GPUMemSize"].GetInt64();
        m_gPUMemSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceHardwareSpecification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spec.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

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

    if (m_gPUNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gPUNum, allocator);
    }

    if (m_gPUMemSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUMemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gPUMemSize, allocator);
    }

}


string InferenceHardwareSpecification::GetSpec() const
{
    return m_spec;
}

void InferenceHardwareSpecification::SetSpec(const string& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool InferenceHardwareSpecification::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

string InferenceHardwareSpecification::GetName() const
{
    return m_name;
}

void InferenceHardwareSpecification::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool InferenceHardwareSpecification::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

double InferenceHardwareSpecification::GetCPUNum() const
{
    return m_cPUNum;
}

void InferenceHardwareSpecification::SetCPUNum(const double& _cPUNum)
{
    m_cPUNum = _cPUNum;
    m_cPUNumHasBeenSet = true;
}

bool InferenceHardwareSpecification::CPUNumHasBeenSet() const
{
    return m_cPUNumHasBeenSet;
}

int64_t InferenceHardwareSpecification::GetMemSize() const
{
    return m_memSize;
}

void InferenceHardwareSpecification::SetMemSize(const int64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool InferenceHardwareSpecification::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

double InferenceHardwareSpecification::GetGPUNum() const
{
    return m_gPUNum;
}

void InferenceHardwareSpecification::SetGPUNum(const double& _gPUNum)
{
    m_gPUNum = _gPUNum;
    m_gPUNumHasBeenSet = true;
}

bool InferenceHardwareSpecification::GPUNumHasBeenSet() const
{
    return m_gPUNumHasBeenSet;
}

int64_t InferenceHardwareSpecification::GetGPUMemSize() const
{
    return m_gPUMemSize;
}

void InferenceHardwareSpecification::SetGPUMemSize(const int64_t& _gPUMemSize)
{
    m_gPUMemSize = _gPUMemSize;
    m_gPUMemSizeHasBeenSet = true;
}

bool InferenceHardwareSpecification::GPUMemSizeHasBeenSet() const
{
    return m_gPUMemSizeHasBeenSet;
}

