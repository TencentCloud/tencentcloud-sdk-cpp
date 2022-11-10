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

#include <tencentcloud/tione/v20211111/model/RestartModelAccelerateTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

RestartModelAccelerateTaskRequest::RestartModelAccelerateTaskRequest() :
    m_modelAccTaskIdHasBeenSet(false),
    m_modelAccTaskNameHasBeenSet(false),
    m_modelSourceHasBeenSet(false),
    m_algorithmFrameworkHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_modelInputPathHasBeenSet(false),
    m_optimizationLevelHasBeenSet(false),
    m_modelInputNumHasBeenSet(false),
    m_modelInputInfosHasBeenSet(false),
    m_modelOutputPathHasBeenSet(false),
    m_modelFormatHasBeenSet(false),
    m_tensorInfosHasBeenSet(false),
    m_gPUTypeHasBeenSet(false),
    m_hyperParameterHasBeenSet(false),
    m_accEngineVersionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_modelSignatureHasBeenSet(false)
{
}

string RestartModelAccelerateTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelAccTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAccTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelAccTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelAccTaskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAccTaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelAccTaskName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelSource.c_str(), allocator).Move(), allocator);
    }

    if (m_algorithmFrameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlgorithmFramework";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_algorithmFramework.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_modelInputPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelInputPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelInputPath.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_optimizationLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptimizationLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_optimizationLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_modelInputNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelInputNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modelInputNum, allocator);
    }

    if (m_modelInputInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelInputInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modelInputInfos.begin(); itr != m_modelInputInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_modelOutputPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelOutputPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelOutputPath.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_modelFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_tensorInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TensorInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tensorInfos.begin(); itr != m_tensorInfos.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_gPUTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gPUType.c_str(), allocator).Move(), allocator);
    }

    if (m_hyperParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HyperParameter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hyperParameter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_accEngineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccEngineVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accEngineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_modelSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelSignature.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RestartModelAccelerateTaskRequest::GetModelAccTaskId() const
{
    return m_modelAccTaskId;
}

void RestartModelAccelerateTaskRequest::SetModelAccTaskId(const string& _modelAccTaskId)
{
    m_modelAccTaskId = _modelAccTaskId;
    m_modelAccTaskIdHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::ModelAccTaskIdHasBeenSet() const
{
    return m_modelAccTaskIdHasBeenSet;
}

string RestartModelAccelerateTaskRequest::GetModelAccTaskName() const
{
    return m_modelAccTaskName;
}

void RestartModelAccelerateTaskRequest::SetModelAccTaskName(const string& _modelAccTaskName)
{
    m_modelAccTaskName = _modelAccTaskName;
    m_modelAccTaskNameHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::ModelAccTaskNameHasBeenSet() const
{
    return m_modelAccTaskNameHasBeenSet;
}

string RestartModelAccelerateTaskRequest::GetModelSource() const
{
    return m_modelSource;
}

void RestartModelAccelerateTaskRequest::SetModelSource(const string& _modelSource)
{
    m_modelSource = _modelSource;
    m_modelSourceHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::ModelSourceHasBeenSet() const
{
    return m_modelSourceHasBeenSet;
}

string RestartModelAccelerateTaskRequest::GetAlgorithmFramework() const
{
    return m_algorithmFramework;
}

void RestartModelAccelerateTaskRequest::SetAlgorithmFramework(const string& _algorithmFramework)
{
    m_algorithmFramework = _algorithmFramework;
    m_algorithmFrameworkHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::AlgorithmFrameworkHasBeenSet() const
{
    return m_algorithmFrameworkHasBeenSet;
}

string RestartModelAccelerateTaskRequest::GetModelId() const
{
    return m_modelId;
}

void RestartModelAccelerateTaskRequest::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string RestartModelAccelerateTaskRequest::GetModelName() const
{
    return m_modelName;
}

void RestartModelAccelerateTaskRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string RestartModelAccelerateTaskRequest::GetModelVersion() const
{
    return m_modelVersion;
}

void RestartModelAccelerateTaskRequest::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

CosPathInfo RestartModelAccelerateTaskRequest::GetModelInputPath() const
{
    return m_modelInputPath;
}

void RestartModelAccelerateTaskRequest::SetModelInputPath(const CosPathInfo& _modelInputPath)
{
    m_modelInputPath = _modelInputPath;
    m_modelInputPathHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::ModelInputPathHasBeenSet() const
{
    return m_modelInputPathHasBeenSet;
}

string RestartModelAccelerateTaskRequest::GetOptimizationLevel() const
{
    return m_optimizationLevel;
}

void RestartModelAccelerateTaskRequest::SetOptimizationLevel(const string& _optimizationLevel)
{
    m_optimizationLevel = _optimizationLevel;
    m_optimizationLevelHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::OptimizationLevelHasBeenSet() const
{
    return m_optimizationLevelHasBeenSet;
}

uint64_t RestartModelAccelerateTaskRequest::GetModelInputNum() const
{
    return m_modelInputNum;
}

void RestartModelAccelerateTaskRequest::SetModelInputNum(const uint64_t& _modelInputNum)
{
    m_modelInputNum = _modelInputNum;
    m_modelInputNumHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::ModelInputNumHasBeenSet() const
{
    return m_modelInputNumHasBeenSet;
}

vector<ModelInputInfo> RestartModelAccelerateTaskRequest::GetModelInputInfos() const
{
    return m_modelInputInfos;
}

void RestartModelAccelerateTaskRequest::SetModelInputInfos(const vector<ModelInputInfo>& _modelInputInfos)
{
    m_modelInputInfos = _modelInputInfos;
    m_modelInputInfosHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::ModelInputInfosHasBeenSet() const
{
    return m_modelInputInfosHasBeenSet;
}

CosPathInfo RestartModelAccelerateTaskRequest::GetModelOutputPath() const
{
    return m_modelOutputPath;
}

void RestartModelAccelerateTaskRequest::SetModelOutputPath(const CosPathInfo& _modelOutputPath)
{
    m_modelOutputPath = _modelOutputPath;
    m_modelOutputPathHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::ModelOutputPathHasBeenSet() const
{
    return m_modelOutputPathHasBeenSet;
}

string RestartModelAccelerateTaskRequest::GetModelFormat() const
{
    return m_modelFormat;
}

void RestartModelAccelerateTaskRequest::SetModelFormat(const string& _modelFormat)
{
    m_modelFormat = _modelFormat;
    m_modelFormatHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::ModelFormatHasBeenSet() const
{
    return m_modelFormatHasBeenSet;
}

vector<string> RestartModelAccelerateTaskRequest::GetTensorInfos() const
{
    return m_tensorInfos;
}

void RestartModelAccelerateTaskRequest::SetTensorInfos(const vector<string>& _tensorInfos)
{
    m_tensorInfos = _tensorInfos;
    m_tensorInfosHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::TensorInfosHasBeenSet() const
{
    return m_tensorInfosHasBeenSet;
}

string RestartModelAccelerateTaskRequest::GetGPUType() const
{
    return m_gPUType;
}

void RestartModelAccelerateTaskRequest::SetGPUType(const string& _gPUType)
{
    m_gPUType = _gPUType;
    m_gPUTypeHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::GPUTypeHasBeenSet() const
{
    return m_gPUTypeHasBeenSet;
}

HyperParameter RestartModelAccelerateTaskRequest::GetHyperParameter() const
{
    return m_hyperParameter;
}

void RestartModelAccelerateTaskRequest::SetHyperParameter(const HyperParameter& _hyperParameter)
{
    m_hyperParameter = _hyperParameter;
    m_hyperParameterHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::HyperParameterHasBeenSet() const
{
    return m_hyperParameterHasBeenSet;
}

string RestartModelAccelerateTaskRequest::GetAccEngineVersion() const
{
    return m_accEngineVersion;
}

void RestartModelAccelerateTaskRequest::SetAccEngineVersion(const string& _accEngineVersion)
{
    m_accEngineVersion = _accEngineVersion;
    m_accEngineVersionHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::AccEngineVersionHasBeenSet() const
{
    return m_accEngineVersionHasBeenSet;
}

vector<Tag> RestartModelAccelerateTaskRequest::GetTags() const
{
    return m_tags;
}

void RestartModelAccelerateTaskRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string RestartModelAccelerateTaskRequest::GetModelSignature() const
{
    return m_modelSignature;
}

void RestartModelAccelerateTaskRequest::SetModelSignature(const string& _modelSignature)
{
    m_modelSignature = _modelSignature;
    m_modelSignatureHasBeenSet = true;
}

bool RestartModelAccelerateTaskRequest::ModelSignatureHasBeenSet() const
{
    return m_modelSignatureHasBeenSet;
}


