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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_INQUIRYPRICECREATELOADBALANCERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_INQUIRYPRICECREATELOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/LBChargePrepaid.h>
#include <tencentcloud/clb/v20180317/model/InternetAccessible.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * InquiryPriceCreateLoadBalancer请求参数结构体
                */
                class InquiryPriceCreateLoadBalancerRequest : public AbstractModel
                {
                public:
                    InquiryPriceCreateLoadBalancerRequest();
                    ~InquiryPriceCreateLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取询价的负载均衡类型，OPEN为公网类型，INTERNAL为内网类型
                     * @return LoadBalancerType 询价的负载均衡类型，OPEN为公网类型，INTERNAL为内网类型
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置询价的负载均衡类型，OPEN为公网类型，INTERNAL为内网类型
                     * @param _loadBalancerType 询价的负载均衡类型，OPEN为公网类型，INTERNAL为内网类型
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取询价的收费类型，POSTPAID为按量计费，"PREPAID"为预付费包年包月
                     * @return LoadBalancerChargeType 询价的收费类型，POSTPAID为按量计费，"PREPAID"为预付费包年包月
                     * 
                     */
                    std::string GetLoadBalancerChargeType() const;

                    /**
                     * 设置询价的收费类型，POSTPAID为按量计费，"PREPAID"为预付费包年包月
                     * @param _loadBalancerChargeType 询价的收费类型，POSTPAID为按量计费，"PREPAID"为预付费包年包月
                     * 
                     */
                    void SetLoadBalancerChargeType(const std::string& _loadBalancerChargeType);

                    /**
                     * 判断参数 LoadBalancerChargeType 是否已赋值
                     * @return LoadBalancerChargeType 是否已赋值
                     * 
                     */
                    bool LoadBalancerChargeTypeHasBeenSet() const;

                    /**
                     * 获取询价的收费周期。（仅包年包月支持该参数）
                     * @return LoadBalancerChargePrepaid 询价的收费周期。（仅包年包月支持该参数）
                     * 
                     */
                    LBChargePrepaid GetLoadBalancerChargePrepaid() const;

                    /**
                     * 设置询价的收费周期。（仅包年包月支持该参数）
                     * @param _loadBalancerChargePrepaid 询价的收费周期。（仅包年包月支持该参数）
                     * 
                     */
                    void SetLoadBalancerChargePrepaid(const LBChargePrepaid& _loadBalancerChargePrepaid);

                    /**
                     * 判断参数 LoadBalancerChargePrepaid 是否已赋值
                     * @return LoadBalancerChargePrepaid 是否已赋值
                     * 
                     */
                    bool LoadBalancerChargePrepaidHasBeenSet() const;

                    /**
                     * 获取询价的网络计费方式
                     * @return InternetAccessible 询价的网络计费方式
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置询价的网络计费方式
                     * @param _internetAccessible 询价的网络计费方式
                     * 
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取询价的负载均衡实例个数，默认为1
                     * @return GoodsNum 询价的负载均衡实例个数，默认为1
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置询价的负载均衡实例个数，默认为1
                     * @param _goodsNum 询价的负载均衡实例个数，默认为1
                     * 
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取指定可用区询价。如：ap-guangzhou-1
                     * @return ZoneId 指定可用区询价。如：ap-guangzhou-1
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置指定可用区询价。如：ap-guangzhou-1
                     * @param _zoneId 指定可用区询价。如：ap-guangzhou-1
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取包年包月询价时传性能容量型规格，如：<li>clb.c2.medium（标准型）</li><li>clb.c3.small（高阶型1）</li><li>clb.c3.medium（高阶型2）</li>
<li>clb.c4.small（超强型1）</li><li>clb.c4.medium（超强型2）</li><li>clb.c4.large（超强型3）</li><li>clb.c4.xlarge（超强型4）</li>
按量付费询价时传SLA
                     * @return SlaType 包年包月询价时传性能容量型规格，如：<li>clb.c2.medium（标准型）</li><li>clb.c3.small（高阶型1）</li><li>clb.c3.medium（高阶型2）</li>
<li>clb.c4.small（超强型1）</li><li>clb.c4.medium（超强型2）</li><li>clb.c4.large（超强型3）</li><li>clb.c4.xlarge（超强型4）</li>
按量付费询价时传SLA
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置包年包月询价时传性能容量型规格，如：<li>clb.c2.medium（标准型）</li><li>clb.c3.small（高阶型1）</li><li>clb.c3.medium（高阶型2）</li>
<li>clb.c4.small（超强型1）</li><li>clb.c4.medium（超强型2）</li><li>clb.c4.large（超强型3）</li><li>clb.c4.xlarge（超强型4）</li>
按量付费询价时传SLA
                     * @param _slaType 包年包月询价时传性能容量型规格，如：<li>clb.c2.medium（标准型）</li><li>clb.c3.small（高阶型1）</li><li>clb.c3.medium（高阶型2）</li>
<li>clb.c4.small（超强型1）</li><li>clb.c4.medium（超强型2）</li><li>clb.c4.large（超强型3）</li><li>clb.c4.xlarge（超强型4）</li>
按量付费询价时传SLA
                     * 
                     */
                    void SetSlaType(const std::string& _slaType);

                    /**
                     * 判断参数 SlaType 是否已赋值
                     * @return SlaType 是否已赋值
                     * 
                     */
                    bool SlaTypeHasBeenSet() const;

                    /**
                     * 获取IP版本，可取值：IPV4、IPV6、IPv6FullChain，不区分大小写，默认值 IPV4。说明：取值为IPV6表示为IPV6 NAT64版本；取值为IPv6FullChain，表示为IPv6版本。
                     * @return AddressIPVersion IP版本，可取值：IPV4、IPV6、IPv6FullChain，不区分大小写，默认值 IPV4。说明：取值为IPV6表示为IPV6 NAT64版本；取值为IPv6FullChain，表示为IPv6版本。
                     * 
                     */
                    std::string GetAddressIPVersion() const;

                    /**
                     * 设置IP版本，可取值：IPV4、IPV6、IPv6FullChain，不区分大小写，默认值 IPV4。说明：取值为IPV6表示为IPV6 NAT64版本；取值为IPv6FullChain，表示为IPv6版本。
                     * @param _addressIPVersion IP版本，可取值：IPV4、IPV6、IPv6FullChain，不区分大小写，默认值 IPV4。说明：取值为IPV6表示为IPV6 NAT64版本；取值为IPv6FullChain，表示为IPv6版本。
                     * 
                     */
                    void SetAddressIPVersion(const std::string& _addressIPVersion);

                    /**
                     * 判断参数 AddressIPVersion 是否已赋值
                     * @return AddressIPVersion 是否已赋值
                     * 
                     */
                    bool AddressIPVersionHasBeenSet() const;

                    /**
                     * 获取仅适用于公网负载均衡。目前仅广州、上海、南京、济南、杭州、福州、北京、石家庄、武汉、长沙、成都、重庆地域支持静态单线 IP 线路类型，如需体验，请联系商务经理申请。申请通过后，即可选择中国移动（CMCC）、中国联通（CUCC）或中国电信（CTCC）的运营商类型，网络计费模式只能使用按带宽包计费(BANDWIDTH_PACKAGE)。 如果不指定本参数，则默认使用BGP。可通过 DescribeResources 接口查询一个地域所支持的Isp。
                     * @return VipIsp 仅适用于公网负载均衡。目前仅广州、上海、南京、济南、杭州、福州、北京、石家庄、武汉、长沙、成都、重庆地域支持静态单线 IP 线路类型，如需体验，请联系商务经理申请。申请通过后，即可选择中国移动（CMCC）、中国联通（CUCC）或中国电信（CTCC）的运营商类型，网络计费模式只能使用按带宽包计费(BANDWIDTH_PACKAGE)。 如果不指定本参数，则默认使用BGP。可通过 DescribeResources 接口查询一个地域所支持的Isp。
                     * 
                     */
                    std::string GetVipIsp() const;

                    /**
                     * 设置仅适用于公网负载均衡。目前仅广州、上海、南京、济南、杭州、福州、北京、石家庄、武汉、长沙、成都、重庆地域支持静态单线 IP 线路类型，如需体验，请联系商务经理申请。申请通过后，即可选择中国移动（CMCC）、中国联通（CUCC）或中国电信（CTCC）的运营商类型，网络计费模式只能使用按带宽包计费(BANDWIDTH_PACKAGE)。 如果不指定本参数，则默认使用BGP。可通过 DescribeResources 接口查询一个地域所支持的Isp。
                     * @param _vipIsp 仅适用于公网负载均衡。目前仅广州、上海、南京、济南、杭州、福州、北京、石家庄、武汉、长沙、成都、重庆地域支持静态单线 IP 线路类型，如需体验，请联系商务经理申请。申请通过后，即可选择中国移动（CMCC）、中国联通（CUCC）或中国电信（CTCC）的运营商类型，网络计费模式只能使用按带宽包计费(BANDWIDTH_PACKAGE)。 如果不指定本参数，则默认使用BGP。可通过 DescribeResources 接口查询一个地域所支持的Isp。
                     * 
                     */
                    void SetVipIsp(const std::string& _vipIsp);

                    /**
                     * 判断参数 VipIsp 是否已赋值
                     * @return VipIsp 是否已赋值
                     * 
                     */
                    bool VipIspHasBeenSet() const;

                private:

                    /**
                     * 询价的负载均衡类型，OPEN为公网类型，INTERNAL为内网类型
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * 询价的收费类型，POSTPAID为按量计费，"PREPAID"为预付费包年包月
                     */
                    std::string m_loadBalancerChargeType;
                    bool m_loadBalancerChargeTypeHasBeenSet;

                    /**
                     * 询价的收费周期。（仅包年包月支持该参数）
                     */
                    LBChargePrepaid m_loadBalancerChargePrepaid;
                    bool m_loadBalancerChargePrepaidHasBeenSet;

                    /**
                     * 询价的网络计费方式
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * 询价的负载均衡实例个数，默认为1
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 指定可用区询价。如：ap-guangzhou-1
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 包年包月询价时传性能容量型规格，如：<li>clb.c2.medium（标准型）</li><li>clb.c3.small（高阶型1）</li><li>clb.c3.medium（高阶型2）</li>
<li>clb.c4.small（超强型1）</li><li>clb.c4.medium（超强型2）</li><li>clb.c4.large（超强型3）</li><li>clb.c4.xlarge（超强型4）</li>
按量付费询价时传SLA
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * IP版本，可取值：IPV4、IPV6、IPv6FullChain，不区分大小写，默认值 IPV4。说明：取值为IPV6表示为IPV6 NAT64版本；取值为IPv6FullChain，表示为IPv6版本。
                     */
                    std::string m_addressIPVersion;
                    bool m_addressIPVersionHasBeenSet;

                    /**
                     * 仅适用于公网负载均衡。目前仅广州、上海、南京、济南、杭州、福州、北京、石家庄、武汉、长沙、成都、重庆地域支持静态单线 IP 线路类型，如需体验，请联系商务经理申请。申请通过后，即可选择中国移动（CMCC）、中国联通（CUCC）或中国电信（CTCC）的运营商类型，网络计费模式只能使用按带宽包计费(BANDWIDTH_PACKAGE)。 如果不指定本参数，则默认使用BGP。可通过 DescribeResources 接口查询一个地域所支持的Isp。
                     */
                    std::string m_vipIsp;
                    bool m_vipIspHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_INQUIRYPRICECREATELOADBALANCERREQUEST_H_
