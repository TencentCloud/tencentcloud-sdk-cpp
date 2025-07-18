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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_PORTINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_PORTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 服务端口配置
                */
                class PortInfo : public AbstractModel
                {
                public:
                    PortInfo();
                    ~PortInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Nginx的服务器id
                     * @return NginxServerId Nginx的服务器id
                     * 
                     */
                    uint64_t GetNginxServerId() const;

                    /**
                     * 设置Nginx的服务器id
                     * @param _nginxServerId Nginx的服务器id
                     * 
                     */
                    void SetNginxServerId(const uint64_t& _nginxServerId);

                    /**
                     * 判断参数 NginxServerId 是否已赋值
                     * @return NginxServerId 是否已赋值
                     * 
                     */
                    bool NginxServerIdHasBeenSet() const;

                    /**
                     * 获取监听端口配置
                     * @return Port 监听端口配置
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置监听端口配置
                     * @param _port 监听端口配置
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取与端口对应的协议
                     * @return Protocol 与端口对应的协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置与端口对应的协议
                     * @param _protocol 与端口对应的协议
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取回源端口
                     * @return UpstreamPort 回源端口
                     * 
                     */
                    std::string GetUpstreamPort() const;

                    /**
                     * 设置回源端口
                     * @param _upstreamPort 回源端口
                     * 
                     */
                    void SetUpstreamPort(const std::string& _upstreamPort);

                    /**
                     * 判断参数 UpstreamPort 是否已赋值
                     * @return UpstreamPort 是否已赋值
                     * 
                     */
                    bool UpstreamPortHasBeenSet() const;

                    /**
                     * 获取回源协议
                     * @return UpstreamProtocol 回源协议
                     * 
                     */
                    std::string GetUpstreamProtocol() const;

                    /**
                     * 设置回源协议
                     * @param _upstreamProtocol 回源协议
                     * 
                     */
                    void SetUpstreamProtocol(const std::string& _upstreamProtocol);

                    /**
                     * 判断参数 UpstreamProtocol 是否已赋值
                     * @return UpstreamProtocol 是否已赋值
                     * 
                     */
                    bool UpstreamProtocolHasBeenSet() const;

                private:

                    /**
                     * Nginx的服务器id
                     */
                    uint64_t m_nginxServerId;
                    bool m_nginxServerIdHasBeenSet;

                    /**
                     * 监听端口配置
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 与端口对应的协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 回源端口
                     */
                    std::string m_upstreamPort;
                    bool m_upstreamPortHasBeenSet;

                    /**
                     * 回源协议
                     */
                    std::string m_upstreamProtocol;
                    bool m_upstreamProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_PORTINFO_H_
