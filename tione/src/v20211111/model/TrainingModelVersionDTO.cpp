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

#include <tencentcloud/tione/v20211111/model/TrainingModelVersionDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

TrainingModelVersionDTO::TrainingModelVersionDTO() :
    m_trainingModelIdHasBeenSet(false),
    m_trainingModelVersionIdHasBeenSet(false),
    m_trainingModelVersionHasBeenSet(false),
    m_trainingModelSourceHasBeenSet(false),
    m_trainingModelCreateTimeHasBeenSet(false),
    m_trainingModelCreatorHasBeenSet(false),
    m_algorithmFrameworkHasBeenSet(false),
    m_reasoningEnvironmentHasBeenSet(false),
    m_reasoningEnvironmentSourceHasBeenSet(false),
    m_trainingModelIndexHasBeenSet(false),
    m_trainingJobNameHasBeenSet(false),
    m_trainingModelCosPathHasBeenSet(false),
    m_trainingModelNameHasBeenSet(false),
    m_trainingJobIdHasBeenSet(false),
    m_reasoningImageInfoHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_trainingModelStatusHasBeenSet(false),
    m_trainingModelProgressHasBeenSet(false),
    m_trainingModelErrorMsgHasBeenSet(false),
    m_trainingModelFormatHasBeenSet(false),
    m_versionTypeHasBeenSet(false),
    m_gPUTypeHasBeenSet(false),
    m_autoCleanHasBeenSet(false),
    m_modelCleanPeriodHasBeenSet(false),
    m_maxReservedModelsHasBeenSet(false),
    m_modelHotUpdatePathHasBeenSet(false),
    m_reasoningEnvironmentIdHasBeenSet(false),
    m_trainingJobVersionHasBeenSet(false),
    m_trainingPreferenceHasBeenSet(false),
    m_autoMLTaskIdHasBeenSet(false),
    m_isQATHasBeenSet(false)
{
}

