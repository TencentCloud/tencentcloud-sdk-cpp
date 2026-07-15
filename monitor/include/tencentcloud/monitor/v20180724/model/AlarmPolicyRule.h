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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYRULE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyFilter.h>
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
                * 告警策略触发条件
                */
                class AlarmPolicyRule : public AbstractModel
                {
                public:
                    AlarmPolicyRule();
                    ~AlarmPolicyRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>指标名或事件名，支持的指标可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询，支持的事件可以从 <a href="https://cloud.tencent.com/document/product/248/51284">DescribeAlarmEvents</a> 查询 。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricName <p>指标名或事件名，支持的指标可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询，支持的事件可以从 <a href="https://cloud.tencent.com/document/product/248/51284">DescribeAlarmEvents</a> 查询 。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置<p>指标名或事件名，支持的指标可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询，支持的事件可以从 <a href="https://cloud.tencent.com/document/product/248/51284">DescribeAlarmEvents</a> 查询 。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricName <p>指标名或事件名，支持的指标可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询，支持的事件可以从 <a href="https://cloud.tencent.com/document/product/248/51284">DescribeAlarmEvents</a> 查询 。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取<p>秒数 统计周期，支持的值可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Period <p>秒数 统计周期，支持的值可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>秒数 统计周期，支持的值可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _period <p>秒数 统计周期，支持的值可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>英文运算符<br>intelligent=无阈值智能检测<br>eq=等于<br>ge=大于等于<br>gt=大于<br>le=小于等于<br>lt=小于<br>ne=不等于<br>day_increase=天同比增长<br>day_decrease=天同比下降<br>day_wave=天同比波动<br>week_increase=周同比增长<br>week_decrease=周同比下降<br>week_wave=周同比波动<br>cycle_increase=环比增长<br>cycle_decrease=环比下降<br>cycle_wave=环比波动<br>re=正则匹配<br>支持的值可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator <p>英文运算符<br>intelligent=无阈值智能检测<br>eq=等于<br>ge=大于等于<br>gt=大于<br>le=小于等于<br>lt=小于<br>ne=不等于<br>day_increase=天同比增长<br>day_decrease=天同比下降<br>day_wave=天同比波动<br>week_increase=周同比增长<br>week_decrease=周同比下降<br>week_wave=周同比波动<br>cycle_increase=环比增长<br>cycle_decrease=环比下降<br>cycle_wave=环比波动<br>re=正则匹配<br>支持的值可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>英文运算符<br>intelligent=无阈值智能检测<br>eq=等于<br>ge=大于等于<br>gt=大于<br>le=小于等于<br>lt=小于<br>ne=不等于<br>day_increase=天同比增长<br>day_decrease=天同比下降<br>day_wave=天同比波动<br>week_increase=周同比增长<br>week_decrease=周同比下降<br>week_wave=周同比波动<br>cycle_increase=环比增长<br>cycle_decrease=环比下降<br>cycle_wave=环比波动<br>re=正则匹配<br>支持的值可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operator <p>英文运算符<br>intelligent=无阈值智能检测<br>eq=等于<br>ge=大于等于<br>gt=大于<br>le=小于等于<br>lt=小于<br>ne=不等于<br>day_increase=天同比增长<br>day_decrease=天同比下降<br>day_wave=天同比波动<br>week_increase=周同比增长<br>week_decrease=周同比下降<br>week_wave=周同比波动<br>cycle_increase=环比增长<br>cycle_decrease=环比下降<br>cycle_wave=环比波动<br>re=正则匹配<br>支持的值可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>阈值，支持的范围可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value <p>阈值，支持的范围可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>阈值，支持的范围可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value <p>阈值，支持的范围可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>周期数 持续通知周期 1=持续1个周期 2=持续2个周期...，支持的值可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContinuePeriod <p>周期数 持续通知周期 1=持续1个周期 2=持续2个周期...，支持的值可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetContinuePeriod() const;

                    /**
                     * 设置<p>周期数 持续通知周期 1=持续1个周期 2=持续2个周期...，支持的值可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _continuePeriod <p>周期数 持续通知周期 1=持续1个周期 2=持续2个周期...，支持的值可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContinuePeriod(const int64_t& _continuePeriod);

                    /**
                     * 判断参数 ContinuePeriod 是否已赋值
                     * @return ContinuePeriod 是否已赋值
                     * 
                     */
                    bool ContinuePeriodHasBeenSet() const;

                    /**
                     * 获取<p>秒数 告警间隔  0=不重复 300=每5分钟告警一次 600=每10分钟告警一次 900=每15分钟告警一次 1800=每30分钟告警一次 3600=每1小时告警一次 7200=每2小时告警一次 10800=每3小时告警一次 21600=每6小时告警一次 43200=每12小时告警一次 86400=每1天告警一次</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoticeFrequency <p>秒数 告警间隔  0=不重复 300=每5分钟告警一次 600=每10分钟告警一次 900=每15分钟告警一次 1800=每30分钟告警一次 3600=每1小时告警一次 7200=每2小时告警一次 10800=每3小时告警一次 21600=每6小时告警一次 43200=每12小时告警一次 86400=每1天告警一次</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNoticeFrequency() const;

                    /**
                     * 设置<p>秒数 告警间隔  0=不重复 300=每5分钟告警一次 600=每10分钟告警一次 900=每15分钟告警一次 1800=每30分钟告警一次 3600=每1小时告警一次 7200=每2小时告警一次 10800=每3小时告警一次 21600=每6小时告警一次 43200=每12小时告警一次 86400=每1天告警一次</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noticeFrequency <p>秒数 告警间隔  0=不重复 300=每5分钟告警一次 600=每10分钟告警一次 900=每15分钟告警一次 1800=每30分钟告警一次 3600=每1小时告警一次 7200=每2小时告警一次 10800=每3小时告警一次 21600=每6小时告警一次 43200=每12小时告警一次 86400=每1天告警一次</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNoticeFrequency(const int64_t& _noticeFrequency);

                    /**
                     * 判断参数 NoticeFrequency 是否已赋值
                     * @return NoticeFrequency 是否已赋值
                     * 
                     */
                    bool NoticeFrequencyHasBeenSet() const;

                    /**
                     * 获取<p>告警频率是否指数增长 0=否 1=是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPowerNotice <p>告警频率是否指数增长 0=否 1=是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsPowerNotice() const;

                    /**
                     * 设置<p>告警频率是否指数增长 0=否 1=是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPowerNotice <p>告警频率是否指数增长 0=否 1=是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsPowerNotice(const int64_t& _isPowerNotice);

                    /**
                     * 判断参数 IsPowerNotice 是否已赋值
                     * @return IsPowerNotice 是否已赋值
                     * 
                     */
                    bool IsPowerNoticeHasBeenSet() const;

                    /**
                     * 获取<p>对于单个触发规则的过滤条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Filter <p>对于单个触发规则的过滤条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AlarmPolicyFilter GetFilter() const;

                    /**
                     * 设置<p>对于单个触发规则的过滤条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filter <p>对于单个触发规则的过滤条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilter(const AlarmPolicyFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>指标展示名，用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>指标展示名，用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>指标展示名，用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>指标展示名，用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>单位，用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unit <p>单位，用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置<p>单位，用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unit <p>单位，用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>触发条件类型 STATIC=静态阈值 DYNAMIC=动态阈值。创建或编辑策略时，如不填则默认为 STATIC。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleType <p>触发条件类型 STATIC=静态阈值 DYNAMIC=动态阈值。创建或编辑策略时，如不填则默认为 STATIC。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置<p>触发条件类型 STATIC=静态阈值 DYNAMIC=动态阈值。创建或编辑策略时，如不填则默认为 STATIC。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleType <p>触发条件类型 STATIC=静态阈值 DYNAMIC=动态阈值。创建或编辑策略时，如不填则默认为 STATIC。</p>
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

                    /**
                     * 获取<p>是否为高级指标，0否，1是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAdvanced <p>是否为高级指标，0否，1是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsAdvanced() const;

                    /**
                     * 设置<p>是否为高级指标，0否，1是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAdvanced <p>是否为高级指标，0否，1是</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>高级指标是否开通，0否，1是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsOpen <p>高级指标是否开通，0否，1是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsOpen() const;

                    /**
                     * 设置<p>高级指标是否开通，0否，1是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isOpen <p>高级指标是否开通，0否，1是</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>集成中心产品ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductId <p>集成中心产品ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>集成中心产品ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productId <p>集成中心产品ID</p>
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
                     * 获取<p>最大值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueMax <p>最大值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetValueMax() const;

                    /**
                     * 设置<p>最大值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueMax <p>最大值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueMax(const double& _valueMax);

                    /**
                     * 判断参数 ValueMax 是否已赋值
                     * @return ValueMax 是否已赋值
                     * 
                     */
                    bool ValueMaxHasBeenSet() const;

                    /**
                     * 获取<p>最小值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueMin <p>最小值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetValueMin() const;

                    /**
                     * 设置<p>最小值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueMin <p>最小值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueMin(const double& _valueMin);

                    /**
                     * 判断参数 ValueMin 是否已赋值
                     * @return ValueMin 是否已赋值
                     * 
                     */
                    bool ValueMinHasBeenSet() const;

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
                     * 获取<p>是否延迟指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLatenessMetric <p>是否延迟指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsLatenessMetric() const;

                    /**
                     * 设置<p>是否延迟指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLatenessMetric <p>是否延迟指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsLatenessMetric(const int64_t& _isLatenessMetric);

                    /**
                     * 判断参数 IsLatenessMetric 是否已赋值
                     * @return IsLatenessMetric 是否已赋值
                     * 
                     */
                    bool IsLatenessMetricHasBeenSet() const;

                private:

                    /**
                     * <p>指标名或事件名，支持的指标可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询，支持的事件可以从 <a href="https://cloud.tencent.com/document/product/248/51284">DescribeAlarmEvents</a> 查询 。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * <p>秒数 统计周期，支持的值可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>英文运算符<br>intelligent=无阈值智能检测<br>eq=等于<br>ge=大于等于<br>gt=大于<br>le=小于等于<br>lt=小于<br>ne=不等于<br>day_increase=天同比增长<br>day_decrease=天同比下降<br>day_wave=天同比波动<br>week_increase=周同比增长<br>week_decrease=周同比下降<br>week_wave=周同比波动<br>cycle_increase=环比增长<br>cycle_decrease=环比下降<br>cycle_wave=环比波动<br>re=正则匹配<br>支持的值可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>阈值，支持的范围可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>周期数 持续通知周期 1=持续1个周期 2=持续2个周期...，支持的值可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_continuePeriod;
                    bool m_continuePeriodHasBeenSet;

                    /**
                     * <p>秒数 告警间隔  0=不重复 300=每5分钟告警一次 600=每10分钟告警一次 900=每15分钟告警一次 1800=每30分钟告警一次 3600=每1小时告警一次 7200=每2小时告警一次 10800=每3小时告警一次 21600=每6小时告警一次 43200=每12小时告警一次 86400=每1天告警一次</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_noticeFrequency;
                    bool m_noticeFrequencyHasBeenSet;

                    /**
                     * <p>告警频率是否指数增长 0=否 1=是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isPowerNotice;
                    bool m_isPowerNoticeHasBeenSet;

                    /**
                     * <p>对于单个触发规则的过滤条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmPolicyFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>指标展示名，用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>单位，用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * <p>触发条件类型 STATIC=静态阈值 DYNAMIC=动态阈值。创建或编辑策略时，如不填则默认为 STATIC。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>是否为高级指标，0否，1是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isAdvanced;
                    bool m_isAdvancedHasBeenSet;

                    /**
                     * <p>高级指标是否开通，0否，1是</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isOpen;
                    bool m_isOpenHasBeenSet;

                    /**
                     * <p>集成中心产品ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>最大值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_valueMax;
                    bool m_valueMaxHasBeenSet;

                    /**
                     * <p>最小值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_valueMin;
                    bool m_valueMinHasBeenSet;

                    /**
                     * <p>告警分级阈值配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmHierarchicalValue m_hierarchicalValue;
                    bool m_hierarchicalValueHasBeenSet;

                    /**
                     * <p>是否延迟指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isLatenessMetric;
                    bool m_isLatenessMetricHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYRULE_H_
