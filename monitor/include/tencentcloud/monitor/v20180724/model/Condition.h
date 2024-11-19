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
                     * 获取告警通知频率
                     * @return AlarmNotifyPeriod 告警通知频率
                     * 
                     */
                    int64_t GetAlarmNotifyPeriod() const;

                    /**
                     * 设置告警通知频率
                     * @param _alarmNotifyPeriod 告警通知频率
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
                     * 获取重复通知策略预定义（0 - 只告警一次， 1 - 指数告警，2 - 连接告警）
                     * @return AlarmNotifyType 重复通知策略预定义（0 - 只告警一次， 1 - 指数告警，2 - 连接告警）
                     * 
                     */
                    int64_t GetAlarmNotifyType() const;

                    /**
                     * 设置重复通知策略预定义（0 - 只告警一次， 1 - 指数告警，2 - 连接告警）
                     * @param _alarmNotifyType 重复通知策略预定义（0 - 只告警一次， 1 - 指数告警，2 - 连接告警）
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
                     * 获取检测方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalcType 检测方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalcType() const;

                    /**
                     * 设置检测方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calcType 检测方式
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
                     * 获取检测值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalcValue 检测值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalcValue() const;

                    /**
                     * 设置检测值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calcValue 检测值
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
                     * 获取持续时间，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContinueTime 持续时间，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContinueTime() const;

                    /**
                     * 设置持续时间，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _continueTime 持续时间，单位秒
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
                     * 获取指标ID
                     * @return MetricID 指标ID
                     * 
                     */
                    int64_t GetMetricID() const;

                    /**
                     * 设置指标ID
                     * @param _metricID 指标ID
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
                     * 获取指标展示名称（对外）
                     * @return MetricDisplayName 指标展示名称（对外）
                     * 
                     */
                    std::string GetMetricDisplayName() const;

                    /**
                     * 设置指标展示名称（对外）
                     * @param _metricDisplayName 指标展示名称（对外）
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
                     * 获取周期
                     * @return Period 周期
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置周期
                     * @param _period 周期
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
                     * 获取规则ID
                     * @return RuleID 规则ID
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置规则ID
                     * @param _ruleID 规则ID
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
                     * 获取指标单位
                     * @return Unit 指标单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置指标单位
                     * @param _unit 指标单位
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
                     * 获取是否为高级指标，0：否；1：是
                     * @return IsAdvanced 是否为高级指标，0：否；1：是
                     * 
                     */
                    int64_t GetIsAdvanced() const;

                    /**
                     * 设置是否为高级指标，0：否；1：是
                     * @param _isAdvanced 是否为高级指标，0：否；1：是
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
                     * 获取是否开通高级指标，0：否；1：是
                     * @return IsOpen 是否开通高级指标，0：否；1：是
                     * 
                     */
                    int64_t GetIsOpen() const;

                    /**
                     * 设置是否开通高级指标，0：否；1：是
                     * @param _isOpen 是否开通高级指标，0：否；1：是
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
                     * 获取产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductId 产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productId 产品ID
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
                     * 获取告警分级阈值配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HierarchicalValue 告警分级阈值配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AlarmHierarchicalValue GetHierarchicalValue() const;

                    /**
                     * 设置告警分级阈值配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hierarchicalValue 告警分级阈值配置
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
                     * 获取指标类型，用于区分动态指标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleType 指标类型，用于区分动态指标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置指标类型，用于区分动态指标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleType 指标类型，用于区分动态指标
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
                     * 告警通知频率
                     */
                    int64_t m_alarmNotifyPeriod;
                    bool m_alarmNotifyPeriodHasBeenSet;

                    /**
                     * 重复通知策略预定义（0 - 只告警一次， 1 - 指数告警，2 - 连接告警）
                     */
                    int64_t m_alarmNotifyType;
                    bool m_alarmNotifyTypeHasBeenSet;

                    /**
                     * 检测方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calcType;
                    bool m_calcTypeHasBeenSet;

                    /**
                     * 检测值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calcValue;
                    bool m_calcValueHasBeenSet;

                    /**
                     * 持续时间，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_continueTime;
                    bool m_continueTimeHasBeenSet;

                    /**
                     * 指标ID
                     */
                    int64_t m_metricID;
                    bool m_metricIDHasBeenSet;

                    /**
                     * 指标展示名称（对外）
                     */
                    std::string m_metricDisplayName;
                    bool m_metricDisplayNameHasBeenSet;

                    /**
                     * 周期
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 规则ID
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 指标单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 是否为高级指标，0：否；1：是
                     */
                    int64_t m_isAdvanced;
                    bool m_isAdvancedHasBeenSet;

                    /**
                     * 是否开通高级指标，0：否；1：是
                     */
                    int64_t m_isOpen;
                    bool m_isOpenHasBeenSet;

                    /**
                     * 产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 告警分级阈值配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmHierarchicalValue m_hierarchicalValue;
                    bool m_hierarchicalValueHasBeenSet;

                    /**
                     * 指标类型，用于区分动态指标
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
