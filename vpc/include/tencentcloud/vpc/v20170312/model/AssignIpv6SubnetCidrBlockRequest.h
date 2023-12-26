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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNIPV6SUBNETCIDRBLOCKREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNIPV6SUBNETCIDRBLOCKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Ipv6SubnetCidrBlock.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AssignIpv6SubnetCidrBlock请求参数结构体
                */
                class AssignIpv6SubnetCidrBlockRequest : public AbstractModel
                {
                public:
                    AssignIpv6SubnetCidrBlockRequest();
                    ~AssignIpv6SubnetCidrBlockRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取子网所在私有网络`ID`。形如：`vpc-f49l6u0z`。
                     * @return VpcId 子网所在私有网络`ID`。形如：`vpc-f49l6u0z`。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置子网所在私有网络`ID`。形如：`vpc-f49l6u0z`。
                     * @param _vpcId 子网所在私有网络`ID`。形如：`vpc-f49l6u0z`。
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
                     * 获取分配 `IPv6` 子网段列表。
                     * @return Ipv6SubnetCidrBlocks 分配 `IPv6` 子网段列表。
                     * 
                     */
                    std::vector<Ipv6SubnetCidrBlock> GetIpv6SubnetCidrBlocks() const;

                    /**
                     * 设置分配 `IPv6` 子网段列表。
                     * @param _ipv6SubnetCidrBlocks 分配 `IPv6` 子网段列表。
                     * 
                     */
                    void SetIpv6SubnetCidrBlocks(const std::vector<Ipv6SubnetCidrBlock>& _ipv6SubnetCidrBlocks);

                    /**
                     * 判断参数 Ipv6SubnetCidrBlocks 是否已赋值
                     * @return Ipv6SubnetCidrBlocks 是否已赋值
                     * 
                     */
                    bool Ipv6SubnetCidrBlocksHasBeenSet() const;

                    /**
                     * 获取用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * @return ClientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * @param _clientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * 子网所在私有网络`ID`。形如：`vpc-f49l6u0z`。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 分配 `IPv6` 子网段列表。
                     */
                    std::vector<Ipv6SubnetCidrBlock> m_ipv6SubnetCidrBlocks;
                    bool m_ipv6SubnetCidrBlocksHasBeenSet;

                    /**
                     * 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNIPV6SUBNETCIDRBLOCKREQUEST_H_
