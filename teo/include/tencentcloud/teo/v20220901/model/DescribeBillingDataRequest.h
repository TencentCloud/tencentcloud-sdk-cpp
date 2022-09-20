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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBILLINGDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBILLINGDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/BillingDataFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeBillingData请求参数结构体
                */
                class DescribeBillingDataRequest : public AbstractModel
                {
                public:
                    DescribeBillingDataRequest();
                    ~DescribeBillingDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间。
                     * @return StartTime 起始时间。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间。
                     * @param StartTime 起始时间。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间。
                     * @return EndTime 结束时间。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。
                     * @param EndTime 结束时间。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取时间粒度, 支持指定以下几种粒度：
<ul>
<li>min：1分钟粒度；</li>
<li>5min：5分钟粒度；</li>
<li>hour：1小时粒度；</li>
<li>day：天粒度；</li>
</ul>
                     * @return Interval 时间粒度, 支持指定以下几种粒度：
<ul>
<li>min：1分钟粒度；</li>
<li>5min：5分钟粒度；</li>
<li>hour：1小时粒度；</li>
<li>day：天粒度；</li>
</ul>
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置时间粒度, 支持指定以下几种粒度：
<ul>
<li>min：1分钟粒度；</li>
<li>5min：5分钟粒度；</li>
<li>hour：1小时粒度；</li>
<li>day：天粒度；</li>
</ul>
                     * @param Interval 时间粒度, 支持指定以下几种粒度：
<ul>
<li>min：1分钟粒度；</li>
<li>5min：5分钟粒度；</li>
<li>hour：1小时粒度；</li>
<li>day：天粒度；</li>
</ul>
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取指标名,支持:
<ul>
<li>acc_flux: 内容加速流量用量；</li>
<li>quic_request: QUIC 请求数用量；</li>
<li>sec_flux: 安全流量用量；</li>
<li>sec_request_clean: 安全干净流量请求数；</li>
</ul>
                     * @return MetricName 指标名,支持:
<ul>
<li>acc_flux: 内容加速流量用量；</li>
<li>quic_request: QUIC 请求数用量；</li>
<li>sec_flux: 安全流量用量；</li>
<li>sec_request_clean: 安全干净流量请求数；</li>
</ul>
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名,支持:
<ul>
<li>acc_flux: 内容加速流量用量；</li>
<li>quic_request: QUIC 请求数用量；</li>
<li>sec_flux: 安全流量用量；</li>
<li>sec_request_clean: 安全干净流量请求数；</li>
</ul>
                     * @param MetricName 指标名,支持:
<ul>
<li>acc_flux: 内容加速流量用量；</li>
<li>quic_request: QUIC 请求数用量；</li>
<li>sec_flux: 安全流量用量；</li>
<li>sec_request_clean: 安全干净流量请求数；</li>
</ul>
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取筛选条件. 支持:
<ul>
<li>zone: 站点级数据；</li>
<li>plan: 套餐级数据；</li>
<li>service: l4 / l7分别筛选四七层数据；</li>
<li>tagKey: 标签Key；</li>
<li>tagValue: 标签Value。</li>
</ul>
                     * @return Filters 筛选条件. 支持:
<ul>
<li>zone: 站点级数据；</li>
<li>plan: 套餐级数据；</li>
<li>service: l4 / l7分别筛选四七层数据；</li>
<li>tagKey: 标签Key；</li>
<li>tagValue: 标签Value。</li>
</ul>
                     */
                    std::vector<BillingDataFilter> GetFilters() const;

                    /**
                     * 设置筛选条件. 支持:
<ul>
<li>zone: 站点级数据；</li>
<li>plan: 套餐级数据；</li>
<li>service: l4 / l7分别筛选四七层数据；</li>
<li>tagKey: 标签Key；</li>
<li>tagValue: 标签Value。</li>
</ul>
                     * @param Filters 筛选条件. 支持:
<ul>
<li>zone: 站点级数据；</li>
<li>plan: 套餐级数据；</li>
<li>service: l4 / l7分别筛选四七层数据；</li>
<li>tagKey: 标签Key；</li>
<li>tagValue: 标签Value。</li>
</ul>
                     */
                    void SetFilters(const std::vector<BillingDataFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 起始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 时间粒度, 支持指定以下几种粒度：
<ul>
<li>min：1分钟粒度；</li>
<li>5min：5分钟粒度；</li>
<li>hour：1小时粒度；</li>
<li>day：天粒度；</li>
</ul>
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 指标名,支持:
<ul>
<li>acc_flux: 内容加速流量用量；</li>
<li>quic_request: QUIC 请求数用量；</li>
<li>sec_flux: 安全流量用量；</li>
<li>sec_request_clean: 安全干净流量请求数；</li>
</ul>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 筛选条件. 支持:
<ul>
<li>zone: 站点级数据；</li>
<li>plan: 套餐级数据；</li>
<li>service: l4 / l7分别筛选四七层数据；</li>
<li>tagKey: 标签Key；</li>
<li>tagValue: 标签Value。</li>
</ul>
                     */
                    std::vector<BillingDataFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBILLINGDATAREQUEST_H_
