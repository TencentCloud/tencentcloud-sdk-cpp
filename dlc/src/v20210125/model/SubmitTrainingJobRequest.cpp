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

#include <tencentcloud/dlc/v20210125/model/SubmitTrainingJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SubmitTrainingJobRequest::SubmitTrainingJobRequest() :
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
    m_advancedOptionsHasBeenSet(false),
    m_baseModelUidHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_datasetsHasBeenSet(false),
    m_checkpointHasBeenSet(false),
    m_resumeTrainingHasBeenSet(false),
    m_tuningParamsHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_mlFlowConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_outputModelNameHasBeenSet(false)
{
}

string SubmitTrainingJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_advancedOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_advancedOptions.c_str(), allocator).Move(), allocator);
    }

    if (m_baseModelUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseModelUid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_baseModelUid.c_str(), allocator).Move(), allocator);
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

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
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

    if (m_outputModelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outputModelName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitTrainingJobRequest::GetSpecName() const
{
    return m_specName;
}

void SubmitTrainingJobRequest::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool SubmitTrainingJobRequest::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

string SubmitTrainingJobRequest::GetDescription() const
{
    return m_description;
}

void SubmitTrainingJobRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SubmitTrainingJobRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string SubmitTrainingJobRequest::GetEntrypoint() const
{
    return m_entrypoint;
}

void SubmitTrainingJobRequest::SetEntrypoint(const string& _entrypoint)
{
    m_entrypoint = _entrypoint;
    m_entrypointHasBeenSet = true;
}

bool SubmitTrainingJobRequest::EntrypointHasBeenSet() const
{
    return m_entrypointHasBeenSet;
}

string SubmitTrainingJobRequest::GetImage() const
{
    return m_image;
}

void SubmitTrainingJobRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool SubmitTrainingJobRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string SubmitTrainingJobRequest::GetImagePullType() const
{
    return m_imagePullType;
}

void SubmitTrainingJobRequest::SetImagePullType(const string& _imagePullType)
{
    m_imagePullType = _imagePullType;
    m_imagePullTypeHasBeenSet = true;
}

bool SubmitTrainingJobRequest::ImagePullTypeHasBeenSet() const
{
    return m_imagePullTypeHasBeenSet;
}

string SubmitTrainingJobRequest::GetImagePullPolicy() const
{
    return m_imagePullPolicy;
}

void SubmitTrainingJobRequest::SetImagePullPolicy(const string& _imagePullPolicy)
{
    m_imagePullPolicy = _imagePullPolicy;
    m_imagePullPolicyHasBeenSet = true;
}

bool SubmitTrainingJobRequest::ImagePullPolicyHasBeenSet() const
{
    return m_imagePullPolicyHasBeenSet;
}

string SubmitTrainingJobRequest::GetCodePackageUrl() const
{
    return m_codePackageUrl;
}

void SubmitTrainingJobRequest::SetCodePackageUrl(const string& _codePackageUrl)
{
    m_codePackageUrl = _codePackageUrl;
    m_codePackageUrlHasBeenSet = true;
}

bool SubmitTrainingJobRequest::CodePackageUrlHasBeenSet() const
{
    return m_codePackageUrlHasBeenSet;
}

string SubmitTrainingJobRequest::GetRuntimeEnv() const
{
    return m_runtimeEnv;
}

void SubmitTrainingJobRequest::SetRuntimeEnv(const string& _runtimeEnv)
{
    m_runtimeEnv = _runtimeEnv;
    m_runtimeEnvHasBeenSet = true;
}

bool SubmitTrainingJobRequest::RuntimeEnvHasBeenSet() const
{
    return m_runtimeEnvHasBeenSet;
}

string SubmitTrainingJobRequest::GetResourceConfigId() const
{
    return m_resourceConfigId;
}

void SubmitTrainingJobRequest::SetResourceConfigId(const string& _resourceConfigId)
{
    m_resourceConfigId = _resourceConfigId;
    m_resourceConfigIdHasBeenSet = true;
}

bool SubmitTrainingJobRequest::ResourceConfigIdHasBeenSet() const
{
    return m_resourceConfigIdHasBeenSet;
}

string SubmitTrainingJobRequest::GetResourceConfig() const
{
    return m_resourceConfig;
}

void SubmitTrainingJobRequest::SetResourceConfig(const string& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool SubmitTrainingJobRequest::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string SubmitTrainingJobRequest::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void SubmitTrainingJobRequest::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool SubmitTrainingJobRequest::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string SubmitTrainingJobRequest::GetQueue() const
{
    return m_queue;
}

void SubmitTrainingJobRequest::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool SubmitTrainingJobRequest::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string SubmitTrainingJobRequest::GetCatalog() const
{
    return m_catalog;
}

void SubmitTrainingJobRequest::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool SubmitTrainingJobRequest::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string SubmitTrainingJobRequest::GetAdvancedOptions() const
{
    return m_advancedOptions;
}

void SubmitTrainingJobRequest::SetAdvancedOptions(const string& _advancedOptions)
{
    m_advancedOptions = _advancedOptions;
    m_advancedOptionsHasBeenSet = true;
}

bool SubmitTrainingJobRequest::AdvancedOptionsHasBeenSet() const
{
    return m_advancedOptionsHasBeenSet;
}

string SubmitTrainingJobRequest::GetBaseModelUid() const
{
    return m_baseModelUid;
}

void SubmitTrainingJobRequest::SetBaseModelUid(const string& _baseModelUid)
{
    m_baseModelUid = _baseModelUid;
    m_baseModelUidHasBeenSet = true;
}

bool SubmitTrainingJobRequest::BaseModelUidHasBeenSet() const
{
    return m_baseModelUidHasBeenSet;
}

string SubmitTrainingJobRequest::GetMode() const
{
    return m_mode;
}

void SubmitTrainingJobRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool SubmitTrainingJobRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<DatasetMount> SubmitTrainingJobRequest::GetDatasets() const
{
    return m_datasets;
}

void SubmitTrainingJobRequest::SetDatasets(const vector<DatasetMount>& _datasets)
{
    m_datasets = _datasets;
    m_datasetsHasBeenSet = true;
}

bool SubmitTrainingJobRequest::DatasetsHasBeenSet() const
{
    return m_datasetsHasBeenSet;
}

CheckpointConfig SubmitTrainingJobRequest::GetCheckpoint() const
{
    return m_checkpoint;
}

void SubmitTrainingJobRequest::SetCheckpoint(const CheckpointConfig& _checkpoint)
{
    m_checkpoint = _checkpoint;
    m_checkpointHasBeenSet = true;
}

bool SubmitTrainingJobRequest::CheckpointHasBeenSet() const
{
    return m_checkpointHasBeenSet;
}

bool SubmitTrainingJobRequest::GetResumeTraining() const
{
    return m_resumeTraining;
}

void SubmitTrainingJobRequest::SetResumeTraining(const bool& _resumeTraining)
{
    m_resumeTraining = _resumeTraining;
    m_resumeTrainingHasBeenSet = true;
}

bool SubmitTrainingJobRequest::ResumeTrainingHasBeenSet() const
{
    return m_resumeTrainingHasBeenSet;
}

TrainingTuningParams SubmitTrainingJobRequest::GetTuningParams() const
{
    return m_tuningParams;
}

void SubmitTrainingJobRequest::SetTuningParams(const TrainingTuningParams& _tuningParams)
{
    m_tuningParams = _tuningParams;
    m_tuningParamsHasBeenSet = true;
}

bool SubmitTrainingJobRequest::TuningParamsHasBeenSet() const
{
    return m_tuningParamsHasBeenSet;
}

int64_t SubmitTrainingJobRequest::GetPriority() const
{
    return m_priority;
}

void SubmitTrainingJobRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool SubmitTrainingJobRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string SubmitTrainingJobRequest::GetKind() const
{
    return m_kind;
}

void SubmitTrainingJobRequest::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool SubmitTrainingJobRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

MlFlowConfig SubmitTrainingJobRequest::GetMlFlowConfig() const
{
    return m_mlFlowConfig;
}

void SubmitTrainingJobRequest::SetMlFlowConfig(const MlFlowConfig& _mlFlowConfig)
{
    m_mlFlowConfig = _mlFlowConfig;
    m_mlFlowConfigHasBeenSet = true;
}

bool SubmitTrainingJobRequest::MlFlowConfigHasBeenSet() const
{
    return m_mlFlowConfigHasBeenSet;
}

vector<Tag> SubmitTrainingJobRequest::GetTags() const
{
    return m_tags;
}

void SubmitTrainingJobRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool SubmitTrainingJobRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string SubmitTrainingJobRequest::GetOutputModelName() const
{
    return m_outputModelName;
}

void SubmitTrainingJobRequest::SetOutputModelName(const string& _outputModelName)
{
    m_outputModelName = _outputModelName;
    m_outputModelNameHasBeenSet = true;
}

bool SubmitTrainingJobRequest::OutputModelNameHasBeenSet() const
{
    return m_outputModelNameHasBeenSet;
}


