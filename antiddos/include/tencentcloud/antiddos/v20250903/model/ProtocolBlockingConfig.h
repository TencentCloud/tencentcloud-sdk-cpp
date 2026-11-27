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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_PROTOCOLBLOCKINGCONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_PROTOCOLBLOCKINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * 协议封禁配置。
                */
                class ProtocolBlockingConfig : public AbstractModel
                {
                public:
                    ProtocolBlockingConfig();
                    ~ProtocolBlockingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>TCP 协议封禁。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * @return TCPProtocol <p>TCP 协议封禁。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * 
                     */
                    std::string GetTCPProtocol() const;

                    /**
                     * 设置<p>TCP 协议封禁。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * @param _tCPProtocol <p>TCP 协议封禁。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * 
                     */
                    void SetTCPProtocol(const std::string& _tCPProtocol);

                    /**
                     * 判断参数 TCPProtocol 是否已赋值
                     * @return TCPProtocol 是否已赋值
                     * 
                     */
                    bool TCPProtocolHasBeenSet() const;

                    /**
                     * 获取<p>UDP 协议封禁。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * @return UDPProtocol <p>UDP 协议封禁。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * 
                     */
                    std::string GetUDPProtocol() const;

                    /**
                     * 设置<p>UDP 协议封禁。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * @param _uDPProtocol <p>UDP 协议封禁。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * 
                     */
                    void SetUDPProtocol(const std::string& _uDPProtocol);

                    /**
                     * 判断参数 UDPProtocol 是否已赋值
                     * @return UDPProtocol 是否已赋值
                     * 
                     */
                    bool UDPProtocolHasBeenSet() const;

                    /**
                     * 获取<p>ICMP 协议封禁。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * @return ICMPProtocol <p>ICMP 协议封禁。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * 
                     */
                    std::string GetICMPProtocol() const;

                    /**
                     * 设置<p>ICMP 协议封禁。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * @param _iCMPProtocol <p>ICMP 协议封禁。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * 
                     */
                    void SetICMPProtocol(const std::string& _iCMPProtocol);

                    /**
                     * 判断参数 ICMPProtocol 是否已赋值
                     * @return ICMPProtocol 是否已赋值
                     * 
                     */
                    bool ICMPProtocolHasBeenSet() const;

                    /**
                     * 获取<p>其它协议封禁（除 TCP/UDP/ICMP 外的协议）。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * @return OtherProtocol <p>其它协议封禁（除 TCP/UDP/ICMP 外的协议）。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * 
                     */
                    std::string GetOtherProtocol() const;

                    /**
                     * 设置<p>其它协议封禁（除 TCP/UDP/ICMP 外的协议）。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * @param _otherProtocol <p>其它协议封禁（除 TCP/UDP/ICMP 外的协议）。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * 
                     */
                    void SetOtherProtocol(const std::string& _otherProtocol);

                    /**
                     * 判断参数 OtherProtocol 是否已赋值
                     * @return OtherProtocol 是否已赋值
                     * 
                     */
                    bool OtherProtocolHasBeenSet() const;

                private:

                    /**
                     * <p>TCP 协议封禁。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     */
                    std::string m_tCPProtocol;
                    bool m_tCPProtocolHasBeenSet;

                    /**
                     * <p>UDP 协议封禁。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     */
                    std::string m_uDPProtocol;
                    bool m_uDPProtocolHasBeenSet;

                    /**
                     * <p>ICMP 协议封禁。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     */
                    std::string m_iCMPProtocol;
                    bool m_iCMPProtocolHasBeenSet;

                    /**
                     * <p>其它协议封禁（除 TCP/UDP/ICMP 外的协议）。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     */
                    std::string m_otherProtocol;
                    bool m_otherProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_PROTOCOLBLOCKINGCONFIG_H_
