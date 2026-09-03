/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RECOMMENDEDADVANCEDPARAMS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RECOMMENDEDADVANCEDPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/RecommendedKeyValue.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 推荐的推理高级参数
                */
                class RecommendedAdvancedParams : public AbstractModel
                {
                public:
                    RecommendedAdvancedParams();
                    ~RecommendedAdvancedParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否启用 trust_remote_code</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableRemoteCode <p>是否启用 trust_remote_code</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableRemoteCode() const;

                    /**
                     * 设置<p>是否启用 trust_remote_code</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableRemoteCode <p>是否启用 trust_remote_code</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableRemoteCode(const bool& _enableRemoteCode);

                    /**
                     * 判断参数 EnableRemoteCode 是否已赋值
                     * @return EnableRemoteCode 是否已赋值
                     * 
                     */
                    bool EnableRemoteCodeHasBeenSet() const;

                    /**
                     * 获取<p>GPU 显存利用率（百分比，例如 90 表示 90%）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuMemoryUtilization <p>GPU 显存利用率（百分比，例如 90 表示 90%）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGpuMemoryUtilization() const;

                    /**
                     * 设置<p>GPU 显存利用率（百分比，例如 90 表示 90%）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuMemoryUtilization <p>GPU 显存利用率（百分比，例如 90 表示 90%）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGpuMemoryUtilization(const int64_t& _gpuMemoryUtilization);

                    /**
                     * 判断参数 GpuMemoryUtilization 是否已赋值
                     * @return GpuMemoryUtilization 是否已赋值
                     * 
                     */
                    bool GpuMemoryUtilizationHasBeenSet() const;

                    /**
                     * 获取<p>Tensor 并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TensorParallelSize <p>Tensor 并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTensorParallelSize() const;

                    /**
                     * 设置<p>Tensor 并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tensorParallelSize <p>Tensor 并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTensorParallelSize(const int64_t& _tensorParallelSize);

                    /**
                     * 判断参数 TensorParallelSize 是否已赋值
                     * @return TensorParallelSize 是否已赋值
                     * 
                     */
                    bool TensorParallelSizeHasBeenSet() const;

                    /**
                     * 获取<p>Pipeline 并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PipelineParallelSize <p>Pipeline 并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPipelineParallelSize() const;

                    /**
                     * 设置<p>Pipeline 并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pipelineParallelSize <p>Pipeline 并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPipelineParallelSize(const int64_t& _pipelineParallelSize);

                    /**
                     * 判断参数 PipelineParallelSize 是否已赋值
                     * @return PipelineParallelSize 是否已赋值
                     * 
                     */
                    bool PipelineParallelSizeHasBeenSet() const;

                    /**
                     * 获取<p>Data 并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataParallelSize <p>Data 并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataParallelSize() const;

                    /**
                     * 设置<p>Data 并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataParallelSize <p>Data 并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataParallelSize(const int64_t& _dataParallelSize);

                    /**
                     * 判断参数 DataParallelSize 是否已赋值
                     * @return DataParallelSize 是否已赋值
                     * 
                     */
                    bool DataParallelSizeHasBeenSet() const;

                    /**
                     * 获取<p>推理引擎参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineArgs <p>推理引擎参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecommendedKeyValue> GetEngineArgs() const;

                    /**
                     * 设置<p>推理引擎参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineArgs <p>推理引擎参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineArgs(const std::vector<RecommendedKeyValue>& _engineArgs);

                    /**
                     * 判断参数 EngineArgs 是否已赋值
                     * @return EngineArgs 是否已赋值
                     * 
                     */
                    bool EngineArgsHasBeenSet() const;

                    /**
                     * 获取<p>环境变量列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvVars <p>环境变量列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecommendedKeyValue> GetEnvVars() const;

                    /**
                     * 设置<p>环境变量列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _envVars <p>环境变量列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvVars(const std::vector<RecommendedKeyValue>& _envVars);

                    /**
                     * 判断参数 EnvVars 是否已赋值
                     * @return EnvVars 是否已赋值
                     * 
                     */
                    bool EnvVarsHasBeenSet() const;

                    /**
                     * 获取<p>Ray Actor Options 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RayOptions <p>Ray Actor Options 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecommendedKeyValue> GetRayOptions() const;

                    /**
                     * 设置<p>Ray Actor Options 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rayOptions <p>Ray Actor Options 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRayOptions(const std::vector<RecommendedKeyValue>& _rayOptions);

                    /**
                     * 判断参数 RayOptions 是否已赋值
                     * @return RayOptions 是否已赋值
                     * 
                     */
                    bool RayOptionsHasBeenSet() const;

                private:

                    /**
                     * <p>是否启用 trust_remote_code</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableRemoteCode;
                    bool m_enableRemoteCodeHasBeenSet;

                    /**
                     * <p>GPU 显存利用率（百分比，例如 90 表示 90%）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_gpuMemoryUtilization;
                    bool m_gpuMemoryUtilizationHasBeenSet;

                    /**
                     * <p>Tensor 并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tensorParallelSize;
                    bool m_tensorParallelSizeHasBeenSet;

                    /**
                     * <p>Pipeline 并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pipelineParallelSize;
                    bool m_pipelineParallelSizeHasBeenSet;

                    /**
                     * <p>Data 并行度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataParallelSize;
                    bool m_dataParallelSizeHasBeenSet;

                    /**
                     * <p>推理引擎参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecommendedKeyValue> m_engineArgs;
                    bool m_engineArgsHasBeenSet;

                    /**
                     * <p>环境变量列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecommendedKeyValue> m_envVars;
                    bool m_envVarsHasBeenSet;

                    /**
                     * <p>Ray Actor Options 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecommendedKeyValue> m_rayOptions;
                    bool m_rayOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RECOMMENDEDADVANCEDPARAMS_H_
