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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_HYPERPARAMETER_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_HYPERPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 模型专业参数
                */
                class HyperParameter : public AbstractModel
                {
                public:
                    HyperParameter();
                    ~HyperParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最大nnz数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxNNZ 最大nnz数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaxNNZ() const;

                    /**
                     * 设置最大nnz数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxNNZ 最大nnz数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxNNZ(const std::string& _maxNNZ);

                    /**
                     * 判断参数 MaxNNZ 是否已赋值
                     * @return MaxNNZ 是否已赋值
                     * 
                     */
                    bool MaxNNZHasBeenSet() const;

                    /**
                     * 获取slot数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlotNum slot数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSlotNum() const;

                    /**
                     * 设置slot数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _slotNum slot数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSlotNum(const std::string& _slotNum);

                    /**
                     * 判断参数 SlotNum 是否已赋值
                     * @return SlotNum 是否已赋值
                     * 
                     */
                    bool SlotNumHasBeenSet() const;

                    /**
                     * 获取gpu cache 使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuCachePercentage gpu cache 使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCpuCachePercentage() const;

                    /**
                     * 设置gpu cache 使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuCachePercentage gpu cache 使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuCachePercentage(const std::string& _cpuCachePercentage);

                    /**
                     * 判断参数 CpuCachePercentage 是否已赋值
                     * @return CpuCachePercentage 是否已赋值
                     * 
                     */
                    bool CpuCachePercentageHasBeenSet() const;

                    /**
                     * 获取cpu cache 使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuCachePercentage cpu cache 使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGpuCachePercentage() const;

                    /**
                     * 设置cpu cache 使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuCachePercentage cpu cache 使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGpuCachePercentage(const std::string& _gpuCachePercentage);

                    /**
                     * 判断参数 GpuCachePercentage 是否已赋值
                     * @return GpuCachePercentage 是否已赋值
                     * 
                     */
                    bool GpuCachePercentageHasBeenSet() const;

                    /**
                     * 获取是否开启分布式模式(true/false)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableDistributed 是否开启分布式模式(true/false)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnableDistributed() const;

                    /**
                     * 设置是否开启分布式模式(true/false)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableDistributed 是否开启分布式模式(true/false)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableDistributed(const std::string& _enableDistributed);

                    /**
                     * 判断参数 EnableDistributed 是否已赋值
                     * @return EnableDistributed 是否已赋值
                     * 
                     */
                    bool EnableDistributedHasBeenSet() const;

                    /**
                     * 获取TORCH_SCRIPT、MMDETECTION、DETECTRON2、HUGGINGFACE格式在进行优化时切分子图的最小算子数目，一般无需进行改动，默认为3
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinBlockSizePt TORCH_SCRIPT、MMDETECTION、DETECTRON2、HUGGINGFACE格式在进行优化时切分子图的最小算子数目，一般无需进行改动，默认为3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMinBlockSizePt() const;

                    /**
                     * 设置TORCH_SCRIPT、MMDETECTION、DETECTRON2、HUGGINGFACE格式在进行优化时切分子图的最小算子数目，一般无需进行改动，默认为3
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minBlockSizePt TORCH_SCRIPT、MMDETECTION、DETECTRON2、HUGGINGFACE格式在进行优化时切分子图的最小算子数目，一般无需进行改动，默认为3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinBlockSizePt(const std::string& _minBlockSizePt);

                    /**
                     * 判断参数 MinBlockSizePt 是否已赋值
                     * @return MinBlockSizePt 是否已赋值
                     * 
                     */
                    bool MinBlockSizePtHasBeenSet() const;

                    /**
                     * 获取FROZEN_GRAPH、SAVED_MODEL格式在进行优化时切分子图的最小算子数目，一般无需进行改动，默认为10
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinBlockSizeTf FROZEN_GRAPH、SAVED_MODEL格式在进行优化时切分子图的最小算子数目，一般无需进行改动，默认为10
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMinBlockSizeTf() const;

                    /**
                     * 设置FROZEN_GRAPH、SAVED_MODEL格式在进行优化时切分子图的最小算子数目，一般无需进行改动，默认为10
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minBlockSizeTf FROZEN_GRAPH、SAVED_MODEL格式在进行优化时切分子图的最小算子数目，一般无需进行改动，默认为10
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinBlockSizeTf(const std::string& _minBlockSizeTf);

                    /**
                     * 判断参数 MinBlockSizeTf 是否已赋值
                     * @return MinBlockSizeTf 是否已赋值
                     * 
                     */
                    bool MinBlockSizeTfHasBeenSet() const;

                    /**
                     * 获取Stable Diffusion 模型优化参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PipelineArgs Stable Diffusion 模型优化参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPipelineArgs() const;

                    /**
                     * 设置Stable Diffusion 模型优化参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pipelineArgs Stable Diffusion 模型优化参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPipelineArgs(const std::string& _pipelineArgs);

                    /**
                     * 判断参数 PipelineArgs 是否已赋值
                     * @return PipelineArgs 是否已赋值
                     * 
                     */
                    bool PipelineArgsHasBeenSet() const;

                    /**
                     * 获取Stable Diffusion 模型优化参数，控制Lora模型的影响效果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoraScale Stable Diffusion 模型优化参数，控制Lora模型的影响效果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLoraScale() const;

                    /**
                     * 设置Stable Diffusion 模型优化参数，控制Lora模型的影响效果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loraScale Stable Diffusion 模型优化参数，控制Lora模型的影响效果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoraScale(const std::string& _loraScale);

                    /**
                     * 判断参数 LoraScale 是否已赋值
                     * @return LoraScale 是否已赋值
                     * 
                     */
                    bool LoraScaleHasBeenSet() const;

                private:

                    /**
                     * 最大nnz数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maxNNZ;
                    bool m_maxNNZHasBeenSet;

                    /**
                     * slot数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_slotNum;
                    bool m_slotNumHasBeenSet;

                    /**
                     * gpu cache 使用率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cpuCachePercentage;
                    bool m_cpuCachePercentageHasBeenSet;

                    /**
                     * cpu cache 使用率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gpuCachePercentage;
                    bool m_gpuCachePercentageHasBeenSet;

                    /**
                     * 是否开启分布式模式(true/false)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_enableDistributed;
                    bool m_enableDistributedHasBeenSet;

                    /**
                     * TORCH_SCRIPT、MMDETECTION、DETECTRON2、HUGGINGFACE格式在进行优化时切分子图的最小算子数目，一般无需进行改动，默认为3
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_minBlockSizePt;
                    bool m_minBlockSizePtHasBeenSet;

                    /**
                     * FROZEN_GRAPH、SAVED_MODEL格式在进行优化时切分子图的最小算子数目，一般无需进行改动，默认为10
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_minBlockSizeTf;
                    bool m_minBlockSizeTfHasBeenSet;

                    /**
                     * Stable Diffusion 模型优化参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pipelineArgs;
                    bool m_pipelineArgsHasBeenSet;

                    /**
                     * Stable Diffusion 模型优化参数，控制Lora模型的影响效果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loraScale;
                    bool m_loraScaleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_HYPERPARAMETER_H_
