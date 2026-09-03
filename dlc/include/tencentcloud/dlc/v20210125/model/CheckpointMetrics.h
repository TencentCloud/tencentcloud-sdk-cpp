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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKPOINTMETRICS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKPOINTMETRICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/MetricItem.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Checkpoint 训练指标（仅 checkpoint 目录且 snapshot 存在时有值）
                */
                class CheckpointMetrics : public AbstractModel
                {
                public:
                    CheckpointMetrics();
                    ~CheckpointMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>当前 checkpoint 对应的 epoch</p>
                     * @return Epoch <p>当前 checkpoint 对应的 epoch</p>
                     * 
                     */
                    double GetEpoch() const;

                    /**
                     * 设置<p>当前 checkpoint 对应的 epoch</p>
                     * @param _epoch <p>当前 checkpoint 对应的 epoch</p>
                     * 
                     */
                    void SetEpoch(const double& _epoch);

                    /**
                     * 判断参数 Epoch 是否已赋值
                     * @return Epoch 是否已赋值
                     * 
                     */
                    bool EpochHasBeenSet() const;

                    /**
                     * 获取<p>全局训练步数</p>
                     * @return Step <p>全局训练步数</p>
                     * 
                     */
                    int64_t GetStep() const;

                    /**
                     * 设置<p>全局训练步数</p>
                     * @param _step <p>全局训练步数</p>
                     * 
                     */
                    void SetStep(const int64_t& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                    /**
                     * 获取<p>训练 loss（归一化后）</p>
                     * @return Loss <p>训练 loss（归一化后）</p>
                     * 
                     */
                    double GetLoss() const;

                    /**
                     * 设置<p>训练 loss（归一化后）</p>
                     * @param _loss <p>训练 loss（归一化后）</p>
                     * 
                     */
                    void SetLoss(const double& _loss);

                    /**
                     * 判断参数 Loss 是否已赋值
                     * @return Loss 是否已赋值
                     * 
                     */
                    bool LossHasBeenSet() const;

                    /**
                     * 获取<p>评估 loss（归一化后）</p>
                     * @return EvalLoss <p>评估 loss（归一化后）</p>
                     * 
                     */
                    double GetEvalLoss() const;

                    /**
                     * 设置<p>评估 loss（归一化后）</p>
                     * @param _evalLoss <p>评估 loss（归一化后）</p>
                     * 
                     */
                    void SetEvalLoss(const double& _evalLoss);

                    /**
                     * 判断参数 EvalLoss 是否已赋值
                     * @return EvalLoss 是否已赋值
                     * 
                     */
                    bool EvalLossHasBeenSet() const;

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
                     * 获取<p>snapshot 中的原始 metrics 键值对列表（前端可展开查看）</p>
                     * @return RawMetrics <p>snapshot 中的原始 metrics 键值对列表（前端可展开查看）</p>
                     * 
                     */
                    std::vector<MetricItem> GetRawMetrics() const;

                    /**
                     * 设置<p>snapshot 中的原始 metrics 键值对列表（前端可展开查看）</p>
                     * @param _rawMetrics <p>snapshot 中的原始 metrics 键值对列表（前端可展开查看）</p>
                     * 
                     */
                    void SetRawMetrics(const std::vector<MetricItem>& _rawMetrics);

                    /**
                     * 判断参数 RawMetrics 是否已赋值
                     * @return RawMetrics 是否已赋值
                     * 
                     */
                    bool RawMetricsHasBeenSet() const;

                private:

                    /**
                     * <p>当前 checkpoint 对应的 epoch</p>
                     */
                    double m_epoch;
                    bool m_epochHasBeenSet;

                    /**
                     * <p>全局训练步数</p>
                     */
                    int64_t m_step;
                    bool m_stepHasBeenSet;

                    /**
                     * <p>训练 loss（归一化后）</p>
                     */
                    double m_loss;
                    bool m_lossHasBeenSet;

                    /**
                     * <p>评估 loss（归一化后）</p>
                     */
                    double m_evalLoss;
                    bool m_evalLossHasBeenSet;

                    /**
                     * <p>学习率</p>
                     */
                    double m_learningRate;
                    bool m_learningRateHasBeenSet;

                    /**
                     * <p>snapshot 中的原始 metrics 键值对列表（前端可展开查看）</p>
                     */
                    std::vector<MetricItem> m_rawMetrics;
                    bool m_rawMetricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKPOINTMETRICS_H_
