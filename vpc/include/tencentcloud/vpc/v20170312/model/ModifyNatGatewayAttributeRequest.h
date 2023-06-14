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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNATGATEWAYATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNATGATEWAYATTRIBUTEREQUEST_H_

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
                * ModifyNatGatewayAttribute请求参数结构体
                */
                class ModifyNatGatewayAttributeRequest : public AbstractModel
                {
                public:
                    ModifyNatGatewayAttributeRequest();
                    ~ModifyNatGatewayAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取NAT网关的ID，形如：`nat-df45454`。
                     * @return NatGatewayId NAT网关的ID，形如：`nat-df45454`。
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置NAT网关的ID，形如：`nat-df45454`。
                     * @param _natGatewayId NAT网关的ID，形如：`nat-df45454`。
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
                     * 获取NAT网关的名称，形如：`test_nat`。
                     * @return NatGatewayName NAT网关的名称，形如：`test_nat`。
                     * 
                     */
                    std::string GetNatGatewayName() const;

                    /**
                     * 设置NAT网关的名称，形如：`test_nat`。
                     * @param _natGatewayName NAT网关的名称，形如：`test_nat`。
                     * 
                     */
                    void SetNatGatewayName(const std::string& _natGatewayName);

                    /**
                     * 判断参数 NatGatewayName 是否已赋值
                     * @return NatGatewayName 是否已赋值
                     * 
                     */
                    bool NatGatewayNameHasBeenSet() const;

                    /**
                     * 获取NAT网关最大外网出带宽(单位:Mbps)。
                     * @return InternetMaxBandwidthOut NAT网关最大外网出带宽(单位:Mbps)。
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置NAT网关最大外网出带宽(单位:Mbps)。
                     * @param _internetMaxBandwidthOut NAT网关最大外网出带宽(单位:Mbps)。
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取是否修改NAT网关绑定的安全组。
                     * @return ModifySecurityGroup 是否修改NAT网关绑定的安全组。
                     * 
                     */
                    bool GetModifySecurityGroup() const;

                    /**
                     * 设置是否修改NAT网关绑定的安全组。
                     * @param _modifySecurityGroup 是否修改NAT网关绑定的安全组。
                     * 
                     */
                    void SetModifySecurityGroup(const bool& _modifySecurityGroup);

                    /**
                     * 判断参数 ModifySecurityGroup 是否已赋值
                     * @return ModifySecurityGroup 是否已赋值
                     * 
                     */
                    bool ModifySecurityGroupHasBeenSet() const;

                    /**
                     * 获取NAT网关绑定的安全组列表，最终状态，空列表表示删除所有安全组，形如: `['sg-1n232323', 'sg-o4242424']`
                     * @return SecurityGroupIds NAT网关绑定的安全组列表，最终状态，空列表表示删除所有安全组，形如: `['sg-1n232323', 'sg-o4242424']`
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置NAT网关绑定的安全组列表，最终状态，空列表表示删除所有安全组，形如: `['sg-1n232323', 'sg-o4242424']`
                     * @param _securityGroupIds NAT网关绑定的安全组列表，最终状态，空列表表示删除所有安全组，形如: `['sg-1n232323', 'sg-o4242424']`
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * NAT网关的ID，形如：`nat-df45454`。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * NAT网关的名称，形如：`test_nat`。
                     */
                    std::string m_natGatewayName;
                    bool m_natGatewayNameHasBeenSet;

                    /**
                     * NAT网关最大外网出带宽(单位:Mbps)。
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 是否修改NAT网关绑定的安全组。
                     */
                    bool m_modifySecurityGroup;
                    bool m_modifySecurityGroupHasBeenSet;

                    /**
                     * NAT网关绑定的安全组列表，最终状态，空列表表示删除所有安全组，形如: `['sg-1n232323', 'sg-o4242424']`
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNATGATEWAYATTRIBUTEREQUEST_H_
