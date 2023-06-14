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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FLOWREALTIMESTATUSSRT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FLOWREALTIMESTATUSSRT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 流状态实时查询接口的SRT信息。
                */
                class FlowRealtimeStatusSRT : public AbstractModel
                {
                public:
                    FlowRealtimeStatusSRT();
                    ~FlowRealtimeStatusSRT() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取延迟，单位为ms。
                     * @return Latency 延迟，单位为ms。
                     * 
                     */
                    int64_t GetLatency() const;

                    /**
                     * 设置延迟，单位为ms。
                     * @param _latency 延迟，单位为ms。
                     * 
                     */
                    void SetLatency(const int64_t& _latency);

                    /**
                     * 判断参数 Latency 是否已赋值
                     * @return Latency 是否已赋值
                     * 
                     */
                    bool LatencyHasBeenSet() const;

                    /**
                     * 获取RTT，单位为ms。
                     * @return RTT RTT，单位为ms。
                     * 
                     */
                    int64_t GetRTT() const;

                    /**
                     * 设置RTT，单位为ms。
                     * @param _rTT RTT，单位为ms。
                     * 
                     */
                    void SetRTT(const int64_t& _rTT);

                    /**
                     * 判断参数 RTT 是否已赋值
                     * @return RTT 是否已赋值
                     * 
                     */
                    bool RTTHasBeenSet() const;

                    /**
                     * 获取实时发包数或者收包数。
                     * @return Packets 实时发包数或者收包数。
                     * 
                     */
                    int64_t GetPackets() const;

                    /**
                     * 设置实时发包数或者收包数。
                     * @param _packets 实时发包数或者收包数。
                     * 
                     */
                    void SetPackets(const int64_t& _packets);

                    /**
                     * 判断参数 Packets 是否已赋值
                     * @return Packets 是否已赋值
                     * 
                     */
                    bool PacketsHasBeenSet() const;

                    /**
                     * 获取丢包率。
                     * @return PacketLossRate 丢包率。
                     * 
                     */
                    double GetPacketLossRate() const;

                    /**
                     * 设置丢包率。
                     * @param _packetLossRate 丢包率。
                     * 
                     */
                    void SetPacketLossRate(const double& _packetLossRate);

                    /**
                     * 判断参数 PacketLossRate 是否已赋值
                     * @return PacketLossRate 是否已赋值
                     * 
                     */
                    bool PacketLossRateHasBeenSet() const;

                    /**
                     * 获取重传率。
                     * @return RetransmitRate 重传率。
                     * 
                     */
                    double GetRetransmitRate() const;

                    /**
                     * 设置重传率。
                     * @param _retransmitRate 重传率。
                     * 
                     */
                    void SetRetransmitRate(const double& _retransmitRate);

                    /**
                     * 判断参数 RetransmitRate 是否已赋值
                     * @return RetransmitRate 是否已赋值
                     * 
                     */
                    bool RetransmitRateHasBeenSet() const;

                    /**
                     * 获取实时丢包数。
                     * @return DroppedPackets 实时丢包数。
                     * 
                     */
                    int64_t GetDroppedPackets() const;

                    /**
                     * 设置实时丢包数。
                     * @param _droppedPackets 实时丢包数。
                     * 
                     */
                    void SetDroppedPackets(const int64_t& _droppedPackets);

                    /**
                     * 判断参数 DroppedPackets 是否已赋值
                     * @return DroppedPackets 是否已赋值
                     * 
                     */
                    bool DroppedPacketsHasBeenSet() const;

                    /**
                     * 获取是否加密，On|Off。
                     * @return Encryption 是否加密，On|Off。
                     * 
                     */
                    std::string GetEncryption() const;

                    /**
                     * 设置是否加密，On|Off。
                     * @param _encryption 是否加密，On|Off。
                     * 
                     */
                    void SetEncryption(const std::string& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                private:

                    /**
                     * 延迟，单位为ms。
                     */
                    int64_t m_latency;
                    bool m_latencyHasBeenSet;

                    /**
                     * RTT，单位为ms。
                     */
                    int64_t m_rTT;
                    bool m_rTTHasBeenSet;

                    /**
                     * 实时发包数或者收包数。
                     */
                    int64_t m_packets;
                    bool m_packetsHasBeenSet;

                    /**
                     * 丢包率。
                     */
                    double m_packetLossRate;
                    bool m_packetLossRateHasBeenSet;

                    /**
                     * 重传率。
                     */
                    double m_retransmitRate;
                    bool m_retransmitRateHasBeenSet;

                    /**
                     * 实时丢包数。
                     */
                    int64_t m_droppedPackets;
                    bool m_droppedPacketsHasBeenSet;

                    /**
                     * 是否加密，On|Off。
                     */
                    std::string m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FLOWREALTIMESTATUSSRT_H_
