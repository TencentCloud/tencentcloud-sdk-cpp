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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBETOPDATAREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBETOPDATAREQUEST_H_

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
                * DescribeTopData请求参数结构体
                */
                class DescribeTopDataRequest : public AbstractModel
                {
                public:
                    DescribeTopDataRequest();
                    ~DescribeTopDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询起始日期：yyyy-MM-dd<br>仅支持按天粒度的数据查询，取入参中的天信息作为起始日期<br>返回大于等于起始日期当天 00:00:00 点产生的数据，如 StartTime为2018-09-04，返回数据的起始时间为2018-09-04 00:00:00<br>仅支持 90 天内数据查询</p>
                     * @return StartTime <p>查询起始日期：yyyy-MM-dd<br>仅支持按天粒度的数据查询，取入参中的天信息作为起始日期<br>返回大于等于起始日期当天 00:00:00 点产生的数据，如 StartTime为2018-09-04，返回数据的起始时间为2018-09-04 00:00:00<br>仅支持 90 天内数据查询</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询起始日期：yyyy-MM-dd<br>仅支持按天粒度的数据查询，取入参中的天信息作为起始日期<br>返回大于等于起始日期当天 00:00:00 点产生的数据，如 StartTime为2018-09-04，返回数据的起始时间为2018-09-04 00:00:00<br>仅支持 90 天内数据查询</p>
                     * @param _startTime <p>查询起始日期：yyyy-MM-dd<br>仅支持按天粒度的数据查询，取入参中的天信息作为起始日期<br>返回大于等于起始日期当天 00:00:00 点产生的数据，如 StartTime为2018-09-04，返回数据的起始时间为2018-09-04 00:00:00<br>仅支持 90 天内数据查询</p>
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
                     * 获取<p>查询结束日期：yyyy-MM-dd<br>仅支持按天粒度的数据查询，取入参中的天信息作为结束日期<br>返回小于等于结束日期当天 23:59:59 产生的数据，如EndTime为2018-09-05，返回数据的结束时间为2018-09-05 23:59:59<br>EndTime 需要大于等于 StartTime</p>
                     * @return EndTime <p>查询结束日期：yyyy-MM-dd<br>仅支持按天粒度的数据查询，取入参中的天信息作为结束日期<br>返回小于等于结束日期当天 23:59:59 产生的数据，如EndTime为2018-09-05，返回数据的结束时间为2018-09-05 23:59:59<br>EndTime 需要大于等于 StartTime</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束日期：yyyy-MM-dd<br>仅支持按天粒度的数据查询，取入参中的天信息作为结束日期<br>返回小于等于结束日期当天 23:59:59 产生的数据，如EndTime为2018-09-05，返回数据的结束时间为2018-09-05 23:59:59<br>EndTime 需要大于等于 StartTime</p>
                     * @param _endTime <p>查询结束日期：yyyy-MM-dd<br>仅支持按天粒度的数据查询，取入参中的天信息作为结束日期<br>返回小于等于结束日期当天 23:59:59 产生的数据，如EndTime为2018-09-05，返回数据的结束时间为2018-09-05 23:59:59<br>EndTime 需要大于等于 StartTime</p>
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
                     * 获取<p>排序对象，支持以下几种形式：<br>ip、ua_device、ua_browser、ua_os、referer</p>
                     * @return Metric <p>排序对象，支持以下几种形式：<br>ip、ua_device、ua_browser、ua_os、referer</p>
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置<p>排序对象，支持以下几种形式：<br>ip、ua_device、ua_browser、ua_os、referer</p>
                     * @param _metric <p>排序对象，支持以下几种形式：<br>ip、ua_device、ua_browser、ua_os、referer</p>
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
                     * 获取<p>排序使用的指标名称：<br>flux：Metric 为 host 时指代访问流量<br>request：Metric 为 host 时指代访问请求数</p>
                     * @return Filter <p>排序使用的指标名称：<br>flux：Metric 为 host 时指代访问流量<br>request：Metric 为 host 时指代访问请求数</p>
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置<p>排序使用的指标名称：<br>flux：Metric 为 host 时指代访问流量<br>request：Metric 为 host 时指代访问请求数</p>
                     * @param _filter <p>排序使用的指标名称：<br>flux：Metric 为 host 时指代访问流量<br>request：Metric 为 host 时指代访问请求数</p>
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>指定查询域名列表，最多可一次性查询 30 个加速域名明细</p>
                     * @return Domains <p>指定查询域名列表，最多可一次性查询 30 个加速域名明细</p>
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置<p>指定查询域名列表，最多可一次性查询 30 个加速域名明细</p>
                     * @param _domains <p>指定查询域名列表，最多可一次性查询 30 个加速域名明细</p>
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取<p>未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主</p>
                     * @return Project <p>未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主</p>
                     * 
                     */
                    int64_t GetProject() const;

                    /**
                     * 设置<p>未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主</p>
                     * @param _project <p>未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主</p>
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
                     * 获取<p>是否详细显示每个域名的的具体数值</p>
                     * @return Detail <p>是否详细显示每个域名的的具体数值</p>
                     * 
                     */
                    bool GetDetail() const;

                    /**
                     * 设置<p>是否详细显示每个域名的的具体数值</p>
                     * @param _detail <p>是否详细显示每个域名的的具体数值</p>
                     * 
                     */
                    void SetDetail(const bool& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取<p>指定服务地域查询，不填充表示查询中国境内 CDN 数据<br>mainland：指定查询中国境内 CDN 数据<br>overseas：指定查询中国境外 CDN 数据</p>
                     * @return Area <p>指定服务地域查询，不填充表示查询中国境内 CDN 数据<br>mainland：指定查询中国境内 CDN 数据<br>overseas：指定查询中国境外 CDN 数据</p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>指定服务地域查询，不填充表示查询中国境内 CDN 数据<br>mainland：指定查询中国境内 CDN 数据<br>overseas：指定查询中国境外 CDN 数据</p>
                     * @param _area <p>指定服务地域查询，不填充表示查询中国境内 CDN 数据<br>mainland：指定查询中国境内 CDN 数据<br>overseas：指定查询中国境外 CDN 数据</p>
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
                     * 获取<p>指定查询的产品数据，目前仅可使用cdn</p>
                     * @return Product <p>指定查询的产品数据，目前仅可使用cdn</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>指定查询的产品数据，目前仅可使用cdn</p>
                     * @param _product <p>指定查询的产品数据，目前仅可使用cdn</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * <p>查询起始日期：yyyy-MM-dd<br>仅支持按天粒度的数据查询，取入参中的天信息作为起始日期<br>返回大于等于起始日期当天 00:00:00 点产生的数据，如 StartTime为2018-09-04，返回数据的起始时间为2018-09-04 00:00:00<br>仅支持 90 天内数据查询</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束日期：yyyy-MM-dd<br>仅支持按天粒度的数据查询，取入参中的天信息作为结束日期<br>返回小于等于结束日期当天 23:59:59 产生的数据，如EndTime为2018-09-05，返回数据的结束时间为2018-09-05 23:59:59<br>EndTime 需要大于等于 StartTime</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>排序对象，支持以下几种形式：<br>ip、ua_device、ua_browser、ua_os、referer</p>
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * <p>排序使用的指标名称：<br>flux：Metric 为 host 时指代访问流量<br>request：Metric 为 host 时指代访问请求数</p>
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>指定查询域名列表，最多可一次性查询 30 个加速域名明细</p>
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * <p>未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主</p>
                     */
                    int64_t m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * <p>是否详细显示每个域名的的具体数值</p>
                     */
                    bool m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * <p>指定服务地域查询，不填充表示查询中国境内 CDN 数据<br>mainland：指定查询中国境内 CDN 数据<br>overseas：指定查询中国境外 CDN 数据</p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>指定查询的产品数据，目前仅可使用cdn</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBETOPDATAREQUEST_H_
