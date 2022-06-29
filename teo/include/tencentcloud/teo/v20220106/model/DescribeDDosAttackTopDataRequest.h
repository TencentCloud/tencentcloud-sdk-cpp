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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSATTACKTOPDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSATTACKTOPDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeDDosAttackTopData请求参数结构体
                */
                class DescribeDDosAttackTopDataRequest : public AbstractModel
                {
                public:
                    DescribeDDosAttackTopDataRequest();
                    ~DescribeDDosAttackTopDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param StartTime 开始时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param EndTime 结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取过滤指标
                     * @return MetricName 过滤指标
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置过滤指标
                     * @param MetricName 过滤指标
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取查询前多少名,传值为0 全量
                     * @return Limit 查询前多少名,传值为0 全量
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询前多少名,传值为0 全量
                     * @param Limit 查询前多少名,传值为0 全量
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取站点集合
                     * @return ZoneIds 站点集合
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置站点集合
                     * @param ZoneIds 站点集合
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取ddos策略组id 集合
                     * @return PolicyIds ddos策略组id 集合
                     */
                    std::vector<int64_t> GetPolicyIds() const;

                    /**
                     * 设置ddos策略组id 集合
                     * @param PolicyIds ddos策略组id 集合
                     */
                    void SetPolicyIds(const std::vector<int64_t>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取端口号
                     * @return Port 端口号
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置端口号
                     * @param Port 端口号
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取协议类型,tcp,udp,all
                     * @return ProtocolType 协议类型,tcp,udp,all
                     */
                    std::string GetProtocolType() const;

                    /**
                     * 设置协议类型,tcp,udp,all
                     * @param ProtocolType 协议类型,tcp,udp,all
                     */
                    void SetProtocolType(const std::string& _protocolType);

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     */
                    bool ProtocolTypeHasBeenSet() const;

                    /**
                     * 获取攻击类型,flood,icmpFlood......,all
                     * @return AttackType 攻击类型,flood,icmpFlood......,all
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置攻击类型,flood,icmpFlood......,all
                     * @param AttackType 攻击类型,flood,icmpFlood......,all
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     */
                    bool AttackTypeHasBeenSet() const;

                private:

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
                     * 过滤指标
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 查询前多少名,传值为0 全量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 站点集合
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * ddos策略组id 集合
                     */
                    std::vector<int64_t> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * 端口号
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 协议类型,tcp,udp,all
                     */
                    std::string m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * 攻击类型,flood,icmpFlood......,all
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSATTACKTOPDATAREQUEST_H_
