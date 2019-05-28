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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPDATAREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPDATAREQUEST_H_

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
                * ListTopData请求参数结构体
                */
                class ListTopDataRequest : public AbstractModel
                {
                public:
                    ListTopDataRequest();
                    ~ListTopDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询起始日期，如：2018-09-09 00:00:00
                     * @return StartTime 查询起始日期，如：2018-09-09 00:00:00
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询起始日期，如：2018-09-09 00:00:00
                     * @param StartTime 查询起始日期，如：2018-09-09 00:00:00
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询结束日期，如：2018-09-10 00:00:00
                     * @return EndTime 查询结束日期，如：2018-09-10 00:00:00
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束日期，如：2018-09-10 00:00:00
                     * @param EndTime 查询结束日期，如：2018-09-10 00:00:00
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取排序对象，支持以下几种形式：
Url：访问 URL 排序，带参数统计，支持的 Filter 为 flux、request（白名单功能）
Path：访问 URL 排序，不带参数统计，支持的 Filter 为 flux、request
District：省份排序，支持的 Filter 为 flux、request
Isp：运营商排序，支持的 Filter 为 flux、request
Host：域名访问数据排序，支持的 Filter 为：flux, request, bandwidth, fluxHitRate, 2XX, 3XX, 4XX, 5XX，具体状态码统计
originHost：域名回源数据排序，支持的 Filter 为 flux， request，bandwidth，origin_2XX，origin_3XX，oringin_4XX，origin_5XX，具体回源状态码统计
                     * @return Metric 排序对象，支持以下几种形式：
Url：访问 URL 排序，带参数统计，支持的 Filter 为 flux、request（白名单功能）
Path：访问 URL 排序，不带参数统计，支持的 Filter 为 flux、request
District：省份排序，支持的 Filter 为 flux、request
Isp：运营商排序，支持的 Filter 为 flux、request
Host：域名访问数据排序，支持的 Filter 为：flux, request, bandwidth, fluxHitRate, 2XX, 3XX, 4XX, 5XX，具体状态码统计
originHost：域名回源数据排序，支持的 Filter 为 flux， request，bandwidth，origin_2XX，origin_3XX，oringin_4XX，origin_5XX，具体回源状态码统计
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置排序对象，支持以下几种形式：
Url：访问 URL 排序，带参数统计，支持的 Filter 为 flux、request（白名单功能）
Path：访问 URL 排序，不带参数统计，支持的 Filter 为 flux、request
District：省份排序，支持的 Filter 为 flux、request
Isp：运营商排序，支持的 Filter 为 flux、request
Host：域名访问数据排序，支持的 Filter 为：flux, request, bandwidth, fluxHitRate, 2XX, 3XX, 4XX, 5XX，具体状态码统计
originHost：域名回源数据排序，支持的 Filter 为 flux， request，bandwidth，origin_2XX，origin_3XX，oringin_4XX，origin_5XX，具体回源状态码统计
                     * @param Metric 排序对象，支持以下几种形式：
Url：访问 URL 排序，带参数统计，支持的 Filter 为 flux、request（白名单功能）
Path：访问 URL 排序，不带参数统计，支持的 Filter 为 flux、request
District：省份排序，支持的 Filter 为 flux、request
Isp：运营商排序，支持的 Filter 为 flux、request
Host：域名访问数据排序，支持的 Filter 为：flux, request, bandwidth, fluxHitRate, 2XX, 3XX, 4XX, 5XX，具体状态码统计
originHost：域名回源数据排序，支持的 Filter 为 flux， request，bandwidth，origin_2XX，origin_3XX，oringin_4XX，origin_5XX，具体回源状态码统计
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取排序使用的指标名称：
flux：Metric 为 host 时指代访问流量，originHost 时指代回源流量
bandwidth：Metric 为 host 时指代访问带宽，originHost 时指代回源带宽
request：Metric 为 host 时指代访问请求数，originHost 时指代回源请求数
fluxHitRate：平均流量命中率
2XX：访问 2XX 状态码
3XX：访问 3XX 状态码
4XX：访问 4XX 状态码
5XX：访问 5XX 状态码
origin_2XX：回源 2XX 状态码
origin_3XX：回源 3XX 状态码
origin_4XX：回源 4XX 状态码
origin_5XX：回源 5XX 状态码
statusCode：指定访问状态码统计，在 Code 参数中填充指定状态码
OriginStatusCode：指定回源状态码统计，在 Code 参数中填充指定状态码
                     * @return Filter 排序使用的指标名称：
flux：Metric 为 host 时指代访问流量，originHost 时指代回源流量
bandwidth：Metric 为 host 时指代访问带宽，originHost 时指代回源带宽
request：Metric 为 host 时指代访问请求数，originHost 时指代回源请求数
fluxHitRate：平均流量命中率
2XX：访问 2XX 状态码
3XX：访问 3XX 状态码
4XX：访问 4XX 状态码
5XX：访问 5XX 状态码
origin_2XX：回源 2XX 状态码
origin_3XX：回源 3XX 状态码
origin_4XX：回源 4XX 状态码
origin_5XX：回源 5XX 状态码
statusCode：指定访问状态码统计，在 Code 参数中填充指定状态码
OriginStatusCode：指定回源状态码统计，在 Code 参数中填充指定状态码
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置排序使用的指标名称：
flux：Metric 为 host 时指代访问流量，originHost 时指代回源流量
bandwidth：Metric 为 host 时指代访问带宽，originHost 时指代回源带宽
request：Metric 为 host 时指代访问请求数，originHost 时指代回源请求数
fluxHitRate：平均流量命中率
2XX：访问 2XX 状态码
3XX：访问 3XX 状态码
4XX：访问 4XX 状态码
5XX：访问 5XX 状态码
origin_2XX：回源 2XX 状态码
origin_3XX：回源 3XX 状态码
origin_4XX：回源 4XX 状态码
origin_5XX：回源 5XX 状态码
statusCode：指定访问状态码统计，在 Code 参数中填充指定状态码
OriginStatusCode：指定回源状态码统计，在 Code 参数中填充指定状态码
                     * @param Filter 排序使用的指标名称：
flux：Metric 为 host 时指代访问流量，originHost 时指代回源流量
bandwidth：Metric 为 host 时指代访问带宽，originHost 时指代回源带宽
request：Metric 为 host 时指代访问请求数，originHost 时指代回源请求数
fluxHitRate：平均流量命中率
2XX：访问 2XX 状态码
3XX：访问 3XX 状态码
4XX：访问 4XX 状态码
5XX：访问 5XX 状态码
origin_2XX：回源 2XX 状态码
origin_3XX：回源 3XX 状态码
origin_4XX：回源 4XX 状态码
origin_5XX：回源 5XX 状态码
statusCode：指定访问状态码统计，在 Code 参数中填充指定状态码
OriginStatusCode：指定回源状态码统计，在 Code 参数中填充指定状态码
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取指定查询域名列表，最多可一次性查询 30 个加速域名明细
                     * @return Domains 指定查询域名列表，最多可一次性查询 30 个加速域名明细
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置指定查询域名列表，最多可一次性查询 30 个加速域名明细
                     * @param Domains 指定查询域名列表，最多可一次性查询 30 个加速域名明细
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取指定要查询的项目 ID，[前往查看项目 ID](https://console.cloud.tencent.com/project)
未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主
                     * @return Project 指定要查询的项目 ID，[前往查看项目 ID](https://console.cloud.tencent.com/project)
未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主
                     */
                    int64_t GetProject() const;

                    /**
                     * 设置指定要查询的项目 ID，[前往查看项目 ID](https://console.cloud.tencent.com/project)
未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主
                     * @param Project 指定要查询的项目 ID，[前往查看项目 ID](https://console.cloud.tencent.com/project)
未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主
                     */
                    void SetProject(const int64_t& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取多域名查询时，默认（false)返回所有域名汇总排序结果
Metric 为 Url、Path、District、Isp，Filter 为 flux、reqeust 时，可设置为 true，返回每一个 Domain 的排序数据
                     * @return Detail 多域名查询时，默认（false)返回所有域名汇总排序结果
Metric 为 Url、Path、District、Isp，Filter 为 flux、reqeust 时，可设置为 true，返回每一个 Domain 的排序数据
                     */
                    bool GetDetail() const;

                    /**
                     * 设置多域名查询时，默认（false)返回所有域名汇总排序结果
Metric 为 Url、Path、District、Isp，Filter 为 flux、reqeust 时，可设置为 true，返回每一个 Domain 的排序数据
                     * @param Detail 多域名查询时，默认（false)返回所有域名汇总排序结果
Metric 为 Url、Path、District、Isp，Filter 为 flux、reqeust 时，可设置为 true，返回每一个 Domain 的排序数据
                     */
                    void SetDetail(const bool& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Filter 为 statusCode、OriginStatusCode 时，填充指定状态码查询排序结果
                     * @return Code Filter 为 statusCode、OriginStatusCode 时，填充指定状态码查询排序结果
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Filter 为 statusCode、OriginStatusCode 时，填充指定状态码查询排序结果
                     * @param Code Filter 为 statusCode、OriginStatusCode 时，填充指定状态码查询排序结果
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                private:

                    /**
                     * 查询起始日期，如：2018-09-09 00:00:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束日期，如：2018-09-10 00:00:00
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 排序对象，支持以下几种形式：
Url：访问 URL 排序，带参数统计，支持的 Filter 为 flux、request（白名单功能）
Path：访问 URL 排序，不带参数统计，支持的 Filter 为 flux、request
District：省份排序，支持的 Filter 为 flux、request
Isp：运营商排序，支持的 Filter 为 flux、request
Host：域名访问数据排序，支持的 Filter 为：flux, request, bandwidth, fluxHitRate, 2XX, 3XX, 4XX, 5XX，具体状态码统计
originHost：域名回源数据排序，支持的 Filter 为 flux， request，bandwidth，origin_2XX，origin_3XX，oringin_4XX，origin_5XX，具体回源状态码统计
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 排序使用的指标名称：
flux：Metric 为 host 时指代访问流量，originHost 时指代回源流量
bandwidth：Metric 为 host 时指代访问带宽，originHost 时指代回源带宽
request：Metric 为 host 时指代访问请求数，originHost 时指代回源请求数
fluxHitRate：平均流量命中率
2XX：访问 2XX 状态码
3XX：访问 3XX 状态码
4XX：访问 4XX 状态码
5XX：访问 5XX 状态码
origin_2XX：回源 2XX 状态码
origin_3XX：回源 3XX 状态码
origin_4XX：回源 4XX 状态码
origin_5XX：回源 5XX 状态码
statusCode：指定访问状态码统计，在 Code 参数中填充指定状态码
OriginStatusCode：指定回源状态码统计，在 Code 参数中填充指定状态码
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 指定查询域名列表，最多可一次性查询 30 个加速域名明细
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 指定要查询的项目 ID，[前往查看项目 ID](https://console.cloud.tencent.com/project)
未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主
                     */
                    int64_t m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * 多域名查询时，默认（false)返回所有域名汇总排序结果
Metric 为 Url、Path、District、Isp，Filter 为 flux、reqeust 时，可设置为 true，返回每一个 Domain 的排序数据
                     */
                    bool m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Filter 为 statusCode、OriginStatusCode 时，填充指定状态码查询排序结果
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPDATAREQUEST_H_
