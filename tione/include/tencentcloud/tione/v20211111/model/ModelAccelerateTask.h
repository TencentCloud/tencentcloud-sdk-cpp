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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MODELACCELERATETASK_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MODELACCELERATETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ModelInputInfo.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>
#include <tencentcloud/tione/v20211111/model/HyperParameter.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 模型加速任务
                */
                class ModelAccelerateTask : public AbstractModel
                {
                public:
                    ModelAccelerateTask();
                    ~ModelAccelerateTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型加速任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelAccTaskId 模型加速任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetModelAccTaskId() const;

                    /**
                     * 设置模型加速任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ModelAccTaskId 模型加速任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetModelAccTaskId(const std::string& _modelAccTaskId);

                    /**
                     * 判断参数 ModelAccTaskId 是否已赋值
                     * @return ModelAccTaskId 是否已赋值
                     */
                    bool ModelAccTaskIdHasBeenSet() const;

                    /**
                     * 获取模型加速任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelAccTaskName 模型加速任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetModelAccTaskName() const;

                    /**
                     * 设置模型加速任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ModelAccTaskName 模型加速任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetModelAccTaskName(const std::string& _modelAccTaskName);

                    /**
                     * 判断参数 ModelAccTaskName 是否已赋值
                     * @return ModelAccTaskName 是否已赋值
                     */
                    bool ModelAccTaskNameHasBeenSet() const;

                    /**
                     * 获取模型ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelId 模型ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ModelId 模型ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelName 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ModelName 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取模型版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelVersion 模型版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置模型版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ModelVersion 模型版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取模型来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelSource 模型来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetModelSource() const;

                    /**
                     * 设置模型来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ModelSource 模型来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetModelSource(const std::string& _modelSource);

                    /**
                     * 判断参数 ModelSource 是否已赋值
                     * @return ModelSource 是否已赋值
                     */
                    bool ModelSourceHasBeenSet() const;

                    /**
                     * 获取优化级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OptimizationLevel 优化级别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOptimizationLevel() const;

                    /**
                     * 设置优化级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OptimizationLevel 优化级别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOptimizationLevel(const std::string& _optimizationLevel);

                    /**
                     * 判断参数 OptimizationLevel 是否已赋值
                     * @return OptimizationLevel 是否已赋值
                     */
                    bool OptimizationLevelHasBeenSet() const;

                    /**
                     * 获取任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskStatus 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskStatus 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取input节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelInputNum input节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetModelInputNum() const;

                    /**
                     * 设置input节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ModelInputNum input节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetModelInputNum(const uint64_t& _modelInputNum);

                    /**
                     * 判断参数 ModelInputNum 是否已赋值
                     * @return ModelInputNum 是否已赋值
                     */
                    bool ModelInputNumHasBeenSet() const;

                    /**
                     * 获取input节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelInputInfos input节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ModelInputInfo> GetModelInputInfos() const;

                    /**
                     * 设置input节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ModelInputInfos input节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetModelInputInfos(const std::vector<ModelInputInfo>& _modelInputInfos);

                    /**
                     * 判断参数 ModelInputInfos 是否已赋值
                     * @return ModelInputInfos 是否已赋值
                     */
                    bool ModelInputInfosHasBeenSet() const;

                    /**
                     * 获取GPU型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GPUType GPU型号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGPUType() const;

                    /**
                     * 设置GPU型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GPUType GPU型号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGPUType(const std::string& _gPUType);

                    /**
                     * 判断参数 GPUType 是否已赋值
                     * @return GPUType 是否已赋值
                     */
                    bool GPUTypeHasBeenSet() const;

                    /**
                     * 获取计费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeType 计费模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置计费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ChargeType 计费模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取加速比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Speedup 加速比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSpeedup() const;

                    /**
                     * 设置加速比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Speedup 加速比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSpeedup(const std::string& _speedup);

                    /**
                     * 判断参数 Speedup 是否已赋值
                     * @return Speedup 是否已赋值
                     */
                    bool SpeedupHasBeenSet() const;

                    /**
                     * 获取模型输入cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelInputPath 模型输入cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosPathInfo GetModelInputPath() const;

                    /**
                     * 设置模型输入cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ModelInputPath 模型输入cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetModelInputPath(const CosPathInfo& _modelInputPath);

                    /**
                     * 判断参数 ModelInputPath 是否已赋值
                     * @return ModelInputPath 是否已赋值
                     */
                    bool ModelInputPathHasBeenSet() const;

                    /**
                     * 获取模型输出cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelOutputPath 模型输出cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosPathInfo GetModelOutputPath() const;

                    /**
                     * 设置模型输出cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ModelOutputPath 模型输出cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetModelOutputPath(const CosPathInfo& _modelOutputPath);

                    /**
                     * 判断参数 ModelOutputPath 是否已赋值
                     * @return ModelOutputPath 是否已赋值
                     */
                    bool ModelOutputPathHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMsg 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrorMsg 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取算法框架
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlgorithmFramework 算法框架
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAlgorithmFramework() const;

                    /**
                     * 设置算法框架
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AlgorithmFramework 算法框架
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlgorithmFramework(const std::string& _algorithmFramework);

                    /**
                     * 判断参数 AlgorithmFramework 是否已赋值
                     * @return AlgorithmFramework 是否已赋值
                     */
                    bool AlgorithmFrameworkHasBeenSet() const;

                    /**
                     * 获取排队个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaitNumber 排队个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetWaitNumber() const;

                    /**
                     * 设置排队个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WaitNumber 排队个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWaitNumber(const uint64_t& _waitNumber);

                    /**
                     * 判断参数 WaitNumber 是否已赋值
                     * @return WaitNumber 是否已赋值
                     */
                    bool WaitNumberHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskProgress 任务进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTaskProgress() const;

                    /**
                     * 设置任务进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskProgress 任务进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskProgress(const uint64_t& _taskProgress);

                    /**
                     * 判断参数 TaskProgress 是否已赋值
                     * @return TaskProgress 是否已赋值
                     */
                    bool TaskProgressHasBeenSet() const;

                    /**
                     * 获取模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelFormat 模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetModelFormat() const;

                    /**
                     * 设置模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ModelFormat 模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetModelFormat(const std::string& _modelFormat);

                    /**
                     * 判断参数 ModelFormat 是否已赋值
                     * @return ModelFormat 是否已赋值
                     */
                    bool ModelFormatHasBeenSet() const;

                    /**
                     * 获取模型Tensor信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TensorInfos 模型Tensor信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetTensorInfos() const;

                    /**
                     * 设置模型Tensor信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TensorInfos 模型Tensor信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTensorInfos(const std::vector<std::string>& _tensorInfos);

                    /**
                     * 判断参数 TensorInfos 是否已赋值
                     * @return TensorInfos 是否已赋值
                     */
                    bool TensorInfosHasBeenSet() const;

                    /**
                     * 获取模型专业参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HyperParameter 模型专业参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HyperParameter GetHyperParameter() const;

                    /**
                     * 设置模型专业参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HyperParameter 模型专业参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHyperParameter(const HyperParameter& _hyperParameter);

                    /**
                     * 判断参数 HyperParameter 是否已赋值
                     * @return HyperParameter 是否已赋值
                     */
                    bool HyperParameterHasBeenSet() const;

                    /**
                     * 获取加速引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccEngineVersion 加速引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAccEngineVersion() const;

                    /**
                     * 设置加速引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AccEngineVersion 加速引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAccEngineVersion(const std::string& _accEngineVersion);

                    /**
                     * 判断参数 AccEngineVersion 是否已赋值
                     * @return AccEngineVersion 是否已赋值
                     */
                    bool AccEngineVersionHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取优化模型是否已保存到模型仓库
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSaved 优化模型是否已保存到模型仓库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsSaved() const;

                    /**
                     * 设置优化模型是否已保存到模型仓库
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsSaved 优化模型是否已保存到模型仓库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsSaved(const bool& _isSaved);

                    /**
                     * 判断参数 IsSaved 是否已赋值
                     * @return IsSaved 是否已赋值
                     */
                    bool IsSavedHasBeenSet() const;

                    /**
                     * 获取SAVED_MODEL保存时配置的签名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelSignature SAVED_MODEL保存时配置的签名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetModelSignature() const;

                    /**
                     * 设置SAVED_MODEL保存时配置的签名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ModelSignature SAVED_MODEL保存时配置的签名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetModelSignature(const std::string& _modelSignature);

                    /**
                     * 判断参数 ModelSignature 是否已赋值
                     * @return ModelSignature 是否已赋值
                     */
                    bool ModelSignatureHasBeenSet() const;

                    /**
                     * 获取是否是QAT模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QATModel 是否是QAT模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetQATModel() const;

                    /**
                     * 设置是否是QAT模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param QATModel 是否是QAT模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQATModel(const bool& _qATModel);

                    /**
                     * 判断参数 QATModel 是否已赋值
                     * @return QATModel 是否已赋值
                     */
                    bool QATModelHasBeenSet() const;

                private:

                    /**
                     * 模型加速任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelAccTaskId;
                    bool m_modelAccTaskIdHasBeenSet;

                    /**
                     * 模型加速任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelAccTaskName;
                    bool m_modelAccTaskNameHasBeenSet;

                    /**
                     * 模型ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 模型版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * 模型来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelSource;
                    bool m_modelSourceHasBeenSet;

                    /**
                     * 优化级别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_optimizationLevel;
                    bool m_optimizationLevelHasBeenSet;

                    /**
                     * 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * input节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_modelInputNum;
                    bool m_modelInputNumHasBeenSet;

                    /**
                     * input节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ModelInputInfo> m_modelInputInfos;
                    bool m_modelInputInfosHasBeenSet;

                    /**
                     * GPU型号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gPUType;
                    bool m_gPUTypeHasBeenSet;

                    /**
                     * 计费模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 加速比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_speedup;
                    bool m_speedupHasBeenSet;

                    /**
                     * 模型输入cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosPathInfo m_modelInputPath;
                    bool m_modelInputPathHasBeenSet;

                    /**
                     * 模型输出cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosPathInfo m_modelOutputPath;
                    bool m_modelOutputPathHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 算法框架
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_algorithmFramework;
                    bool m_algorithmFrameworkHasBeenSet;

                    /**
                     * 排队个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_waitNumber;
                    bool m_waitNumberHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskProgress;
                    bool m_taskProgressHasBeenSet;

                    /**
                     * 模型格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelFormat;
                    bool m_modelFormatHasBeenSet;

                    /**
                     * 模型Tensor信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tensorInfos;
                    bool m_tensorInfosHasBeenSet;

                    /**
                     * 模型专业参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HyperParameter m_hyperParameter;
                    bool m_hyperParameterHasBeenSet;

                    /**
                     * 加速引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accEngineVersion;
                    bool m_accEngineVersionHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 优化模型是否已保存到模型仓库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isSaved;
                    bool m_isSavedHasBeenSet;

                    /**
                     * SAVED_MODEL保存时配置的签名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelSignature;
                    bool m_modelSignatureHasBeenSet;

                    /**
                     * 是否是QAT模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_qATModel;
                    bool m_qATModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MODELACCELERATETASK_H_
