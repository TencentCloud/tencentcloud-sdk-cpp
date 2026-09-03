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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TRAININGPARAMS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TRAININGPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 零代码后训练参数
                */
                class TrainingParams : public AbstractModel
                {
                public:
                    TrainingParams();
                    ~TrainingParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>每卡 batch size，SFT/DPO 用。GRPO 返回 null</p>
                     * @return PerDeviceBatchSize <p>每卡 batch size，SFT/DPO 用。GRPO 返回 null</p>
                     * 
                     */
                    int64_t GetPerDeviceBatchSize() const;

                    /**
                     * 设置<p>每卡 batch size，SFT/DPO 用。GRPO 返回 null</p>
                     * @param _perDeviceBatchSize <p>每卡 batch size，SFT/DPO 用。GRPO 返回 null</p>
                     * 
                     */
                    void SetPerDeviceBatchSize(const int64_t& _perDeviceBatchSize);

                    /**
                     * 判断参数 PerDeviceBatchSize 是否已赋值
                     * @return PerDeviceBatchSize 是否已赋值
                     * 
                     */
                    bool PerDeviceBatchSizeHasBeenSet() const;

                    /**
                     * 获取<p>梯度累积步数，用于放大有效 batch；GRPO 返回 null。</p>
                     * @return GradientAccumulationSteps <p>梯度累积步数，用于放大有效 batch；GRPO 返回 null。</p>
                     * 
                     */
                    int64_t GetGradientAccumulationSteps() const;

                    /**
                     * 设置<p>梯度累积步数，用于放大有效 batch；GRPO 返回 null。</p>
                     * @param _gradientAccumulationSteps <p>梯度累积步数，用于放大有效 batch；GRPO 返回 null。</p>
                     * 
                     */
                    void SetGradientAccumulationSteps(const int64_t& _gradientAccumulationSteps);

                    /**
                     * 判断参数 GradientAccumulationSteps 是否已赋值
                     * @return GradientAccumulationSteps 是否已赋值
                     * 
                     */
                    bool GradientAccumulationStepsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启梯度检查点（省显存换计算），GRPO 返回 null。</p>
                     * @return GradientCheckpointing <p>是否开启梯度检查点（省显存换计算），GRPO 返回 null。</p>
                     * 
                     */
                    bool GetGradientCheckpointing() const;

                    /**
                     * 设置<p>是否开启梯度检查点（省显存换计算），GRPO 返回 null。</p>
                     * @param _gradientCheckpointing <p>是否开启梯度检查点（省显存换计算），GRPO 返回 null。</p>
                     * 
                     */
                    void SetGradientCheckpointing(const bool& _gradientCheckpointing);

                    /**
                     * 判断参数 GradientCheckpointing 是否已赋值
                     * @return GradientCheckpointing 是否已赋值
                     * 
                     */
                    bool GradientCheckpointingHasBeenSet() const;

                    /**
                     * 获取<p>最大序列/上下文长度，所有模式都返回。</p>
                     * @return CutoffLen <p>最大序列/上下文长度，所有模式都返回。</p>
                     * 
                     */
                    int64_t GetCutoffLen() const;

                    /**
                     * 设置<p>最大序列/上下文长度，所有模式都返回。</p>
                     * @param _cutoffLen <p>最大序列/上下文长度，所有模式都返回。</p>
                     * 
                     */
                    void SetCutoffLen(const int64_t& _cutoffLen);

                    /**
                     * 判断参数 CutoffLen 是否已赋值
                     * @return CutoffLen 是否已赋值
                     * 
                     */
                    bool CutoffLenHasBeenSet() const;

                    /**
                     * 获取<p>推荐学习率；SFT/DPO 按算法+微调方式给值，GRPO 返回 null（由入口脚本默认值决定）。</p>
                     * @return LearningRate <p>推荐学习率；SFT/DPO 按算法+微调方式给值，GRPO 返回 null（由入口脚本默认值决定）。</p>
                     * 
                     */
                    double GetLearningRate() const;

                    /**
                     * 设置<p>推荐学习率；SFT/DPO 按算法+微调方式给值，GRPO 返回 null（由入口脚本默认值决定）。</p>
                     * @param _learningRate <p>推荐学习率；SFT/DPO 按算法+微调方式给值，GRPO 返回 null（由入口脚本默认值决定）。</p>
                     * 
                     */
                    void SetLearningRate(const double& _learningRate);

                    /**
                     * 判断参数 LearningRate 是否已赋值
                     * @return LearningRate 是否已赋值
                     * 
                     */
                    bool LearningRateHasBeenSet() const;

                    /**
                     * 获取<p>推荐训练轮次，所有模式都返回。</p>
                     * @return Epochs <p>推荐训练轮次，所有模式都返回。</p>
                     * 
                     */
                    int64_t GetEpochs() const;

                    /**
                     * 设置<p>推荐训练轮次，所有模式都返回。</p>
                     * @param _epochs <p>推荐训练轮次，所有模式都返回。</p>
                     * 
                     */
                    void SetEpochs(const int64_t& _epochs);

                    /**
                     * 判断参数 Epochs 是否已赋值
                     * @return Epochs 是否已赋值
                     * 
                     */
                    bool EpochsHasBeenSet() const;

                    /**
                     * 获取<p>推荐 LoRA rank（仅 finetuneType=lora 有值，全参微调/GRPO 返回 null）。</p>
                     * @return LoraRank <p>推荐 LoRA rank（仅 finetuneType=lora 有值，全参微调/GRPO 返回 null）。</p>
                     * 
                     */
                    int64_t GetLoraRank() const;

                    /**
                     * 设置<p>推荐 LoRA rank（仅 finetuneType=lora 有值，全参微调/GRPO 返回 null）。</p>
                     * @param _loraRank <p>推荐 LoRA rank（仅 finetuneType=lora 有值，全参微调/GRPO 返回 null）。</p>
                     * 
                     */
                    void SetLoraRank(const int64_t& _loraRank);

                    /**
                     * 判断参数 LoraRank 是否已赋值
                     * @return LoraRank 是否已赋值
                     * 
                     */
                    bool LoraRankHasBeenSet() const;

                    /**
                     * 获取<p>warmup 步数占总步数比例；GRPO 返回 null。</p>
                     * @return WarmupRatio <p>warmup 步数占总步数比例；GRPO 返回 null。</p>
                     * 
                     */
                    double GetWarmupRatio() const;

                    /**
                     * 设置<p>warmup 步数占总步数比例；GRPO 返回 null。</p>
                     * @param _warmupRatio <p>warmup 步数占总步数比例；GRPO 返回 null。</p>
                     * 
                     */
                    void SetWarmupRatio(const double& _warmupRatio);

                    /**
                     * 判断参数 WarmupRatio 是否已赋值
                     * @return WarmupRatio 是否已赋值
                     * 
                     */
                    bool WarmupRatioHasBeenSet() const;

                    /**
                     * 获取<p>GRPO 每步训练的 prompt 总数；SFT/DPO 返回 null。</p>
                     * @return TrainBatchSize <p>GRPO 每步训练的 prompt 总数；SFT/DPO 返回 null。</p>
                     * 
                     */
                    int64_t GetTrainBatchSize() const;

                    /**
                     * 设置<p>GRPO 每步训练的 prompt 总数；SFT/DPO 返回 null。</p>
                     * @param _trainBatchSize <p>GRPO 每步训练的 prompt 总数；SFT/DPO 返回 null。</p>
                     * 
                     */
                    void SetTrainBatchSize(const int64_t& _trainBatchSize);

                    /**
                     * 判断参数 TrainBatchSize 是否已赋值
                     * @return TrainBatchSize 是否已赋值
                     * 
                     */
                    bool TrainBatchSizeHasBeenSet() const;

                    /**
                     * 获取<p>GRPO PPO 阶段 mini-batch 大小；SFT/DPO 返回 null。</p>
                     * @return PPOMiniBatchSize <p>GRPO PPO 阶段 mini-batch 大小；SFT/DPO 返回 null。</p>
                     * 
                     */
                    int64_t GetPPOMiniBatchSize() const;

                    /**
                     * 设置<p>GRPO PPO 阶段 mini-batch 大小；SFT/DPO 返回 null。</p>
                     * @param _pPOMiniBatchSize <p>GRPO PPO 阶段 mini-batch 大小；SFT/DPO 返回 null。</p>
                     * 
                     */
                    void SetPPOMiniBatchSize(const int64_t& _pPOMiniBatchSize);

                    /**
                     * 判断参数 PPOMiniBatchSize 是否已赋值
                     * @return PPOMiniBatchSize 是否已赋值
                     * 
                     */
                    bool PPOMiniBatchSizeHasBeenSet() const;

                    /**
                     * 获取<p>GRPO rollout（vLLM/sglang）占用 GPU 显存比例（0~1）；SFT/DPO 返回 null。</p>
                     * @return GpuMemoryUtilization <p>GRPO rollout（vLLM/sglang）占用 GPU 显存比例（0~1）；SFT/DPO 返回 null。</p>
                     * 
                     */
                    double GetGpuMemoryUtilization() const;

                    /**
                     * 设置<p>GRPO rollout（vLLM/sglang）占用 GPU 显存比例（0~1）；SFT/DPO 返回 null。</p>
                     * @param _gpuMemoryUtilization <p>GRPO rollout（vLLM/sglang）占用 GPU 显存比例（0~1）；SFT/DPO 返回 null。</p>
                     * 
                     */
                    void SetGpuMemoryUtilization(const double& _gpuMemoryUtilization);

                    /**
                     * 判断参数 GpuMemoryUtilization 是否已赋值
                     * @return GpuMemoryUtilization 是否已赋值
                     * 
                     */
                    bool GpuMemoryUtilizationHasBeenSet() const;

                    /**
                     * 获取<p>GRPO rollout 单次最大生成长度；SFT/DPO 返回 null。</p>
                     * @return MaxResponseLength <p>GRPO rollout 单次最大生成长度；SFT/DPO 返回 null。</p>
                     * 
                     */
                    int64_t GetMaxResponseLength() const;

                    /**
                     * 设置<p>GRPO rollout 单次最大生成长度；SFT/DPO 返回 null。</p>
                     * @param _maxResponseLength <p>GRPO rollout 单次最大生成长度；SFT/DPO 返回 null。</p>
                     * 
                     */
                    void SetMaxResponseLength(const int64_t& _maxResponseLength);

                    /**
                     * 判断参数 MaxResponseLength 是否已赋值
                     * @return MaxResponseLength 是否已赋值
                     * 
                     */
                    bool MaxResponseLengthHasBeenSet() const;

                    /**
                     * 获取<p>GRPO 每个 prompt 的采样数（group size）；SFT/DPO 返回 null。</p>
                     * @return NumSamplesPerPrompt <p>GRPO 每个 prompt 的采样数（group size）；SFT/DPO 返回 null。</p>
                     * 
                     */
                    int64_t GetNumSamplesPerPrompt() const;

                    /**
                     * 设置<p>GRPO 每个 prompt 的采样数（group size）；SFT/DPO 返回 null。</p>
                     * @param _numSamplesPerPrompt <p>GRPO 每个 prompt 的采样数（group size）；SFT/DPO 返回 null。</p>
                     * 
                     */
                    void SetNumSamplesPerPrompt(const int64_t& _numSamplesPerPrompt);

                    /**
                     * 判断参数 NumSamplesPerPrompt 是否已赋值
                     * @return NumSamplesPerPrompt 是否已赋值
                     * 
                     */
                    bool NumSamplesPerPromptHasBeenSet() const;

                private:

                    /**
                     * <p>每卡 batch size，SFT/DPO 用。GRPO 返回 null</p>
                     */
                    int64_t m_perDeviceBatchSize;
                    bool m_perDeviceBatchSizeHasBeenSet;

                    /**
                     * <p>梯度累积步数，用于放大有效 batch；GRPO 返回 null。</p>
                     */
                    int64_t m_gradientAccumulationSteps;
                    bool m_gradientAccumulationStepsHasBeenSet;

                    /**
                     * <p>是否开启梯度检查点（省显存换计算），GRPO 返回 null。</p>
                     */
                    bool m_gradientCheckpointing;
                    bool m_gradientCheckpointingHasBeenSet;

                    /**
                     * <p>最大序列/上下文长度，所有模式都返回。</p>
                     */
                    int64_t m_cutoffLen;
                    bool m_cutoffLenHasBeenSet;

                    /**
                     * <p>推荐学习率；SFT/DPO 按算法+微调方式给值，GRPO 返回 null（由入口脚本默认值决定）。</p>
                     */
                    double m_learningRate;
                    bool m_learningRateHasBeenSet;

                    /**
                     * <p>推荐训练轮次，所有模式都返回。</p>
                     */
                    int64_t m_epochs;
                    bool m_epochsHasBeenSet;

                    /**
                     * <p>推荐 LoRA rank（仅 finetuneType=lora 有值，全参微调/GRPO 返回 null）。</p>
                     */
                    int64_t m_loraRank;
                    bool m_loraRankHasBeenSet;

                    /**
                     * <p>warmup 步数占总步数比例；GRPO 返回 null。</p>
                     */
                    double m_warmupRatio;
                    bool m_warmupRatioHasBeenSet;

                    /**
                     * <p>GRPO 每步训练的 prompt 总数；SFT/DPO 返回 null。</p>
                     */
                    int64_t m_trainBatchSize;
                    bool m_trainBatchSizeHasBeenSet;

                    /**
                     * <p>GRPO PPO 阶段 mini-batch 大小；SFT/DPO 返回 null。</p>
                     */
                    int64_t m_pPOMiniBatchSize;
                    bool m_pPOMiniBatchSizeHasBeenSet;

                    /**
                     * <p>GRPO rollout（vLLM/sglang）占用 GPU 显存比例（0~1）；SFT/DPO 返回 null。</p>
                     */
                    double m_gpuMemoryUtilization;
                    bool m_gpuMemoryUtilizationHasBeenSet;

                    /**
                     * <p>GRPO rollout 单次最大生成长度；SFT/DPO 返回 null。</p>
                     */
                    int64_t m_maxResponseLength;
                    bool m_maxResponseLengthHasBeenSet;

                    /**
                     * <p>GRPO 每个 prompt 的采样数（group size）；SFT/DPO 返回 null。</p>
                     */
                    int64_t m_numSamplesPerPrompt;
                    bool m_numSamplesPerPromptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TRAININGPARAMS_H_
