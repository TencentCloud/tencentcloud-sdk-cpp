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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETNETWORKCARDINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETNETWORKCARDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 资产管理网卡信息
                */
                class AssetNetworkCardInfo : public AbstractModel
                {
                public:
                    AssetNetworkCardInfo();
                    ~AssetNetworkCardInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网卡名称
                     * @return Name 网卡名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置网卡名称
                     * @param _name 网卡名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Ipv4对应IP
                     * @return Ip Ipv4对应IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Ipv4对应IP
                     * @param _ip Ipv4对应IP
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
                     * 获取网关
                     * @return GateWay 网关
                     * 
                     */
                    std::string GetGateWay() const;

                    /**
                     * 设置网关
                     * @param _gateWay 网关
                     * 
                     */
                    void SetGateWay(const std::string& _gateWay);

                    /**
                     * 判断参数 GateWay 是否已赋值
                     * @return GateWay 是否已赋值
                     * 
                     */
                    bool GateWayHasBeenSet() const;

                    /**
                     * 获取MAC地址
                     * @return Mac MAC地址
                     * 
                     */
                    std::string GetMac() const;

                    /**
                     * 设置MAC地址
                     * @param _mac MAC地址
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
                     * 获取Ipv6对应IP
                     * @return Ipv6 Ipv6对应IP
                     * 
                     */
                    std::string GetIpv6() const;

                    /**
                     * 设置Ipv6对应IP
                     * @param _ipv6 Ipv6对应IP
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
                     * 获取DNS服务器
                     * @return DnsServer DNS服务器
                     * 
                     */
                    std::string GetDnsServer() const;

                    /**
                     * 设置DNS服务器
                     * @param _dnsServer DNS服务器
                     * 
                     */
                    void SetDnsServer(const std::string& _dnsServer);

                    /**
                     * 判断参数 DnsServer 是否已赋值
                     * @return DnsServer 是否已赋值
                     * 
                     */
                    bool DnsServerHasBeenSet() const;

                private:

                    /**
                     * 网卡名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Ipv4对应IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 网关
                     */
                    std::string m_gateWay;
                    bool m_gateWayHasBeenSet;

                    /**
                     * MAC地址
                     */
                    std::string m_mac;
                    bool m_macHasBeenSet;

                    /**
                     * Ipv6对应IP
                     */
                    std::string m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * DNS服务器
                     */
                    std::string m_dnsServer;
                    bool m_dnsServerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETNETWORKCARDINFO_H_
