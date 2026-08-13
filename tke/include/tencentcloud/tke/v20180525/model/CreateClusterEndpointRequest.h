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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERENDPOINTREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateClusterEndpoint请求参数结构体
                */
                class CreateClusterEndpointRequest : public AbstractModel
                {
                public:
                    CreateClusterEndpointRequest();
                    ~CreateClusterEndpointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>集群端口所在的子网ID  (仅在开启非外网访问时需要填，必须为集群所在VPC内的子网)。获取方式：https://cloud.tencent.com/document/product/215/15784</p>
                     * @return SubnetId <p>集群端口所在的子网ID  (仅在开启非外网访问时需要填，必须为集群所在VPC内的子网)。获取方式：https://cloud.tencent.com/document/product/215/15784</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>集群端口所在的子网ID  (仅在开启非外网访问时需要填，必须为集群所在VPC内的子网)。获取方式：https://cloud.tencent.com/document/product/215/15784</p>
                     * @param _subnetId <p>集群端口所在的子网ID  (仅在开启非外网访问时需要填，必须为集群所在VPC内的子网)。获取方式：https://cloud.tencent.com/document/product/215/15784</p>
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
                     * 获取<p>是否为外网访问（TRUE 外网访问 FALSE 内网访问，默认值： FALSE）</p>
                     * @return IsExtranet <p>是否为外网访问（TRUE 外网访问 FALSE 内网访问，默认值： FALSE）</p>
                     * 
                     */
                    bool GetIsExtranet() const;

                    /**
                     * 设置<p>是否为外网访问（TRUE 外网访问 FALSE 内网访问，默认值： FALSE）</p>
                     * @param _isExtranet <p>是否为外网访问（TRUE 外网访问 FALSE 内网访问，默认值： FALSE）</p>
                     * 
                     */
                    void SetIsExtranet(const bool& _isExtranet);

                    /**
                     * 判断参数 IsExtranet 是否已赋值
                     * @return IsExtranet 是否已赋值
                     * 
                     */
                    bool IsExtranetHasBeenSet() const;

                    /**
                     * 获取<p>设置域名</p>
                     * @return Domain <p>设置域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>设置域名</p>
                     * @param _domain <p>设置域名</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>使用的安全组（开启内外网访问且不使用已有clb时可传，内网访问需要先找clb侧加白使用）。获取方式：https://cloud.tencent.com/document/api/215/15808</p>
                     * @return SecurityGroup <p>使用的安全组（开启内外网访问且不使用已有clb时可传，内网访问需要先找clb侧加白使用）。获取方式：https://cloud.tencent.com/document/api/215/15808</p>
                     * 
                     */
                    std::string GetSecurityGroup() const;

                    /**
                     * 设置<p>使用的安全组（开启内外网访问且不使用已有clb时可传，内网访问需要先找clb侧加白使用）。获取方式：https://cloud.tencent.com/document/api/215/15808</p>
                     * @param _securityGroup <p>使用的安全组（开启内外网访问且不使用已有clb时可传，内网访问需要先找clb侧加白使用）。获取方式：https://cloud.tencent.com/document/api/215/15808</p>
                     * 
                     */
                    void SetSecurityGroup(const std::string& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取<p>创建lb参数，只有外网访问需要设置，是一个json格式化后的字符串：{&quot;InternetAccessible&quot;:{&quot;InternetChargeType&quot;:&quot;TRAFFIC_POSTPAID_BY_HOUR&quot;,&quot;InternetMaxBandwidthOut&quot;:200},&quot;VipIsp&quot;:&quot;&quot;,&quot;BandwidthPackageId&quot;:&quot;&quot;}。<br>各个参数意义：<br>InternetAccessible.InternetChargeType含义：TRAFFIC_POSTPAID_BY_HOUR按流量按小时后计费;BANDWIDTH_POSTPAID_BY_HOUR 按带宽按小时后计费;InternetAccessible.BANDWIDTH_PACKAGE 按带宽包计费。<br>InternetMaxBandwidthOut含义：最大出带宽，单位Mbps，范围支持0到2048，默认值10。<br>VipIsp含义：CMCC | CTCC | CUCC，分别对应 移动 | 电信 | 联通，如果不指定本参数，则默认使用BGP。可通过 DescribeSingleIsp 接口查询一个地域所支持的Isp。如果指定运营商，则网络计费式只能使用按带宽包计费BANDWIDTH_PACKAGE。<br>BandwidthPackageId含义：带宽包ID，指定此参数时，网络计费方式InternetAccessible.InternetChargeType只支持按带宽包计费BANDWIDTH_PACKAGE。</p>
                     * @return ExtensiveParameters <p>创建lb参数，只有外网访问需要设置，是一个json格式化后的字符串：{&quot;InternetAccessible&quot;:{&quot;InternetChargeType&quot;:&quot;TRAFFIC_POSTPAID_BY_HOUR&quot;,&quot;InternetMaxBandwidthOut&quot;:200},&quot;VipIsp&quot;:&quot;&quot;,&quot;BandwidthPackageId&quot;:&quot;&quot;}。<br>各个参数意义：<br>InternetAccessible.InternetChargeType含义：TRAFFIC_POSTPAID_BY_HOUR按流量按小时后计费;BANDWIDTH_POSTPAID_BY_HOUR 按带宽按小时后计费;InternetAccessible.BANDWIDTH_PACKAGE 按带宽包计费。<br>InternetMaxBandwidthOut含义：最大出带宽，单位Mbps，范围支持0到2048，默认值10。<br>VipIsp含义：CMCC | CTCC | CUCC，分别对应 移动 | 电信 | 联通，如果不指定本参数，则默认使用BGP。可通过 DescribeSingleIsp 接口查询一个地域所支持的Isp。如果指定运营商，则网络计费式只能使用按带宽包计费BANDWIDTH_PACKAGE。<br>BandwidthPackageId含义：带宽包ID，指定此参数时，网络计费方式InternetAccessible.InternetChargeType只支持按带宽包计费BANDWIDTH_PACKAGE。</p>
                     * 
                     */
                    std::string GetExtensiveParameters() const;

                    /**
                     * 设置<p>创建lb参数，只有外网访问需要设置，是一个json格式化后的字符串：{&quot;InternetAccessible&quot;:{&quot;InternetChargeType&quot;:&quot;TRAFFIC_POSTPAID_BY_HOUR&quot;,&quot;InternetMaxBandwidthOut&quot;:200},&quot;VipIsp&quot;:&quot;&quot;,&quot;BandwidthPackageId&quot;:&quot;&quot;}。<br>各个参数意义：<br>InternetAccessible.InternetChargeType含义：TRAFFIC_POSTPAID_BY_HOUR按流量按小时后计费;BANDWIDTH_POSTPAID_BY_HOUR 按带宽按小时后计费;InternetAccessible.BANDWIDTH_PACKAGE 按带宽包计费。<br>InternetMaxBandwidthOut含义：最大出带宽，单位Mbps，范围支持0到2048，默认值10。<br>VipIsp含义：CMCC | CTCC | CUCC，分别对应 移动 | 电信 | 联通，如果不指定本参数，则默认使用BGP。可通过 DescribeSingleIsp 接口查询一个地域所支持的Isp。如果指定运营商，则网络计费式只能使用按带宽包计费BANDWIDTH_PACKAGE。<br>BandwidthPackageId含义：带宽包ID，指定此参数时，网络计费方式InternetAccessible.InternetChargeType只支持按带宽包计费BANDWIDTH_PACKAGE。</p>
                     * @param _extensiveParameters <p>创建lb参数，只有外网访问需要设置，是一个json格式化后的字符串：{&quot;InternetAccessible&quot;:{&quot;InternetChargeType&quot;:&quot;TRAFFIC_POSTPAID_BY_HOUR&quot;,&quot;InternetMaxBandwidthOut&quot;:200},&quot;VipIsp&quot;:&quot;&quot;,&quot;BandwidthPackageId&quot;:&quot;&quot;}。<br>各个参数意义：<br>InternetAccessible.InternetChargeType含义：TRAFFIC_POSTPAID_BY_HOUR按流量按小时后计费;BANDWIDTH_POSTPAID_BY_HOUR 按带宽按小时后计费;InternetAccessible.BANDWIDTH_PACKAGE 按带宽包计费。<br>InternetMaxBandwidthOut含义：最大出带宽，单位Mbps，范围支持0到2048，默认值10。<br>VipIsp含义：CMCC | CTCC | CUCC，分别对应 移动 | 电信 | 联通，如果不指定本参数，则默认使用BGP。可通过 DescribeSingleIsp 接口查询一个地域所支持的Isp。如果指定运营商，则网络计费式只能使用按带宽包计费BANDWIDTH_PACKAGE。<br>BandwidthPackageId含义：带宽包ID，指定此参数时，网络计费方式InternetAccessible.InternetChargeType只支持按带宽包计费BANDWIDTH_PACKAGE。</p>
                     * 
                     */
                    void SetExtensiveParameters(const std::string& _extensiveParameters);

                    /**
                     * 判断参数 ExtensiveParameters 是否已赋值
                     * @return ExtensiveParameters 是否已赋值
                     * 
                     */
                    bool ExtensiveParametersHasBeenSet() const;

                    /**
                     * 获取<p>使用已有clb开启内网或外网访问</p>
                     * @return ExistedLoadBalancerId <p>使用已有clb开启内网或外网访问</p>
                     * 
                     */
                    std::string GetExistedLoadBalancerId() const;

                    /**
                     * 设置<p>使用已有clb开启内网或外网访问</p>
                     * @param _existedLoadBalancerId <p>使用已有clb开启内网或外网访问</p>
                     * 
                     */
                    void SetExistedLoadBalancerId(const std::string& _existedLoadBalancerId);

                    /**
                     * 判断参数 ExistedLoadBalancerId 是否已赋值
                     * @return ExistedLoadBalancerId 是否已赋值
                     * 
                     */
                    bool ExistedLoadBalancerIdHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群端口所在的子网ID  (仅在开启非外网访问时需要填，必须为集群所在VPC内的子网)。获取方式：https://cloud.tencent.com/document/product/215/15784</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>是否为外网访问（TRUE 外网访问 FALSE 内网访问，默认值： FALSE）</p>
                     */
                    bool m_isExtranet;
                    bool m_isExtranetHasBeenSet;

                    /**
                     * <p>设置域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>使用的安全组（开启内外网访问且不使用已有clb时可传，内网访问需要先找clb侧加白使用）。获取方式：https://cloud.tencent.com/document/api/215/15808</p>
                     */
                    std::string m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * <p>创建lb参数，只有外网访问需要设置，是一个json格式化后的字符串：{&quot;InternetAccessible&quot;:{&quot;InternetChargeType&quot;:&quot;TRAFFIC_POSTPAID_BY_HOUR&quot;,&quot;InternetMaxBandwidthOut&quot;:200},&quot;VipIsp&quot;:&quot;&quot;,&quot;BandwidthPackageId&quot;:&quot;&quot;}。<br>各个参数意义：<br>InternetAccessible.InternetChargeType含义：TRAFFIC_POSTPAID_BY_HOUR按流量按小时后计费;BANDWIDTH_POSTPAID_BY_HOUR 按带宽按小时后计费;InternetAccessible.BANDWIDTH_PACKAGE 按带宽包计费。<br>InternetMaxBandwidthOut含义：最大出带宽，单位Mbps，范围支持0到2048，默认值10。<br>VipIsp含义：CMCC | CTCC | CUCC，分别对应 移动 | 电信 | 联通，如果不指定本参数，则默认使用BGP。可通过 DescribeSingleIsp 接口查询一个地域所支持的Isp。如果指定运营商，则网络计费式只能使用按带宽包计费BANDWIDTH_PACKAGE。<br>BandwidthPackageId含义：带宽包ID，指定此参数时，网络计费方式InternetAccessible.InternetChargeType只支持按带宽包计费BANDWIDTH_PACKAGE。</p>
                     */
                    std::string m_extensiveParameters;
                    bool m_extensiveParametersHasBeenSet;

                    /**
                     * <p>使用已有clb开启内网或外网访问</p>
                     */
                    std::string m_existedLoadBalancerId;
                    bool m_existedLoadBalancerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERENDPOINTREQUEST_H_
