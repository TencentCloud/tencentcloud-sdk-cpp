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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_BATCHMODELACCTASK_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_BATCHMODELACCTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 批量模型加速任务
                */
                class BatchModelAccTask : public AbstractModel
                {
                public:
                    BatchModelAccTask();
                    ~BatchModelAccTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取模型来源(JOB/COS)
                     * @return ModelSource 模型来源(JOB/COS)
                     */
                    std::string GetModelSource() const;

                    /**
                     * 设置模型来源(JOB/COS)
                     * @param ModelSource 模型来源(JOB/COS)
                     */
                    void SetModelSource(const std::string& _modelSource);

                    /**
                     * 判断参数 ModelSource 是否已赋值
                     * @return ModelSource 是否已赋值
                     */
                    bool ModelSourceHasBeenSet() const;

                    /**
                     * 获取模型格式(TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/MMDETECTION/ONNX/HUGGING_FACE)
                     * @return ModelFormat 模型格式(TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/MMDETECTION/ONNX/HUGGING_FACE)
                     */
                    std::string GetModelFormat() const;

                    /**
                     * 设置模型格式(TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/MMDETECTION/ONNX/HUGGING_FACE)
                     * @param ModelFormat 模型格式(TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/MMDETECTION/ONNX/HUGGING_FACE)
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

                    /**
                     * 获取加速引擎对应的框架版本
                     * @return FrameworkVersion 加速引擎对应的框架版本
                     */
                    std::string GetFrameworkVersion() const;

                    /**
                     * 设置加速引擎对应的框架版本
                     * @param FrameworkVersion 加速引擎对应的框架版本
                     */
                    void SetFrameworkVersion(const std::string& _frameworkVersion);

                    /**
                     * 判断参数 FrameworkVersion 是否已赋值
                     * @return FrameworkVersion 是否已赋值
                     */
                    bool FrameworkVersionHasBeenSet() const;

                private:

                    /**
                     * 模型ID
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 模型版本
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * 模型来源(JOB/COS)
                     */
                    std::string m_modelSource;
                    bool m_modelSourceHasBeenSet;

                    /**
                     * 模型格式(TORCH_SCRIPT/DETECTRON2/SAVED_MODEL/FROZEN_GRAPH/MMDETECTION/ONNX/HUGGING_FACE)
                     */
                    std::string m_modelFormat;
                    bool m_modelFormatHasBeenSet;

                    /**
                     * 模型Tensor信息
                     */
                    std::vector<std::string> m_tensorInfos;
                    bool m_tensorInfosHasBeenSet;

                    /**
                     * 加速引擎版本
                     */
                    std::string m_accEngineVersion;
                    bool m_accEngineVersionHasBeenSet;

                    /**
                     * 模型输入cos路径
                     */
                    CosPathInfo m_modelInputPath;
                    bool m_modelInputPathHasBeenSet;

                    /**
                     * 模型名称
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * SavedModel保存时配置的签名
                     */
                    std::string m_modelSignature;
                    bool m_modelSignatureHasBeenSet;

                    /**
                     * 加速引擎对应的框架版本
                     */
                    std::string m_frameworkVersion;
                    bool m_frameworkVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_BATCHMODELACCTASK_H_
