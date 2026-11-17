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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEADDRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/AddressChargePrepaid.h>
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
                * AllocateAddresses请求参数结构体
                */
                class AllocateAddressesRequest : public AbstractModel
                {
                public:
                    AllocateAddressesRequest();
                    ~AllocateAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>EIP数量。可申请的数量限制参考：<a href="https://cloud.tencent.com/document/product/1199/41648">EIP 配额限制</a>。默认值：1。</p>
                     * @return AddressCount <p>EIP数量。可申请的数量限制参考：<a href="https://cloud.tencent.com/document/product/1199/41648">EIP 配额限制</a>。默认值：1。</p>
                     * 
                     */
                    int64_t GetAddressCount() const;

                    /**
                     * 设置<p>EIP数量。可申请的数量限制参考：<a href="https://cloud.tencent.com/document/product/1199/41648">EIP 配额限制</a>。默认值：1。</p>
                     * @param _addressCount <p>EIP数量。可申请的数量限制参考：<a href="https://cloud.tencent.com/document/product/1199/41648">EIP 配额限制</a>。默认值：1。</p>
                     * 
                     */
                    void SetAddressCount(const int64_t& _addressCount);

                    /**
                     * 判断参数 AddressCount 是否已赋值
                     * @return AddressCount 是否已赋值
                     * 
                     */
                    bool AddressCountHasBeenSet() const;

                    /**
                     * 获取<p>EIP线路类型。各种线路类型详情可参考：<a href="https://cloud.tencent.com/document/product/1199/41646">EIP 的 IP 地址类型</a>。默认值：BGP。</p><ul style="margin:0"><li>BGP：常规 BGP 线路</li><li>已开通静态单线IP白名单的用户，可选值：<ul><li>CMCC：中国移动</li><li>CTCC：中国电信</li><li>CUCC：中国联通</li></ul></li>注意：仅部分地域支持静态单线IP。</ul>
                     * @return InternetServiceProvider <p>EIP线路类型。各种线路类型详情可参考：<a href="https://cloud.tencent.com/document/product/1199/41646">EIP 的 IP 地址类型</a>。默认值：BGP。</p><ul style="margin:0"><li>BGP：常规 BGP 线路</li><li>已开通静态单线IP白名单的用户，可选值：<ul><li>CMCC：中国移动</li><li>CTCC：中国电信</li><li>CUCC：中国联通</li></ul></li>注意：仅部分地域支持静态单线IP。</ul>
                     * 
                     */
                    std::string GetInternetServiceProvider() const;

                    /**
                     * 设置<p>EIP线路类型。各种线路类型详情可参考：<a href="https://cloud.tencent.com/document/product/1199/41646">EIP 的 IP 地址类型</a>。默认值：BGP。</p><ul style="margin:0"><li>BGP：常规 BGP 线路</li><li>已开通静态单线IP白名单的用户，可选值：<ul><li>CMCC：中国移动</li><li>CTCC：中国电信</li><li>CUCC：中国联通</li></ul></li>注意：仅部分地域支持静态单线IP。</ul>
                     * @param _internetServiceProvider <p>EIP线路类型。各种线路类型详情可参考：<a href="https://cloud.tencent.com/document/product/1199/41646">EIP 的 IP 地址类型</a>。默认值：BGP。</p><ul style="margin:0"><li>BGP：常规 BGP 线路</li><li>已开通静态单线IP白名单的用户，可选值：<ul><li>CMCC：中国移动</li><li>CTCC：中国电信</li><li>CUCC：中国联通</li></ul></li>注意：仅部分地域支持静态单线IP。</ul>
                     * 
                     */
                    void SetInternetServiceProvider(const std::string& _internetServiceProvider);

                    /**
                     * 判断参数 InternetServiceProvider 是否已赋值
                     * @return InternetServiceProvider 是否已赋值
                     * 
                     */
                    bool InternetServiceProviderHasBeenSet() const;

                    /**
                     * 获取<p>EIP计费方式。</p><ul style="margin:0"><li>标准账户类型，可选值：<ul><li>BANDWIDTH_PACKAGE：[共享带宽包](https://cloud.tencent.com/document/product/684/15255)付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li><li>BANDWIDTH_PREPAID_BY_MONTH：包月按带宽预付费</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li></ul>默认值：TRAFFIC_POSTPAID_BY_HOUR。</li><li>传统账户类型，无需传递此参数，EIP计费方式与其绑定的实例的计费方式一致，无需传递此参数。</li></ul>
                     * @return InternetChargeType <p>EIP计费方式。</p><ul style="margin:0"><li>标准账户类型，可选值：<ul><li>BANDWIDTH_PACKAGE：[共享带宽包](https://cloud.tencent.com/document/product/684/15255)付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li><li>BANDWIDTH_PREPAID_BY_MONTH：包月按带宽预付费</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li></ul>默认值：TRAFFIC_POSTPAID_BY_HOUR。</li><li>传统账户类型，无需传递此参数，EIP计费方式与其绑定的实例的计费方式一致，无需传递此参数。</li></ul>
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置<p>EIP计费方式。</p><ul style="margin:0"><li>标准账户类型，可选值：<ul><li>BANDWIDTH_PACKAGE：[共享带宽包](https://cloud.tencent.com/document/product/684/15255)付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li><li>BANDWIDTH_PREPAID_BY_MONTH：包月按带宽预付费</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li></ul>默认值：TRAFFIC_POSTPAID_BY_HOUR。</li><li>传统账户类型，无需传递此参数，EIP计费方式与其绑定的实例的计费方式一致，无需传递此参数。</li></ul>
                     * @param _internetChargeType <p>EIP计费方式。</p><ul style="margin:0"><li>标准账户类型，可选值：<ul><li>BANDWIDTH_PACKAGE：[共享带宽包](https://cloud.tencent.com/document/product/684/15255)付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li><li>BANDWIDTH_PREPAID_BY_MONTH：包月按带宽预付费</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li></ul>默认值：TRAFFIC_POSTPAID_BY_HOUR。</li><li>传统账户类型，无需传递此参数，EIP计费方式与其绑定的实例的计费方式一致，无需传递此参数。</li></ul>
                     * 
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     * 
                     */
                    bool InternetChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>IP 资源计费模式，当前仅支持原生 IP。</p><ul style="margin:0"><li>账号为标准账户类型的用户，可选值：<ul><li>IP_POSTPAID_BY_HOUR：IP资源按小时后付费</li><li>IP_PREPAID_BY_MONTH：IP资源包月预付费</li></ul></li></ul>
                     * @return IPChargeType <p>IP 资源计费模式，当前仅支持原生 IP。</p><ul style="margin:0"><li>账号为标准账户类型的用户，可选值：<ul><li>IP_POSTPAID_BY_HOUR：IP资源按小时后付费</li><li>IP_PREPAID_BY_MONTH：IP资源包月预付费</li></ul></li></ul>
                     * 
                     */
                    std::string GetIPChargeType() const;

                    /**
                     * 设置<p>IP 资源计费模式，当前仅支持原生 IP。</p><ul style="margin:0"><li>账号为标准账户类型的用户，可选值：<ul><li>IP_POSTPAID_BY_HOUR：IP资源按小时后付费</li><li>IP_PREPAID_BY_MONTH：IP资源包月预付费</li></ul></li></ul>
                     * @param _iPChargeType <p>IP 资源计费模式，当前仅支持原生 IP。</p><ul style="margin:0"><li>账号为标准账户类型的用户，可选值：<ul><li>IP_POSTPAID_BY_HOUR：IP资源按小时后付费</li><li>IP_PREPAID_BY_MONTH：IP资源包月预付费</li></ul></li></ul>
                     * 
                     */
                    void SetIPChargeType(const std::string& _iPChargeType);

                    /**
                     * 判断参数 IPChargeType 是否已赋值
                     * @return IPChargeType 是否已赋值
                     * 
                     */
                    bool IPChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>EIP出带宽上限，单位：Mbps。</p><ul style="margin:0"><li>标准账户类型EIP出带宽上限，可选值范围取决于EIP计费方式：<ul><li>BANDWIDTH_PACKAGE：1 Mbps 至 2000 Mbps</li><li>BANDWIDTH_POSTPAID_BY_HOUR：1 Mbps 至 100 Mbps</li><li>BANDWIDTH_PREPAID_BY_MONTH：1 Mbps 至 200 Mbps</li><li>TRAFFIC_POSTPAID_BY_HOUR：1 Mbps 至 200 Mbps</li></ul>默认值：1 Mbps。</li><li>传统账户类型无需传递此参数，EIP出带宽上限取决于与其绑定的实例的公网出带宽上限，无需传递此参数。</li></ul>
                     * @return InternetMaxBandwidthOut <p>EIP出带宽上限，单位：Mbps。</p><ul style="margin:0"><li>标准账户类型EIP出带宽上限，可选值范围取决于EIP计费方式：<ul><li>BANDWIDTH_PACKAGE：1 Mbps 至 2000 Mbps</li><li>BANDWIDTH_POSTPAID_BY_HOUR：1 Mbps 至 100 Mbps</li><li>BANDWIDTH_PREPAID_BY_MONTH：1 Mbps 至 200 Mbps</li><li>TRAFFIC_POSTPAID_BY_HOUR：1 Mbps 至 200 Mbps</li></ul>默认值：1 Mbps。</li><li>传统账户类型无需传递此参数，EIP出带宽上限取决于与其绑定的实例的公网出带宽上限，无需传递此参数。</li></ul>
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置<p>EIP出带宽上限，单位：Mbps。</p><ul style="margin:0"><li>标准账户类型EIP出带宽上限，可选值范围取决于EIP计费方式：<ul><li>BANDWIDTH_PACKAGE：1 Mbps 至 2000 Mbps</li><li>BANDWIDTH_POSTPAID_BY_HOUR：1 Mbps 至 100 Mbps</li><li>BANDWIDTH_PREPAID_BY_MONTH：1 Mbps 至 200 Mbps</li><li>TRAFFIC_POSTPAID_BY_HOUR：1 Mbps 至 200 Mbps</li></ul>默认值：1 Mbps。</li><li>传统账户类型无需传递此参数，EIP出带宽上限取决于与其绑定的实例的公网出带宽上限，无需传递此参数。</li></ul>
                     * @param _internetMaxBandwidthOut <p>EIP出带宽上限，单位：Mbps。</p><ul style="margin:0"><li>标准账户类型EIP出带宽上限，可选值范围取决于EIP计费方式：<ul><li>BANDWIDTH_PACKAGE：1 Mbps 至 2000 Mbps</li><li>BANDWIDTH_POSTPAID_BY_HOUR：1 Mbps 至 100 Mbps</li><li>BANDWIDTH_PREPAID_BY_MONTH：1 Mbps 至 200 Mbps</li><li>TRAFFIC_POSTPAID_BY_HOUR：1 Mbps 至 200 Mbps</li></ul>默认值：1 Mbps。</li><li>传统账户类型无需传递此参数，EIP出带宽上限取决于与其绑定的实例的公网出带宽上限，无需传递此参数。</li></ul>
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取<p>包月按带宽预付费EIP的计费参数。EIP为包月按带宽预付费时，该参数必传，其余场景不需传递</p>
                     * @return AddressChargePrepaid <p>包月按带宽预付费EIP的计费参数。EIP为包月按带宽预付费时，该参数必传，其余场景不需传递</p>
                     * 
                     */
                    AddressChargePrepaid GetAddressChargePrepaid() const;

                    /**
                     * 设置<p>包月按带宽预付费EIP的计费参数。EIP为包月按带宽预付费时，该参数必传，其余场景不需传递</p>
                     * @param _addressChargePrepaid <p>包月按带宽预付费EIP的计费参数。EIP为包月按带宽预付费时，该参数必传，其余场景不需传递</p>
                     * 
                     */
                    void SetAddressChargePrepaid(const AddressChargePrepaid& _addressChargePrepaid);

                    /**
                     * 判断参数 AddressChargePrepaid 是否已赋值
                     * @return AddressChargePrepaid 是否已赋值
                     * 
                     */
                    bool AddressChargePrepaidHasBeenSet() const;

                    /**
                     * 获取<p>EIP类型。各种EIP类型详情可参考：<a href="https://cloud.tencent.com/document/product/1199/41646">EIP 的 IP 地址类型</a>。默认值：EIP。</p><li>EIP：弹性公网 IP。 </li><li>AnycastEIP：加速 IP，已开通 [Anycast 公网加速](https://cloud.tencent.com/document/product/644)白名单的用户可选。仅部分地域支持加速IP，详情可见Anycast公网加速[购买指南](https://cloud.tencent.com/document/product/644/12617)。</li><li>HighQualityEIP：精品 IP。仅新加坡和中国香港支持精品IP。</li><li>AntiDDoSEIP：高防 IP。仅部分地域支持高防IP。</li><li>ResidentialEIP：原生 IP。仅部分地域支持原生IP。</li>关于弹性公网 IP 支持的 IP 类型，请见[产品概述](https://cloud.tencent.com/document/product/1199/41646)。
                     * @return AddressType <p>EIP类型。各种EIP类型详情可参考：<a href="https://cloud.tencent.com/document/product/1199/41646">EIP 的 IP 地址类型</a>。默认值：EIP。</p><li>EIP：弹性公网 IP。 </li><li>AnycastEIP：加速 IP，已开通 [Anycast 公网加速](https://cloud.tencent.com/document/product/644)白名单的用户可选。仅部分地域支持加速IP，详情可见Anycast公网加速[购买指南](https://cloud.tencent.com/document/product/644/12617)。</li><li>HighQualityEIP：精品 IP。仅新加坡和中国香港支持精品IP。</li><li>AntiDDoSEIP：高防 IP。仅部分地域支持高防IP。</li><li>ResidentialEIP：原生 IP。仅部分地域支持原生IP。</li>关于弹性公网 IP 支持的 IP 类型，请见[产品概述](https://cloud.tencent.com/document/product/1199/41646)。
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置<p>EIP类型。各种EIP类型详情可参考：<a href="https://cloud.tencent.com/document/product/1199/41646">EIP 的 IP 地址类型</a>。默认值：EIP。</p><li>EIP：弹性公网 IP。 </li><li>AnycastEIP：加速 IP，已开通 [Anycast 公网加速](https://cloud.tencent.com/document/product/644)白名单的用户可选。仅部分地域支持加速IP，详情可见Anycast公网加速[购买指南](https://cloud.tencent.com/document/product/644/12617)。</li><li>HighQualityEIP：精品 IP。仅新加坡和中国香港支持精品IP。</li><li>AntiDDoSEIP：高防 IP。仅部分地域支持高防IP。</li><li>ResidentialEIP：原生 IP。仅部分地域支持原生IP。</li>关于弹性公网 IP 支持的 IP 类型，请见[产品概述](https://cloud.tencent.com/document/product/1199/41646)。
                     * @param _addressType <p>EIP类型。各种EIP类型详情可参考：<a href="https://cloud.tencent.com/document/product/1199/41646">EIP 的 IP 地址类型</a>。默认值：EIP。</p><li>EIP：弹性公网 IP。 </li><li>AnycastEIP：加速 IP，已开通 [Anycast 公网加速](https://cloud.tencent.com/document/product/644)白名单的用户可选。仅部分地域支持加速IP，详情可见Anycast公网加速[购买指南](https://cloud.tencent.com/document/product/644/12617)。</li><li>HighQualityEIP：精品 IP。仅新加坡和中国香港支持精品IP。</li><li>AntiDDoSEIP：高防 IP。仅部分地域支持高防IP。</li><li>ResidentialEIP：原生 IP。仅部分地域支持原生IP。</li>关于弹性公网 IP 支持的 IP 类型，请见[产品概述](https://cloud.tencent.com/document/product/1199/41646)。
                     * 
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                    /**
                     * 获取<p>Anycast发布域。</p><ul style="margin:0"><li>已开通Anycast公网加速白名单的用户，可选值：<ul><li>ANYCAST_ZONE_GLOBAL：全球发布域（需要额外开通Anycast全球加速白名单）</li><li>ANYCAST_ZONE_OVERSEAS：境外发布域</li></ul>默认值：ANYCAST_ZONE_OVERSEAS。</li></ul>
                     * @return AnycastZone <p>Anycast发布域。</p><ul style="margin:0"><li>已开通Anycast公网加速白名单的用户，可选值：<ul><li>ANYCAST_ZONE_GLOBAL：全球发布域（需要额外开通Anycast全球加速白名单）</li><li>ANYCAST_ZONE_OVERSEAS：境外发布域</li></ul>默认值：ANYCAST_ZONE_OVERSEAS。</li></ul>
                     * 
                     */
                    std::string GetAnycastZone() const;

                    /**
                     * 设置<p>Anycast发布域。</p><ul style="margin:0"><li>已开通Anycast公网加速白名单的用户，可选值：<ul><li>ANYCAST_ZONE_GLOBAL：全球发布域（需要额外开通Anycast全球加速白名单）</li><li>ANYCAST_ZONE_OVERSEAS：境外发布域</li></ul>默认值：ANYCAST_ZONE_OVERSEAS。</li></ul>
                     * @param _anycastZone <p>Anycast发布域。</p><ul style="margin:0"><li>已开通Anycast公网加速白名单的用户，可选值：<ul><li>ANYCAST_ZONE_GLOBAL：全球发布域（需要额外开通Anycast全球加速白名单）</li><li>ANYCAST_ZONE_OVERSEAS：境外发布域</li></ul>默认值：ANYCAST_ZONE_OVERSEAS。</li></ul>
                     * 
                     */
                    void SetAnycastZone(const std::string& _anycastZone);

                    /**
                     * 判断参数 AnycastZone 是否已赋值
                     * @return AnycastZone 是否已赋值
                     * 
                     */
                    bool AnycastZoneHasBeenSet() const;

                    /**
                     * 获取<p>指定IP地址申请EIP，每个账户每个月只有三次配额</p>
                     * @return VipCluster <p>指定IP地址申请EIP，每个账户每个月只有三次配额</p>
                     * 
                     */
                    std::vector<std::string> GetVipCluster() const;

                    /**
                     * 设置<p>指定IP地址申请EIP，每个账户每个月只有三次配额</p>
                     * @param _vipCluster <p>指定IP地址申请EIP，每个账户每个月只有三次配额</p>
                     * 
                     */
                    void SetVipCluster(const std::vector<std::string>& _vipCluster);

                    /**
                     * 判断参数 VipCluster 是否已赋值
                     * @return VipCluster 是否已赋值
                     * 
                     */
                    bool VipClusterHasBeenSet() const;

                    /**
                     * 获取<p><b>[已废弃]</b> AnycastEIP不再区分是否负载均衡。原参数说明如下：<br>AnycastEIP是否用于绑定负载均衡。</p><ul style="margin:0"><li>已开通Anycast公网加速白名单的用户，可选值：<ul><li>TRUE：AnycastEIP可绑定对象为负载均衡</li><li>FALSE：AnycastEIP可绑定对象为云服务器、NAT网关、高可用虚拟IP等</li></ul>默认值：FALSE。</li></ul>
                     * @return ApplicableForCLB <p><b>[已废弃]</b> AnycastEIP不再区分是否负载均衡。原参数说明如下：<br>AnycastEIP是否用于绑定负载均衡。</p><ul style="margin:0"><li>已开通Anycast公网加速白名单的用户，可选值：<ul><li>TRUE：AnycastEIP可绑定对象为负载均衡</li><li>FALSE：AnycastEIP可绑定对象为云服务器、NAT网关、高可用虚拟IP等</li></ul>默认值：FALSE。</li></ul>
                     * @deprecated
                     */
                    bool GetApplicableForCLB() const;

                    /**
                     * 设置<p><b>[已废弃]</b> AnycastEIP不再区分是否负载均衡。原参数说明如下：<br>AnycastEIP是否用于绑定负载均衡。</p><ul style="margin:0"><li>已开通Anycast公网加速白名单的用户，可选值：<ul><li>TRUE：AnycastEIP可绑定对象为负载均衡</li><li>FALSE：AnycastEIP可绑定对象为云服务器、NAT网关、高可用虚拟IP等</li></ul>默认值：FALSE。</li></ul>
                     * @param _applicableForCLB <p><b>[已废弃]</b> AnycastEIP不再区分是否负载均衡。原参数说明如下：<br>AnycastEIP是否用于绑定负载均衡。</p><ul style="margin:0"><li>已开通Anycast公网加速白名单的用户，可选值：<ul><li>TRUE：AnycastEIP可绑定对象为负载均衡</li><li>FALSE：AnycastEIP可绑定对象为云服务器、NAT网关、高可用虚拟IP等</li></ul>默认值：FALSE。</li></ul>
                     * @deprecated
                     */
                    void SetApplicableForCLB(const bool& _applicableForCLB);

                    /**
                     * 判断参数 ApplicableForCLB 是否已赋值
                     * @return ApplicableForCLB 是否已赋值
                     * @deprecated
                     */
                    bool ApplicableForCLBHasBeenSet() const;

                    /**
                     * 获取<p>需要关联的标签列表。</p>
                     * @return Tags <p>需要关联的标签列表。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>需要关联的标签列表。</p>
                     * @param _tags <p>需要关联的标签列表。</p>
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
                     * 获取<p>BGP带宽包唯一ID参数。设定该参数且InternetChargeType为BANDWIDTH_PACKAGE，则表示创建的EIP加入该BGP带宽包并采用带宽包计费</p>
                     * @return BandwidthPackageId <p>BGP带宽包唯一ID参数。设定该参数且InternetChargeType为BANDWIDTH_PACKAGE，则表示创建的EIP加入该BGP带宽包并采用带宽包计费</p>
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置<p>BGP带宽包唯一ID参数。设定该参数且InternetChargeType为BANDWIDTH_PACKAGE，则表示创建的EIP加入该BGP带宽包并采用带宽包计费</p>
                     * @param _bandwidthPackageId <p>BGP带宽包唯一ID参数。设定该参数且InternetChargeType为BANDWIDTH_PACKAGE，则表示创建的EIP加入该BGP带宽包并采用带宽包计费</p>
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取<p>EIP名称，用于申请EIP时用户自定义该EIP的个性化名称，默认值：未命名</p>
                     * @return AddressName <p>EIP名称，用于申请EIP时用户自定义该EIP的个性化名称，默认值：未命名</p>
                     * 
                     */
                    std::string GetAddressName() const;

                    /**
                     * 设置<p>EIP名称，用于申请EIP时用户自定义该EIP的个性化名称，默认值：未命名</p>
                     * @param _addressName <p>EIP名称，用于申请EIP时用户自定义该EIP的个性化名称，默认值：未命名</p>
                     * 
                     */
                    void SetAddressName(const std::string& _addressName);

                    /**
                     * 判断参数 AddressName 是否已赋值
                     * @return AddressName 是否已赋值
                     * 
                     */
                    bool AddressNameHasBeenSet() const;

                    /**
                     * 获取<p>CDC唯一ID</p>
                     * @return DedicatedClusterId <p>CDC唯一ID</p>
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置<p>CDC唯一ID</p>
                     * @param _dedicatedClusterId <p>CDC唯一ID</p>
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>是否使用独占资源池，默认值：True</p><ul><li>True：表示使用独占资源池</li><li>False：表示使用共享资源池</li></ul><p>说明：如需使用独占资源池，请 提交工单(https://console.cloud.tencent.com/workorder/category) 咨询，具体费用请咨询商务经理。</p>
                     * @return IsDedicatedAddressPool <p>是否使用独占资源池，默认值：True</p><ul><li>True：表示使用独占资源池</li><li>False：表示使用共享资源池</li></ul><p>说明：如需使用独占资源池，请 提交工单(https://console.cloud.tencent.com/workorder/category) 咨询，具体费用请咨询商务经理。</p>
                     * 
                     */
                    bool GetIsDedicatedAddressPool() const;

                    /**
                     * 设置<p>是否使用独占资源池，默认值：True</p><ul><li>True：表示使用独占资源池</li><li>False：表示使用共享资源池</li></ul><p>说明：如需使用独占资源池，请 提交工单(https://console.cloud.tencent.com/workorder/category) 咨询，具体费用请咨询商务经理。</p>
                     * @param _isDedicatedAddressPool <p>是否使用独占资源池，默认值：True</p><ul><li>True：表示使用独占资源池</li><li>False：表示使用共享资源池</li></ul><p>说明：如需使用独占资源池，请 提交工单(https://console.cloud.tencent.com/workorder/category) 咨询，具体费用请咨询商务经理。</p>
                     * 
                     */
                    void SetIsDedicatedAddressPool(const bool& _isDedicatedAddressPool);

                    /**
                     * 判断参数 IsDedicatedAddressPool 是否已赋值
                     * @return IsDedicatedAddressPool 是否已赋值
                     * 
                     */
                    bool IsDedicatedAddressPoolHasBeenSet() const;

                    /**
                     * 获取<p>网络出口，当前仅支持精品BGP、静态单线，这2种IP 地址类型的指定出口传入，默认值：center_egress1，其它可选值：center_egress2、center_egress3</p>
                     * @return Egress <p>网络出口，当前仅支持精品BGP、静态单线，这2种IP 地址类型的指定出口传入，默认值：center_egress1，其它可选值：center_egress2、center_egress3</p>
                     * 
                     */
                    std::string GetEgress() const;

                    /**
                     * 设置<p>网络出口，当前仅支持精品BGP、静态单线，这2种IP 地址类型的指定出口传入，默认值：center_egress1，其它可选值：center_egress2、center_egress3</p>
                     * @param _egress <p>网络出口，当前仅支持精品BGP、静态单线，这2种IP 地址类型的指定出口传入，默认值：center_egress1，其它可选值：center_egress2、center_egress3</p>
                     * 
                     */
                    void SetEgress(const std::string& _egress);

                    /**
                     * 判断参数 Egress 是否已赋值
                     * @return Egress 是否已赋值
                     * 
                     */
                    bool EgressHasBeenSet() const;

                    /**
                     * 获取<p>高防包ID， 申请高防IP时，该字段必传。</p>
                     * @return AntiDDoSPackageId <p>高防包ID， 申请高防IP时，该字段必传。</p>
                     * 
                     */
                    std::string GetAntiDDoSPackageId() const;

                    /**
                     * 设置<p>高防包ID， 申请高防IP时，该字段必传。</p>
                     * @param _antiDDoSPackageId <p>高防包ID， 申请高防IP时，该字段必传。</p>
                     * 
                     */
                    void SetAntiDDoSPackageId(const std::string& _antiDDoSPackageId);

                    /**
                     * 判断参数 AntiDDoSPackageId 是否已赋值
                     * @return AntiDDoSPackageId 是否已赋值
                     * 
                     */
                    bool AntiDDoSPackageIdHasBeenSet() const;

                    /**
                     * 获取<p>保证请求幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符，且不能超过64个字符。</p>
                     * @return ClientToken <p>保证请求幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符，且不能超过64个字符。</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>保证请求幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符，且不能超过64个字符。</p>
                     * @param _clientToken <p>保证请求幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符，且不能超过64个字符。</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * <p>EIP数量。可申请的数量限制参考：<a href="https://cloud.tencent.com/document/product/1199/41648">EIP 配额限制</a>。默认值：1。</p>
                     */
                    int64_t m_addressCount;
                    bool m_addressCountHasBeenSet;

                    /**
                     * <p>EIP线路类型。各种线路类型详情可参考：<a href="https://cloud.tencent.com/document/product/1199/41646">EIP 的 IP 地址类型</a>。默认值：BGP。</p><ul style="margin:0"><li>BGP：常规 BGP 线路</li><li>已开通静态单线IP白名单的用户，可选值：<ul><li>CMCC：中国移动</li><li>CTCC：中国电信</li><li>CUCC：中国联通</li></ul></li>注意：仅部分地域支持静态单线IP。</ul>
                     */
                    std::string m_internetServiceProvider;
                    bool m_internetServiceProviderHasBeenSet;

                    /**
                     * <p>EIP计费方式。</p><ul style="margin:0"><li>标准账户类型，可选值：<ul><li>BANDWIDTH_PACKAGE：[共享带宽包](https://cloud.tencent.com/document/product/684/15255)付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li><li>BANDWIDTH_PREPAID_BY_MONTH：包月按带宽预付费</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li></ul>默认值：TRAFFIC_POSTPAID_BY_HOUR。</li><li>传统账户类型，无需传递此参数，EIP计费方式与其绑定的实例的计费方式一致，无需传递此参数。</li></ul>
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * <p>IP 资源计费模式，当前仅支持原生 IP。</p><ul style="margin:0"><li>账号为标准账户类型的用户，可选值：<ul><li>IP_POSTPAID_BY_HOUR：IP资源按小时后付费</li><li>IP_PREPAID_BY_MONTH：IP资源包月预付费</li></ul></li></ul>
                     */
                    std::string m_iPChargeType;
                    bool m_iPChargeTypeHasBeenSet;

                    /**
                     * <p>EIP出带宽上限，单位：Mbps。</p><ul style="margin:0"><li>标准账户类型EIP出带宽上限，可选值范围取决于EIP计费方式：<ul><li>BANDWIDTH_PACKAGE：1 Mbps 至 2000 Mbps</li><li>BANDWIDTH_POSTPAID_BY_HOUR：1 Mbps 至 100 Mbps</li><li>BANDWIDTH_PREPAID_BY_MONTH：1 Mbps 至 200 Mbps</li><li>TRAFFIC_POSTPAID_BY_HOUR：1 Mbps 至 200 Mbps</li></ul>默认值：1 Mbps。</li><li>传统账户类型无需传递此参数，EIP出带宽上限取决于与其绑定的实例的公网出带宽上限，无需传递此参数。</li></ul>
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * <p>包月按带宽预付费EIP的计费参数。EIP为包月按带宽预付费时，该参数必传，其余场景不需传递</p>
                     */
                    AddressChargePrepaid m_addressChargePrepaid;
                    bool m_addressChargePrepaidHasBeenSet;

                    /**
                     * <p>EIP类型。各种EIP类型详情可参考：<a href="https://cloud.tencent.com/document/product/1199/41646">EIP 的 IP 地址类型</a>。默认值：EIP。</p><li>EIP：弹性公网 IP。 </li><li>AnycastEIP：加速 IP，已开通 [Anycast 公网加速](https://cloud.tencent.com/document/product/644)白名单的用户可选。仅部分地域支持加速IP，详情可见Anycast公网加速[购买指南](https://cloud.tencent.com/document/product/644/12617)。</li><li>HighQualityEIP：精品 IP。仅新加坡和中国香港支持精品IP。</li><li>AntiDDoSEIP：高防 IP。仅部分地域支持高防IP。</li><li>ResidentialEIP：原生 IP。仅部分地域支持原生IP。</li>关于弹性公网 IP 支持的 IP 类型，请见[产品概述](https://cloud.tencent.com/document/product/1199/41646)。
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * <p>Anycast发布域。</p><ul style="margin:0"><li>已开通Anycast公网加速白名单的用户，可选值：<ul><li>ANYCAST_ZONE_GLOBAL：全球发布域（需要额外开通Anycast全球加速白名单）</li><li>ANYCAST_ZONE_OVERSEAS：境外发布域</li></ul>默认值：ANYCAST_ZONE_OVERSEAS。</li></ul>
                     */
                    std::string m_anycastZone;
                    bool m_anycastZoneHasBeenSet;

                    /**
                     * <p>指定IP地址申请EIP，每个账户每个月只有三次配额</p>
                     */
                    std::vector<std::string> m_vipCluster;
                    bool m_vipClusterHasBeenSet;

                    /**
                     * <p><b>[已废弃]</b> AnycastEIP不再区分是否负载均衡。原参数说明如下：<br>AnycastEIP是否用于绑定负载均衡。</p><ul style="margin:0"><li>已开通Anycast公网加速白名单的用户，可选值：<ul><li>TRUE：AnycastEIP可绑定对象为负载均衡</li><li>FALSE：AnycastEIP可绑定对象为云服务器、NAT网关、高可用虚拟IP等</li></ul>默认值：FALSE。</li></ul>
                     */
                    bool m_applicableForCLB;
                    bool m_applicableForCLBHasBeenSet;

                    /**
                     * <p>需要关联的标签列表。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>BGP带宽包唯一ID参数。设定该参数且InternetChargeType为BANDWIDTH_PACKAGE，则表示创建的EIP加入该BGP带宽包并采用带宽包计费</p>
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * <p>EIP名称，用于申请EIP时用户自定义该EIP的个性化名称，默认值：未命名</p>
                     */
                    std::string m_addressName;
                    bool m_addressNameHasBeenSet;

                    /**
                     * <p>CDC唯一ID</p>
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * <p>是否使用独占资源池，默认值：True</p><ul><li>True：表示使用独占资源池</li><li>False：表示使用共享资源池</li></ul><p>说明：如需使用独占资源池，请 提交工单(https://console.cloud.tencent.com/workorder/category) 咨询，具体费用请咨询商务经理。</p>
                     */
                    bool m_isDedicatedAddressPool;
                    bool m_isDedicatedAddressPoolHasBeenSet;

                    /**
                     * <p>网络出口，当前仅支持精品BGP、静态单线，这2种IP 地址类型的指定出口传入，默认值：center_egress1，其它可选值：center_egress2、center_egress3</p>
                     */
                    std::string m_egress;
                    bool m_egressHasBeenSet;

                    /**
                     * <p>高防包ID， 申请高防IP时，该字段必传。</p>
                     */
                    std::string m_antiDDoSPackageId;
                    bool m_antiDDoSPackageIdHasBeenSet;

                    /**
                     * <p>保证请求幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符，且不能超过64个字符。</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEADDRESSESREQUEST_H_
