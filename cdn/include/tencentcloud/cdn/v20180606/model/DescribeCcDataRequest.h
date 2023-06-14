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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECCDATAREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECCDATAREQUEST_H_

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
                * DescribeCcData请求参数结构体
                */
                class DescribeCcDataRequest : public AbstractModel
                {
                public:
                    DescribeCcDataRequest();
                    ~DescribeCcDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间
                     * @return StartTime 查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间
                     * @param _startTime 查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间
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
                     * 获取查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间
                     * @return EndTime 查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间
                     * @param _endTime 查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间
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
                     * 获取时间粒度，支持以下几种模式：
min：1 分钟粒度，指定查询区间 24 小时内（含 24 小时），可返回 1 分钟粒度明细数据
5min：5 分钟粒度，指定查询区间 31 天内（含 31 天），可返回 5 分钟粒度明细数据
hour：1 小时粒度，指定查询区间 31 天内（含 31 天），可返回 1 小时粒度明细数据
day：天粒度，指定查询区间大于 31 天，可返回天粒度明细数据
                     * @return Interval 时间粒度，支持以下几种模式：
min：1 分钟粒度，指定查询区间 24 小时内（含 24 小时），可返回 1 分钟粒度明细数据
5min：5 分钟粒度，指定查询区间 31 天内（含 31 天），可返回 5 分钟粒度明细数据
hour：1 小时粒度，指定查询区间 31 天内（含 31 天），可返回 1 小时粒度明细数据
day：天粒度，指定查询区间大于 31 天，可返回天粒度明细数据
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置时间粒度，支持以下几种模式：
min：1 分钟粒度，指定查询区间 24 小时内（含 24 小时），可返回 1 分钟粒度明细数据
5min：5 分钟粒度，指定查询区间 31 天内（含 31 天），可返回 5 分钟粒度明细数据
hour：1 小时粒度，指定查询区间 31 天内（含 31 天），可返回 1 小时粒度明细数据
day：天粒度，指定查询区间大于 31 天，可返回天粒度明细数据
                     * @param _interval 时间粒度，支持以下几种模式：
min：1 分钟粒度，指定查询区间 24 小时内（含 24 小时），可返回 1 分钟粒度明细数据
5min：5 分钟粒度，指定查询区间 31 天内（含 31 天），可返回 5 分钟粒度明细数据
hour：1 小时粒度，指定查询区间 31 天内（含 31 天），可返回 1 小时粒度明细数据
day：天粒度，指定查询区间大于 31 天，可返回天粒度明细数据
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
                     * 获取指定域名查询，为空时，表示查询账号级别数据
                     * @return Domain 指定域名查询，为空时，表示查询账号级别数据
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置指定域名查询，为空时，表示查询账号级别数据
                     * @param _domain 指定域名查询，为空时，表示查询账号级别数据
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
                     * 获取执行动作，取值为：intercept/redirect/observe
分别表示：拦截/重定向/观察
为空时，表示所有执行动作
                     * @return ActionName 执行动作，取值为：intercept/redirect/observe
分别表示：拦截/重定向/观察
为空时，表示所有执行动作
                     * 
                     */
                    std::string GetActionName() const;

                    /**
                     * 设置执行动作，取值为：intercept/redirect/observe
分别表示：拦截/重定向/观察
为空时，表示所有执行动作
                     * @param _actionName 执行动作，取值为：intercept/redirect/observe
分别表示：拦截/重定向/观察
为空时，表示所有执行动作
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
                     * 获取指定域名列表查询，为空时，表示查询账号级别数据
                     * @return Domains 指定域名列表查询，为空时，表示查询账号级别数据
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置指定域名列表查询，为空时，表示查询账号级别数据
                     * @param _domains 指定域名列表查询，为空时，表示查询账号级别数据
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
                     * 查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 时间粒度，支持以下几种模式：
min：1 分钟粒度，指定查询区间 24 小时内（含 24 小时），可返回 1 分钟粒度明细数据
5min：5 分钟粒度，指定查询区间 31 天内（含 31 天），可返回 5 分钟粒度明细数据
hour：1 小时粒度，指定查询区间 31 天内（含 31 天），可返回 1 小时粒度明细数据
day：天粒度，指定查询区间大于 31 天，可返回天粒度明细数据
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 指定域名查询，为空时，表示查询账号级别数据
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 执行动作，取值为：intercept/redirect/observe
分别表示：拦截/重定向/观察
为空时，表示所有执行动作
                     */
                    std::string m_actionName;
                    bool m_actionNameHasBeenSet;

                    /**
                     * 指定域名列表查询，为空时，表示查询账号级别数据
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * cdn表示CDN数据，默认值
ecdn表示ECDN数据
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

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

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECCDATAREQUEST_H_
