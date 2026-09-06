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
                     * 获取<p>网关实例ID，目前我们支持的网关实例类型有，<br>专线网关实例ID，形如，<code>dcg-ltjahce6</code>；<br>Nat网关实例ID，形如，<code>nat-ltjahce6</code>；<br>VPN网关实例ID，形如，<code>vpn-ltjahce6</code>。</p>
                     * @return GatewayId <p>网关实例ID，目前我们支持的网关实例类型有，<br>专线网关实例ID，形如，<code>dcg-ltjahce6</code>；<br>Nat网关实例ID，形如，<code>nat-ltjahce6</code>；<br>VPN网关实例ID，形如，<code>vpn-ltjahce6</code>。</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关实例ID，目前我们支持的网关实例类型有，<br>专线网关实例ID，形如，<code>dcg-ltjahce6</code>；<br>Nat网关实例ID，形如，<code>nat-ltjahce6</code>；<br>VPN网关实例ID，形如，<code>vpn-ltjahce6</code>。</p>
                     * @param _gatewayId <p>网关实例ID，目前我们支持的网关实例类型有，<br>专线网关实例ID，形如，<code>dcg-ltjahce6</code>；<br>Nat网关实例ID，形如，<code>nat-ltjahce6</code>；<br>VPN网关实例ID，形如，<code>vpn-ltjahce6</code>。</p>
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
                     * 获取<p>流控带宽值。取值大于0，表示限流到指定的Mbps；取值等于0，表示完全限流；取值为-1，不限流。</p>
                     * @return Bandwidth <p>流控带宽值。取值大于0，表示限流到指定的Mbps；取值等于0，表示完全限流；取值为-1，不限流。</p>
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置<p>流控带宽值。取值大于0，表示限流到指定的Mbps；取值等于0，表示完全限流；取值为-1，不限流。</p>
                     * @param _bandwidth <p>流控带宽值。取值大于0，表示限流到指定的Mbps；取值等于0，表示完全限流；取值为-1，不限流。</p>
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
                     * 获取<p>限流的云服务器内网IP。</p><p>参数格式：10.0.0.2</p>
                     * @return IpAddresses <p>限流的云服务器内网IP。</p><p>参数格式：10.0.0.2</p>
                     * 
                     */
                    std::vector<std::string> GetIpAddresses() const;

                    /**
                     * 设置<p>限流的云服务器内网IP。</p><p>参数格式：10.0.0.2</p>
                     * @param _ipAddresses <p>限流的云服务器内网IP。</p><p>参数格式：10.0.0.2</p>
                     * 
                     */
                    void SetIpAddresses(const std::vector<std::string>& _ipAddresses);

                    /**
                     * 判断参数 IpAddresses 是否已赋值
                     * @return IpAddresses 是否已赋值
                     * 
                     */
                    bool IpAddressesHasBeenSet() const;

                    /**
                     * 获取<p>限流方向，取值为In代表入向，Out代表出向。当前仅标准型Nat实例网关流控带宽方向可设置入向限流。</p>
                     * @return Direction <p>限流方向，取值为In代表入向，Out代表出向。当前仅标准型Nat实例网关流控带宽方向可设置入向限流。</p>
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置<p>限流方向，取值为In代表入向，Out代表出向。当前仅标准型Nat实例网关流控带宽方向可设置入向限流。</p>
                     * @param _direction <p>限流方向，取值为In代表入向，Out代表出向。当前仅标准型Nat实例网关流控带宽方向可设置入向限流。</p>
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * <p>网关实例ID，目前我们支持的网关实例类型有，<br>专线网关实例ID，形如，<code>dcg-ltjahce6</code>；<br>Nat网关实例ID，形如，<code>nat-ltjahce6</code>；<br>VPN网关实例ID，形如，<code>vpn-ltjahce6</code>。</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>流控带宽值。取值大于0，表示限流到指定的Mbps；取值等于0，表示完全限流；取值为-1，不限流。</p>
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>限流的云服务器内网IP。</p><p>参数格式：10.0.0.2</p>
                     */
                    std::vector<std::string> m_ipAddresses;
                    bool m_ipAddressesHasBeenSet;

                    /**
                     * <p>限流方向，取值为In代表入向，Out代表出向。当前仅标准型Nat实例网关流控带宽方向可设置入向限流。</p>
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYGATEWAYFLOWQOSREQUEST_H_
