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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_REFRESHDIRECTCONNECTGATEWAYROUTETONATGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_REFRESHDIRECTCONNECTGATEWAYROUTETONATGATEWAYREQUEST_H_

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
                * RefreshDirectConnectGatewayRouteToNatGateway请求参数结构体
                */
                class RefreshDirectConnectGatewayRouteToNatGatewayRequest : public AbstractModel
                {
                public:
                    RefreshDirectConnectGatewayRouteToNatGatewayRequest();
                    ~RefreshDirectConnectGatewayRouteToNatGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取vpc的ID
                     * @return VpcId vpc的ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc的ID
                     * @param _vpcId vpc的ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取NAT网关ID
                     * @return NatGatewayId NAT网关ID
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置NAT网关ID
                     * @param _natGatewayId NAT网关ID
                     * 
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     * 
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取是否是预刷新；True:是， False:否
                     * @return DryRun 是否是预刷新；True:是， False:否
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否是预刷新；True:是， False:否
                     * @param _dryRun 是否是预刷新；True:是， False:否
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * vpc的ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * NAT网关ID
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * 是否是预刷新；True:是， False:否
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_REFRESHDIRECTCONNECTGATEWAYROUTETONATGATEWAYREQUEST_H_
