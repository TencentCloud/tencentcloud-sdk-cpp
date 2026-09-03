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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEPOSTTRAININGPRESETREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEPOSTTRAININGPRESETREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribePostTrainingPreset请求参数结构体
                */
                class DescribePostTrainingPresetRequest : public AbstractModel
                {
                public:
                    DescribePostTrainingPresetRequest();
                    ~DescribePostTrainingPresetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>使用的大模型微调算法</p><p>枚举值：</p><ul><li>sft： Supervised Fine-Tuning，监督微调</li><li>dpo： Direct Preference Optimization，模型偏好训练微调</li><li>grpo： Group Relative Policy Optimization，组相对策略优化</li></ul>
                     * @return Mode <p>使用的大模型微调算法</p><p>枚举值：</p><ul><li>sft： Supervised Fine-Tuning，监督微调</li><li>dpo： Direct Preference Optimization，模型偏好训练微调</li><li>grpo： Group Relative Policy Optimization，组相对策略优化</li></ul>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>使用的大模型微调算法</p><p>枚举值：</p><ul><li>sft： Supervised Fine-Tuning，监督微调</li><li>dpo： Direct Preference Optimization，模型偏好训练微调</li><li>grpo： Group Relative Policy Optimization，组相对策略优化</li></ul>
                     * @param _mode <p>使用的大模型微调算法</p><p>枚举值：</p><ul><li>sft： Supervised Fine-Tuning，监督微调</li><li>dpo： Direct Preference Optimization，模型偏好训练微调</li><li>grpo： Group Relative Policy Optimization，组相对策略优化</li></ul>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>训练模式，会根据不同训练模式推荐不同的训练参数</p><p>枚举值：</p><ul><li>balanced： 均衡模式，标准配置，兼顾训练速度和模型效果</li><li>quality： 质量优先，更低学习率 / 更多轮次 / 更大 LoRA rank，追求最佳效果</li><li>speed： 速度优先，大 batch / 关闭 grad_ckpt / 短序列，最快迭代验证</li><li>custom： 自定义模式，手动调整各项参数</li></ul><p>默认值：balanced</p>
                     * @return TrainingMode <p>训练模式，会根据不同训练模式推荐不同的训练参数</p><p>枚举值：</p><ul><li>balanced： 均衡模式，标准配置，兼顾训练速度和模型效果</li><li>quality： 质量优先，更低学习率 / 更多轮次 / 更大 LoRA rank，追求最佳效果</li><li>speed： 速度优先，大 batch / 关闭 grad_ckpt / 短序列，最快迭代验证</li><li>custom： 自定义模式，手动调整各项参数</li></ul><p>默认值：balanced</p>
                     * 
                     */
                    std::string GetTrainingMode() const;

                    /**
                     * 设置<p>训练模式，会根据不同训练模式推荐不同的训练参数</p><p>枚举值：</p><ul><li>balanced： 均衡模式，标准配置，兼顾训练速度和模型效果</li><li>quality： 质量优先，更低学习率 / 更多轮次 / 更大 LoRA rank，追求最佳效果</li><li>speed： 速度优先，大 batch / 关闭 grad_ckpt / 短序列，最快迭代验证</li><li>custom： 自定义模式，手动调整各项参数</li></ul><p>默认值：balanced</p>
                     * @param _trainingMode <p>训练模式，会根据不同训练模式推荐不同的训练参数</p><p>枚举值：</p><ul><li>balanced： 均衡模式，标准配置，兼顾训练速度和模型效果</li><li>quality： 质量优先，更低学习率 / 更多轮次 / 更大 LoRA rank，追求最佳效果</li><li>speed： 速度优先，大 batch / 关闭 grad_ckpt / 短序列，最快迭代验证</li><li>custom： 自定义模式，手动调整各项参数</li></ul><p>默认值：balanced</p>
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
                     * 获取<p>参数微调方式</p><p>枚举值：</p><ul><li>lora： 轻量级微调大模型的方法</li><li>full： 全参数大模型微调</li></ul>
                     * @return FineTuneType <p>参数微调方式</p><p>枚举值：</p><ul><li>lora： 轻量级微调大模型的方法</li><li>full： 全参数大模型微调</li></ul>
                     * 
                     */
                    std::string GetFineTuneType() const;

                    /**
                     * 设置<p>参数微调方式</p><p>枚举值：</p><ul><li>lora： 轻量级微调大模型的方法</li><li>full： 全参数大模型微调</li></ul>
                     * @param _fineTuneType <p>参数微调方式</p><p>枚举值：</p><ul><li>lora： 轻量级微调大模型的方法</li><li>full： 全参数大模型微调</li></ul>
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
                     * 获取<p>模型参数大小，如 0.8B，就是 0.8的参数量。370B 模型，就是 370</p>
                     * @return ParameterSize <p>模型参数大小，如 0.8B，就是 0.8的参数量。370B 模型，就是 370</p>
                     * 
                     */
                    double GetParameterSize() const;

                    /**
                     * 设置<p>模型参数大小，如 0.8B，就是 0.8的参数量。370B 模型，就是 370</p>
                     * @param _parameterSize <p>模型参数大小，如 0.8B，就是 0.8的参数量。370B 模型，就是 370</p>
                     * 
                     */
                    void SetParameterSize(const double& _parameterSize);

                    /**
                     * 判断参数 ParameterSize 是否已赋值
                     * @return ParameterSize 是否已赋值
                     * 
                     */
                    bool ParameterSizeHasBeenSet() const;

                private:

                    /**
                     * <p>使用的大模型微调算法</p><p>枚举值：</p><ul><li>sft： Supervised Fine-Tuning，监督微调</li><li>dpo： Direct Preference Optimization，模型偏好训练微调</li><li>grpo： Group Relative Policy Optimization，组相对策略优化</li></ul>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>训练模式，会根据不同训练模式推荐不同的训练参数</p><p>枚举值：</p><ul><li>balanced： 均衡模式，标准配置，兼顾训练速度和模型效果</li><li>quality： 质量优先，更低学习率 / 更多轮次 / 更大 LoRA rank，追求最佳效果</li><li>speed： 速度优先，大 batch / 关闭 grad_ckpt / 短序列，最快迭代验证</li><li>custom： 自定义模式，手动调整各项参数</li></ul><p>默认值：balanced</p>
                     */
                    std::string m_trainingMode;
                    bool m_trainingModeHasBeenSet;

                    /**
                     * <p>参数微调方式</p><p>枚举值：</p><ul><li>lora： 轻量级微调大模型的方法</li><li>full： 全参数大模型微调</li></ul>
                     */
                    std::string m_fineTuneType;
                    bool m_fineTuneTypeHasBeenSet;

                    /**
                     * <p>模型参数大小，如 0.8B，就是 0.8的参数量。370B 模型，就是 370</p>
                     */
                    double m_parameterSize;
                    bool m_parameterSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEPOSTTRAININGPRESETREQUEST_H_
