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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_METRICALARM_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_METRICALARM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 弹性伸缩告警指标
                */
                class MetricAlarm : public AbstractModel
                {
                public:
                    MetricAlarm();
                    ~MetricAlarm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>比较运算符，可选值：<br><li>GREATER_THAN：大于</li><li>GREATER_THAN_OR_EQUAL_TO：大于或等于</li><li>LESS_THAN：小于</li><li> LESS_THAN_OR_EQUAL_TO：小于或等于</li><li> EQUAL_TO：等于</li> <li>NOT_EQUAL_TO：不等于</li></p>
                     * @return ComparisonOperator <p>比较运算符，可选值：<br><li>GREATER_THAN：大于</li><li>GREATER_THAN_OR_EQUAL_TO：大于或等于</li><li>LESS_THAN：小于</li><li> LESS_THAN_OR_EQUAL_TO：小于或等于</li><li> EQUAL_TO：等于</li> <li>NOT_EQUAL_TO：不等于</li></p>
                     * 
                     */
                    std::string GetComparisonOperator() const;

                    /**
                     * 设置<p>比较运算符，可选值：<br><li>GREATER_THAN：大于</li><li>GREATER_THAN_OR_EQUAL_TO：大于或等于</li><li>LESS_THAN：小于</li><li> LESS_THAN_OR_EQUAL_TO：小于或等于</li><li> EQUAL_TO：等于</li> <li>NOT_EQUAL_TO：不等于</li></p>
                     * @param _comparisonOperator <p>比较运算符，可选值：<br><li>GREATER_THAN：大于</li><li>GREATER_THAN_OR_EQUAL_TO：大于或等于</li><li>LESS_THAN：小于</li><li> LESS_THAN_OR_EQUAL_TO：小于或等于</li><li> EQUAL_TO：等于</li> <li>NOT_EQUAL_TO：不等于</li></p>
                     * 
                     */
                    void SetComparisonOperator(const std::string& _comparisonOperator);

                    /**
                     * 判断参数 ComparisonOperator 是否已赋值
                     * @return ComparisonOperator 是否已赋值
                     * 
                     */
                    bool ComparisonOperatorHasBeenSet() const;

                    /**
                     * 获取<p>指标名称，可选字段如下：<li>CPU_UTILIZATION：CPU利用率</li><li>MEM_UTILIZATION：内存利用率</li><li>LAN_TRAFFIC_OUT：内网出带宽</li><li>LAN_TRAFFIC_IN：内网入带宽</li><li>WAN_TRAFFIC_OUT：外网出带宽</li><li>WAN_TRAFFIC_IN：外网入带宽</li><li>TCP_CURR_ESTAB：TCP连接数</li></p><p>当前外网出入带宽属于 CLB 类指标，其他指标属于 CVM 类指标。修改指标名称时不允许跨类别修改。</p>
                     * @return MetricName <p>指标名称，可选字段如下：<li>CPU_UTILIZATION：CPU利用率</li><li>MEM_UTILIZATION：内存利用率</li><li>LAN_TRAFFIC_OUT：内网出带宽</li><li>LAN_TRAFFIC_IN：内网入带宽</li><li>WAN_TRAFFIC_OUT：外网出带宽</li><li>WAN_TRAFFIC_IN：外网入带宽</li><li>TCP_CURR_ESTAB：TCP连接数</li></p><p>当前外网出入带宽属于 CLB 类指标，其他指标属于 CVM 类指标。修改指标名称时不允许跨类别修改。</p>
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置<p>指标名称，可选字段如下：<li>CPU_UTILIZATION：CPU利用率</li><li>MEM_UTILIZATION：内存利用率</li><li>LAN_TRAFFIC_OUT：内网出带宽</li><li>LAN_TRAFFIC_IN：内网入带宽</li><li>WAN_TRAFFIC_OUT：外网出带宽</li><li>WAN_TRAFFIC_IN：外网入带宽</li><li>TCP_CURR_ESTAB：TCP连接数</li></p><p>当前外网出入带宽属于 CLB 类指标，其他指标属于 CVM 类指标。修改指标名称时不允许跨类别修改。</p>
                     * @param _metricName <p>指标名称，可选字段如下：<li>CPU_UTILIZATION：CPU利用率</li><li>MEM_UTILIZATION：内存利用率</li><li>LAN_TRAFFIC_OUT：内网出带宽</li><li>LAN_TRAFFIC_IN：内网入带宽</li><li>WAN_TRAFFIC_OUT：外网出带宽</li><li>WAN_TRAFFIC_IN：外网入带宽</li><li>TCP_CURR_ESTAB：TCP连接数</li></p><p>当前外网出入带宽属于 CLB 类指标，其他指标属于 CVM 类指标。修改指标名称时不允许跨类别修改。</p>
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
                     * 获取<p>告警阈值：<br><li>CPU_UTILIZATION：[1, 100]，单位：%</li><li>MEM_UTILIZATION：[1, 100]，单位：%</li><li>LAN_TRAFFIC_OUT：&gt;0，单位：Mbps </li><li>LAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>TCP_CURR_ESTAB：&gt;0, 单位：Count</li></p>
                     * @return Threshold <p>告警阈值：<br><li>CPU_UTILIZATION：[1, 100]，单位：%</li><li>MEM_UTILIZATION：[1, 100]，单位：%</li><li>LAN_TRAFFIC_OUT：&gt;0，单位：Mbps </li><li>LAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>TCP_CURR_ESTAB：&gt;0, 单位：Count</li></p>
                     * 
                     */
                    uint64_t GetThreshold() const;

                    /**
                     * 设置<p>告警阈值：<br><li>CPU_UTILIZATION：[1, 100]，单位：%</li><li>MEM_UTILIZATION：[1, 100]，单位：%</li><li>LAN_TRAFFIC_OUT：&gt;0，单位：Mbps </li><li>LAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>TCP_CURR_ESTAB：&gt;0, 单位：Count</li></p>
                     * @param _threshold <p>告警阈值：<br><li>CPU_UTILIZATION：[1, 100]，单位：%</li><li>MEM_UTILIZATION：[1, 100]，单位：%</li><li>LAN_TRAFFIC_OUT：&gt;0，单位：Mbps </li><li>LAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>TCP_CURR_ESTAB：&gt;0, 单位：Count</li></p>
                     * 
                     */
                    void SetThreshold(const uint64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取<p>时间周期，单位：秒，取值枚举值为60、300。</p>
                     * @return Period <p>时间周期，单位：秒，取值枚举值为60、300。</p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>时间周期，单位：秒，取值枚举值为60、300。</p>
                     * @param _period <p>时间周期，单位：秒，取值枚举值为60、300。</p>
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>重复次数。取值范围 [1, 10]</p>
                     * @return ContinuousTime <p>重复次数。取值范围 [1, 10]</p>
                     * 
                     */
                    uint64_t GetContinuousTime() const;

                    /**
                     * 设置<p>重复次数。取值范围 [1, 10]</p>
                     * @param _continuousTime <p>重复次数。取值范围 [1, 10]</p>
                     * 
                     */
                    void SetContinuousTime(const uint64_t& _continuousTime);

                    /**
                     * 判断参数 ContinuousTime 是否已赋值
                     * @return ContinuousTime 是否已赋值
                     * 
                     */
                    bool ContinuousTimeHasBeenSet() const;

                    /**
                     * 获取<p>统计类型，可选字段如下：<br><li>AVERAGE：平均值</li><li>MAXIMUM：最大值<li>MINIMUM：最小值</li><br> 默认取值：AVERAGE</p>
                     * @return Statistic <p>统计类型，可选字段如下：<br><li>AVERAGE：平均值</li><li>MAXIMUM：最大值<li>MINIMUM：最小值</li><br> 默认取值：AVERAGE</p>
                     * 
                     */
                    std::string GetStatistic() const;

                    /**
                     * 设置<p>统计类型，可选字段如下：<br><li>AVERAGE：平均值</li><li>MAXIMUM：最大值<li>MINIMUM：最小值</li><br> 默认取值：AVERAGE</p>
                     * @param _statistic <p>统计类型，可选字段如下：<br><li>AVERAGE：平均值</li><li>MAXIMUM：最大值<li>MINIMUM：最小值</li><br> 默认取值：AVERAGE</p>
                     * 
                     */
                    void SetStatistic(const std::string& _statistic);

                    /**
                     * 判断参数 Statistic 是否已赋值
                     * @return Statistic 是否已赋值
                     * 
                     */
                    bool StatisticHasBeenSet() const;

                    /**
                     * 获取<p>精确告警阈值，本参数不作为入参输入，仅用作查询接口出参：<br><li>CPU_UTILIZATION：(0, 100]，单位：%</li><li>MEM_UTILIZATION：(0, 100]，单位：%</li><li>LAN_TRAFFIC_OUT：&gt;0，单位：Mbps </li><li>LAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>TCP_CURR_ESTAB：&gt;0, 单位：Count</li></p>
                     * @return PreciseThreshold <p>精确告警阈值，本参数不作为入参输入，仅用作查询接口出参：<br><li>CPU_UTILIZATION：(0, 100]，单位：%</li><li>MEM_UTILIZATION：(0, 100]，单位：%</li><li>LAN_TRAFFIC_OUT：&gt;0，单位：Mbps </li><li>LAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>TCP_CURR_ESTAB：&gt;0, 单位：Count</li></p>
                     * 
                     */
                    double GetPreciseThreshold() const;

                    /**
                     * 设置<p>精确告警阈值，本参数不作为入参输入，仅用作查询接口出参：<br><li>CPU_UTILIZATION：(0, 100]，单位：%</li><li>MEM_UTILIZATION：(0, 100]，单位：%</li><li>LAN_TRAFFIC_OUT：&gt;0，单位：Mbps </li><li>LAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>TCP_CURR_ESTAB：&gt;0, 单位：Count</li></p>
                     * @param _preciseThreshold <p>精确告警阈值，本参数不作为入参输入，仅用作查询接口出参：<br><li>CPU_UTILIZATION：(0, 100]，单位：%</li><li>MEM_UTILIZATION：(0, 100]，单位：%</li><li>LAN_TRAFFIC_OUT：&gt;0，单位：Mbps </li><li>LAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>TCP_CURR_ESTAB：&gt;0, 单位：Count</li></p>
                     * 
                     */
                    void SetPreciseThreshold(const double& _preciseThreshold);

                    /**
                     * 判断参数 PreciseThreshold 是否已赋值
                     * @return PreciseThreshold 是否已赋值
                     * 
                     */
                    bool PreciseThresholdHasBeenSet() const;

                private:

                    /**
                     * <p>比较运算符，可选值：<br><li>GREATER_THAN：大于</li><li>GREATER_THAN_OR_EQUAL_TO：大于或等于</li><li>LESS_THAN：小于</li><li> LESS_THAN_OR_EQUAL_TO：小于或等于</li><li> EQUAL_TO：等于</li> <li>NOT_EQUAL_TO：不等于</li></p>
                     */
                    std::string m_comparisonOperator;
                    bool m_comparisonOperatorHasBeenSet;

                    /**
                     * <p>指标名称，可选字段如下：<li>CPU_UTILIZATION：CPU利用率</li><li>MEM_UTILIZATION：内存利用率</li><li>LAN_TRAFFIC_OUT：内网出带宽</li><li>LAN_TRAFFIC_IN：内网入带宽</li><li>WAN_TRAFFIC_OUT：外网出带宽</li><li>WAN_TRAFFIC_IN：外网入带宽</li><li>TCP_CURR_ESTAB：TCP连接数</li></p><p>当前外网出入带宽属于 CLB 类指标，其他指标属于 CVM 类指标。修改指标名称时不允许跨类别修改。</p>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * <p>告警阈值：<br><li>CPU_UTILIZATION：[1, 100]，单位：%</li><li>MEM_UTILIZATION：[1, 100]，单位：%</li><li>LAN_TRAFFIC_OUT：&gt;0，单位：Mbps </li><li>LAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>TCP_CURR_ESTAB：&gt;0, 单位：Count</li></p>
                     */
                    uint64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * <p>时间周期，单位：秒，取值枚举值为60、300。</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>重复次数。取值范围 [1, 10]</p>
                     */
                    uint64_t m_continuousTime;
                    bool m_continuousTimeHasBeenSet;

                    /**
                     * <p>统计类型，可选字段如下：<br><li>AVERAGE：平均值</li><li>MAXIMUM：最大值<li>MINIMUM：最小值</li><br> 默认取值：AVERAGE</p>
                     */
                    std::string m_statistic;
                    bool m_statisticHasBeenSet;

                    /**
                     * <p>精确告警阈值，本参数不作为入参输入，仅用作查询接口出参：<br><li>CPU_UTILIZATION：(0, 100]，单位：%</li><li>MEM_UTILIZATION：(0, 100]，单位：%</li><li>LAN_TRAFFIC_OUT：&gt;0，单位：Mbps </li><li>LAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>WAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>TCP_CURR_ESTAB：&gt;0, 单位：Count</li></p>
                     */
                    double m_preciseThreshold;
                    bool m_preciseThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_METRICALARM_H_
