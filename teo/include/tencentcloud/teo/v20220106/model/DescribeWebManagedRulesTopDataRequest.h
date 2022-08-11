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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEWEBMANAGEDRULESTOPDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEWEBMANAGEDRULESTOPDATAREQUEST_H_

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
                * DescribeWebManagedRulesTopData请求参数结构体
                */
                class DescribeWebManagedRulesTopDataRequest : public AbstractModel
                {
                public:
                    DescribeWebManagedRulesTopDataRequest();
                    ~DescribeWebManagedRulesTopDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间。
                     * @return StartTime 开始时间。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。
                     * @param StartTime 开始时间。
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
                     * 获取统计指标列表，取值有：
<li>waf_requestNum_url ：url请求数排行 ；</li>
<li>waf_requestNum_cip：客户端ip请求数排行 ；</li>
<li>waf_cipRequestNum_region ：客户端区域请求数排行 。</li>
                     * @return MetricName 统计指标列表，取值有：
<li>waf_requestNum_url ：url请求数排行 ；</li>
<li>waf_requestNum_cip：客户端ip请求数排行 ；</li>
<li>waf_cipRequestNum_region ：客户端区域请求数排行 。</li>
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置统计指标列表，取值有：
<li>waf_requestNum_url ：url请求数排行 ；</li>
<li>waf_requestNum_cip：客户端ip请求数排行 ；</li>
<li>waf_cipRequestNum_region ：客户端区域请求数排行 。</li>
                     * @param MetricName 统计指标列表，取值有：
<li>waf_requestNum_url ：url请求数排行 ；</li>
<li>waf_requestNum_cip：客户端ip请求数排行 ；</li>
<li>waf_cipRequestNum_region ：客户端区域请求数排行 。</li>
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取查询前多少个，传值为0返回全量。
                     * @return Limit 查询前多少个，传值为0返回全量。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询前多少个，传值为0返回全量。
                     * @param Limit 查询前多少个，传值为0返回全量。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取站点id列表，不填默认选择全部站点。
                     * @return ZoneIds 站点id列表，不填默认选择全部站点。
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置站点id列表，不填默认选择全部站点。
                     * @param ZoneIds 站点id列表，不填默认选择全部站点。
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取该字段已废弃，请勿传。
                     * @return PolicyIds 该字段已废弃，请勿传。
                     */
                    std::vector<int64_t> GetPolicyIds() const;

                    /**
                     * 设置该字段已废弃，请勿传。
                     * @param PolicyIds 该字段已废弃，请勿传。
                     */
                    void SetPolicyIds(const std::vector<int64_t>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取该字段已废弃，请勿传。
                     * @return Port 该字段已废弃，请勿传。
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置该字段已废弃，请勿传。
                     * @param Port 该字段已废弃，请勿传。
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取该字段已废弃，请勿传。
                     * @return ProtocolType 该字段已废弃，请勿传。
                     */
                    std::string GetProtocolType() const;

                    /**
                     * 设置该字段已废弃，请勿传。
                     * @param ProtocolType 该字段已废弃，请勿传。
                     */
                    void SetProtocolType(const std::string& _protocolType);

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     */
                    bool ProtocolTypeHasBeenSet() const;

                    /**
                     * 获取该字段已废弃，请勿传。
                     * @return AttackType 该字段已废弃，请勿传。
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置该字段已废弃，请勿传。
                     * @param AttackType 该字段已废弃，请勿传。
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取域名列表，不填默认选择全部子域名。
                     * @return Domains 域名列表，不填默认选择全部子域名。
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置域名列表，不填默认选择全部子域名。
                     * @param Domains 域名列表，不填默认选择全部子域名。
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取查询时间粒度，取值有：
<li>min ：1分钟 ；</li>
<li>5min ：5分钟 ；</li>
<li>hour ：1小时 ；</li>
<li>day ：1天 。</li>
                     * @return Interval 查询时间粒度，取值有：
<li>min ：1分钟 ；</li>
<li>5min ：5分钟 ；</li>
<li>hour ：1小时 ；</li>
<li>day ：1天 。</li>
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置查询时间粒度，取值有：
<li>min ：1分钟 ；</li>
<li>5min ：5分钟 ；</li>
<li>hour ：1小时 ；</li>
<li>day ：1天 。</li>
                     * @param Interval 查询时间粒度，取值有：
<li>min ：1分钟 ；</li>
<li>5min ：5分钟 ；</li>
<li>hour ：1小时 ；</li>
<li>day ：1天 。</li>
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取筛选条件，取值有：
<li>action ：执行动作 。</li>
                     * @return QueryCondition 筛选条件，取值有：
<li>action ：执行动作 。</li>
                     */
                    std::vector<QueryCondition> GetQueryCondition() const;

                    /**
                     * 设置筛选条件，取值有：
<li>action ：执行动作 。</li>
                     * @param QueryCondition 筛选条件，取值有：
<li>action ：执行动作 。</li>
                     */
                    void SetQueryCondition(const std::vector<QueryCondition>& _queryCondition);

                    /**
                     * 判断参数 QueryCondition 是否已赋值
                     * @return QueryCondition 是否已赋值
                     */
                    bool QueryConditionHasBeenSet() const;

                private:

                    /**
                     * 开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 统计指标列表，取值有：
<li>waf_requestNum_url ：url请求数排行 ；</li>
<li>waf_requestNum_cip：客户端ip请求数排行 ；</li>
<li>waf_cipRequestNum_region ：客户端区域请求数排行 。</li>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 查询前多少个，传值为0返回全量。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 站点id列表，不填默认选择全部站点。
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 该字段已废弃，请勿传。
                     */
                    std::vector<int64_t> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * 该字段已废弃，请勿传。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 该字段已废弃，请勿传。
                     */
                    std::string m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * 该字段已废弃，请勿传。
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * 域名列表，不填默认选择全部子域名。
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 查询时间粒度，取值有：
<li>min ：1分钟 ；</li>
<li>5min ：5分钟 ；</li>
<li>hour ：1小时 ；</li>
<li>day ：1天 。</li>
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 筛选条件，取值有：
<li>action ：执行动作 。</li>
                     */
                    std::vector<QueryCondition> m_queryCondition;
                    bool m_queryConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEWEBMANAGEDRULESTOPDATAREQUEST_H_
