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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROTECTTHRESHOLDRELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROTECTTHRESHOLDRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceRelation.h>
#include <tencentcloud/antiddos/v20200309/model/ListenerCcThreholdConfig.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 防护阈值配置相关信息
                */
                class ProtectThresholdRelation : public AbstractModel
                {
                public:
                    ProtectThresholdRelation();
                    ~ProtectThresholdRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DDoS防护等级，取值[
low(宽松)
middle(适中)
high(严格)
]
                     * @return DDoSLevel DDoS防护等级，取值[
low(宽松)
middle(适中)
high(严格)
]
                     */
                    std::string GetDDoSLevel() const;

                    /**
                     * 设置DDoS防护等级，取值[
low(宽松)
middle(适中)
high(严格)
]
                     * @param DDoSLevel DDoS防护等级，取值[
low(宽松)
middle(适中)
high(严格)
]
                     */
                    void SetDDoSLevel(const std::string& _dDoSLevel);

                    /**
                     * 判断参数 DDoSLevel 是否已赋值
                     * @return DDoSLevel 是否已赋值
                     */
                    bool DDoSLevelHasBeenSet() const;

                    /**
                     * 获取DDoS清洗阈值，单位Mbps
                     * @return DDoSThreshold DDoS清洗阈值，单位Mbps
                     */
                    uint64_t GetDDoSThreshold() const;

                    /**
                     * 设置DDoS清洗阈值，单位Mbps
                     * @param DDoSThreshold DDoS清洗阈值，单位Mbps
                     */
                    void SetDDoSThreshold(const uint64_t& _dDoSThreshold);

                    /**
                     * 判断参数 DDoSThreshold 是否已赋值
                     * @return DDoSThreshold 是否已赋值
                     */
                    bool DDoSThresholdHasBeenSet() const;

                    /**
                     * 获取DDoS的AI防护开关，取值[
on(开启)
off(关闭)
]
                     * @return DDoSAI DDoS的AI防护开关，取值[
on(开启)
off(关闭)
]
                     */
                    std::string GetDDoSAI() const;

                    /**
                     * 设置DDoS的AI防护开关，取值[
on(开启)
off(关闭)
]
                     * @param DDoSAI DDoS的AI防护开关，取值[
on(开启)
off(关闭)
]
                     */
                    void SetDDoSAI(const std::string& _dDoSAI);

                    /**
                     * 判断参数 DDoSAI 是否已赋值
                     * @return DDoSAI 是否已赋值
                     */
                    bool DDoSAIHasBeenSet() const;

                    /**
                     * 获取CC清洗开关，取值[
0(关闭)
1(开启)
]
                     * @return CCEnable CC清洗开关，取值[
0(关闭)
1(开启)
]
                     */
                    uint64_t GetCCEnable() const;

                    /**
                     * 设置CC清洗开关，取值[
0(关闭)
1(开启)
]
                     * @param CCEnable CC清洗开关，取值[
0(关闭)
1(开启)
]
                     */
                    void SetCCEnable(const uint64_t& _cCEnable);

                    /**
                     * 判断参数 CCEnable 是否已赋值
                     * @return CCEnable 是否已赋值
                     */
                    bool CCEnableHasBeenSet() const;

                    /**
                     * 获取CC清洗阈值，单位QPS
                     * @return CCThreshold CC清洗阈值，单位QPS
                     */
                    uint64_t GetCCThreshold() const;

                    /**
                     * 设置CC清洗阈值，单位QPS
                     * @param CCThreshold CC清洗阈值，单位QPS
                     */
                    void SetCCThreshold(const uint64_t& _cCThreshold);

                    /**
                     * 判断参数 CCThreshold 是否已赋值
                     * @return CCThreshold 是否已赋值
                     */
                    bool CCThresholdHasBeenSet() const;

                    /**
                     * 获取所属的资源实例
                     * @return InstanceDetailList 所属的资源实例
                     */
                    std::vector<InstanceRelation> GetInstanceDetailList() const;

                    /**
                     * 设置所属的资源实例
                     * @param InstanceDetailList 所属的资源实例
                     */
                    void SetInstanceDetailList(const std::vector<InstanceRelation>& _instanceDetailList);

                    /**
                     * 判断参数 InstanceDetailList 是否已赋值
                     * @return InstanceDetailList 是否已赋值
                     */
                    bool InstanceDetailListHasBeenSet() const;

                    /**
                     * 获取域名与协议纬度的防护阈值
                     * @return ListenerCcThresholdList 域名与协议纬度的防护阈值
                     */
                    std::vector<ListenerCcThreholdConfig> GetListenerCcThresholdList() const;

                    /**
                     * 设置域名与协议纬度的防护阈值
                     * @param ListenerCcThresholdList 域名与协议纬度的防护阈值
                     */
                    void SetListenerCcThresholdList(const std::vector<ListenerCcThreholdConfig>& _listenerCcThresholdList);

                    /**
                     * 判断参数 ListenerCcThresholdList 是否已赋值
                     * @return ListenerCcThresholdList 是否已赋值
                     */
                    bool ListenerCcThresholdListHasBeenSet() const;

                    /**
                     * 获取SYN FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SynFloodThreshold SYN FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetSynFloodThreshold() const;

                    /**
                     * 设置SYN FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SynFloodThreshold SYN FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSynFloodThreshold(const uint64_t& _synFloodThreshold);

                    /**
                     * 判断参数 SynFloodThreshold 是否已赋值
                     * @return SynFloodThreshold 是否已赋值
                     */
                    bool SynFloodThresholdHasBeenSet() const;

                    /**
                     * 获取SYN FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SynFloodPktThreshold SYN FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetSynFloodPktThreshold() const;

                    /**
                     * 设置SYN FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SynFloodPktThreshold SYN FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSynFloodPktThreshold(const uint64_t& _synFloodPktThreshold);

                    /**
                     * 判断参数 SynFloodPktThreshold 是否已赋值
                     * @return SynFloodPktThreshold 是否已赋值
                     */
                    bool SynFloodPktThresholdHasBeenSet() const;

                    /**
                     * 获取UDP FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UdpFloodThreshold UDP FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetUdpFloodThreshold() const;

                    /**
                     * 设置UDP FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UdpFloodThreshold UDP FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUdpFloodThreshold(const uint64_t& _udpFloodThreshold);

                    /**
                     * 判断参数 UdpFloodThreshold 是否已赋值
                     * @return UdpFloodThreshold 是否已赋值
                     */
                    bool UdpFloodThresholdHasBeenSet() const;

                    /**
                     * 获取UDP FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UdpFloodPktThreshold UDP FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetUdpFloodPktThreshold() const;

                    /**
                     * 设置UDP FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UdpFloodPktThreshold UDP FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUdpFloodPktThreshold(const uint64_t& _udpFloodPktThreshold);

                    /**
                     * 判断参数 UdpFloodPktThreshold 是否已赋值
                     * @return UdpFloodPktThreshold 是否已赋值
                     */
                    bool UdpFloodPktThresholdHasBeenSet() const;

                    /**
                     * 获取ACK FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AckFloodThreshold ACK FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetAckFloodThreshold() const;

                    /**
                     * 设置ACK FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AckFloodThreshold ACK FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAckFloodThreshold(const uint64_t& _ackFloodThreshold);

                    /**
                     * 判断参数 AckFloodThreshold 是否已赋值
                     * @return AckFloodThreshold 是否已赋值
                     */
                    bool AckFloodThresholdHasBeenSet() const;

                    /**
                     * 获取ACK FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AckFloodPktThreshold ACK FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetAckFloodPktThreshold() const;

                    /**
                     * 设置ACK FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AckFloodPktThreshold ACK FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAckFloodPktThreshold(const uint64_t& _ackFloodPktThreshold);

                    /**
                     * 判断参数 AckFloodPktThreshold 是否已赋值
                     * @return AckFloodPktThreshold 是否已赋值
                     */
                    bool AckFloodPktThresholdHasBeenSet() const;

                    /**
                     * 获取SYNACK FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SynAckFloodThreshold SYNACK FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetSynAckFloodThreshold() const;

                    /**
                     * 设置SYNACK FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SynAckFloodThreshold SYNACK FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSynAckFloodThreshold(const uint64_t& _synAckFloodThreshold);

                    /**
                     * 判断参数 SynAckFloodThreshold 是否已赋值
                     * @return SynAckFloodThreshold 是否已赋值
                     */
                    bool SynAckFloodThresholdHasBeenSet() const;

                    /**
                     * 获取SYNACK FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SynAckFloodPktThreshold SYNACK FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetSynAckFloodPktThreshold() const;

                    /**
                     * 设置SYNACK FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SynAckFloodPktThreshold SYNACK FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSynAckFloodPktThreshold(const uint64_t& _synAckFloodPktThreshold);

                    /**
                     * 判断参数 SynAckFloodPktThreshold 是否已赋值
                     * @return SynAckFloodPktThreshold 是否已赋值
                     */
                    bool SynAckFloodPktThresholdHasBeenSet() const;

                    /**
                     * 获取RST FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RstFloodThreshold RST FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRstFloodThreshold() const;

                    /**
                     * 设置RST FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RstFloodThreshold RST FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRstFloodThreshold(const uint64_t& _rstFloodThreshold);

                    /**
                     * 判断参数 RstFloodThreshold 是否已赋值
                     * @return RstFloodThreshold 是否已赋值
                     */
                    bool RstFloodThresholdHasBeenSet() const;

                    /**
                     * 获取RST FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RstFloodPktThreshold RST FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRstFloodPktThreshold() const;

                    /**
                     * 设置RST FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RstFloodPktThreshold RST FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRstFloodPktThreshold(const uint64_t& _rstFloodPktThreshold);

                    /**
                     * 判断参数 RstFloodPktThreshold 是否已赋值
                     * @return RstFloodPktThreshold 是否已赋值
                     */
                    bool RstFloodPktThresholdHasBeenSet() const;

                private:

                    /**
                     * DDoS防护等级，取值[
low(宽松)
middle(适中)
high(严格)
]
                     */
                    std::string m_dDoSLevel;
                    bool m_dDoSLevelHasBeenSet;

                    /**
                     * DDoS清洗阈值，单位Mbps
                     */
                    uint64_t m_dDoSThreshold;
                    bool m_dDoSThresholdHasBeenSet;

                    /**
                     * DDoS的AI防护开关，取值[
on(开启)
off(关闭)
]
                     */
                    std::string m_dDoSAI;
                    bool m_dDoSAIHasBeenSet;

                    /**
                     * CC清洗开关，取值[
0(关闭)
1(开启)
]
                     */
                    uint64_t m_cCEnable;
                    bool m_cCEnableHasBeenSet;

                    /**
                     * CC清洗阈值，单位QPS
                     */
                    uint64_t m_cCThreshold;
                    bool m_cCThresholdHasBeenSet;

                    /**
                     * 所属的资源实例
                     */
                    std::vector<InstanceRelation> m_instanceDetailList;
                    bool m_instanceDetailListHasBeenSet;

                    /**
                     * 域名与协议纬度的防护阈值
                     */
                    std::vector<ListenerCcThreholdConfig> m_listenerCcThresholdList;
                    bool m_listenerCcThresholdListHasBeenSet;

                    /**
                     * SYN FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_synFloodThreshold;
                    bool m_synFloodThresholdHasBeenSet;

                    /**
                     * SYN FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_synFloodPktThreshold;
                    bool m_synFloodPktThresholdHasBeenSet;

                    /**
                     * UDP FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_udpFloodThreshold;
                    bool m_udpFloodThresholdHasBeenSet;

                    /**
                     * UDP FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_udpFloodPktThreshold;
                    bool m_udpFloodPktThresholdHasBeenSet;

                    /**
                     * ACK FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ackFloodThreshold;
                    bool m_ackFloodThresholdHasBeenSet;

                    /**
                     * ACK FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ackFloodPktThreshold;
                    bool m_ackFloodPktThresholdHasBeenSet;

                    /**
                     * SYNACK FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_synAckFloodThreshold;
                    bool m_synAckFloodThresholdHasBeenSet;

                    /**
                     * SYNACK FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_synAckFloodPktThreshold;
                    bool m_synAckFloodPktThresholdHasBeenSet;

                    /**
                     * RST FLOOD流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_rstFloodThreshold;
                    bool m_rstFloodThresholdHasBeenSet;

                    /**
                     * RST FLOOD包量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_rstFloodPktThreshold;
                    bool m_rstFloodPktThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROTECTTHRESHOLDRELATION_H_
