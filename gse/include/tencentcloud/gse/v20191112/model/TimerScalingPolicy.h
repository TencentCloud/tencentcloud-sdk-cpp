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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_TIMERSCALINGPOLICY_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_TIMERSCALINGPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/TimerFleetCapacity.h>
#include <tencentcloud/gse/v20191112/model/TimerConfiguration.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 定时器策略消息
                */
                class TimerScalingPolicy : public AbstractModel
                {
                public:
                    TimerScalingPolicy();
                    ~TimerScalingPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取定时器ID，进行encode，填写时更新
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimerId 定时器ID，进行encode，填写时更新
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimerId() const;

                    /**
                     * 设置定时器ID，进行encode，填写时更新
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timerId 定时器ID，进行encode，填写时更新
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimerId(const std::string& _timerId);

                    /**
                     * 判断参数 TimerId 是否已赋值
                     * @return TimerId 是否已赋值
                     * 
                     */
                    bool TimerIdHasBeenSet() const;

                    /**
                     * 获取定时器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimerName 定时器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimerName() const;

                    /**
                     * 设置定时器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timerName 定时器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimerName(const std::string& _timerName);

                    /**
                     * 判断参数 TimerName 是否已赋值
                     * @return TimerName 是否已赋值
                     * 
                     */
                    bool TimerNameHasBeenSet() const;

                    /**
                     * 获取定时器状态(未定义0、未生效1、生效中2、已停止3、已过期4)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimerStatus 定时器状态(未定义0、未生效1、生效中2、已停止3、已过期4)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimerStatus() const;

                    /**
                     * 设置定时器状态(未定义0、未生效1、生效中2、已停止3、已过期4)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timerStatus 定时器状态(未定义0、未生效1、生效中2、已停止3、已过期4)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimerStatus(const int64_t& _timerStatus);

                    /**
                     * 判断参数 TimerStatus 是否已赋值
                     * @return TimerStatus 是否已赋值
                     * 
                     */
                    bool TimerStatusHasBeenSet() const;

                    /**
                     * 获取定时器弹性伸缩策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimerFleetCapacity 定时器弹性伸缩策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TimerFleetCapacity GetTimerFleetCapacity() const;

                    /**
                     * 设置定时器弹性伸缩策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timerFleetCapacity 定时器弹性伸缩策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimerFleetCapacity(const TimerFleetCapacity& _timerFleetCapacity);

                    /**
                     * 判断参数 TimerFleetCapacity 是否已赋值
                     * @return TimerFleetCapacity 是否已赋值
                     * 
                     */
                    bool TimerFleetCapacityHasBeenSet() const;

                    /**
                     * 获取重复周期配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimerConfiguration 重复周期配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TimerConfiguration GetTimerConfiguration() const;

                    /**
                     * 设置重复周期配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timerConfiguration 重复周期配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimerConfiguration(const TimerConfiguration& _timerConfiguration);

                    /**
                     * 判断参数 TimerConfiguration 是否已赋值
                     * @return TimerConfiguration 是否已赋值
                     * 
                     */
                    bool TimerConfigurationHasBeenSet() const;

                private:

                    /**
                     * 定时器ID，进行encode，填写时更新
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timerId;
                    bool m_timerIdHasBeenSet;

                    /**
                     * 定时器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timerName;
                    bool m_timerNameHasBeenSet;

                    /**
                     * 定时器状态(未定义0、未生效1、生效中2、已停止3、已过期4)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timerStatus;
                    bool m_timerStatusHasBeenSet;

                    /**
                     * 定时器弹性伸缩策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TimerFleetCapacity m_timerFleetCapacity;
                    bool m_timerFleetCapacityHasBeenSet;

                    /**
                     * 重复周期配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TimerConfiguration m_timerConfiguration;
                    bool m_timerConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_TIMERSCALINGPOLICY_H_
