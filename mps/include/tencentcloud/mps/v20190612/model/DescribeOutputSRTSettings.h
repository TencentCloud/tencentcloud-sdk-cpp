/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUTSRTSETTINGS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUTSRTSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SRTAddressDestination.h>
#include <tencentcloud/mps/v20190612/model/OutputSRTSourceAddressResp.h>
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
                * 查询输出的SRT配置信息。
                */
                class DescribeOutputSRTSettings : public AbstractModel
                {
                public:
                    DescribeOutputSRTSettings();
                    ~DescribeOutputSRTSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>转推的目标的地址信息列表，SRT模式为CALLER时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Destinations <p>转推的目标的地址信息列表，SRT模式为CALLER时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SRTAddressDestination> GetDestinations() const;

                    /**
                     * 设置<p>转推的目标的地址信息列表，SRT模式为CALLER时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _destinations <p>转推的目标的地址信息列表，SRT模式为CALLER时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDestinations(const std::vector<SRTAddressDestination>& _destinations);

                    /**
                     * 判断参数 Destinations 是否已赋值
                     * @return Destinations 是否已赋值
                     * 
                     */
                    bool DestinationsHasBeenSet() const;

                    /**
                     * 获取<p>流Id。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StreamId <p>流Id。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置<p>流Id。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _streamId <p>流Id。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>延迟。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Latency <p>延迟。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLatency() const;

                    /**
                     * 设置<p>延迟。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latency <p>延迟。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>接收延迟。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecvLatency <p>接收延迟。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRecvLatency() const;

                    /**
                     * 设置<p>接收延迟。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recvLatency <p>接收延迟。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>对端延迟。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeerLatency <p>对端延迟。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPeerLatency() const;

                    /**
                     * 设置<p>对端延迟。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _peerLatency <p>对端延迟。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>对端空闲超时时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeerIdleTimeout <p>对端空闲超时时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPeerIdleTimeout() const;

                    /**
                     * 设置<p>对端空闲超时时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _peerIdleTimeout <p>对端空闲超时时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>加密密钥。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Passphrase <p>加密密钥。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassphrase() const;

                    /**
                     * 设置<p>加密密钥。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _passphrase <p>加密密钥。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>加密密钥长度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PbKeyLen <p>加密密钥长度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPbKeyLen() const;

                    /**
                     * 设置<p>加密密钥长度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pbKeyLen <p>加密密钥长度。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>SRT模式。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mode <p>SRT模式。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>SRT模式。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mode <p>SRT模式。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>服务器监听地址，SRT模式为LISTENER时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceAddresses <p>服务器监听地址，SRT模式为LISTENER时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OutputSRTSourceAddressResp> GetSourceAddresses() const;

                    /**
                     * 设置<p>服务器监听地址，SRT模式为LISTENER时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceAddresses <p>服务器监听地址，SRT模式为LISTENER时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceAddresses(const std::vector<OutputSRTSourceAddressResp>& _sourceAddresses);

                    /**
                     * 判断参数 SourceAddresses 是否已赋值
                     * @return SourceAddresses 是否已赋值
                     * 
                     */
                    bool SourceAddressesHasBeenSet() const;

                    /**
                     * 获取<p>FEC 配置</p>
                     * @return FEC <p>FEC 配置</p>
                     * 
                     */
                    SRTFECFullOptions GetFEC() const;

                    /**
                     * 设置<p>FEC 配置</p>
                     * @param _fEC <p>FEC 配置</p>
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
                     * <p>转推的目标的地址信息列表，SRT模式为CALLER时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SRTAddressDestination> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * <p>流Id。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * <p>延迟。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_latency;
                    bool m_latencyHasBeenSet;

                    /**
                     * <p>接收延迟。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_recvLatency;
                    bool m_recvLatencyHasBeenSet;

                    /**
                     * <p>对端延迟。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_peerLatency;
                    bool m_peerLatencyHasBeenSet;

                    /**
                     * <p>对端空闲超时时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_peerIdleTimeout;
                    bool m_peerIdleTimeoutHasBeenSet;

                    /**
                     * <p>加密密钥。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_passphrase;
                    bool m_passphraseHasBeenSet;

                    /**
                     * <p>加密密钥长度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pbKeyLen;
                    bool m_pbKeyLenHasBeenSet;

                    /**
                     * <p>SRT模式。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>服务器监听地址，SRT模式为LISTENER时使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OutputSRTSourceAddressResp> m_sourceAddresses;
                    bool m_sourceAddressesHasBeenSet;

                    /**
                     * <p>FEC 配置</p>
                     */
                    SRTFECFullOptions m_fEC;
                    bool m_fECHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUTSRTSETTINGS_H_
