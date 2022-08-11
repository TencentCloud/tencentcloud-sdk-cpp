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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEBOTLOGREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEBOTLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/QueryCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeBotLog请求参数结构体
                */
                class DescribeBotLogRequest : public AbstractModel
                {
                public:
                    DescribeBotLogRequest();
                    ~DescribeBotLogRequest() = default;
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
                     * 获取分页拉取的最大返回结果数。最大值：1000。
                     * @return PageSize 分页拉取的最大返回结果数。最大值：1000。
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页拉取的最大返回结果数。最大值：1000。
                     * @param PageSize 分页拉取的最大返回结果数。最大值：1000。
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取分页拉取的起始页号。最小值：1。
                     * @return PageNo 分页拉取的起始页号。最小值：1。
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置分页拉取的起始页号。最小值：1。
                     * @param PageNo 分页拉取的起始页号。最小值：1。
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取站点集合，不填默认查询所有站点。
                     * @return ZoneIds 站点集合，不填默认查询所有站点。
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置站点集合，不填默认查询所有站点。
                     * @param ZoneIds 站点集合，不填默认查询所有站点。
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取域名集合，不填默认查询所有子域名。
                     * @return Domains 域名集合，不填默认查询所有子域名。
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置域名集合，不填默认查询所有子域名。
                     * @param Domains 域名集合，不填默认查询所有子域名。
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取筛选条件，取值有：
<li>action ：执行动作（处置方式）；</li>
<li>sipCountryCode ：ip所在国家 ；</li>
<li>attackIp ：攻击ip ；</li>
<li>ruleId ：规则id ；</li>
<li>eventId ：事件id ；</li>
<li>ua ：用户代理 ；</li>
<li>requestMethod ：请求方法 ；</li>
<li>uri ：统一资源标识符 。</li>
                     * @return QueryCondition 筛选条件，取值有：
<li>action ：执行动作（处置方式）；</li>
<li>sipCountryCode ：ip所在国家 ；</li>
<li>attackIp ：攻击ip ；</li>
<li>ruleId ：规则id ；</li>
<li>eventId ：事件id ；</li>
<li>ua ：用户代理 ；</li>
<li>requestMethod ：请求方法 ；</li>
<li>uri ：统一资源标识符 。</li>
                     */
                    std::vector<QueryCondition> GetQueryCondition() const;

                    /**
                     * 设置筛选条件，取值有：
<li>action ：执行动作（处置方式）；</li>
<li>sipCountryCode ：ip所在国家 ；</li>
<li>attackIp ：攻击ip ；</li>
<li>ruleId ：规则id ；</li>
<li>eventId ：事件id ；</li>
<li>ua ：用户代理 ；</li>
<li>requestMethod ：请求方法 ；</li>
<li>uri ：统一资源标识符 。</li>
                     * @param QueryCondition 筛选条件，取值有：
<li>action ：执行动作（处置方式）；</li>
<li>sipCountryCode ：ip所在国家 ；</li>
<li>attackIp ：攻击ip ；</li>
<li>ruleId ：规则id ；</li>
<li>eventId ：事件id ；</li>
<li>ua ：用户代理 ；</li>
<li>requestMethod ：请求方法 ；</li>
<li>uri ：统一资源标识符 。</li>
                     */
                    void SetQueryCondition(const std::vector<QueryCondition>& _queryCondition);

                    /**
                     * 判断参数 QueryCondition 是否已赋值
                     * @return QueryCondition 是否已赋值
                     */
                    bool QueryConditionHasBeenSet() const;

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
                     * 分页拉取的最大返回结果数。最大值：1000。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页拉取的起始页号。最小值：1。
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 站点集合，不填默认查询所有站点。
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 域名集合，不填默认查询所有子域名。
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 筛选条件，取值有：
<li>action ：执行动作（处置方式）；</li>
<li>sipCountryCode ：ip所在国家 ；</li>
<li>attackIp ：攻击ip ；</li>
<li>ruleId ：规则id ；</li>
<li>eventId ：事件id ；</li>
<li>ua ：用户代理 ；</li>
<li>requestMethod ：请求方法 ；</li>
<li>uri ：统一资源标识符 。</li>
                     */
                    std::vector<QueryCondition> m_queryCondition;
                    bool m_queryConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEBOTLOGREQUEST_H_
