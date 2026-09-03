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

#include <tencentcloud/dlc/v20210125/model/RecommendedAdvancedParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

RecommendedAdvancedParams::RecommendedAdvancedParams() :
    m_enableRemoteCodeHasBeenSet(false),
    m_gpuMemoryUtilizationHasBeenSet(false),
    m_tensorParallelSizeHasBeenSet(false),
    m_pipelineParallelSizeHasBeenSet(false),
    m_dataParallelSizeHasBeenSet(false),
    m_engineArgsHasBeenSet(false),
    m_envVarsHasBeenSet(false),
    m_rayOptionsHasBeenSet(false)
{
}

CoreInternalOutcome RecommendedAdvancedParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableRemoteCode") && !value["EnableRemoteCode"].IsNull())
    {
        if (!value["EnableRemoteCode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RecommendedAdvancedParams.EnableRemoteCode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableRemoteCode = value["EnableRemoteCode"].GetBool();
        m_enableRemoteCodeHasBeenSet = true;
    }

    if (value.HasMember("GpuMemoryUtilization") && !value["GpuMemoryUtilization"].IsNull())
    {
        if (!value["GpuMemoryUtilization"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecommendedAdvancedParams.GpuMemoryUtilization` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuMemoryUtilization = value["GpuMemoryUtilization"].GetInt64();
        m_gpuMemoryUtilizationHasBeenSet = true;
    }

    if (value.HasMember("TensorParallelSize") && !value["TensorParallelSize"].IsNull())
    {
        if (!value["TensorParallelSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecommendedAdvancedParams.TensorParallelSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tensorParallelSize = value["TensorParallelSize"].GetInt64();
        m_tensorParallelSizeHasBeenSet = true;
    }

    if (value.HasMember("PipelineParallelSize") && !value["PipelineParallelSize"].IsNull())
    {
        if (!value["PipelineParallelSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecommendedAdvancedParams.PipelineParallelSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pipelineParallelSize = value["PipelineParallelSize"].GetInt64();
        m_pipelineParallelSizeHasBeenSet = true;
    }

    if (value.HasMember("DataParallelSize") && !value["DataParallelSize"].IsNull())
    {
        if (!value["DataParallelSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecommendedAdvancedParams.DataParallelSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataParallelSize = value["DataParallelSize"].GetInt64();
        m_dataParallelSizeHasBeenSet = true;
    }

    if (value.HasMember("EngineArgs") && !value["EngineArgs"].IsNull())
    {
        if (!value["EngineArgs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecommendedAdvancedParams.EngineArgs` is not array type"));

        const rapidjson::Value &tmpValue = value["EngineArgs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecommendedKeyValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_engineArgs.push_back(item);
        }
        m_engineArgsHasBeenSet = true;
    }

    if (value.HasMember("EnvVars") && !value["EnvVars"].IsNull())
    {
        if (!value["EnvVars"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecommendedAdvancedParams.EnvVars` is not array type"));

        const rapidjson::Value &tmpValue = value["EnvVars"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecommendedKeyValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envVars.push_back(item);
        }
        m_envVarsHasBeenSet = true;
    }

    if (value.HasMember("RayOptions") && !value["RayOptions"].IsNull())
    {
        if (!value["RayOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecommendedAdvancedParams.RayOptions` is not array type"));

        const rapidjson::Value &tmpValue = value["RayOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecommendedKeyValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rayOptions.push_back(item);
        }
        m_rayOptionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecommendedAdvancedParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableRemoteCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRemoteCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableRemoteCode, allocator);
    }

    if (m_gpuMemoryUtilizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuMemoryUtilization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuMemoryUtilization, allocator);
    }

    if (m_tensorParallelSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TensorParallelSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tensorParallelSize, allocator);
    }

    if (m_pipelineParallelSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PipelineParallelSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pipelineParallelSize, allocator);
    }

    if (m_dataParallelSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataParallelSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataParallelSize, allocator);
    }

    if (m_engineArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_engineArgs.begin(); itr != m_engineArgs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_envVarsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvVars";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envVars.begin(); itr != m_envVars.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rayOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RayOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rayOptions.begin(); itr != m_rayOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool RecommendedAdvancedParams::GetEnableRemoteCode() const
{
    return m_enableRemoteCode;
}

void RecommendedAdvancedParams::SetEnableRemoteCode(const bool& _enableRemoteCode)
{
    m_enableRemoteCode = _enableRemoteCode;
    m_enableRemoteCodeHasBeenSet = true;
}

bool RecommendedAdvancedParams::EnableRemoteCodeHasBeenSet() const
{
    return m_enableRemoteCodeHasBeenSet;
}

int64_t RecommendedAdvancedParams::GetGpuMemoryUtilization() const
{
    return m_gpuMemoryUtilization;
}

void RecommendedAdvancedParams::SetGpuMemoryUtilization(const int64_t& _gpuMemoryUtilization)
{
    m_gpuMemoryUtilization = _gpuMemoryUtilization;
    m_gpuMemoryUtilizationHasBeenSet = true;
}

bool RecommendedAdvancedParams::GpuMemoryUtilizationHasBeenSet() const
{
    return m_gpuMemoryUtilizationHasBeenSet;
}

int64_t RecommendedAdvancedParams::GetTensorParallelSize() const
{
    return m_tensorParallelSize;
}

void RecommendedAdvancedParams::SetTensorParallelSize(const int64_t& _tensorParallelSize)
{
    m_tensorParallelSize = _tensorParallelSize;
    m_tensorParallelSizeHasBeenSet = true;
}

bool RecommendedAdvancedParams::TensorParallelSizeHasBeenSet() const
{
    return m_tensorParallelSizeHasBeenSet;
}

int64_t RecommendedAdvancedParams::GetPipelineParallelSize() const
{
    return m_pipelineParallelSize;
}

void RecommendedAdvancedParams::SetPipelineParallelSize(const int64_t& _pipelineParallelSize)
{
    m_pipelineParallelSize = _pipelineParallelSize;
    m_pipelineParallelSizeHasBeenSet = true;
}

bool RecommendedAdvancedParams::PipelineParallelSizeHasBeenSet() const
{
    return m_pipelineParallelSizeHasBeenSet;
}

int64_t RecommendedAdvancedParams::GetDataParallelSize() const
{
    return m_dataParallelSize;
}

void RecommendedAdvancedParams::SetDataParallelSize(const int64_t& _dataParallelSize)
{
    m_dataParallelSize = _dataParallelSize;
    m_dataParallelSizeHasBeenSet = true;
}

bool RecommendedAdvancedParams::DataParallelSizeHasBeenSet() const
{
    return m_dataParallelSizeHasBeenSet;
}

vector<RecommendedKeyValue> RecommendedAdvancedParams::GetEngineArgs() const
{
    return m_engineArgs;
}

void RecommendedAdvancedParams::SetEngineArgs(const vector<RecommendedKeyValue>& _engineArgs)
{
    m_engineArgs = _engineArgs;
    m_engineArgsHasBeenSet = true;
}

bool RecommendedAdvancedParams::EngineArgsHasBeenSet() const
{
    return m_engineArgsHasBeenSet;
}

vector<RecommendedKeyValue> RecommendedAdvancedParams::GetEnvVars() const
{
    return m_envVars;
}

void RecommendedAdvancedParams::SetEnvVars(const vector<RecommendedKeyValue>& _envVars)
{
    m_envVars = _envVars;
    m_envVarsHasBeenSet = true;
}

bool RecommendedAdvancedParams::EnvVarsHasBeenSet() const
{
    return m_envVarsHasBeenSet;
}

vector<RecommendedKeyValue> RecommendedAdvancedParams::GetRayOptions() const
{
    return m_rayOptions;
}

void RecommendedAdvancedParams::SetRayOptions(const vector<RecommendedKeyValue>& _rayOptions)
{
    m_rayOptions = _rayOptions;
    m_rayOptionsHasBeenSet = true;
}

bool RecommendedAdvancedParams::RayOptionsHasBeenSet() const
{
    return m_rayOptionsHasBeenSet;
}

