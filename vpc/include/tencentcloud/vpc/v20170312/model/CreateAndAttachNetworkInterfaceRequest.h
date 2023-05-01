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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEANDATTACHNETWORKINTERFACEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEANDATTACHNETWORKINTERFACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/PrivateIpAddressSpecification.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateAndAttachNetworkInterface请求参数结构体
                */
                class CreateAndAttachNetworkInterfaceRequest : public AbstractModel
                {
                public:
                    CreateAndAttachNetworkInterfaceRequest();
                    ~CreateAndAttachNetworkInterfaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * @return VpcId VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * @param VpcId VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取弹性网卡名称，最大长度不能超过60个字节。
                     * @return NetworkInterfaceName 弹性网卡名称，最大长度不能超过60个字节。
                     */
                    std::string GetNetworkInterfaceName() const;

                    /**
                     * 设置弹性网卡名称，最大长度不能超过60个字节。
                     * @param NetworkInterfaceName 弹性网卡名称，最大长度不能超过60个字节。
                     */
                    void SetNetworkInterfaceName(const std::string& _networkInterfaceName);

                    /**
                     * 判断参数 NetworkInterfaceName 是否已赋值
                     * @return NetworkInterfaceName 是否已赋值
                     */
                    bool NetworkInterfaceNameHasBeenSet() const;

                    /**
                     * 获取弹性网卡所在的子网实例ID，例如：subnet-0ap8nwca。
                     * @return SubnetId 弹性网卡所在的子网实例ID，例如：subnet-0ap8nwca。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置弹性网卡所在的子网实例ID，例如：subnet-0ap8nwca。
                     * @param SubnetId 弹性网卡所在的子网实例ID，例如：subnet-0ap8nwca。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取云服务器实例ID。
                     * @return InstanceId 云服务器实例ID。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置云服务器实例ID。
                     * @param InstanceId 云服务器实例ID。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取指定的内网IP信息，单次最多指定10个。
                     * @return PrivateIpAddresses 指定的内网IP信息，单次最多指定10个。
                     */
                    std::vector<PrivateIpAddressSpecification> GetPrivateIpAddresses() const;

                    /**
                     * 设置指定的内网IP信息，单次最多指定10个。
                     * @param PrivateIpAddresses 指定的内网IP信息，单次最多指定10个。
                     */
                    void SetPrivateIpAddresses(const std::vector<PrivateIpAddressSpecification>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取新申请的内网IP地址个数，内网IP地址个数总和不能超过配额数。
                     * @return SecondaryPrivateIpAddressCount 新申请的内网IP地址个数，内网IP地址个数总和不能超过配额数。
                     */
                    uint64_t GetSecondaryPrivateIpAddressCount() const;

                    /**
                     * 设置新申请的内网IP地址个数，内网IP地址个数总和不能超过配额数。
                     * @param SecondaryPrivateIpAddressCount 新申请的内网IP地址个数，内网IP地址个数总和不能超过配额数。
                     */
                    void SetSecondaryPrivateIpAddressCount(const uint64_t& _secondaryPrivateIpAddressCount);

                    /**
                     * 判断参数 SecondaryPrivateIpAddressCount 是否已赋值
                     * @return SecondaryPrivateIpAddressCount 是否已赋值
                     */
                    bool SecondaryPrivateIpAddressCountHasBeenSet() const;

                    /**
                     * 获取IP服务质量等级，和SecondaryPrivateIpAddressCount配合使用，可选值：PT、AU、AG、DEFAULT，分别代表白金、金、银、默认四个等级。
                     * @return QosLevel IP服务质量等级，和SecondaryPrivateIpAddressCount配合使用，可选值：PT、AU、AG、DEFAULT，分别代表白金、金、银、默认四个等级。
                     */
                    std::string GetQosLevel() const;

                    /**
                     * 设置IP服务质量等级，和SecondaryPrivateIpAddressCount配合使用，可选值：PT、AU、AG、DEFAULT，分别代表白金、金、银、默认四个等级。
                     * @param QosLevel IP服务质量等级，和SecondaryPrivateIpAddressCount配合使用，可选值：PT、AU、AG、DEFAULT，分别代表白金、金、银、默认四个等级。
                     */
                    void SetQosLevel(const std::string& _qosLevel);

                    /**
                     * 判断参数 QosLevel 是否已赋值
                     * @return QosLevel 是否已赋值
                     */
                    bool QosLevelHasBeenSet() const;

                    /**
                     * 获取指定绑定的安全组，例如：['sg-1dd51d']。
                     * @return SecurityGroupIds 指定绑定的安全组，例如：['sg-1dd51d']。
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置指定绑定的安全组，例如：['sg-1dd51d']。
                     * @param SecurityGroupIds 指定绑定的安全组，例如：['sg-1dd51d']。
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取弹性网卡描述，可任意命名，但不得超过60个字符。
                     * @return NetworkInterfaceDescription 弹性网卡描述，可任意命名，但不得超过60个字符。
                     */
                    std::string GetNetworkInterfaceDescription() const;

                    /**
                     * 设置弹性网卡描述，可任意命名，但不得超过60个字符。
                     * @param NetworkInterfaceDescription 弹性网卡描述，可任意命名，但不得超过60个字符。
                     */
                    void SetNetworkInterfaceDescription(const std::string& _networkInterfaceDescription);

                    /**
                     * 判断参数 NetworkInterfaceDescription 是否已赋值
                     * @return NetworkInterfaceDescription 是否已赋值
                     */
                    bool NetworkInterfaceDescriptionHasBeenSet() const;

                    /**
                     * 获取指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @return Tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @param Tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取绑定类型：0 标准型 1 扩展型。
                     * @return AttachType 绑定类型：0 标准型 1 扩展型。
                     */
                    uint64_t GetAttachType() const;

                    /**
                     * 设置绑定类型：0 标准型 1 扩展型。
                     * @param AttachType 绑定类型：0 标准型 1 扩展型。
                     */
                    void SetAttachType(const uint64_t& _attachType);

                    /**
                     * 判断参数 AttachType 是否已赋值
                     * @return AttachType 是否已赋值
                     */
                    bool AttachTypeHasBeenSet() const;

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
                     * 云服务器实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 指定的内网IP信息，单次最多指定10个。
                     */
                    std::vector<PrivateIpAddressSpecification> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * 新申请的内网IP地址个数，内网IP地址个数总和不能超过配额数。
                     */
                    uint64_t m_secondaryPrivateIpAddressCount;
                    bool m_secondaryPrivateIpAddressCountHasBeenSet;

                    /**
                     * IP服务质量等级，和SecondaryPrivateIpAddressCount配合使用，可选值：PT、AU、AG、DEFAULT，分别代表白金、金、银、默认四个等级。
                     */
                    std::string m_qosLevel;
                    bool m_qosLevelHasBeenSet;

                    /**
                     * 指定绑定的安全组，例如：['sg-1dd51d']。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 弹性网卡描述，可任意命名，但不得超过60个字符。
                     */
                    std::string m_networkInterfaceDescription;
                    bool m_networkInterfaceDescriptionHasBeenSet;

                    /**
                     * 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 绑定类型：0 标准型 1 扩展型。
                     */
                    uint64_t m_attachType;
                    bool m_attachTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEANDATTACHNETWORKINTERFACEREQUEST_H_
