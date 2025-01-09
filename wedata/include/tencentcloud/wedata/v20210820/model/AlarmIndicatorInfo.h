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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMINDICATORINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMINDICATORINFO_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 告警指标
                */
                class AlarmIndicatorInfo : public AbstractModel
                {
                public:
                    AlarmIndicatorInfo();
                    ~AlarmIndicatorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 指标id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置指标id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 指标id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取告警指标,0任务失败,1任务运行超时,2任务停止,3任务暂停, 4读取速度,5写入速度,6读取吞吐 7写入吞吐, 8脏数据字节数,9脏数据条数,10任务异常,11任务检测异常, 12重启次数, 13任务延时, 14近20分内的重启次数 15传输延迟,16业务延迟, 50离线包CPU使用率, 51离线包内存使用率, 52离线包并行度使用率, 53离线包排队中的实例数, 54实时包资源使用率, 55实时包运行中的任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmIndicator 告警指标,0任务失败,1任务运行超时,2任务停止,3任务暂停, 4读取速度,5写入速度,6读取吞吐 7写入吞吐, 8脏数据字节数,9脏数据条数,10任务异常,11任务检测异常, 12重启次数, 13任务延时, 14近20分内的重启次数 15传输延迟,16业务延迟, 50离线包CPU使用率, 51离线包内存使用率, 52离线包并行度使用率, 53离线包排队中的实例数, 54实时包资源使用率, 55实时包运行中的任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAlarmIndicator() const;

                    /**
                     * 设置告警指标,0任务失败,1任务运行超时,2任务停止,3任务暂停, 4读取速度,5写入速度,6读取吞吐 7写入吞吐, 8脏数据字节数,9脏数据条数,10任务异常,11任务检测异常, 12重启次数, 13任务延时, 14近20分内的重启次数 15传输延迟,16业务延迟, 50离线包CPU使用率, 51离线包内存使用率, 52离线包并行度使用率, 53离线包排队中的实例数, 54实时包资源使用率, 55实时包运行中的任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmIndicator 告警指标,0任务失败,1任务运行超时,2任务停止,3任务暂停, 4读取速度,5写入速度,6读取吞吐 7写入吞吐, 8脏数据字节数,9脏数据条数,10任务异常,11任务检测异常, 12重启次数, 13任务延时, 14近20分内的重启次数 15传输延迟,16业务延迟, 50离线包CPU使用率, 51离线包内存使用率, 52离线包并行度使用率, 53离线包排队中的实例数, 54实时包资源使用率, 55实时包运行中的任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmIndicator(const uint64_t& _alarmIndicator);

                    /**
                     * 判断参数 AlarmIndicator 是否已赋值
                     * @return AlarmIndicator 是否已赋值
                     * 
                     */
                    bool AlarmIndicatorHasBeenSet() const;

                    /**
                     * 获取告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmIndicatorDesc 告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmIndicatorDesc() const;

                    /**
                     * 设置告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmIndicatorDesc 告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmIndicatorDesc(const std::string& _alarmIndicatorDesc);

                    /**
                     * 判断参数 AlarmIndicatorDesc 是否已赋值
                     * @return AlarmIndicatorDesc 是否已赋值
                     * 
                     */
                    bool AlarmIndicatorDescHasBeenSet() const;

                    /**
                     * 获取指标阈值，1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerType 指标阈值，1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTriggerType() const;

                    /**
                     * 设置指标阈值，1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerType 指标阈值，1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerType(const uint64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取预计的超时时间，分钟级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EstimatedTime 预计的超时时间，分钟级别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEstimatedTime() const;

                    /**
                     * 设置预计的超时时间，分钟级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _estimatedTime 预计的超时时间，分钟级别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEstimatedTime(const uint64_t& _estimatedTime);

                    /**
                     * 判断参数 EstimatedTime 是否已赋值
                     * @return EstimatedTime 是否已赋值
                     * 
                     */
                    bool EstimatedTimeHasBeenSet() const;

                    /**
                     * 获取告警阈值的算子,1 大于,2 小于
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 告警阈值的算子,1 大于,2 小于
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOperator() const;

                    /**
                     * 设置告警阈值的算子,1 大于,2 小于
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operator 告警阈值的算子,1 大于,2 小于
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperator(const uint64_t& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取告警指标阈值单位：ms(毫秒)、s(秒)、min(分钟)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmIndicatorUnit 告警指标阈值单位：ms(毫秒)、s(秒)、min(分钟)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmIndicatorUnit() const;

                    /**
                     * 设置告警指标阈值单位：ms(毫秒)、s(秒)、min(分钟)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmIndicatorUnit 告警指标阈值单位：ms(毫秒)、s(秒)、min(分钟)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmIndicatorUnit(const std::string& _alarmIndicatorUnit);

                    /**
                     * 判断参数 AlarmIndicatorUnit 是否已赋值
                     * @return AlarmIndicatorUnit 是否已赋值
                     * 
                     */
                    bool AlarmIndicatorUnitHasBeenSet() const;

                    /**
                     * 获取告警周期
                     * @return Duration 告警周期
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置告警周期
                     * @param _duration 告警周期
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取告警周期单位:hour,minute,day
                     * @return DurationUnit 告警周期单位:hour,minute,day
                     * 
                     */
                    std::string GetDurationUnit() const;

                    /**
                     * 设置告警周期单位:hour,minute,day
                     * @param _durationUnit 告警周期单位:hour,minute,day
                     * 
                     */
                    void SetDurationUnit(const std::string& _durationUnit);

                    /**
                     * 判断参数 DurationUnit 是否已赋值
                     * @return DurationUnit 是否已赋值
                     * 
                     */
                    bool DurationUnitHasBeenSet() const;

                    /**
                     * 获取周期内最多告警次数
                     * @return MaxTimes 周期内最多告警次数
                     * 
                     */
                    int64_t GetMaxTimes() const;

                    /**
                     * 设置周期内最多告警次数
                     * @param _maxTimes 周期内最多告警次数
                     * 
                     */
                    void SetMaxTimes(const int64_t& _maxTimes);

                    /**
                     * 判断参数 MaxTimes 是否已赋值
                     * @return MaxTimes 是否已赋值
                     * 
                     */
                    bool MaxTimesHasBeenSet() const;

                    /**
                     * 获取指标阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Threshold 指标阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetThreshold() const;

                    /**
                     * 设置指标阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _threshold 指标阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThreshold(const double& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取时间范围单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndicatorTimeRangeUnit 时间范围单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndicatorTimeRangeUnit() const;

                    /**
                     * 设置时间范围单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indicatorTimeRangeUnit 时间范围单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndicatorTimeRangeUnit(const std::string& _indicatorTimeRangeUnit);

                    /**
                     * 判断参数 IndicatorTimeRangeUnit 是否已赋值
                     * @return IndicatorTimeRangeUnit 是否已赋值
                     * 
                     */
                    bool IndicatorTimeRangeUnitHasBeenSet() const;

                    /**
                     * 获取时间范围值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndicatorTimeRangeValue 时间范围值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIndicatorTimeRangeValue() const;

                    /**
                     * 设置时间范围值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indicatorTimeRangeValue 时间范围值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndicatorTimeRangeValue(const int64_t& _indicatorTimeRangeValue);

                    /**
                     * 判断参数 IndicatorTimeRangeValue 是否已赋值
                     * @return IndicatorTimeRangeValue 是否已赋值
                     * 
                     */
                    bool IndicatorTimeRangeValueHasBeenSet() const;

                private:

                    /**
                     * 指标id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 告警指标,0任务失败,1任务运行超时,2任务停止,3任务暂停, 4读取速度,5写入速度,6读取吞吐 7写入吞吐, 8脏数据字节数,9脏数据条数,10任务异常,11任务检测异常, 12重启次数, 13任务延时, 14近20分内的重启次数 15传输延迟,16业务延迟, 50离线包CPU使用率, 51离线包内存使用率, 52离线包并行度使用率, 53离线包排队中的实例数, 54实时包资源使用率, 55实时包运行中的任务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_alarmIndicator;
                    bool m_alarmIndicatorHasBeenSet;

                    /**
                     * 告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmIndicatorDesc;
                    bool m_alarmIndicatorDescHasBeenSet;

                    /**
                     * 指标阈值，1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 预计的超时时间，分钟级别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_estimatedTime;
                    bool m_estimatedTimeHasBeenSet;

                    /**
                     * 告警阈值的算子,1 大于,2 小于
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 告警指标阈值单位：ms(毫秒)、s(秒)、min(分钟)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmIndicatorUnit;
                    bool m_alarmIndicatorUnitHasBeenSet;

                    /**
                     * 告警周期
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 告警周期单位:hour,minute,day
                     */
                    std::string m_durationUnit;
                    bool m_durationUnitHasBeenSet;

                    /**
                     * 周期内最多告警次数
                     */
                    int64_t m_maxTimes;
                    bool m_maxTimesHasBeenSet;

                    /**
                     * 指标阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * 时间范围单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indicatorTimeRangeUnit;
                    bool m_indicatorTimeRangeUnitHasBeenSet;

                    /**
                     * 时间范围值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_indicatorTimeRangeValue;
                    bool m_indicatorTimeRangeValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMINDICATORINFO_H_
