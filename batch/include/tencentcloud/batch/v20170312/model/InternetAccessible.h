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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_INTERNETACCESSIBLE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_INTERNETACCESSIBLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述了实例的公网可访问性，声明了实例的公网使用计费模式，最大带宽等
                */
                class InternetAccessible : public AbstractModel
                {
                public:
                    InternetAccessible();
                    ~InternetAccessible() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络计费类型。取值范围：<br><li>BANDWIDTH_PREPAID：预付费按带宽结算</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li><li>BANDWIDTH_PACKAGE：带宽包用户</li>默认取值：非带宽包用户默认与子机付费类型保持一致，比如子机付费类型为预付费，网络计费类型默认为预付费；子机付费类型为后付费，网络计费类型默认为后付费。
                     * @return InternetChargeType 网络计费类型。取值范围：<br><li>BANDWIDTH_PREPAID：预付费按带宽结算</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li><li>BANDWIDTH_PACKAGE：带宽包用户</li>默认取值：非带宽包用户默认与子机付费类型保持一致，比如子机付费类型为预付费，网络计费类型默认为预付费；子机付费类型为后付费，网络计费类型默认为后付费。
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置网络计费类型。取值范围：<br><li>BANDWIDTH_PREPAID：预付费按带宽结算</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li><li>BANDWIDTH_PACKAGE：带宽包用户</li>默认取值：非带宽包用户默认与子机付费类型保持一致，比如子机付费类型为预付费，网络计费类型默认为预付费；子机付费类型为后付费，网络计费类型默认为后付费。
                     * @param _internetChargeType 网络计费类型。取值范围：<br><li>BANDWIDTH_PREPAID：预付费按带宽结算</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li><li>BANDWIDTH_PACKAGE：带宽包用户</li>默认取值：非带宽包用户默认与子机付费类型保持一致，比如子机付费类型为预付费，网络计费类型默认为预付费；子机付费类型为后付费，网络计费类型默认为后付费。
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
                     * 获取公网出带宽上限，单位：Mbps。默认值：0Mbps。不同机型带宽上限范围不一致，具体限制详见[购买网络带宽](https://cloud.tencent.com/document/product/213/12523)。
                     * @return InternetMaxBandwidthOut 公网出带宽上限，单位：Mbps。默认值：0Mbps。不同机型带宽上限范围不一致，具体限制详见[购买网络带宽](https://cloud.tencent.com/document/product/213/12523)。
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置公网出带宽上限，单位：Mbps。默认值：0Mbps。不同机型带宽上限范围不一致，具体限制详见[购买网络带宽](https://cloud.tencent.com/document/product/213/12523)。
                     * @param _internetMaxBandwidthOut 公网出带宽上限，单位：Mbps。默认值：0Mbps。不同机型带宽上限范围不一致，具体限制详见[购买网络带宽](https://cloud.tencent.com/document/product/213/12523)。
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
                     * 获取是否分配公网IP。取值范围：<br><li>true：表示分配公网IP</li><li>false：表示不分配公网IP</li><br>当公网带宽大于0Mbps时，可自由选择开通与否，默认开通公网IP；当公网带宽为0，则不允许分配公网IP。该参数仅在RunInstances接口中作为入参使用。
                     * @return PublicIpAssigned 是否分配公网IP。取值范围：<br><li>true：表示分配公网IP</li><li>false：表示不分配公网IP</li><br>当公网带宽大于0Mbps时，可自由选择开通与否，默认开通公网IP；当公网带宽为0，则不允许分配公网IP。该参数仅在RunInstances接口中作为入参使用。
                     * 
                     */
                    bool GetPublicIpAssigned() const;

                    /**
                     * 设置是否分配公网IP。取值范围：<br><li>true：表示分配公网IP</li><li>false：表示不分配公网IP</li><br>当公网带宽大于0Mbps时，可自由选择开通与否，默认开通公网IP；当公网带宽为0，则不允许分配公网IP。该参数仅在RunInstances接口中作为入参使用。
                     * @param _publicIpAssigned 是否分配公网IP。取值范围：<br><li>true：表示分配公网IP</li><li>false：表示不分配公网IP</li><br>当公网带宽大于0Mbps时，可自由选择开通与否，默认开通公网IP；当公网带宽为0，则不允许分配公网IP。该参数仅在RunInstances接口中作为入参使用。
                     * 
                     */
                    void SetPublicIpAssigned(const bool& _publicIpAssigned);

                    /**
                     * 判断参数 PublicIpAssigned 是否已赋值
                     * @return PublicIpAssigned 是否已赋值
                     * 
                     */
                    bool PublicIpAssignedHasBeenSet() const;

                    /**
                     * 获取带宽包ID。可通过[ DescribeBandwidthPackages ](https://cloud.tencent.com/document/api/215/19209)接口返回值中的`BandwidthPackageId`获取。该参数仅在RunInstances接口中作为入参使用。
                     * @return BandwidthPackageId 带宽包ID。可通过[ DescribeBandwidthPackages ](https://cloud.tencent.com/document/api/215/19209)接口返回值中的`BandwidthPackageId`获取。该参数仅在RunInstances接口中作为入参使用。
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置带宽包ID。可通过[ DescribeBandwidthPackages ](https://cloud.tencent.com/document/api/215/19209)接口返回值中的`BandwidthPackageId`获取。该参数仅在RunInstances接口中作为入参使用。
                     * @param _bandwidthPackageId 带宽包ID。可通过[ DescribeBandwidthPackages ](https://cloud.tencent.com/document/api/215/19209)接口返回值中的`BandwidthPackageId`获取。该参数仅在RunInstances接口中作为入参使用。
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
                     * 获取线路类型。各种线路类型详情可参考：[EIP 的 IP 地址类型](https://cloud.tencent.com/document/product/1199/41646)。默认值：BGP。

- BGP：常规 BGP 线路

已开通静态单线IP白名单的用户，可选值：

 - CMCC：中国移动
 - CTCC：中国电信
 - CUCC：中国联通

注意：仅部分地域支持静态单线IP。
示例值：BGP
                     * @return InternetServiceProvider 线路类型。各种线路类型详情可参考：[EIP 的 IP 地址类型](https://cloud.tencent.com/document/product/1199/41646)。默认值：BGP。

- BGP：常规 BGP 线路

已开通静态单线IP白名单的用户，可选值：

 - CMCC：中国移动
 - CTCC：中国电信
 - CUCC：中国联通

注意：仅部分地域支持静态单线IP。
示例值：BGP
                     * 
                     */
                    std::string GetInternetServiceProvider() const;

                    /**
                     * 设置线路类型。各种线路类型详情可参考：[EIP 的 IP 地址类型](https://cloud.tencent.com/document/product/1199/41646)。默认值：BGP。

- BGP：常规 BGP 线路

已开通静态单线IP白名单的用户，可选值：

 - CMCC：中国移动
 - CTCC：中国电信
 - CUCC：中国联通

注意：仅部分地域支持静态单线IP。
示例值：BGP
                     * @param _internetServiceProvider 线路类型。各种线路类型详情可参考：[EIP 的 IP 地址类型](https://cloud.tencent.com/document/product/1199/41646)。默认值：BGP。

- BGP：常规 BGP 线路

已开通静态单线IP白名单的用户，可选值：

 - CMCC：中国移动
 - CTCC：中国电信
 - CUCC：中国联通

注意：仅部分地域支持静态单线IP。
示例值：BGP
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
                     * 获取公网 IP 类型。

- WanIP：普通公网IP。
- HighQualityEIP：精品 IP。仅新加坡和中国香港支持精品IP。
- AntiDDoSEIP：高防 IP。仅部分地域支持高防IP，详情可见[弹性公网IP产品概述](https://cloud.tencent.com/document/product/1199/41646)。

如需为资源分配公网IPv4地址，请指定公网IPv4地址类型。

示例值：WanIP

此功能仅部分地区灰度开发，如需使用[请提交工单咨询](https://console.cloud.tencent.com/workorder/category)
                     * @return IPv4AddressType 公网 IP 类型。

- WanIP：普通公网IP。
- HighQualityEIP：精品 IP。仅新加坡和中国香港支持精品IP。
- AntiDDoSEIP：高防 IP。仅部分地域支持高防IP，详情可见[弹性公网IP产品概述](https://cloud.tencent.com/document/product/1199/41646)。

如需为资源分配公网IPv4地址，请指定公网IPv4地址类型。

示例值：WanIP

此功能仅部分地区灰度开发，如需使用[请提交工单咨询](https://console.cloud.tencent.com/workorder/category)
                     * 
                     */
                    std::string GetIPv4AddressType() const;

                    /**
                     * 设置公网 IP 类型。

- WanIP：普通公网IP。
- HighQualityEIP：精品 IP。仅新加坡和中国香港支持精品IP。
- AntiDDoSEIP：高防 IP。仅部分地域支持高防IP，详情可见[弹性公网IP产品概述](https://cloud.tencent.com/document/product/1199/41646)。

如需为资源分配公网IPv4地址，请指定公网IPv4地址类型。

示例值：WanIP

此功能仅部分地区灰度开发，如需使用[请提交工单咨询](https://console.cloud.tencent.com/workorder/category)
                     * @param _iPv4AddressType 公网 IP 类型。

- WanIP：普通公网IP。
- HighQualityEIP：精品 IP。仅新加坡和中国香港支持精品IP。
- AntiDDoSEIP：高防 IP。仅部分地域支持高防IP，详情可见[弹性公网IP产品概述](https://cloud.tencent.com/document/product/1199/41646)。

如需为资源分配公网IPv4地址，请指定公网IPv4地址类型。

示例值：WanIP

此功能仅部分地区灰度开发，如需使用[请提交工单咨询](https://console.cloud.tencent.com/workorder/category)
                     * 
                     */
                    void SetIPv4AddressType(const std::string& _iPv4AddressType);

                    /**
                     * 判断参数 IPv4AddressType 是否已赋值
                     * @return IPv4AddressType 是否已赋值
                     * 
                     */
                    bool IPv4AddressTypeHasBeenSet() const;

                    /**
                     * 获取弹性公网 IPv6 类型。
- EIPv6：弹性公网 IPv6。
- HighQualityEIPv6：精品 IPv6。仅中国香港支持精品IPv6。

如需为资源分配IPv6地址，请指定弹性公网IPv6类型。
示例值：EIPv6

此功能仅部分地区灰度开发，如需使用[请提交工单咨询](https://console.cloud.tencent.com/workorder/category)
                     * @return IPv6AddressType 弹性公网 IPv6 类型。
- EIPv6：弹性公网 IPv6。
- HighQualityEIPv6：精品 IPv6。仅中国香港支持精品IPv6。

如需为资源分配IPv6地址，请指定弹性公网IPv6类型。
示例值：EIPv6

此功能仅部分地区灰度开发，如需使用[请提交工单咨询](https://console.cloud.tencent.com/workorder/category)
                     * 
                     */
                    std::string GetIPv6AddressType() const;

                    /**
                     * 设置弹性公网 IPv6 类型。
- EIPv6：弹性公网 IPv6。
- HighQualityEIPv6：精品 IPv6。仅中国香港支持精品IPv6。

如需为资源分配IPv6地址，请指定弹性公网IPv6类型。
示例值：EIPv6

此功能仅部分地区灰度开发，如需使用[请提交工单咨询](https://console.cloud.tencent.com/workorder/category)
                     * @param _iPv6AddressType 弹性公网 IPv6 类型。
- EIPv6：弹性公网 IPv6。
- HighQualityEIPv6：精品 IPv6。仅中国香港支持精品IPv6。

如需为资源分配IPv6地址，请指定弹性公网IPv6类型。
示例值：EIPv6

此功能仅部分地区灰度开发，如需使用[请提交工单咨询](https://console.cloud.tencent.com/workorder/category)
                     * 
                     */
                    void SetIPv6AddressType(const std::string& _iPv6AddressType);

                    /**
                     * 判断参数 IPv6AddressType 是否已赋值
                     * @return IPv6AddressType 是否已赋值
                     * 
                     */
                    bool IPv6AddressTypeHasBeenSet() const;

                    /**
                     * 获取高防包唯一ID，申请高防IP时，该字段必传。
示例值：bgp-12345678

                     * @return AntiDDoSPackageId 高防包唯一ID，申请高防IP时，该字段必传。
示例值：bgp-12345678

                     * 
                     */
                    std::string GetAntiDDoSPackageId() const;

                    /**
                     * 设置高防包唯一ID，申请高防IP时，该字段必传。
示例值：bgp-12345678

                     * @param _antiDDoSPackageId 高防包唯一ID，申请高防IP时，该字段必传。
示例值：bgp-12345678

                     * 
                     */
                    void SetAntiDDoSPackageId(const std::string& _antiDDoSPackageId);

                    /**
                     * 判断参数 AntiDDoSPackageId 是否已赋值
                     * @return AntiDDoSPackageId 是否已赋值
                     * 
                     */
                    bool AntiDDoSPackageIdHasBeenSet() const;

                private:

                    /**
                     * 网络计费类型。取值范围：<br><li>BANDWIDTH_PREPAID：预付费按带宽结算</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li><li>BANDWIDTH_POSTPAID_BY_HOUR：带宽按小时后付费</li><li>BANDWIDTH_PACKAGE：带宽包用户</li>默认取值：非带宽包用户默认与子机付费类型保持一致，比如子机付费类型为预付费，网络计费类型默认为预付费；子机付费类型为后付费，网络计费类型默认为后付费。
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * 公网出带宽上限，单位：Mbps。默认值：0Mbps。不同机型带宽上限范围不一致，具体限制详见[购买网络带宽](https://cloud.tencent.com/document/product/213/12523)。
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 是否分配公网IP。取值范围：<br><li>true：表示分配公网IP</li><li>false：表示不分配公网IP</li><br>当公网带宽大于0Mbps时，可自由选择开通与否，默认开通公网IP；当公网带宽为0，则不允许分配公网IP。该参数仅在RunInstances接口中作为入参使用。
                     */
                    bool m_publicIpAssigned;
                    bool m_publicIpAssignedHasBeenSet;

                    /**
                     * 带宽包ID。可通过[ DescribeBandwidthPackages ](https://cloud.tencent.com/document/api/215/19209)接口返回值中的`BandwidthPackageId`获取。该参数仅在RunInstances接口中作为入参使用。
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * 线路类型。各种线路类型详情可参考：[EIP 的 IP 地址类型](https://cloud.tencent.com/document/product/1199/41646)。默认值：BGP。

- BGP：常规 BGP 线路

已开通静态单线IP白名单的用户，可选值：

 - CMCC：中国移动
 - CTCC：中国电信
 - CUCC：中国联通

注意：仅部分地域支持静态单线IP。
示例值：BGP
                     */
                    std::string m_internetServiceProvider;
                    bool m_internetServiceProviderHasBeenSet;

                    /**
                     * 公网 IP 类型。

- WanIP：普通公网IP。
- HighQualityEIP：精品 IP。仅新加坡和中国香港支持精品IP。
- AntiDDoSEIP：高防 IP。仅部分地域支持高防IP，详情可见[弹性公网IP产品概述](https://cloud.tencent.com/document/product/1199/41646)。

如需为资源分配公网IPv4地址，请指定公网IPv4地址类型。

示例值：WanIP

此功能仅部分地区灰度开发，如需使用[请提交工单咨询](https://console.cloud.tencent.com/workorder/category)
                     */
                    std::string m_iPv4AddressType;
                    bool m_iPv4AddressTypeHasBeenSet;

                    /**
                     * 弹性公网 IPv6 类型。
- EIPv6：弹性公网 IPv6。
- HighQualityEIPv6：精品 IPv6。仅中国香港支持精品IPv6。

如需为资源分配IPv6地址，请指定弹性公网IPv6类型。
示例值：EIPv6

此功能仅部分地区灰度开发，如需使用[请提交工单咨询](https://console.cloud.tencent.com/workorder/category)
                     */
                    std::string m_iPv6AddressType;
                    bool m_iPv6AddressTypeHasBeenSet;

                    /**
                     * 高防包唯一ID，申请高防IP时，该字段必传。
示例值：bgp-12345678

                     */
                    std::string m_antiDDoSPackageId;
                    bool m_antiDDoSPackageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_INTERNETACCESSIBLE_H_
