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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATENATGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATENATGATEWAYREQUEST_H_

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
                * CreateNatGateway请求参数结构体
                */
                class CreateNatGatewayRequest : public AbstractModel
                {
                public:
                    CreateNatGatewayRequest();
                    ~CreateNatGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取NAT网关名称
                     * @return NatGatewayName NAT网关名称
                     */
                    std::string GetNatGatewayName() const;

                    /**
                     * 设置NAT网关名称
                     * @param NatGatewayName NAT网关名称
                     */
                    void SetNatGatewayName(const std::string& _natGatewayName);

                    /**
                     * 判断参数 NatGatewayName 是否已赋值
                     * @return NatGatewayName 是否已赋值
                     */
                    bool NatGatewayNameHasBeenSet() const;

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
                     * 获取NAT网关最大外网出带宽(单位:Mbps)，支持的参数值：`20, 50, 100, 200, 500, 1000, 2000, 5000`，默认: `100Mbps`。
                     * @return InternetMaxBandwidthOut NAT网关最大外网出带宽(单位:Mbps)，支持的参数值：`20, 50, 100, 200, 500, 1000, 2000, 5000`，默认: `100Mbps`。
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置NAT网关最大外网出带宽(单位:Mbps)，支持的参数值：`20, 50, 100, 200, 500, 1000, 2000, 5000`，默认: `100Mbps`。
                     * @param InternetMaxBandwidthOut NAT网关最大外网出带宽(单位:Mbps)，支持的参数值：`20, 50, 100, 200, 500, 1000, 2000, 5000`，默认: `100Mbps`。
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取NAT网关并发连接上限，支持参数值：`1000000、3000000、10000000`，默认值为`100000`。
                     * @return MaxConcurrentConnection NAT网关并发连接上限，支持参数值：`1000000、3000000、10000000`，默认值为`100000`。
                     */
                    uint64_t GetMaxConcurrentConnection() const;

                    /**
                     * 设置NAT网关并发连接上限，支持参数值：`1000000、3000000、10000000`，默认值为`100000`。
                     * @param MaxConcurrentConnection NAT网关并发连接上限，支持参数值：`1000000、3000000、10000000`，默认值为`100000`。
                     */
                    void SetMaxConcurrentConnection(const uint64_t& _maxConcurrentConnection);

                    /**
                     * 判断参数 MaxConcurrentConnection 是否已赋值
                     * @return MaxConcurrentConnection 是否已赋值
                     */
                    bool MaxConcurrentConnectionHasBeenSet() const;

                    /**
                     * 获取需要申请的弹性IP个数，系统会按您的要求生产N个弹性IP，其中AddressCount和PublicAddresses至少传递一个。
                     * @return AddressCount 需要申请的弹性IP个数，系统会按您的要求生产N个弹性IP，其中AddressCount和PublicAddresses至少传递一个。
                     */
                    uint64_t GetAddressCount() const;

                    /**
                     * 设置需要申请的弹性IP个数，系统会按您的要求生产N个弹性IP，其中AddressCount和PublicAddresses至少传递一个。
                     * @param AddressCount 需要申请的弹性IP个数，系统会按您的要求生产N个弹性IP，其中AddressCount和PublicAddresses至少传递一个。
                     */
                    void SetAddressCount(const uint64_t& _addressCount);

                    /**
                     * 判断参数 AddressCount 是否已赋值
                     * @return AddressCount 是否已赋值
                     */
                    bool AddressCountHasBeenSet() const;

                    /**
                     * 获取绑定NAT网关的弹性IP数组，其中AddressCount和PublicAddresses至少传递一个。
                     * @return PublicIpAddresses 绑定NAT网关的弹性IP数组，其中AddressCount和PublicAddresses至少传递一个。
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置绑定NAT网关的弹性IP数组，其中AddressCount和PublicAddresses至少传递一个。
                     * @param PublicIpAddresses 绑定NAT网关的弹性IP数组，其中AddressCount和PublicAddresses至少传递一个。
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取可用区，形如：`ap-guangzhou-1`。
                     * @return Zone 可用区，形如：`ap-guangzhou-1`。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区，形如：`ap-guangzhou-1`。
                     * @param Zone 可用区，形如：`ap-guangzhou-1`。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     * @return Tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     * @param Tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取NAT网关所属子网
                     * @return SubnetId NAT网关所属子网
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置NAT网关所属子网
                     * @param SubnetId NAT网关所属子网
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * NAT网关名称
                     */
                    std::string m_natGatewayName;
                    bool m_natGatewayNameHasBeenSet;

                    /**
                     * VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * NAT网关最大外网出带宽(单位:Mbps)，支持的参数值：`20, 50, 100, 200, 500, 1000, 2000, 5000`，默认: `100Mbps`。
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * NAT网关并发连接上限，支持参数值：`1000000、3000000、10000000`，默认值为`100000`。
                     */
                    uint64_t m_maxConcurrentConnection;
                    bool m_maxConcurrentConnectionHasBeenSet;

                    /**
                     * 需要申请的弹性IP个数，系统会按您的要求生产N个弹性IP，其中AddressCount和PublicAddresses至少传递一个。
                     */
                    uint64_t m_addressCount;
                    bool m_addressCountHasBeenSet;

                    /**
                     * 绑定NAT网关的弹性IP数组，其中AddressCount和PublicAddresses至少传递一个。
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * 可用区，形如：`ap-guangzhou-1`。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * NAT网关所属子网
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATENATGATEWAYREQUEST_H_
