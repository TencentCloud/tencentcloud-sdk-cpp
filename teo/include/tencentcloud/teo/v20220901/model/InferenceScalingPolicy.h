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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCALINGPOLICY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCALINGPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceScheduledScalingPolicy.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 边缘推理弹性伸缩策略。
                */
                class InferenceScalingPolicy : public AbstractModel
                {
                public:
                    InferenceScalingPolicy();
                    ~InferenceScalingPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略名称。长度限制为 1~30 个字符。同一服务内策略名称需唯一。
                     * @return PolicyName 策略名称。长度限制为 1~30 个字符。同一服务内策略名称需唯一。
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称。长度限制为 1~30 个字符。同一服务内策略名称需唯一。
                     * @param _policyName 策略名称。长度限制为 1~30 个字符。同一服务内策略名称需唯一。
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取策略类型，创建后不可修改。取值：<li>ScheduledScaling：定时伸缩。</li>
                     * @return PolicyType 策略类型，创建后不可修改。取值：<li>ScheduledScaling：定时伸缩。</li>
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置策略类型，创建后不可修改。取值：<li>ScheduledScaling：定时伸缩。</li>
                     * @param _policyType 策略类型，创建后不可修改。取值：<li>ScheduledScaling：定时伸缩。</li>
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取定时伸缩配置。当 PolicyType 取值为 ScheduledScaling 时，该字段必填。
                     * @return ScheduledScalingPolicy 定时伸缩配置。当 PolicyType 取值为 ScheduledScaling 时，该字段必填。
                     * 
                     */
                    InferenceScheduledScalingPolicy GetScheduledScalingPolicy() const;

                    /**
                     * 设置定时伸缩配置。当 PolicyType 取值为 ScheduledScaling 时，该字段必填。
                     * @param _scheduledScalingPolicy 定时伸缩配置。当 PolicyType 取值为 ScheduledScaling 时，该字段必填。
                     * 
                     */
                    void SetScheduledScalingPolicy(const InferenceScheduledScalingPolicy& _scheduledScalingPolicy);

                    /**
                     * 判断参数 ScheduledScalingPolicy 是否已赋值
                     * @return ScheduledScalingPolicy 是否已赋值
                     * 
                     */
                    bool ScheduledScalingPolicyHasBeenSet() const;

                private:

                    /**
                     * 策略名称。长度限制为 1~30 个字符。同一服务内策略名称需唯一。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略类型，创建后不可修改。取值：<li>ScheduledScaling：定时伸缩。</li>
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 定时伸缩配置。当 PolicyType 取值为 ScheduledScaling 时，该字段必填。
                     */
                    InferenceScheduledScalingPolicy m_scheduledScalingPolicy;
                    bool m_scheduledScalingPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCALINGPOLICY_H_
