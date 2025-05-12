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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SPARTAPROTECTIONPORT_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SPARTAPROTECTIONPORT_H_

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
                * waf斯巴达-编辑防护域名中的端口结构
                */
                class SpartaProtectionPort : public AbstractModel
                {
                public:
                    SpartaProtectionPort();
                    ~SpartaProtectionPort() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分配的服务器id。首次接入的域名和端口该参数填0，已接入的域名和端口分配的id可以通过DescribeDomainDetailsSaas或DescribeDomains接口获取。
                     * @return NginxServerId 分配的服务器id。首次接入的域名和端口该参数填0，已接入的域名和端口分配的id可以通过DescribeDomainDetailsSaas或DescribeDomains接口获取。
                     * 
                     */
                    uint64_t GetNginxServerId() const;

                    /**
                     * 设置分配的服务器id。首次接入的域名和端口该参数填0，已接入的域名和端口分配的id可以通过DescribeDomainDetailsSaas或DescribeDomains接口获取。
                     * @param _nginxServerId 分配的服务器id。首次接入的域名和端口该参数填0，已接入的域名和端口分配的id可以通过DescribeDomainDetailsSaas或DescribeDomains接口获取。
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
                     * 获取端口
                     * @return Port 端口
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口
                     * @param _port 端口
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
                     * 获取协议
                     * @return Protocol 协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
                     * @param _protocol 协议
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
                     * 获取后端端口
                     * @return UpstreamPort 后端端口
                     * 
                     */
                    std::string GetUpstreamPort() const;

                    /**
                     * 设置后端端口
                     * @param _upstreamPort 后端端口
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
                     * 获取后端协议
                     * @return UpstreamProtocol 后端协议
                     * 
                     */
                    std::string GetUpstreamProtocol() const;

                    /**
                     * 设置后端协议
                     * @param _upstreamProtocol 后端协议
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
                     * 分配的服务器id。首次接入的域名和端口该参数填0，已接入的域名和端口分配的id可以通过DescribeDomainDetailsSaas或DescribeDomains接口获取。
                     */
                    uint64_t m_nginxServerId;
                    bool m_nginxServerIdHasBeenSet;

                    /**
                     * 端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 后端端口
                     */
                    std::string m_upstreamPort;
                    bool m_upstreamPortHasBeenSet;

                    /**
                     * 后端协议
                     */
                    std::string m_upstreamProtocol;
                    bool m_upstreamProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SPARTAPROTECTIONPORT_H_
