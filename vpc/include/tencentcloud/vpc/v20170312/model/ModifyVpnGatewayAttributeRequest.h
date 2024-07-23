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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNGATEWAYATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNGATEWAYATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyVpnGatewayAttribute请求参数结构体
                */
                class ModifyVpnGatewayAttributeRequest : public AbstractModel
                {
                public:
                    ModifyVpnGatewayAttributeRequest();
                    ~ModifyVpnGatewayAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPN网关实例ID。
                     * @return VpnGatewayId VPN网关实例ID。
                     * 
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置VPN网关实例ID。
                     * @param _vpnGatewayId VPN网关实例ID。
                     * 
                     */
                    void SetVpnGatewayId(const std::string& _vpnGatewayId);

                    /**
                     * 判断参数 VpnGatewayId 是否已赋值
                     * @return VpnGatewayId 是否已赋值
                     * 
                     */
                    bool VpnGatewayIdHasBeenSet() const;

                    /**
                     * 获取VPN网关名称，最大长度不能超过60个字节。
                     * @return VpnGatewayName VPN网关名称，最大长度不能超过60个字节。
                     * 
                     */
                    std::string GetVpnGatewayName() const;

                    /**
                     * 设置VPN网关名称，最大长度不能超过60个字节。
                     * @param _vpnGatewayName VPN网关名称，最大长度不能超过60个字节。
                     * 
                     */
                    void SetVpnGatewayName(const std::string& _vpnGatewayName);

                    /**
                     * 判断参数 VpnGatewayName 是否已赋值
                     * @return VpnGatewayName 是否已赋值
                     * 
                     */
                    bool VpnGatewayNameHasBeenSet() const;

                    /**
                     * 获取VPN网关计费模式，目前只支持预付费（即包年包月）到后付费（即按量计费）的转换。即参数只支持：POSTPAID_BY_HOUR。
                     * @return InstanceChargeType VPN网关计费模式，目前只支持预付费（即包年包月）到后付费（即按量计费）的转换。即参数只支持：POSTPAID_BY_HOUR。
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置VPN网关计费模式，目前只支持预付费（即包年包月）到后付费（即按量计费）的转换。即参数只支持：POSTPAID_BY_HOUR。
                     * @param _instanceChargeType VPN网关计费模式，目前只支持预付费（即包年包月）到后付费（即按量计费）的转换。即参数只支持：POSTPAID_BY_HOUR。
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取BGP ASN。ASN取值范围为1- 4294967295，默认值64551，其中139341、45090和58835不可用。
                     * @return BgpAsn BGP ASN。ASN取值范围为1- 4294967295，默认值64551，其中139341、45090和58835不可用。
                     * 
                     */
                    uint64_t GetBgpAsn() const;

                    /**
                     * 设置BGP ASN。ASN取值范围为1- 4294967295，默认值64551，其中139341、45090和58835不可用。
                     * @param _bgpAsn BGP ASN。ASN取值范围为1- 4294967295，默认值64551，其中139341、45090和58835不可用。
                     * 
                     */
                    void SetBgpAsn(const uint64_t& _bgpAsn);

                    /**
                     * 判断参数 BgpAsn 是否已赋值
                     * @return BgpAsn 是否已赋值
                     * 
                     */
                    bool BgpAsnHasBeenSet() const;

                    /**
                     * 获取服务端最大连接数个数。
                     * @return MaxConnection 服务端最大连接数个数。
                     * 
                     */
                    uint64_t GetMaxConnection() const;

                    /**
                     * 设置服务端最大连接数个数。
                     * @param _maxConnection 服务端最大连接数个数。
                     * 
                     */
                    void SetMaxConnection(const uint64_t& _maxConnection);

                    /**
                     * 判断参数 MaxConnection 是否已赋值
                     * @return MaxConnection 是否已赋值
                     * 
                     */
                    bool MaxConnectionHasBeenSet() const;

                private:

                    /**
                     * VPN网关实例ID。
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * VPN网关名称，最大长度不能超过60个字节。
                     */
                    std::string m_vpnGatewayName;
                    bool m_vpnGatewayNameHasBeenSet;

                    /**
                     * VPN网关计费模式，目前只支持预付费（即包年包月）到后付费（即按量计费）的转换。即参数只支持：POSTPAID_BY_HOUR。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * BGP ASN。ASN取值范围为1- 4294967295，默认值64551，其中139341、45090和58835不可用。
                     */
                    uint64_t m_bgpAsn;
                    bool m_bgpAsnHasBeenSet;

                    /**
                     * 服务端最大连接数个数。
                     */
                    uint64_t m_maxConnection;
                    bool m_maxConnectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNGATEWAYATTRIBUTEREQUEST_H_
