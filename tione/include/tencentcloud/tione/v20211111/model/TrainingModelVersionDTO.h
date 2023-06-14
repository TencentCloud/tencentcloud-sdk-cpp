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
                     * 
                     */
                    std::string GetTrainingModelId() const;

                    /**
                     * 设置模型id
                     * @param _trainingModelId 模型id
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
                     * 获取模型版本id
                     * @return TrainingModelVersionId 模型版本id
                     * 
                     */
                    std::string GetTrainingModelVersionId() const;

                    /**
                     * 设置模型版本id
                     * @param _trainingModelVersionId 模型版本id
                     * 
                     */
                    void SetTrainingModelVersionId(const std::string& _trainingModelVersionId);

                    /**
                     * 判断参数 TrainingModelVersionId 是否已赋值
                     * @return TrainingModelVersionId 是否已赋值
                     * 
                     */
                    bool TrainingModelVersionIdHasBeenSet() const;

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
                     * 获取模型来源
                     * @return TrainingModelSource 模型来源
                     * 
                     */
                    std::string GetTrainingModelSource() const;

                    /**
                     * 设置模型来源
                     * @param _trainingModelSource 模型来源
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
                     * 获取创建时间
                     * @return TrainingModelCreateTime 创建时间
                     * 
                     */
                    std::string GetTrainingModelCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _trainingModelCreateTime 创建时间
                     * 
                     */
                    void SetTrainingModelCreateTime(const std::string& _trainingModelCreateTime);

                    /**
                     * 判断参数 TrainingModelCreateTime 是否已赋值
                     * @return TrainingModelCreateTime 是否已赋值
                     * 
                     */
                    bool TrainingModelCreateTimeHasBeenSet() const;

                    /**
                     * 获取创建人uin
                     * @return TrainingModelCreator 创建人uin
                     * 
                     */
                    std::string GetTrainingModelCreator() const;

                    /**
                     * 设置创建人uin
                     * @param _trainingModelCreator 创建人uin
                     * 
                     */
                    void SetTrainingModelCreator(const std::string& _trainingModelCreator);

                    /**
                     * 判断参数 TrainingModelCreator 是否已赋值
                     * @return TrainingModelCreator 是否已赋值
                     * 
                     */
                    bool TrainingModelCreatorHasBeenSet() const;

                    /**
                     * 获取算法框架
                     * @return AlgorithmFramework 算法框架
                     * 
                     */
                    std::string GetAlgorithmFramework() const;

                    /**
                     * 设置算法框架
                     * @param _algorithmFramework 算法框架
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
                     * 获取推理环境来源
                     * @return ReasoningEnvironmentSource 推理环境来源
                     * 
                     */
                    std::string GetReasoningEnvironmentSource() const;

                    /**
                     * 设置推理环境来源
                     * @param _reasoningEnvironmentSource 推理环境来源
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
                     * 获取模型指标
                     * @return TrainingModelIndex 模型指标
                     * 
                     */
                    std::string GetTrainingModelIndex() const;

                    /**
                     * 设置模型指标
                     * @param _trainingModelIndex 模型指标
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
                     * 获取模型cos路径
                     * @return TrainingModelCosPath 模型cos路径
                     * 
                     */
                    CosPathInfo GetTrainingModelCosPath() const;

                    /**
                     * 设置模型cos路径
                     * @param _trainingModelCosPath 模型cos路径
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
                     * 获取模型名称
                     * @return TrainingModelName 模型名称
                     * 
                     */
                    std::string GetTrainingModelName() const;

                    /**
                     * 设置模型名称
                     * @param _trainingModelName 模型名称
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
                     * 获取训练任务id
                     * @return TrainingJobId 训练任务id
                     * 
                     */
                    std::string GetTrainingJobId() const;

                    /**
                     * 设置训练任务id
                     * @param _trainingJobId 训练任务id
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
                     * 获取模型版本创建时间
                     * @return CreateTime 模型版本创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置模型版本创建时间
                     * @param _createTime 模型版本创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取模型处理状态
STATUS_SUCCESS：导入成功，STATUS_FAILED：导入失败 ，STATUS_RUNNING：导入中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingModelStatus 模型处理状态
STATUS_SUCCESS：导入成功，STATUS_FAILED：导入失败 ，STATUS_RUNNING：导入中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainingModelStatus() const;

                    /**
                     * 设置模型处理状态
STATUS_SUCCESS：导入成功，STATUS_FAILED：导入失败 ，STATUS_RUNNING：导入中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainingModelStatus 模型处理状态
STATUS_SUCCESS：导入成功，STATUS_FAILED：导入失败 ，STATUS_RUNNING：导入中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrainingModelStatus(const std::string& _trainingModelStatus);

                    /**
                     * 判断参数 TrainingModelStatus 是否已赋值
                     * @return TrainingModelStatus 是否已赋值
                     * 
                     */
                    bool TrainingModelStatusHasBeenSet() const;

                    /**
                     * 获取模型处理进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingModelProgress 模型处理进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTrainingModelProgress() const;

                    /**
                     * 设置模型处理进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainingModelProgress 模型处理进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrainingModelProgress(const uint64_t& _trainingModelProgress);

                    /**
                     * 判断参数 TrainingModelProgress 是否已赋值
                     * @return TrainingModelProgress 是否已赋值
                     * 
                     */
                    bool TrainingModelProgressHasBeenSet() const;

                    /**
                     * 获取模型错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingModelErrorMsg 模型错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainingModelErrorMsg() const;

                    /**
                     * 设置模型错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainingModelErrorMsg 模型错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrainingModelErrorMsg(const std::string& _trainingModelErrorMsg);

                    /**
                     * 判断参数 TrainingModelErrorMsg 是否已赋值
                     * @return TrainingModelErrorMsg 是否已赋值
                     * 
                     */
                    bool TrainingModelErrorMsgHasBeenSet() const;

                    /**
                     * 获取模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingModelFormat 模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainingModelFormat() const;

                    /**
                     * 设置模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainingModelFormat 模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrainingModelFormat(const std::string& _trainingModelFormat);

                    /**
                     * 判断参数 TrainingModelFormat 是否已赋值
                     * @return TrainingModelFormat 是否已赋值
                     * 
                     */
                    bool TrainingModelFormatHasBeenSet() const;

                    /**
                     * 获取模型版本类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionType 模型版本类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionType() const;

                    /**
                     * 设置模型版本类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionType 模型版本类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionType(const std::string& _versionType);

                    /**
                     * 判断参数 VersionType 是否已赋值
                     * @return VersionType 是否已赋值
                     * 
                     */
                    bool VersionTypeHasBeenSet() const;

                    /**
                     * 获取GPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GPUType GPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGPUType() const;

                    /**
                     * 设置GPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gPUType GPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGPUType(const std::string& _gPUType);

                    /**
                     * 判断参数 GPUType 是否已赋值
                     * @return GPUType 是否已赋值
                     * 
                     */
                    bool GPUTypeHasBeenSet() const;

                    /**
                     * 获取模型自动清理开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoClean 模型自动清理开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAutoClean() const;

                    /**
                     * 设置模型自动清理开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoClean 模型自动清理开关
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取模型清理周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelCleanPeriod 模型清理周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetModelCleanPeriod() const;

                    /**
                     * 设置模型清理周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelCleanPeriod 模型清理周期
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取模型数量保留上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxReservedModels 模型数量保留上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxReservedModels() const;

                    /**
                     * 设置模型数量保留上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxReservedModels 模型数量保留上限
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取模型热更新目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelHotUpdatePath 模型热更新目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CosPathInfo GetModelHotUpdatePath() const;

                    /**
                     * 设置模型热更新目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelHotUpdatePath 模型热更新目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelHotUpdatePath(const CosPathInfo& _modelHotUpdatePath);

                    /**
                     * 判断参数 ModelHotUpdatePath 是否已赋值
                     * @return ModelHotUpdatePath 是否已赋值
                     * 
                     */
                    bool ModelHotUpdatePathHasBeenSet() const;

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
                     * 获取训练任务版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingJobVersion 训练任务版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainingJobVersion() const;

                    /**
                     * 设置训练任务版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainingJobVersion 训练任务版本
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取自动学习任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoMLTaskId 自动学习任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAutoMLTaskId() const;

                    /**
                     * 设置自动学习任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoMLTaskId 自动学习任务id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否QAT模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsQAT 是否QAT模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsQAT() const;

                    /**
                     * 设置是否QAT模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isQAT 是否QAT模型
注意：此字段可能返回 null，表示取不到有效值。
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
STATUS_SUCCESS：导入成功，STATUS_FAILED：导入失败 ，STATUS_RUNNING：导入中
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

                    /**
                     * 模型版本类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionType;
                    bool m_versionTypeHasBeenSet;

                    /**
                     * GPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gPUType;
                    bool m_gPUTypeHasBeenSet;

                    /**
                     * 模型自动清理开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_autoClean;
                    bool m_autoCleanHasBeenSet;

                    /**
                     * 模型清理周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_modelCleanPeriod;
                    bool m_modelCleanPeriodHasBeenSet;

                    /**
                     * 模型数量保留上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxReservedModels;
                    bool m_maxReservedModelsHasBeenSet;

                    /**
                     * 模型热更新目录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosPathInfo m_modelHotUpdatePath;
                    bool m_modelHotUpdatePathHasBeenSet;

                    /**
                     * 推理环境id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reasoningEnvironmentId;
                    bool m_reasoningEnvironmentIdHasBeenSet;

                    /**
                     * 训练任务版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainingJobVersion;
                    bool m_trainingJobVersionHasBeenSet;

                    /**
                     * 训练偏好
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainingPreference;
                    bool m_trainingPreferenceHasBeenSet;

                    /**
                     * 自动学习任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_autoMLTaskId;
                    bool m_autoMLTaskIdHasBeenSet;

                    /**
                     * 是否QAT模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isQAT;
                    bool m_isQATHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGMODELVERSIONDTO_H_
