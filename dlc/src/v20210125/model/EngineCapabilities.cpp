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

#include <tencentcloud/dlc/v20210125/model/EngineCapabilities.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

EngineCapabilities::EngineCapabilities() :
    m_gpuOptionalHasBeenSet(false),
    m_supportsParallelConfigHasBeenSet(false),
    m_supportsRemoteCodeHasBeenSet(false),
    m_gpuMemoryKeyHasBeenSet(false),
    m_parallelKeysHasBeenSet(false)
{
}

CoreInternalOutcome EngineCapabilities::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GpuOptional") && !value["GpuOptional"].IsNull())
    {
        if (!value["GpuOptional"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EngineCapabilities.GpuOptional` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_gpuOptional = value["GpuOptional"].GetBool();
        m_gpuOptionalHasBeenSet = true;
    }

    if (value.HasMember("SupportsParallelConfig") && !value["SupportsParallelConfig"].IsNull())
    {
        if (!value["SupportsParallelConfig"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EngineCapabilities.SupportsParallelConfig` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportsParallelConfig = value["SupportsParallelConfig"].GetBool();
        m_supportsParallelConfigHasBeenSet = true;
    }

    if (value.HasMember("SupportsRemoteCode") && !value["SupportsRemoteCode"].IsNull())
    {
        if (!value["SupportsRemoteCode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EngineCapabilities.SupportsRemoteCode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportsRemoteCode = value["SupportsRemoteCode"].GetBool();
        m_supportsRemoteCodeHasBeenSet = true;
    }

    if (value.HasMember("GpuMemoryKey") && !value["GpuMemoryKey"].IsNull())
    {
        if (!value["GpuMemoryKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineCapabilities.GpuMemoryKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuMemoryKey = string(value["GpuMemoryKey"].GetString());
        m_gpuMemoryKeyHasBeenSet = true;
    }

    if (value.HasMember("ParallelKeys") && !value["ParallelKeys"].IsNull())
    {
        if (!value["ParallelKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EngineCapabilities.ParallelKeys` is not array type"));

        const rapidjson::Value &tmpValue = value["ParallelKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParallelKeyMapping item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_parallelKeys.push_back(item);
        }
        m_parallelKeysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EngineCapabilities::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gpuOptionalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuOptional";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuOptional, allocator);
    }

    if (m_supportsParallelConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportsParallelConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportsParallelConfig, allocator);
    }

    if (m_supportsRemoteCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportsRemoteCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportsRemoteCode, allocator);
    }

    if (m_gpuMemoryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuMemoryKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuMemoryKey.c_str(), allocator).Move(), allocator);
    }

    if (m_parallelKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParallelKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_parallelKeys.begin(); itr != m_parallelKeys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool EngineCapabilities::GetGpuOptional() const
{
    return m_gpuOptional;
}

void EngineCapabilities::SetGpuOptional(const bool& _gpuOptional)
{
    m_gpuOptional = _gpuOptional;
    m_gpuOptionalHasBeenSet = true;
}

bool EngineCapabilities::GpuOptionalHasBeenSet() const
{
    return m_gpuOptionalHasBeenSet;
}

bool EngineCapabilities::GetSupportsParallelConfig() const
{
    return m_supportsParallelConfig;
}

void EngineCapabilities::SetSupportsParallelConfig(const bool& _supportsParallelConfig)
{
    m_supportsParallelConfig = _supportsParallelConfig;
    m_supportsParallelConfigHasBeenSet = true;
}

bool EngineCapabilities::SupportsParallelConfigHasBeenSet() const
{
    return m_supportsParallelConfigHasBeenSet;
}

bool EngineCapabilities::GetSupportsRemoteCode() const
{
    return m_supportsRemoteCode;
}

void EngineCapabilities::SetSupportsRemoteCode(const bool& _supportsRemoteCode)
{
    m_supportsRemoteCode = _supportsRemoteCode;
    m_supportsRemoteCodeHasBeenSet = true;
}

bool EngineCapabilities::SupportsRemoteCodeHasBeenSet() const
{
    return m_supportsRemoteCodeHasBeenSet;
}

string EngineCapabilities::GetGpuMemoryKey() const
{
    return m_gpuMemoryKey;
}

void EngineCapabilities::SetGpuMemoryKey(const string& _gpuMemoryKey)
{
    m_gpuMemoryKey = _gpuMemoryKey;
    m_gpuMemoryKeyHasBeenSet = true;
}

bool EngineCapabilities::GpuMemoryKeyHasBeenSet() const
{
    return m_gpuMemoryKeyHasBeenSet;
}

vector<ParallelKeyMapping> EngineCapabilities::GetParallelKeys() const
{
    return m_parallelKeys;
}

void EngineCapabilities::SetParallelKeys(const vector<ParallelKeyMapping>& _parallelKeys)
{
    m_parallelKeys = _parallelKeys;
    m_parallelKeysHasBeenSet = true;
}

bool EngineCapabilities::ParallelKeysHasBeenSet() const
{
    return m_parallelKeysHasBeenSet;
}

