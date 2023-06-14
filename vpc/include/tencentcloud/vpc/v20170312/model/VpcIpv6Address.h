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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_VPCIPV6ADDRESS_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_VPCIPV6ADDRESS_H_

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
                * VPC内网IPv6对象。
                */
                class VpcIpv6Address : public AbstractModel
                {
                public:
                    VpcIpv6Address();
                    ~VpcIpv6Address() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`VPC`内`IPv6`地址。
                     * @return Ipv6Address `VPC`内`IPv6`地址。
                     * 
                     */
                    std::string GetIpv6Address() const;

                    /**
                     * 设置`VPC`内`IPv6`地址。
                     * @param _ipv6Address `VPC`内`IPv6`地址。
                     * 
                     */
                    void SetIpv6Address(const std::string& _ipv6Address);

                    /**
                     * 判断参数 Ipv6Address 是否已赋值
                     * @return Ipv6Address 是否已赋值
                     * 
                     */
                    bool Ipv6AddressHasBeenSet() const;

                    /**
                     * 获取所属子网 `IPv6` `CIDR`。
                     * @return CidrBlock 所属子网 `IPv6` `CIDR`。
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置所属子网 `IPv6` `CIDR`。
                     * @param _cidrBlock 所属子网 `IPv6` `CIDR`。
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取`IPv6`类型。
                     * @return Ipv6AddressType `IPv6`类型。
                     * 
                     */
                    std::string GetIpv6AddressType() const;

                    /**
                     * 设置`IPv6`类型。
                     * @param _ipv6AddressType `IPv6`类型。
                     * 
                     */
                    void SetIpv6AddressType(const std::string& _ipv6AddressType);

                    /**
                     * 判断参数 Ipv6AddressType 是否已赋值
                     * @return Ipv6AddressType 是否已赋值
                     * 
                     */
                    bool Ipv6AddressTypeHasBeenSet() const;

                    /**
                     * 获取`IPv6`申请时间。
                     * @return CreatedTime `IPv6`申请时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置`IPv6`申请时间。
                     * @param _createdTime `IPv6`申请时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * `VPC`内`IPv6`地址。
                     */
                    std::string m_ipv6Address;
                    bool m_ipv6AddressHasBeenSet;

                    /**
                     * 所属子网 `IPv6` `CIDR`。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * `IPv6`类型。
                     */
                    std::string m_ipv6AddressType;
                    bool m_ipv6AddressTypeHasBeenSet;

                    /**
                     * `IPv6`申请时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPCIPV6ADDRESS_H_
