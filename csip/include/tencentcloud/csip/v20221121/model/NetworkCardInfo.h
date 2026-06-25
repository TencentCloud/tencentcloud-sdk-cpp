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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_NETWORKCARDINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_NETWORKCARDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 网卡信息
                */
                class NetworkCardInfo : public AbstractModel
                {
                public:
                    NetworkCardInfo();
                    ~NetworkCardInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>DNS服务器</p>
                     * @return DnsServer <p>DNS服务器</p>
                     * 
                     */
                    std::string GetDnsServer() const;

                    /**
                     * 设置<p>DNS服务器</p>
                     * @param _dnsServer <p>DNS服务器</p>
                     * 
                     */
                    void SetDnsServer(const std::string& _dnsServer);

                    /**
                     * 判断参数 DnsServer 是否已赋值
                     * @return DnsServer 是否已赋值
                     * 
                     */
                    bool DnsServerHasBeenSet() const;

                    /**
                     * 获取<p>网关</p>
                     * @return Gateway <p>网关</p>
                     * 
                     */
                    std::string GetGateway() const;

                    /**
                     * 设置<p>网关</p>
                     * @param _gateway <p>网关</p>
                     * 
                     */
                    void SetGateway(const std::string& _gateway);

                    /**
                     * 判断参数 Gateway 是否已赋值
                     * @return Gateway 是否已赋值
                     * 
                     */
                    bool GatewayHasBeenSet() const;

                    /**
                     * 获取<p>IP地址</p>
                     * @return Ip <p>IP地址</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>IP地址</p>
                     * @param _ip <p>IP地址</p>
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取<p>IPv6地址</p>
                     * @return Ipv6 <p>IPv6地址</p>
                     * 
                     */
                    std::string GetIpv6() const;

                    /**
                     * 设置<p>IPv6地址</p>
                     * @param _ipv6 <p>IPv6地址</p>
                     * 
                     */
                    void SetIpv6(const std::string& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     * 
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取<p>MAC地址</p>
                     * @return Mac <p>MAC地址</p>
                     * 
                     */
                    std::string GetMac() const;

                    /**
                     * 设置<p>MAC地址</p>
                     * @param _mac <p>MAC地址</p>
                     * 
                     */
                    void SetMac(const std::string& _mac);

                    /**
                     * 判断参数 Mac 是否已赋值
                     * @return Mac 是否已赋值
                     * 
                     */
                    bool MacHasBeenSet() const;

                    /**
                     * 获取<p>网卡名称</p>
                     * @return Name <p>网卡名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>网卡名称</p>
                     * @param _name <p>网卡名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * <p>DNS服务器</p>
                     */
                    std::string m_dnsServer;
                    bool m_dnsServerHasBeenSet;

                    /**
                     * <p>网关</p>
                     */
                    std::string m_gateway;
                    bool m_gatewayHasBeenSet;

                    /**
                     * <p>IP地址</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>IPv6地址</p>
                     */
                    std::string m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * <p>MAC地址</p>
                     */
                    std::string m_mac;
                    bool m_macHasBeenSet;

                    /**
                     * <p>网卡名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_NETWORKCARDINFO_H_
