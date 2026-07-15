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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmHierarchicalValue.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 告警条件
                */
                class Condition : public AbstractModel
                {
                public:
                    Condition();
                    ~Condition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>告警通知频率</p>
                     * @return AlarmNotifyPeriod <p>告警通知频率</p>
                     * 
                     */
                    int64_t GetAlarmNotifyPeriod() const;

                    /**
                     * 设置<p>告警通知频率</p>
                     * @param _alarmNotifyPeriod <p>告警通知频率</p>
                     * 
                     */
                    void SetAlarmNotifyPeriod(const int64_t& _alarmNotifyPeriod);

                    /**
                     * 判断参数 AlarmNotifyPeriod 是否已赋值
                     * @return AlarmNotifyPeriod 是否已赋值
                     * 
                     */
                    bool AlarmNotifyPeriodHasBeenSet() const;

                    /**
                     * 获取<p>重复通知策略预定义（0 - 只告警一次， 1 - 指数告警，2 - 连接告警）</p>
                     * @return AlarmNotifyType <p>重复通知策略预定义（0 - 只告警一次， 1 - 指数告警，2 - 连接告警）</p>
                     * 
                     */
                    int64_t GetAlarmNotifyType() const;

                    /**
                     * 设置<p>重复通知策略预定义（0 - 只告警一次， 1 - 指数告警，2 - 连接告警）</p>
                     * @param _alarmNotifyType <p>重复通知策略预定义（0 - 只告警一次， 1 - 指数告警，2 - 连接告警）</p>
                     * 
                     */
                    void SetAlarmNotifyType(const int64_t& _alarmNotifyType);

                    /**
                     * 判断参数 AlarmNotifyType 是否已赋值
                     * @return AlarmNotifyType 是否已赋值
                     * 
                     */
                    bool AlarmNotifyTypeHasBeenSet() const;

                    /**
                     * 获取<p>检测方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalcType <p>检测方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalcType() const;

                    /**
                     * 设置<p>检测方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calcType <p>检测方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCalcType(const std::string& _calcType);

                    /**
                     * 判断参数 CalcType 是否已赋值
                     * @return CalcType 是否已赋值
                     * 
                     */
                    bool CalcTypeHasBeenSet() const;

                    /**
                     * 获取<p>检测值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalcValue <p>检测值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalcValue() const;

                    /**
                     * 设置<p>检测值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calcValue <p>检测值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCalcValue(const std::string& _calcValue);

                    /**
                     * 判断参数 CalcValue 是否已赋值
                     * @return CalcValue 是否已赋值
                     * 
                     */
                    bool CalcValueHasBeenSet() const;

                    /**
                     * 获取<p>持续时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContinueTime <p>持续时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContinueTime() const;

                    /**
                     * 设置<p>持续时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _continueTime <p>持续时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContinueTime(const std::string& _continueTime);

                    /**
                     * 判断参数 ContinueTime 是否已赋值
                     * @return ContinueTime 是否已赋值
                     * 
                     */
                    bool ContinueTimeHasBeenSet() const;

                    /**
                     * 获取<p>指标ID</p>
                     * @return MetricID <p>指标ID</p>
                     * 
                     */
                    int64_t GetMetricID() const;

                    /**
                     * 设置<p>指标ID</p>
                     * @param _metricID <p>指标ID</p>
                     * 
                     */
                    void SetMetricID(const int64_t& _metricID);

                    /**
                     * 判断参数 MetricID 是否已赋值
                     * @return MetricID 是否已赋值
                     * 
                     */
                    bool MetricIDHasBeenSet() const;

                    /**
                     * 获取<p>指标展示名称（对外）</p>
                     * @return MetricDisplayName <p>指标展示名称（对外）</p>
                     * 
                     */
                    std::string GetMetricDisplayName() const;

                    /**
                     * 设置<p>指标展示名称（对外）</p>
                     * @param _metricDisplayName <p>指标展示名称（对外）</p>
                     * 
                     */
                    void SetMetricDisplayName(const std::string& _metricDisplayName);

                    /**
                     * 判断参数 MetricDisplayName 是否已赋值
                     * @return MetricDisplayName 是否已赋值
                     * 
                     */
                    bool MetricDisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>周期</p>
                     * @return Period <p>周期</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>周期</p>
                     * @param _period <p>周期</p>
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>规则ID</p>
                     * @return RuleID <p>规则ID</p>
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置<p>规则ID</p>
                     * @param _ruleID <p>规则ID</p>
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取<p>指标单位</p>
                     * @return Unit <p>指标单位</p>
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置<p>指标单位</p>
                     * @param _unit <p>指标单位</p>
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取<p>是否为高级指标，0：否；1：是</p>
                     * @return IsAdvanced <p>是否为高级指标，0：否；1：是</p>
                     * 
                     */
                    int64_t GetIsAdvanced() const;

                    /**
                     * 设置<p>是否为高级指标，0：否；1：是</p>
                     * @param _isAdvanced <p>是否为高级指标，0：否；1：是</p>
                     * 
                     */
                    void SetIsAdvanced(const int64_t& _isAdvanced);

                    /**
                     * 判断参数 IsAdvanced 是否已赋值
                     * @return IsAdvanced 是否已赋值
                     * 
                     */
                    bool IsAdvancedHasBeenSet() const;

                    /**
                     * 获取<p>是否开通高级指标，0：否；1：是</p>
                     * @return IsOpen <p>是否开通高级指标，0：否；1：是</p>
                     * 
                     */
                    int64_t GetIsOpen() const;

                    /**
                     * 设置<p>是否开通高级指标，0：否；1：是</p>
                     * @param _isOpen <p>是否开通高级指标，0：否；1：是</p>
                     * 
                     */
                    void SetIsOpen(const int64_t& _isOpen);

                    /**
                     * 判断参数 IsOpen 是否已赋值
                     * @return IsOpen 是否已赋值
                     * 
                     */
                    bool IsOpenHasBeenSet() const;

                    /**
                     * 获取<p>产品ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductId <p>产品ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productId <p>产品ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取<p>告警分级阈值配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HierarchicalValue <p>告警分级阈值配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AlarmHierarchicalValue GetHierarchicalValue() const;

                    /**
                     * 设置<p>告警分级阈值配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hierarchicalValue <p>告警分级阈值配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHierarchicalValue(const AlarmHierarchicalValue& _hierarchicalValue);

                    /**
                     * 判断参数 HierarchicalValue 是否已赋值
                     * @return HierarchicalValue 是否已赋值
                     * 
                     */
                    bool HierarchicalValueHasBeenSet() const;

                    /**
                     * 获取<p>指标类型，用于区分动态指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleType <p>指标类型，用于区分动态指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置<p>指标类型，用于区分动态指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleType <p>指标类型，用于区分动态指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                private:

                    /**
                     * <p>告警通知频率</p>
                     */
                    int64_t m_alarmNotifyPeriod;
                    bool m_alarmNotifyPeriodHasBeenSet;

                    /**
                     * <p>重复通知策略预定义（0 - 只告警一次， 1 - 指数告警，2 - 连接告警）</p>
                     */
                    int64_t m_alarmNotifyType;
                    bool m_alarmNotifyTypeHasBeenSet;

                    /**
                     * <p>检测方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calcType;
                    bool m_calcTypeHasBeenSet;

                    /**
                     * <p>检测值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calcValue;
                    bool m_calcValueHasBeenSet;

                    /**
                     * <p>持续时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_continueTime;
                    bool m_continueTimeHasBeenSet;

                    /**
                     * <p>指标ID</p>
                     */
                    int64_t m_metricID;
                    bool m_metricIDHasBeenSet;

                    /**
                     * <p>指标展示名称（对外）</p>
                     */
                    std::string m_metricDisplayName;
                    bool m_metricDisplayNameHasBeenSet;

                    /**
                     * <p>周期</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>规则ID</p>
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>指标单位</p>
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * <p>是否为高级指标，0：否；1：是</p>
                     */
                    int64_t m_isAdvanced;
                    bool m_isAdvancedHasBeenSet;

                    /**
                     * <p>是否开通高级指标，0：否；1：是</p>
                     */
                    int64_t m_isOpen;
                    bool m_isOpenHasBeenSet;

                    /**
                     * <p>产品ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>告警分级阈值配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmHierarchicalValue m_hierarchicalValue;
                    bool m_hierarchicalValueHasBeenSet;

                    /**
                     * <p>指标类型，用于区分动态指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CONDITION_H_
