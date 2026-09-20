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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CHECKDBINSTANCEELASTICCPUSCALABLERESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CHECKDBINSTANCEELASTICCPUSCALABLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * CheckDBInstanceElasticCpuScalable返回参数结构体
                */
                class CheckDBInstanceElasticCpuScalableResponse : public AbstractModel
                {
                public:
                    CheckDBInstanceElasticCpuScalableResponse();
                    ~CheckDBInstanceElasticCpuScalableResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否可以进行弹性CPU扩容</p>
                     * @return Scalable <p>是否可以进行弹性CPU扩容</p>
                     * 
                     */
                    bool GetScalable() const;

                    /**
                     * 判断参数 Scalable 是否已赋值
                     * @return Scalable 是否已赋值
                     * 
                     */
                    bool ScalableHasBeenSet() const;

                    /**
                     * 获取<p>当前是否处于扩容状态</p>
                     * @return IsScaled <p>当前是否处于扩容状态</p>
                     * 
                     */
                    bool GetIsScaled() const;

                    /**
                     * 判断参数 IsScaled 是否已赋值
                     * @return IsScaled 是否已赋值
                     * 
                     */
                    bool IsScaledHasBeenSet() const;

                    /**
                     * 获取<p>实例是否被锁定（有流程在执行）</p>
                     * @return IsLocked <p>实例是否被锁定（有流程在执行）</p>
                     * 
                     */
                    bool GetIsLocked() const;

                    /**
                     * 判断参数 IsLocked 是否已赋值
                     * @return IsLocked 是否已赋值
                     * 
                     */
                    bool IsLockedHasBeenSet() const;

                    /**
                     * 获取<p>不可扩容的原因</p>
                     * @return Reason <p>不可扩容的原因</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取<p>最大可扩容的CPU核数，MIN(最小分片CPU核数, 24)</p>
                     * @return MaxExtraCpu <p>最大可扩容的CPU核数，MIN(最小分片CPU核数, 24)</p>
                     * 
                     */
                    int64_t GetMaxExtraCpu() const;

                    /**
                     * 判断参数 MaxExtraCpu 是否已赋值
                     * @return MaxExtraCpu 是否已赋值
                     * 
                     */
                    bool MaxExtraCpuHasBeenSet() const;

                    /**
                     * 获取<p>当前扩容的CPU核数（如果处于扩容状态）</p>
                     * @return ExtraCpu <p>当前扩容的CPU核数（如果处于扩容状态）</p>
                     * 
                     */
                    int64_t GetExtraCpu() const;

                    /**
                     * 判断参数 ExtraCpu 是否已赋值
                     * @return ExtraCpu 是否已赋值
                     * 
                     */
                    bool ExtraCpuHasBeenSet() const;

                    /**
                     * 获取<p>扩容触发类型: 1-手动, 2-周期, 3-一次性时间段, 4-监控</p>
                     * @return TriggerType <p>扩容触发类型: 1-手动, 2-周期, 3-一次性时间段, 4-监控</p>
                     * 
                     */
                    int64_t GetTriggerType() const;

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取<p>扩容时间</p>
                     * @return ScaleUpTime <p>扩容时间</p>
                     * 
                     */
                    std::string GetScaleUpTime() const;

                    /**
                     * 判断参数 ScaleUpTime 是否已赋值
                     * @return ScaleUpTime 是否已赋值
                     * 
                     */
                    bool ScaleUpTimeHasBeenSet() const;

                private:

                    /**
                     * <p>是否可以进行弹性CPU扩容</p>
                     */
                    bool m_scalable;
                    bool m_scalableHasBeenSet;

                    /**
                     * <p>当前是否处于扩容状态</p>
                     */
                    bool m_isScaled;
                    bool m_isScaledHasBeenSet;

                    /**
                     * <p>实例是否被锁定（有流程在执行）</p>
                     */
                    bool m_isLocked;
                    bool m_isLockedHasBeenSet;

                    /**
                     * <p>不可扩容的原因</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * <p>最大可扩容的CPU核数，MIN(最小分片CPU核数, 24)</p>
                     */
                    int64_t m_maxExtraCpu;
                    bool m_maxExtraCpuHasBeenSet;

                    /**
                     * <p>当前扩容的CPU核数（如果处于扩容状态）</p>
                     */
                    int64_t m_extraCpu;
                    bool m_extraCpuHasBeenSet;

                    /**
                     * <p>扩容触发类型: 1-手动, 2-周期, 3-一次性时间段, 4-监控</p>
                     */
                    int64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>扩容时间</p>
                     */
                    std::string m_scaleUpTime;
                    bool m_scaleUpTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CHECKDBINSTANCEELASTICCPUSCALABLERESPONSE_H_
