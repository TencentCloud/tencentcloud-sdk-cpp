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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_TRAFFICSIGNATURECONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_TRAFFICSIGNATURECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20250903/model/PortRange.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * 流量签名校验配置。
                */
                class TrafficSignatureConfig : public AbstractModel
                {
                public:
                    TrafficSignatureConfig();
                    ~TrafficSignatureConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>流量签名配置开关。</p>
                     * @return Switch <p>流量签名配置开关。</p>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>流量签名配置开关。</p>
                     * @param _switch <p>流量签名配置开关。</p>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>流量签名密钥。</p>
                     * @return TrafficSignatureKeys <p>流量签名密钥。</p>
                     * 
                     */
                    std::vector<std::string> GetTrafficSignatureKeys() const;

                    /**
                     * 设置<p>流量签名密钥。</p>
                     * @param _trafficSignatureKeys <p>流量签名密钥。</p>
                     * 
                     */
                    void SetTrafficSignatureKeys(const std::vector<std::string>& _trafficSignatureKeys);

                    /**
                     * 判断参数 TrafficSignatureKeys 是否已赋值
                     * @return TrafficSignatureKeys 是否已赋值
                     * 
                     */
                    bool TrafficSignatureKeysHasBeenSet() const;

                    /**
                     * 获取<p>UDP 协议校验的端口范围，支持输入多个端口或端口范围。</p>
                     * @return UdpCheckPortRanges <p>UDP 协议校验的端口范围，支持输入多个端口或端口范围。</p>
                     * 
                     */
                    std::vector<PortRange> GetUdpCheckPortRanges() const;

                    /**
                     * 设置<p>UDP 协议校验的端口范围，支持输入多个端口或端口范围。</p>
                     * @param _udpCheckPortRanges <p>UDP 协议校验的端口范围，支持输入多个端口或端口范围。</p>
                     * 
                     */
                    void SetUdpCheckPortRanges(const std::vector<PortRange>& _udpCheckPortRanges);

                    /**
                     * 判断参数 UdpCheckPortRanges 是否已赋值
                     * @return UdpCheckPortRanges 是否已赋值
                     * 
                     */
                    bool UdpCheckPortRangesHasBeenSet() const;

                    /**
                     * 获取<p>TCP 协议校验的端口范围，支持输入多个端口或端口范围。</p>
                     * @return TcpCheckPortRanges <p>TCP 协议校验的端口范围，支持输入多个端口或端口范围。</p>
                     * 
                     */
                    std::vector<PortRange> GetTcpCheckPortRanges() const;

                    /**
                     * 设置<p>TCP 协议校验的端口范围，支持输入多个端口或端口范围。</p>
                     * @param _tcpCheckPortRanges <p>TCP 协议校验的端口范围，支持输入多个端口或端口范围。</p>
                     * 
                     */
                    void SetTcpCheckPortRanges(const std::vector<PortRange>& _tcpCheckPortRanges);

                    /**
                     * 判断参数 TcpCheckPortRanges 是否已赋值
                     * @return TcpCheckPortRanges 是否已赋值
                     * 
                     */
                    bool TcpCheckPortRangesHasBeenSet() const;

                    /**
                     * 获取<p>UDP 协议下签名在数据包负载中的起始偏移位置，支持 0 至 100 字节偏移量。默认为0。</p>
                     * @return UdpTrafficSignatureOffset <p>UDP 协议下签名在数据包负载中的起始偏移位置，支持 0 至 100 字节偏移量。默认为0。</p>
                     * 
                     */
                    uint64_t GetUdpTrafficSignatureOffset() const;

                    /**
                     * 设置<p>UDP 协议下签名在数据包负载中的起始偏移位置，支持 0 至 100 字节偏移量。默认为0。</p>
                     * @param _udpTrafficSignatureOffset <p>UDP 协议下签名在数据包负载中的起始偏移位置，支持 0 至 100 字节偏移量。默认为0。</p>
                     * 
                     */
                    void SetUdpTrafficSignatureOffset(const uint64_t& _udpTrafficSignatureOffset);

                    /**
                     * 判断参数 UdpTrafficSignatureOffset 是否已赋值
                     * @return UdpTrafficSignatureOffset 是否已赋值
                     * 
                     */
                    bool UdpTrafficSignatureOffsetHasBeenSet() const;

                    /**
                     * 获取<p>TCP 协议下签名在数据包负载中的起始偏移位置，支持 0 至 100 字节偏移量。默认为0</p>
                     * @return TcpTrafficSignatureOffset <p>TCP 协议下签名在数据包负载中的起始偏移位置，支持 0 至 100 字节偏移量。默认为0</p>
                     * 
                     */
                    int64_t GetTcpTrafficSignatureOffset() const;

                    /**
                     * 设置<p>TCP 协议下签名在数据包负载中的起始偏移位置，支持 0 至 100 字节偏移量。默认为0</p>
                     * @param _tcpTrafficSignatureOffset <p>TCP 协议下签名在数据包负载中的起始偏移位置，支持 0 至 100 字节偏移量。默认为0</p>
                     * 
                     */
                    void SetTcpTrafficSignatureOffset(const int64_t& _tcpTrafficSignatureOffset);

                    /**
                     * 判断参数 TcpTrafficSignatureOffset 是否已赋值
                     * @return TcpTrafficSignatureOffset 是否已赋值
                     * 
                     */
                    bool TcpTrafficSignatureOffsetHasBeenSet() const;

                private:

                    /**
                     * <p>流量签名配置开关。</p>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>流量签名密钥。</p>
                     */
                    std::vector<std::string> m_trafficSignatureKeys;
                    bool m_trafficSignatureKeysHasBeenSet;

                    /**
                     * <p>UDP 协议校验的端口范围，支持输入多个端口或端口范围。</p>
                     */
                    std::vector<PortRange> m_udpCheckPortRanges;
                    bool m_udpCheckPortRangesHasBeenSet;

                    /**
                     * <p>TCP 协议校验的端口范围，支持输入多个端口或端口范围。</p>
                     */
                    std::vector<PortRange> m_tcpCheckPortRanges;
                    bool m_tcpCheckPortRangesHasBeenSet;

                    /**
                     * <p>UDP 协议下签名在数据包负载中的起始偏移位置，支持 0 至 100 字节偏移量。默认为0。</p>
                     */
                    uint64_t m_udpTrafficSignatureOffset;
                    bool m_udpTrafficSignatureOffsetHasBeenSet;

                    /**
                     * <p>TCP 协议下签名在数据包负载中的起始偏移位置，支持 0 至 100 字节偏移量。默认为0</p>
                     */
                    int64_t m_tcpTrafficSignatureOffset;
                    bool m_tcpTrafficSignatureOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_TRAFFICSIGNATURECONFIG_H_
