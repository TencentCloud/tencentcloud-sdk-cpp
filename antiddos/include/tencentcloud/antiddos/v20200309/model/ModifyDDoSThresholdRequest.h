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
                     */
                    uint64_t GetThreshold() const;

                    /**
                     * 设置DDoS清洗阈值，取值[0, 60, 80, 100, 150, 200, 250, 300, 400, 500, 700, 1000];
当设置值为0时，表示采用默认值；
                     * @param Threshold DDoS清洗阈值，取值[0, 60, 80, 100, 150, 200, 250, 300, 400, 500, 700, 1000];
当设置值为0时，表示采用默认值；
                     */
                    void SetThreshold(const uint64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return Id 资源ID
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源ID
                     * @param Id 资源ID
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * @param Business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取配置其他阈值标志位，1表示配置其他阈值
                     * @return OtherThresholdFlag 配置其他阈值标志位，1表示配置其他阈值
                     */
                    int64_t GetOtherThresholdFlag() const;

                    /**
                     * 设置配置其他阈值标志位，1表示配置其他阈值
                     * @param OtherThresholdFlag 配置其他阈值标志位，1表示配置其他阈值
                     */
                    void SetOtherThresholdFlag(const int64_t& _otherThresholdFlag);

                    /**
                     * 判断参数 OtherThresholdFlag 是否已赋值
                     * @return OtherThresholdFlag 是否已赋值
                     */
                    bool OtherThresholdFlagHasBeenSet() const;

                    /**
                     * 获取SYN FLOOD流量阈值
                     * @return SynFloodThreshold SYN FLOOD流量阈值
                     */
                    uint64_t GetSynFloodThreshold() const;

                    /**
                     * 设置SYN FLOOD流量阈值
                     * @param SynFloodThreshold SYN FLOOD流量阈值
                     */
                    void SetSynFloodThreshold(const uint64_t& _synFloodThreshold);

                    /**
                     * 判断参数 SynFloodThreshold 是否已赋值
                     * @return SynFloodThreshold 是否已赋值
                     */
                    bool SynFloodThresholdHasBeenSet() const;

                    /**
                     * 获取SYN FLOOD包量阈值
                     * @return SynFloodPktThreshold SYN FLOOD包量阈值
                     */
                    uint64_t GetSynFloodPktThreshold() const;

                    /**
                     * 设置SYN FLOOD包量阈值
                     * @param SynFloodPktThreshold SYN FLOOD包量阈值
                     */
                    void SetSynFloodPktThreshold(const uint64_t& _synFloodPktThreshold);

                    /**
                     * 判断参数 SynFloodPktThreshold 是否已赋值
                     * @return SynFloodPktThreshold 是否已赋值
                     */
                    bool SynFloodPktThresholdHasBeenSet() const;

                    /**
                     * 获取UDP FLOOD流量阈值
                     * @return UdpFloodThreshold UDP FLOOD流量阈值
                     */
                    uint64_t GetUdpFloodThreshold() const;

                    /**
                     * 设置UDP FLOOD流量阈值
                     * @param UdpFloodThreshold UDP FLOOD流量阈值
                     */
                    void SetUdpFloodThreshold(const uint64_t& _udpFloodThreshold);

                    /**
                     * 判断参数 UdpFloodThreshold 是否已赋值
                     * @return UdpFloodThreshold 是否已赋值
                     */
                    bool UdpFloodThresholdHasBeenSet() const;

                    /**
                     * 获取UDP FLOOD包量阈值
                     * @return UdpFloodPktThreshold UDP FLOOD包量阈值
                     */
                    uint64_t GetUdpFloodPktThreshold() const;

                    /**
                     * 设置UDP FLOOD包量阈值
                     * @param UdpFloodPktThreshold UDP FLOOD包量阈值
                     */
                    void SetUdpFloodPktThreshold(const uint64_t& _udpFloodPktThreshold);

                    /**
                     * 判断参数 UdpFloodPktThreshold 是否已赋值
                     * @return UdpFloodPktThreshold 是否已赋值
                     */
                    bool UdpFloodPktThresholdHasBeenSet() const;

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
                     * 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDDOSTHRESHOLDREQUEST_H_
