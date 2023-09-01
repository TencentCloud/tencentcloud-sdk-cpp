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

#include <tencentcloud/tione/v20211111/model/CreateTrainingModelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

CreateTrainingModelRequest::CreateTrainingModelRequest() :
    m_importMethodHasBeenSet(false),
    m_reasoningEnvironmentSourceHasBeenSet(false),
    m_trainingModelNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_trainingJobNameHasBeenSet(false),
    m_trainingModelCosPathHasBeenSet(false),
    m_algorithmFrameworkHasBeenSet(false),
    m_reasoningEnvironmentHasBeenSet(false),
    m_trainingModelIndexHasBeenSet(false),
    m_trainingModelVersionHasBeenSet(false),
    m_reasoningImageInfoHasBeenSet(false),
    m_modelMoveModeHasBeenSet(false),
    m_trainingJobIdHasBeenSet(false),
    m_trainingModelIdHasBeenSet(false),
    m_modelOutputPathHasBeenSet(false),
    m_trainingModelSourceHasBeenSet(false),
    m_trainingPreferenceHasBeenSet(false),
    m_autoMLTaskIdHasBeenSet(false),
    m_trainingJobVersionHasBeenSet(false),
    m_modelVersionTypeHasBeenSet(false),
    m_modelFormatHasBeenSet(false),
    m_reasoningEnvironmentIdHasBeenSet(false),
    m_autoCleanHasBeenSet(false),
    m_maxReservedModelsHasBeenSet(false),
    m_modelCleanPeriodHasBeenSet(false),
    m_isQATHasBeenSet(false)
{
}

string CreateTrainingModelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_importMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_importMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_reasoningEnvironmentSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningEnvironmentSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reasoningEnvironmentSource.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trainingModelName.c_str(), allocator).Move(), allocator);
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

    if (m_trainingJobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingJobName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trainingJobName.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModelCosPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelCosPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trainingModelCosPath.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_algorithmFrameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlgorithmFramework";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_algorithmFramework.c_str(), allocator).Move(), allocator);
    }

    if (m_reasoningEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reasoningEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModelIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trainingModelIndex.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trainingModelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_reasoningImageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningImageInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reasoningImageInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_modelMoveModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelMoveMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelMoveMode.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingJobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trainingJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trainingModelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelOutputPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelOutputPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelOutputPath.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_trainingModelSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trainingModelSource.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingPreferenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingPreference";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trainingPreference.c_str(), allocator).Move(), allocator);
    }

    if (m_autoMLTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoMLTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoMLTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingJobVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingJobVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trainingJobVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelVersionType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_reasoningEnvironmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningEnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reasoningEnvironmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoCleanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoClean";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoClean.c_str(), allocator).Move(), allocator);
    }

    if (m_maxReservedModelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReservedModels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxReservedModels, allocator);
    }

    if (m_modelCleanPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelCleanPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modelCleanPeriod, allocator);
    }

    if (m_isQATHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQAT";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isQAT, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTrainingModelRequest::GetImportMethod() const
{
    return m_importMethod;
}

void CreateTrainingModelRequest::SetImportMethod(const string& _importMethod)
{
    m_importMethod = _importMethod;
    m_importMethodHasBeenSet = true;
}

bool CreateTrainingModelRequest::ImportMethodHasBeenSet() const
{
    return m_importMethodHasBeenSet;
}

string CreateTrainingModelRequest::GetReasoningEnvironmentSource() const
{
    return m_reasoningEnvironmentSource;
}

void CreateTrainingModelRequest::SetReasoningEnvironmentSource(const string& _reasoningEnvironmentSource)
{
    m_reasoningEnvironmentSource = _reasoningEnvironmentSource;
    m_reasoningEnvironmentSourceHasBeenSet = true;
}

bool CreateTrainingModelRequest::ReasoningEnvironmentSourceHasBeenSet() const
{
    return m_reasoningEnvironmentSourceHasBeenSet;
}

string CreateTrainingModelRequest::GetTrainingModelName() const
{
    return m_trainingModelName;
}

void CreateTrainingModelRequest::SetTrainingModelName(const string& _trainingModelName)
{
    m_trainingModelName = _trainingModelName;
    m_trainingModelNameHasBeenSet = true;
}

bool CreateTrainingModelRequest::TrainingModelNameHasBeenSet() const
{
    return m_trainingModelNameHasBeenSet;
}

vector<Tag> CreateTrainingModelRequest::GetTags() const
{
    return m_tags;
}

void CreateTrainingModelRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateTrainingModelRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateTrainingModelRequest::GetTrainingJobName() const
{
    return m_trainingJobName;
}

void CreateTrainingModelRequest::SetTrainingJobName(const string& _trainingJobName)
{
    m_trainingJobName = _trainingJobName;
    m_trainingJobNameHasBeenSet = true;
}

bool CreateTrainingModelRequest::TrainingJobNameHasBeenSet() const
{
    return m_trainingJobNameHasBeenSet;
}

CosPathInfo CreateTrainingModelRequest::GetTrainingModelCosPath() const
{
    return m_trainingModelCosPath;
}

void CreateTrainingModelRequest::SetTrainingModelCosPath(const CosPathInfo& _trainingModelCosPath)
{
    m_trainingModelCosPath = _trainingModelCosPath;
    m_trainingModelCosPathHasBeenSet = true;
}

bool CreateTrainingModelRequest::TrainingModelCosPathHasBeenSet() const
{
    return m_trainingModelCosPathHasBeenSet;
}

string CreateTrainingModelRequest::GetAlgorithmFramework() const
{
    return m_algorithmFramework;
}

void CreateTrainingModelRequest::SetAlgorithmFramework(const string& _algorithmFramework)
{
    m_algorithmFramework = _algorithmFramework;
    m_algorithmFrameworkHasBeenSet = true;
}

bool CreateTrainingModelRequest::AlgorithmFrameworkHasBeenSet() const
{
    return m_algorithmFrameworkHasBeenSet;
}

string CreateTrainingModelRequest::GetReasoningEnvironment() const
{
    return m_reasoningEnvironment;
}

void CreateTrainingModelRequest::SetReasoningEnvironment(const string& _reasoningEnvironment)
{
    m_reasoningEnvironment = _reasoningEnvironment;
    m_reasoningEnvironmentHasBeenSet = true;
}

bool CreateTrainingModelRequest::ReasoningEnvironmentHasBeenSet() const
{
    return m_reasoningEnvironmentHasBeenSet;
}

string CreateTrainingModelRequest::GetTrainingModelIndex() const
{
    return m_trainingModelIndex;
}

void CreateTrainingModelRequest::SetTrainingModelIndex(const string& _trainingModelIndex)
{
    m_trainingModelIndex = _trainingModelIndex;
    m_trainingModelIndexHasBeenSet = true;
}

bool CreateTrainingModelRequest::TrainingModelIndexHasBeenSet() const
{
    return m_trainingModelIndexHasBeenSet;
}

string CreateTrainingModelRequest::GetTrainingModelVersion() const
{
    return m_trainingModelVersion;
}

void CreateTrainingModelRequest::SetTrainingModelVersion(const string& _trainingModelVersion)
{
    m_trainingModelVersion = _trainingModelVersion;
    m_trainingModelVersionHasBeenSet = true;
}

bool CreateTrainingModelRequest::TrainingModelVersionHasBeenSet() const
{
    return m_trainingModelVersionHasBeenSet;
}

ImageInfo CreateTrainingModelRequest::GetReasoningImageInfo() const
{
    return m_reasoningImageInfo;
}

void CreateTrainingModelRequest::SetReasoningImageInfo(const ImageInfo& _reasoningImageInfo)
{
    m_reasoningImageInfo = _reasoningImageInfo;
    m_reasoningImageInfoHasBeenSet = true;
}

bool CreateTrainingModelRequest::ReasoningImageInfoHasBeenSet() const
{
    return m_reasoningImageInfoHasBeenSet;
}

string CreateTrainingModelRequest::GetModelMoveMode() const
{
    return m_modelMoveMode;
}

void CreateTrainingModelRequest::SetModelMoveMode(const string& _modelMoveMode)
{
    m_modelMoveMode = _modelMoveMode;
    m_modelMoveModeHasBeenSet = true;
}

bool CreateTrainingModelRequest::ModelMoveModeHasBeenSet() const
{
    return m_modelMoveModeHasBeenSet;
}

string CreateTrainingModelRequest::GetTrainingJobId() const
{
    return m_trainingJobId;
}

void CreateTrainingModelRequest::SetTrainingJobId(const string& _trainingJobId)
{
    m_trainingJobId = _trainingJobId;
    m_trainingJobIdHasBeenSet = true;
}

bool CreateTrainingModelRequest::TrainingJobIdHasBeenSet() const
{
    return m_trainingJobIdHasBeenSet;
}

string CreateTrainingModelRequest::GetTrainingModelId() const
{
    return m_trainingModelId;
}

void CreateTrainingModelRequest::SetTrainingModelId(const string& _trainingModelId)
{
    m_trainingModelId = _trainingModelId;
    m_trainingModelIdHasBeenSet = true;
}

bool CreateTrainingModelRequest::TrainingModelIdHasBeenSet() const
{
    return m_trainingModelIdHasBeenSet;
}

CosPathInfo CreateTrainingModelRequest::GetModelOutputPath() const
{
    return m_modelOutputPath;
}

void CreateTrainingModelRequest::SetModelOutputPath(const CosPathInfo& _modelOutputPath)
{
    m_modelOutputPath = _modelOutputPath;
    m_modelOutputPathHasBeenSet = true;
}

bool CreateTrainingModelRequest::ModelOutputPathHasBeenSet() const
{
    return m_modelOutputPathHasBeenSet;
}

string CreateTrainingModelRequest::GetTrainingModelSource() const
{
    return m_trainingModelSource;
}

void CreateTrainingModelRequest::SetTrainingModelSource(const string& _trainingModelSource)
{
    m_trainingModelSource = _trainingModelSource;
    m_trainingModelSourceHasBeenSet = true;
}

bool CreateTrainingModelRequest::TrainingModelSourceHasBeenSet() const
{
    return m_trainingModelSourceHasBeenSet;
}

string CreateTrainingModelRequest::GetTrainingPreference() const
{
    return m_trainingPreference;
}

void CreateTrainingModelRequest::SetTrainingPreference(const string& _trainingPreference)
{
    m_trainingPreference = _trainingPreference;
    m_trainingPreferenceHasBeenSet = true;
}

bool CreateTrainingModelRequest::TrainingPreferenceHasBeenSet() const
{
    return m_trainingPreferenceHasBeenSet;
}

string CreateTrainingModelRequest::GetAutoMLTaskId() const
{
    return m_autoMLTaskId;
}

void CreateTrainingModelRequest::SetAutoMLTaskId(const string& _autoMLTaskId)
{
    m_autoMLTaskId = _autoMLTaskId;
    m_autoMLTaskIdHasBeenSet = true;
}

bool CreateTrainingModelRequest::AutoMLTaskIdHasBeenSet() const
{
    return m_autoMLTaskIdHasBeenSet;
}

string CreateTrainingModelRequest::GetTrainingJobVersion() const
{
    return m_trainingJobVersion;
}

void CreateTrainingModelRequest::SetTrainingJobVersion(const string& _trainingJobVersion)
{
    m_trainingJobVersion = _trainingJobVersion;
    m_trainingJobVersionHasBeenSet = true;
}

bool CreateTrainingModelRequest::TrainingJobVersionHasBeenSet() const
{
    return m_trainingJobVersionHasBeenSet;
}

string CreateTrainingModelRequest::GetModelVersionType() const
{
    return m_modelVersionType;
}

void CreateTrainingModelRequest::SetModelVersionType(const string& _modelVersionType)
{
    m_modelVersionType = _modelVersionType;
    m_modelVersionTypeHasBeenSet = true;
}

bool CreateTrainingModelRequest::ModelVersionTypeHasBeenSet() const
{
    return m_modelVersionTypeHasBeenSet;
}

string CreateTrainingModelRequest::GetModelFormat() const
{
    return m_modelFormat;
}

void CreateTrainingModelRequest::SetModelFormat(const string& _modelFormat)
{
    m_modelFormat = _modelFormat;
    m_modelFormatHasBeenSet = true;
}

bool CreateTrainingModelRequest::ModelFormatHasBeenSet() const
{
    return m_modelFormatHasBeenSet;
}

string CreateTrainingModelRequest::GetReasoningEnvironmentId() const
{
    return m_reasoningEnvironmentId;
}

void CreateTrainingModelRequest::SetReasoningEnvironmentId(const string& _reasoningEnvironmentId)
{
    m_reasoningEnvironmentId = _reasoningEnvironmentId;
    m_reasoningEnvironmentIdHasBeenSet = true;
}

bool CreateTrainingModelRequest::ReasoningEnvironmentIdHasBeenSet() const
{
    return m_reasoningEnvironmentIdHasBeenSet;
}

string CreateTrainingModelRequest::GetAutoClean() const
{
    return m_autoClean;
}

void CreateTrainingModelRequest::SetAutoClean(const string& _autoClean)
{
    m_autoClean = _autoClean;
    m_autoCleanHasBeenSet = true;
}

bool CreateTrainingModelRequest::AutoCleanHasBeenSet() const
{
    return m_autoCleanHasBeenSet;
}

uint64_t CreateTrainingModelRequest::GetMaxReservedModels() const
{
    return m_maxReservedModels;
}

void CreateTrainingModelRequest::SetMaxReservedModels(const uint64_t& _maxReservedModels)
{
    m_maxReservedModels = _maxReservedModels;
    m_maxReservedModelsHasBeenSet = true;
}

bool CreateTrainingModelRequest::MaxReservedModelsHasBeenSet() const
{
    return m_maxReservedModelsHasBeenSet;
}

uint64_t CreateTrainingModelRequest::GetModelCleanPeriod() const
{
    return m_modelCleanPeriod;
}

void CreateTrainingModelRequest::SetModelCleanPeriod(const uint64_t& _modelCleanPeriod)
{
    m_modelCleanPeriod = _modelCleanPeriod;
    m_modelCleanPeriodHasBeenSet = true;
}

bool CreateTrainingModelRequest::ModelCleanPeriodHasBeenSet() const
{
    return m_modelCleanPeriodHasBeenSet;
}

bool CreateTrainingModelRequest::GetIsQAT() const
{
    return m_isQAT;
}

void CreateTrainingModelRequest::SetIsQAT(const bool& _isQAT)
{
    m_isQAT = _isQAT;
    m_isQATHasBeenSet = true;
}

bool CreateTrainingModelRequest::IsQATHasBeenSet() const
{
    return m_isQATHasBeenSet;
}


