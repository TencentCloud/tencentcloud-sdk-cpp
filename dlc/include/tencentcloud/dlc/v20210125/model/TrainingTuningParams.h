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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TRAININGTUNINGPARAMS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TRAININGTUNINGPARAMS_H_

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
                * 调优参数（高级参数，仅 POST_TRAINING 使用；CUSTOM_CODE / LAB 禁止传入）
                */
                class TrainingTuningParams : public AbstractModel
                {
                public:
                    TrainingTuningParams();
                    ~TrainingTuningParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>微调方式：lora / full / freeze；默认由算法决定（SFT/DPO=lora，CPT/GRPO=full）</p>
                     * @return FineTuneType <p>微调方式：lora / full / freeze；默认由算法决定（SFT/DPO=lora，CPT/GRPO=full）</p>
                     * 
                     */
                    std::string GetFineTuneType() const;

                    /**
                     * 设置<p>微调方式：lora / full / freeze；默认由算法决定（SFT/DPO=lora，CPT/GRPO=full）</p>
                     * @param _fineTuneType <p>微调方式：lora / full / freeze；默认由算法决定（SFT/DPO=lora，CPT/GRPO=full）</p>
                     * 
                     */
                    void SetFineTuneType(const std::string& _fineTuneType);

                    /**
                     * 判断参数 FineTuneType 是否已赋值
                     * @return FineTuneType 是否已赋值
                     * 
                     */
                    bool FineTuneTypeHasBeenSet() const;

                    /**
                     * 获取<p>LoRA rank，仅 finetuneType=lora 时生效</p>
                     * @return LoraRank <p>LoRA rank，仅 finetuneType=lora 时生效</p>
                     * 
                     */
                    int64_t GetLoraRank() const;

                    /**
                     * 设置<p>LoRA rank，仅 finetuneType=lora 时生效</p>
                     * @param _loraRank <p>LoRA rank，仅 finetuneType=lora 时生效</p>
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
                     * 获取<p>LoRA alpha</p>
                     * @return LoraAlpha <p>LoRA alpha</p>
                     * 
                     */
                    int64_t GetLoraAlpha() const;

                    /**
                     * 设置<p>LoRA alpha</p>
                     * @param _loraAlpha <p>LoRA alpha</p>
                     * 
                     */
                    void SetLoraAlpha(const int64_t& _loraAlpha);

                    /**
                     * 判断参数 LoraAlpha 是否已赋值
                     * @return LoraAlpha 是否已赋值
                     * 
                     */
                    bool LoraAlphaHasBeenSet() const;

                    /**
                     * 获取<p>LoRA dropout</p>
                     * @return LoraDropout <p>LoRA dropout</p>
                     * 
                     */
                    double GetLoraDropout() const;

                    /**
                     * 设置<p>LoRA dropout</p>
                     * @param _loraDropout <p>LoRA dropout</p>
                     * 
                     */
                    void SetLoraDropout(const double& _loraDropout);

                    /**
                     * 判断参数 LoraDropout 是否已赋值
                     * @return LoraDropout 是否已赋值
                     * 
                     */
                    bool LoraDropoutHasBeenSet() const;

                    /**
                     * 获取<p>LoRA 目标层，默认 all</p>
                     * @return LoraTarget <p>LoRA 目标层，默认 all</p>
                     * 
                     */
                    std::string GetLoraTarget() const;

                    /**
                     * 设置<p>LoRA 目标层，默认 all</p>
                     * @param _loraTarget <p>LoRA 目标层，默认 all</p>
                     * 
                     */
                    void SetLoraTarget(const std::string& _loraTarget);

                    /**
                     * 判断参数 LoraTarget 是否已赋值
                     * @return LoraTarget 是否已赋值
                     * 
                     */
                    bool LoraTargetHasBeenSet() const;

                    /**
                     * 获取<p>训练模式：balanced / quality / speed / custom</p>
                     * @return TrainingMode <p>训练模式：balanced / quality / speed / custom</p>
                     * 
                     */
                    std::string GetTrainingMode() const;

                    /**
                     * 设置<p>训练模式：balanced / quality / speed / custom</p>
                     * @param _trainingMode <p>训练模式：balanced / quality / speed / custom</p>
                     * 
                     */
                    void SetTrainingMode(const std::string& _trainingMode);

                    /**
                     * 判断参数 TrainingMode 是否已赋值
                     * @return TrainingMode 是否已赋值
                     * 
                     */
                    bool TrainingModeHasBeenSet() const;

                    /**
                     * 获取<p>训练轮数</p>
                     * @return Epochs <p>训练轮数</p>
                     * 
                     */
                    int64_t GetEpochs() const;

                    /**
                     * 设置<p>训练轮数</p>
                     * @param _epochs <p>训练轮数</p>
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
                     * 获取<p>学习率</p>
                     * @return LearningRate <p>学习率</p>
                     * 
                     */
                    double GetLearningRate() const;

                    /**
                     * 设置<p>学习率</p>
                     * @param _learningRate <p>学习率</p>
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
                     * 获取<p>每卡 batch size</p>
                     * @return PerDeviceBatchSize <p>每卡 batch size</p>
                     * 
                     */
                    int64_t GetPerDeviceBatchSize() const;

                    /**
                     * 设置<p>每卡 batch size</p>
                     * @param _perDeviceBatchSize <p>每卡 batch size</p>
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
                     * 获取<p>梯度累积步数</p>
                     * @return GradientAccumulationSteps <p>梯度累积步数</p>
                     * 
                     */
                    int64_t GetGradientAccumulationSteps() const;

                    /**
                     * 设置<p>梯度累积步数</p>
                     * @param _gradientAccumulationSteps <p>梯度累积步数</p>
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
                     * 获取<p>上下文长度</p>
                     * @return CutoffLen <p>上下文长度</p>
                     * 
                     */
                    int64_t GetCutoffLen() const;

                    /**
                     * 设置<p>上下文长度</p>
                     * @param _cutoffLen <p>上下文长度</p>
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
                     * 获取<p>最大样本数</p>
                     * @return MaxSamples <p>最大样本数</p>
                     * 
                     */
                    int64_t GetMaxSamples() const;

                    /**
                     * 设置<p>最大样本数</p>
                     * @param _maxSamples <p>最大样本数</p>
                     * 
                     */
                    void SetMaxSamples(const int64_t& _maxSamples);

                    /**
                     * 判断参数 MaxSamples 是否已赋值
                     * @return MaxSamples 是否已赋值
                     * 
                     */
                    bool MaxSamplesHasBeenSet() const;

                    /**
                     * 获取<p>是否启用 gradient checkpointing，默认 true</p>
                     * @return GradientCheckPointing <p>是否启用 gradient checkpointing，默认 true</p>
                     * 
                     */
                    bool GetGradientCheckPointing() const;

                    /**
                     * 设置<p>是否启用 gradient checkpointing，默认 true</p>
                     * @param _gradientCheckPointing <p>是否启用 gradient checkpointing，默认 true</p>
                     * 
                     */
                    void SetGradientCheckPointing(const bool& _gradientCheckPointing);

                    /**
                     * 判断参数 GradientCheckPointing 是否已赋值
                     * @return GradientCheckPointing 是否已赋值
                     * 
                     */
                    bool GradientCheckPointingHasBeenSet() const;

                    /**
                     * 获取<p>学习率调度器类型，默认 cosine</p>
                     * @return LrScheduler <p>学习率调度器类型，默认 cosine</p>
                     * 
                     */
                    std::string GetLrScheduler() const;

                    /**
                     * 设置<p>学习率调度器类型，默认 cosine</p>
                     * @param _lrScheduler <p>学习率调度器类型，默认 cosine</p>
                     * 
                     */
                    void SetLrScheduler(const std::string& _lrScheduler);

                    /**
                     * 判断参数 LrScheduler 是否已赋值
                     * @return LrScheduler 是否已赋值
                     * 
                     */
                    bool LrSchedulerHasBeenSet() const;

                    /**
                     * 获取<p>warmup 比例，默认 0.03</p>
                     * @return WarmupRatio <p>warmup 比例，默认 0.03</p>
                     * 
                     */
                    double GetWarmupRatio() const;

                    /**
                     * 设置<p>warmup 比例，默认 0.03</p>
                     * @param _warmupRatio <p>warmup 比例，默认 0.03</p>
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
                     * 获取<p>DPO beta，仅 mode=dpo 时生效</p>
                     * @return DPOBeta <p>DPO beta，仅 mode=dpo 时生效</p>
                     * 
                     */
                    double GetDPOBeta() const;

                    /**
                     * 设置<p>DPO beta，仅 mode=dpo 时生效</p>
                     * @param _dPOBeta <p>DPO beta，仅 mode=dpo 时生效</p>
                     * 
                     */
                    void SetDPOBeta(const double& _dPOBeta);

                    /**
                     * 判断参数 DPOBeta 是否已赋值
                     * @return DPOBeta 是否已赋值
                     * 
                     */
                    bool DPOBetaHasBeenSet() const;

                    /**
                     * 获取<p>DPO loss：sigmoid / hinge / ipo / kto_pair</p>
                     * @return DPOLoss <p>DPO loss：sigmoid / hinge / ipo / kto_pair</p>
                     * 
                     */
                    std::string GetDPOLoss() const;

                    /**
                     * 设置<p>DPO loss：sigmoid / hinge / ipo / kto_pair</p>
                     * @param _dPOLoss <p>DPO loss：sigmoid / hinge / ipo / kto_pair</p>
                     * 
                     */
                    void SetDPOLoss(const std::string& _dPOLoss);

                    /**
                     * 判断参数 DPOLoss 是否已赋值
                     * @return DPOLoss 是否已赋值
                     * 
                     */
                    bool DPOLossHasBeenSet() const;

                    /**
                     * 获取<p>兼容旧请求；当前 GRPO 默认使用 verl 内置 rule reward</p>
                     * @return RewardFunctionCode <p>兼容旧请求；当前 GRPO 默认使用 verl 内置 rule reward</p>
                     * 
                     */
                    std::string GetRewardFunctionCode() const;

                    /**
                     * 设置<p>兼容旧请求；当前 GRPO 默认使用 verl 内置 rule reward</p>
                     * @param _rewardFunctionCode <p>兼容旧请求；当前 GRPO 默认使用 verl 内置 rule reward</p>
                     * 
                     */
                    void SetRewardFunctionCode(const std::string& _rewardFunctionCode);

                    /**
                     * 判断参数 RewardFunctionCode 是否已赋值
                     * @return RewardFunctionCode 是否已赋值
                     * 
                     */
                    bool RewardFunctionCodeHasBeenSet() const;

                    /**
                     * 获取<p>兼容旧请求；当前 GRPO 默认使用 verl 内置 rule reward</p>
                     * @return RewardFunctionCosPath <p>兼容旧请求；当前 GRPO 默认使用 verl 内置 rule reward</p>
                     * 
                     */
                    std::string GetRewardFunctionCosPath() const;

                    /**
                     * 设置<p>兼容旧请求；当前 GRPO 默认使用 verl 内置 rule reward</p>
                     * @param _rewardFunctionCosPath <p>兼容旧请求；当前 GRPO 默认使用 verl 内置 rule reward</p>
                     * 
                     */
                    void SetRewardFunctionCosPath(const std::string& _rewardFunctionCosPath);

                    /**
                     * 判断参数 RewardFunctionCosPath 是否已赋值
                     * @return RewardFunctionCosPath 是否已赋值
                     * 
                     */
                    bool RewardFunctionCosPathHasBeenSet() const;

                    /**
                     * 获取<p>GRPO KL 系数，默认 0.001</p>
                     * @return KLCoefficient <p>GRPO KL 系数，默认 0.001</p>
                     * 
                     */
                    double GetKLCoefficient() const;

                    /**
                     * 设置<p>GRPO KL 系数，默认 0.001</p>
                     * @param _kLCoefficient <p>GRPO KL 系数，默认 0.001</p>
                     * 
                     */
                    void SetKLCoefficient(const double& _kLCoefficient);

                    /**
                     * 判断参数 KLCoefficient 是否已赋值
                     * @return KLCoefficient 是否已赋值
                     * 
                     */
                    bool KLCoefficientHasBeenSet() const;

                    /**
                     * 获取<p>每个 prompt 的采样数（group size），默认 8</p>
                     * @return NumSamplesPerPrompt <p>每个 prompt 的采样数（group size），默认 8</p>
                     * 
                     */
                    int64_t GetNumSamplesPerPrompt() const;

                    /**
                     * 设置<p>每个 prompt 的采样数（group size），默认 8</p>
                     * @param _numSamplesPerPrompt <p>每个 prompt 的采样数（group size），默认 8</p>
                     * 
                     */
                    void SetNumSamplesPerPrompt(const int64_t& _numSamplesPerPrompt);

                    /**
                     * 判断参数 NumSamplesPerPrompt 是否已赋值
                     * @return NumSamplesPerPrompt 是否已赋值
                     * 
                     */
                    bool NumSamplesPerPromptHasBeenSet() const;

                    /**
                     * 获取<p>最大响应生成长度，默认 1024</p>
                     * @return MaxResponseLength <p>最大响应生成长度，默认 1024</p>
                     * 
                     */
                    int64_t GetMaxResponseLength() const;

                    /**
                     * 设置<p>最大响应生成长度，默认 1024</p>
                     * @param _maxResponseLength <p>最大响应生成长度，默认 1024</p>
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
                     * 获取<p>rollout 生成温度，默认 1.0</p>
                     * @return RollOutTemperature <p>rollout 生成温度，默认 1.0</p>
                     * 
                     */
                    double GetRollOutTemperature() const;

                    /**
                     * 设置<p>rollout 生成温度，默认 1.0</p>
                     * @param _rollOutTemperature <p>rollout 生成温度，默认 1.0</p>
                     * 
                     */
                    void SetRollOutTemperature(const double& _rollOutTemperature);

                    /**
                     * 判断参数 RollOutTemperature 是否已赋值
                     * @return RollOutTemperature 是否已赋值
                     * 
                     */
                    bool RollOutTemperatureHasBeenSet() const;

                    /**
                     * 获取<p>rollout backend：vllm / sglang，默认 vllm</p>
                     * @return RollOutBackend <p>rollout backend：vllm / sglang，默认 vllm</p>
                     * 
                     */
                    std::string GetRollOutBackend() const;

                    /**
                     * 设置<p>rollout backend：vllm / sglang，默认 vllm</p>
                     * @param _rollOutBackend <p>rollout backend：vllm / sglang，默认 vllm</p>
                     * 
                     */
                    void SetRollOutBackend(const std::string& _rollOutBackend);

                    /**
                     * 判断参数 RollOutBackend 是否已赋值
                     * @return RollOutBackend 是否已赋值
                     * 
                     */
                    bool RollOutBackendHasBeenSet() const;

                    /**
                     * 获取<p>PPO clip ratio，默认 0.2</p>
                     * @return ClipRatio <p>PPO clip ratio，默认 0.2</p>
                     * 
                     */
                    double GetClipRatio() const;

                    /**
                     * 设置<p>PPO clip ratio，默认 0.2</p>
                     * @param _clipRatio <p>PPO clip ratio，默认 0.2</p>
                     * 
                     */
                    void SetClipRatio(const double& _clipRatio);

                    /**
                     * 判断参数 ClipRatio 是否已赋值
                     * @return ClipRatio 是否已赋值
                     * 
                     */
                    bool ClipRatioHasBeenSet() const;

                    /**
                     * 获取<p>PPO mini batch size，默认 128</p>
                     * @return PPOMiniBatchSize <p>PPO mini batch size，默认 128</p>
                     * 
                     */
                    int64_t GetPPOMiniBatchSize() const;

                    /**
                     * 设置<p>PPO mini batch size，默认 128</p>
                     * @param _pPOMiniBatchSize <p>PPO mini batch size，默认 128</p>
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
                     * 获取<p>PPO epochs（每批数据的更新轮数），默认 1</p>
                     * @return PPOEpochs <p>PPO epochs（每批数据的更新轮数），默认 1</p>
                     * 
                     */
                    int64_t GetPPOEpochs() const;

                    /**
                     * 设置<p>PPO epochs（每批数据的更新轮数），默认 1</p>
                     * @param _pPOEpochs <p>PPO epochs（每批数据的更新轮数），默认 1</p>
                     * 
                     */
                    void SetPPOEpochs(const int64_t& _pPOEpochs);

                    /**
                     * 判断参数 PPOEpochs 是否已赋值
                     * @return PPOEpochs 是否已赋值
                     * 
                     */
                    bool PPOEpochsHasBeenSet() const;

                    /**
                     * 获取<p>训练总 batch size（每步 prompt 数量），默认 128</p>
                     * @return TrainBatchSize <p>训练总 batch size（每步 prompt 数量），默认 128</p>
                     * 
                     */
                    int64_t GetTrainBatchSize() const;

                    /**
                     * 设置<p>训练总 batch size（每步 prompt 数量），默认 128</p>
                     * @param _trainBatchSize <p>训练总 batch size（每步 prompt 数量），默认 128</p>
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
                     * 获取<p>rollout tensor model parallel size，默认 1</p>
                     * @return TensorModelParallelSize <p>rollout tensor model parallel size，默认 1</p>
                     * 
                     */
                    int64_t GetTensorModelParallelSize() const;

                    /**
                     * 设置<p>rollout tensor model parallel size，默认 1</p>
                     * @param _tensorModelParallelSize <p>rollout tensor model parallel size，默认 1</p>
                     * 
                     */
                    void SetTensorModelParallelSize(const int64_t& _tensorModelParallelSize);

                    /**
                     * 判断参数 TensorModelParallelSize 是否已赋值
                     * @return TensorModelParallelSize 是否已赋值
                     * 
                     */
                    bool TensorModelParallelSizeHasBeenSet() const;

                    /**
                     * 获取<p>vLLM GPU memory utilization，默认 0.5</p>
                     * @return GpuMemoryUtilization <p>vLLM GPU memory utilization，默认 0.5</p>
                     * 
                     */
                    double GetGpuMemoryUtilization() const;

                    /**
                     * 设置<p>vLLM GPU memory utilization，默认 0.5</p>
                     * @param _gpuMemoryUtilization <p>vLLM GPU memory utilization，默认 0.5</p>
                     * 
                     */
                    void SetGpuMemoryUtilization(const double& _gpuMemoryUtilization);

                    /**
                     * 判断参数 GpuMemoryUtilization 是否已赋值
                     * @return GpuMemoryUtilization 是否已赋值
                     * 
                     */
                    bool GpuMemoryUtilizationHasBeenSet() const;

                private:

                    /**
                     * <p>微调方式：lora / full / freeze；默认由算法决定（SFT/DPO=lora，CPT/GRPO=full）</p>
                     */
                    std::string m_fineTuneType;
                    bool m_fineTuneTypeHasBeenSet;

                    /**
                     * <p>LoRA rank，仅 finetuneType=lora 时生效</p>
                     */
                    int64_t m_loraRank;
                    bool m_loraRankHasBeenSet;

                    /**
                     * <p>LoRA alpha</p>
                     */
                    int64_t m_loraAlpha;
                    bool m_loraAlphaHasBeenSet;

                    /**
                     * <p>LoRA dropout</p>
                     */
                    double m_loraDropout;
                    bool m_loraDropoutHasBeenSet;

                    /**
                     * <p>LoRA 目标层，默认 all</p>
                     */
                    std::string m_loraTarget;
                    bool m_loraTargetHasBeenSet;

                    /**
                     * <p>训练模式：balanced / quality / speed / custom</p>
                     */
                    std::string m_trainingMode;
                    bool m_trainingModeHasBeenSet;

                    /**
                     * <p>训练轮数</p>
                     */
                    int64_t m_epochs;
                    bool m_epochsHasBeenSet;

                    /**
                     * <p>学习率</p>
                     */
                    double m_learningRate;
                    bool m_learningRateHasBeenSet;

                    /**
                     * <p>每卡 batch size</p>
                     */
                    int64_t m_perDeviceBatchSize;
                    bool m_perDeviceBatchSizeHasBeenSet;

                    /**
                     * <p>梯度累积步数</p>
                     */
                    int64_t m_gradientAccumulationSteps;
                    bool m_gradientAccumulationStepsHasBeenSet;

                    /**
                     * <p>上下文长度</p>
                     */
                    int64_t m_cutoffLen;
                    bool m_cutoffLenHasBeenSet;

                    /**
                     * <p>最大样本数</p>
                     */
                    int64_t m_maxSamples;
                    bool m_maxSamplesHasBeenSet;

                    /**
                     * <p>是否启用 gradient checkpointing，默认 true</p>
                     */
                    bool m_gradientCheckPointing;
                    bool m_gradientCheckPointingHasBeenSet;

                    /**
                     * <p>学习率调度器类型，默认 cosine</p>
                     */
                    std::string m_lrScheduler;
                    bool m_lrSchedulerHasBeenSet;

                    /**
                     * <p>warmup 比例，默认 0.03</p>
                     */
                    double m_warmupRatio;
                    bool m_warmupRatioHasBeenSet;

                    /**
                     * <p>DPO beta，仅 mode=dpo 时生效</p>
                     */
                    double m_dPOBeta;
                    bool m_dPOBetaHasBeenSet;

                    /**
                     * <p>DPO loss：sigmoid / hinge / ipo / kto_pair</p>
                     */
                    std::string m_dPOLoss;
                    bool m_dPOLossHasBeenSet;

                    /**
                     * <p>兼容旧请求；当前 GRPO 默认使用 verl 内置 rule reward</p>
                     */
                    std::string m_rewardFunctionCode;
                    bool m_rewardFunctionCodeHasBeenSet;

                    /**
                     * <p>兼容旧请求；当前 GRPO 默认使用 verl 内置 rule reward</p>
                     */
                    std::string m_rewardFunctionCosPath;
                    bool m_rewardFunctionCosPathHasBeenSet;

                    /**
                     * <p>GRPO KL 系数，默认 0.001</p>
                     */
                    double m_kLCoefficient;
                    bool m_kLCoefficientHasBeenSet;

                    /**
                     * <p>每个 prompt 的采样数（group size），默认 8</p>
                     */
                    int64_t m_numSamplesPerPrompt;
                    bool m_numSamplesPerPromptHasBeenSet;

                    /**
                     * <p>最大响应生成长度，默认 1024</p>
                     */
                    int64_t m_maxResponseLength;
                    bool m_maxResponseLengthHasBeenSet;

                    /**
                     * <p>rollout 生成温度，默认 1.0</p>
                     */
                    double m_rollOutTemperature;
                    bool m_rollOutTemperatureHasBeenSet;

                    /**
                     * <p>rollout backend：vllm / sglang，默认 vllm</p>
                     */
                    std::string m_rollOutBackend;
                    bool m_rollOutBackendHasBeenSet;

                    /**
                     * <p>PPO clip ratio，默认 0.2</p>
                     */
                    double m_clipRatio;
                    bool m_clipRatioHasBeenSet;

                    /**
                     * <p>PPO mini batch size，默认 128</p>
                     */
                    int64_t m_pPOMiniBatchSize;
                    bool m_pPOMiniBatchSizeHasBeenSet;

                    /**
                     * <p>PPO epochs（每批数据的更新轮数），默认 1</p>
                     */
                    int64_t m_pPOEpochs;
                    bool m_pPOEpochsHasBeenSet;

                    /**
                     * <p>训练总 batch size（每步 prompt 数量），默认 128</p>
                     */
                    int64_t m_trainBatchSize;
                    bool m_trainBatchSizeHasBeenSet;

                    /**
                     * <p>rollout tensor model parallel size，默认 1</p>
                     */
                    int64_t m_tensorModelParallelSize;
                    bool m_tensorModelParallelSizeHasBeenSet;

                    /**
                     * <p>vLLM GPU memory utilization，默认 0.5</p>
                     */
                    double m_gpuMemoryUtilization;
                    bool m_gpuMemoryUtilizationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TRAININGTUNINGPARAMS_H_
