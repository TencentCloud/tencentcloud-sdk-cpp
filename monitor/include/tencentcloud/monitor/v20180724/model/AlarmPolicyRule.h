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
                     * 获取指标名或事件名，支持的指标可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询，支持的事件可以从 [DescribeAlarmEvents](https://cloud.tencent.com/document/product/248/51284) 查询 。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricName 指标名或事件名，支持的指标可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询，支持的事件可以从 [DescribeAlarmEvents](https://cloud.tencent.com/document/product/248/51284) 查询 。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名或事件名，支持的指标可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询，支持的事件可以从 [DescribeAlarmEvents](https://cloud.tencent.com/document/product/248/51284) 查询 。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MetricName 指标名或事件名，支持的指标可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询，支持的事件可以从 [DescribeAlarmEvents](https://cloud.tencent.com/document/product/248/51284) 查询 。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取秒数 统计周期，支持的值可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Period 秒数 统计周期，支持的值可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置秒数 统计周期，支持的值可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Period 秒数 统计周期，支持的值可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取英文运算符
intelligent=无阈值智能检测
eq=等于
ge=大于等于
gt=大于
le=小于等于
lt=小于
ne=不等于
day_increase=天同比增长
day_decrease=天同比下降
day_wave=天同比波动
week_increase=周同比增长
week_decrease=周同比下降
week_wave=周同比波动
cycle_increase=环比增长
cycle_decrease=环比下降
cycle_wave=环比波动
re=正则匹配
支持的值可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 英文运算符
intelligent=无阈值智能检测
eq=等于
ge=大于等于
gt=大于
le=小于等于
lt=小于
ne=不等于
day_increase=天同比增长
day_decrease=天同比下降
day_wave=天同比波动
week_increase=周同比增长
week_decrease=周同比下降
week_wave=周同比波动
cycle_increase=环比增长
cycle_decrease=环比下降
cycle_wave=环比波动
re=正则匹配
支持的值可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置英文运算符
intelligent=无阈值智能检测
eq=等于
ge=大于等于
gt=大于
le=小于等于
lt=小于
ne=不等于
day_increase=天同比增长
day_decrease=天同比下降
day_wave=天同比波动
week_increase=周同比增长
week_decrease=周同比下降
week_wave=周同比波动
cycle_increase=环比增长
cycle_decrease=环比下降
cycle_wave=环比波动
re=正则匹配
支持的值可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Operator 英文运算符
intelligent=无阈值智能检测
eq=等于
ge=大于等于
gt=大于
le=小于等于
lt=小于
ne=不等于
day_increase=天同比增长
day_decrease=天同比下降
day_wave=天同比波动
week_increase=周同比增长
week_decrease=周同比下降
week_wave=周同比波动
cycle_increase=环比增长
cycle_decrease=环比下降
cycle_wave=环比波动
re=正则匹配
支持的值可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取阈值，支持的范围可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 阈值，支持的范围可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetValue() const;

                    /**
                     * 设置阈值，支持的范围可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Value 阈值，支持的范围可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取周期数 持续通知周期 1=持续1个周期 2=持续2个周期...，支持的值可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContinuePeriod 周期数 持续通知周期 1=持续1个周期 2=持续2个周期...，支持的值可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetContinuePeriod() const;

                    /**
                     * 设置周期数 持续通知周期 1=持续1个周期 2=持续2个周期...，支持的值可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ContinuePeriod 周期数 持续通知周期 1=持续1个周期 2=持续2个周期...，支持的值可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContinuePeriod(const int64_t& _continuePeriod);

                    /**
                     * 判断参数 ContinuePeriod 是否已赋值
                     * @return ContinuePeriod 是否已赋值
                     */
                    bool ContinuePeriodHasBeenSet() const;

                    /**
                     * 获取秒数 告警间隔  0=不重复 300=每5分钟告警一次 600=每10分钟告警一次 900=每15分钟告警一次 1800=每30分钟告警一次 3600=每1小时告警一次 7200=每2小时告警一次 10800=每3小时告警一次 21600=每6小时告警一次 43200=每12小时告警一次 86400=每1天告警一次
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoticeFrequency 秒数 告警间隔  0=不重复 300=每5分钟告警一次 600=每10分钟告警一次 900=每15分钟告警一次 1800=每30分钟告警一次 3600=每1小时告警一次 7200=每2小时告警一次 10800=每3小时告警一次 21600=每6小时告警一次 43200=每12小时告警一次 86400=每1天告警一次
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetNoticeFrequency() const;

                    /**
                     * 设置秒数 告警间隔  0=不重复 300=每5分钟告警一次 600=每10分钟告警一次 900=每15分钟告警一次 1800=每30分钟告警一次 3600=每1小时告警一次 7200=每2小时告警一次 10800=每3小时告警一次 21600=每6小时告警一次 43200=每12小时告警一次 86400=每1天告警一次
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NoticeFrequency 秒数 告警间隔  0=不重复 300=每5分钟告警一次 600=每10分钟告警一次 900=每15分钟告警一次 1800=每30分钟告警一次 3600=每1小时告警一次 7200=每2小时告警一次 10800=每3小时告警一次 21600=每6小时告警一次 43200=每12小时告警一次 86400=每1天告警一次
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNoticeFrequency(const int64_t& _noticeFrequency);

                    /**
                     * 判断参数 NoticeFrequency 是否已赋值
                     * @return NoticeFrequency 是否已赋值
                     */
                    bool NoticeFrequencyHasBeenSet() const;

                    /**
                     * 获取告警频率是否指数增长 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPowerNotice 告警频率是否指数增长 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIsPowerNotice() const;

                    /**
                     * 设置告警频率是否指数增长 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsPowerNotice 告警频率是否指数增长 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsPowerNotice(const int64_t& _isPowerNotice);

                    /**
                     * 判断参数 IsPowerNotice 是否已赋值
                     * @return IsPowerNotice 是否已赋值
                     */
                    bool IsPowerNoticeHasBeenSet() const;

                    /**
                     * 获取对于单个触发规则的过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Filter 对于单个触发规则的过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmPolicyFilter GetFilter() const;

                    /**
                     * 设置对于单个触发规则的过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Filter 对于单个触发规则的过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFilter(const AlarmPolicyFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取指标展示名，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 指标展示名，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置指标展示名，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 指标展示名，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取单位，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unit 单位，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置单位，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Unit 单位，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取触发条件类型 STATIC=静态阈值 DYNAMIC=动态阈值。创建或编辑策略时，如不填则默认为 STATIC。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleType 触发条件类型 STATIC=静态阈值 DYNAMIC=动态阈值。创建或编辑策略时，如不填则默认为 STATIC。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置触发条件类型 STATIC=静态阈值 DYNAMIC=动态阈值。创建或编辑策略时，如不填则默认为 STATIC。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleType 触发条件类型 STATIC=静态阈值 DYNAMIC=动态阈值。创建或编辑策略时，如不填则默认为 STATIC。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取是否为高级指标，0否，1是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAdvanced 是否为高级指标，0否，1是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIsAdvanced() const;

                    /**
                     * 设置是否为高级指标，0否，1是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsAdvanced 是否为高级指标，0否，1是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsAdvanced(const int64_t& _isAdvanced);

                    /**
                     * 判断参数 IsAdvanced 是否已赋值
                     * @return IsAdvanced 是否已赋值
                     */
                    bool IsAdvancedHasBeenSet() const;

                    /**
                     * 获取高级指标是否开通，0否，1是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsOpen 高级指标是否开通，0否，1是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIsOpen() const;

                    /**
                     * 设置高级指标是否开通，0否，1是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsOpen 高级指标是否开通，0否，1是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsOpen(const int64_t& _isOpen);

                    /**
                     * 判断参数 IsOpen 是否已赋值
                     * @return IsOpen 是否已赋值
                     */
                    bool IsOpenHasBeenSet() const;

                    /**
                     * 获取集成中心产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductId 集成中心产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置集成中心产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProductId 集成中心产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                private:

                    /**
                     * 指标名或事件名，支持的指标可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询，支持的事件可以从 [DescribeAlarmEvents](https://cloud.tencent.com/document/product/248/51284) 查询 。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 秒数 统计周期，支持的值可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 英文运算符
intelligent=无阈值智能检测
eq=等于
ge=大于等于
gt=大于
le=小于等于
lt=小于
ne=不等于
day_increase=天同比增长
day_decrease=天同比下降
day_wave=天同比波动
week_increase=周同比增长
week_decrease=周同比下降
week_wave=周同比波动
cycle_increase=环比增长
cycle_decrease=环比下降
cycle_wave=环比波动
re=正则匹配
支持的值可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 阈值，支持的范围可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 周期数 持续通知周期 1=持续1个周期 2=持续2个周期...，支持的值可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_continuePeriod;
                    bool m_continuePeriodHasBeenSet;

                    /**
                     * 秒数 告警间隔  0=不重复 300=每5分钟告警一次 600=每10分钟告警一次 900=每15分钟告警一次 1800=每30分钟告警一次 3600=每1小时告警一次 7200=每2小时告警一次 10800=每3小时告警一次 21600=每6小时告警一次 43200=每12小时告警一次 86400=每1天告警一次
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_noticeFrequency;
                    bool m_noticeFrequencyHasBeenSet;

                    /**
                     * 告警频率是否指数增长 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isPowerNotice;
                    bool m_isPowerNoticeHasBeenSet;

                    /**
                     * 对于单个触发规则的过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmPolicyFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 指标展示名，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 单位，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 触发条件类型 STATIC=静态阈值 DYNAMIC=动态阈值。创建或编辑策略时，如不填则默认为 STATIC。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 是否为高级指标，0否，1是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isAdvanced;
                    bool m_isAdvancedHasBeenSet;

                    /**
                     * 高级指标是否开通，0否，1是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isOpen;
                    bool m_isOpenHasBeenSet;

                    /**
                     * 集成中心产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYRULE_H_
