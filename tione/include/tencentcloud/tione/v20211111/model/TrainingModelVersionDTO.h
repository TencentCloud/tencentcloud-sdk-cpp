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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGMODELVERSIONDTO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGMODELVERSIONDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 模型版本列表
                */
                class TrainingModelVersionDTO : public AbstractModel
                {
                public:
                    TrainingModelVersionDTO();
                    ~TrainingModelVersionDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型id
                     * @return TrainingModelId 模型id
                     */
                    std::string GetTrainingModelId() const;

                    /**
                     * 设置模型id
                     * @param TrainingModelId 模型id
                     */
                    void SetTrainingModelId(const std::string& _trainingModelId);

                    /**
                     * 判断参数 TrainingModelId 是否已赋值
                     * @return TrainingModelId 是否已赋值
                     */
                    bool TrainingModelIdHasBeenSet() const;

                    /**
                     * 获取模型版本id
                     * @return TrainingModelVersionId 模型版本id
                     */
                    std::string GetTrainingModelVersionId() const;

                    /**
                     * 设置模型版本id
                     * @param TrainingModelVersionId 模型版本id
                     */
                    void SetTrainingModelVersionId(const std::string& _trainingModelVersionId);

                    /**
                     * 判断参数 TrainingModelVersionId 是否已赋值
                     * @return TrainingModelVersionId 是否已赋值
                     */
                    bool TrainingModelVersionIdHasBeenSet() const;

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
                     * 获取模型来源
                     * @return TrainingModelSource 模型来源
                     */
                    std::string GetTrainingModelSource() const;

                    /**
                     * 设置模型来源
                     * @param TrainingModelSource 模型来源
                     */
                    void SetTrainingModelSource(const std::string& _trainingModelSource);

                    /**
                     * 判断参数 TrainingModelSource 是否已赋值
                     * @return TrainingModelSource 是否已赋值
                     */
                    bool TrainingModelSourceHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return TrainingModelCreateTime 创建时间
                     */
                    std::string GetTrainingModelCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param TrainingModelCreateTime 创建时间
                     */
                    void SetTrainingModelCreateTime(const std::string& _trainingModelCreateTime);

                    /**
                     * 判断参数 TrainingModelCreateTime 是否已赋值
                     * @return TrainingModelCreateTime 是否已赋值
                     */
                    bool TrainingModelCreateTimeHasBeenSet() const;

                    /**
                     * 获取创建人uin
                     * @return TrainingModelCreator 创建人uin
                     */
                    std::string GetTrainingModelCreator() const;

                    /**
                     * 设置创建人uin
                     * @param TrainingModelCreator 创建人uin
                     */
                    void SetTrainingModelCreator(const std::string& _trainingModelCreator);

                    /**
                     * 判断参数 TrainingModelCreator 是否已赋值
                     * @return TrainingModelCreator 是否已赋值
                     */
                    bool TrainingModelCreatorHasBeenSet() const;

                    /**
                     * 获取算法框架
                     * @return AlgorithmFramework 算法框架
                     */
                    std::string GetAlgorithmFramework() const;

                    /**
                     * 设置算法框架
                     * @param AlgorithmFramework 算法框架
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
                     * 获取推理环境来源
                     * @return ReasoningEnvironmentSource 推理环境来源
                     */
                    std::string GetReasoningEnvironmentSource() const;

                    /**
                     * 设置推理环境来源
                     * @param ReasoningEnvironmentSource 推理环境来源
                     */
                    void SetReasoningEnvironmentSource(const std::string& _reasoningEnvironmentSource);

                    /**
                     * 判断参数 ReasoningEnvironmentSource 是否已赋值
                     * @return ReasoningEnvironmentSource 是否已赋值
                     */
                    bool ReasoningEnvironmentSourceHasBeenSet() const;

                    /**
                     * 获取模型指标
                     * @return TrainingModelIndex 模型指标
                     */
                    std::string GetTrainingModelIndex() const;

                    /**
                     * 设置模型指标
                     * @param TrainingModelIndex 模型指标
                     */
                    void SetTrainingModelIndex(const std::string& _trainingModelIndex);

                    /**
                     * 判断参数 TrainingModelIndex 是否已赋值
                     * @return TrainingModelIndex 是否已赋值
                     */
                    bool TrainingModelIndexHasBeenSet() const;

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
                     * 获取模型cos路径
                     * @return TrainingModelCosPath 模型cos路径
                     */
                    CosPathInfo GetTrainingModelCosPath() const;

                    /**
                     * 设置模型cos路径
                     * @param TrainingModelCosPath 模型cos路径
                     */
                    void SetTrainingModelCosPath(const CosPathInfo& _trainingModelCosPath);

                    /**
                     * 判断参数 TrainingModelCosPath 是否已赋值
                     * @return TrainingModelCosPath 是否已赋值
                     */
                    bool TrainingModelCosPathHasBeenSet() const;

                    /**
                     * 获取模型名称
                     * @return TrainingModelName 模型名称
                     */
                    std::string GetTrainingModelName() const;

                    /**
                     * 设置模型名称
                     * @param TrainingModelName 模型名称
                     */
                    void SetTrainingModelName(const std::string& _trainingModelName);

                    /**
                     * 判断参数 TrainingModelName 是否已赋值
                     * @return TrainingModelName 是否已赋值
                     */
                    bool TrainingModelNameHasBeenSet() const;

                    /**
                     * 获取训练任务id
                     * @return TrainingJobId 训练任务id
                     */
                    std::string GetTrainingJobId() const;

                    /**
                     * 设置训练任务id
                     * @param TrainingJobId 训练任务id
                     */
                    void SetTrainingJobId(const std::string& _trainingJobId);

                    /**
                     * 判断参数 TrainingJobId 是否已赋值
                     * @return TrainingJobId 是否已赋值
                     */
                    bool TrainingJobIdHasBeenSet() const;

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
                     * 获取模型版本创建时间
                     * @return CreateTime 模型版本创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置模型版本创建时间
                     * @param CreateTime 模型版本创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取模型处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingModelStatus 模型处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTrainingModelStatus() const;

                    /**
                     * 设置模型处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TrainingModelStatus 模型处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTrainingModelStatus(const std::string& _trainingModelStatus);

                    /**
                     * 判断参数 TrainingModelStatus 是否已赋值
                     * @return TrainingModelStatus 是否已赋值
                     */
                    bool TrainingModelStatusHasBeenSet() const;

                    /**
                     * 获取模型处理进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingModelProgress 模型处理进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTrainingModelProgress() const;

                    /**
                     * 设置模型处理进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TrainingModelProgress 模型处理进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTrainingModelProgress(const uint64_t& _trainingModelProgress);

                    /**
                     * 判断参数 TrainingModelProgress 是否已赋值
                     * @return TrainingModelProgress 是否已赋值
                     */
                    bool TrainingModelProgressHasBeenSet() const;

                    /**
                     * 获取模型错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingModelErrorMsg 模型错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTrainingModelErrorMsg() const;

                    /**
                     * 设置模型错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TrainingModelErrorMsg 模型错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTrainingModelErrorMsg(const std::string& _trainingModelErrorMsg);

                    /**
                     * 判断参数 TrainingModelErrorMsg 是否已赋值
                     * @return TrainingModelErrorMsg 是否已赋值
                     */
                    bool TrainingModelErrorMsgHasBeenSet() const;

                    /**
                     * 获取模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingModelFormat 模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTrainingModelFormat() const;

                    /**
                     * 设置模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TrainingModelFormat 模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTrainingModelFormat(const std::string& _trainingModelFormat);

                    /**
                     * 判断参数 TrainingModelFormat 是否已赋值
                     * @return TrainingModelFormat 是否已赋值
                     */
                    bool TrainingModelFormatHasBeenSet() const;

                private:

                    /**
                     * 模型id
                     */
                    std::string m_trainingModelId;
                    bool m_trainingModelIdHasBeenSet;

                    /**
                     * 模型版本id
                     */
                    std::string m_trainingModelVersionId;
                    bool m_trainingModelVersionIdHasBeenSet;

                    /**
                     * 模型版本
                     */
                    std::string m_trainingModelVersion;
                    bool m_trainingModelVersionHasBeenSet;

                    /**
                     * 模型来源
                     */
                    std::string m_trainingModelSource;
                    bool m_trainingModelSourceHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_trainingModelCreateTime;
                    bool m_trainingModelCreateTimeHasBeenSet;

                    /**
                     * 创建人uin
                     */
                    std::string m_trainingModelCreator;
                    bool m_trainingModelCreatorHasBeenSet;

                    /**
                     * 算法框架
                     */
                    std::string m_algorithmFramework;
                    bool m_algorithmFrameworkHasBeenSet;

                    /**
                     * 推理环境
                     */
                    std::string m_reasoningEnvironment;
                    bool m_reasoningEnvironmentHasBeenSet;

                    /**
                     * 推理环境来源
                     */
                    std::string m_reasoningEnvironmentSource;
                    bool m_reasoningEnvironmentSourceHasBeenSet;

                    /**
                     * 模型指标
                     */
                    std::string m_trainingModelIndex;
                    bool m_trainingModelIndexHasBeenSet;

                    /**
                     * 训练任务名称
                     */
                    std::string m_trainingJobName;
                    bool m_trainingJobNameHasBeenSet;

                    /**
                     * 模型cos路径
                     */
                    CosPathInfo m_trainingModelCosPath;
                    bool m_trainingModelCosPathHasBeenSet;

                    /**
                     * 模型名称
                     */
                    std::string m_trainingModelName;
                    bool m_trainingModelNameHasBeenSet;

                    /**
                     * 训练任务id
                     */
                    std::string m_trainingJobId;
                    bool m_trainingJobIdHasBeenSet;

                    /**
                     * 自定义推理环境
                     */
                    ImageInfo m_reasoningImageInfo;
                    bool m_reasoningImageInfoHasBeenSet;

                    /**
                     * 模型版本创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 模型处理状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainingModelStatus;
                    bool m_trainingModelStatusHasBeenSet;

                    /**
                     * 模型处理进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_trainingModelProgress;
                    bool m_trainingModelProgressHasBeenSet;

                    /**
                     * 模型错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainingModelErrorMsg;
                    bool m_trainingModelErrorMsgHasBeenSet;

                    /**
                     * 模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainingModelFormat;
                    bool m_trainingModelFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGMODELVERSIONDTO_H_
