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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNIPV6CIDRBLOCKREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNIPV6CIDRBLOCKREQUEST_H_

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
                * AssignIpv6CidrBlock请求参数结构体
                */
                class AssignIpv6CidrBlockRequest : public AbstractModel
                {
                public:
                    AssignIpv6CidrBlockRequest();
                    ~AssignIpv6CidrBlockRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取`VPC`实例`ID`，形如：`vpc-f49l6u0z`。
                     * @return VpcId `VPC`实例`ID`，形如：`vpc-f49l6u0z`。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`VPC`实例`ID`，形如：`vpc-f49l6u0z`。
                     * @param _vpcId `VPC`实例`ID`，形如：`vpc-f49l6u0z`。
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
                     * 获取申请IPv6 Cidr 的类型，`GUA`(全球单播地址), `ULA`(唯一本地地址)。
                     * @return AddressType 申请IPv6 Cidr 的类型，`GUA`(全球单播地址), `ULA`(唯一本地地址)。
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置申请IPv6 Cidr 的类型，`GUA`(全球单播地址), `ULA`(唯一本地地址)。
                     * @param _addressType 申请IPv6 Cidr 的类型，`GUA`(全球单播地址), `ULA`(唯一本地地址)。
                     * 
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                private:

                    /**
                     * `VPC`实例`ID`，形如：`vpc-f49l6u0z`。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 申请IPv6 Cidr 的类型，`GUA`(全球单播地址), `ULA`(唯一本地地址)。
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNIPV6CIDRBLOCKREQUEST_H_
