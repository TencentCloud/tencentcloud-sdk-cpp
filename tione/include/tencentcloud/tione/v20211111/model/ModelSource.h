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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MODELSOURCE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MODELSOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 模型来源
                */
                class ModelSource : public AbstractModel
                {
                public:
                    ModelSource();
                    ~ModelSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source 来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取来源任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobName 来源任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置来源任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobName 来源任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取来源任务版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobVersion 来源任务版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobVersion() const;

                    /**
                     * 设置来源任务版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobVersion 来源任务版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobVersion(const std::string& _jobVersion);

                    /**
                     * 判断参数 JobVersion 是否已赋值
                     * @return JobVersion 是否已赋值
                     * 
                     */
                    bool JobVersionHasBeenSet() const;

                    /**
                     * 获取来源任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 来源任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置来源任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId 来源任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelName 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelName 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取算法框架
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlgorithmFramework 算法框架
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlgorithmFramework() const;

                    /**
                     * 设置算法框架
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _algorithmFramework 算法框架
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取训练偏好
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingPreference 训练偏好
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainingPreference() const;

                    /**
                     * 设置训练偏好
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainingPreference 训练偏好
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取推理环境来源，SYSTEM/CUSTOM
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReasoningEnvironmentSource 推理环境来源，SYSTEM/CUSTOM
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReasoningEnvironmentSource() const;

                    /**
                     * 设置推理环境来源，SYSTEM/CUSTOM
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reasoningEnvironmentSource 推理环境来源，SYSTEM/CUSTOM
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取推理环境
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReasoningEnvironment 推理环境
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReasoningEnvironment() const;

                    /**
                     * 设置推理环境
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reasoningEnvironment 推理环境
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取推理环境id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReasoningEnvironmentId 推理环境id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReasoningEnvironmentId() const;

                    /**
                     * 设置推理环境id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reasoningEnvironmentId 推理环境id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取自定义推理环境
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReasoningImageInfo 自定义推理环境
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageInfo GetReasoningImageInfo() const;

                    /**
                     * 设置自定义推理环境
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reasoningImageInfo 自定义推理环境
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReasoningImageInfo(const ImageInfo& _reasoningImageInfo);

                    /**
                     * 判断参数 ReasoningImageInfo 是否已赋值
                     * @return ReasoningImageInfo 是否已赋值
                     * 
                     */
                    bool ReasoningImageInfoHasBeenSet() const;

                private:

                    /**
                     * 来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 来源任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 来源任务版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobVersion;
                    bool m_jobVersionHasBeenSet;

                    /**
                     * 来源任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 算法框架
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_algorithmFramework;
                    bool m_algorithmFrameworkHasBeenSet;

                    /**
                     * 训练偏好
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainingPreference;
                    bool m_trainingPreferenceHasBeenSet;

                    /**
                     * 推理环境来源，SYSTEM/CUSTOM
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reasoningEnvironmentSource;
                    bool m_reasoningEnvironmentSourceHasBeenSet;

                    /**
                     * 推理环境
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reasoningEnvironment;
                    bool m_reasoningEnvironmentHasBeenSet;

                    /**
                     * 推理环境id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reasoningEnvironmentId;
                    bool m_reasoningEnvironmentIdHasBeenSet;

                    /**
                     * 自定义推理环境
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageInfo m_reasoningImageInfo;
                    bool m_reasoningImageInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MODELSOURCE_H_
