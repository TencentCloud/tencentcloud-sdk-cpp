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
                     * 获取查询起始日期：yyyy-MM-dd HH:mm:ss
仅支持按天粒度的数据查询，取入参中的天信息作为起始日期
返回大于等于起始日期当天 00:00:00 点产生的数据，如 StartTime为2018-09-04 10:40:00，返回数据的起始时间为2018-09-04 00:00:00
仅支持 90 天内数据查询
                     * @return StartTime 查询起始日期：yyyy-MM-dd HH:mm:ss
仅支持按天粒度的数据查询，取入参中的天信息作为起始日期
返回大于等于起始日期当天 00:00:00 点产生的数据，如 StartTime为2018-09-04 10:40:00，返回数据的起始时间为2018-09-04 00:00:00
仅支持 90 天内数据查询
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询起始日期：yyyy-MM-dd HH:mm:ss
仅支持按天粒度的数据查询，取入参中的天信息作为起始日期
返回大于等于起始日期当天 00:00:00 点产生的数据，如 StartTime为2018-09-04 10:40:00，返回数据的起始时间为2018-09-04 00:00:00
仅支持 90 天内数据查询
                     * @param _startTime 查询起始日期：yyyy-MM-dd HH:mm:ss
仅支持按天粒度的数据查询，取入参中的天信息作为起始日期
返回大于等于起始日期当天 00:00:00 点产生的数据，如 StartTime为2018-09-04 10:40:00，返回数据的起始时间为2018-09-04 00:00:00
仅支持 90 天内数据查询
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
                     * 获取查询结束日期：yyyy-MM-dd HH:mm:ss
仅支持按天粒度的数据查询，取入参中的天信息作为结束日期
返回小于等于结束日期当天 23:59:59 产生的数据，如EndTime为2018-09-05 22:40:00，返回数据的结束时间为2018-09-05 23:59:59
EndTime 需要大于等于 StartTime
                     * @return EndTime 查询结束日期：yyyy-MM-dd HH:mm:ss
仅支持按天粒度的数据查询，取入参中的天信息作为结束日期
返回小于等于结束日期当天 23:59:59 产生的数据，如EndTime为2018-09-05 22:40:00，返回数据的结束时间为2018-09-05 23:59:59
EndTime 需要大于等于 StartTime
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束日期：yyyy-MM-dd HH:mm:ss
仅支持按天粒度的数据查询，取入参中的天信息作为结束日期
返回小于等于结束日期当天 23:59:59 产生的数据，如EndTime为2018-09-05 22:40:00，返回数据的结束时间为2018-09-05 23:59:59
EndTime 需要大于等于 StartTime
                     * @param _endTime 查询结束日期：yyyy-MM-dd HH:mm:ss
仅支持按天粒度的数据查询，取入参中的天信息作为结束日期
返回小于等于结束日期当天 23:59:59 产生的数据，如EndTime为2018-09-05 22:40:00，返回数据的结束时间为2018-09-05 23:59:59
EndTime 需要大于等于 StartTime
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
                     * 获取排序对象，支持以下几种形式：
ip、ua_device、ua_browser、ua_os、referer
                     * @return Metric 排序对象，支持以下几种形式：
ip、ua_device、ua_browser、ua_os、referer
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置排序对象，支持以下几种形式：
ip、ua_device、ua_browser、ua_os、referer
                     * @param _metric 排序对象，支持以下几种形式：
ip、ua_device、ua_browser、ua_os、referer
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
                     * 获取排序使用的指标名称：
flux：Metric 为 host 时指代访问流量
request：Metric 为 host 时指代访问请求数
                     * @return Filter 排序使用的指标名称：
flux：Metric 为 host 时指代访问流量
request：Metric 为 host 时指代访问请求数
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置排序使用的指标名称：
flux：Metric 为 host 时指代访问流量
request：Metric 为 host 时指代访问请求数
                     * @param _filter 排序使用的指标名称：
flux：Metric 为 host 时指代访问流量
request：Metric 为 host 时指代访问请求数
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
                     * 获取指定查询域名列表，最多可一次性查询 30 个加速域名明细
                     * @return Domains 指定查询域名列表，最多可一次性查询 30 个加速域名明细
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置指定查询域名列表，最多可一次性查询 30 个加速域名明细
                     * @param _domains 指定查询域名列表，最多可一次性查询 30 个加速域名明细
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
                     * 获取未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主
                     * @return Project 未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主
                     * 
                     */
                    int64_t GetProject() const;

                    /**
                     * 设置未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主
                     * @param _project 未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主
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
                     * 获取是否详细显示每个域名的的具体数值
                     * @return Detail 是否详细显示每个域名的的具体数值
                     * 
                     */
                    bool GetDetail() const;

                    /**
                     * 设置是否详细显示每个域名的的具体数值
                     * @param _detail 是否详细显示每个域名的的具体数值
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
                     * 获取指定服务地域查询，不填充表示查询中国境内 CDN 数据
mainland：指定查询中国境内 CDN 数据
overseas：指定查询中国境外 CDN 数据
                     * @return Area 指定服务地域查询，不填充表示查询中国境内 CDN 数据
mainland：指定查询中国境内 CDN 数据
overseas：指定查询中国境外 CDN 数据
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置指定服务地域查询，不填充表示查询中国境内 CDN 数据
mainland：指定查询中国境内 CDN 数据
overseas：指定查询中国境外 CDN 数据
                     * @param _area 指定服务地域查询，不填充表示查询中国境内 CDN 数据
mainland：指定查询中国境内 CDN 数据
overseas：指定查询中国境外 CDN 数据
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
                     * 获取指定查询的产品数据，目前仅可使用cdn
                     * @return Product 指定查询的产品数据，目前仅可使用cdn
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置指定查询的产品数据，目前仅可使用cdn
                     * @param _product 指定查询的产品数据，目前仅可使用cdn
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
                     * 查询起始日期：yyyy-MM-dd HH:mm:ss
仅支持按天粒度的数据查询，取入参中的天信息作为起始日期
返回大于等于起始日期当天 00:00:00 点产生的数据，如 StartTime为2018-09-04 10:40:00，返回数据的起始时间为2018-09-04 00:00:00
仅支持 90 天内数据查询
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束日期：yyyy-MM-dd HH:mm:ss
仅支持按天粒度的数据查询，取入参中的天信息作为结束日期
返回小于等于结束日期当天 23:59:59 产生的数据，如EndTime为2018-09-05 22:40:00，返回数据的结束时间为2018-09-05 23:59:59
EndTime 需要大于等于 StartTime
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 排序对象，支持以下几种形式：
ip、ua_device、ua_browser、ua_os、referer
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 排序使用的指标名称：
flux：Metric 为 host 时指代访问流量
request：Metric 为 host 时指代访问请求数
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 指定查询域名列表，最多可一次性查询 30 个加速域名明细
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主
                     */
                    int64_t m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * 是否详细显示每个域名的的具体数值
                     */
                    bool m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 指定服务地域查询，不填充表示查询中国境内 CDN 数据
mainland：指定查询中国境内 CDN 数据
overseas：指定查询中国境外 CDN 数据
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 指定查询的产品数据，目前仅可使用cdn
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBETOPDATAREQUEST_H_
