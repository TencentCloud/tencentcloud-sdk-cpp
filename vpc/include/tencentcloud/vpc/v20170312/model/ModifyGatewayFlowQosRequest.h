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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYGATEWAYFLOWQOSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYGATEWAYFLOWQOSREQUEST_H_

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
                * ModifyGatewayFlowQos请求参数结构体
                */
                class ModifyGatewayFlowQosRequest : public AbstractModel
                {
                public:
                    ModifyGatewayFlowQosRequest();
                    ~ModifyGatewayFlowQosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关实例ID，目前我们支持的网关实例类型有，
专线网关实例ID，形如，`dcg-ltjahce6`；
Nat网关实例ID，形如，`nat-ltjahce6`；
VPN网关实例ID，形如，`vpn-ltjahce6`。
                     * @return GatewayId 网关实例ID，目前我们支持的网关实例类型有，
专线网关实例ID，形如，`dcg-ltjahce6`；
Nat网关实例ID，形如，`nat-ltjahce6`；
VPN网关实例ID，形如，`vpn-ltjahce6`。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关实例ID，目前我们支持的网关实例类型有，
专线网关实例ID，形如，`dcg-ltjahce6`；
Nat网关实例ID，形如，`nat-ltjahce6`；
VPN网关实例ID，形如，`vpn-ltjahce6`。
                     * @param _gatewayId 网关实例ID，目前我们支持的网关实例类型有，
专线网关实例ID，形如，`dcg-ltjahce6`；
Nat网关实例ID，形如，`nat-ltjahce6`；
VPN网关实例ID，形如，`vpn-ltjahce6`。
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取流控带宽值。取值大于0，表示限流到指定的Mbps；取值等于0，表示完全限流；取值为-1，不限流。
                     * @return Bandwidth 流控带宽值。取值大于0，表示限流到指定的Mbps；取值等于0，表示完全限流；取值为-1，不限流。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置流控带宽值。取值大于0，表示限流到指定的Mbps；取值等于0，表示完全限流；取值为-1，不限流。
                     * @param _bandwidth 流控带宽值。取值大于0，表示限流到指定的Mbps；取值等于0，表示完全限流；取值为-1，不限流。
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取限流的云服务器内网IP。
                     * @return IpAddresses 限流的云服务器内网IP。
                     * 
                     */
                    std::vector<std::string> GetIpAddresses() const;

                    /**
                     * 设置限流的云服务器内网IP。
                     * @param _ipAddresses 限流的云服务器内网IP。
                     * 
                     */
                    void SetIpAddresses(const std::vector<std::string>& _ipAddresses);

                    /**
                     * 判断参数 IpAddresses 是否已赋值
                     * @return IpAddresses 是否已赋值
                     * 
                     */
                    bool IpAddressesHasBeenSet() const;

                private:

                    /**
                     * 网关实例ID，目前我们支持的网关实例类型有，
专线网关实例ID，形如，`dcg-ltjahce6`；
Nat网关实例ID，形如，`nat-ltjahce6`；
VPN网关实例ID，形如，`vpn-ltjahce6`。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 流控带宽值。取值大于0，表示限流到指定的Mbps；取值等于0，表示完全限流；取值为-1，不限流。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 限流的云服务器内网IP。
                     */
                    std::vector<std::string> m_ipAddresses;
                    bool m_ipAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYGATEWAYFLOWQOSREQUEST_H_