CoreInternalOutcome TrainingModelVersionDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TrainingModelId") && !value["TrainingModelId"].IsNull())
    {
        if (!value["TrainingModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.TrainingModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingModelId = string(value["TrainingModelId"].GetString());
        m_trainingModelIdHasBeenSet = true;
    }

    if (value.HasMember("TrainingModelVersionId") && !value["TrainingModelVersionId"].IsNull())
    {
        if (!value["TrainingModelVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.TrainingModelVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingModelVersionId = string(value["TrainingModelVersionId"].GetString());
        m_trainingModelVersionIdHasBeenSet = true;
    }

    if (value.HasMember("TrainingModelVersion") && !value["TrainingModelVersion"].IsNull())
    {
        if (!value["TrainingModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.TrainingModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingModelVersion = string(value["TrainingModelVersion"].GetString());
        m_trainingModelVersionHasBeenSet = true;
    }

    if (value.HasMember("TrainingModelSource") && !value["TrainingModelSource"].IsNull())
    {
        if (!value["TrainingModelSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.TrainingModelSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingModelSource = string(value["TrainingModelSource"].GetString());
        m_trainingModelSourceHasBeenSet = true;
    }

    if (value.HasMember("TrainingModelCreateTime") && !value["TrainingModelCreateTime"].IsNull())
    {
        if (!value["TrainingModelCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.TrainingModelCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingModelCreateTime = string(value["TrainingModelCreateTime"].GetString());
        m_trainingModelCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("TrainingModelCreator") && !value["TrainingModelCreator"].IsNull())
    {
        if (!value["TrainingModelCreator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.TrainingModelCreator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingModelCreator = string(value["TrainingModelCreator"].GetString());
        m_trainingModelCreatorHasBeenSet = true;
    }

    if (value.HasMember("AlgorithmFramework") && !value["AlgorithmFramework"].IsNull())
    {
        if (!value["AlgorithmFramework"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.AlgorithmFramework` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_algorithmFramework = string(value["AlgorithmFramework"].GetString());
        m_algorithmFrameworkHasBeenSet = true;
    }

    if (value.HasMember("ReasoningEnvironment") && !value["ReasoningEnvironment"].IsNull())
    {
        if (!value["ReasoningEnvironment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.ReasoningEnvironment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reasoningEnvironment = string(value["ReasoningEnvironment"].GetString());
        m_reasoningEnvironmentHasBeenSet = true;
    }

    if (value.HasMember("ReasoningEnvironmentSource") && !value["ReasoningEnvironmentSource"].IsNull())
    {
        if (!value["ReasoningEnvironmentSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.ReasoningEnvironmentSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reasoningEnvironmentSource = string(value["ReasoningEnvironmentSource"].GetString());
        m_reasoningEnvironmentSourceHasBeenSet = true;
    }

    if (value.HasMember("TrainingModelIndex") && !value["TrainingModelIndex"].IsNull())
    {
        if (!value["TrainingModelIndex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.TrainingModelIndex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingModelIndex = string(value["TrainingModelIndex"].GetString());
        m_trainingModelIndexHasBeenSet = true;
    }

    if (value.HasMember("TrainingJobName") && !value["TrainingJobName"].IsNull())
    {
        if (!value["TrainingJobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.TrainingJobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingJobName = string(value["TrainingJobName"].GetString());
        m_trainingJobNameHasBeenSet = true;
    }

    if (value.HasMember("TrainingModelCosPath") && !value["TrainingModelCosPath"].IsNull())
    {
        if (!value["TrainingModelCosPath"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.TrainingModelCosPath` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trainingModelCosPath.Deserialize(value["TrainingModelCosPath"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_trainingModelCosPathHasBeenSet = true;
    }

    if (value.HasMember("TrainingModelName") && !value["TrainingModelName"].IsNull())
    {
        if (!value["TrainingModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.TrainingModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingModelName = string(value["TrainingModelName"].GetString());
        m_trainingModelNameHasBeenSet = true;
    }

    if (value.HasMember("TrainingJobId") && !value["TrainingJobId"].IsNull())
    {
        if (!value["TrainingJobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.TrainingJobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingJobId = string(value["TrainingJobId"].GetString());
        m_trainingJobIdHasBeenSet = true;
    }

    if (value.HasMember("ReasoningImageInfo") && !value["ReasoningImageInfo"].IsNull())
    {
        if (!value["ReasoningImageInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.ReasoningImageInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_reasoningImageInfo.Deserialize(value["ReasoningImageInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_reasoningImageInfoHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("TrainingModelStatus") && !value["TrainingModelStatus"].IsNull())
    {
        if (!value["TrainingModelStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.TrainingModelStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingModelStatus = string(value["TrainingModelStatus"].GetString());
        m_trainingModelStatusHasBeenSet = true;
    }

    if (value.HasMember("TrainingModelProgress") && !value["TrainingModelProgress"].IsNull())
    {
        if (!value["TrainingModelProgress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.TrainingModelProgress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trainingModelProgress = value["TrainingModelProgress"].GetUint64();
        m_trainingModelProgressHasBeenSet = true;
    }

    if (value.HasMember("TrainingModelErrorMsg") && !value["TrainingModelErrorMsg"].IsNull())
    {
        if (!value["TrainingModelErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.TrainingModelErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingModelErrorMsg = string(value["TrainingModelErrorMsg"].GetString());
        m_trainingModelErrorMsgHasBeenSet = true;
    }

    if (value.HasMember("TrainingModelFormat") && !value["TrainingModelFormat"].IsNull())
    {
        if (!value["TrainingModelFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.TrainingModelFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingModelFormat = string(value["TrainingModelFormat"].GetString());
        m_trainingModelFormatHasBeenSet = true;
    }

    if (value.HasMember("VersionType") && !value["VersionType"].IsNull())
    {
        if (!value["VersionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.VersionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionType = string(value["VersionType"].GetString());
        m_versionTypeHasBeenSet = true;
    }

    if (value.HasMember("GPUType") && !value["GPUType"].IsNull())
    {
        if (!value["GPUType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.GPUType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gPUType = string(value["GPUType"].GetString());
        m_gPUTypeHasBeenSet = true;
    }

    if (value.HasMember("AutoClean") && !value["AutoClean"].IsNull())
    {
        if (!value["AutoClean"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.AutoClean` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoClean = string(value["AutoClean"].GetString());
        m_autoCleanHasBeenSet = true;
    }

    if (value.HasMember("ModelCleanPeriod") && !value["ModelCleanPeriod"].IsNull())
    {
        if (!value["ModelCleanPeriod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.ModelCleanPeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_modelCleanPeriod = value["ModelCleanPeriod"].GetUint64();
        m_modelCleanPeriodHasBeenSet = true;
    }

    if (value.HasMember("MaxReservedModels") && !value["MaxReservedModels"].IsNull())
    {
        if (!value["MaxReservedModels"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.MaxReservedModels` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReservedModels = value["MaxReservedModels"].GetUint64();
        m_maxReservedModelsHasBeenSet = true;
    }

    if (value.HasMember("ModelHotUpdatePath") && !value["ModelHotUpdatePath"].IsNull())
    {
        if (!value["ModelHotUpdatePath"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.ModelHotUpdatePath` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelHotUpdatePath.Deserialize(value["ModelHotUpdatePath"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelHotUpdatePathHasBeenSet = true;
    }

    if (value.HasMember("ReasoningEnvironmentId") && !value["ReasoningEnvironmentId"].IsNull())
    {
        if (!value["ReasoningEnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.ReasoningEnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reasoningEnvironmentId = string(value["ReasoningEnvironmentId"].GetString());
        m_reasoningEnvironmentIdHasBeenSet = true;
    }

    if (value.HasMember("TrainingJobVersion") && !value["TrainingJobVersion"].IsNull())
    {
        if (!value["TrainingJobVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.TrainingJobVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingJobVersion = string(value["TrainingJobVersion"].GetString());
        m_trainingJobVersionHasBeenSet = true;
    }

    if (value.HasMember("TrainingPreference") && !value["TrainingPreference"].IsNull())
    {
        if (!value["TrainingPreference"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.TrainingPreference` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingPreference = string(value["TrainingPreference"].GetString());
        m_trainingPreferenceHasBeenSet = true;
    }

    if (value.HasMember("AutoMLTaskId") && !value["AutoMLTaskId"].IsNull())
    {
        if (!value["AutoMLTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.AutoMLTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoMLTaskId = string(value["AutoMLTaskId"].GetString());
        m_autoMLTaskIdHasBeenSet = true;
    }

    if (value.HasMember("IsQAT") && !value["IsQAT"].IsNull())
    {
        if (!value["IsQAT"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingModelVersionDTO.IsQAT` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isQAT = value["IsQAT"].GetBool();
        m_isQATHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrainingModelVersionDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_trainingModelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingModelId.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModelVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingModelVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingModelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModelSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingModelSource.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModelCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingModelCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModelCreatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelCreator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingModelCreator.c_str(), allocator).Move(), allocator);
    }

    if (m_algorithmFrameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlgorithmFramework";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_algorithmFramework.c_str(), allocator).Move(), allocator);
    }

    if (m_reasoningEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningEnvironment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reasoningEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_reasoningEnvironmentSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningEnvironmentSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reasoningEnvironmentSource.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModelIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingModelIndex.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingJobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingJobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingJobName.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModelCosPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelCosPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trainingModelCosPath.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_trainingModelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingModelName.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_reasoningImageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningImageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reasoningImageInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModelStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingModelStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModelProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trainingModelProgress, allocator);
    }

    if (m_trainingModelErrorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingModelErrorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingModelFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingModelFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingModelFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_versionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionType.c_str(), allocator).Move(), allocator);
    }

    if (m_gPUTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gPUType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoCleanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoClean";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoClean.c_str(), allocator).Move(), allocator);
    }

    if (m_modelCleanPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelCleanPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modelCleanPeriod, allocator);
    }

    if (m_maxReservedModelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReservedModels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReservedModels, allocator);
    }

    if (m_modelHotUpdatePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelHotUpdatePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelHotUpdatePath.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_reasoningEnvironmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningEnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reasoningEnvironmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingJobVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingJobVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingJobVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingPreferenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingPreference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingPreference.c_str(), allocator).Move(), allocator);
    }

    if (m_autoMLTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoMLTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoMLTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_isQATHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQAT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isQAT, allocator);
    }

}


string TrainingModelVersionDTO::GetTrainingModelId() const
{
    return m_trainingModelId;
}

void TrainingModelVersionDTO::SetTrainingModelId(const string& _trainingModelId)
{
    m_trainingModelId = _trainingModelId;
    m_trainingModelIdHasBeenSet = true;
}

bool TrainingModelVersionDTO::TrainingModelIdHasBeenSet() const
{
    return m_trainingModelIdHasBeenSet;
}

string TrainingModelVersionDTO::GetTrainingModelVersionId() const
{
    return m_trainingModelVersionId;
}

void TrainingModelVersionDTO::SetTrainingModelVersionId(const string& _trainingModelVersionId)
{
    m_trainingModelVersionId = _trainingModelVersionId;
    m_trainingModelVersionIdHasBeenSet = true;
}

bool TrainingModelVersionDTO::TrainingModelVersionIdHasBeenSet() const
{
    return m_trainingModelVersionIdHasBeenSet;
}

string TrainingModelVersionDTO::GetTrainingModelVersion() const
{
    return m_trainingModelVersion;
}

void TrainingModelVersionDTO::SetTrainingModelVersion(const string& _trainingModelVersion)
{
    m_trainingModelVersion = _trainingModelVersion;
    m_trainingModelVersionHasBeenSet = true;
}

bool TrainingModelVersionDTO::TrainingModelVersionHasBeenSet() const
{
    return m_trainingModelVersionHasBeenSet;
}

string TrainingModelVersionDTO::GetTrainingModelSource() const
{
    return m_trainingModelSource;
}

void TrainingModelVersionDTO::SetTrainingModelSource(const string& _trainingModelSource)
{
    m_trainingModelSource = _trainingModelSource;
    m_trainingModelSourceHasBeenSet = true;
}

bool TrainingModelVersionDTO::TrainingModelSourceHasBeenSet() const
{
    return m_trainingModelSourceHasBeenSet;
}

string TrainingModelVersionDTO::GetTrainingModelCreateTime() const
{
    return m_trainingModelCreateTime;
}

void TrainingModelVersionDTO::SetTrainingModelCreateTime(const string& _trainingModelCreateTime)
{
    m_trainingModelCreateTime = _trainingModelCreateTime;
    m_trainingModelCreateTimeHasBeenSet = true;
}

bool TrainingModelVersionDTO::TrainingModelCreateTimeHasBeenSet() const
{
    return m_trainingModelCreateTimeHasBeenSet;
}

string TrainingModelVersionDTO::GetTrainingModelCreator() const
{
    return m_trainingModelCreator;
}

void TrainingModelVersionDTO::SetTrainingModelCreator(const string& _trainingModelCreator)
{
    m_trainingModelCreator = _trainingModelCreator;
    m_trainingModelCreatorHasBeenSet = true;
}

bool TrainingModelVersionDTO::TrainingModelCreatorHasBeenSet() const
{
    return m_trainingModelCreatorHasBeenSet;
}

string TrainingModelVersionDTO::GetAlgorithmFramework() const
{
    return m_algorithmFramework;
}

void TrainingModelVersionDTO::SetAlgorithmFramework(const string& _algorithmFramework)
{
    m_algorithmFramework = _algorithmFramework;
    m_algorithmFrameworkHasBeenSet = true;
}

bool TrainingModelVersionDTO::AlgorithmFrameworkHasBeenSet() const
{
    return m_algorithmFrameworkHasBeenSet;
}

string TrainingModelVersionDTO::GetReasoningEnvironment() const
{
    return m_reasoningEnvironment;
}

void TrainingModelVersionDTO::SetReasoningEnvironment(const string& _reasoningEnvironment)
{
    m_reasoningEnvironment = _reasoningEnvironment;
    m_reasoningEnvironmentHasBeenSet = true;
}

bool TrainingModelVersionDTO::ReasoningEnvironmentHasBeenSet() const
{
    return m_reasoningEnvironmentHasBeenSet;
}

string TrainingModelVersionDTO::GetReasoningEnvironmentSource() const
{
    return m_reasoningEnvironmentSource;
}

void TrainingModelVersionDTO::SetReasoningEnvironmentSource(const string& _reasoningEnvironmentSource)
{
    m_reasoningEnvironmentSource = _reasoningEnvironmentSource;
    m_reasoningEnvironmentSourceHasBeenSet = true;
}

bool TrainingModelVersionDTO::ReasoningEnvironmentSourceHasBeenSet() const
{
    return m_reasoningEnvironmentSourceHasBeenSet;
}

string TrainingModelVersionDTO::GetTrainingModelIndex() const
{
    return m_trainingModelIndex;
}

void TrainingModelVersionDTO::SetTrainingModelIndex(const string& _trainingModelIndex)
{
    m_trainingModelIndex = _trainingModelIndex;
    m_trainingModelIndexHasBeenSet = true;
}

bool TrainingModelVersionDTO::TrainingModelIndexHasBeenSet() const
{
    return m_trainingModelIndexHasBeenSet;
}

string TrainingModelVersionDTO::GetTrainingJobName() const
{
    return m_trainingJobName;
}

void TrainingModelVersionDTO::SetTrainingJobName(const string& _trainingJobName)
{
    m_trainingJobName = _trainingJobName;
    m_trainingJobNameHasBeenSet = true;
}

bool TrainingModelVersionDTO::TrainingJobNameHasBeenSet() const
{
    return m_trainingJobNameHasBeenSet;
}

CosPathInfo TrainingModelVersionDTO::GetTrainingModelCosPath() const
{
    return m_trainingModelCosPath;
}

void TrainingModelVersionDTO::SetTrainingModelCosPath(const CosPathInfo& _trainingModelCosPath)
{
    m_trainingModelCosPath = _trainingModelCosPath;
    m_trainingModelCosPathHasBeenSet = true;
}

bool TrainingModelVersionDTO::TrainingModelCosPathHasBeenSet() const
{
    return m_trainingModelCosPathHasBeenSet;
}

string TrainingModelVersionDTO::GetTrainingModelName() const
{
    return m_trainingModelName;
}

void TrainingModelVersionDTO::SetTrainingModelName(const string& _trainingModelName)
{
    m_trainingModelName = _trainingModelName;
    m_trainingModelNameHasBeenSet = true;
}

bool TrainingModelVersionDTO::TrainingModelNameHasBeenSet() const
{
    return m_trainingModelNameHasBeenSet;
}

string TrainingModelVersionDTO::GetTrainingJobId() const
{
    return m_trainingJobId;
}

void TrainingModelVersionDTO::SetTrainingJobId(const string& _trainingJobId)
{
    m_trainingJobId = _trainingJobId;
    m_trainingJobIdHasBeenSet = true;
}

bool TrainingModelVersionDTO::TrainingJobIdHasBeenSet() const
{
    return m_trainingJobIdHasBeenSet;
}

ImageInfo TrainingModelVersionDTO::GetReasoningImageInfo() const
{
    return m_reasoningImageInfo;
}

void TrainingModelVersionDTO::SetReasoningImageInfo(const ImageInfo& _reasoningImageInfo)
{
    m_reasoningImageInfo = _reasoningImageInfo;
    m_reasoningImageInfoHasBeenSet = true;
}

bool TrainingModelVersionDTO::ReasoningImageInfoHasBeenSet() const
{
    return m_reasoningImageInfoHasBeenSet;
}

string TrainingModelVersionDTO::GetCreateTime() const
{
    return m_createTime;
}

void TrainingModelVersionDTO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TrainingModelVersionDTO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TrainingModelVersionDTO::GetTrainingModelStatus() const
{
    return m_trainingModelStatus;
}

void TrainingModelVersionDTO::SetTrainingModelStatus(const string& _trainingModelStatus)
{
    m_trainingModelStatus = _trainingModelStatus;
    m_trainingModelStatusHasBeenSet = true;
}

bool TrainingModelVersionDTO::TrainingModelStatusHasBeenSet() const
{
    return m_trainingModelStatusHasBeenSet;
}

uint64_t TrainingModelVersionDTO::GetTrainingModelProgress() const
{
    return m_trainingModelProgress;
}

void TrainingModelVersionDTO::SetTrainingModelProgress(const uint64_t& _trainingModelProgress)
{
    m_trainingModelProgress = _trainingModelProgress;
    m_trainingModelProgressHasBeenSet = true;
}

bool TrainingModelVersionDTO::TrainingModelProgressHasBeenSet() const
{
    return m_trainingModelProgressHasBeenSet;
}

string TrainingModelVersionDTO::GetTrainingModelErrorMsg() const
{
    return m_trainingModelErrorMsg;
}

void TrainingModelVersionDTO::SetTrainingModelErrorMsg(const string& _trainingModelErrorMsg)
{
    m_trainingModelErrorMsg = _trainingModelErrorMsg;
    m_trainingModelErrorMsgHasBeenSet = true;
}

bool TrainingModelVersionDTO::TrainingModelErrorMsgHasBeenSet() const
{
    return m_trainingModelErrorMsgHasBeenSet;
}

string TrainingModelVersionDTO::GetTrainingModelFormat() const
{
    return m_trainingModelFormat;
}

void TrainingModelVersionDTO::SetTrainingModelFormat(const string& _trainingModelFormat)
{
    m_trainingModelFormat = _trainingModelFormat;
    m_trainingModelFormatHasBeenSet = true;
}

bool TrainingModelVersionDTO::TrainingModelFormatHasBeenSet() const
{
    return m_trainingModelFormatHasBeenSet;
}

string TrainingModelVersionDTO::GetVersionType() const
{
    return m_versionType;
}

void TrainingModelVersionDTO::SetVersionType(const string& _versionType)
{
    m_versionType = _versionType;
    m_versionTypeHasBeenSet = true;
}

bool TrainingModelVersionDTO::VersionTypeHasBeenSet() const
{
    return m_versionTypeHasBeenSet;
}

string TrainingModelVersionDTO::GetGPUType() const
{
    return m_gPUType;
}

void TrainingModelVersionDTO::SetGPUType(const string& _gPUType)
{
    m_gPUType = _gPUType;
    m_gPUTypeHasBeenSet = true;
}

bool TrainingModelVersionDTO::GPUTypeHasBeenSet() const
{
    return m_gPUTypeHasBeenSet;
}

string TrainingModelVersionDTO::GetAutoClean() const
{
    return m_autoClean;
}

void TrainingModelVersionDTO::SetAutoClean(const string& _autoClean)
{
    m_autoClean = _autoClean;
    m_autoCleanHasBeenSet = true;
}

bool TrainingModelVersionDTO::AutoCleanHasBeenSet() const
{
    return m_autoCleanHasBeenSet;
}

uint64_t TrainingModelVersionDTO::GetModelCleanPeriod() const
{
    return m_modelCleanPeriod;
}

void TrainingModelVersionDTO::SetModelCleanPeriod(const uint64_t& _modelCleanPeriod)
{
    m_modelCleanPeriod = _modelCleanPeriod;
    m_modelCleanPeriodHasBeenSet = true;
}

bool TrainingModelVersionDTO::ModelCleanPeriodHasBeenSet() const
{
    return m_modelCleanPeriodHasBeenSet;
}

uint64_t TrainingModelVersionDTO::GetMaxReservedModels() const
{
    return m_maxReservedModels;
}

void TrainingModelVersionDTO::SetMaxReservedModels(const uint64_t& _maxReservedModels)
{
    m_maxReservedModels = _maxReservedModels;
    m_maxReservedModelsHasBeenSet = true;
}

bool TrainingModelVersionDTO::MaxReservedModelsHasBeenSet() const
{
    return m_maxReservedModelsHasBeenSet;
}

CosPathInfo TrainingModelVersionDTO::GetModelHotUpdatePath() const
{
    return m_modelHotUpdatePath;
}

void TrainingModelVersionDTO::SetModelHotUpdatePath(const CosPathInfo& _modelHotUpdatePath)
{
    m_modelHotUpdatePath = _modelHotUpdatePath;
    m_modelHotUpdatePathHasBeenSet = true;
}

bool TrainingModelVersionDTO::ModelHotUpdatePathHasBeenSet() const
{
    return m_modelHotUpdatePathHasBeenSet;
}

string TrainingModelVersionDTO::GetReasoningEnvironmentId() const
{
    return m_reasoningEnvironmentId;
}

void TrainingModelVersionDTO::SetReasoningEnvironmentId(const string& _reasoningEnvironmentId)
{
    m_reasoningEnvironmentId = _reasoningEnvironmentId;
    m_reasoningEnvironmentIdHasBeenSet = true;
}

bool TrainingModelVersionDTO::ReasoningEnvironmentIdHasBeenSet() const
{
    return m_reasoningEnvironmentIdHasBeenSet;
}

string TrainingModelVersionDTO::GetTrainingJobVersion() const
{
    return m_trainingJobVersion;
}

void TrainingModelVersionDTO::SetTrainingJobVersion(const string& _trainingJobVersion)
{
    m_trainingJobVersion = _trainingJobVersion;
    m_trainingJobVersionHasBeenSet = true;
}

bool TrainingModelVersionDTO::TrainingJobVersionHasBeenSet() const
{
    return m_trainingJobVersionHasBeenSet;
}

string TrainingModelVersionDTO::GetTrainingPreference() const
{
    return m_trainingPreference;
}

void TrainingModelVersionDTO::SetTrainingPreference(const string& _trainingPreference)
{
    m_trainingPreference = _trainingPreference;
    m_trainingPreferenceHasBeenSet = true;
}

bool TrainingModelVersionDTO::TrainingPreferenceHasBeenSet() const
{
    return m_trainingPreferenceHasBeenSet;
}

string TrainingModelVersionDTO::GetAutoMLTaskId() const
{
    return m_autoMLTaskId;
}

void TrainingModelVersionDTO::SetAutoMLTaskId(const string& _autoMLTaskId)
{
    m_autoMLTaskId = _autoMLTaskId;
    m_autoMLTaskIdHasBeenSet = true;
}

bool TrainingModelVersionDTO::AutoMLTaskIdHasBeenSet() const
{
    return m_autoMLTaskIdHasBeenSet;
}

bool TrainingModelVersionDTO::GetIsQAT() const
{
    return m_isQAT;
}

void TrainingModelVersionDTO::SetIsQAT(const bool& _isQAT)
{
    m_isQAT = _isQAT;
    m_isQATHasBeenSet = true;
}

bool TrainingModelVersionDTO::IsQATHasBeenSet() const
{
    return m_isQATHasBeenSet;
}

