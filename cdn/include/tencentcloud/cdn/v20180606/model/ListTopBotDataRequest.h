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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPBOTDATAREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPBOTDATAREQUEST_H_

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
                * ListTopBotData请求参数结构体
                */
                class ListTopBotDataRequest : public AbstractModel
                {
                public:
                    ListTopBotDataRequest();
                    ~ListTopBotDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取获取Top量，取值范围[1-10]
                     * @return TopCount 获取Top量，取值范围[1-10]
                     * 
                     */
                    int64_t GetTopCount() const;

                    /**
                     * 设置获取Top量，取值范围[1-10]
                     * @param _topCount 获取Top量，取值范围[1-10]
                     * 
                     */
                    void SetTopCount(const int64_t& _topCount);

                    /**
                     * 判断参数 TopCount 是否已赋值
                     * @return TopCount 是否已赋值
                     * 
                     */
                    bool TopCountHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
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
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 获取session表示查询BOT会话的Top信息
ip表示查询BOT客户端IP的Top信息

不填代表获取会话信息
                     * @return Metric session表示查询BOT会话的Top信息
ip表示查询BOT客户端IP的Top信息

不填代表获取会话信息
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置session表示查询BOT会话的Top信息
ip表示查询BOT客户端IP的Top信息

不填代表获取会话信息
                     * @param _metric session表示查询BOT会话的Top信息
ip表示查询BOT客户端IP的Top信息

不填代表获取会话信息
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
                     * 获取域名，仅当Metric=ip时有效，不填写表示使用Domains参数
                     * @return Domain 域名，仅当Metric=ip时有效，不填写表示使用Domains参数
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名，仅当Metric=ip时有效，不填写表示使用Domains参数
                     * @param _domain 域名，仅当Metric=ip时有效，不填写表示使用Domains参数
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
                     * 获取域名，仅当Metric=ip，并且Domain为空时有效，不填写表示获取AppID信息
                     * @return Domains 域名，仅当Metric=ip，并且Domain为空时有效，不填写表示获取AppID信息
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置域名，仅当Metric=ip，并且Domain为空时有效，不填写表示获取AppID信息
                     * @param _domains 域名，仅当Metric=ip，并且Domain为空时有效，不填写表示获取AppID信息
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                private:

                    /**
                     * 获取Top量，取值范围[1-10]
                     */
                    int64_t m_topCount;
                    bool m_topCountHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * session表示查询BOT会话的Top信息
ip表示查询BOT客户端IP的Top信息

不填代表获取会话信息
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 域名，仅当Metric=ip时有效，不填写表示使用Domains参数
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名，仅当Metric=ip，并且Domain为空时有效，不填写表示获取AppID信息
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPBOTDATAREQUEST_H_
