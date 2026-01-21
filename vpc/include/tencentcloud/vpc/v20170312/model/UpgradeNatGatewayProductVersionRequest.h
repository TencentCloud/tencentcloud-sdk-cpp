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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_UPGRADENATGATEWAYPRODUCTVERSIONREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_UPGRADENATGATEWAYPRODUCTVERSIONREQUEST_H_

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
                * UpgradeNatGatewayProductVersion请求参数结构体
                */
                class UpgradeNatGatewayProductVersionRequest : public AbstractModel
                {
                public:
                    UpgradeNatGatewayProductVersionRequest();
                    ~UpgradeNatGatewayProductVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * @return VpcId VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * @param _vpcId VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
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
                     * 获取NAT网关的ID，形如：`nat-ig8xpno8`。
                     * @return NatGatewayId NAT网关的ID，形如：`nat-ig8xpno8`。
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置NAT网关的ID，形如：`nat-ig8xpno8`。
                     * @param _natGatewayId NAT网关的ID，形如：`nat-ig8xpno8`。
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
                     * 获取是否热迁移。1表示冷迁移，0表示热迁移，默认值是0。
                     * @return Force 是否热迁移。1表示冷迁移，0表示热迁移，默认值是0。
                     * 
                     */
                    int64_t GetForce() const;

                    /**
                     * 设置是否热迁移。1表示冷迁移，0表示热迁移，默认值是0。
                     * @param _force 是否热迁移。1表示冷迁移，0表示热迁移，默认值是0。
                     * 
                     */
                    void SetForce(const int64_t& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                    /**
                     * 获取是否仅校验迁移可能性。true表示仅校验能否迁移，不做实际迁移。false表示正常迁移。默认值为false。
仅校验模式，不报错表示校验迁移成功。
                     * @return CheckOnlyMode 是否仅校验迁移可能性。true表示仅校验能否迁移，不做实际迁移。false表示正常迁移。默认值为false。
仅校验模式，不报错表示校验迁移成功。
                     * 
                     */
                    bool GetCheckOnlyMode() const;

                    /**
                     * 设置是否仅校验迁移可能性。true表示仅校验能否迁移，不做实际迁移。false表示正常迁移。默认值为false。
仅校验模式，不报错表示校验迁移成功。
                     * @param _checkOnlyMode 是否仅校验迁移可能性。true表示仅校验能否迁移，不做实际迁移。false表示正常迁移。默认值为false。
仅校验模式，不报错表示校验迁移成功。
                     * 
                     */
                    void SetCheckOnlyMode(const bool& _checkOnlyMode);

                    /**
                     * 判断参数 CheckOnlyMode 是否已赋值
                     * @return CheckOnlyMode 是否已赋值
                     * 
                     */
                    bool CheckOnlyModeHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * NAT网关的ID，形如：`nat-ig8xpno8`。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * 是否热迁移。1表示冷迁移，0表示热迁移，默认值是0。
                     */
                    int64_t m_force;
                    bool m_forceHasBeenSet;

                    /**
                     * 是否仅校验迁移可能性。true表示仅校验能否迁移，不做实际迁移。false表示正常迁移。默认值为false。
仅校验模式，不报错表示校验迁移成功。
                     */
                    bool m_checkOnlyMode;
                    bool m_checkOnlyModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_UPGRADENATGATEWAYPRODUCTVERSIONREQUEST_H_
