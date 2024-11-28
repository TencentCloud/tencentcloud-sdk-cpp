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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_SUBNET_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_SUBNET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * Subnet对象
                */
                class Subnet : public AbstractModel
                {
                public:
                    Subnet();
                    ~Subnet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC实例ID。
                     * @return VpcId VPC实例ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。
                     * @param _vpcId VPC实例ID。
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
                     * 获取子网实例ID，例如：subnet-bthucmmy。
                     * @return SubnetId 子网实例ID，例如：subnet-bthucmmy。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网实例ID，例如：subnet-bthucmmy。
                     * @param _subnetId 子网实例ID，例如：subnet-bthucmmy。
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
                     * 获取子网名称。
                     * @return SubnetName 子网名称。
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名称。
                     * @param _subnetName 子网名称。
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取子网的 IPv4 CIDR。
                     * @return CidrBlock 子网的 IPv4 CIDR。
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置子网的 IPv4 CIDR。
                     * @param _cidrBlock 子网的 IPv4 CIDR。
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
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createdTime 创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取可用IP数。
                     * @return AvailableIpAddressCount 可用IP数。
                     * 
                     */
                    int64_t GetAvailableIpAddressCount() const;

                    /**
                     * 设置可用IP数。
                     * @param _availableIpAddressCount 可用IP数。
                     * 
                     */
                    void SetAvailableIpAddressCount(const int64_t& _availableIpAddressCount);

                    /**
                     * 判断参数 AvailableIpAddressCount 是否已赋值
                     * @return AvailableIpAddressCount 是否已赋值
                     * 
                     */
                    bool AvailableIpAddressCountHasBeenSet() const;

                    /**
                     * 获取子网的 IPv6 CIDR。
                     * @return Ipv6CidrBlock 子网的 IPv6 CIDR。
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置子网的 IPv6 CIDR。
                     * @param _ipv6CidrBlock 子网的 IPv6 CIDR。
                     * 
                     */
                    void SetIpv6CidrBlock(const std::string& _ipv6CidrBlock);

                    /**
                     * 判断参数 Ipv6CidrBlock 是否已赋值
                     * @return Ipv6CidrBlock 是否已赋值
                     * 
                     */
                    bool Ipv6CidrBlockHasBeenSet() const;

                    /**
                     * 获取总IP数
                     * @return TotalIpAddressCount 总IP数
                     * 
                     */
                    int64_t GetTotalIpAddressCount() const;

                    /**
                     * 设置总IP数
                     * @param _totalIpAddressCount 总IP数
                     * 
                     */
                    void SetTotalIpAddressCount(const int64_t& _totalIpAddressCount);

                    /**
                     * 判断参数 TotalIpAddressCount 是否已赋值
                     * @return TotalIpAddressCount 是否已赋值
                     * 
                     */
                    bool TotalIpAddressCountHasBeenSet() const;

                    /**
                     * 获取是否为默认Subnet
                     * @return IsDefault 是否为默认Subnet
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否为默认Subnet
                     * @param _isDefault 是否为默认Subnet
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网实例ID，例如：subnet-bthucmmy。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网名称。
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 子网的 IPv4 CIDR。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 可用IP数。
                     */
                    int64_t m_availableIpAddressCount;
                    bool m_availableIpAddressCountHasBeenSet;

                    /**
                     * 子网的 IPv6 CIDR。
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * 总IP数
                     */
                    int64_t m_totalIpAddressCount;
                    bool m_totalIpAddressCountHasBeenSet;

                    /**
                     * 是否为默认Subnet
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_SUBNET_H_
