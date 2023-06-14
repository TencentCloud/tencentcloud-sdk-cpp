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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSNETEVINFORESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSNETEVINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeDDoSNetEvInfo返回参数结构体
                */
                class DescribeDDoSNetEvInfoResponse : public AbstractModel
                {
                public:
                    DescribeDDoSNetEvInfoResponse();
                    ~DescribeDDoSNetEvInfoResponse() = default;
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
                     * 获取攻击开始时间
                     * @return StartTime 攻击开始时间
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
                     * 获取攻击结束时间
                     * @return EndTime 攻击结束时间
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
                     * 获取TCP报文攻击包数
                     * @return TcpPacketSum TCP报文攻击包数
                     * 
                     */
                    uint64_t GetTcpPacketSum() const;

                    /**
                     * 判断参数 TcpPacketSum 是否已赋值
                     * @return TcpPacketSum 是否已赋值
                     * 
                     */
                    bool TcpPacketSumHasBeenSet() const;

                    /**
                     * 获取TCP报文攻击流量，单位KB
                     * @return TcpKBSum TCP报文攻击流量，单位KB
                     * 
                     */
                    uint64_t GetTcpKBSum() const;

                    /**
                     * 判断参数 TcpKBSum 是否已赋值
                     * @return TcpKBSum 是否已赋值
                     * 
                     */
                    bool TcpKBSumHasBeenSet() const;

                    /**
                     * 获取UDP报文攻击包数
                     * @return UdpPacketSum UDP报文攻击包数
                     * 
                     */
                    uint64_t GetUdpPacketSum() const;

                    /**
                     * 判断参数 UdpPacketSum 是否已赋值
                     * @return UdpPacketSum 是否已赋值
                     * 
                     */
                    bool UdpPacketSumHasBeenSet() const;

                    /**
                     * 获取UDP报文攻击流量，单位KB
                     * @return UdpKBSum UDP报文攻击流量，单位KB
                     * 
                     */
                    uint64_t GetUdpKBSum() const;

                    /**
                     * 判断参数 UdpKBSum 是否已赋值
                     * @return UdpKBSum 是否已赋值
                     * 
                     */
                    bool UdpKBSumHasBeenSet() const;

                    /**
                     * 获取ICMP报文攻击包数
                     * @return IcmpPacketSum ICMP报文攻击包数
                     * 
                     */
                    uint64_t GetIcmpPacketSum() const;

                    /**
                     * 判断参数 IcmpPacketSum 是否已赋值
                     * @return IcmpPacketSum 是否已赋值
                     * 
                     */
                    bool IcmpPacketSumHasBeenSet() const;

                    /**
                     * 获取ICMP报文攻击流量，单位KB
                     * @return IcmpKBSum ICMP报文攻击流量，单位KB
                     * 
                     */
                    uint64_t GetIcmpKBSum() const;

                    /**
                     * 判断参数 IcmpKBSum 是否已赋值
                     * @return IcmpKBSum 是否已赋值
                     * 
                     */
                    bool IcmpKBSumHasBeenSet() const;

                    /**
                     * 获取其他报文攻击包数
                     * @return OtherPacketSum 其他报文攻击包数
                     * 
                     */
                    uint64_t GetOtherPacketSum() const;

                    /**
                     * 判断参数 OtherPacketSum 是否已赋值
                     * @return OtherPacketSum 是否已赋值
                     * 
                     */
                    bool OtherPacketSumHasBeenSet() const;

                    /**
                     * 获取其他报文攻击流量，单位KB
                     * @return OtherKBSum 其他报文攻击流量，单位KB
                     * 
                     */
                    uint64_t GetOtherKBSum() const;

                    /**
                     * 判断参数 OtherKBSum 是否已赋值
                     * @return OtherKBSum 是否已赋值
                     * 
                     */
                    bool OtherKBSumHasBeenSet() const;

                    /**
                     * 获取累计攻击流量，单位KB
                     * @return TotalTraffic 累计攻击流量，单位KB
                     * 
                     */
                    uint64_t GetTotalTraffic() const;

                    /**
                     * 判断参数 TotalTraffic 是否已赋值
                     * @return TotalTraffic 是否已赋值
                     * 
                     */
                    bool TotalTrafficHasBeenSet() const;

                    /**
                     * 获取攻击流量带宽峰值
                     * @return Mbps 攻击流量带宽峰值
                     * 
                     */
                    uint64_t GetMbps() const;

                    /**
                     * 判断参数 Mbps 是否已赋值
                     * @return Mbps 是否已赋值
                     * 
                     */
                    bool MbpsHasBeenSet() const;

                    /**
                     * 获取攻击包速率峰值
                     * @return Pps 攻击包速率峰值
                     * 
                     */
                    uint64_t GetPps() const;

                    /**
                     * 判断参数 Pps 是否已赋值
                     * @return Pps 是否已赋值
                     * 
                     */
                    bool PpsHasBeenSet() const;

                    /**
                     * 获取PCAP文件下载链接
                     * @return PcapUrl PCAP文件下载链接
                     * 
                     */
                    std::vector<std::string> GetPcapUrl() const;

                    /**
                     * 判断参数 PcapUrl 是否已赋值
                     * @return PcapUrl 是否已赋值
                     * 
                     */
                    bool PcapUrlHasBeenSet() const;

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
                     * 攻击开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 攻击结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * TCP报文攻击包数
                     */
                    uint64_t m_tcpPacketSum;
                    bool m_tcpPacketSumHasBeenSet;

                    /**
                     * TCP报文攻击流量，单位KB
                     */
                    uint64_t m_tcpKBSum;
                    bool m_tcpKBSumHasBeenSet;

                    /**
                     * UDP报文攻击包数
                     */
                    uint64_t m_udpPacketSum;
                    bool m_udpPacketSumHasBeenSet;

                    /**
                     * UDP报文攻击流量，单位KB
                     */
                    uint64_t m_udpKBSum;
                    bool m_udpKBSumHasBeenSet;

                    /**
                     * ICMP报文攻击包数
                     */
                    uint64_t m_icmpPacketSum;
                    bool m_icmpPacketSumHasBeenSet;

                    /**
                     * ICMP报文攻击流量，单位KB
                     */
                    uint64_t m_icmpKBSum;
                    bool m_icmpKBSumHasBeenSet;

                    /**
                     * 其他报文攻击包数
                     */
                    uint64_t m_otherPacketSum;
                    bool m_otherPacketSumHasBeenSet;

                    /**
                     * 其他报文攻击流量，单位KB
                     */
                    uint64_t m_otherKBSum;
                    bool m_otherKBSumHasBeenSet;

                    /**
                     * 累计攻击流量，单位KB
                     */
                    uint64_t m_totalTraffic;
                    bool m_totalTrafficHasBeenSet;

                    /**
                     * 攻击流量带宽峰值
                     */
                    uint64_t m_mbps;
                    bool m_mbpsHasBeenSet;

                    /**
                     * 攻击包速率峰值
                     */
                    uint64_t m_pps;
                    bool m_ppsHasBeenSet;

                    /**
                     * PCAP文件下载链接
                     */
                    std::vector<std::string> m_pcapUrl;
                    bool m_pcapUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSNETEVINFORESPONSE_H_
