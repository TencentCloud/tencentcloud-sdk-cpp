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

#include <tencentcloud/dlc/v20210125/model/TrainingJobInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

TrainingJobInstance::TrainingJobInstance() :
    m_instanceIdHasBeenSet(false),
    m_specIdHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_jobCreateTimeHasBeenSet(false),
    m_jobRunningTimeHasBeenSet(false),
    m_historyUrlHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_resourcePartitionIdHasBeenSet(false),
    m_resourcePartitionNameHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_runtimeEnvHasBeenSet(false),
    m_entrypointHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_codePackageUrlHasBeenSet(false),
    m_mlFlowConfigHasBeenSet(false),
    m_checkpointMountInfoHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_baseModelUidHasBeenSet(false),
    m_baseModelNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_datasetsHasBeenSet(false),
    m_checkpointHasBeenSet(false),
    m_tuningParamsHasBeenSet(false),
    m_resumeTrainingHasBeenSet(false)
{
}

CoreInternalOutcome TrainingJobInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("SpecId") && !value["SpecId"].IsNull())
    {
        if (!value["SpecId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.SpecId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specId = string(value["SpecId"].GetString());
        m_specIdHasBeenSet = true;
    }

    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("JobCreateTime") && !value["JobCreateTime"].IsNull())
    {
        if (!value["JobCreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.JobCreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobCreateTime = value["JobCreateTime"].GetInt64();
        m_jobCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("JobRunningTime") && !value["JobRunningTime"].IsNull())
    {
        if (!value["JobRunningTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.JobRunningTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobRunningTime = value["JobRunningTime"].GetInt64();
        m_jobRunningTimeHasBeenSet = true;
    }

    if (value.HasMember("HistoryUrl") && !value["HistoryUrl"].IsNull())
    {
        if (!value["HistoryUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.HistoryUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_historyUrl = string(value["HistoryUrl"].GetString());
        m_historyUrlHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourcePartitionId") && !value["ResourcePartitionId"].IsNull())
    {
        if (!value["ResourcePartitionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.ResourcePartitionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionId = string(value["ResourcePartitionId"].GetString());
        m_resourcePartitionIdHasBeenSet = true;
    }

    if (value.HasMember("ResourcePartitionName") && !value["ResourcePartitionName"].IsNull())
    {
        if (!value["ResourcePartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.ResourcePartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionName = string(value["ResourcePartitionName"].GetString());
        m_resourcePartitionNameHasBeenSet = true;
    }

    if (value.HasMember("Queue") && !value["Queue"].IsNull())
    {
        if (!value["Queue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.Queue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queue = string(value["Queue"].GetString());
        m_queueHasBeenSet = true;
    }

    if (value.HasMember("RuntimeEnv") && !value["RuntimeEnv"].IsNull())
    {
        if (!value["RuntimeEnv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.RuntimeEnv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeEnv = string(value["RuntimeEnv"].GetString());
        m_runtimeEnvHasBeenSet = true;
    }

    if (value.HasMember("Entrypoint") && !value["Entrypoint"].IsNull())
    {
        if (!value["Entrypoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.Entrypoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entrypoint = string(value["Entrypoint"].GetString());
        m_entrypointHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfig") && !value["ResourceConfig"].IsNull())
    {
        if (!value["ResourceConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.ResourceConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfig = string(value["ResourceConfig"].GetString());
        m_resourceConfigHasBeenSet = true;
    }

    if (value.HasMember("Catalog") && !value["Catalog"].IsNull())
    {
        if (!value["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(value["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (value.HasMember("AdvancedOptions") && !value["AdvancedOptions"].IsNull())
    {
        if (!value["AdvancedOptions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.AdvancedOptions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedOptions = string(value["AdvancedOptions"].GetString());
        m_advancedOptionsHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("CodePackageUrl") && !value["CodePackageUrl"].IsNull())
    {
        if (!value["CodePackageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.CodePackageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codePackageUrl = string(value["CodePackageUrl"].GetString());
        m_codePackageUrlHasBeenSet = true;
    }

    if (value.HasMember("MlFlowConfig") && !value["MlFlowConfig"].IsNull())
    {
        if (!value["MlFlowConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.MlFlowConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mlFlowConfig = string(value["MlFlowConfig"].GetString());
        m_mlFlowConfigHasBeenSet = true;
    }

    if (value.HasMember("CheckpointMountInfo") && !value["CheckpointMountInfo"].IsNull())
    {
        if (!value["CheckpointMountInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.CheckpointMountInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_checkpointMountInfo.Deserialize(value["CheckpointMountInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_checkpointMountInfoHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("BaseModelUid") && !value["BaseModelUid"].IsNull())
    {
        if (!value["BaseModelUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.BaseModelUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baseModelUid = string(value["BaseModelUid"].GetString());
        m_baseModelUidHasBeenSet = true;
    }

    if (value.HasMember("BaseModelName") && !value["BaseModelName"].IsNull())
    {
        if (!value["BaseModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.BaseModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baseModelName = string(value["BaseModelName"].GetString());
        m_baseModelNameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.Tags` is not array type"));

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

    if (value.HasMember("Datasets") && !value["Datasets"].IsNull())
    {
        if (!value["Datasets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.Datasets` is not array type"));

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

    if (value.HasMember("Checkpoint") && !value["Checkpoint"].IsNull())
    {
        if (!value["Checkpoint"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.Checkpoint` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.TuningParams` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `TrainingJobInstance.ResumeTraining` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_resumeTraining = value["ResumeTraining"].GetBool();
        m_resumeTrainingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrainingJobInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_jobCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobCreateTime, allocator);
    }

    if (m_jobRunningTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobRunningTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobRunningTime, allocator);
    }

    if (m_historyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistoryUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_historyUrl.c_str(), allocator).Move(), allocator);
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

    if (m_runtimeEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeEnv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeEnv.c_str(), allocator).Move(), allocator);
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

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advancedOptions.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_codePackageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodePackageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codePackageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_mlFlowConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MlFlowConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mlFlowConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_checkpointMountInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckpointMountInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_checkpointMountInfo.ToJsonObject(value[key.c_str()], allocator);
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

}


string TrainingJobInstance::GetInstanceId() const
{
    return m_instanceId;
}

void TrainingJobInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TrainingJobInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string TrainingJobInstance::GetSpecId() const
{
    return m_specId;
}

void TrainingJobInstance::SetSpecId(const string& _specId)
{
    m_specId = _specId;
    m_specIdHasBeenSet = true;
}

bool TrainingJobInstance::SpecIdHasBeenSet() const
{
    return m_specIdHasBeenSet;
}

string TrainingJobInstance::GetSpecName() const
{
    return m_specName;
}

void TrainingJobInstance::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool TrainingJobInstance::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

int64_t TrainingJobInstance::GetPriority() const
{
    return m_priority;
}

void TrainingJobInstance::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool TrainingJobInstance::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string TrainingJobInstance::GetStatus() const
{
    return m_status;
}

void TrainingJobInstance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TrainingJobInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TrainingJobInstance::GetErrorMessage() const
{
    return m_errorMessage;
}

void TrainingJobInstance::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool TrainingJobInstance::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

int64_t TrainingJobInstance::GetJobCreateTime() const
{
    return m_jobCreateTime;
}

void TrainingJobInstance::SetJobCreateTime(const int64_t& _jobCreateTime)
{
    m_jobCreateTime = _jobCreateTime;
    m_jobCreateTimeHasBeenSet = true;
}

bool TrainingJobInstance::JobCreateTimeHasBeenSet() const
{
    return m_jobCreateTimeHasBeenSet;
}

int64_t TrainingJobInstance::GetJobRunningTime() const
{
    return m_jobRunningTime;
}

void TrainingJobInstance::SetJobRunningTime(const int64_t& _jobRunningTime)
{
    m_jobRunningTime = _jobRunningTime;
    m_jobRunningTimeHasBeenSet = true;
}

bool TrainingJobInstance::JobRunningTimeHasBeenSet() const
{
    return m_jobRunningTimeHasBeenSet;
}

string TrainingJobInstance::GetHistoryUrl() const
{
    return m_historyUrl;
}

void TrainingJobInstance::SetHistoryUrl(const string& _historyUrl)
{
    m_historyUrl = _historyUrl;
    m_historyUrlHasBeenSet = true;
}

bool TrainingJobInstance::HistoryUrlHasBeenSet() const
{
    return m_historyUrlHasBeenSet;
}

string TrainingJobInstance::GetCreator() const
{
    return m_creator;
}

void TrainingJobInstance::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool TrainingJobInstance::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

int64_t TrainingJobInstance::GetCreateTime() const
{
    return m_createTime;
}

void TrainingJobInstance::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TrainingJobInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TrainingJobInstance::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void TrainingJobInstance::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool TrainingJobInstance::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string TrainingJobInstance::GetResourcePartitionName() const
{
    return m_resourcePartitionName;
}

void TrainingJobInstance::SetResourcePartitionName(const string& _resourcePartitionName)
{
    m_resourcePartitionName = _resourcePartitionName;
    m_resourcePartitionNameHasBeenSet = true;
}

bool TrainingJobInstance::ResourcePartitionNameHasBeenSet() const
{
    return m_resourcePartitionNameHasBeenSet;
}

string TrainingJobInstance::GetQueue() const
{
    return m_queue;
}

void TrainingJobInstance::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool TrainingJobInstance::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string TrainingJobInstance::GetRuntimeEnv() const
{
    return m_runtimeEnv;
}

void TrainingJobInstance::SetRuntimeEnv(const string& _runtimeEnv)
{
    m_runtimeEnv = _runtimeEnv;
    m_runtimeEnvHasBeenSet = true;
}

bool TrainingJobInstance::RuntimeEnvHasBeenSet() const
{
    return m_runtimeEnvHasBeenSet;
}

string TrainingJobInstance::GetEntrypoint() const
{
    return m_entrypoint;
}

void TrainingJobInstance::SetEntrypoint(const string& _entrypoint)
{
    m_entrypoint = _entrypoint;
    m_entrypointHasBeenSet = true;
}

bool TrainingJobInstance::EntrypointHasBeenSet() const
{
    return m_entrypointHasBeenSet;
}

string TrainingJobInstance::GetImage() const
{
    return m_image;
}

void TrainingJobInstance::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool TrainingJobInstance::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string TrainingJobInstance::GetResourceConfig() const
{
    return m_resourceConfig;
}

void TrainingJobInstance::SetResourceConfig(const string& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool TrainingJobInstance::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string TrainingJobInstance::GetCatalog() const
{
    return m_catalog;
}

void TrainingJobInstance::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool TrainingJobInstance::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string TrainingJobInstance::GetAdvancedOptions() const
{
    return m_advancedOptions;
}

void TrainingJobInstance::SetAdvancedOptions(const string& _advancedOptions)
{
    m_advancedOptions = _advancedOptions;
    m_advancedOptionsHasBeenSet = true;
}

bool TrainingJobInstance::AdvancedOptionsHasBeenSet() const
{
    return m_advancedOptionsHasBeenSet;
}

string TrainingJobInstance::GetKind() const
{
    return m_kind;
}

void TrainingJobInstance::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool TrainingJobInstance::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string TrainingJobInstance::GetCodePackageUrl() const
{
    return m_codePackageUrl;
}

void TrainingJobInstance::SetCodePackageUrl(const string& _codePackageUrl)
{
    m_codePackageUrl = _codePackageUrl;
    m_codePackageUrlHasBeenSet = true;
}

bool TrainingJobInstance::CodePackageUrlHasBeenSet() const
{
    return m_codePackageUrlHasBeenSet;
}

string TrainingJobInstance::GetMlFlowConfig() const
{
    return m_mlFlowConfig;
}

void TrainingJobInstance::SetMlFlowConfig(const string& _mlFlowConfig)
{
    m_mlFlowConfig = _mlFlowConfig;
    m_mlFlowConfigHasBeenSet = true;
}

bool TrainingJobInstance::MlFlowConfigHasBeenSet() const
{
    return m_mlFlowConfigHasBeenSet;
}

CheckpointMountInfo TrainingJobInstance::GetCheckpointMountInfo() const
{
    return m_checkpointMountInfo;
}

void TrainingJobInstance::SetCheckpointMountInfo(const CheckpointMountInfo& _checkpointMountInfo)
{
    m_checkpointMountInfo = _checkpointMountInfo;
    m_checkpointMountInfoHasBeenSet = true;
}

bool TrainingJobInstance::CheckpointMountInfoHasBeenSet() const
{
    return m_checkpointMountInfoHasBeenSet;
}

string TrainingJobInstance::GetMode() const
{
    return m_mode;
}

void TrainingJobInstance::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool TrainingJobInstance::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string TrainingJobInstance::GetBaseModelUid() const
{
    return m_baseModelUid;
}

void TrainingJobInstance::SetBaseModelUid(const string& _baseModelUid)
{
    m_baseModelUid = _baseModelUid;
    m_baseModelUidHasBeenSet = true;
}

bool TrainingJobInstance::BaseModelUidHasBeenSet() const
{
    return m_baseModelUidHasBeenSet;
}

string TrainingJobInstance::GetBaseModelName() const
{
    return m_baseModelName;
}

void TrainingJobInstance::SetBaseModelName(const string& _baseModelName)
{
    m_baseModelName = _baseModelName;
    m_baseModelNameHasBeenSet = true;
}

bool TrainingJobInstance::BaseModelNameHasBeenSet() const
{
    return m_baseModelNameHasBeenSet;
}

vector<Tag> TrainingJobInstance::GetTags() const
{
    return m_tags;
}

void TrainingJobInstance::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TrainingJobInstance::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<DatasetMount> TrainingJobInstance::GetDatasets() const
{
    return m_datasets;
}

void TrainingJobInstance::SetDatasets(const vector<DatasetMount>& _datasets)
{
    m_datasets = _datasets;
    m_datasetsHasBeenSet = true;
}

bool TrainingJobInstance::DatasetsHasBeenSet() const
{
    return m_datasetsHasBeenSet;
}

CheckpointConfig TrainingJobInstance::GetCheckpoint() const
{
    return m_checkpoint;
}

void TrainingJobInstance::SetCheckpoint(const CheckpointConfig& _checkpoint)
{
    m_checkpoint = _checkpoint;
    m_checkpointHasBeenSet = true;
}

bool TrainingJobInstance::CheckpointHasBeenSet() const
{
    return m_checkpointHasBeenSet;
}

TrainingTuningParams TrainingJobInstance::GetTuningParams() const
{
    return m_tuningParams;
}

void TrainingJobInstance::SetTuningParams(const TrainingTuningParams& _tuningParams)
{
    m_tuningParams = _tuningParams;
    m_tuningParamsHasBeenSet = true;
}

bool TrainingJobInstance::TuningParamsHasBeenSet() const
{
    return m_tuningParamsHasBeenSet;
}

bool TrainingJobInstance::GetResumeTraining() const
{
    return m_resumeTraining;
}

void TrainingJobInstance::SetResumeTraining(const bool& _resumeTraining)
{
    m_resumeTraining = _resumeTraining;
    m_resumeTrainingHasBeenSet = true;
}

bool TrainingJobInstance::ResumeTrainingHasBeenSet() const
{
    return m_resumeTrainingHasBeenSet;
}

