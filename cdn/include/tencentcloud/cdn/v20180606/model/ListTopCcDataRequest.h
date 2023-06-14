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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPCCDATAREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPCCDATAREQUEST_H_

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
                * ListTopCcData请求参数结构体
                */
                class ListTopCcDataRequest : public AbstractModel
                {
                public:
                    ListTopCcDataRequest();
                    ~ListTopCcDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询Top数据的开始时间，格式为：2020-01-01 00:00:00
                     * @return StartTime 查询Top数据的开始时间，格式为：2020-01-01 00:00:00
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询Top数据的开始时间，格式为：2020-01-01 00:00:00
                     * @param _startTime 查询Top数据的开始时间，格式为：2020-01-01 00:00:00
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
                     * 获取查询Top数据的结束时间，格式为：2020-01-01 23:59:59
支持 90 天内数据查询，不传此参数，表示查当天数据
时间跨度要小于等于7天
                     * @return EndTime 查询Top数据的结束时间，格式为：2020-01-01 23:59:59
支持 90 天内数据查询，不传此参数，表示查当天数据
时间跨度要小于等于7天
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询Top数据的结束时间，格式为：2020-01-01 23:59:59
支持 90 天内数据查询，不传此参数，表示查当天数据
时间跨度要小于等于7天
                     * @param _endTime 查询Top数据的结束时间，格式为：2020-01-01 23:59:59
支持 90 天内数据查询，不传此参数，表示查当天数据
时间跨度要小于等于7天
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
                     * 获取域名，不传此参数，表示查询账号级别数据
                     * @return Domain 域名，不传此参数，表示查询账号级别数据
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名，不传此参数，表示查询账号级别数据
                     * @param _domain 域名，不传此参数，表示查询账号级别数据
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
                     * 获取统计指标：
ip_url : Top IP+URL 默认值
ua :  Top UA
                     * @return Metric 统计指标：
ip_url : Top IP+URL 默认值
ua :  Top UA
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置统计指标：
ip_url : Top IP+URL 默认值
ua :  Top UA
                     * @param _metric 统计指标：
ip_url : Top IP+URL 默认值
ua :  Top UA
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
                     * 获取cdn表示CDN数据，默认值
ecdn表示ECDN数据
                     * @return Source cdn表示CDN数据，默认值
ecdn表示ECDN数据
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置cdn表示CDN数据，默认值
ecdn表示ECDN数据
                     * @param _source cdn表示CDN数据，默认值
ecdn表示ECDN数据
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取域名列表，不传此参数，表示查询账号级别数据
                     * @return Domains 域名列表，不传此参数，表示查询账号级别数据
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置域名列表，不传此参数，表示查询账号级别数据
                     * @param _domains 域名列表，不传此参数，表示查询账号级别数据
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
                     * 获取执行动作，取值为：intercept/redirect/observe
分别表示：拦截/重定向/观察
为空表示查询所有执行动作数据
                     * @return ActionName 执行动作，取值为：intercept/redirect/observe
分别表示：拦截/重定向/观察
为空表示查询所有执行动作数据
                     * 
                     */
                    std::string GetActionName() const;

                    /**
                     * 设置执行动作，取值为：intercept/redirect/observe
分别表示：拦截/重定向/观察
为空表示查询所有执行动作数据
                     * @param _actionName 执行动作，取值为：intercept/redirect/observe
分别表示：拦截/重定向/观察
为空表示查询所有执行动作数据
                     * 
                     */
                    void SetActionName(const std::string& _actionName);

                    /**
                     * 判断参数 ActionName 是否已赋值
                     * @return ActionName 是否已赋值
                     * 
                     */
                    bool ActionNameHasBeenSet() const;

                    /**
                     * 获取地域：mainland或overseas，表示国内或海外，不填写默认表示国内
                     * @return Area 地域：mainland或overseas，表示国内或海外，不填写默认表示国内
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地域：mainland或overseas，表示国内或海外，不填写默认表示国内
                     * @param _area 地域：mainland或overseas，表示国内或海外，不填写默认表示国内
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
                     * 查询Top数据的开始时间，格式为：2020-01-01 00:00:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询Top数据的结束时间，格式为：2020-01-01 23:59:59
支持 90 天内数据查询，不传此参数，表示查当天数据
时间跨度要小于等于7天
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 域名，不传此参数，表示查询账号级别数据
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 统计指标：
ip_url : Top IP+URL 默认值
ua :  Top UA
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * cdn表示CDN数据，默认值
ecdn表示ECDN数据
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 域名列表，不传此参数，表示查询账号级别数据
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 执行动作，取值为：intercept/redirect/observe
分别表示：拦截/重定向/观察
为空表示查询所有执行动作数据
                     */
                    std::string m_actionName;
                    bool m_actionNameHasBeenSet;

                    /**
                     * 地域：mainland或overseas，表示国内或海外，不填写默认表示国内
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPCCDATAREQUEST_H_
