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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSNETCOUNTRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSNETCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/KeyValue.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeDDoSNetCount返回参数结构体
                */
                class DescribeDDoSNetCountResponse : public AbstractModel
                {
                public:
                    DescribeDDoSNetCountResponse();
                    ~DescribeDDoSNetCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（net表示高防IP专业版）
                     * @return Business 大禹子产品代号（net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return Id 资源ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取统计开始时间
                     * @return StartTime 统计开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取统计结束时间
                     * @return EndTime 统计结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取指标，取值[traffic（攻击协议流量, 单位KB）, pkg（攻击协议报文数）, classnum（攻击事件次数）]
                     * @return MetricName 指标，取值[traffic（攻击协议流量, 单位KB）, pkg（攻击协议报文数）, classnum（攻击事件次数）]
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Key-Value值数组，Key说明如下，
当MetricName为traffic时：
key为"TcpKBSum"，表示TCP报文流量，单位KB
key为"UdpKBSum"，表示UDP报文流量，单位KB
key为"IcmpKBSum"，表示ICMP报文流量，单位KB
key为"OtherKBSum"，表示其他报文流量，单位KB

当MetricName为pkg时：
key为"TcpPacketSum"，表示TCP报文个数，单位个
key为"UdpPacketSum"，表示UDP报文个数，单位个
key为"IcmpPacketSum"，表示ICMP报文个数，单位个
key为"OtherPacketSum"，表示其他报文个数，单位个

当MetricName为classnum时：
key的值表示攻击事件类型，其中Key为"UNKNOWNFLOOD"，表示未知的攻击事件
                     * @return Data Key-Value值数组，Key说明如下，
当MetricName为traffic时：
key为"TcpKBSum"，表示TCP报文流量，单位KB
key为"UdpKBSum"，表示UDP报文流量，单位KB
key为"IcmpKBSum"，表示ICMP报文流量，单位KB
key为"OtherKBSum"，表示其他报文流量，单位KB

当MetricName为pkg时：
key为"TcpPacketSum"，表示TCP报文个数，单位个
key为"UdpPacketSum"，表示UDP报文个数，单位个
key为"IcmpPacketSum"，表示ICMP报文个数，单位个
key为"OtherPacketSum"，表示其他报文个数，单位个

当MetricName为classnum时：
key的值表示攻击事件类型，其中Key为"UNKNOWNFLOOD"，表示未知的攻击事件
                     * 
                     */
                    std::vector<KeyValue> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 统计开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 统计结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指标，取值[traffic（攻击协议流量, 单位KB）, pkg（攻击协议报文数）, classnum（攻击事件次数）]
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Key-Value值数组，Key说明如下，
当MetricName为traffic时：
key为"TcpKBSum"，表示TCP报文流量，单位KB
key为"UdpKBSum"，表示UDP报文流量，单位KB
key为"IcmpKBSum"，表示ICMP报文流量，单位KB
key为"OtherKBSum"，表示其他报文流量，单位KB

当MetricName为pkg时：
key为"TcpPacketSum"，表示TCP报文个数，单位个
key为"UdpPacketSum"，表示UDP报文个数，单位个
key为"IcmpPacketSum"，表示ICMP报文个数，单位个
key为"OtherPacketSum"，表示其他报文个数，单位个

当MetricName为classnum时：
key的值表示攻击事件类型，其中Key为"UNKNOWNFLOOD"，表示未知的攻击事件
                     */
                    std::vector<KeyValue> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSNETCOUNTRESPONSE_H_
