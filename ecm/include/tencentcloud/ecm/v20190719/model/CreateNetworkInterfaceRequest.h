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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_CREATENETWORKINTERFACEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_CREATENETWORKINTERFACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/PrivateIpAddressSpecification.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateNetworkInterface请求参数结构体
                */
                class CreateNetworkInterfaceRequest : public AbstractModel
                {
                public:
                    CreateNetworkInterfaceRequest();
                    ~CreateNetworkInterfaceRequest() = default;
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
                     * 获取弹性网卡名称，最大长度不能超过60个字节。
                     * @return NetworkInterfaceName 弹性网卡名称，最大长度不能超过60个字节。
                     * 
                     */
                    std::string GetNetworkInterfaceName() const;

                    /**
                     * 设置弹性网卡名称，最大长度不能超过60个字节。
                     * @param _networkInterfaceName 弹性网卡名称，最大长度不能超过60个字节。
                     * 
                     */
                    void SetNetworkInterfaceName(const std::string& _networkInterfaceName);

                    /**
                     * 判断参数 NetworkInterfaceName 是否已赋值
                     * @return NetworkInterfaceName 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceNameHasBeenSet() const;

                    /**
                     * 获取弹性网卡所在的子网实例ID，例如：subnet-0ap8nwca。
                     * @return SubnetId 弹性网卡所在的子网实例ID，例如：subnet-0ap8nwca。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置弹性网卡所在的子网实例ID，例如：subnet-0ap8nwca。
                     * @param _subnetId 弹性网卡所在的子网实例ID，例如：subnet-0ap8nwca。
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
                     * 获取ECM 地域，形如ap-xian-ecm。
                     * @return EcmRegion ECM 地域，形如ap-xian-ecm。
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM 地域，形如ap-xian-ecm。
                     * @param _ecmRegion ECM 地域，形如ap-xian-ecm。
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取弹性网卡描述，可任意命名，但不得超过60个字符。
                     * @return NetworkInterfaceDescription 弹性网卡描述，可任意命名，但不得超过60个字符。
                     * 
                     */
                    std::string GetNetworkInterfaceDescription() const;

                    /**
                     * 设置弹性网卡描述，可任意命名，但不得超过60个字符。
                     * @param _networkInterfaceDescription 弹性网卡描述，可任意命名，但不得超过60个字符。
                     * 
                     */
                    void SetNetworkInterfaceDescription(const std::string& _networkInterfaceDescription);

                    /**
                     * 判断参数 NetworkInterfaceDescription 是否已赋值
                     * @return NetworkInterfaceDescription 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceDescriptionHasBeenSet() const;

                    /**
                     * 获取新申请的内网IP地址个数，内网IP地址个数总和不能超过配额数。
                     * @return SecondaryPrivateIpAddressCount 新申请的内网IP地址个数，内网IP地址个数总和不能超过配额数。
                     * 
                     */
                    uint64_t GetSecondaryPrivateIpAddressCount() const;

                    /**
                     * 设置新申请的内网IP地址个数，内网IP地址个数总和不能超过配额数。
                     * @param _secondaryPrivateIpAddressCount 新申请的内网IP地址个数，内网IP地址个数总和不能超过配额数。
                     * 
                     */
                    void SetSecondaryPrivateIpAddressCount(const uint64_t& _secondaryPrivateIpAddressCount);

                    /**
                     * 判断参数 SecondaryPrivateIpAddressCount 是否已赋值
                     * @return SecondaryPrivateIpAddressCount 是否已赋值
                     * 
                     */
                    bool SecondaryPrivateIpAddressCountHasBeenSet() const;

                    /**
                     * 获取指定绑定的安全组，例如：['sg-1dd51d']。
                     * @return SecurityGroupIds 指定绑定的安全组，例如：['sg-1dd51d']。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置指定绑定的安全组，例如：['sg-1dd51d']。
                     * @param _securityGroupIds 指定绑定的安全组，例如：['sg-1dd51d']。
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
                     * 获取指定的内网IP信息，单次最多指定10个。
                     * @return PrivateIpAddresses 指定的内网IP信息，单次最多指定10个。
                     * 
                     */
                    std::vector<PrivateIpAddressSpecification> GetPrivateIpAddresses() const;

                    /**
                     * 设置指定的内网IP信息，单次最多指定10个。
                     * @param _privateIpAddresses 指定的内网IP信息，单次最多指定10个。
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<PrivateIpAddressSpecification>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     * @return Tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     * @param _tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 弹性网卡名称，最大长度不能超过60个字节。
                     */
                    std::string m_networkInterfaceName;
                    bool m_networkInterfaceNameHasBeenSet;

                    /**
                     * 弹性网卡所在的子网实例ID，例如：subnet-0ap8nwca。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * ECM 地域，形如ap-xian-ecm。
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * 弹性网卡描述，可任意命名，但不得超过60个字符。
                     */
                    std::string m_networkInterfaceDescription;
                    bool m_networkInterfaceDescriptionHasBeenSet;

                    /**
                     * 新申请的内网IP地址个数，内网IP地址个数总和不能超过配额数。
                     */
                    uint64_t m_secondaryPrivateIpAddressCount;
                    bool m_secondaryPrivateIpAddressCountHasBeenSet;

                    /**
                     * 指定绑定的安全组，例如：['sg-1dd51d']。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 指定的内网IP信息，单次最多指定10个。
                     */
                    std::vector<PrivateIpAddressSpecification> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_CREATENETWORKINTERFACEREQUEST_H_
