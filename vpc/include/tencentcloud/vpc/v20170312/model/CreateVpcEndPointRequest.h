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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * CreateVpcEndPoint请求参数结构体
                */
                class CreateVpcEndPointRequest : public AbstractModel
                {
                public:
                    CreateVpcEndPointRequest();
                    ~CreateVpcEndPointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC实例ID。可通过[DescribeVpcs](https://cloud.tencent.com/document/product/1108/43663)接口获取。
                     * @return VpcId VPC实例ID。可通过[DescribeVpcs](https://cloud.tencent.com/document/product/1108/43663)接口获取。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。可通过[DescribeVpcs](https://cloud.tencent.com/document/product/1108/43663)接口获取。
                     * @param _vpcId VPC实例ID。可通过[DescribeVpcs](https://cloud.tencent.com/document/product/1108/43663)接口获取。
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
                     * 获取子网实例ID。可通过[DescribeSubnets](https://cloud.tencent.com/document/product/215/15784)接口获取。
                     * @return SubnetId 子网实例ID。可通过[DescribeSubnets](https://cloud.tencent.com/document/product/215/15784)接口获取。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网实例ID。可通过[DescribeSubnets](https://cloud.tencent.com/document/product/215/15784)接口获取。
                     * @param _subnetId 子网实例ID。可通过[DescribeSubnets](https://cloud.tencent.com/document/product/215/15784)接口获取。
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
                     * 获取终端节点名称。限制为60个字符。
                     * @return EndPointName 终端节点名称。限制为60个字符。
                     * 
                     */
                    std::string GetEndPointName() const;

                    /**
                     * 设置终端节点名称。限制为60个字符。
                     * @param _endPointName 终端节点名称。限制为60个字符。
                     * 
                     */
                    void SetEndPointName(const std::string& _endPointName);

                    /**
                     * 判断参数 EndPointName 是否已赋值
                     * @return EndPointName 是否已赋值
                     * 
                     */
                    bool EndPointNameHasBeenSet() const;

                    /**
                     * 获取终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。
                     * @return EndPointServiceId 终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。
                     * 
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。
                     * @param _endPointServiceId 终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。
                     * 
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取终端节点VIP，可以指定IP申请。
                     * @return EndPointVip 终端节点VIP，可以指定IP申请。
                     * 
                     */
                    std::string GetEndPointVip() const;

                    /**
                     * 设置终端节点VIP，可以指定IP申请。
                     * @param _endPointVip 终端节点VIP，可以指定IP申请。
                     * 
                     */
                    void SetEndPointVip(const std::string& _endPointVip);

                    /**
                     * 判断参数 EndPointVip 是否已赋值
                     * @return EndPointVip 是否已赋值
                     * 
                     */
                    bool EndPointVipHasBeenSet() const;

                    /**
                     * 获取安全组ID。可通过[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)接口获取。
                     * @return SecurityGroupId 安全组ID。可通过[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)接口获取。
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组ID。可通过[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)接口获取。
                     * @param _securityGroupId 安全组ID。可通过[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)接口获取。
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @return Tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @param _tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取协议类型，支持 Ipv4，Ipv6，默认 Ipv4
                     * @return IpAddressType 协议类型，支持 Ipv4，Ipv6，默认 Ipv4
                     * 
                     */
                    std::string GetIpAddressType() const;

                    /**
                     * 设置协议类型，支持 Ipv4，Ipv6，默认 Ipv4
                     * @param _ipAddressType 协议类型，支持 Ipv4，Ipv6，默认 Ipv4
                     * 
                     */
                    void SetIpAddressType(const std::string& _ipAddressType);

                    /**
                     * 判断参数 IpAddressType 是否已赋值
                     * @return IpAddressType 是否已赋值
                     * 
                     */
                    bool IpAddressTypeHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID。可通过[DescribeVpcs](https://cloud.tencent.com/document/product/1108/43663)接口获取。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网实例ID。可通过[DescribeSubnets](https://cloud.tencent.com/document/product/215/15784)接口获取。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 终端节点名称。限制为60个字符。
                     */
                    std::string m_endPointName;
                    bool m_endPointNameHasBeenSet;

                    /**
                     * 终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * 终端节点VIP，可以指定IP申请。
                     */
                    std::string m_endPointVip;
                    bool m_endPointVipHasBeenSet;

                    /**
                     * 安全组ID。可通过[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)接口获取。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 协议类型，支持 Ipv4，Ipv6，默认 Ipv4
                     */
                    std::string m_ipAddressType;
                    bool m_ipAddressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTREQUEST_H_
