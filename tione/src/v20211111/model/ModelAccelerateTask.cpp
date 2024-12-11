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

#include <tencentcloud/tione/v20211111/model/ModelAccelerateTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ModelAccelerateTask::ModelAccelerateTask() :
    m_modelAccTaskIdHasBeenSet(false),
    m_modelAccTaskNameHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_modelSourceHasBeenSet(false),
    m_optimizationLevelHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_modelInputNumHasBeenSet(false),
    m_modelInputInfosHasBeenSet(false),
    m_gPUTypeHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_speedupHasBeenSet(false),
    m_modelInputPathHasBeenSet(false),
    m_modelOutputPathHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_algorithmFrameworkHasBeenSet(false),
    m_waitNumberHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_taskProgressHasBeenSet(false),
    m_modelFormatHasBeenSet(false),
    m_tensorInfosHasBeenSet(false),
    m_hyperParameterHasBeenSet(false),
    m_accEngineVersionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_isSavedHasBeenSet(false),
    m_modelSignatureHasBeenSet(false),
    m_qATModelHasBeenSet(false),
    m_frameworkVersionHasBeenSet(false),
    m_modelVersionIdHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome ModelAccelerateTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelAccTaskId") && !value["ModelAccTaskId"].IsNull())
    {
        if (!value["ModelAccTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.ModelAccTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelAccTaskId = string(value["ModelAccTaskId"].GetString());
        m_modelAccTaskIdHasBeenSet = true;
    }

    if (value.HasMember("ModelAccTaskName") && !value["ModelAccTaskName"].IsNull())
    {
        if (!value["ModelAccTaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.ModelAccTaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelAccTaskName = string(value["ModelAccTaskName"].GetString());
        m_modelAccTaskNameHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }

    if (value.HasMember("ModelSource") && !value["ModelSource"].IsNull())
    {
        if (!value["ModelSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.ModelSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelSource = string(value["ModelSource"].GetString());
        m_modelSourceHasBeenSet = true;
    }

    if (value.HasMember("OptimizationLevel") && !value["OptimizationLevel"].IsNull())
    {
        if (!value["OptimizationLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.OptimizationLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_optimizationLevel = string(value["OptimizationLevel"].GetString());
        m_optimizationLevelHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("ModelInputNum") && !value["ModelInputNum"].IsNull())
    {
        if (!value["ModelInputNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.ModelInputNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_modelInputNum = value["ModelInputNum"].GetUint64();
        m_modelInputNumHasBeenSet = true;
    }

    if (value.HasMember("ModelInputInfos") && !value["ModelInputInfos"].IsNull())
    {
        if (!value["ModelInputInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.ModelInputInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ModelInputInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ModelInputInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_modelInputInfos.push_back(item);
        }
        m_modelInputInfosHasBeenSet = true;
    }

    if (value.HasMember("GPUType") && !value["GPUType"].IsNull())
    {
        if (!value["GPUType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.GPUType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gPUType = string(value["GPUType"].GetString());
        m_gPUTypeHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("Speedup") && !value["Speedup"].IsNull())
    {
        if (!value["Speedup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.Speedup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_speedup = string(value["Speedup"].GetString());
        m_speedupHasBeenSet = true;
    }

    if (value.HasMember("ModelInputPath") && !value["ModelInputPath"].IsNull())
    {
        if (!value["ModelInputPath"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.ModelInputPath` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelInputPath.Deserialize(value["ModelInputPath"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelInputPathHasBeenSet = true;
    }

    if (value.HasMember("ModelOutputPath") && !value["ModelOutputPath"].IsNull())
    {
        if (!value["ModelOutputPath"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.ModelOutputPath` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelOutputPath.Deserialize(value["ModelOutputPath"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelOutputPathHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (value.HasMember("AlgorithmFramework") && !value["AlgorithmFramework"].IsNull())
    {
        if (!value["AlgorithmFramework"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.AlgorithmFramework` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_algorithmFramework = string(value["AlgorithmFramework"].GetString());
        m_algorithmFrameworkHasBeenSet = true;
    }

    if (value.HasMember("WaitNumber") && !value["WaitNumber"].IsNull())
    {
        if (!value["WaitNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.WaitNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_waitNumber = value["WaitNumber"].GetUint64();
        m_waitNumberHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskProgress") && !value["TaskProgress"].IsNull())
    {
        if (!value["TaskProgress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.TaskProgress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskProgress = value["TaskProgress"].GetUint64();
        m_taskProgressHasBeenSet = true;
    }

    if (value.HasMember("ModelFormat") && !value["ModelFormat"].IsNull())
    {
        if (!value["ModelFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.ModelFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelFormat = string(value["ModelFormat"].GetString());
        m_modelFormatHasBeenSet = true;
    }

    if (value.HasMember("TensorInfos") && !value["TensorInfos"].IsNull())
    {
        if (!value["TensorInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.TensorInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["TensorInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tensorInfos.push_back((*itr).GetString());
        }
        m_tensorInfosHasBeenSet = true;
    }

    if (value.HasMember("HyperParameter") && !value["HyperParameter"].IsNull())
    {
        if (!value["HyperParameter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.HyperParameter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hyperParameter.Deserialize(value["HyperParameter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hyperParameterHasBeenSet = true;
    }

    if (value.HasMember("AccEngineVersion") && !value["AccEngineVersion"].IsNull())
    {
        if (!value["AccEngineVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.AccEngineVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accEngineVersion = string(value["AccEngineVersion"].GetString());
        m_accEngineVersionHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.Tags` is not array type"));

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

    if (value.HasMember("IsSaved") && !value["IsSaved"].IsNull())
    {
        if (!value["IsSaved"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.IsSaved` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSaved = value["IsSaved"].GetBool();
        m_isSavedHasBeenSet = true;
    }

    if (value.HasMember("ModelSignature") && !value["ModelSignature"].IsNull())
    {
        if (!value["ModelSignature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.ModelSignature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelSignature = string(value["ModelSignature"].GetString());
        m_modelSignatureHasBeenSet = true;
    }

    if (value.HasMember("QATModel") && !value["QATModel"].IsNull())
    {
        if (!value["QATModel"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.QATModel` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_qATModel = value["QATModel"].GetBool();
        m_qATModelHasBeenSet = true;
    }

    if (value.HasMember("FrameworkVersion") && !value["FrameworkVersion"].IsNull())
    {
        if (!value["FrameworkVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.FrameworkVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frameworkVersion = string(value["FrameworkVersion"].GetString());
        m_frameworkVersionHasBeenSet = true;
    }

    if (value.HasMember("ModelVersionId") && !value["ModelVersionId"].IsNull())
    {
        if (!value["ModelVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.ModelVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersionId = string(value["ModelVersionId"].GetString());
        m_modelVersionIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelAccelerateTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelAccTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAccTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelAccTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelAccTaskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAccTaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelAccTaskName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_modelSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelSource.c_str(), allocator).Move(), allocator);
    }

    if (m_optimizationLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptimizationLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_optimizationLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_modelInputNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelInputNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modelInputNum, allocator);
    }

    if (m_modelInputInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelInputInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modelInputInfos.begin(); itr != m_modelInputInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_gPUTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gPUType.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_speedupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Speedup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_speedup.c_str(), allocator).Move(), allocator);
    }

    if (m_modelInputPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelInputPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelInputPath.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modelOutputPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelOutputPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelOutputPath.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_algorithmFrameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlgorithmFramework";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_algorithmFramework.c_str(), allocator).Move(), allocator);
    }

    if (m_waitNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waitNumber, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskProgress, allocator);
    }

    if (m_modelFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_tensorInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TensorInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tensorInfos.begin(); itr != m_tensorInfos.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hyperParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HyperParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hyperParameter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_accEngineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccEngineVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accEngineVersion.c_str(), allocator).Move(), allocator);
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

    if (m_isSavedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSaved";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSaved, allocator);
    }

    if (m_modelSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelSignature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelSignature.c_str(), allocator).Move(), allocator);
    }

    if (m_qATModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QATModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qATModel, allocator);
    }

    if (m_frameworkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameworkVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frameworkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }

}


string ModelAccelerateTask::GetModelAccTaskId() const
{
    return m_modelAccTaskId;
}

void ModelAccelerateTask::SetModelAccTaskId(const string& _modelAccTaskId)
{
    m_modelAccTaskId = _modelAccTaskId;
    m_modelAccTaskIdHasBeenSet = true;
}

bool ModelAccelerateTask::ModelAccTaskIdHasBeenSet() const
{
    return m_modelAccTaskIdHasBeenSet;
}

string ModelAccelerateTask::GetModelAccTaskName() const
{
    return m_modelAccTaskName;
}

void ModelAccelerateTask::SetModelAccTaskName(const string& _modelAccTaskName)
{
    m_modelAccTaskName = _modelAccTaskName;
    m_modelAccTaskNameHasBeenSet = true;
}

bool ModelAccelerateTask::ModelAccTaskNameHasBeenSet() const
{
    return m_modelAccTaskNameHasBeenSet;
}

string ModelAccelerateTask::GetModelId() const
{
    return m_modelId;
}

void ModelAccelerateTask::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool ModelAccelerateTask::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string ModelAccelerateTask::GetModelName() const
{
    return m_modelName;
}

void ModelAccelerateTask::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ModelAccelerateTask::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string ModelAccelerateTask::GetModelVersion() const
{
    return m_modelVersion;
}

void ModelAccelerateTask::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool ModelAccelerateTask::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string ModelAccelerateTask::GetModelSource() const
{
    return m_modelSource;
}

void ModelAccelerateTask::SetModelSource(const string& _modelSource)
{
    m_modelSource = _modelSource;
    m_modelSourceHasBeenSet = true;
}

bool ModelAccelerateTask::ModelSourceHasBeenSet() const
{
    return m_modelSourceHasBeenSet;
}

string ModelAccelerateTask::GetOptimizationLevel() const
{
    return m_optimizationLevel;
}

void ModelAccelerateTask::SetOptimizationLevel(const string& _optimizationLevel)
{
    m_optimizationLevel = _optimizationLevel;
    m_optimizationLevelHasBeenSet = true;
}

bool ModelAccelerateTask::OptimizationLevelHasBeenSet() const
{
    return m_optimizationLevelHasBeenSet;
}

string ModelAccelerateTask::GetTaskStatus() const
{
    return m_taskStatus;
}

void ModelAccelerateTask::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool ModelAccelerateTask::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

uint64_t ModelAccelerateTask::GetModelInputNum() const
{
    return m_modelInputNum;
}

void ModelAccelerateTask::SetModelInputNum(const uint64_t& _modelInputNum)
{
    m_modelInputNum = _modelInputNum;
    m_modelInputNumHasBeenSet = true;
}

bool ModelAccelerateTask::ModelInputNumHasBeenSet() const
{
    return m_modelInputNumHasBeenSet;
}

vector<ModelInputInfo> ModelAccelerateTask::GetModelInputInfos() const
{
    return m_modelInputInfos;
}

void ModelAccelerateTask::SetModelInputInfos(const vector<ModelInputInfo>& _modelInputInfos)
{
    m_modelInputInfos = _modelInputInfos;
    m_modelInputInfosHasBeenSet = true;
}

bool ModelAccelerateTask::ModelInputInfosHasBeenSet() const
{
    return m_modelInputInfosHasBeenSet;
}

string ModelAccelerateTask::GetGPUType() const
{
    return m_gPUType;
}

void ModelAccelerateTask::SetGPUType(const string& _gPUType)
{
    m_gPUType = _gPUType;
    m_gPUTypeHasBeenSet = true;
}

bool ModelAccelerateTask::GPUTypeHasBeenSet() const
{
    return m_gPUTypeHasBeenSet;
}

string ModelAccelerateTask::GetChargeType() const
{
    return m_chargeType;
}

void ModelAccelerateTask::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool ModelAccelerateTask::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string ModelAccelerateTask::GetSpeedup() const
{
    return m_speedup;
}

void ModelAccelerateTask::SetSpeedup(const string& _speedup)
{
    m_speedup = _speedup;
    m_speedupHasBeenSet = true;
}

bool ModelAccelerateTask::SpeedupHasBeenSet() const
{
    return m_speedupHasBeenSet;
}

CosPathInfo ModelAccelerateTask::GetModelInputPath() const
{
    return m_modelInputPath;
}

void ModelAccelerateTask::SetModelInputPath(const CosPathInfo& _modelInputPath)
{
    m_modelInputPath = _modelInputPath;
    m_modelInputPathHasBeenSet = true;
}

bool ModelAccelerateTask::ModelInputPathHasBeenSet() const
{
    return m_modelInputPathHasBeenSet;
}

CosPathInfo ModelAccelerateTask::GetModelOutputPath() const
{
    return m_modelOutputPath;
}

void ModelAccelerateTask::SetModelOutputPath(const CosPathInfo& _modelOutputPath)
{
    m_modelOutputPath = _modelOutputPath;
    m_modelOutputPathHasBeenSet = true;
}

bool ModelAccelerateTask::ModelOutputPathHasBeenSet() const
{
    return m_modelOutputPathHasBeenSet;
}

string ModelAccelerateTask::GetErrorMsg() const
{
    return m_errorMsg;
}

void ModelAccelerateTask::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool ModelAccelerateTask::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

string ModelAccelerateTask::GetAlgorithmFramework() const
{
    return m_algorithmFramework;
}

void ModelAccelerateTask::SetAlgorithmFramework(const string& _algorithmFramework)
{
    m_algorithmFramework = _algorithmFramework;
    m_algorithmFrameworkHasBeenSet = true;
}

bool ModelAccelerateTask::AlgorithmFrameworkHasBeenSet() const
{
    return m_algorithmFrameworkHasBeenSet;
}

uint64_t ModelAccelerateTask::GetWaitNumber() const
{
    return m_waitNumber;
}

void ModelAccelerateTask::SetWaitNumber(const uint64_t& _waitNumber)
{
    m_waitNumber = _waitNumber;
    m_waitNumberHasBeenSet = true;
}

bool ModelAccelerateTask::WaitNumberHasBeenSet() const
{
    return m_waitNumberHasBeenSet;
}

string ModelAccelerateTask::GetCreateTime() const
{
    return m_createTime;
}

void ModelAccelerateTask::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ModelAccelerateTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ModelAccelerateTask::GetTaskProgress() const
{
    return m_taskProgress;
}

void ModelAccelerateTask::SetTaskProgress(const uint64_t& _taskProgress)
{
    m_taskProgress = _taskProgress;
    m_taskProgressHasBeenSet = true;
}

bool ModelAccelerateTask::TaskProgressHasBeenSet() const
{
    return m_taskProgressHasBeenSet;
}

string ModelAccelerateTask::GetModelFormat() const
{
    return m_modelFormat;
}

void ModelAccelerateTask::SetModelFormat(const string& _modelFormat)
{
    m_modelFormat = _modelFormat;
    m_modelFormatHasBeenSet = true;
}

bool ModelAccelerateTask::ModelFormatHasBeenSet() const
{
    return m_modelFormatHasBeenSet;
}

vector<string> ModelAccelerateTask::GetTensorInfos() const
{
    return m_tensorInfos;
}

void ModelAccelerateTask::SetTensorInfos(const vector<string>& _tensorInfos)
{
    m_tensorInfos = _tensorInfos;
    m_tensorInfosHasBeenSet = true;
}

bool ModelAccelerateTask::TensorInfosHasBeenSet() const
{
    return m_tensorInfosHasBeenSet;
}

HyperParameter ModelAccelerateTask::GetHyperParameter() const
{
    return m_hyperParameter;
}

void ModelAccelerateTask::SetHyperParameter(const HyperParameter& _hyperParameter)
{
    m_hyperParameter = _hyperParameter;
    m_hyperParameterHasBeenSet = true;
}

bool ModelAccelerateTask::HyperParameterHasBeenSet() const
{
    return m_hyperParameterHasBeenSet;
}

string ModelAccelerateTask::GetAccEngineVersion() const
{
    return m_accEngineVersion;
}

void ModelAccelerateTask::SetAccEngineVersion(const string& _accEngineVersion)
{
    m_accEngineVersion = _accEngineVersion;
    m_accEngineVersionHasBeenSet = true;
}

bool ModelAccelerateTask::AccEngineVersionHasBeenSet() const
{
    return m_accEngineVersionHasBeenSet;
}

vector<Tag> ModelAccelerateTask::GetTags() const
{
    return m_tags;
}

void ModelAccelerateTask::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModelAccelerateTask::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool ModelAccelerateTask::GetIsSaved() const
{
    return m_isSaved;
}

void ModelAccelerateTask::SetIsSaved(const bool& _isSaved)
{
    m_isSaved = _isSaved;
    m_isSavedHasBeenSet = true;
}

bool ModelAccelerateTask::IsSavedHasBeenSet() const
{
    return m_isSavedHasBeenSet;
}

string ModelAccelerateTask::GetModelSignature() const
{
    return m_modelSignature;
}

void ModelAccelerateTask::SetModelSignature(const string& _modelSignature)
{
    m_modelSignature = _modelSignature;
    m_modelSignatureHasBeenSet = true;
}

bool ModelAccelerateTask::ModelSignatureHasBeenSet() const
{
    return m_modelSignatureHasBeenSet;
}

bool ModelAccelerateTask::GetQATModel() const
{
    return m_qATModel;
}

void ModelAccelerateTask::SetQATModel(const bool& _qATModel)
{
    m_qATModel = _qATModel;
    m_qATModelHasBeenSet = true;
}

bool ModelAccelerateTask::QATModelHasBeenSet() const
{
    return m_qATModelHasBeenSet;
}

string ModelAccelerateTask::GetFrameworkVersion() const
{
    return m_frameworkVersion;
}

void ModelAccelerateTask::SetFrameworkVersion(const string& _frameworkVersion)
{
    m_frameworkVersion = _frameworkVersion;
    m_frameworkVersionHasBeenSet = true;
}

bool ModelAccelerateTask::FrameworkVersionHasBeenSet() const
{
    return m_frameworkVersionHasBeenSet;
}

string ModelAccelerateTask::GetModelVersionId() const
{
    return m_modelVersionId;
}

void ModelAccelerateTask::SetModelVersionId(const string& _modelVersionId)
{
    m_modelVersionId = _modelVersionId;
    m_modelVersionIdHasBeenSet = true;
}

bool ModelAccelerateTask::ModelVersionIdHasBeenSet() const
{
    return m_modelVersionIdHasBeenSet;
}

string ModelAccelerateTask::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void ModelAccelerateTask::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool ModelAccelerateTask::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string ModelAccelerateTask::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void ModelAccelerateTask::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool ModelAccelerateTask::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

