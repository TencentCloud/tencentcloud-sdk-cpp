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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNDOMAINSTATISTICSREQUEST_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNDOMAINSTATISTICSREQUEST_H_

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
                * DescribeEcdnDomainStatistics请求参数结构体
                */
                class DescribeEcdnDomainStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeEcdnDomainStatisticsRequest();
                    ~DescribeEcdnDomainStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询起始时间，如：2019-12-13 00:00:00。
起止时间不超过90天。
                     * @return StartTime 查询起始时间，如：2019-12-13 00:00:00。
起止时间不超过90天。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询起始时间，如：2019-12-13 00:00:00。
起止时间不超过90天。
                     * @param _startTime 查询起始时间，如：2019-12-13 00:00:00。
起止时间不超过90天。
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
                     * 获取查询结束时间，如：2019-12-13 23:59:59。
起止时间不超过90天。
                     * @return EndTime 查询结束时间，如：2019-12-13 23:59:59。
起止时间不超过90天。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间，如：2019-12-13 23:59:59。
起止时间不超过90天。
                     * @param _endTime 查询结束时间，如：2019-12-13 23:59:59。
起止时间不超过90天。
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
                     * 获取统计指标名称:
flux：流量，单位为 byte
bandwidth：带宽，单位为 bps
request：请求数，单位为 次
                     * @return Metrics 统计指标名称:
flux：流量，单位为 byte
bandwidth：带宽，单位为 bps
request：请求数，单位为 次
                     * 
                     */
                    std::vector<std::string> GetMetrics() const;

                    /**
                     * 设置统计指标名称:
flux：流量，单位为 byte
bandwidth：带宽，单位为 bps
request：请求数，单位为 次
                     * @param _metrics 统计指标名称:
flux：流量，单位为 byte
bandwidth：带宽，单位为 bps
request：请求数，单位为 次
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
                     * 获取指定查询域名列表
                     * @return Domains 指定查询域名列表
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置指定查询域名列表
                     * @param _domains 指定查询域名列表
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
                     * 获取列表分页起始地址，默认0。
                     * @return Offset 列表分页起始地址，默认0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置列表分页起始地址，默认0。
                     * @param _offset 列表分页起始地址，默认0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取列表分页记录条数，默认1000，最大3000。
                     * @return Limit 列表分页记录条数，默认1000，最大3000。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置列表分页记录条数，默认1000，最大3000。
                     * @param _limit 列表分页记录条数，默认1000，最大3000。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

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
                     * 查询起始时间，如：2019-12-13 00:00:00。
起止时间不超过90天。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，如：2019-12-13 23:59:59。
起止时间不超过90天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 统计指标名称:
flux：流量，单位为 byte
bandwidth：带宽，单位为 bps
request：请求数，单位为 次
                     */
                    std::vector<std::string> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * 指定查询域名列表
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
                     * 列表分页起始地址，默认0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 列表分页记录条数，默认1000，最大3000。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

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

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNDOMAINSTATISTICSREQUEST_H_
