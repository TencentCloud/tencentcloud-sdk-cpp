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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CREATETRAININGMODELREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CREATETRAININGMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * CreateTrainingModel请求参数结构体
                */
                class CreateTrainingModelRequest : public AbstractModel
                {
                public:
                    CreateTrainingModelRequest();
                    ~CreateTrainingModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取导入方式
MODEL：导入新模型
VERSION：导入新版本
EXIST：导入现有版本
                     * @return ImportMethod 导入方式
MODEL：导入新模型
VERSION：导入新版本
EXIST：导入现有版本
                     * 
                     */
                    std::string GetImportMethod() const;

                    /**
                     * 设置导入方式
MODEL：导入新模型
VERSION：导入新版本
EXIST：导入现有版本
                     * @param _importMethod 导入方式
MODEL：导入新模型
VERSION：导入新版本
EXIST：导入现有版本
                     * 
                     */
                    void SetImportMethod(const std::string& _importMethod);

                    /**
                     * 判断参数 ImportMethod 是否已赋值
                     * @return ImportMethod 是否已赋值
                     * 
                     */
                    bool ImportMethodHasBeenSet() const;

                    /**
                     * 获取推理环境来源（SYSTEM/CUSTOM）
                     * @return ReasoningEnvironmentSource 推理环境来源（SYSTEM/CUSTOM）
                     * 
                     */
                    std::string GetReasoningEnvironmentSource() const;

                    /**
                     * 设置推理环境来源（SYSTEM/CUSTOM）
                     * @param _reasoningEnvironmentSource 推理环境来源（SYSTEM/CUSTOM）
                     * 
                     */
                    void SetReasoningEnvironmentSource(const std::string& _reasoningEnvironmentSource);

                    /**
                     * 判断参数 ReasoningEnvironmentSource 是否已赋值
                     * @return ReasoningEnvironmentSource 是否已赋值
                     * 
                     */
                    bool ReasoningEnvironmentSourceHasBeenSet() const;

                    /**
                     * 获取模型名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     * @return TrainingModelName 模型名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     * 
                     */
                    std::string GetTrainingModelName() const;

                    /**
                     * 设置模型名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     * @param _trainingModelName 模型名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     * 
                     */
                    void SetTrainingModelName(const std::string& _trainingModelName);

                    /**
                     * 判断参数 TrainingModelName 是否已赋值
                     * @return TrainingModelName 是否已赋值
                     * 
                     */
                    bool TrainingModelNameHasBeenSet() const;

                    /**
                     * 获取标签配置
                     * @return Tags 标签配置
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签配置
                     * @param _tags 标签配置
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取训练任务名称
                     * @return TrainingJobName 训练任务名称
                     * 
                     */
                    std::string GetTrainingJobName() const;

                    /**
                     * 设置训练任务名称
                     * @param _trainingJobName 训练任务名称
                     * 
                     */
                    void SetTrainingJobName(const std::string& _trainingJobName);

                    /**
                     * 判断参数 TrainingJobName 是否已赋值
                     * @return TrainingJobName 是否已赋值
                     * 
                     */
                    bool TrainingJobNameHasBeenSet() const;

                    /**
                     * 获取模型来源cos目录，以/结尾
                     * @return TrainingModelCosPath 模型来源cos目录，以/结尾
                     * 
                     */
                    CosPathInfo GetTrainingModelCosPath() const;

                    /**
                     * 设置模型来源cos目录，以/结尾
                     * @param _trainingModelCosPath 模型来源cos目录，以/结尾
                     * 
                     */
                    void SetTrainingModelCosPath(const CosPathInfo& _trainingModelCosPath);

                    /**
                     * 判断参数 TrainingModelCosPath 是否已赋值
                     * @return TrainingModelCosPath 是否已赋值
                     * 
                     */
                    bool TrainingModelCosPathHasBeenSet() const;

                    /**
                     * 获取算法框架 （PYTORCH/TENSORFLOW/DETECTRON2/PMML/MMDETECTION)
                     * @return AlgorithmFramework 算法框架 （PYTORCH/TENSORFLOW/DETECTRON2/PMML/MMDETECTION)
                     * 
                     */
                    std::string GetAlgorithmFramework() const;

                    /**
                     * 设置算法框架 （PYTORCH/TENSORFLOW/DETECTRON2/PMML/MMDETECTION)
                     * @param _algorithmFramework 算法框架 （PYTORCH/TENSORFLOW/DETECTRON2/PMML/MMDETECTION)
                     * 
                     */
                    void SetAlgorithmFramework(const std::string& _algorithmFramework);

                    /**
                     * 判断参数 AlgorithmFramework 是否已赋值
                     * @return AlgorithmFramework 是否已赋值
                     * 
                     */
                    bool AlgorithmFrameworkHasBeenSet() const;

                    /**
                     * 获取推理环境
                     * @return ReasoningEnvironment 推理环境
                     * 
                     */
                    std::string GetReasoningEnvironment() const;

                    /**
                     * 设置推理环境
                     * @param _reasoningEnvironment 推理环境
                     * 
                     */
                    void SetReasoningEnvironment(const std::string& _reasoningEnvironment);

                    /**
                     * 判断参数 ReasoningEnvironment 是否已赋值
                     * @return ReasoningEnvironment 是否已赋值
                     * 
                     */
                    bool ReasoningEnvironmentHasBeenSet() const;

                    /**
                     * 获取训练指标，最多支持1000字符
                     * @return TrainingModelIndex 训练指标，最多支持1000字符
                     * 
                     */
                    std::string GetTrainingModelIndex() const;

                    /**
                     * 设置训练指标，最多支持1000字符
                     * @param _trainingModelIndex 训练指标，最多支持1000字符
                     * 
                     */
                    void SetTrainingModelIndex(const std::string& _trainingModelIndex);

                    /**
                     * 判断参数 TrainingModelIndex 是否已赋值
                     * @return TrainingModelIndex 是否已赋值
                     * 
                     */
                    bool TrainingModelIndexHasBeenSet() const;

                    /**
                     * 获取模型版本
                     * @return TrainingModelVersion 模型版本
                     * 
                     */
                    std::string GetTrainingModelVersion() const;

                    /**
                     * 设置模型版本
                     * @param _trainingModelVersion 模型版本
                     * 
                     */
                    void SetTrainingModelVersion(const std::string& _trainingModelVersion);

                    /**
                     * 判断参数 TrainingModelVersion 是否已赋值
                     * @return TrainingModelVersion 是否已赋值
                     * 
                     */
                    bool TrainingModelVersionHasBeenSet() const;

                    /**
                     * 获取自定义推理环境
                     * @return ReasoningImageInfo 自定义推理环境
                     * 
                     */
                    ImageInfo GetReasoningImageInfo() const;

                    /**
                     * 设置自定义推理环境
                     * @param _reasoningImageInfo 自定义推理环境
                     * 
                     */
                    void SetReasoningImageInfo(const ImageInfo& _reasoningImageInfo);

                    /**
                     * 判断参数 ReasoningImageInfo 是否已赋值
                     * @return ReasoningImageInfo 是否已赋值
                     * 
                     */
                    bool ReasoningImageInfoHasBeenSet() const;

                    /**
                     * 获取模型移动方式（CUT/COPY）
                     * @return ModelMoveMode 模型移动方式（CUT/COPY）
                     * 
                     */
                    std::string GetModelMoveMode() const;

                    /**
                     * 设置模型移动方式（CUT/COPY）
                     * @param _modelMoveMode 模型移动方式（CUT/COPY）
                     * 
                     */
                    void SetModelMoveMode(const std::string& _modelMoveMode);

                    /**
                     * 判断参数 ModelMoveMode 是否已赋值
                     * @return ModelMoveMode 是否已赋值
                     * 
                     */
                    bool ModelMoveModeHasBeenSet() const;

                    /**
                     * 获取训练任务ID
                     * @return TrainingJobId 训练任务ID
                     * 
                     */
                    std::string GetTrainingJobId() const;

                    /**
                     * 设置训练任务ID
                     * @param _trainingJobId 训练任务ID
                     * 
                     */
                    void SetTrainingJobId(const std::string& _trainingJobId);

                    /**
                     * 判断参数 TrainingJobId 是否已赋值
                     * @return TrainingJobId 是否已赋值
                     * 
                     */
                    bool TrainingJobIdHasBeenSet() const;

                    /**
                     * 获取模型ID（导入新模型不需要，导入新版本需要）
                     * @return TrainingModelId 模型ID（导入新模型不需要，导入新版本需要）
                     * 
                     */
                    std::string GetTrainingModelId() const;

                    /**
                     * 设置模型ID（导入新模型不需要，导入新版本需要）
                     * @param _trainingModelId 模型ID（导入新模型不需要，导入新版本需要）
                     * 
                     */
                    void SetTrainingModelId(const std::string& _trainingModelId);

                    /**
                     * 判断参数 TrainingModelId 是否已赋值
                     * @return TrainingModelId 是否已赋值
                     * 
                     */
                    bool TrainingModelIdHasBeenSet() const;

                    /**
                     * 获取模型存储cos目录
                     * @return ModelOutputPath 模型存储cos目录
                     * 
                     */
                    CosPathInfo GetModelOutputPath() const;

                    /**
                     * 设置模型存储cos目录
                     * @param _modelOutputPath 模型存储cos目录
                     * 
                     */
                    void SetModelOutputPath(const CosPathInfo& _modelOutputPath);

                    /**
                     * 判断参数 ModelOutputPath 是否已赋值
                     * @return ModelOutputPath 是否已赋值
                     * 
                     */
                    bool ModelOutputPathHasBeenSet() const;

                    /**
                     * 获取模型来源 （JOB/COS）
                     * @return TrainingModelSource 模型来源 （JOB/COS）
                     * 
                     */
                    std::string GetTrainingModelSource() const;

                    /**
                     * 设置模型来源 （JOB/COS）
                     * @param _trainingModelSource 模型来源 （JOB/COS）
                     * 
                     */
                    void SetTrainingModelSource(const std::string& _trainingModelSource);

                    /**
                     * 判断参数 TrainingModelSource 是否已赋值
                     * @return TrainingModelSource 是否已赋值
                     * 
                     */
                    bool TrainingModelSourceHasBeenSet() const;

                    /**
                     * 获取模型偏好
                     * @return TrainingPreference 模型偏好
                     * 
                     */
                    std::string GetTrainingPreference() const;

                    /**
                     * 设置模型偏好
                     * @param _trainingPreference 模型偏好
                     * 
                     */
                    void SetTrainingPreference(const std::string& _trainingPreference);

                    /**
                     * 判断参数 TrainingPreference 是否已赋值
                     * @return TrainingPreference 是否已赋值
                     * 
                     */
                    bool TrainingPreferenceHasBeenSet() const;

                    /**
                     * 获取自动学习任务ID（已废弃）
                     * @return AutoMLTaskId 自动学习任务ID（已废弃）
                     * 
                     */
                    std::string GetAutoMLTaskId() const;

                    /**
                     * 设置自动学习任务ID（已废弃）
                     * @param _autoMLTaskId 自动学习任务ID（已废弃）
                     * 
                     */
                    void SetAutoMLTaskId(const std::string& _autoMLTaskId);

                    /**
                     * 判断参数 AutoMLTaskId 是否已赋值
                     * @return AutoMLTaskId 是否已赋值
                     * 
                     */
                    bool AutoMLTaskIdHasBeenSet() const;

                    /**
                     * 获取任务版本
                     * @return TrainingJobVersion 任务版本
                     * 
                     */
                    std::string GetTrainingJobVersion() const;

                    /**
                     * 设置任务版本
                     * @param _trainingJobVersion 任务版本
                     * 
                     */
                    void SetTrainingJobVersion(const std::string& _trainingJobVersion);

                    /**
                     * 判断参数 TrainingJobVersion 是否已赋值
                     * @return TrainingJobVersion 是否已赋值
                     * 
                     */
                    bool TrainingJobVersionHasBeenSet() const;

                    /**
                     * 获取模型版本类型；
枚举值：NORMAL(通用)  ACCELERATE(加速)
注意:  默认为NORMAL
                     * @return ModelVersionType 模型版本类型；
枚举值：NORMAL(通用)  ACCELERATE(加速)
注意:  默认为NORMAL
                     * 
                     */
                    std::string GetModelVersionType() const;

                    /**
                     * 设置模型版本类型；
枚举值：NORMAL(通用)  ACCELERATE(加速)
注意:  默认为NORMAL
                     * @param _modelVersionType 模型版本类型；
枚举值：NORMAL(通用)  ACCELERATE(加速)
注意:  默认为NORMAL
                     * 
                     */
                    void SetModelVersionType(const std::string& _modelVersionType);

                    /**
                     * 判断参数 ModelVersionType 是否已赋值
                     * @return ModelVersionType 是否已赋值
                     * 
                     */
                    bool ModelVersionTypeHasBeenSet() const;

                    /**
                     * 获取模型格式 （PYTORCH/TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/PMML/MMDETECTION/ONNX/HUGGING_FACE）
                     * @return ModelFormat 模型格式 （PYTORCH/TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/PMML/MMDETECTION/ONNX/HUGGING_FACE）
                     * 
                     */
                    std::string GetModelFormat() const;

                    /**
                     * 设置模型格式 （PYTORCH/TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/PMML/MMDETECTION/ONNX/HUGGING_FACE）
                     * @param _modelFormat 模型格式 （PYTORCH/TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/PMML/MMDETECTION/ONNX/HUGGING_FACE）
                     * 
                     */
                    void SetModelFormat(const std::string& _modelFormat);

                    /**
                     * 判断参数 ModelFormat 是否已赋值
                     * @return ModelFormat 是否已赋值
                     * 
                     */
                    bool ModelFormatHasBeenSet() const;

                    /**
                     * 获取推理镜像ID
                     * @return ReasoningEnvironmentId 推理镜像ID
                     * 
                     */
                    std::string GetReasoningEnvironmentId() const;

                    /**
                     * 设置推理镜像ID
                     * @param _reasoningEnvironmentId 推理镜像ID
                     * 
                     */
                    void SetReasoningEnvironmentId(const std::string& _reasoningEnvironmentId);

                    /**
                     * 判断参数 ReasoningEnvironmentId 是否已赋值
                     * @return ReasoningEnvironmentId 是否已赋值
                     * 
                     */
                    bool ReasoningEnvironmentIdHasBeenSet() const;

                    /**
                     * 获取模型自动清理开关(true/false)，当前版本仅支持SAVED_MODEL格式模型
                     * @return AutoClean 模型自动清理开关(true/false)，当前版本仅支持SAVED_MODEL格式模型
                     * 
                     */
                    std::string GetAutoClean() const;

                    /**
                     * 设置模型自动清理开关(true/false)，当前版本仅支持SAVED_MODEL格式模型
                     * @param _autoClean 模型自动清理开关(true/false)，当前版本仅支持SAVED_MODEL格式模型
                     * 
                     */
                    void SetAutoClean(const std::string& _autoClean);

                    /**
                     * 判断参数 AutoClean 是否已赋值
                     * @return AutoClean 是否已赋值
                     * 
                     */
                    bool AutoCleanHasBeenSet() const;

                    /**
                     * 获取模型数量保留上限(默认值为24个，上限为24，下限为1，步长为1)
                     * @return MaxReservedModels 模型数量保留上限(默认值为24个，上限为24，下限为1，步长为1)
                     * 
                     */
                    uint64_t GetMaxReservedModels() const;

                    /**
                     * 设置模型数量保留上限(默认值为24个，上限为24，下限为1，步长为1)
                     * @param _maxReservedModels 模型数量保留上限(默认值为24个，上限为24，下限为1，步长为1)
                     * 
                     */
                    void SetMaxReservedModels(const uint64_t& _maxReservedModels);

                    /**
                     * 判断参数 MaxReservedModels 是否已赋值
                     * @return MaxReservedModels 是否已赋值
                     * 
                     */
                    bool MaxReservedModelsHasBeenSet() const;

                    /**
                     * 获取模型清理周期(默认值为1分钟，上限为1440，下限为1分钟，步长为1)
                     * @return ModelCleanPeriod 模型清理周期(默认值为1分钟，上限为1440，下限为1分钟，步长为1)
                     * 
                     */
                    uint64_t GetModelCleanPeriod() const;

                    /**
                     * 设置模型清理周期(默认值为1分钟，上限为1440，下限为1分钟，步长为1)
                     * @param _modelCleanPeriod 模型清理周期(默认值为1分钟，上限为1440，下限为1分钟，步长为1)
                     * 
                     */
                    void SetModelCleanPeriod(const uint64_t& _modelCleanPeriod);

                    /**
                     * 判断参数 ModelCleanPeriod 是否已赋值
                     * @return ModelCleanPeriod 是否已赋值
                     * 
                     */
                    bool ModelCleanPeriodHasBeenSet() const;

                    /**
                     * 获取是否QAT模型
                     * @return IsQAT 是否QAT模型
                     * 
                     */
                    bool GetIsQAT() const;

                    /**
                     * 设置是否QAT模型
                     * @param _isQAT 是否QAT模型
                     * 
                     */
                    void SetIsQAT(const bool& _isQAT);

                    /**
                     * 判断参数 IsQAT 是否已赋值
                     * @return IsQAT 是否已赋值
                     * 
                     */
                    bool IsQATHasBeenSet() const;

                private:

                    /**
                     * 导入方式
MODEL：导入新模型
VERSION：导入新版本
EXIST：导入现有版本
                     */
                    std::string m_importMethod;
                    bool m_importMethodHasBeenSet;

                    /**
                     * 推理环境来源（SYSTEM/CUSTOM）
                     */
                    std::string m_reasoningEnvironmentSource;
                    bool m_reasoningEnvironmentSourceHasBeenSet;

                    /**
                     * 模型名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     */
                    std::string m_trainingModelName;
                    bool m_trainingModelNameHasBeenSet;

                    /**
                     * 标签配置
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 训练任务名称
                     */
                    std::string m_trainingJobName;
                    bool m_trainingJobNameHasBeenSet;

                    /**
                     * 模型来源cos目录，以/结尾
                     */
                    CosPathInfo m_trainingModelCosPath;
                    bool m_trainingModelCosPathHasBeenSet;

                    /**
                     * 算法框架 （PYTORCH/TENSORFLOW/DETECTRON2/PMML/MMDETECTION)
                     */
                    std::string m_algorithmFramework;
                    bool m_algorithmFrameworkHasBeenSet;

                    /**
                     * 推理环境
                     */
                    std::string m_reasoningEnvironment;
                    bool m_reasoningEnvironmentHasBeenSet;

                    /**
                     * 训练指标，最多支持1000字符
                     */
                    std::string m_trainingModelIndex;
                    bool m_trainingModelIndexHasBeenSet;

                    /**
                     * 模型版本
                     */
                    std::string m_trainingModelVersion;
                    bool m_trainingModelVersionHasBeenSet;

                    /**
                     * 自定义推理环境
                     */
                    ImageInfo m_reasoningImageInfo;
                    bool m_reasoningImageInfoHasBeenSet;

                    /**
                     * 模型移动方式（CUT/COPY）
                     */
                    std::string m_modelMoveMode;
                    bool m_modelMoveModeHasBeenSet;

                    /**
                     * 训练任务ID
                     */
                    std::string m_trainingJobId;
                    bool m_trainingJobIdHasBeenSet;

                    /**
                     * 模型ID（导入新模型不需要，导入新版本需要）
                     */
                    std::string m_trainingModelId;
                    bool m_trainingModelIdHasBeenSet;

                    /**
                     * 模型存储cos目录
                     */
                    CosPathInfo m_modelOutputPath;
                    bool m_modelOutputPathHasBeenSet;

                    /**
                     * 模型来源 （JOB/COS）
                     */
                    std::string m_trainingModelSource;
                    bool m_trainingModelSourceHasBeenSet;

                    /**
                     * 模型偏好
                     */
                    std::string m_trainingPreference;
                    bool m_trainingPreferenceHasBeenSet;

                    /**
                     * 自动学习任务ID（已废弃）
                     */
                    std::string m_autoMLTaskId;
                    bool m_autoMLTaskIdHasBeenSet;

                    /**
                     * 任务版本
                     */
                    std::string m_trainingJobVersion;
                    bool m_trainingJobVersionHasBeenSet;

                    /**
                     * 模型版本类型；
枚举值：NORMAL(通用)  ACCELERATE(加速)
注意:  默认为NORMAL
                     */
                    std::string m_modelVersionType;
                    bool m_modelVersionTypeHasBeenSet;

                    /**
                     * 模型格式 （PYTORCH/TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/PMML/MMDETECTION/ONNX/HUGGING_FACE）
                     */
                    std::string m_modelFormat;
                    bool m_modelFormatHasBeenSet;

                    /**
                     * 推理镜像ID
                     */
                    std::string m_reasoningEnvironmentId;
                    bool m_reasoningEnvironmentIdHasBeenSet;

                    /**
                     * 模型自动清理开关(true/false)，当前版本仅支持SAVED_MODEL格式模型
                     */
                    std::string m_autoClean;
                    bool m_autoCleanHasBeenSet;

                    /**
                     * 模型数量保留上限(默认值为24个，上限为24，下限为1，步长为1)
                     */
                    uint64_t m_maxReservedModels;
                    bool m_maxReservedModelsHasBeenSet;

                    /**
                     * 模型清理周期(默认值为1分钟，上限为1440，下限为1分钟，步长为1)
                     */
                    uint64_t m_modelCleanPeriod;
                    bool m_modelCleanPeriodHasBeenSet;

                    /**
                     * 是否QAT模型
                     */
                    bool m_isQAT;
                    bool m_isQATHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATETRAININGMODELREQUEST_H_
