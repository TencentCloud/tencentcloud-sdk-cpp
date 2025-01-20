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
                     * 
                     */
                    std::string GetNatGatewayName() const;

                    /**
                     * 设置NAT网关名称
                     * @param _natGatewayName NAT网关名称
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
                     * 获取NAT网关最大外网出带宽(单位：Mbps)，支持的参数值：20, 50, 100, 200, 500, 1000, 2000, 5000，默认: 100Mbps。  当以下NatProductVersion参数值为2即标准型时，此参数无需填写，默认为5000Mbps。
                     * @return InternetMaxBandwidthOut NAT网关最大外网出带宽(单位：Mbps)，支持的参数值：20, 50, 100, 200, 500, 1000, 2000, 5000，默认: 100Mbps。  当以下NatProductVersion参数值为2即标准型时，此参数无需填写，默认为5000Mbps。
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置NAT网关最大外网出带宽(单位：Mbps)，支持的参数值：20, 50, 100, 200, 500, 1000, 2000, 5000，默认: 100Mbps。  当以下NatProductVersion参数值为2即标准型时，此参数无需填写，默认为5000Mbps。
                     * @param _internetMaxBandwidthOut NAT网关最大外网出带宽(单位：Mbps)，支持的参数值：20, 50, 100, 200, 500, 1000, 2000, 5000，默认: 100Mbps。  当以下NatProductVersion参数值为2即标准型时，此参数无需填写，默认为5000Mbps。
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
                     * 获取NAT网关并发连接数上限，支持参数值：1000000、3000000、10000000，默认值为100000。  当以下NatProductVersion参数值为2即标准型时，此参数无需填写，默认为2000000。
                     * @return MaxConcurrentConnection NAT网关并发连接数上限，支持参数值：1000000、3000000、10000000，默认值为100000。  当以下NatProductVersion参数值为2即标准型时，此参数无需填写，默认为2000000。
                     * 
                     */
                    uint64_t GetMaxConcurrentConnection() const;

                    /**
                     * 设置NAT网关并发连接数上限，支持参数值：1000000、3000000、10000000，默认值为100000。  当以下NatProductVersion参数值为2即标准型时，此参数无需填写，默认为2000000。
                     * @param _maxConcurrentConnection NAT网关并发连接数上限，支持参数值：1000000、3000000、10000000，默认值为100000。  当以下NatProductVersion参数值为2即标准型时，此参数无需填写，默认为2000000。
                     * 
                     */
                    void SetMaxConcurrentConnection(const uint64_t& _maxConcurrentConnection);

                    /**
                     * 判断参数 MaxConcurrentConnection 是否已赋值
                     * @return MaxConcurrentConnection 是否已赋值
                     * 
                     */
                    bool MaxConcurrentConnectionHasBeenSet() const;

                    /**
                     * 获取新建弹性公网IP个数，系统会按您的要求创建对应数量的弹性公网IP，其中AddressCount和PublicAddresses两个参数至少填写一个。
                     * @return AddressCount 新建弹性公网IP个数，系统会按您的要求创建对应数量的弹性公网IP，其中AddressCount和PublicAddresses两个参数至少填写一个。
                     * 
                     */
                    uint64_t GetAddressCount() const;

                    /**
                     * 设置新建弹性公网IP个数，系统会按您的要求创建对应数量的弹性公网IP，其中AddressCount和PublicAddresses两个参数至少填写一个。
                     * @param _addressCount 新建弹性公网IP个数，系统会按您的要求创建对应数量的弹性公网IP，其中AddressCount和PublicAddresses两个参数至少填写一个。
                     * 
                     */
                    void SetAddressCount(const uint64_t& _addressCount);

                    /**
                     * 判断参数 AddressCount 是否已赋值
                     * @return AddressCount 是否已赋值
                     * 
                     */
                    bool AddressCountHasBeenSet() const;

                    /**
                     * 获取绑定NAT网关的已有弹性公网IP数组，其中AddressCount和PublicAddresses两个参数至少填写一个。 示例值：["139.199.232.119"]
                     * @return PublicIpAddresses 绑定NAT网关的已有弹性公网IP数组，其中AddressCount和PublicAddresses两个参数至少填写一个。 示例值：["139.199.232.119"]
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置绑定NAT网关的已有弹性公网IP数组，其中AddressCount和PublicAddresses两个参数至少填写一个。 示例值：["139.199.232.119"]
                     * @param _publicIpAddresses 绑定NAT网关的已有弹性公网IP数组，其中AddressCount和PublicAddresses两个参数至少填写一个。 示例值：["139.199.232.119"]
                     * 
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取可用区，形如：`ap-guangzhou-1`。
                     * @return Zone 可用区，形如：`ap-guangzhou-1`。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区，形如：`ap-guangzhou-1`。
                     * @param _zone 可用区，形如：`ap-guangzhou-1`。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

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

                    /**
                     * 获取NAT网关所属子网，已废弃
                     * @return SubnetId NAT网关所属子网，已废弃
                     * @deprecated
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置NAT网关所属子网，已废弃
                     * @param _subnetId NAT网关所属子网，已废弃
                     * @deprecated
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * @deprecated
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取绑定NAT网关的弹性公网IP带宽值（单位：Mbps）。不填写此参数时：则该参数默认为弹性公网IP的带宽值，部分用户默认为该用户类型的弹性公网IP的带宽上限。
                     * @return StockPublicIpAddressesBandwidthOut 绑定NAT网关的弹性公网IP带宽值（单位：Mbps）。不填写此参数时：则该参数默认为弹性公网IP的带宽值，部分用户默认为该用户类型的弹性公网IP的带宽上限。
                     * 
                     */
                    uint64_t GetStockPublicIpAddressesBandwidthOut() const;

                    /**
                     * 设置绑定NAT网关的弹性公网IP带宽值（单位：Mbps）。不填写此参数时：则该参数默认为弹性公网IP的带宽值，部分用户默认为该用户类型的弹性公网IP的带宽上限。
                     * @param _stockPublicIpAddressesBandwidthOut 绑定NAT网关的弹性公网IP带宽值（单位：Mbps）。不填写此参数时：则该参数默认为弹性公网IP的带宽值，部分用户默认为该用户类型的弹性公网IP的带宽上限。
                     * 
                     */
                    void SetStockPublicIpAddressesBandwidthOut(const uint64_t& _stockPublicIpAddressesBandwidthOut);

                    /**
                     * 判断参数 StockPublicIpAddressesBandwidthOut 是否已赋值
                     * @return StockPublicIpAddressesBandwidthOut 是否已赋值
                     * 
                     */
                    bool StockPublicIpAddressesBandwidthOutHasBeenSet() const;

                    /**
                     * 获取需要申请公网IP带宽大小（单位Mbps），默认为当前用户类型所能使用的最大值。
                     * @return PublicIpAddressesBandwidthOut 需要申请公网IP带宽大小（单位Mbps），默认为当前用户类型所能使用的最大值。
                     * 
                     */
                    uint64_t GetPublicIpAddressesBandwidthOut() const;

                    /**
                     * 设置需要申请公网IP带宽大小（单位Mbps），默认为当前用户类型所能使用的最大值。
                     * @param _publicIpAddressesBandwidthOut 需要申请公网IP带宽大小（单位Mbps），默认为当前用户类型所能使用的最大值。
                     * 
                     */
                    void SetPublicIpAddressesBandwidthOut(const uint64_t& _publicIpAddressesBandwidthOut);

                    /**
                     * 判断参数 PublicIpAddressesBandwidthOut 是否已赋值
                     * @return PublicIpAddressesBandwidthOut 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesBandwidthOutHasBeenSet() const;

                    /**
                     * 获取公网IP是否强制与NAT网关来自同可用区，true表示需要与NAT网关同可用区；false表示可与NAT网关不是同一个可用区。此参数只有当参数Zone存在时才能生效。
                     * @return PublicIpFromSameZone 公网IP是否强制与NAT网关来自同可用区，true表示需要与NAT网关同可用区；false表示可与NAT网关不是同一个可用区。此参数只有当参数Zone存在时才能生效。
                     * 
                     */
                    bool GetPublicIpFromSameZone() const;

                    /**
                     * 设置公网IP是否强制与NAT网关来自同可用区，true表示需要与NAT网关同可用区；false表示可与NAT网关不是同一个可用区。此参数只有当参数Zone存在时才能生效。
                     * @param _publicIpFromSameZone 公网IP是否强制与NAT网关来自同可用区，true表示需要与NAT网关同可用区；false表示可与NAT网关不是同一个可用区。此参数只有当参数Zone存在时才能生效。
                     * 
                     */
                    void SetPublicIpFromSameZone(const bool& _publicIpFromSameZone);

                    /**
                     * 判断参数 PublicIpFromSameZone 是否已赋值
                     * @return PublicIpFromSameZone 是否已赋值
                     * 
                     */
                    bool PublicIpFromSameZoneHasBeenSet() const;

                    /**
                     * 获取NAT网关类型，1表示传统型NAT网关，2表示标准型NAT网关，默认值是1。
                     * @return NatProductVersion NAT网关类型，1表示传统型NAT网关，2表示标准型NAT网关，默认值是1。
                     * 
                     */
                    uint64_t GetNatProductVersion() const;

                    /**
                     * 设置NAT网关类型，1表示传统型NAT网关，2表示标准型NAT网关，默认值是1。
                     * @param _natProductVersion NAT网关类型，1表示传统型NAT网关，2表示标准型NAT网关，默认值是1。
                     * 
                     */
                    void SetNatProductVersion(const uint64_t& _natProductVersion);

                    /**
                     * 判断参数 NatProductVersion 是否已赋值
                     * @return NatProductVersion 是否已赋值
                     * 
                     */
                    bool NatProductVersionHasBeenSet() const;

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
                     * NAT网关最大外网出带宽(单位：Mbps)，支持的参数值：20, 50, 100, 200, 500, 1000, 2000, 5000，默认: 100Mbps。  当以下NatProductVersion参数值为2即标准型时，此参数无需填写，默认为5000Mbps。
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * NAT网关并发连接数上限，支持参数值：1000000、3000000、10000000，默认值为100000。  当以下NatProductVersion参数值为2即标准型时，此参数无需填写，默认为2000000。
                     */
                    uint64_t m_maxConcurrentConnection;
                    bool m_maxConcurrentConnectionHasBeenSet;

                    /**
                     * 新建弹性公网IP个数，系统会按您的要求创建对应数量的弹性公网IP，其中AddressCount和PublicAddresses两个参数至少填写一个。
                     */
                    uint64_t m_addressCount;
                    bool m_addressCountHasBeenSet;

                    /**
                     * 绑定NAT网关的已有弹性公网IP数组，其中AddressCount和PublicAddresses两个参数至少填写一个。 示例值：["139.199.232.119"]
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
                     * NAT网关所属子网，已废弃
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 绑定NAT网关的弹性公网IP带宽值（单位：Mbps）。不填写此参数时：则该参数默认为弹性公网IP的带宽值，部分用户默认为该用户类型的弹性公网IP的带宽上限。
                     */
                    uint64_t m_stockPublicIpAddressesBandwidthOut;
                    bool m_stockPublicIpAddressesBandwidthOutHasBeenSet;

                    /**
                     * 需要申请公网IP带宽大小（单位Mbps），默认为当前用户类型所能使用的最大值。
                     */
                    uint64_t m_publicIpAddressesBandwidthOut;
                    bool m_publicIpAddressesBandwidthOutHasBeenSet;

                    /**
                     * 公网IP是否强制与NAT网关来自同可用区，true表示需要与NAT网关同可用区；false表示可与NAT网关不是同一个可用区。此参数只有当参数Zone存在时才能生效。
                     */
                    bool m_publicIpFromSameZone;
                    bool m_publicIpFromSameZoneHasBeenSet;

                    /**
                     * NAT网关类型，1表示传统型NAT网关，2表示标准型NAT网关，默认值是1。
                     */
                    uint64_t m_natProductVersion;
                    bool m_natProductVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATENATGATEWAYREQUEST_H_
