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
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
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
                     * 获取导入方式（MODEL/VERSION）
                     * @return ImportMethod 导入方式（MODEL/VERSION）
                     */
                    std::string GetImportMethod() const;

                    /**
                     * 设置导入方式（MODEL/VERSION）
                     * @param ImportMethod 导入方式（MODEL/VERSION）
                     */
                    void SetImportMethod(const std::string& _importMethod);

                    /**
                     * 判断参数 ImportMethod 是否已赋值
                     * @return ImportMethod 是否已赋值
                     */
                    bool ImportMethodHasBeenSet() const;

                    /**
                     * 获取模型来源cos目录，以/结尾
                     * @return TrainingModelCosPath 模型来源cos目录，以/结尾
                     */
                    CosPathInfo GetTrainingModelCosPath() const;

                    /**
                     * 设置模型来源cos目录，以/结尾
                     * @param TrainingModelCosPath 模型来源cos目录，以/结尾
                     */
                    void SetTrainingModelCosPath(const CosPathInfo& _trainingModelCosPath);

                    /**
                     * 判断参数 TrainingModelCosPath 是否已赋值
                     * @return TrainingModelCosPath 是否已赋值
                     */
                    bool TrainingModelCosPathHasBeenSet() const;

                    /**
                     * 获取推理环境来源（SYSTEM/CUSTOM）
                     * @return ReasoningEnvironmentSource 推理环境来源（SYSTEM/CUSTOM）
                     */
                    std::string GetReasoningEnvironmentSource() const;

                    /**
                     * 设置推理环境来源（SYSTEM/CUSTOM）
                     * @param ReasoningEnvironmentSource 推理环境来源（SYSTEM/CUSTOM）
                     */
                    void SetReasoningEnvironmentSource(const std::string& _reasoningEnvironmentSource);

                    /**
                     * 判断参数 ReasoningEnvironmentSource 是否已赋值
                     * @return ReasoningEnvironmentSource 是否已赋值
                     */
                    bool ReasoningEnvironmentSourceHasBeenSet() const;

                    /**
                     * 获取模型名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     * @return TrainingModelName 模型名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     */
                    std::string GetTrainingModelName() const;

                    /**
                     * 设置模型名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     * @param TrainingModelName 模型名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     */
                    void SetTrainingModelName(const std::string& _trainingModelName);

                    /**
                     * 判断参数 TrainingModelName 是否已赋值
                     * @return TrainingModelName 是否已赋值
                     */
                    bool TrainingModelNameHasBeenSet() const;

                    /**
                     * 获取标签配置
                     * @return Tags 标签配置
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签配置
                     * @param Tags 标签配置
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取训练任务名称
                     * @return TrainingJobName 训练任务名称
                     */
                    std::string GetTrainingJobName() const;

                    /**
                     * 设置训练任务名称
                     * @param TrainingJobName 训练任务名称
                     */
                    void SetTrainingJobName(const std::string& _trainingJobName);

                    /**
                     * 判断参数 TrainingJobName 是否已赋值
                     * @return TrainingJobName 是否已赋值
                     */
                    bool TrainingJobNameHasBeenSet() const;

                    /**
                     * 获取算法框架 （PYTORCH/TENSORFLOW/DETECTRON2/PMML)
                     * @return AlgorithmFramework 算法框架 （PYTORCH/TENSORFLOW/DETECTRON2/PMML)
                     */
                    std::string GetAlgorithmFramework() const;

                    /**
                     * 设置算法框架 （PYTORCH/TENSORFLOW/DETECTRON2/PMML)
                     * @param AlgorithmFramework 算法框架 （PYTORCH/TENSORFLOW/DETECTRON2/PMML)
                     */
                    void SetAlgorithmFramework(const std::string& _algorithmFramework);

                    /**
                     * 判断参数 AlgorithmFramework 是否已赋值
                     * @return AlgorithmFramework 是否已赋值
                     */
                    bool AlgorithmFrameworkHasBeenSet() const;

                    /**
                     * 获取推理环境
                     * @return ReasoningEnvironment 推理环境
                     */
                    std::string GetReasoningEnvironment() const;

                    /**
                     * 设置推理环境
                     * @param ReasoningEnvironment 推理环境
                     */
                    void SetReasoningEnvironment(const std::string& _reasoningEnvironment);

                    /**
                     * 判断参数 ReasoningEnvironment 是否已赋值
                     * @return ReasoningEnvironment 是否已赋值
                     */
                    bool ReasoningEnvironmentHasBeenSet() const;

                    /**
                     * 获取训练指标，最多支持1000字符
                     * @return TrainingModelIndex 训练指标，最多支持1000字符
                     */
                    std::string GetTrainingModelIndex() const;

                    /**
                     * 设置训练指标，最多支持1000字符
                     * @param TrainingModelIndex 训练指标，最多支持1000字符
                     */
                    void SetTrainingModelIndex(const std::string& _trainingModelIndex);

                    /**
                     * 判断参数 TrainingModelIndex 是否已赋值
                     * @return TrainingModelIndex 是否已赋值
                     */
                    bool TrainingModelIndexHasBeenSet() const;

                    /**
                     * 获取模型版本
                     * @return TrainingModelVersion 模型版本
                     */
                    std::string GetTrainingModelVersion() const;

                    /**
                     * 设置模型版本
                     * @param TrainingModelVersion 模型版本
                     */
                    void SetTrainingModelVersion(const std::string& _trainingModelVersion);

                    /**
                     * 判断参数 TrainingModelVersion 是否已赋值
                     * @return TrainingModelVersion 是否已赋值
                     */
                    bool TrainingModelVersionHasBeenSet() const;

                    /**
                     * 获取自定义推理环境
                     * @return ReasoningImageInfo 自定义推理环境
                     */
                    ImageInfo GetReasoningImageInfo() const;

                    /**
                     * 设置自定义推理环境
                     * @param ReasoningImageInfo 自定义推理环境
                     */
                    void SetReasoningImageInfo(const ImageInfo& _reasoningImageInfo);

                    /**
                     * 判断参数 ReasoningImageInfo 是否已赋值
                     * @return ReasoningImageInfo 是否已赋值
                     */
                    bool ReasoningImageInfoHasBeenSet() const;

                    /**
                     * 获取模型移动方式（CUT/COPY）
                     * @return ModelMoveMode 模型移动方式（CUT/COPY）
                     */
                    std::string GetModelMoveMode() const;

                    /**
                     * 设置模型移动方式（CUT/COPY）
                     * @param ModelMoveMode 模型移动方式（CUT/COPY）
                     */
                    void SetModelMoveMode(const std::string& _modelMoveMode);

                    /**
                     * 判断参数 ModelMoveMode 是否已赋值
                     * @return ModelMoveMode 是否已赋值
                     */
                    bool ModelMoveModeHasBeenSet() const;

                    /**
                     * 获取训练任务ID
                     * @return TrainingJobId 训练任务ID
                     */
                    std::string GetTrainingJobId() const;

                    /**
                     * 设置训练任务ID
                     * @param TrainingJobId 训练任务ID
                     */
                    void SetTrainingJobId(const std::string& _trainingJobId);

                    /**
                     * 判断参数 TrainingJobId 是否已赋值
                     * @return TrainingJobId 是否已赋值
                     */
                    bool TrainingJobIdHasBeenSet() const;

                    /**
                     * 获取模型ID（导入新模型不需要，导入新版本需要）
                     * @return TrainingModelId 模型ID（导入新模型不需要，导入新版本需要）
                     */
                    std::string GetTrainingModelId() const;

                    /**
                     * 设置模型ID（导入新模型不需要，导入新版本需要）
                     * @param TrainingModelId 模型ID（导入新模型不需要，导入新版本需要）
                     */
                    void SetTrainingModelId(const std::string& _trainingModelId);

                    /**
                     * 判断参数 TrainingModelId 是否已赋值
                     * @return TrainingModelId 是否已赋值
                     */
                    bool TrainingModelIdHasBeenSet() const;

                    /**
                     * 获取模型存储cos目录
                     * @return ModelOutputPath 模型存储cos目录
                     */
                    CosPathInfo GetModelOutputPath() const;

                    /**
                     * 设置模型存储cos目录
                     * @param ModelOutputPath 模型存储cos目录
                     */
                    void SetModelOutputPath(const CosPathInfo& _modelOutputPath);

                    /**
                     * 判断参数 ModelOutputPath 是否已赋值
                     * @return ModelOutputPath 是否已赋值
                     */
                    bool ModelOutputPathHasBeenSet() const;

                    /**
                     * 获取模型来源 （JOB/COS/AUTO_ML）
                     * @return TrainingModelSource 模型来源 （JOB/COS/AUTO_ML）
                     */
                    std::string GetTrainingModelSource() const;

                    /**
                     * 设置模型来源 （JOB/COS/AUTO_ML）
                     * @param TrainingModelSource 模型来源 （JOB/COS/AUTO_ML）
                     */
                    void SetTrainingModelSource(const std::string& _trainingModelSource);

                    /**
                     * 判断参数 TrainingModelSource 是否已赋值
                     * @return TrainingModelSource 是否已赋值
                     */
                    bool TrainingModelSourceHasBeenSet() const;

                    /**
                     * 获取模型偏好
                     * @return TrainingPreference 模型偏好
                     */
                    std::string GetTrainingPreference() const;

                    /**
                     * 设置模型偏好
                     * @param TrainingPreference 模型偏好
                     */
                    void SetTrainingPreference(const std::string& _trainingPreference);

                    /**
                     * 判断参数 TrainingPreference 是否已赋值
                     * @return TrainingPreference 是否已赋值
                     */
                    bool TrainingPreferenceHasBeenSet() const;

                    /**
                     * 获取自动学习任务ID
                     * @return AutoMLTaskId 自动学习任务ID
                     */
                    std::string GetAutoMLTaskId() const;

                    /**
                     * 设置自动学习任务ID
                     * @param AutoMLTaskId 自动学习任务ID
                     */
                    void SetAutoMLTaskId(const std::string& _autoMLTaskId);

                    /**
                     * 判断参数 AutoMLTaskId 是否已赋值
                     * @return AutoMLTaskId 是否已赋值
                     */
                    bool AutoMLTaskIdHasBeenSet() const;

                    /**
                     * 获取任务版本
                     * @return TrainingJobVersion 任务版本
                     */
                    std::string GetTrainingJobVersion() const;

                    /**
                     * 设置任务版本
                     * @param TrainingJobVersion 任务版本
                     */
                    void SetTrainingJobVersion(const std::string& _trainingJobVersion);

                    /**
                     * 判断参数 TrainingJobVersion 是否已赋值
                     * @return TrainingJobVersion 是否已赋值
                     */
                    bool TrainingJobVersionHasBeenSet() const;

                    /**
                     * 获取模型版本类型；
枚举值：NORMAL(通用)  ACCELERATE(加速)
注意:  默认为NORMAL
                     * @return ModelVersionType 模型版本类型；
枚举值：NORMAL(通用)  ACCELERATE(加速)
注意:  默认为NORMAL
                     */
                    std::string GetModelVersionType() const;

                    /**
                     * 设置模型版本类型；
枚举值：NORMAL(通用)  ACCELERATE(加速)
注意:  默认为NORMAL
                     * @param ModelVersionType 模型版本类型；
枚举值：NORMAL(通用)  ACCELERATE(加速)
注意:  默认为NORMAL
                     */
                    void SetModelVersionType(const std::string& _modelVersionType);

                    /**
                     * 判断参数 ModelVersionType 是否已赋值
                     * @return ModelVersionType 是否已赋值
                     */
                    bool ModelVersionTypeHasBeenSet() const;

                    /**
                     * 获取模型格式 （PYTORCH/TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/PMML）
                     * @return ModelFormat 模型格式 （PYTORCH/TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/PMML）
                     */
                    std::string GetModelFormat() const;

                    /**
                     * 设置模型格式 （PYTORCH/TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/PMML）
                     * @param ModelFormat 模型格式 （PYTORCH/TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/PMML）
                     */
                    void SetModelFormat(const std::string& _modelFormat);

                    /**
                     * 判断参数 ModelFormat 是否已赋值
                     * @return ModelFormat 是否已赋值
                     */
                    bool ModelFormatHasBeenSet() const;

                private:

                    /**
                     * 导入方式（MODEL/VERSION）
                     */
                    std::string m_importMethod;
                    bool m_importMethodHasBeenSet;

                    /**
                     * 模型来源cos目录，以/结尾
                     */
                    CosPathInfo m_trainingModelCosPath;
                    bool m_trainingModelCosPathHasBeenSet;

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
                     * 算法框架 （PYTORCH/TENSORFLOW/DETECTRON2/PMML)
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
                     * 模型来源 （JOB/COS/AUTO_ML）
                     */
                    std::string m_trainingModelSource;
                    bool m_trainingModelSourceHasBeenSet;

                    /**
                     * 模型偏好
                     */
                    std::string m_trainingPreference;
                    bool m_trainingPreferenceHasBeenSet;

                    /**
                     * 自动学习任务ID
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
                     * 模型格式 （PYTORCH/TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/PMML）
                     */
                    std::string m_modelFormat;
                    bool m_modelFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATETRAININGMODELREQUEST_H_
