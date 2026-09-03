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

#include <tencentcloud/dlc/v20210125/model/TrainingJobSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

TrainingJobSpec::TrainingJobSpec() :
    m_specIdHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_entrypointHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imagePullTypeHasBeenSet(false),
    m_imagePullPolicyHasBeenSet(false),
    m_codePackageUrlHasBeenSet(false),
    m_runtimeEnvHasBeenSet(false),
    m_resourceConfigIdHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_resourcePartitionIdHasBeenSet(false),
    m_resourcePartitionNameHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_checkpointMountInfoHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_hasRunningInstancesHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_mlFlowConfigHasBeenSet(false),
    m_outputModelNameHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_baseModelUidHasBeenSet(false),
    m_baseModelNameHasBeenSet(false),
    m_datasetsHasBeenSet(false),
    m_lastInstanceStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_checkpointHasBeenSet(false),
    m_tuningParamsHasBeenSet(false),
    m_resumeTrainingHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false)
{
}

CoreInternalOutcome TrainingJobSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpecId") && !value["SpecId"].IsNull())
    {
        if (!value["SpecId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.SpecId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specId = string(value["SpecId"].GetString());
        m_specIdHasBeenSet = true;
    }

    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Entrypoint") && !value["Entrypoint"].IsNull())
    {
        if (!value["Entrypoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.Entrypoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entrypoint = string(value["Entrypoint"].GetString());
        m_entrypointHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("ImagePullType") && !value["ImagePullType"].IsNull())
    {
        if (!value["ImagePullType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.ImagePullType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imagePullType = string(value["ImagePullType"].GetString());
        m_imagePullTypeHasBeenSet = true;
    }

    if (value.HasMember("ImagePullPolicy") && !value["ImagePullPolicy"].IsNull())
    {
        if (!value["ImagePullPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.ImagePullPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imagePullPolicy = string(value["ImagePullPolicy"].GetString());
        m_imagePullPolicyHasBeenSet = true;
    }

    if (value.HasMember("CodePackageUrl") && !value["CodePackageUrl"].IsNull())
    {
        if (!value["CodePackageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.CodePackageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codePackageUrl = string(value["CodePackageUrl"].GetString());
        m_codePackageUrlHasBeenSet = true;
    }

    if (value.HasMember("RuntimeEnv") && !value["RuntimeEnv"].IsNull())
    {
        if (!value["RuntimeEnv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.RuntimeEnv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeEnv = string(value["RuntimeEnv"].GetString());
        m_runtimeEnvHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfigId") && !value["ResourceConfigId"].IsNull())
    {
        if (!value["ResourceConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.ResourceConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfigId = string(value["ResourceConfigId"].GetString());
        m_resourceConfigIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfig") && !value["ResourceConfig"].IsNull())
    {
        if (!value["ResourceConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.ResourceConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfig = string(value["ResourceConfig"].GetString());
        m_resourceConfigHasBeenSet = true;
    }

    if (value.HasMember("ResourcePartitionId") && !value["ResourcePartitionId"].IsNull())
    {
        if (!value["ResourcePartitionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.ResourcePartitionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionId = string(value["ResourcePartitionId"].GetString());
        m_resourcePartitionIdHasBeenSet = true;
    }

    if (value.HasMember("ResourcePartitionName") && !value["ResourcePartitionName"].IsNull())
    {
        if (!value["ResourcePartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.ResourcePartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionName = string(value["ResourcePartitionName"].GetString());
        m_resourcePartitionNameHasBeenSet = true;
    }

    if (value.HasMember("Queue") && !value["Queue"].IsNull())
    {
        if (!value["Queue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.Queue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queue = string(value["Queue"].GetString());
        m_queueHasBeenSet = true;
    }

    if (value.HasMember("CheckpointMountInfo") && !value["CheckpointMountInfo"].IsNull())
    {
        if (!value["CheckpointMountInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.CheckpointMountInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_checkpointMountInfo.Deserialize(value["CheckpointMountInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_checkpointMountInfoHasBeenSet = true;
    }

    if (value.HasMember("Catalog") && !value["Catalog"].IsNull())
    {
        if (!value["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(value["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.InstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetInt64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("HasRunningInstances") && !value["HasRunningInstances"].IsNull())
    {
        if (!value["HasRunningInstances"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.HasRunningInstances` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasRunningInstances = value["HasRunningInstances"].GetBool();
        m_hasRunningInstancesHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("MlFlowConfig") && !value["MlFlowConfig"].IsNull())
    {
        if (!value["MlFlowConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.MlFlowConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mlFlowConfig = string(value["MlFlowConfig"].GetString());
        m_mlFlowConfigHasBeenSet = true;
    }

    if (value.HasMember("OutputModelName") && !value["OutputModelName"].IsNull())
    {
        if (!value["OutputModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.OutputModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputModelName = string(value["OutputModelName"].GetString());
        m_outputModelNameHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("BaseModelUid") && !value["BaseModelUid"].IsNull())
    {
        if (!value["BaseModelUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.BaseModelUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baseModelUid = string(value["BaseModelUid"].GetString());
        m_baseModelUidHasBeenSet = true;
    }

    if (value.HasMember("BaseModelName") && !value["BaseModelName"].IsNull())
    {
        if (!value["BaseModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.BaseModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baseModelName = string(value["BaseModelName"].GetString());
        m_baseModelNameHasBeenSet = true;
    }

    if (value.HasMember("Datasets") && !value["Datasets"].IsNull())
    {
        if (!value["Datasets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.Datasets` is not array type"));

        const rapidjson::Value &tmpValue = value["Datasets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DatasetMount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_datasets.push_back(item);
        }
        m_datasetsHasBeenSet = true;
    }

    if (value.HasMember("LastInstanceStatus") && !value["LastInstanceStatus"].IsNull())
    {
        if (!value["LastInstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.LastInstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastInstanceStatus = string(value["LastInstanceStatus"].GetString());
        m_lastInstanceStatusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Checkpoint") && !value["Checkpoint"].IsNull())
    {
        if (!value["Checkpoint"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.Checkpoint` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_checkpoint.Deserialize(value["Checkpoint"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_checkpointHasBeenSet = true;
    }

    if (value.HasMember("TuningParams") && !value["TuningParams"].IsNull())
    {
        if (!value["TuningParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.TuningParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tuningParams.Deserialize(value["TuningParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tuningParamsHasBeenSet = true;
    }

    if (value.HasMember("ResumeTraining") && !value["ResumeTraining"].IsNull())
    {
        if (!value["ResumeTraining"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.ResumeTraining` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_resumeTraining = value["ResumeTraining"].GetBool();
        m_resumeTrainingHasBeenSet = true;
    }

    if (value.HasMember("AdvancedOptions") && !value["AdvancedOptions"].IsNull())
    {
        if (!value["AdvancedOptions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobSpec.AdvancedOptions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedOptions = string(value["AdvancedOptions"].GetString());
        m_advancedOptionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrainingJobSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specId.c_str(), allocator).Move(), allocator);
    }

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_entrypointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entrypoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entrypoint.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imagePullType.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imagePullPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_codePackageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodePackageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codePackageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeEnv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeEnv.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceConfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePartitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePartitionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourcePartitionId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePartitionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePartitionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourcePartitionName.c_str(), allocator).Move(), allocator);
    }

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_checkpointMountInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckpointMountInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_checkpointMountInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_hasRunningInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasRunningInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasRunningInstances, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_mlFlowConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MlFlowConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mlFlowConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_outputModelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputModelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_baseModelUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseModelUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baseModelUid.c_str(), allocator).Move(), allocator);
    }

    if (m_baseModelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baseModelName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Datasets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_datasets.begin(); itr != m_datasets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lastInstanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastInstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastInstanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_checkpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Checkpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_checkpoint.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tuningParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TuningParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tuningParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resumeTrainingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResumeTraining";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resumeTraining, allocator);
    }

    if (m_advancedOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advancedOptions.c_str(), allocator).Move(), allocator);
    }

}


string TrainingJobSpec::GetSpecId() const
{
    return m_specId;
}

void TrainingJobSpec::SetSpecId(const string& _specId)
{
    m_specId = _specId;
    m_specIdHasBeenSet = true;
}

bool TrainingJobSpec::SpecIdHasBeenSet() const
{
    return m_specIdHasBeenSet;
}

string TrainingJobSpec::GetSpecName() const
{
    return m_specName;
}

void TrainingJobSpec::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool TrainingJobSpec::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

string TrainingJobSpec::GetDescription() const
{
    return m_description;
}

void TrainingJobSpec::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TrainingJobSpec::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string TrainingJobSpec::GetKind() const
{
    return m_kind;
}

void TrainingJobSpec::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool TrainingJobSpec::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string TrainingJobSpec::GetEntrypoint() const
{
    return m_entrypoint;
}

void TrainingJobSpec::SetEntrypoint(const string& _entrypoint)
{
    m_entrypoint = _entrypoint;
    m_entrypointHasBeenSet = true;
}

bool TrainingJobSpec::EntrypointHasBeenSet() const
{
    return m_entrypointHasBeenSet;
}

string TrainingJobSpec::GetImage() const
{
    return m_image;
}

void TrainingJobSpec::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool TrainingJobSpec::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string TrainingJobSpec::GetImagePullType() const
{
    return m_imagePullType;
}

void TrainingJobSpec::SetImagePullType(const string& _imagePullType)
{
    m_imagePullType = _imagePullType;
    m_imagePullTypeHasBeenSet = true;
}

bool TrainingJobSpec::ImagePullTypeHasBeenSet() const
{
    return m_imagePullTypeHasBeenSet;
}

string TrainingJobSpec::GetImagePullPolicy() const
{
    return m_imagePullPolicy;
}

void TrainingJobSpec::SetImagePullPolicy(const string& _imagePullPolicy)
{
    m_imagePullPolicy = _imagePullPolicy;
    m_imagePullPolicyHasBeenSet = true;
}

bool TrainingJobSpec::ImagePullPolicyHasBeenSet() const
{
    return m_imagePullPolicyHasBeenSet;
}

string TrainingJobSpec::GetCodePackageUrl() const
{
    return m_codePackageUrl;
}

void TrainingJobSpec::SetCodePackageUrl(const string& _codePackageUrl)
{
    m_codePackageUrl = _codePackageUrl;
    m_codePackageUrlHasBeenSet = true;
}

bool TrainingJobSpec::CodePackageUrlHasBeenSet() const
{
    return m_codePackageUrlHasBeenSet;
}

string TrainingJobSpec::GetRuntimeEnv() const
{
    return m_runtimeEnv;
}

void TrainingJobSpec::SetRuntimeEnv(const string& _runtimeEnv)
{
    m_runtimeEnv = _runtimeEnv;
    m_runtimeEnvHasBeenSet = true;
}

bool TrainingJobSpec::RuntimeEnvHasBeenSet() const
{
    return m_runtimeEnvHasBeenSet;
}

string TrainingJobSpec::GetResourceConfigId() const
{
    return m_resourceConfigId;
}

void TrainingJobSpec::SetResourceConfigId(const string& _resourceConfigId)
{
    m_resourceConfigId = _resourceConfigId;
    m_resourceConfigIdHasBeenSet = true;
}

bool TrainingJobSpec::ResourceConfigIdHasBeenSet() const
{
    return m_resourceConfigIdHasBeenSet;
}

string TrainingJobSpec::GetResourceConfig() const
{
    return m_resourceConfig;
}

void TrainingJobSpec::SetResourceConfig(const string& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool TrainingJobSpec::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string TrainingJobSpec::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void TrainingJobSpec::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool TrainingJobSpec::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string TrainingJobSpec::GetResourcePartitionName() const
{
    return m_resourcePartitionName;
}

void TrainingJobSpec::SetResourcePartitionName(const string& _resourcePartitionName)
{
    m_resourcePartitionName = _resourcePartitionName;
    m_resourcePartitionNameHasBeenSet = true;
}

bool TrainingJobSpec::ResourcePartitionNameHasBeenSet() const
{
    return m_resourcePartitionNameHasBeenSet;
}

string TrainingJobSpec::GetQueue() const
{
    return m_queue;
}

void TrainingJobSpec::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool TrainingJobSpec::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

CheckpointMountInfo TrainingJobSpec::GetCheckpointMountInfo() const
{
    return m_checkpointMountInfo;
}

void TrainingJobSpec::SetCheckpointMountInfo(const CheckpointMountInfo& _checkpointMountInfo)
{
    m_checkpointMountInfo = _checkpointMountInfo;
    m_checkpointMountInfoHasBeenSet = true;
}

bool TrainingJobSpec::CheckpointMountInfoHasBeenSet() const
{
    return m_checkpointMountInfoHasBeenSet;
}

string TrainingJobSpec::GetCatalog() const
{
    return m_catalog;
}

void TrainingJobSpec::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool TrainingJobSpec::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string TrainingJobSpec::GetCreator() const
{
    return m_creator;
}

void TrainingJobSpec::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool TrainingJobSpec::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

int64_t TrainingJobSpec::GetCreateTime() const
{
    return m_createTime;
}

void TrainingJobSpec::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TrainingJobSpec::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t TrainingJobSpec::GetUpdateTime() const
{
    return m_updateTime;
}

void TrainingJobSpec::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TrainingJobSpec::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t TrainingJobSpec::GetInstanceCount() const
{
    return m_instanceCount;
}

void TrainingJobSpec::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool TrainingJobSpec::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

bool TrainingJobSpec::GetHasRunningInstances() const
{
    return m_hasRunningInstances;
}

void TrainingJobSpec::SetHasRunningInstances(const bool& _hasRunningInstances)
{
    m_hasRunningInstances = _hasRunningInstances;
    m_hasRunningInstancesHasBeenSet = true;
}

bool TrainingJobSpec::HasRunningInstancesHasBeenSet() const
{
    return m_hasRunningInstancesHasBeenSet;
}

int64_t TrainingJobSpec::GetPriority() const
{
    return m_priority;
}

void TrainingJobSpec::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool TrainingJobSpec::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string TrainingJobSpec::GetMlFlowConfig() const
{
    return m_mlFlowConfig;
}

void TrainingJobSpec::SetMlFlowConfig(const string& _mlFlowConfig)
{
    m_mlFlowConfig = _mlFlowConfig;
    m_mlFlowConfigHasBeenSet = true;
}

bool TrainingJobSpec::MlFlowConfigHasBeenSet() const
{
    return m_mlFlowConfigHasBeenSet;
}

string TrainingJobSpec::GetOutputModelName() const
{
    return m_outputModelName;
}

void TrainingJobSpec::SetOutputModelName(const string& _outputModelName)
{
    m_outputModelName = _outputModelName;
    m_outputModelNameHasBeenSet = true;
}

bool TrainingJobSpec::OutputModelNameHasBeenSet() const
{
    return m_outputModelNameHasBeenSet;
}

string TrainingJobSpec::GetMode() const
{
    return m_mode;
}

void TrainingJobSpec::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool TrainingJobSpec::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string TrainingJobSpec::GetBaseModelUid() const
{
    return m_baseModelUid;
}

void TrainingJobSpec::SetBaseModelUid(const string& _baseModelUid)
{
    m_baseModelUid = _baseModelUid;
    m_baseModelUidHasBeenSet = true;
}

bool TrainingJobSpec::BaseModelUidHasBeenSet() const
{
    return m_baseModelUidHasBeenSet;
}

string TrainingJobSpec::GetBaseModelName() const
{
    return m_baseModelName;
}

void TrainingJobSpec::SetBaseModelName(const string& _baseModelName)
{
    m_baseModelName = _baseModelName;
    m_baseModelNameHasBeenSet = true;
}

bool TrainingJobSpec::BaseModelNameHasBeenSet() const
{
    return m_baseModelNameHasBeenSet;
}

vector<DatasetMount> TrainingJobSpec::GetDatasets() const
{
    return m_datasets;
}

void TrainingJobSpec::SetDatasets(const vector<DatasetMount>& _datasets)
{
    m_datasets = _datasets;
    m_datasetsHasBeenSet = true;
}

bool TrainingJobSpec::DatasetsHasBeenSet() const
{
    return m_datasetsHasBeenSet;
}

string TrainingJobSpec::GetLastInstanceStatus() const
{
    return m_lastInstanceStatus;
}

void TrainingJobSpec::SetLastInstanceStatus(const string& _lastInstanceStatus)
{
    m_lastInstanceStatus = _lastInstanceStatus;
    m_lastInstanceStatusHasBeenSet = true;
}

bool TrainingJobSpec::LastInstanceStatusHasBeenSet() const
{
    return m_lastInstanceStatusHasBeenSet;
}

vector<Tag> TrainingJobSpec::GetTags() const
{
    return m_tags;
}

void TrainingJobSpec::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TrainingJobSpec::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

CheckpointConfig TrainingJobSpec::GetCheckpoint() const
{
    return m_checkpoint;
}

void TrainingJobSpec::SetCheckpoint(const CheckpointConfig& _checkpoint)
{
    m_checkpoint = _checkpoint;
    m_checkpointHasBeenSet = true;
}

bool TrainingJobSpec::CheckpointHasBeenSet() const
{
    return m_checkpointHasBeenSet;
}

TrainingTuningParams TrainingJobSpec::GetTuningParams() const
{
    return m_tuningParams;
}

void TrainingJobSpec::SetTuningParams(const TrainingTuningParams& _tuningParams)
{
    m_tuningParams = _tuningParams;
    m_tuningParamsHasBeenSet = true;
}

bool TrainingJobSpec::TuningParamsHasBeenSet() const
{
    return m_tuningParamsHasBeenSet;
}

bool TrainingJobSpec::GetResumeTraining() const
{
    return m_resumeTraining;
}

void TrainingJobSpec::SetResumeTraining(const bool& _resumeTraining)
{
    m_resumeTraining = _resumeTraining;
    m_resumeTrainingHasBeenSet = true;
}

bool TrainingJobSpec::ResumeTrainingHasBeenSet() const
{
    return m_resumeTrainingHasBeenSet;
}

string TrainingJobSpec::GetAdvancedOptions() const
{
    return m_advancedOptions;
}

void TrainingJobSpec::SetAdvancedOptions(const string& _advancedOptions)
{
    m_advancedOptions = _advancedOptions;
    m_advancedOptionsHasBeenSet = true;
}

bool TrainingJobSpec::AdvancedOptionsHasBeenSet() const
{
    return m_advancedOptionsHasBeenSet;
}

