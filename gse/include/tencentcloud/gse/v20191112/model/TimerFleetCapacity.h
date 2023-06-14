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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_TIMERFLEETCAPACITY_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_TIMERFLEETCAPACITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/TargetConfiguration.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 定时器弹性伸缩策略
                */
                class TimerFleetCapacity : public AbstractModel
                {
                public:
                    TimerFleetCapacity();
                    ~TimerFleetCapacity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取扩缩容配置服务器舰队ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FleetId 扩缩容配置服务器舰队ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置扩缩容配置服务器舰队ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fleetId 扩缩容配置服务器舰队ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取期望实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DesiredInstances 期望实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDesiredInstances() const;

                    /**
                     * 设置期望实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _desiredInstances 期望实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDesiredInstances(const int64_t& _desiredInstances);

                    /**
                     * 判断参数 DesiredInstances 是否已赋值
                     * @return DesiredInstances 是否已赋值
                     * 
                     */
                    bool DesiredInstancesHasBeenSet() const;

                    /**
                     * 获取最小实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinSize 最小实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMinSize() const;

                    /**
                     * 设置最小实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minSize 最小实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinSize(const int64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     * 
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取最大实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxSize 最大实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置最大实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxSize 最大实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取伸缩容间隔，单位：分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScalingInterval 伸缩容间隔，单位：分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScalingInterval() const;

                    /**
                     * 设置伸缩容间隔，单位：分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scalingInterval 伸缩容间隔，单位：分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScalingInterval(const int64_t& _scalingInterval);

                    /**
                     * 判断参数 ScalingInterval 是否已赋值
                     * @return ScalingInterval 是否已赋值
                     * 
                     */
                    bool ScalingIntervalHasBeenSet() const;

                    /**
                     * 获取扩缩容类型（手动1，自动2、未定义0）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScalingType 扩缩容类型（手动1，自动2、未定义0）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScalingType() const;

                    /**
                     * 设置扩缩容类型（手动1，自动2、未定义0）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scalingType 扩缩容类型（手动1，自动2、未定义0）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScalingType(const int64_t& _scalingType);

                    /**
                     * 判断参数 ScalingType 是否已赋值
                     * @return ScalingType 是否已赋值
                     * 
                     */
                    bool ScalingTypeHasBeenSet() const;

                    /**
                     * 获取基于目标的扩展策略的设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetConfiguration 基于目标的扩展策略的设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TargetConfiguration GetTargetConfiguration() const;

                    /**
                     * 设置基于目标的扩展策略的设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetConfiguration 基于目标的扩展策略的设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetConfiguration(const TargetConfiguration& _targetConfiguration);

                    /**
                     * 判断参数 TargetConfiguration 是否已赋值
                     * @return TargetConfiguration 是否已赋值
                     * 
                     */
                    bool TargetConfigurationHasBeenSet() const;

                private:

                    /**
                     * 扩缩容配置服务器舰队ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 期望实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_desiredInstances;
                    bool m_desiredInstancesHasBeenSet;

                    /**
                     * 最小实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * 最大实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * 伸缩容间隔，单位：分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scalingInterval;
                    bool m_scalingIntervalHasBeenSet;

                    /**
                     * 扩缩容类型（手动1，自动2、未定义0）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scalingType;
                    bool m_scalingTypeHasBeenSet;

                    /**
                     * 基于目标的扩展策略的设置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TargetConfiguration m_targetConfiguration;
                    bool m_targetConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_TIMERFLEETCAPACITY_H_
