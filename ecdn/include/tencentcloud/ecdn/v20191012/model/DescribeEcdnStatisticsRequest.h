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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNSTATISTICSREQUEST_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * DescribeEcdnStatistics请求参数结构体
                */
                class DescribeEcdnStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeEcdnStatisticsRequest();
                    ~DescribeEcdnStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询起始时间，如：2019-12-13 00:00:00
                     * @return StartTime 查询起始时间，如：2019-12-13 00:00:00
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询起始时间，如：2019-12-13 00:00:00
                     * @param _startTime 查询起始时间，如：2019-12-13 00:00:00
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
                     * 获取查询结束时间，如：2019-12-13 23:59:59
                     * @return EndTime 查询结束时间，如：2019-12-13 23:59:59
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间，如：2019-12-13 23:59:59
                     * @param _endTime 查询结束时间，如：2019-12-13 23:59:59
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
                     * 获取指定查询指标，支持的类型有：
flux：流量，单位为 byte
bandwidth：带宽，单位为 bps
request：请求数，单位为 次
2xx：返回 2xx 状态码汇总或者 2 开头状态码数据，单位为 个
3xx：返回 3xx 状态码汇总或者 3 开头状态码数据，单位为 个
4xx：返回 4xx 状态码汇总或者 4 开头状态码数据，单位为 个
5xx：返回 5xx 状态码汇总或者 5 开头状态码数据，单位为 个
                     * @return Metrics 指定查询指标，支持的类型有：
flux：流量，单位为 byte
bandwidth：带宽，单位为 bps
request：请求数，单位为 次
2xx：返回 2xx 状态码汇总或者 2 开头状态码数据，单位为 个
3xx：返回 3xx 状态码汇总或者 3 开头状态码数据，单位为 个
4xx：返回 4xx 状态码汇总或者 4 开头状态码数据，单位为 个
5xx：返回 5xx 状态码汇总或者 5 开头状态码数据，单位为 个
                     * 
                     */
                    std::vector<std::string> GetMetrics() const;

                    /**
                     * 设置指定查询指标，支持的类型有：
flux：流量，单位为 byte
bandwidth：带宽，单位为 bps
request：请求数，单位为 次
2xx：返回 2xx 状态码汇总或者 2 开头状态码数据，单位为 个
3xx：返回 3xx 状态码汇总或者 3 开头状态码数据，单位为 个
4xx：返回 4xx 状态码汇总或者 4 开头状态码数据，单位为 个
5xx：返回 5xx 状态码汇总或者 5 开头状态码数据，单位为 个
                     * @param _metrics 指定查询指标，支持的类型有：
flux：流量，单位为 byte
bandwidth：带宽，单位为 bps
request：请求数，单位为 次
2xx：返回 2xx 状态码汇总或者 2 开头状态码数据，单位为 个
3xx：返回 3xx 状态码汇总或者 3 开头状态码数据，单位为 个
4xx：返回 4xx 状态码汇总或者 4 开头状态码数据，单位为 个
5xx：返回 5xx 状态码汇总或者 5 开头状态码数据，单位为 个
                     * 
                     */
                    void SetMetrics(const std::vector<std::string>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取时间粒度，支持以下几种模式：
1 天	 1，5，15，30，60，120，240，1440 
2 ~ 3 天	15，30，60，120，240，1440
4 ~ 7 天	30，60，120，240，1440
8 ~ 31 天	 60，120，240，1440
                     * @return Interval 时间粒度，支持以下几种模式：
1 天	 1，5，15，30，60，120，240，1440 
2 ~ 3 天	15，30，60，120，240，1440
4 ~ 7 天	30，60，120，240，1440
8 ~ 31 天	 60，120，240，1440
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置时间粒度，支持以下几种模式：
1 天	 1，5，15，30，60，120，240，1440 
2 ~ 3 天	15，30，60，120，240，1440
4 ~ 7 天	30，60，120，240，1440
8 ~ 31 天	 60，120，240，1440
                     * @param _interval 时间粒度，支持以下几种模式：
1 天	 1，5，15，30，60，120，240，1440 
2 ~ 3 天	15，30，60，120，240，1440
4 ~ 7 天	30，60，120，240，1440
8 ~ 31 天	 60，120，240，1440
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取指定查询域名列表

最多可一次性查询30个加速域名。
                     * @return Domains 指定查询域名列表

最多可一次性查询30个加速域名。
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置指定查询域名列表

最多可一次性查询30个加速域名。
                     * @param _domains 指定查询域名列表

最多可一次性查询30个加速域名。
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
                     * 获取指定要查询的项目 ID，[前往查看项目 ID](https://console.cloud.tencent.com/project)
未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主
                     * @return Projects 指定要查询的项目 ID，[前往查看项目 ID](https://console.cloud.tencent.com/project)
未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主
                     * 
                     */
                    std::vector<int64_t> GetProjects() const;

                    /**
                     * 设置指定要查询的项目 ID，[前往查看项目 ID](https://console.cloud.tencent.com/project)
未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主
                     * @param _projects 指定要查询的项目 ID，[前往查看项目 ID](https://console.cloud.tencent.com/project)
未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主
                     * 
                     */
                    void SetProjects(const std::vector<int64_t>& _projects);

                    /**
                     * 判断参数 Projects 是否已赋值
                     * @return Projects 是否已赋值
                     * 
                     */
                    bool ProjectsHasBeenSet() const;

                    /**
                     * 获取统计区域:
mainland: 境内
oversea: 境外
global: 全部
默认 global
                     * @return Area 统计区域:
mainland: 境内
oversea: 境外
global: 全部
默认 global
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置统计区域:
mainland: 境内
oversea: 境外
global: 全部
默认 global
                     * @param _area 统计区域:
mainland: 境内
oversea: 境外
global: 全部
默认 global
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 查询起始时间，如：2019-12-13 00:00:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，如：2019-12-13 23:59:59
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指定查询指标，支持的类型有：
flux：流量，单位为 byte
bandwidth：带宽，单位为 bps
request：请求数，单位为 次
2xx：返回 2xx 状态码汇总或者 2 开头状态码数据，单位为 个
3xx：返回 3xx 状态码汇总或者 3 开头状态码数据，单位为 个
4xx：返回 4xx 状态码汇总或者 4 开头状态码数据，单位为 个
5xx：返回 5xx 状态码汇总或者 5 开头状态码数据，单位为 个
                     */
                    std::vector<std::string> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * 时间粒度，支持以下几种模式：
1 天	 1，5，15，30，60，120，240，1440 
2 ~ 3 天	15，30，60，120，240，1440
4 ~ 7 天	30，60，120，240，1440
8 ~ 31 天	 60，120，240，1440
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 指定查询域名列表

最多可一次性查询30个加速域名。
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 指定要查询的项目 ID，[前往查看项目 ID](https://console.cloud.tencent.com/project)
未填充域名情况下，指定项目查询，若填充了具体域名信息，以域名为主
                     */
                    std::vector<int64_t> m_projects;
                    bool m_projectsHasBeenSet;

                    /**
                     * 统计区域:
mainland: 境内
oversea: 境外
global: 全部
默认 global
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNSTATISTICSREQUEST_H_
