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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEBILLINGDATAREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEBILLINGDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
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
                     * 获取<p>查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间<br>根据指定时间粒度参数不同，会进行向前取整，如指定起始时间为 2018-09-04 10:40:00 按小时粒度查询，返回的第一个数据对应时间点为 2018-09-04 10:00:00<br>起始时间与结束时间间隔小于等于 90 天</p>
                     * @return StartTime <p>查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间<br>根据指定时间粒度参数不同，会进行向前取整，如指定起始时间为 2018-09-04 10:40:00 按小时粒度查询，返回的第一个数据对应时间点为 2018-09-04 10:00:00<br>起始时间与结束时间间隔小于等于 90 天</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间<br>根据指定时间粒度参数不同，会进行向前取整，如指定起始时间为 2018-09-04 10:40:00 按小时粒度查询，返回的第一个数据对应时间点为 2018-09-04 10:00:00<br>起始时间与结束时间间隔小于等于 90 天</p>
                     * @param _startTime <p>查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间<br>根据指定时间粒度参数不同，会进行向前取整，如指定起始时间为 2018-09-04 10:40:00 按小时粒度查询，返回的第一个数据对应时间点为 2018-09-04 10:00:00<br>起始时间与结束时间间隔小于等于 90 天</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间<br>根据指定时间粒度参数不同，会进行向前取整，如指定结束时间为  2018-09-04 10:40:00 按小时粒度查询时，返回的最后一个数据对应时间点为 2018-09-04 10:00:00<br>起始时间与结束时间间隔小于等于 90 天</p>
                     * @return EndTime <p>查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间<br>根据指定时间粒度参数不同，会进行向前取整，如指定结束时间为  2018-09-04 10:40:00 按小时粒度查询时，返回的最后一个数据对应时间点为 2018-09-04 10:00:00<br>起始时间与结束时间间隔小于等于 90 天</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间<br>根据指定时间粒度参数不同，会进行向前取整，如指定结束时间为  2018-09-04 10:40:00 按小时粒度查询时，返回的最后一个数据对应时间点为 2018-09-04 10:00:00<br>起始时间与结束时间间隔小于等于 90 天</p>
                     * @param _endTime <p>查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间<br>根据指定时间粒度参数不同，会进行向前取整，如指定结束时间为  2018-09-04 10:40:00 按小时粒度查询时，返回的最后一个数据对应时间点为 2018-09-04 10:00:00<br>起始时间与结束时间间隔小于等于 90 天</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>时间粒度，支持模式如下：<br>min：1 分钟粒度，查询区间需要小于等于 24 小时<br>5min：5 分钟粒度，查询区间需要小于等于 31 天(计费数据粒度)<br>hour：1 小时粒度，查询区间需要小于等于 31 天内<br>day：天粒度，查询区间需要大于 31 天</p><p>Area 字段为 overseas 时暂不支持1分钟粒度数据查询</p>
                     * @return Interval <p>时间粒度，支持模式如下：<br>min：1 分钟粒度，查询区间需要小于等于 24 小时<br>5min：5 分钟粒度，查询区间需要小于等于 31 天(计费数据粒度)<br>hour：1 小时粒度，查询区间需要小于等于 31 天内<br>day：天粒度，查询区间需要大于 31 天</p><p>Area 字段为 overseas 时暂不支持1分钟粒度数据查询</p>
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置<p>时间粒度，支持模式如下：<br>min：1 分钟粒度，查询区间需要小于等于 24 小时<br>5min：5 分钟粒度，查询区间需要小于等于 31 天(计费数据粒度)<br>hour：1 小时粒度，查询区间需要小于等于 31 天内<br>day：天粒度，查询区间需要大于 31 天</p><p>Area 字段为 overseas 时暂不支持1分钟粒度数据查询</p>
                     * @param _interval <p>时间粒度，支持模式如下：<br>min：1 分钟粒度，查询区间需要小于等于 24 小时<br>5min：5 分钟粒度，查询区间需要小于等于 31 天(计费数据粒度)<br>hour：1 小时粒度，查询区间需要小于等于 31 天内<br>day：天粒度，查询区间需要大于 31 天</p><p>Area 字段为 overseas 时暂不支持1分钟粒度数据查询</p>
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>指定域名查询计费数据</p>
                     * @return Domain <p>指定域名查询计费数据</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>指定域名查询计费数据</p>
                     * @param _domain <p>指定域名查询计费数据</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>指定项目 ID 查询，<a href="https://console.cloud.tencent.com/project">前往查看项目 ID</a><br>若 Domain 参数填充了具体域名信息，则返回该域名的计费数据，而非指定项目计费数据</p>
                     * @return Project <p>指定项目 ID 查询，<a href="https://console.cloud.tencent.com/project">前往查看项目 ID</a><br>若 Domain 参数填充了具体域名信息，则返回该域名的计费数据，而非指定项目计费数据</p>
                     * 
                     */
                    int64_t GetProject() const;

                    /**
                     * 设置<p>指定项目 ID 查询，<a href="https://console.cloud.tencent.com/project">前往查看项目 ID</a><br>若 Domain 参数填充了具体域名信息，则返回该域名的计费数据，而非指定项目计费数据</p>
                     * @param _project <p>指定项目 ID 查询，<a href="https://console.cloud.tencent.com/project">前往查看项目 ID</a><br>若 Domain 参数填充了具体域名信息，则返回该域名的计费数据，而非指定项目计费数据</p>
                     * 
                     */
                    void SetProject(const int64_t& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取<p>指定加速区域查询计费数据：<br>mainland：中国境内<br>overseas：中国境外<br>不填充时，默认为 mainland</p>
                     * @return Area <p>指定加速区域查询计费数据：<br>mainland：中国境内<br>overseas：中国境外<br>不填充时，默认为 mainland</p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>指定加速区域查询计费数据：<br>mainland：中国境内<br>overseas：中国境外<br>不填充时，默认为 mainland</p>
                     * @param _area <p>指定加速区域查询计费数据：<br>mainland：中国境内<br>overseas：中国境外<br>不填充时，默认为 mainland</p>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取<p>Area 为 overseas 时，指定国家/地区查询<br>省份、国家/地区编码可以查看 <a href="https://cloud.tencent.com/document/product/228/6316#.E7.9C.81.E4.BB.BD.E6.98.A0.E5.B0.84">省份编码映射</a><br>不填充时，查询所有国家/地区</p>
                     * @return District <p>Area 为 overseas 时，指定国家/地区查询<br>省份、国家/地区编码可以查看 <a href="https://cloud.tencent.com/document/product/228/6316#.E7.9C.81.E4.BB.BD.E6.98.A0.E5.B0.84">省份编码映射</a><br>不填充时，查询所有国家/地区</p>
                     * 
                     */
                    int64_t GetDistrict() const;

                    /**
                     * 设置<p>Area 为 overseas 时，指定国家/地区查询<br>省份、国家/地区编码可以查看 <a href="https://cloud.tencent.com/document/product/228/6316#.E7.9C.81.E4.BB.BD.E6.98.A0.E5.B0.84">省份编码映射</a><br>不填充时，查询所有国家/地区</p>
                     * @param _district <p>Area 为 overseas 时，指定国家/地区查询<br>省份、国家/地区编码可以查看 <a href="https://cloud.tencent.com/document/product/228/6316#.E7.9C.81.E4.BB.BD.E6.98.A0.E5.B0.84">省份编码映射</a><br>不填充时，查询所有国家/地区</p>
                     * 
                     */
                    void SetDistrict(const int64_t& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     * 
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取<p>计费统计类型<br>flux：计费流量<br>bandwidth：计费带宽<br>https：https请求数<br>默认为 bandwidth</p>
                     * @return Metric <p>计费统计类型<br>flux：计费流量<br>bandwidth：计费带宽<br>https：https请求数<br>默认为 bandwidth</p>
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置<p>计费统计类型<br>flux：计费流量<br>bandwidth：计费带宽<br>https：https请求数<br>默认为 bandwidth</p>
                     * @param _metric <p>计费统计类型<br>flux：计费流量<br>bandwidth：计费带宽<br>https：https请求数<br>默认为 bandwidth</p>
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取<p>指定查询的产品数据，可选为cdn或者ecdn，默认为cdn</p>
                     * @return Product <p>指定查询的产品数据，可选为cdn或者ecdn，默认为cdn</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>指定查询的产品数据，可选为cdn或者ecdn，默认为cdn</p>
                     * @param _product <p>指定查询的产品数据，可选为cdn或者ecdn，默认为cdn</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>指定查询时间的时区，默认UTC+08:00</p>
                     * @return TimeZone <p>指定查询时间的时区，默认UTC+08:00</p>
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置<p>指定查询时间的时区，默认UTC+08:00</p>
                     * @param _timeZone <p>指定查询时间的时区，默认UTC+08:00</p>
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * <p>查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间<br>根据指定时间粒度参数不同，会进行向前取整，如指定起始时间为 2018-09-04 10:40:00 按小时粒度查询，返回的第一个数据对应时间点为 2018-09-04 10:00:00<br>起始时间与结束时间间隔小于等于 90 天</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间<br>根据指定时间粒度参数不同，会进行向前取整，如指定结束时间为  2018-09-04 10:40:00 按小时粒度查询时，返回的最后一个数据对应时间点为 2018-09-04 10:00:00<br>起始时间与结束时间间隔小于等于 90 天</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>时间粒度，支持模式如下：<br>min：1 分钟粒度，查询区间需要小于等于 24 小时<br>5min：5 分钟粒度，查询区间需要小于等于 31 天(计费数据粒度)<br>hour：1 小时粒度，查询区间需要小于等于 31 天内<br>day：天粒度，查询区间需要大于 31 天</p><p>Area 字段为 overseas 时暂不支持1分钟粒度数据查询</p>
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>指定域名查询计费数据</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>指定项目 ID 查询，<a href="https://console.cloud.tencent.com/project">前往查看项目 ID</a><br>若 Domain 参数填充了具体域名信息，则返回该域名的计费数据，而非指定项目计费数据</p>
                     */
                    int64_t m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * <p>指定加速区域查询计费数据：<br>mainland：中国境内<br>overseas：中国境外<br>不填充时，默认为 mainland</p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>Area 为 overseas 时，指定国家/地区查询<br>省份、国家/地区编码可以查看 <a href="https://cloud.tencent.com/document/product/228/6316#.E7.9C.81.E4.BB.BD.E6.98.A0.E5.B0.84">省份编码映射</a><br>不填充时，查询所有国家/地区</p>
                     */
                    int64_t m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * <p>计费统计类型<br>flux：计费流量<br>bandwidth：计费带宽<br>https：https请求数<br>默认为 bandwidth</p>
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * <p>指定查询的产品数据，可选为cdn或者ecdn，默认为cdn</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>指定查询时间的时区，默认UTC+08:00</p>
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEBILLINGDATAREQUEST_H_
