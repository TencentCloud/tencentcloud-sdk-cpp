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
                     * 获取NAT网关的名称，形如：`test_nat`，边界值：[1,60] 字符。
                     * @return NatGatewayName NAT网关的名称，形如：`test_nat`，边界值：[1,60] 字符。
                     * 
                     */
                    std::string GetNatGatewayName() const;

                    /**
                     * 设置NAT网关的名称，形如：`test_nat`，边界值：[1,60] 字符。
                     * @param _natGatewayName NAT网关的名称，形如：`test_nat`，边界值：[1,60] 字符。
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
                     * 获取NAT网关最大外网出带宽(单位:Mbps)，边界值：[0,50000]。
                     * @return InternetMaxBandwidthOut NAT网关最大外网出带宽(单位:Mbps)，边界值：[0,50000]。
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置NAT网关最大外网出带宽(单位:Mbps)，边界值：[0,50000]。
                     * @param _internetMaxBandwidthOut NAT网关最大外网出带宽(单位:Mbps)，边界值：[0,50000]。
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

                    /**
                     * 获取NAT实例是否开启删除保护
                     * @return DeletionProtectionEnabled NAT实例是否开启删除保护
                     * 
                     */
                    bool GetDeletionProtectionEnabled() const;

                    /**
                     * 设置NAT实例是否开启删除保护
                     * @param _deletionProtectionEnabled NAT实例是否开启删除保护
                     * 
                     */
                    void SetDeletionProtectionEnabled(const bool& _deletionProtectionEnabled);

                    /**
                     * 判断参数 DeletionProtectionEnabled 是否已赋值
                     * @return DeletionProtectionEnabled 是否已赋值
                     * 
                     */
                    bool DeletionProtectionEnabledHasBeenSet() const;

                    /**
                     * 获取同一个内网地址通过NAT网关访问同一个目的IP时，是否使用固定的弹性公网IP。默认为true，使用固定IP；false代表使用随机IP。当前适用于标准型NAT网关。
                     * @return PublicAddressAffinity 同一个内网地址通过NAT网关访问同一个目的IP时，是否使用固定的弹性公网IP。默认为true，使用固定IP；false代表使用随机IP。当前适用于标准型NAT网关。
                     * 
                     */
                    bool GetPublicAddressAffinity() const;

                    /**
                     * 设置同一个内网地址通过NAT网关访问同一个目的IP时，是否使用固定的弹性公网IP。默认为true，使用固定IP；false代表使用随机IP。当前适用于标准型NAT网关。
                     * @param _publicAddressAffinity 同一个内网地址通过NAT网关访问同一个目的IP时，是否使用固定的弹性公网IP。默认为true，使用固定IP；false代表使用随机IP。当前适用于标准型NAT网关。
                     * 
                     */
                    void SetPublicAddressAffinity(const bool& _publicAddressAffinity);

                    /**
                     * 判断参数 PublicAddressAffinity 是否已赋值
                     * @return PublicAddressAffinity 是否已赋值
                     * 
                     */
                    bool PublicAddressAffinityHasBeenSet() const;

                private:

                    /**
                     * NAT网关的ID，形如：`nat-df45454`。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * NAT网关的名称，形如：`test_nat`，边界值：[1,60] 字符。
                     */
                    std::string m_natGatewayName;
                    bool m_natGatewayNameHasBeenSet;

                    /**
                     * NAT网关最大外网出带宽(单位:Mbps)，边界值：[0,50000]。
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

                    /**
                     * NAT实例是否开启删除保护
                     */
                    bool m_deletionProtectionEnabled;
                    bool m_deletionProtectionEnabledHasBeenSet;

                    /**
                     * 同一个内网地址通过NAT网关访问同一个目的IP时，是否使用固定的弹性公网IP。默认为true，使用固定IP；false代表使用随机IP。当前适用于标准型NAT网关。
                     */
                    bool m_publicAddressAffinity;
                    bool m_publicAddressAffinityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNATGATEWAYATTRIBUTEREQUEST_H_
