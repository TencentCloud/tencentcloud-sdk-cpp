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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SETVPNGATEWAYSRENEWFLAGREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SETVPNGATEWAYSRENEWFLAGREQUEST_H_

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
                * SetVpnGatewaysRenewFlag请求参数结构体
                */
                class SetVpnGatewaysRenewFlagRequest : public AbstractModel
                {
                public:
                    SetVpnGatewaysRenewFlagRequest();
                    ~SetVpnGatewaysRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPNGW字符型ID列表。可通过[DescribeVpnGateways](https://cloud.tencent.com/document/api/215/17514)接口返回值VpnGatewaySet中的VpnGatewayId获取，只能选择包年包月的VPN实例。
                     * @return VpnGatewayIds VPNGW字符型ID列表。可通过[DescribeVpnGateways](https://cloud.tencent.com/document/api/215/17514)接口返回值VpnGatewaySet中的VpnGatewayId获取，只能选择包年包月的VPN实例。
                     * 
                     */
                    std::vector<std::string> GetVpnGatewayIds() const;

                    /**
                     * 设置VPNGW字符型ID列表。可通过[DescribeVpnGateways](https://cloud.tencent.com/document/api/215/17514)接口返回值VpnGatewaySet中的VpnGatewayId获取，只能选择包年包月的VPN实例。
                     * @param _vpnGatewayIds VPNGW字符型ID列表。可通过[DescribeVpnGateways](https://cloud.tencent.com/document/api/215/17514)接口返回值VpnGatewaySet中的VpnGatewayId获取，只能选择包年包月的VPN实例。
                     * 
                     */
                    void SetVpnGatewayIds(const std::vector<std::string>& _vpnGatewayIds);

                    /**
                     * 判断参数 VpnGatewayIds 是否已赋值
                     * @return VpnGatewayIds 是否已赋值
                     * 
                     */
                    bool VpnGatewayIdsHasBeenSet() const;

                    /**
                     * 获取自动续费标记 [0, 1, 2]
0表示默认状态(初始状态)， 1表示自动续费，2表示明确不自动续费。
                     * @return AutoRenewFlag 自动续费标记 [0, 1, 2]
0表示默认状态(初始状态)， 1表示自动续费，2表示明确不自动续费。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标记 [0, 1, 2]
0表示默认状态(初始状态)， 1表示自动续费，2表示明确不自动续费。
                     * @param _autoRenewFlag 自动续费标记 [0, 1, 2]
0表示默认状态(初始状态)， 1表示自动续费，2表示明确不自动续费。
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取VPNGW类型['IPSEC', 'SSL']， 默认为IPSEC。
                     * @return Type VPNGW类型['IPSEC', 'SSL']， 默认为IPSEC。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置VPNGW类型['IPSEC', 'SSL']， 默认为IPSEC。
                     * @param _type VPNGW类型['IPSEC', 'SSL']， 默认为IPSEC。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * VPNGW字符型ID列表。可通过[DescribeVpnGateways](https://cloud.tencent.com/document/api/215/17514)接口返回值VpnGatewaySet中的VpnGatewayId获取，只能选择包年包月的VPN实例。
                     */
                    std::vector<std::string> m_vpnGatewayIds;
                    bool m_vpnGatewayIdsHasBeenSet;

                    /**
                     * 自动续费标记 [0, 1, 2]
0表示默认状态(初始状态)， 1表示自动续费，2表示明确不自动续费。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * VPNGW类型['IPSEC', 'SSL']， 默认为IPSEC。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SETVPNGATEWAYSRENEWFLAGREQUEST_H_
