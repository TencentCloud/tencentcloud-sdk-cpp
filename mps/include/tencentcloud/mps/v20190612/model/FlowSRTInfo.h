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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FLOWSRTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FLOWSRTINFO_H_

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
                * 传输流的SRT质量数据。
                */
                class FlowSRTInfo : public AbstractModel
                {
                public:
                    FlowSRTInfo();
                    ~FlowSRTInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间戳，单位是秒。
                     * @return Timestamp 时间戳，单位是秒。
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置时间戳，单位是秒。
                     * @param _timestamp 时间戳，单位是秒。
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取发送丢包率。
                     * @return SendPacketLossRate 发送丢包率。
                     * 
                     */
                    int64_t GetSendPacketLossRate() const;

                    /**
                     * 设置发送丢包率。
                     * @param _sendPacketLossRate 发送丢包率。
                     * 
                     */
                    void SetSendPacketLossRate(const int64_t& _sendPacketLossRate);

                    /**
                     * 判断参数 SendPacketLossRate 是否已赋值
                     * @return SendPacketLossRate 是否已赋值
                     * 
                     */
                    bool SendPacketLossRateHasBeenSet() const;

                    /**
                     * 获取发送重传率。
                     * @return SendRetransmissionRate 发送重传率。
                     * 
                     */
                    int64_t GetSendRetransmissionRate() const;

                    /**
                     * 设置发送重传率。
                     * @param _sendRetransmissionRate 发送重传率。
                     * 
                     */
                    void SetSendRetransmissionRate(const int64_t& _sendRetransmissionRate);

                    /**
                     * 判断参数 SendRetransmissionRate 是否已赋值
                     * @return SendRetransmissionRate 是否已赋值
                     * 
                     */
                    bool SendRetransmissionRateHasBeenSet() const;

                    /**
                     * 获取接收丢包率。
                     * @return RecvPacketLossRate 接收丢包率。
                     * 
                     */
                    int64_t GetRecvPacketLossRate() const;

                    /**
                     * 设置接收丢包率。
                     * @param _recvPacketLossRate 接收丢包率。
                     * 
                     */
                    void SetRecvPacketLossRate(const int64_t& _recvPacketLossRate);

                    /**
                     * 判断参数 RecvPacketLossRate 是否已赋值
                     * @return RecvPacketLossRate 是否已赋值
                     * 
                     */
                    bool RecvPacketLossRateHasBeenSet() const;

                    /**
                     * 获取接收重传率。
                     * @return RecvRetransmissionRate 接收重传率。
                     * 
                     */
                    int64_t GetRecvRetransmissionRate() const;

                    /**
                     * 设置接收重传率。
                     * @param _recvRetransmissionRate 接收重传率。
                     * 
                     */
                    void SetRecvRetransmissionRate(const int64_t& _recvRetransmissionRate);

                    /**
                     * 判断参数 RecvRetransmissionRate 是否已赋值
                     * @return RecvRetransmissionRate 是否已赋值
                     * 
                     */
                    bool RecvRetransmissionRateHasBeenSet() const;

                    /**
                     * 获取与对端的RTT时延。
                     * @return RTT 与对端的RTT时延。
                     * 
                     */
                    int64_t GetRTT() const;

                    /**
                     * 设置与对端的RTT时延。
                     * @param _rTT 与对端的RTT时延。
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
                     * 获取标志同一次推流。
                     * @return SessionId 标志同一次推流。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置标志同一次推流。
                     * @param _sessionId 标志同一次推流。
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取发送弃包数。
                     * @return SendPacketDropNumber 发送弃包数。
                     * 
                     */
                    int64_t GetSendPacketDropNumber() const;

                    /**
                     * 设置发送弃包数。
                     * @param _sendPacketDropNumber 发送弃包数。
                     * 
                     */
                    void SetSendPacketDropNumber(const int64_t& _sendPacketDropNumber);

                    /**
                     * 判断参数 SendPacketDropNumber 是否已赋值
                     * @return SendPacketDropNumber 是否已赋值
                     * 
                     */
                    bool SendPacketDropNumberHasBeenSet() const;

                    /**
                     * 获取接收弃包数。
                     * @return RecvPacketDropNumber 接收弃包数。
                     * 
                     */
                    int64_t GetRecvPacketDropNumber() const;

                    /**
                     * 设置接收弃包数。
                     * @param _recvPacketDropNumber 接收弃包数。
                     * 
                     */
                    void SetRecvPacketDropNumber(const int64_t& _recvPacketDropNumber);

                    /**
                     * 判断参数 RecvPacketDropNumber 是否已赋值
                     * @return RecvPacketDropNumber 是否已赋值
                     * 
                     */
                    bool RecvPacketDropNumberHasBeenSet() const;

                private:

                    /**
                     * 时间戳，单位是秒。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 发送丢包率。
                     */
                    int64_t m_sendPacketLossRate;
                    bool m_sendPacketLossRateHasBeenSet;

                    /**
                     * 发送重传率。
                     */
                    int64_t m_sendRetransmissionRate;
                    bool m_sendRetransmissionRateHasBeenSet;

                    /**
                     * 接收丢包率。
                     */
                    int64_t m_recvPacketLossRate;
                    bool m_recvPacketLossRateHasBeenSet;

                    /**
                     * 接收重传率。
                     */
                    int64_t m_recvRetransmissionRate;
                    bool m_recvRetransmissionRateHasBeenSet;

                    /**
                     * 与对端的RTT时延。
                     */
                    int64_t m_rTT;
                    bool m_rTTHasBeenSet;

                    /**
                     * 标志同一次推流。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 发送弃包数。
                     */
                    int64_t m_sendPacketDropNumber;
                    bool m_sendPacketDropNumberHasBeenSet;

                    /**
                     * 接收弃包数。
                     */
                    int64_t m_recvPacketDropNumber;
                    bool m_recvPacketDropNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FLOWSRTINFO_H_
