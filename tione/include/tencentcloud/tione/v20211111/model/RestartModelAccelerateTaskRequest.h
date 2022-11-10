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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_RESTARTMODELACCELERATETASKREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_RESTARTMODELACCELERATETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>
#include <tencentcloud/tione/v20211111/model/ModelInputInfo.h>
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
                * RestartModelAccelerateTask请求参数结构体
                */
                class RestartModelAccelerateTaskRequest : public AbstractModel
                {
                public:
                    RestartModelAccelerateTaskRequest();
                    ~RestartModelAccelerateTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模型加速任务ID
                     * @return ModelAccTaskId 模型加速任务ID
                     */
                    std::string GetModelAccTaskId() const;

                    /**
                     * 设置模型加速任务ID
                     * @param ModelAccTaskId 模型加速任务ID
                     */
                    void SetModelAccTaskId(const std::string& _modelAccTaskId);

                    /**
                     * 判断参数 ModelAccTaskId 是否已赋值
                     * @return ModelAccTaskId 是否已赋值
                     */
                    bool ModelAccTaskIdHasBeenSet() const;

                    /**
                     * 获取模型加速任务名称
                     * @return ModelAccTaskName 模型加速任务名称
                     */
                    std::string GetModelAccTaskName() const;

                    /**
                     * 设置模型加速任务名称
                     * @param ModelAccTaskName 模型加速任务名称
                     */
                    void SetModelAccTaskName(const std::string& _modelAccTaskName);

                    /**
                     * 判断参数 ModelAccTaskName 是否已赋值
                     * @return ModelAccTaskName 是否已赋值
                     */
                    bool ModelAccTaskNameHasBeenSet() const;

                    /**
                     * 获取模型来源（JOB/COS）
                     * @return ModelSource 模型来源（JOB/COS）
                     */
                    std::string GetModelSource() const;

                    /**
                     * 设置模型来源（JOB/COS）
                     * @param ModelSource 模型来源（JOB/COS）
                     */
                    void SetModelSource(const std::string& _modelSource);

                    /**
                     * 判断参数 ModelSource 是否已赋值
                     * @return ModelSource 是否已赋值
                     */
                    bool ModelSourceHasBeenSet() const;

                    /**
                     * 获取算法框架（废弃）
                     * @return AlgorithmFramework 算法框架（废弃）
                     */
                    std::string GetAlgorithmFramework() const;

                    /**
                     * 设置算法框架（废弃）
                     * @param AlgorithmFramework 算法框架（废弃）
                     */
                    void SetAlgorithmFramework(const std::string& _algorithmFramework);

                    /**
                     * 判断参数 AlgorithmFramework 是否已赋值
                     * @return AlgorithmFramework 是否已赋值
                     */
                    bool AlgorithmFrameworkHasBeenSet() const;

                    /**
                     * 获取模型ID
                     * @return ModelId 模型ID
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型ID
                     * @param ModelId 模型ID
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取模型名称
                     * @return ModelName 模型名称
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称
                     * @param ModelName 模型名称
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取模型版本
                     * @return ModelVersion 模型版本
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置模型版本
                     * @param ModelVersion 模型版本
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取模型输入cos路径
                     * @return ModelInputPath 模型输入cos路径
                     */
                    CosPathInfo GetModelInputPath() const;

                    /**
                     * 设置模型输入cos路径
                     * @param ModelInputPath 模型输入cos路径
                     */
                    void SetModelInputPath(const CosPathInfo& _modelInputPath);

                    /**
                     * 判断参数 ModelInputPath 是否已赋值
                     * @return ModelInputPath 是否已赋值
                     */
                    bool ModelInputPathHasBeenSet() const;

                    /**
                     * 获取优化级别（NO_LOSS/FP16），默认FP16
                     * @return OptimizationLevel 优化级别（NO_LOSS/FP16），默认FP16
                     */
                    std::string GetOptimizationLevel() const;

                    /**
                     * 设置优化级别（NO_LOSS/FP16），默认FP16
                     * @param OptimizationLevel 优化级别（NO_LOSS/FP16），默认FP16
                     */
                    void SetOptimizationLevel(const std::string& _optimizationLevel);

                    /**
                     * 判断参数 OptimizationLevel 是否已赋值
                     * @return OptimizationLevel 是否已赋值
                     */
                    bool OptimizationLevelHasBeenSet() const;

                    /**
                     * 获取input节点个数（废弃）
                     * @return ModelInputNum input节点个数（废弃）
                     */
                    uint64_t GetModelInputNum() const;

                    /**
                     * 设置input节点个数（废弃）
                     * @param ModelInputNum input节点个数（废弃）
                     */
                    void SetModelInputNum(const uint64_t& _modelInputNum);

                    /**
                     * 判断参数 ModelInputNum 是否已赋值
                     * @return ModelInputNum 是否已赋值
                     */
                    bool ModelInputNumHasBeenSet() const;

                    /**
                     * 获取input节点信息（废弃）
                     * @return ModelInputInfos input节点信息（废弃）
                     */
                    std::vector<ModelInputInfo> GetModelInputInfos() const;

                    /**
                     * 设置input节点信息（废弃）
                     * @param ModelInputInfos input节点信息（废弃）
                     */
                    void SetModelInputInfos(const std::vector<ModelInputInfo>& _modelInputInfos);

                    /**
                     * 判断参数 ModelInputInfos 是否已赋值
                     * @return ModelInputInfos 是否已赋值
                     */
                    bool ModelInputInfosHasBeenSet() const;

                    /**
                     * 获取模型输出cos路径
                     * @return ModelOutputPath 模型输出cos路径
                     */
                    CosPathInfo GetModelOutputPath() const;

                    /**
                     * 设置模型输出cos路径
                     * @param ModelOutputPath 模型输出cos路径
                     */
                    void SetModelOutputPath(const CosPathInfo& _modelOutputPath);

                    /**
                     * 判断参数 ModelOutputPath 是否已赋值
                     * @return ModelOutputPath 是否已赋值
                     */
                    bool ModelOutputPathHasBeenSet() const;

                    /**
                     * 获取模型格式（TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/MMDETECTION/ONNX/HUGGING_FACE）
                     * @return ModelFormat 模型格式（TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/MMDETECTION/ONNX/HUGGING_FACE）
                     */
                    std::string GetModelFormat() const;

                    /**
                     * 设置模型格式（TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/MMDETECTION/ONNX/HUGGING_FACE）
                     * @param ModelFormat 模型格式（TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/MMDETECTION/ONNX/HUGGING_FACE）
                     */
                    void SetModelFormat(const std::string& _modelFormat);

                    /**
                     * 判断参数 ModelFormat 是否已赋值
                     * @return ModelFormat 是否已赋值
                     */
                    bool ModelFormatHasBeenSet() const;

                    /**
                     * 获取模型Tensor信息
                     * @return TensorInfos 模型Tensor信息
                     */
                    std::vector<std::string> GetTensorInfos() const;

                    /**
                     * 设置模型Tensor信息
                     * @param TensorInfos 模型Tensor信息
                     */
                    void SetTensorInfos(const std::vector<std::string>& _tensorInfos);

                    /**
                     * 判断参数 TensorInfos 是否已赋值
                     * @return TensorInfos 是否已赋值
                     */
                    bool TensorInfosHasBeenSet() const;

                    /**
                     * 获取GPU类型（T4/V100），默认T4
                     * @return GPUType GPU类型（T4/V100），默认T4
                     */
                    std::string GetGPUType() const;

                    /**
                     * 设置GPU类型（T4/V100），默认T4
                     * @param GPUType GPU类型（T4/V100），默认T4
                     */
                    void SetGPUType(const std::string& _gPUType);

                    /**
                     * 判断参数 GPUType 是否已赋值
                     * @return GPUType 是否已赋值
                     */
                    bool GPUTypeHasBeenSet() const;

                    /**
                     * 获取模型专业参数
                     * @return HyperParameter 模型专业参数
                     */
                    HyperParameter GetHyperParameter() const;

                    /**
                     * 设置模型专业参数
                     * @param HyperParameter 模型专业参数
                     */
                    void SetHyperParameter(const HyperParameter& _hyperParameter);

                    /**
                     * 判断参数 HyperParameter 是否已赋值
                     * @return HyperParameter 是否已赋值
                     */
                    bool HyperParameterHasBeenSet() const;

                    /**
                     * 获取加速引擎版本
                     * @return AccEngineVersion 加速引擎版本
                     */
                    std::string GetAccEngineVersion() const;

                    /**
                     * 设置加速引擎版本
                     * @param AccEngineVersion 加速引擎版本
                     */
                    void SetAccEngineVersion(const std::string& _accEngineVersion);

                    /**
                     * 判断参数 AccEngineVersion 是否已赋值
                     * @return AccEngineVersion 是否已赋值
                     */
                    bool AccEngineVersionHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
                     * @param Tags 标签
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取SavedModel保存时配置的签名
                     * @return ModelSignature SavedModel保存时配置的签名
                     */
                    std::string GetModelSignature() const;

                    /**
                     * 设置SavedModel保存时配置的签名
                     * @param ModelSignature SavedModel保存时配置的签名
                     */
                    void SetModelSignature(const std::string& _modelSignature);

                    /**
                     * 判断参数 ModelSignature 是否已赋值
                     * @return ModelSignature 是否已赋值
                     */
                    bool ModelSignatureHasBeenSet() const;

                private:

                    /**
                     * 模型加速任务ID
                     */
                    std::string m_modelAccTaskId;
                    bool m_modelAccTaskIdHasBeenSet;

                    /**
                     * 模型加速任务名称
                     */
                    std::string m_modelAccTaskName;
                    bool m_modelAccTaskNameHasBeenSet;

                    /**
                     * 模型来源（JOB/COS）
                     */
                    std::string m_modelSource;
                    bool m_modelSourceHasBeenSet;

                    /**
                     * 算法框架（废弃）
                     */
                    std::string m_algorithmFramework;
                    bool m_algorithmFrameworkHasBeenSet;

                    /**
                     * 模型ID
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 模型名称
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 模型版本
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * 模型输入cos路径
                     */
                    CosPathInfo m_modelInputPath;
                    bool m_modelInputPathHasBeenSet;

                    /**
                     * 优化级别（NO_LOSS/FP16），默认FP16
                     */
                    std::string m_optimizationLevel;
                    bool m_optimizationLevelHasBeenSet;

                    /**
                     * input节点个数（废弃）
                     */
                    uint64_t m_modelInputNum;
                    bool m_modelInputNumHasBeenSet;

                    /**
                     * input节点信息（废弃）
                     */
                    std::vector<ModelInputInfo> m_modelInputInfos;
                    bool m_modelInputInfosHasBeenSet;

                    /**
                     * 模型输出cos路径
                     */
                    CosPathInfo m_modelOutputPath;
                    bool m_modelOutputPathHasBeenSet;

                    /**
                     * 模型格式（TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/MMDETECTION/ONNX/HUGGING_FACE）
                     */
                    std::string m_modelFormat;
                    bool m_modelFormatHasBeenSet;

                    /**
                     * 模型Tensor信息
                     */
                    std::vector<std::string> m_tensorInfos;
                    bool m_tensorInfosHasBeenSet;

                    /**
                     * GPU类型（T4/V100），默认T4
                     */
                    std::string m_gPUType;
                    bool m_gPUTypeHasBeenSet;

                    /**
                     * 模型专业参数
                     */
                    HyperParameter m_hyperParameter;
                    bool m_hyperParameterHasBeenSet;

                    /**
                     * 加速引擎版本
                     */
                    std::string m_accEngineVersion;
                    bool m_accEngineVersionHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * SavedModel保存时配置的签名
                     */
                    std::string m_modelSignature;
                    bool m_modelSignatureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_RESTARTMODELACCELERATETASKREQUEST_H_
