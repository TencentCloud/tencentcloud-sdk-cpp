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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEINPUTSRTSETTINGS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEINPUTSRTSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SRTSourceAddressResp.h>
#include <tencentcloud/mps/v20190612/model/SRTFECSimpleOptions.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 查询输入的SRT配置信息。
                */
                class DescribeInputSRTSettings : public AbstractModel
                {
                public:
                    DescribeInputSRTSettings();
                    ~DescribeInputSRTSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SRT模式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mode SRT模式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置SRT模式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mode SRT模式。
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
                     * 获取流Id。
                     * @return StreamId 流Id。
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置流Id。
                     * @param _streamId 流Id。
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
                     * 获取延迟。
                     * @return Latency 延迟。
                     * 
                     */
                    int64_t GetLatency() const;

                    /**
                     * 设置延迟。
                     * @param _latency 延迟。
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
                     * 获取接收延迟。
                     * @return RecvLatency 接收延迟。
                     * 
                     */
                    int64_t GetRecvLatency() const;

                    /**
                     * 设置接收延迟。
                     * @param _recvLatency 接收延迟。
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
                     * 获取对端延迟。
                     * @return PeerLatency 对端延迟。
                     * 
                     */
                    int64_t GetPeerLatency() const;

                    /**
                     * 设置对端延迟。
                     * @param _peerLatency 对端延迟。
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
                     * 获取对端空闲超时时间。
                     * @return PeerIdleTimeout 对端空闲超时时间。
                     * 
                     */
                    int64_t GetPeerIdleTimeout() const;

                    /**
                     * 设置对端空闲超时时间。
                     * @param _peerIdleTimeout 对端空闲超时时间。
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
                     * 获取解密密钥。
                     * @return Passphrase 解密密钥。
                     * 
                     */
                    std::string GetPassphrase() const;

                    /**
                     * 设置解密密钥。
                     * @param _passphrase 解密密钥。
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
                     * 获取密钥长度。
                     * @return PbKeyLen 密钥长度。
                     * 
                     */
                    int64_t GetPbKeyLen() const;

                    /**
                     * 设置密钥长度。
                     * @param _pbKeyLen 密钥长度。
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
                     * 获取SRT对端地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceAddresses SRT对端地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SRTSourceAddressResp> GetSourceAddresses() const;

                    /**
                     * 设置SRT对端地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceAddresses SRT对端地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceAddresses(const std::vector<SRTSourceAddressResp>& _sourceAddresses);

                    /**
                     * 判断参数 SourceAddresses 是否已赋值
                     * @return SourceAddresses 是否已赋值
                     * 
                     */
                    bool SourceAddressesHasBeenSet() const;

                    /**
                     * 获取FEC  设置
                     * @return FEC FEC  设置
                     * 
                     */
                    SRTFECSimpleOptions GetFEC() const;

                    /**
                     * 设置FEC  设置
                     * @param _fEC FEC  设置
                     * 
                     */
                    void SetFEC(const SRTFECSimpleOptions& _fEC);

                    /**
                     * 判断参数 FEC 是否已赋值
                     * @return FEC 是否已赋值
                     * 
                     */
                    bool FECHasBeenSet() const;

                private:

                    /**
                     * SRT模式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 流Id。
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * 延迟。
                     */
                    int64_t m_latency;
                    bool m_latencyHasBeenSet;

                    /**
                     * 接收延迟。
                     */
                    int64_t m_recvLatency;
                    bool m_recvLatencyHasBeenSet;

                    /**
                     * 对端延迟。
                     */
                    int64_t m_peerLatency;
                    bool m_peerLatencyHasBeenSet;

                    /**
                     * 对端空闲超时时间。
                     */
                    int64_t m_peerIdleTimeout;
                    bool m_peerIdleTimeoutHasBeenSet;

                    /**
                     * 解密密钥。
                     */
                    std::string m_passphrase;
                    bool m_passphraseHasBeenSet;

                    /**
                     * 密钥长度。
                     */
                    int64_t m_pbKeyLen;
                    bool m_pbKeyLenHasBeenSet;

                    /**
                     * SRT对端地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SRTSourceAddressResp> m_sourceAddresses;
                    bool m_sourceAddressesHasBeenSet;

                    /**
                     * FEC  设置
                     */
                    SRTFECSimpleOptions m_fEC;
                    bool m_fECHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEINPUTSRTSETTINGS_H_
