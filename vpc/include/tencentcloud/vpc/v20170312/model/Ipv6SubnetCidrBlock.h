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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_IPV6SUBNETCIDRBLOCK_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_IPV6SUBNETCIDRBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * IPv6子网段对象。
                */
                class Ipv6SubnetCidrBlock : public AbstractModel
                {
                public:
                    Ipv6SubnetCidrBlock();
                    ~Ipv6SubnetCidrBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子网实例`ID`。形如：`subnet-pxir56ns`。
                     * @return SubnetId 子网实例`ID`。形如：`subnet-pxir56ns`。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网实例`ID`。形如：`subnet-pxir56ns`。
                     * @param _subnetId 子网实例`ID`。形如：`subnet-pxir56ns`。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取`IPv6`子网段。形如：`3402:4e00:20:1001::/64`。作为AssignIpv6SubnetCidrBlock接口入参时，该参数必填。
                     * @return Ipv6CidrBlock `IPv6`子网段。形如：`3402:4e00:20:1001::/64`。作为AssignIpv6SubnetCidrBlock接口入参时，该参数必填。
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置`IPv6`子网段。形如：`3402:4e00:20:1001::/64`。作为AssignIpv6SubnetCidrBlock接口入参时，该参数必填。
                     * @param _ipv6CidrBlock `IPv6`子网段。形如：`3402:4e00:20:1001::/64`。作为AssignIpv6SubnetCidrBlock接口入参时，该参数必填。
                     * 
                     */
                    void SetIpv6CidrBlock(const std::string& _ipv6CidrBlock);

                    /**
                     * 判断参数 Ipv6CidrBlock 是否已赋值
                     * @return Ipv6CidrBlock 是否已赋值
                     * 
                     */
                    bool Ipv6CidrBlockHasBeenSet() const;

                private:

                    /**
                     * 子网实例`ID`。形如：`subnet-pxir56ns`。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * `IPv6`子网段。形如：`3402:4e00:20:1001::/64`。作为AssignIpv6SubnetCidrBlock接口入参时，该参数必填。
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_IPV6SUBNETCIDRBLOCK_H_
