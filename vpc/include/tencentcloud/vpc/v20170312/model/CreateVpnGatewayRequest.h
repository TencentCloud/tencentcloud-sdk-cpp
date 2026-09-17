/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/InstanceChargePrepaid.h>
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
                * CreateVpnGateway请求参数结构体
                */
                class CreateVpnGatewayRequest : public AbstractModel
                {
                public:
                    CreateVpnGatewayRequest();
                    ~CreateVpnGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>VPC实例ID。可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>。接口返回值中的VpcId获取</p><p>入参限制：当Type为CCN/SSL_CCN 类型时传 &quot;&quot;，IPSEC/SSL 类型必须传对应VPC实例ID。</p>
                     * @return VpcId <p>VPC实例ID。可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>。接口返回值中的VpcId获取</p><p>入参限制：当Type为CCN/SSL_CCN 类型时传 &quot;&quot;，IPSEC/SSL 类型必须传对应VPC实例ID。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC实例ID。可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>。接口返回值中的VpcId获取</p><p>入参限制：当Type为CCN/SSL_CCN 类型时传 &quot;&quot;，IPSEC/SSL 类型必须传对应VPC实例ID。</p>
                     * @param _vpcId <p>VPC实例ID。可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>。接口返回值中的VpcId获取</p><p>入参限制：当Type为CCN/SSL_CCN 类型时传 &quot;&quot;，IPSEC/SSL 类型必须传对应VPC实例ID。</p>
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
                     * 获取<p>VPN网关名称，最大长度不能超过60个字节。</p>
                     * @return VpnGatewayName <p>VPN网关名称，最大长度不能超过60个字节。</p>
                     * 
                     */
                    std::string GetVpnGatewayName() const;

                    /**
                     * 设置<p>VPN网关名称，最大长度不能超过60个字节。</p>
                     * @param _vpnGatewayName <p>VPN网关名称，最大长度不能超过60个字节。</p>
                     * 
                     */
                    void SetVpnGatewayName(const std::string& _vpnGatewayName);

                    /**
                     * 判断参数 VpnGatewayName 是否已赋值
                     * @return VpnGatewayName 是否已赋值
                     * 
                     */
                    bool VpnGatewayNameHasBeenSet() const;

                    /**
                     * 获取<p>公网带宽设置。可选带宽规格：5, 10, 20, 50, 100, 200, 500, 1000, 3000；单位：Mbps。</p>
                     * @return InternetMaxBandwidthOut <p>公网带宽设置。可选带宽规格：5, 10, 20, 50, 100, 200, 500, 1000, 3000；单位：Mbps。</p>
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置<p>公网带宽设置。可选带宽规格：5, 10, 20, 50, 100, 200, 500, 1000, 3000；单位：Mbps。</p>
                     * @param _internetMaxBandwidthOut <p>公网带宽设置。可选带宽规格：5, 10, 20, 50, 100, 200, 500, 1000, 3000；单位：Mbps。</p>
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
                     * 获取<p>VPN网关计费模式，PREPAID：表示预付费，即包年包月，POSTPAID_BY_HOUR：表示后付费，即按量计费。默认：POSTPAID_BY_HOUR，如果指定预付费模式，参数InstanceChargePrepaid必填。</p>
                     * @return InstanceChargeType <p>VPN网关计费模式，PREPAID：表示预付费，即包年包月，POSTPAID_BY_HOUR：表示后付费，即按量计费。默认：POSTPAID_BY_HOUR，如果指定预付费模式，参数InstanceChargePrepaid必填。</p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>VPN网关计费模式，PREPAID：表示预付费，即包年包月，POSTPAID_BY_HOUR：表示后付费，即按量计费。默认：POSTPAID_BY_HOUR，如果指定预付费模式，参数InstanceChargePrepaid必填。</p>
                     * @param _instanceChargeType <p>VPN网关计费模式，PREPAID：表示预付费，即包年包月，POSTPAID_BY_HOUR：表示后付费，即按量计费。默认：POSTPAID_BY_HOUR，如果指定预付费模式，参数InstanceChargePrepaid必填。</p>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * @return InstanceChargePrepaid <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置<p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * @param _instanceChargePrepaid <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取<p>可用区，如：ap-guangzhou-2。</p>
                     * @return Zone <p>可用区，如：ap-guangzhou-2。</p>
                     * @deprecated
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区，如：ap-guangzhou-2。</p>
                     * @param _zone <p>可用区，如：ap-guangzhou-2。</p>
                     * @deprecated
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * @deprecated
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>VPN网关类型，默认为IPSEC。值“IPSEC”为VPC型IPSEC VPN网关，值“SSL”为VPC型SSL VPN网关，值“CCN”为云联网型IPSEC VPN网关，值“SSL_CCN”为云联网型SSL VPN网关。</p>
                     * @return Type <p>VPN网关类型，默认为IPSEC。值“IPSEC”为VPC型IPSEC VPN网关，值“SSL”为VPC型SSL VPN网关，值“CCN”为云联网型IPSEC VPN网关，值“SSL_CCN”为云联网型SSL VPN网关。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>VPN网关类型，默认为IPSEC。值“IPSEC”为VPC型IPSEC VPN网关，值“SSL”为VPC型SSL VPN网关，值“CCN”为云联网型IPSEC VPN网关，值“SSL_CCN”为云联网型SSL VPN网关。</p>
                     * @param _type <p>VPN网关类型，默认为IPSEC。值“IPSEC”为VPC型IPSEC VPN网关，值“SSL”为VPC型SSL VPN网关，值“CCN”为云联网型IPSEC VPN网关，值“SSL_CCN”为云联网型SSL VPN网关。</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
                     * @return Tags <p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
                     * @param _tags <p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
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
                     * 获取<p>CDC实例ID。</p>
                     * @return CdcId <p>CDC实例ID。</p>
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置<p>CDC实例ID。</p>
                     * @param _cdcId <p>CDC实例ID。</p>
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取<p>SSL VPN连接数设置，可选规格：5, 10, 20, 50, 100, 200, 500, 1000；</p><p>单位：个</p><p>默认值：5</p><p>仅 SSL / SSL_CCN 类型需要填这个参数。</p>
                     * @return MaxConnection <p>SSL VPN连接数设置，可选规格：5, 10, 20, 50, 100, 200, 500, 1000；</p><p>单位：个</p><p>默认值：5</p><p>仅 SSL / SSL_CCN 类型需要填这个参数。</p>
                     * 
                     */
                    uint64_t GetMaxConnection() const;

                    /**
                     * 设置<p>SSL VPN连接数设置，可选规格：5, 10, 20, 50, 100, 200, 500, 1000；</p><p>单位：个</p><p>默认值：5</p><p>仅 SSL / SSL_CCN 类型需要填这个参数。</p>
                     * @param _maxConnection <p>SSL VPN连接数设置，可选规格：5, 10, 20, 50, 100, 200, 500, 1000；</p><p>单位：个</p><p>默认值：5</p><p>仅 SSL / SSL_CCN 类型需要填这个参数。</p>
                     * 
                     */
                    void SetMaxConnection(const uint64_t& _maxConnection);

                    /**
                     * 判断参数 MaxConnection 是否已赋值
                     * @return MaxConnection 是否已赋值
                     * 
                     */
                    bool MaxConnectionHasBeenSet() const;

                    /**
                     * 获取<p>BGP ASN。</p>
                     * @return BgpAsn <p>BGP ASN。</p>
                     * 
                     */
                    uint64_t GetBgpAsn() const;

                    /**
                     * 设置<p>BGP ASN。</p>
                     * @param _bgpAsn <p>BGP ASN。</p>
                     * 
                     */
                    void SetBgpAsn(const uint64_t& _bgpAsn);

                    /**
                     * 判断参数 BgpAsn 是否已赋值
                     * @return BgpAsn 是否已赋值
                     * 
                     */
                    bool BgpAsnHasBeenSet() const;

                    /**
                     * 获取<p>是否是私网类型</p>
                     * @return IsPrivate <p>是否是私网类型</p>
                     * 
                     */
                    bool GetIsPrivate() const;

                    /**
                     * 设置<p>是否是私网类型</p>
                     * @param _isPrivate <p>是否是私网类型</p>
                     * 
                     */
                    void SetIsPrivate(const bool& _isPrivate);

                    /**
                     * 判断参数 IsPrivate 是否已赋值
                     * @return IsPrivate 是否已赋值
                     * 
                     */
                    bool IsPrivateHasBeenSet() const;

                    /**
                     * 获取<p>私网唯一ID</p>
                     * @return SubnetId <p>私网唯一ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>私网唯一ID</p>
                     * @param _subnetId <p>私网唯一ID</p>
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
                     * 获取<p>BGP 开关，开启时需指定BgpAsn。</p>
                     * @return BgpEnable <p>BGP 开关，开启时需指定BgpAsn。</p>
                     * 
                     */
                    bool GetBgpEnable() const;

                    /**
                     * 设置<p>BGP 开关，开启时需指定BgpAsn。</p>
                     * @param _bgpEnable <p>BGP 开关，开启时需指定BgpAsn。</p>
                     * 
                     */
                    void SetBgpEnable(const bool& _bgpEnable);

                    /**
                     * 判断参数 BgpEnable 是否已赋值
                     * @return BgpEnable 是否已赋值
                     * 
                     */
                    bool BgpEnableHasBeenSet() const;

                    /**
                     * 获取<p>内外层IP协议</p><p>枚举值：</p><ul><li>4in4： IPv4 over IPv4</li><li>6in4： IPv6 over IPv4</li><li>6in6： IPv6 over IPv6</li><li>4in6： IPv4 over IPv6</li></ul><p>默认值：4in4</p>
                     * @return IpStack <p>内外层IP协议</p><p>枚举值：</p><ul><li>4in4： IPv4 over IPv4</li><li>6in4： IPv6 over IPv4</li><li>6in6： IPv6 over IPv6</li><li>4in6： IPv4 over IPv6</li></ul><p>默认值：4in4</p>
                     * 
                     */
                    std::string GetIpStack() const;

                    /**
                     * 设置<p>内外层IP协议</p><p>枚举值：</p><ul><li>4in4： IPv4 over IPv4</li><li>6in4： IPv6 over IPv4</li><li>6in6： IPv6 over IPv6</li><li>4in6： IPv4 over IPv6</li></ul><p>默认值：4in4</p>
                     * @param _ipStack <p>内外层IP协议</p><p>枚举值：</p><ul><li>4in4： IPv4 over IPv4</li><li>6in4： IPv6 over IPv4</li><li>6in6： IPv6 over IPv6</li><li>4in6： IPv4 over IPv6</li></ul><p>默认值：4in4</p>
                     * 
                     */
                    void SetIpStack(const std::string& _ipStack);

                    /**
                     * 判断参数 IpStack 是否已赋值
                     * @return IpStack 是否已赋值
                     * 
                     */
                    bool IpStackHasBeenSet() const;

                    /**
                     * 获取<p>CCN类型私网VPN接入网段</p>
                     * @return AccessSubnet <p>CCN类型私网VPN接入网段</p>
                     * 
                     */
                    std::string GetAccessSubnet() const;

                    /**
                     * 设置<p>CCN类型私网VPN接入网段</p>
                     * @param _accessSubnet <p>CCN类型私网VPN接入网段</p>
                     * 
                     */
                    void SetAccessSubnet(const std::string& _accessSubnet);

                    /**
                     * 判断参数 AccessSubnet 是否已赋值
                     * @return AccessSubnet 是否已赋值
                     * 
                     */
                    bool AccessSubnetHasBeenSet() const;

                private:

                    /**
                     * <p>VPC实例ID。可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>。接口返回值中的VpcId获取</p><p>入参限制：当Type为CCN/SSL_CCN 类型时传 &quot;&quot;，IPSEC/SSL 类型必须传对应VPC实例ID。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>VPN网关名称，最大长度不能超过60个字节。</p>
                     */
                    std::string m_vpnGatewayName;
                    bool m_vpnGatewayNameHasBeenSet;

                    /**
                     * <p>公网带宽设置。可选带宽规格：5, 10, 20, 50, 100, 200, 500, 1000, 3000；单位：Mbps。</p>
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * <p>VPN网关计费模式，PREPAID：表示预付费，即包年包月，POSTPAID_BY_HOUR：表示后付费，即按量计费。默认：POSTPAID_BY_HOUR，如果指定预付费模式，参数InstanceChargePrepaid必填。</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * <p>可用区，如：ap-guangzhou-2。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>VPN网关类型，默认为IPSEC。值“IPSEC”为VPC型IPSEC VPN网关，值“SSL”为VPC型SSL VPN网关，值“CCN”为云联网型IPSEC VPN网关，值“SSL_CCN”为云联网型SSL VPN网关。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>CDC实例ID。</p>
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * <p>SSL VPN连接数设置，可选规格：5, 10, 20, 50, 100, 200, 500, 1000；</p><p>单位：个</p><p>默认值：5</p><p>仅 SSL / SSL_CCN 类型需要填这个参数。</p>
                     */
                    uint64_t m_maxConnection;
                    bool m_maxConnectionHasBeenSet;

                    /**
                     * <p>BGP ASN。</p>
                     */
                    uint64_t m_bgpAsn;
                    bool m_bgpAsnHasBeenSet;

                    /**
                     * <p>是否是私网类型</p>
                     */
                    bool m_isPrivate;
                    bool m_isPrivateHasBeenSet;

                    /**
                     * <p>私网唯一ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>BGP 开关，开启时需指定BgpAsn。</p>
                     */
                    bool m_bgpEnable;
                    bool m_bgpEnableHasBeenSet;

                    /**
                     * <p>内外层IP协议</p><p>枚举值：</p><ul><li>4in4： IPv4 over IPv4</li><li>6in4： IPv6 over IPv4</li><li>6in6： IPv6 over IPv6</li><li>4in6： IPv4 over IPv6</li></ul><p>默认值：4in4</p>
                     */
                    std::string m_ipStack;
                    bool m_ipStackHasBeenSet;

                    /**
                     * <p>CCN类型私网VPN接入网段</p>
                     */
                    std::string m_accessSubnet;
                    bool m_accessSubnetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYREQUEST_H_
