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
<li>ddos_attackFlux_protocol ：攻击总流量协议类型分布排行 ；</li>
<li>ddos_attackPackageNum_protocol ：攻击总包量协议类型分布排行 ；</li>
<li>ddos_attackNum_attackType ：攻击总次数攻击类型分布排行 ；</li>
<li>ddos_attackNum_sregion ：攻击总次数攻击源地区分布排行 ；</li>
<li>ddos_attackFlux_sip ：攻击总流量攻击源ip分布排行 ；</li>
<li>ddos_attackFlux_sregion ：攻击总流量攻击源地区分布排行 。</li>
                     * @return MetricName 统计指标列表，取值有：
<li>ddos_attackFlux_protocol ：攻击总流量协议类型分布排行 ；</li>
<li>ddos_attackPackageNum_protocol ：攻击总包量协议类型分布排行 ；</li>
<li>ddos_attackNum_attackType ：攻击总次数攻击类型分布排行 ；</li>
<li>ddos_attackNum_sregion ：攻击总次数攻击源地区分布排行 ；</li>
<li>ddos_attackFlux_sip ：攻击总流量攻击源ip分布排行 ；</li>
<li>ddos_attackFlux_sregion ：攻击总流量攻击源地区分布排行 。</li>
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置统计指标列表，取值有：
<li>ddos_attackFlux_protocol ：攻击总流量协议类型分布排行 ；</li>
<li>ddos_attackPackageNum_protocol ：攻击总包量协议类型分布排行 ；</li>
<li>ddos_attackNum_attackType ：攻击总次数攻击类型分布排行 ；</li>
<li>ddos_attackNum_sregion ：攻击总次数攻击源地区分布排行 ；</li>
<li>ddos_attackFlux_sip ：攻击总流量攻击源ip分布排行 ；</li>
<li>ddos_attackFlux_sregion ：攻击总流量攻击源地区分布排行 。</li>
                     * @param MetricName 统计指标列表，取值有：
<li>ddos_attackFlux_protocol ：攻击总流量协议类型分布排行 ；</li>
<li>ddos_attackPackageNum_protocol ：攻击总包量协议类型分布排行 ；</li>
<li>ddos_attackNum_attackType ：攻击总次数攻击类型分布排行 ；</li>
<li>ddos_attackNum_sregion ：攻击总次数攻击源地区分布排行 ；</li>
<li>ddos_attackFlux_sip ：攻击总流量攻击源ip分布排行 ；</li>
<li>ddos_attackFlux_sregion ：攻击总流量攻击源地区分布排行 。</li>
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
                     * 获取站点id集合，不填默认选择全部站点。
                     * @return ZoneIds 站点id集合，不填默认选择全部站点。
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置站点id集合，不填默认选择全部站点。
                     * @param ZoneIds 站点id集合，不填默认选择全部站点。
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取ddos策略组id 集合，不填默认选择全部策略id。
                     * @return PolicyIds ddos策略组id 集合，不填默认选择全部策略id。
                     */
                    std::vector<int64_t> GetPolicyIds() const;

                    /**
                     * 设置ddos策略组id 集合，不填默认选择全部策略id。
                     * @param PolicyIds ddos策略组id 集合，不填默认选择全部策略id。
                     */
                    void SetPolicyIds(const std::vector<int64_t>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取端口号。
                     * @return Port 端口号。
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置端口号。
                     * @param Port 端口号。
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取协议类型，取值有：
<li>tcp ；</li>
<li>udp ；</li>
<li>all 。</li>
                     * @return ProtocolType 协议类型，取值有：
<li>tcp ；</li>
<li>udp ；</li>
<li>all 。</li>
                     */
                    std::string GetProtocolType() const;

                    /**
                     * 设置协议类型，取值有：
<li>tcp ；</li>
<li>udp ；</li>
<li>all 。</li>
                     * @param ProtocolType 协议类型，取值有：
<li>tcp ；</li>
<li>udp ；</li>
<li>all 。</li>
                     */
                    void SetProtocolType(const std::string& _protocolType);

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     */
                    bool ProtocolTypeHasBeenSet() const;

                    /**
                     * 获取攻击类型，取值有：
<li>flood ；</li>
<li>icmpFlood ；</li>
<li>all 。</li>
                     * @return AttackType 攻击类型，取值有：
<li>flood ；</li>
<li>icmpFlood ；</li>
<li>all 。</li>
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置攻击类型，取值有：
<li>flood ；</li>
<li>icmpFlood ；</li>
<li>all 。</li>
                     * @param AttackType 攻击类型，取值有：
<li>flood ；</li>
<li>icmpFlood ；</li>
<li>all 。</li>
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取数据归属地区，取值有：
<li>overseas ：全球（除中国大陆地区）数据 ；</li>
<li>mainland ：中国大陆地区数据 。</li>不填默认查询overseas。
                     * @return Area 数据归属地区，取值有：
<li>overseas ：全球（除中国大陆地区）数据 ；</li>
<li>mainland ：中国大陆地区数据 。</li>不填默认查询overseas。
                     */
                    std::string GetArea() const;

                    /**
                     * 设置数据归属地区，取值有：
<li>overseas ：全球（除中国大陆地区）数据 ；</li>
<li>mainland ：中国大陆地区数据 。</li>不填默认查询overseas。
                     * @param Area 数据归属地区，取值有：
<li>overseas ：全球（除中国大陆地区）数据 ；</li>
<li>mainland ：中国大陆地区数据 。</li>不填默认查询overseas。
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

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
<li>ddos_attackFlux_protocol ：攻击总流量协议类型分布排行 ；</li>
<li>ddos_attackPackageNum_protocol ：攻击总包量协议类型分布排行 ；</li>
<li>ddos_attackNum_attackType ：攻击总次数攻击类型分布排行 ；</li>
<li>ddos_attackNum_sregion ：攻击总次数攻击源地区分布排行 ；</li>
<li>ddos_attackFlux_sip ：攻击总流量攻击源ip分布排行 ；</li>
<li>ddos_attackFlux_sregion ：攻击总流量攻击源地区分布排行 。</li>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 查询前多少个，传值为0返回全量。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 站点id集合，不填默认选择全部站点。
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * ddos策略组id 集合，不填默认选择全部策略id。
                     */
                    std::vector<int64_t> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * 端口号。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 协议类型，取值有：
<li>tcp ；</li>
<li>udp ；</li>
<li>all 。</li>
                     */
                    std::string m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * 攻击类型，取值有：
<li>flood ；</li>
<li>icmpFlood ；</li>
<li>all 。</li>
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * 数据归属地区，取值有：
<li>overseas ：全球（除中国大陆地区）数据 ；</li>
<li>mainland ：中国大陆地区数据 。</li>不填默认查询overseas。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSATTACKTOPDATAREQUEST_H_
