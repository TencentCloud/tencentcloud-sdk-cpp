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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_LOADAUTOSCALESTRATEGY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_LOADAUTOSCALESTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/TriggerConditions.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/LoadMetricsConditions.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 自动扩缩容基于负载指标的规则
                */
                class LoadAutoScaleStrategy : public AbstractModel
                {
                public:
                    LoadAutoScaleStrategy();
                    ~LoadAutoScaleStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyId 规则ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStrategyId() const;

                    /**
                     * 设置规则ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyId 规则ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyId(const int64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取规则名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyName 规则名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置规则名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyName 规则名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取规则生效冷却时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalmDownTime 规则生效冷却时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCalmDownTime() const;

                    /**
                     * 设置规则生效冷却时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calmDownTime 规则生效冷却时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCalmDownTime(const int64_t& _calmDownTime);

                    /**
                     * 判断参数 CalmDownTime 是否已赋值
                     * @return CalmDownTime 是否已赋值
                     * 
                     */
                    bool CalmDownTimeHasBeenSet() const;

                    /**
                     * 获取扩缩容动作，1表示扩容，2表示缩容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScaleAction 扩缩容动作，1表示扩容，2表示缩容。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScaleAction() const;

                    /**
                     * 设置扩缩容动作，1表示扩容，2表示缩容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scaleAction 扩缩容动作，1表示扩容，2表示缩容。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScaleAction(const int64_t& _scaleAction);

                    /**
                     * 判断参数 ScaleAction 是否已赋值
                     * @return ScaleAction 是否已赋值
                     * 
                     */
                    bool ScaleActionHasBeenSet() const;

                    /**
                     * 获取每次规则生效时的扩缩容数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScaleNum 每次规则生效时的扩缩容数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScaleNum() const;

                    /**
                     * 设置每次规则生效时的扩缩容数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scaleNum 每次规则生效时的扩缩容数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScaleNum(const int64_t& _scaleNum);

                    /**
                     * 判断参数 ScaleNum 是否已赋值
                     * @return ScaleNum 是否已赋值
                     * 
                     */
                    bool ScaleNumHasBeenSet() const;

                    /**
                     * 获取扩缩容负载指标。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadMetrics 扩缩容负载指标。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLoadMetrics() const;

                    /**
                     * 设置扩缩容负载指标。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loadMetrics 扩缩容负载指标。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoadMetrics(const std::string& _loadMetrics);

                    /**
                     * 判断参数 LoadMetrics 是否已赋值
                     * @return LoadMetrics 是否已赋值
                     * 
                     */
                    bool LoadMetricsHasBeenSet() const;

                    /**
                     * 获取规则元数据记录ID。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricId 规则元数据记录ID。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMetricId() const;

                    /**
                     * 设置规则元数据记录ID。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricId 规则元数据记录ID。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetricId(const int64_t& _metricId);

                    /**
                     * 判断参数 MetricId 是否已赋值
                     * @return MetricId 是否已赋值
                     * 
                     */
                    bool MetricIdHasBeenSet() const;

                    /**
                     * 获取规则统计周期，提供300s,600s,900s。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatisticPeriod 规则统计周期，提供300s,600s,900s。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatisticPeriod() const;

                    /**
                     * 设置规则统计周期，提供300s,600s,900s。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statisticPeriod 规则统计周期，提供300s,600s,900s。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatisticPeriod(const int64_t& _statisticPeriod);

                    /**
                     * 判断参数 StatisticPeriod 是否已赋值
                     * @return StatisticPeriod 是否已赋值
                     * 
                     */
                    bool StatisticPeriodHasBeenSet() const;

                    /**
                     * 获取指标处理方法，1表示MAX，2表示MIN，3表示AVG。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessMethod 指标处理方法，1表示MAX，2表示MIN，3表示AVG。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProcessMethod() const;

                    /**
                     * 设置指标处理方法，1表示MAX，2表示MIN，3表示AVG。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processMethod 指标处理方法，1表示MAX，2表示MIN，3表示AVG。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessMethod(const int64_t& _processMethod);

                    /**
                     * 判断参数 ProcessMethod 是否已赋值
                     * @return ProcessMethod 是否已赋值
                     * 
                     */
                    bool ProcessMethodHasBeenSet() const;

                    /**
                     * 获取触发次数，当连续触发超过TriggerThreshold次后才开始扩缩容。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
                     * @return TriggerThreshold 触发次数，当连续触发超过TriggerThreshold次后才开始扩缩容。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
                     * 
                     */
                    int64_t GetTriggerThreshold() const;

                    /**
                     * 设置触发次数，当连续触发超过TriggerThreshold次后才开始扩缩容。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
                     * @param _triggerThreshold 触发次数，当连续触发超过TriggerThreshold次后才开始扩缩容。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
                     * 
                     */
                    void SetTriggerThreshold(const int64_t& _triggerThreshold);

                    /**
                     * 判断参数 TriggerThreshold 是否已赋值
                     * @return TriggerThreshold 是否已赋值
                     * 
                     */
                    bool TriggerThresholdHasBeenSet() const;

                    /**
                     * 获取条件触发数组。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerConditions 条件触发数组。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TriggerConditions GetTriggerConditions() const;

                    /**
                     * 设置条件触发数组。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerConditions 条件触发数组。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerConditions(const TriggerConditions& _triggerConditions);

                    /**
                     * 判断参数 TriggerConditions 是否已赋值
                     * @return TriggerConditions 是否已赋值
                     * 
                     */
                    bool TriggerConditionsHasBeenSet() const;

                    /**
                     * 获取规则优先级，添加时无效，默认为自增。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Priority 规则优先级，添加时无效，默认为自增。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置规则优先级，添加时无效，默认为自增。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _priority 规则优先级，添加时无效，默认为自增。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取规则状态，1表示启动，3表示禁用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyStatus 规则状态，1表示启动，3表示禁用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStrategyStatus() const;

                    /**
                     * 设置规则状态，1表示启动，3表示禁用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyStatus 规则状态，1表示启动，3表示禁用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyStatus(const int64_t& _strategyStatus);

                    /**
                     * 判断参数 StrategyStatus 是否已赋值
                     * @return StrategyStatus 是否已赋值
                     * 
                     */
                    bool StrategyStatusHasBeenSet() const;

                    /**
                     * 获取规则扩容指定 yarn node label
注意：此字段可能返回 null，表示取不到有效值。
                     * @return YarnNodeLabel 规则扩容指定 yarn node label
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetYarnNodeLabel() const;

                    /**
                     * 设置规则扩容指定 yarn node label
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _yarnNodeLabel 规则扩容指定 yarn node label
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetYarnNodeLabel(const std::string& _yarnNodeLabel);

                    /**
                     * 判断参数 YarnNodeLabel 是否已赋值
                     * @return YarnNodeLabel 是否已赋值
                     * 
                     */
                    bool YarnNodeLabelHasBeenSet() const;

                    /**
                     * 获取规则生效的有效时间
                     * @return PeriodValid 规则生效的有效时间
                     * 
                     */
                    std::string GetPeriodValid() const;

                    /**
                     * 设置规则生效的有效时间
                     * @param _periodValid 规则生效的有效时间
                     * 
                     */
                    void SetPeriodValid(const std::string& _periodValid);

                    /**
                     * 判断参数 PeriodValid 是否已赋值
                     * @return PeriodValid 是否已赋值
                     * 
                     */
                    bool PeriodValidHasBeenSet() const;

                    /**
                     * 获取优雅缩容开关
                     * @return GraceDownFlag 优雅缩容开关
                     * 
                     */
                    bool GetGraceDownFlag() const;

                    /**
                     * 设置优雅缩容开关
                     * @param _graceDownFlag 优雅缩容开关
                     * 
                     */
                    void SetGraceDownFlag(const bool& _graceDownFlag);

                    /**
                     * 判断参数 GraceDownFlag 是否已赋值
                     * @return GraceDownFlag 是否已赋值
                     * 
                     */
                    bool GraceDownFlagHasBeenSet() const;

                    /**
                     * 获取优雅缩容等待时间
                     * @return GraceDownTime 优雅缩容等待时间
                     * 
                     */
                    int64_t GetGraceDownTime() const;

                    /**
                     * 设置优雅缩容等待时间
                     * @param _graceDownTime 优雅缩容等待时间
                     * 
                     */
                    void SetGraceDownTime(const int64_t& _graceDownTime);

                    /**
                     * 判断参数 GraceDownTime 是否已赋值
                     * @return GraceDownTime 是否已赋值
                     * 
                     */
                    bool GraceDownTimeHasBeenSet() const;

                    /**
                     * 获取绑定标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 绑定标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置绑定标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 绑定标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取预设配置组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigGroupAssigned 预设配置组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigGroupAssigned() const;

                    /**
                     * 设置预设配置组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configGroupAssigned 预设配置组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigGroupAssigned(const std::string& _configGroupAssigned);

                    /**
                     * 判断参数 ConfigGroupAssigned 是否已赋值
                     * @return ConfigGroupAssigned 是否已赋值
                     * 
                     */
                    bool ConfigGroupAssignedHasBeenSet() const;

                    /**
                     * 获取扩容资源计算方法，"DEFAULT","INSTANCE", "CPU", "MEMORYGB"。
"DEFAULT"表示默认方式，与"INSTANCE"意义相同。
"INSTANCE"表示按照节点计算，默认方式。
"CPU"表示按照机器的核数计算。
"MEMORYGB"表示按照机器内存数计算。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MeasureMethod 扩容资源计算方法，"DEFAULT","INSTANCE", "CPU", "MEMORYGB"。
"DEFAULT"表示默认方式，与"INSTANCE"意义相同。
"INSTANCE"表示按照节点计算，默认方式。
"CPU"表示按照机器的核数计算。
"MEMORYGB"表示按照机器内存数计算。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMeasureMethod() const;

                    /**
                     * 设置扩容资源计算方法，"DEFAULT","INSTANCE", "CPU", "MEMORYGB"。
"DEFAULT"表示默认方式，与"INSTANCE"意义相同。
"INSTANCE"表示按照节点计算，默认方式。
"CPU"表示按照机器的核数计算。
"MEMORYGB"表示按照机器内存数计算。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _measureMethod 扩容资源计算方法，"DEFAULT","INSTANCE", "CPU", "MEMORYGB"。
"DEFAULT"表示默认方式，与"INSTANCE"意义相同。
"INSTANCE"表示按照节点计算，默认方式。
"CPU"表示按照机器的核数计算。
"MEMORYGB"表示按照机器内存数计算。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMeasureMethod(const std::string& _measureMethod);

                    /**
                     * 判断参数 MeasureMethod 是否已赋值
                     * @return MeasureMethod 是否已赋值
                     * 
                     */
                    bool MeasureMethodHasBeenSet() const;

                    /**
                     * 获取多指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadMetricsConditions 多指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LoadMetricsConditions GetLoadMetricsConditions() const;

                    /**
                     * 设置多指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loadMetricsConditions 多指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoadMetricsConditions(const LoadMetricsConditions& _loadMetricsConditions);

                    /**
                     * 判断参数 LoadMetricsConditions 是否已赋值
                     * @return LoadMetricsConditions 是否已赋值
                     * 
                     */
                    bool LoadMetricsConditionsHasBeenSet() const;

                private:

                    /**
                     * 规则ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 规则名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 规则生效冷却时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_calmDownTime;
                    bool m_calmDownTimeHasBeenSet;

                    /**
                     * 扩缩容动作，1表示扩容，2表示缩容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scaleAction;
                    bool m_scaleActionHasBeenSet;

                    /**
                     * 每次规则生效时的扩缩容数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scaleNum;
                    bool m_scaleNumHasBeenSet;

                    /**
                     * 扩缩容负载指标。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loadMetrics;
                    bool m_loadMetricsHasBeenSet;

                    /**
                     * 规则元数据记录ID。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_metricId;
                    bool m_metricIdHasBeenSet;

                    /**
                     * 规则统计周期，提供300s,600s,900s。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_statisticPeriod;
                    bool m_statisticPeriodHasBeenSet;

                    /**
                     * 指标处理方法，1表示MAX，2表示MIN，3表示AVG。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_processMethod;
                    bool m_processMethodHasBeenSet;

                    /**
                     * 触发次数，当连续触发超过TriggerThreshold次后才开始扩缩容。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
                     */
                    int64_t m_triggerThreshold;
                    bool m_triggerThresholdHasBeenSet;

                    /**
                     * 条件触发数组。注:不推荐使用此属性，和LoadMetricsConditions属性配置互斥，配置了LoadMetricsConditions，这个属性不生效。请优先使用LoadMetricsConditions属性支持多指标。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TriggerConditions m_triggerConditions;
                    bool m_triggerConditionsHasBeenSet;

                    /**
                     * 规则优先级，添加时无效，默认为自增。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 规则状态，1表示启动，3表示禁用。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_strategyStatus;
                    bool m_strategyStatusHasBeenSet;

                    /**
                     * 规则扩容指定 yarn node label
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_yarnNodeLabel;
                    bool m_yarnNodeLabelHasBeenSet;

                    /**
                     * 规则生效的有效时间
                     */
                    std::string m_periodValid;
                    bool m_periodValidHasBeenSet;

                    /**
                     * 优雅缩容开关
                     */
                    bool m_graceDownFlag;
                    bool m_graceDownFlagHasBeenSet;

                    /**
                     * 优雅缩容等待时间
                     */
                    int64_t m_graceDownTime;
                    bool m_graceDownTimeHasBeenSet;

                    /**
                     * 绑定标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 预设配置组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configGroupAssigned;
                    bool m_configGroupAssignedHasBeenSet;

                    /**
                     * 扩容资源计算方法，"DEFAULT","INSTANCE", "CPU", "MEMORYGB"。
"DEFAULT"表示默认方式，与"INSTANCE"意义相同。
"INSTANCE"表示按照节点计算，默认方式。
"CPU"表示按照机器的核数计算。
"MEMORYGB"表示按照机器内存数计算。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_measureMethod;
                    bool m_measureMethodHasBeenSet;

                    /**
                     * 多指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LoadMetricsConditions m_loadMetricsConditions;
                    bool m_loadMetricsConditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_LOADAUTOSCALESTRATEGY_H_
