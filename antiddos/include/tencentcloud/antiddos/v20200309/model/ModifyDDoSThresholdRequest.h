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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDDOSTHRESHOLDREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDDOSTHRESHOLDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * ModifyDDoSThreshold请求参数结构体
                */
                class ModifyDDoSThresholdRequest : public AbstractModel
                {
                public:
                    ModifyDDoSThresholdRequest();
                    ~ModifyDDoSThresholdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DDoS清洗阈值，取值[0, 60, 80, 100, 150, 200, 250, 300, 400, 500, 700, 1000];
当设置值为0时，表示采用默认值；
                     * @return Threshold DDoS清洗阈值，取值[0, 60, 80, 100, 150, 200, 250, 300, 400, 500, 700, 1000];
当设置值为0时，表示采用默认值；
                     * 
                     */
                    uint64_t GetThreshold() const;

                    /**
                     * 设置DDoS清洗阈值，取值[0, 60, 80, 100, 150, 200, 250, 300, 400, 500, 700, 1000];
当设置值为0时，表示采用默认值；
                     * @param _threshold DDoS清洗阈值，取值[0, 60, 80, 100, 150, 200, 250, 300, 400, 500, 700, 1000];
当设置值为0时，表示采用默认值；
                     * 
                     */
                    void SetThreshold(const uint64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return Id 资源ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源ID
                     * @param _id 资源ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取DDoS防护子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * @return Business DDoS防护子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置DDoS防护子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * @param _business DDoS防护子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取配置其他阈值标志位，1表示配置其他阈值
                     * @return OtherThresholdFlag 配置其他阈值标志位，1表示配置其他阈值
                     * 
                     */
                    int64_t GetOtherThresholdFlag() const;

                    /**
                     * 设置配置其他阈值标志位，1表示配置其他阈值
                     * @param _otherThresholdFlag 配置其他阈值标志位，1表示配置其他阈值
                     * 
                     */
                    void SetOtherThresholdFlag(const int64_t& _otherThresholdFlag);

                    /**
                     * 判断参数 OtherThresholdFlag 是否已赋值
                     * @return OtherThresholdFlag 是否已赋值
                     * 
                     */
                    bool OtherThresholdFlagHasBeenSet() const;

                    /**
                     * 获取SYN FLOOD流量阈值
                     * @return SynFloodThreshold SYN FLOOD流量阈值
                     * 
                     */
                    uint64_t GetSynFloodThreshold() const;

                    /**
                     * 设置SYN FLOOD流量阈值
                     * @param _synFloodThreshold SYN FLOOD流量阈值
                     * 
                     */
                    void SetSynFloodThreshold(const uint64_t& _synFloodThreshold);

                    /**
                     * 判断参数 SynFloodThreshold 是否已赋值
                     * @return SynFloodThreshold 是否已赋值
                     * 
                     */
                    bool SynFloodThresholdHasBeenSet() const;

                    /**
                     * 获取SYN FLOOD包量阈值
                     * @return SynFloodPktThreshold SYN FLOOD包量阈值
                     * 
                     */
                    uint64_t GetSynFloodPktThreshold() const;

                    /**
                     * 设置SYN FLOOD包量阈值
                     * @param _synFloodPktThreshold SYN FLOOD包量阈值
                     * 
                     */
                    void SetSynFloodPktThreshold(const uint64_t& _synFloodPktThreshold);

                    /**
                     * 判断参数 SynFloodPktThreshold 是否已赋值
                     * @return SynFloodPktThreshold 是否已赋值
                     * 
                     */
                    bool SynFloodPktThresholdHasBeenSet() const;

                    /**
                     * 获取UDP FLOOD流量阈值
                     * @return UdpFloodThreshold UDP FLOOD流量阈值
                     * 
                     */
                    uint64_t GetUdpFloodThreshold() const;

                    /**
                     * 设置UDP FLOOD流量阈值
                     * @param _udpFloodThreshold UDP FLOOD流量阈值
                     * 
                     */
                    void SetUdpFloodThreshold(const uint64_t& _udpFloodThreshold);

                    /**
                     * 判断参数 UdpFloodThreshold 是否已赋值
                     * @return UdpFloodThreshold 是否已赋值
                     * 
                     */
                    bool UdpFloodThresholdHasBeenSet() const;

                    /**
                     * 获取UDP FLOOD包量阈值
                     * @return UdpFloodPktThreshold UDP FLOOD包量阈值
                     * 
                     */
                    uint64_t GetUdpFloodPktThreshold() const;

                    /**
                     * 设置UDP FLOOD包量阈值
                     * @param _udpFloodPktThreshold UDP FLOOD包量阈值
                     * 
                     */
                    void SetUdpFloodPktThreshold(const uint64_t& _udpFloodPktThreshold);

                    /**
                     * 判断参数 UdpFloodPktThreshold 是否已赋值
                     * @return UdpFloodPktThreshold 是否已赋值
                     * 
                     */
                    bool UdpFloodPktThresholdHasBeenSet() const;

                    /**
                     * 获取ACK FLOOD流量阈值
                     * @return AckFloodThreshold ACK FLOOD流量阈值
                     * 
                     */
                    uint64_t GetAckFloodThreshold() const;

                    /**
                     * 设置ACK FLOOD流量阈值
                     * @param _ackFloodThreshold ACK FLOOD流量阈值
                     * 
                     */
                    void SetAckFloodThreshold(const uint64_t& _ackFloodThreshold);

                    /**
                     * 判断参数 AckFloodThreshold 是否已赋值
                     * @return AckFloodThreshold 是否已赋值
                     * 
                     */
                    bool AckFloodThresholdHasBeenSet() const;

                    /**
                     * 获取ACK FLOOD包量阈值
                     * @return AckFloodPktThreshold ACK FLOOD包量阈值
                     * 
                     */
                    uint64_t GetAckFloodPktThreshold() const;

                    /**
                     * 设置ACK FLOOD包量阈值
                     * @param _ackFloodPktThreshold ACK FLOOD包量阈值
                     * 
                     */
                    void SetAckFloodPktThreshold(const uint64_t& _ackFloodPktThreshold);

                    /**
                     * 判断参数 AckFloodPktThreshold 是否已赋值
                     * @return AckFloodPktThreshold 是否已赋值
                     * 
                     */
                    bool AckFloodPktThresholdHasBeenSet() const;

                    /**
                     * 获取SYNACK FLOOD流量阈值
                     * @return SynAckFloodThreshold SYNACK FLOOD流量阈值
                     * 
                     */
                    uint64_t GetSynAckFloodThreshold() const;

                    /**
                     * 设置SYNACK FLOOD流量阈值
                     * @param _synAckFloodThreshold SYNACK FLOOD流量阈值
                     * 
                     */
                    void SetSynAckFloodThreshold(const uint64_t& _synAckFloodThreshold);

                    /**
                     * 判断参数 SynAckFloodThreshold 是否已赋值
                     * @return SynAckFloodThreshold 是否已赋值
                     * 
                     */
                    bool SynAckFloodThresholdHasBeenSet() const;

                    /**
                     * 获取SYNACK FLOOD包量阈值
                     * @return SynAckFloodPktThreshold SYNACK FLOOD包量阈值
                     * 
                     */
                    uint64_t GetSynAckFloodPktThreshold() const;

                    /**
                     * 设置SYNACK FLOOD包量阈值
                     * @param _synAckFloodPktThreshold SYNACK FLOOD包量阈值
                     * 
                     */
                    void SetSynAckFloodPktThreshold(const uint64_t& _synAckFloodPktThreshold);

                    /**
                     * 判断参数 SynAckFloodPktThreshold 是否已赋值
                     * @return SynAckFloodPktThreshold 是否已赋值
                     * 
                     */
                    bool SynAckFloodPktThresholdHasBeenSet() const;

                    /**
                     * 获取RST FLOOD流量阈值
                     * @return RstFloodThreshold RST FLOOD流量阈值
                     * 
                     */
                    uint64_t GetRstFloodThreshold() const;

                    /**
                     * 设置RST FLOOD流量阈值
                     * @param _rstFloodThreshold RST FLOOD流量阈值
                     * 
                     */
                    void SetRstFloodThreshold(const uint64_t& _rstFloodThreshold);

                    /**
                     * 判断参数 RstFloodThreshold 是否已赋值
                     * @return RstFloodThreshold 是否已赋值
                     * 
                     */
                    bool RstFloodThresholdHasBeenSet() const;

                    /**
                     * 获取RST FLOOD包量阈值
                     * @return RstFloodPktThreshold RST FLOOD包量阈值
                     * 
                     */
                    uint64_t GetRstFloodPktThreshold() const;

                    /**
                     * 设置RST FLOOD包量阈值
                     * @param _rstFloodPktThreshold RST FLOOD包量阈值
                     * 
                     */
                    void SetRstFloodPktThreshold(const uint64_t& _rstFloodPktThreshold);

                    /**
                     * 判断参数 RstFloodPktThreshold 是否已赋值
                     * @return RstFloodPktThreshold 是否已赋值
                     * 
                     */
                    bool RstFloodPktThresholdHasBeenSet() const;

                private:

                    /**
                     * DDoS清洗阈值，取值[0, 60, 80, 100, 150, 200, 250, 300, 400, 500, 700, 1000];
当设置值为0时，表示采用默认值；
                     */
                    uint64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * DDoS防护子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 配置其他阈值标志位，1表示配置其他阈值
                     */
                    int64_t m_otherThresholdFlag;
                    bool m_otherThresholdFlagHasBeenSet;

                    /**
                     * SYN FLOOD流量阈值
                     */
                    uint64_t m_synFloodThreshold;
                    bool m_synFloodThresholdHasBeenSet;

                    /**
                     * SYN FLOOD包量阈值
                     */
                    uint64_t m_synFloodPktThreshold;
                    bool m_synFloodPktThresholdHasBeenSet;

                    /**
                     * UDP FLOOD流量阈值
                     */
                    uint64_t m_udpFloodThreshold;
                    bool m_udpFloodThresholdHasBeenSet;

                    /**
                     * UDP FLOOD包量阈值
                     */
                    uint64_t m_udpFloodPktThreshold;
                    bool m_udpFloodPktThresholdHasBeenSet;

                    /**
                     * ACK FLOOD流量阈值
                     */
                    uint64_t m_ackFloodThreshold;
                    bool m_ackFloodThresholdHasBeenSet;

                    /**
                     * ACK FLOOD包量阈值
                     */
                    uint64_t m_ackFloodPktThreshold;
                    bool m_ackFloodPktThresholdHasBeenSet;

                    /**
                     * SYNACK FLOOD流量阈值
                     */
                    uint64_t m_synAckFloodThreshold;
                    bool m_synAckFloodThresholdHasBeenSet;

                    /**
                     * SYNACK FLOOD包量阈值
                     */
                    uint64_t m_synAckFloodPktThreshold;
                    bool m_synAckFloodPktThresholdHasBeenSet;

                    /**
                     * RST FLOOD流量阈值
                     */
                    uint64_t m_rstFloodThreshold;
                    bool m_rstFloodThresholdHasBeenSet;

                    /**
                     * RST FLOOD包量阈值
                     */
                    uint64_t m_rstFloodPktThreshold;
                    bool m_rstFloodPktThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDDOSTHRESHOLDREQUEST_H_
