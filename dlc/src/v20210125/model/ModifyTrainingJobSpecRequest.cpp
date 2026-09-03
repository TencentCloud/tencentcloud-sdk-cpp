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

#include <tencentcloud/dlc/v20210125/model/ModifyTrainingJobSpecRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ModifyTrainingJobSpecRequest::ModifyTrainingJobSpecRequest() :
    m_specIdHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_entrypointHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imagePullTypeHasBeenSet(false),
    m_imagePullPolicyHasBeenSet(false),
    m_codePackageUrlHasBeenSet(false),
    m_runtimeEnvHasBeenSet(false),
    m_resourceConfigIdHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_resourcePartitionIdHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false),
    m_mlFlowConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_baseModelUidHasBeenSet(false),
    m_outputModelNameHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_datasetsHasBeenSet(false),
    m_checkpointHasBeenSet(false),
    m_resumeTrainingHasBeenSet(false),
    m_tuningParamsHasBeenSet(false)
{
}

string ModifyTrainingJobSpecRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_specIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_specId.c_str(), allocator).Move(), allocator);
    }

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_entrypointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entrypoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entrypoint.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imagePullType.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imagePullPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_codePackageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodePackageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codePackageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeEnv";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runtimeEnv.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceConfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePartitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePartitionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourcePartitionId.c_str(), allocator).Move(), allocator);
    }

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }

    if (m_advancedOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_advancedOptions.c_str(), allocator).Move(), allocator);
    }

    if (m_mlFlowConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MlFlowConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mlFlowConfig.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_baseModelUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseModelUid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_baseModelUid.c_str(), allocator).Move(), allocator);
    }

    if (m_outputModelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outputModelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Datasets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_datasets.begin(); itr != m_datasets.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_checkpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Checkpoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_checkpoint.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_resumeTrainingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResumeTraining";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resumeTraining, allocator);
    }

    if (m_tuningParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TuningParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tuningParams.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTrainingJobSpecRequest::GetSpecId() const
{
    return m_specId;
}

void ModifyTrainingJobSpecRequest::SetSpecId(const string& _specId)
{
    m_specId = _specId;
    m_specIdHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::SpecIdHasBeenSet() const
{
    return m_specIdHasBeenSet;
}

string ModifyTrainingJobSpecRequest::GetSpecName() const
{
    return m_specName;
}

void ModifyTrainingJobSpecRequest::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

string ModifyTrainingJobSpecRequest::GetDescription() const
{
    return m_description;
}

void ModifyTrainingJobSpecRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyTrainingJobSpecRequest::GetEntrypoint() const
{
    return m_entrypoint;
}

void ModifyTrainingJobSpecRequest::SetEntrypoint(const string& _entrypoint)
{
    m_entrypoint = _entrypoint;
    m_entrypointHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::EntrypointHasBeenSet() const
{
    return m_entrypointHasBeenSet;
}

string ModifyTrainingJobSpecRequest::GetImage() const
{
    return m_image;
}

void ModifyTrainingJobSpecRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string ModifyTrainingJobSpecRequest::GetImagePullType() const
{
    return m_imagePullType;
}

void ModifyTrainingJobSpecRequest::SetImagePullType(const string& _imagePullType)
{
    m_imagePullType = _imagePullType;
    m_imagePullTypeHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::ImagePullTypeHasBeenSet() const
{
    return m_imagePullTypeHasBeenSet;
}

string ModifyTrainingJobSpecRequest::GetImagePullPolicy() const
{
    return m_imagePullPolicy;
}

void ModifyTrainingJobSpecRequest::SetImagePullPolicy(const string& _imagePullPolicy)
{
    m_imagePullPolicy = _imagePullPolicy;
    m_imagePullPolicyHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::ImagePullPolicyHasBeenSet() const
{
    return m_imagePullPolicyHasBeenSet;
}

string ModifyTrainingJobSpecRequest::GetCodePackageUrl() const
{
    return m_codePackageUrl;
}

void ModifyTrainingJobSpecRequest::SetCodePackageUrl(const string& _codePackageUrl)
{
    m_codePackageUrl = _codePackageUrl;
    m_codePackageUrlHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::CodePackageUrlHasBeenSet() const
{
    return m_codePackageUrlHasBeenSet;
}

string ModifyTrainingJobSpecRequest::GetRuntimeEnv() const
{
    return m_runtimeEnv;
}

void ModifyTrainingJobSpecRequest::SetRuntimeEnv(const string& _runtimeEnv)
{
    m_runtimeEnv = _runtimeEnv;
    m_runtimeEnvHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::RuntimeEnvHasBeenSet() const
{
    return m_runtimeEnvHasBeenSet;
}

string ModifyTrainingJobSpecRequest::GetResourceConfigId() const
{
    return m_resourceConfigId;
}

void ModifyTrainingJobSpecRequest::SetResourceConfigId(const string& _resourceConfigId)
{
    m_resourceConfigId = _resourceConfigId;
    m_resourceConfigIdHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::ResourceConfigIdHasBeenSet() const
{
    return m_resourceConfigIdHasBeenSet;
}

string ModifyTrainingJobSpecRequest::GetResourceConfig() const
{
    return m_resourceConfig;
}

void ModifyTrainingJobSpecRequest::SetResourceConfig(const string& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string ModifyTrainingJobSpecRequest::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void ModifyTrainingJobSpecRequest::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string ModifyTrainingJobSpecRequest::GetQueue() const
{
    return m_queue;
}

void ModifyTrainingJobSpecRequest::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string ModifyTrainingJobSpecRequest::GetCatalog() const
{
    return m_catalog;
}

void ModifyTrainingJobSpecRequest::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

int64_t ModifyTrainingJobSpecRequest::GetPriority() const
{
    return m_priority;
}

void ModifyTrainingJobSpecRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string ModifyTrainingJobSpecRequest::GetAdvancedOptions() const
{
    return m_advancedOptions;
}

void ModifyTrainingJobSpecRequest::SetAdvancedOptions(const string& _advancedOptions)
{
    m_advancedOptions = _advancedOptions;
    m_advancedOptionsHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::AdvancedOptionsHasBeenSet() const
{
    return m_advancedOptionsHasBeenSet;
}

MlFlowConfig ModifyTrainingJobSpecRequest::GetMlFlowConfig() const
{
    return m_mlFlowConfig;
}

void ModifyTrainingJobSpecRequest::SetMlFlowConfig(const MlFlowConfig& _mlFlowConfig)
{
    m_mlFlowConfig = _mlFlowConfig;
    m_mlFlowConfigHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::MlFlowConfigHasBeenSet() const
{
    return m_mlFlowConfigHasBeenSet;
}

vector<Tag> ModifyTrainingJobSpecRequest::GetTags() const
{
    return m_tags;
}

void ModifyTrainingJobSpecRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ModifyTrainingJobSpecRequest::GetBaseModelUid() const
{
    return m_baseModelUid;
}

void ModifyTrainingJobSpecRequest::SetBaseModelUid(const string& _baseModelUid)
{
    m_baseModelUid = _baseModelUid;
    m_baseModelUidHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::BaseModelUidHasBeenSet() const
{
    return m_baseModelUidHasBeenSet;
}

string ModifyTrainingJobSpecRequest::GetOutputModelName() const
{
    return m_outputModelName;
}

void ModifyTrainingJobSpecRequest::SetOutputModelName(const string& _outputModelName)
{
    m_outputModelName = _outputModelName;
    m_outputModelNameHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::OutputModelNameHasBeenSet() const
{
    return m_outputModelNameHasBeenSet;
}

string ModifyTrainingJobSpecRequest::GetMode() const
{
    return m_mode;
}

void ModifyTrainingJobSpecRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<DatasetMount> ModifyTrainingJobSpecRequest::GetDatasets() const
{
    return m_datasets;
}

void ModifyTrainingJobSpecRequest::SetDatasets(const vector<DatasetMount>& _datasets)
{
    m_datasets = _datasets;
    m_datasetsHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::DatasetsHasBeenSet() const
{
    return m_datasetsHasBeenSet;
}

CheckpointConfig ModifyTrainingJobSpecRequest::GetCheckpoint() const
{
    return m_checkpoint;
}

void ModifyTrainingJobSpecRequest::SetCheckpoint(const CheckpointConfig& _checkpoint)
{
    m_checkpoint = _checkpoint;
    m_checkpointHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::CheckpointHasBeenSet() const
{
    return m_checkpointHasBeenSet;
}

bool ModifyTrainingJobSpecRequest::GetResumeTraining() const
{
    return m_resumeTraining;
}

void ModifyTrainingJobSpecRequest::SetResumeTraining(const bool& _resumeTraining)
{
    m_resumeTraining = _resumeTraining;
    m_resumeTrainingHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::ResumeTrainingHasBeenSet() const
{
    return m_resumeTrainingHasBeenSet;
}

TrainingTuningParams ModifyTrainingJobSpecRequest::GetTuningParams() const
{
    return m_tuningParams;
}

void ModifyTrainingJobSpecRequest::SetTuningParams(const TrainingTuningParams& _tuningParams)
{
    m_tuningParams = _tuningParams;
    m_tuningParamsHasBeenSet = true;
}

bool ModifyTrainingJobSpecRequest::TuningParamsHasBeenSet() const
{
    return m_tuningParamsHasBeenSet;
}


