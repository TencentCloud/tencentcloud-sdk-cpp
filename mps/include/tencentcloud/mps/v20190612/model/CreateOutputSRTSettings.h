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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEOUTPUTSRTSETTINGS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEOUTPUTSRTSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CreateOutputSRTSettingsDestinations.h>
#include <tencentcloud/mps/v20190612/model/SRTFECFullOptions.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 创建媒体传输流的输出的SRT配置。
                */
                class CreateOutputSRTSettings : public AbstractModel
                {
                public:
                    CreateOutputSRTSettings();
                    ~CreateOutputSRTSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转推的目标地址，当Mode为CALLER时必填，且只能填1组。
                     * @return Destinations 转推的目标地址，当Mode为CALLER时必填，且只能填1组。
                     * 
                     */
                    std::vector<CreateOutputSRTSettingsDestinations> GetDestinations() const;

                    /**
                     * 设置转推的目标地址，当Mode为CALLER时必填，且只能填1组。
                     * @param _destinations 转推的目标地址，当Mode为CALLER时必填，且只能填1组。
                     * 
                     */
                    void SetDestinations(const std::vector<CreateOutputSRTSettingsDestinations>& _destinations);

                    /**
                     * 判断参数 Destinations 是否已赋值
                     * @return Destinations 是否已赋值
                     * 
                     */
                    bool DestinationsHasBeenSet() const;

                    /**
                     * 获取转推SRT的流Id，可选大小写字母、数字和特殊字符（.#!:&,=_-），长度为0~512。
                     * @return StreamId 转推SRT的流Id，可选大小写字母、数字和特殊字符（.#!:&,=_-），长度为0~512。
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置转推SRT的流Id，可选大小写字母、数字和特殊字符（.#!:&,=_-），长度为0~512。
                     * @param _streamId 转推SRT的流Id，可选大小写字母、数字和特殊字符（.#!:&,=_-），长度为0~512。
                     * 
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     * 
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取转推SRT的延迟，默认120，单位ms，范围为[0, 3000]。此参数同时设置了发送方和接收方的延迟（recvlatency和peerlatency）为相同的值。建议配置为至少3倍RTT，以确保在网络拥塞时能够有效处理数据包的重传和确认
                     * @return Latency 转推SRT的延迟，默认120，单位ms，范围为[0, 3000]。此参数同时设置了发送方和接收方的延迟（recvlatency和peerlatency）为相同的值。建议配置为至少3倍RTT，以确保在网络拥塞时能够有效处理数据包的重传和确认
                     * 
                     */
                    int64_t GetLatency() const;

                    /**
                     * 设置转推SRT的延迟，默认120，单位ms，范围为[0, 3000]。此参数同时设置了发送方和接收方的延迟（recvlatency和peerlatency）为相同的值。建议配置为至少3倍RTT，以确保在网络拥塞时能够有效处理数据包的重传和确认
                     * @param _latency 转推SRT的延迟，默认120，单位ms，范围为[0, 3000]。此参数同时设置了发送方和接收方的延迟（recvlatency和peerlatency）为相同的值。建议配置为至少3倍RTT，以确保在网络拥塞时能够有效处理数据包的重传和确认
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
                     * 获取转推SRT的接收延迟，默认120，单位ms，范围为[0, 3000]。 此参数表示接收方用于缓存数据包的时间长度
                     * @return RecvLatency 转推SRT的接收延迟，默认120，单位ms，范围为[0, 3000]。 此参数表示接收方用于缓存数据包的时间长度
                     * 
                     */
                    int64_t GetRecvLatency() const;

                    /**
                     * 设置转推SRT的接收延迟，默认120，单位ms，范围为[0, 3000]。 此参数表示接收方用于缓存数据包的时间长度
                     * @param _recvLatency 转推SRT的接收延迟，默认120，单位ms，范围为[0, 3000]。 此参数表示接收方用于缓存数据包的时间长度
                     * 
                     */
                    void SetRecvLatency(const int64_t& _recvLatency);

                    /**
                     * 判断参数 RecvLatency 是否已赋值
                     * @return RecvLatency 是否已赋值
                     * 
                     */
                    bool RecvLatencyHasBeenSet() const;

                    /**
                     * 获取转推SRT的对端延迟，默认120，单位ms，范围为[0, 3000]。 此参数由发送方设置，用于告知接收方其期望的延迟缓冲时间
                     * @return PeerLatency 转推SRT的对端延迟，默认120，单位ms，范围为[0, 3000]。 此参数由发送方设置，用于告知接收方其期望的延迟缓冲时间
                     * 
                     */
                    int64_t GetPeerLatency() const;

                    /**
                     * 设置转推SRT的对端延迟，默认120，单位ms，范围为[0, 3000]。 此参数由发送方设置，用于告知接收方其期望的延迟缓冲时间
                     * @param _peerLatency 转推SRT的对端延迟，默认120，单位ms，范围为[0, 3000]。 此参数由发送方设置，用于告知接收方其期望的延迟缓冲时间
                     * 
                     */
                    void SetPeerLatency(const int64_t& _peerLatency);

                    /**
                     * 判断参数 PeerLatency 是否已赋值
                     * @return PeerLatency 是否已赋值
                     * 
                     */
                    bool PeerLatencyHasBeenSet() const;

                    /**
                     * 获取转推SRT的对端空闲超时时间，默认5000，单位ms，范围为[1000, 10000]。 如果连接在设定的超时时间内没有活动，将会被关闭
                     * @return PeerIdleTimeout 转推SRT的对端空闲超时时间，默认5000，单位ms，范围为[1000, 10000]。 如果连接在设定的超时时间内没有活动，将会被关闭
                     * 
                     */
                    int64_t GetPeerIdleTimeout() const;

                    /**
                     * 设置转推SRT的对端空闲超时时间，默认5000，单位ms，范围为[1000, 10000]。 如果连接在设定的超时时间内没有活动，将会被关闭
                     * @param _peerIdleTimeout 转推SRT的对端空闲超时时间，默认5000，单位ms，范围为[1000, 10000]。 如果连接在设定的超时时间内没有活动，将会被关闭
                     * 
                     */
                    void SetPeerIdleTimeout(const int64_t& _peerIdleTimeout);

                    /**
                     * 判断参数 PeerIdleTimeout 是否已赋值
                     * @return PeerIdleTimeout 是否已赋值
                     * 
                     */
                    bool PeerIdleTimeoutHasBeenSet() const;

                    /**
                     * 获取转推SRT的加密密钥，默认为空，表示不加密。只可填ascii码值，长度为[10, 79]。
                     * @return Passphrase 转推SRT的加密密钥，默认为空，表示不加密。只可填ascii码值，长度为[10, 79]。
                     * 
                     */
                    std::string GetPassphrase() const;

                    /**
                     * 设置转推SRT的加密密钥，默认为空，表示不加密。只可填ascii码值，长度为[10, 79]。
                     * @param _passphrase 转推SRT的加密密钥，默认为空，表示不加密。只可填ascii码值，长度为[10, 79]。
                     * 
                     */
                    void SetPassphrase(const std::string& _passphrase);

                    /**
                     * 判断参数 Passphrase 是否已赋值
                     * @return Passphrase 是否已赋值
                     * 
                     */
                    bool PassphraseHasBeenSet() const;

                    /**
                     * 获取转推SRT的密钥长度，默认为0，可选[0|16|24|32]。
                     * @return PbKeyLen 转推SRT的密钥长度，默认为0，可选[0|16|24|32]。
                     * 
                     */
                    int64_t GetPbKeyLen() const;

                    /**
                     * 设置转推SRT的密钥长度，默认为0，可选[0|16|24|32]。
                     * @param _pbKeyLen 转推SRT的密钥长度，默认为0，可选[0|16|24|32]。
                     * 
                     */
                    void SetPbKeyLen(const int64_t& _pbKeyLen);

                    /**
                     * 判断参数 PbKeyLen 是否已赋值
                     * @return PbKeyLen 是否已赋值
                     * 
                     */
                    bool PbKeyLenHasBeenSet() const;

                    /**
                     * 获取SRT模式，可选[LISTENER|CALLER]，默认为CALLER。
                     * @return Mode SRT模式，可选[LISTENER|CALLER]，默认为CALLER。
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置SRT模式，可选[LISTENER|CALLER]，默认为CALLER。
                     * @param _mode SRT模式，可选[LISTENER|CALLER]，默认为CALLER。
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取SRT FEC 设置
                     * @return FEC SRT FEC 设置
                     * 
                     */
                    SRTFECFullOptions GetFEC() const;

                    /**
                     * 设置SRT FEC 设置
                     * @param _fEC SRT FEC 设置
                     * 
                     */
                    void SetFEC(const SRTFECFullOptions& _fEC);

                    /**
                     * 判断参数 FEC 是否已赋值
                     * @return FEC 是否已赋值
                     * 
                     */
                    bool FECHasBeenSet() const;

                private:

                    /**
                     * 转推的目标地址，当Mode为CALLER时必填，且只能填1组。
                     */
                    std::vector<CreateOutputSRTSettingsDestinations> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * 转推SRT的流Id，可选大小写字母、数字和特殊字符（.#!:&,=_-），长度为0~512。
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * 转推SRT的延迟，默认120，单位ms，范围为[0, 3000]。此参数同时设置了发送方和接收方的延迟（recvlatency和peerlatency）为相同的值。建议配置为至少3倍RTT，以确保在网络拥塞时能够有效处理数据包的重传和确认
                     */
                    int64_t m_latency;
                    bool m_latencyHasBeenSet;

                    /**
                     * 转推SRT的接收延迟，默认120，单位ms，范围为[0, 3000]。 此参数表示接收方用于缓存数据包的时间长度
                     */
                    int64_t m_recvLatency;
                    bool m_recvLatencyHasBeenSet;

                    /**
                     * 转推SRT的对端延迟，默认120，单位ms，范围为[0, 3000]。 此参数由发送方设置，用于告知接收方其期望的延迟缓冲时间
                     */
                    int64_t m_peerLatency;
                    bool m_peerLatencyHasBeenSet;

                    /**
                     * 转推SRT的对端空闲超时时间，默认5000，单位ms，范围为[1000, 10000]。 如果连接在设定的超时时间内没有活动，将会被关闭
                     */
                    int64_t m_peerIdleTimeout;
                    bool m_peerIdleTimeoutHasBeenSet;

                    /**
                     * 转推SRT的加密密钥，默认为空，表示不加密。只可填ascii码值，长度为[10, 79]。
                     */
                    std::string m_passphrase;
                    bool m_passphraseHasBeenSet;

                    /**
                     * 转推SRT的密钥长度，默认为0，可选[0|16|24|32]。
                     */
                    int64_t m_pbKeyLen;
                    bool m_pbKeyLenHasBeenSet;

                    /**
                     * SRT模式，可选[LISTENER|CALLER]，默认为CALLER。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * SRT FEC 设置
                     */
                    SRTFECFullOptions m_fEC;
                    bool m_fECHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEOUTPUTSRTSETTINGS_H_
