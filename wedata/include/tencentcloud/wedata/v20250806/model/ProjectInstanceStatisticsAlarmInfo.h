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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECTINSTANCESTATISTICSALARMINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECTINSTANCESTATISTICSALARMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 告警规则项目波动率告警配置信息
                */
                class ProjectInstanceStatisticsAlarmInfo : public AbstractModel
                {
                public:
                    ProjectInstanceStatisticsAlarmInfo();
                    ~ProjectInstanceStatisticsAlarmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警类型 

projectFailureInstanceUpwardFluctuationAlarm: 失败实例向上波动告警

projectSuccessInstanceDownwardFluctuationAlarm： 成功实例向下波动告警
                     * @return AlarmType 告警类型 

projectFailureInstanceUpwardFluctuationAlarm: 失败实例向上波动告警

projectSuccessInstanceDownwardFluctuationAlarm： 成功实例向下波动告警
                     * 
                     */
                    std::string GetAlarmType() const;

                    /**
                     * 设置告警类型 

projectFailureInstanceUpwardFluctuationAlarm: 失败实例向上波动告警

projectSuccessInstanceDownwardFluctuationAlarm： 成功实例向下波动告警
                     * @param _alarmType 告警类型 

projectFailureInstanceUpwardFluctuationAlarm: 失败实例向上波动告警

projectSuccessInstanceDownwardFluctuationAlarm： 成功实例向下波动告警
                     * 
                     */
                    void SetAlarmType(const std::string& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取实例成功数向下波动比例告警阀值；实例失败数向上波动比例告警阀值
                     * @return InstanceThresholdCountPercent 实例成功数向下波动比例告警阀值；实例失败数向上波动比例告警阀值
                     * 
                     */
                    uint64_t GetInstanceThresholdCountPercent() const;

                    /**
                     * 设置实例成功数向下波动比例告警阀值；实例失败数向上波动比例告警阀值
                     * @param _instanceThresholdCountPercent 实例成功数向下波动比例告警阀值；实例失败数向上波动比例告警阀值
                     * 
                     */
                    void SetInstanceThresholdCountPercent(const uint64_t& _instanceThresholdCountPercent);

                    /**
                     * 判断参数 InstanceThresholdCountPercent 是否已赋值
                     * @return InstanceThresholdCountPercent 是否已赋值
                     * 
                     */
                    bool InstanceThresholdCountPercentHasBeenSet() const;

                    /**
                     * 获取累计实例数波动阀值
                     * @return InstanceThresholdCount 累计实例数波动阀值
                     * 
                     */
                    uint64_t GetInstanceThresholdCount() const;

                    /**
                     * 设置累计实例数波动阀值
                     * @param _instanceThresholdCount 累计实例数波动阀值
                     * 
                     */
                    void SetInstanceThresholdCount(const uint64_t& _instanceThresholdCount);

                    /**
                     * 判断参数 InstanceThresholdCount 是否已赋值
                     * @return InstanceThresholdCount 是否已赋值
                     * 
                     */
                    bool InstanceThresholdCountHasBeenSet() const;

                    /**
                     * 获取稳定性次数阈值(防抖动配置统计周期数)
                     * @return StabilizeThreshold 稳定性次数阈值(防抖动配置统计周期数)
                     * 
                     */
                    uint64_t GetStabilizeThreshold() const;

                    /**
                     * 设置稳定性次数阈值(防抖动配置统计周期数)
                     * @param _stabilizeThreshold 稳定性次数阈值(防抖动配置统计周期数)
                     * 
                     */
                    void SetStabilizeThreshold(const uint64_t& _stabilizeThreshold);

                    /**
                     * 判断参数 StabilizeThreshold 是否已赋值
                     * @return StabilizeThreshold 是否已赋值
                     * 
                     */
                    bool StabilizeThresholdHasBeenSet() const;

                    /**
                     * 获取稳定性统计周期(防抖动配置统计周期数)
                     * @return StabilizeStatisticsCycle 稳定性统计周期(防抖动配置统计周期数)
                     * 
                     */
                    uint64_t GetStabilizeStatisticsCycle() const;

                    /**
                     * 设置稳定性统计周期(防抖动配置统计周期数)
                     * @param _stabilizeStatisticsCycle 稳定性统计周期(防抖动配置统计周期数)
                     * 
                     */
                    void SetStabilizeStatisticsCycle(const uint64_t& _stabilizeStatisticsCycle);

                    /**
                     * 判断参数 StabilizeStatisticsCycle 是否已赋值
                     * @return StabilizeStatisticsCycle 是否已赋值
                     * 
                     */
                    bool StabilizeStatisticsCycleHasBeenSet() const;

                    /**
                     * 获取是否累计计算,false:连续,true:累计
                     * @return IsCumulant 是否累计计算,false:连续,true:累计
                     * 
                     */
                    bool GetIsCumulant() const;

                    /**
                     * 设置是否累计计算,false:连续,true:累计
                     * @param _isCumulant 是否累计计算,false:连续,true:累计
                     * 
                     */
                    void SetIsCumulant(const bool& _isCumulant);

                    /**
                     * 判断参数 IsCumulant 是否已赋值
                     * @return IsCumulant 是否已赋值
                     * 
                     */
                    bool IsCumulantHasBeenSet() const;

                    /**
                     * 获取当日累计实例数;
当天失败实例数向下波动量
                     * @return InstanceCount 当日累计实例数;
当天失败实例数向下波动量
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置当日累计实例数;
当天失败实例数向下波动量
                     * @param _instanceCount 当日累计实例数;
当天失败实例数向下波动量
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                private:

                    /**
                     * 告警类型 

projectFailureInstanceUpwardFluctuationAlarm: 失败实例向上波动告警

projectSuccessInstanceDownwardFluctuationAlarm： 成功实例向下波动告警
                     */
                    std::string m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * 实例成功数向下波动比例告警阀值；实例失败数向上波动比例告警阀值
                     */
                    uint64_t m_instanceThresholdCountPercent;
                    bool m_instanceThresholdCountPercentHasBeenSet;

                    /**
                     * 累计实例数波动阀值
                     */
                    uint64_t m_instanceThresholdCount;
                    bool m_instanceThresholdCountHasBeenSet;

                    /**
                     * 稳定性次数阈值(防抖动配置统计周期数)
                     */
                    uint64_t m_stabilizeThreshold;
                    bool m_stabilizeThresholdHasBeenSet;

                    /**
                     * 稳定性统计周期(防抖动配置统计周期数)
                     */
                    uint64_t m_stabilizeStatisticsCycle;
                    bool m_stabilizeStatisticsCycleHasBeenSet;

                    /**
                     * 是否累计计算,false:连续,true:累计
                     */
                    bool m_isCumulant;
                    bool m_isCumulantHasBeenSet;

                    /**
                     * 当日累计实例数;
当天失败实例数向下波动量
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECTINSTANCESTATISTICSALARMINFO_H_
