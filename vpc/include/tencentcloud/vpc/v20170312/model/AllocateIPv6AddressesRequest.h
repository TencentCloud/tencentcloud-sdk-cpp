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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEIPV6ADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEIPV6ADDRESSESREQUEST_H_

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
                * AllocateIPv6Addresses请求参数结构体
                */
                class AllocateIPv6AddressesRequest : public AbstractModel
                {
                public:
                    AllocateIPv6AddressesRequest();
                    ~AllocateIPv6AddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>EIP名称，用于申请EIP时用户自定义该EIP的个性化名称。长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符&quot;-&quot;和下划线&quot;_&quot;，不能包含空格。<br>默认值：未命名</p>
                     * @return AddressName <p>EIP名称，用于申请EIP时用户自定义该EIP的个性化名称。长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符&quot;-&quot;和下划线&quot;_&quot;，不能包含空格。<br>默认值：未命名</p>
                     * 
                     */
                    std::string GetAddressName() const;

                    /**
                     * 设置<p>EIP名称，用于申请EIP时用户自定义该EIP的个性化名称。长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符&quot;-&quot;和下划线&quot;_&quot;，不能包含空格。<br>默认值：未命名</p>
                     * @param _addressName <p>EIP名称，用于申请EIP时用户自定义该EIP的个性化名称。长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符&quot;-&quot;和下划线&quot;_&quot;，不能包含空格。<br>默认值：未命名</p>
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
                     * 获取<p>弹性公网IPv6类型，可选值：</p><ul><li>EIPv6：弹性公网IPv6</li><li>HighQualityEIPv6：精品BGP线路弹性公网IPv6<br>注意：弹性公网IPv6产品需开白才能使用，其中精品BGP线路仅在中国香港支持。</li></ul><p>默认值：EIPv6</p>
                     * @return AddressType <p>弹性公网IPv6类型，可选值：</p><ul><li>EIPv6：弹性公网IPv6</li><li>HighQualityEIPv6：精品BGP线路弹性公网IPv6<br>注意：弹性公网IPv6产品需开白才能使用，其中精品BGP线路仅在中国香港支持。</li></ul><p>默认值：EIPv6</p>
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置<p>弹性公网IPv6类型，可选值：</p><ul><li>EIPv6：弹性公网IPv6</li><li>HighQualityEIPv6：精品BGP线路弹性公网IPv6<br>注意：弹性公网IPv6产品需开白才能使用，其中精品BGP线路仅在中国香港支持。</li></ul><p>默认值：EIPv6</p>
                     * @param _addressType <p>弹性公网IPv6类型，可选值：</p><ul><li>EIPv6：弹性公网IPv6</li><li>HighQualityEIPv6：精品BGP线路弹性公网IPv6<br>注意：弹性公网IPv6产品需开白才能使用，其中精品BGP线路仅在中国香港支持。</li></ul><p>默认值：EIPv6</p>
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
                     * 获取<p>申请的弹性公网IPv6数量。单次最多可以申请20个弹性公网IPv6实例，总配额请参见<a href="https://cloud.tencent.com/document/product/1142/38369">弹性公网 IPv6 配额说明</a>。</p><p>默认值：1</p>
                     * @return AddressCount <p>申请的弹性公网IPv6数量。单次最多可以申请20个弹性公网IPv6实例，总配额请参见<a href="https://cloud.tencent.com/document/product/1142/38369">弹性公网 IPv6 配额说明</a>。</p><p>默认值：1</p>
                     * 
                     */
                    int64_t GetAddressCount() const;

                    /**
                     * 设置<p>申请的弹性公网IPv6数量。单次最多可以申请20个弹性公网IPv6实例，总配额请参见<a href="https://cloud.tencent.com/document/product/1142/38369">弹性公网 IPv6 配额说明</a>。</p><p>默认值：1</p>
                     * @param _addressCount <p>申请的弹性公网IPv6数量。单次最多可以申请20个弹性公网IPv6实例，总配额请参见<a href="https://cloud.tencent.com/document/product/1142/38369">弹性公网 IPv6 配额说明</a>。</p><p>默认值：1</p>
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
                     * 获取<p>弹性公网IPv6计费方式，可选值：</p><ul><li>BANDWIDTH_PACKAGE：<a href="https://cloud.tencent.com/document/product/684/15255">共享带宽包</a>付费</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li></ul><p>默认值：TRAFFIC_POSTPAID_BY_HOUR</p>
                     * @return InternetChargeType <p>弹性公网IPv6计费方式，可选值：</p><ul><li>BANDWIDTH_PACKAGE：<a href="https://cloud.tencent.com/document/product/684/15255">共享带宽包</a>付费</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li></ul><p>默认值：TRAFFIC_POSTPAID_BY_HOUR</p>
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置<p>弹性公网IPv6计费方式，可选值：</p><ul><li>BANDWIDTH_PACKAGE：<a href="https://cloud.tencent.com/document/product/684/15255">共享带宽包</a>付费</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li></ul><p>默认值：TRAFFIC_POSTPAID_BY_HOUR</p>
                     * @param _internetChargeType <p>弹性公网IPv6计费方式，可选值：</p><ul><li>BANDWIDTH_PACKAGE：<a href="https://cloud.tencent.com/document/product/684/15255">共享带宽包</a>付费</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li></ul><p>默认值：TRAFFIC_POSTPAID_BY_HOUR</p>
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
                     * 获取<p>弹性公网IPv6线路类型，默认值：BGP。</p><p>已开通静态单线IP白名单的用户，可选值：</p><ul><li>CMCC：中国移动</li><li>CTCC：中国电信</li><li>CUCC：中国联通<br>注意：仅部分地域支持静态单线IP。具体请以控制台购买页展示为准。</li></ul>
                     * @return InternetServiceProvider <p>弹性公网IPv6线路类型，默认值：BGP。</p><p>已开通静态单线IP白名单的用户，可选值：</p><ul><li>CMCC：中国移动</li><li>CTCC：中国电信</li><li>CUCC：中国联通<br>注意：仅部分地域支持静态单线IP。具体请以控制台购买页展示为准。</li></ul>
                     * 
                     */
                    std::string GetInternetServiceProvider() const;

                    /**
                     * 设置<p>弹性公网IPv6线路类型，默认值：BGP。</p><p>已开通静态单线IP白名单的用户，可选值：</p><ul><li>CMCC：中国移动</li><li>CTCC：中国电信</li><li>CUCC：中国联通<br>注意：仅部分地域支持静态单线IP。具体请以控制台购买页展示为准。</li></ul>
                     * @param _internetServiceProvider <p>弹性公网IPv6线路类型，默认值：BGP。</p><p>已开通静态单线IP白名单的用户，可选值：</p><ul><li>CMCC：中国移动</li><li>CTCC：中国电信</li><li>CUCC：中国联通<br>注意：仅部分地域支持静态单线IP。具体请以控制台购买页展示为准。</li></ul>
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
                     * 获取<p>弹性公网IPv6带宽上限，单位：Mbps。</p><p>可选值范围取决于EIP计费方式：</p><ul><li>BANDWIDTH_PACKAGE（共享带宽包付费）：1 Mbps 至 2000 Mbps</li><li>TRAFFIC_POSTPAID_BY_HOUR（流量按小时后付费）：1 Mbps 至 200 Mbps</li></ul><p>默认值：1</p>
                     * @return InternetMaxBandwidthOut <p>弹性公网IPv6带宽上限，单位：Mbps。</p><p>可选值范围取决于EIP计费方式：</p><ul><li>BANDWIDTH_PACKAGE（共享带宽包付费）：1 Mbps 至 2000 Mbps</li><li>TRAFFIC_POSTPAID_BY_HOUR（流量按小时后付费）：1 Mbps 至 200 Mbps</li></ul><p>默认值：1</p>
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置<p>弹性公网IPv6带宽上限，单位：Mbps。</p><p>可选值范围取决于EIP计费方式：</p><ul><li>BANDWIDTH_PACKAGE（共享带宽包付费）：1 Mbps 至 2000 Mbps</li><li>TRAFFIC_POSTPAID_BY_HOUR（流量按小时后付费）：1 Mbps 至 200 Mbps</li></ul><p>默认值：1</p>
                     * @param _internetMaxBandwidthOut <p>弹性公网IPv6带宽上限，单位：Mbps。</p><p>可选值范围取决于EIP计费方式：</p><ul><li>BANDWIDTH_PACKAGE（共享带宽包付费）：1 Mbps 至 2000 Mbps</li><li>TRAFFIC_POSTPAID_BY_HOUR（流量按小时后付费）：1 Mbps 至 200 Mbps</li></ul><p>默认值：1</p>
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
                     * 获取<p>带宽包唯一ID参数。可以使用<a href="https://cloud.tencent.com/document/product/215/19209">DescribeBandwidthPackages</a>接口查询BandwidthPackageId。<br>设定该参数且InternetChargeType为BANDWIDTH_PACKAGE，则表示创建的EIP加入该BGP带宽包并采用带宽包计费。</p>
                     * @return BandwidthPackageId <p>带宽包唯一ID参数。可以使用<a href="https://cloud.tencent.com/document/product/215/19209">DescribeBandwidthPackages</a>接口查询BandwidthPackageId。<br>设定该参数且InternetChargeType为BANDWIDTH_PACKAGE，则表示创建的EIP加入该BGP带宽包并采用带宽包计费。</p>
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置<p>带宽包唯一ID参数。可以使用<a href="https://cloud.tencent.com/document/product/215/19209">DescribeBandwidthPackages</a>接口查询BandwidthPackageId。<br>设定该参数且InternetChargeType为BANDWIDTH_PACKAGE，则表示创建的EIP加入该BGP带宽包并采用带宽包计费。</p>
                     * @param _bandwidthPackageId <p>带宽包唯一ID参数。可以使用<a href="https://cloud.tencent.com/document/product/215/19209">DescribeBandwidthPackages</a>接口查询BandwidthPackageId。<br>设定该参数且InternetChargeType为BANDWIDTH_PACKAGE，则表示创建的EIP加入该BGP带宽包并采用带宽包计费。</p>
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
                     * 获取<p>弹性公网IPv6网络出口，可选值：</p><ul><li>CENTER_EGRESS_1：中心出口一</li><li>CENTER_EGRESS_2：中心出口二<br>注意：不同地域支持的线路类型、网络出口略有差异，请以控制台展示为准。</li></ul><p>默认值：CENTER_EGRESS_1</p>
                     * @return Egress <p>弹性公网IPv6网络出口，可选值：</p><ul><li>CENTER_EGRESS_1：中心出口一</li><li>CENTER_EGRESS_2：中心出口二<br>注意：不同地域支持的线路类型、网络出口略有差异，请以控制台展示为准。</li></ul><p>默认值：CENTER_EGRESS_1</p>
                     * 
                     */
                    std::string GetEgress() const;

                    /**
                     * 设置<p>弹性公网IPv6网络出口，可选值：</p><ul><li>CENTER_EGRESS_1：中心出口一</li><li>CENTER_EGRESS_2：中心出口二<br>注意：不同地域支持的线路类型、网络出口略有差异，请以控制台展示为准。</li></ul><p>默认值：CENTER_EGRESS_1</p>
                     * @param _egress <p>弹性公网IPv6网络出口，可选值：</p><ul><li>CENTER_EGRESS_1：中心出口一</li><li>CENTER_EGRESS_2：中心出口二<br>注意：不同地域支持的线路类型、网络出口略有差异，请以控制台展示为准。</li></ul><p>默认值：CENTER_EGRESS_1</p>
                     * 
                     */
                    void SetEgress(const std::string& _egress);

                    /**
                     * 判断参数 Egress 是否已赋值
                     * @return Egress 是否已赋值
                     * 
                     */
                    bool EgressHasBeenSet() const;

                private:

                    /**
                     * <p>EIP名称，用于申请EIP时用户自定义该EIP的个性化名称。长度上限为128个字符，允许使用大小写字母、汉字、数字、连字符&quot;-&quot;和下划线&quot;_&quot;，不能包含空格。<br>默认值：未命名</p>
                     */
                    std::string m_addressName;
                    bool m_addressNameHasBeenSet;

                    /**
                     * <p>弹性公网IPv6类型，可选值：</p><ul><li>EIPv6：弹性公网IPv6</li><li>HighQualityEIPv6：精品BGP线路弹性公网IPv6<br>注意：弹性公网IPv6产品需开白才能使用，其中精品BGP线路仅在中国香港支持。</li></ul><p>默认值：EIPv6</p>
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * <p>申请的弹性公网IPv6数量。单次最多可以申请20个弹性公网IPv6实例，总配额请参见<a href="https://cloud.tencent.com/document/product/1142/38369">弹性公网 IPv6 配额说明</a>。</p><p>默认值：1</p>
                     */
                    int64_t m_addressCount;
                    bool m_addressCountHasBeenSet;

                    /**
                     * <p>弹性公网IPv6计费方式，可选值：</p><ul><li>BANDWIDTH_PACKAGE：<a href="https://cloud.tencent.com/document/product/684/15255">共享带宽包</a>付费</li><li>TRAFFIC_POSTPAID_BY_HOUR：流量按小时后付费</li></ul><p>默认值：TRAFFIC_POSTPAID_BY_HOUR</p>
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * <p>弹性公网IPv6线路类型，默认值：BGP。</p><p>已开通静态单线IP白名单的用户，可选值：</p><ul><li>CMCC：中国移动</li><li>CTCC：中国电信</li><li>CUCC：中国联通<br>注意：仅部分地域支持静态单线IP。具体请以控制台购买页展示为准。</li></ul>
                     */
                    std::string m_internetServiceProvider;
                    bool m_internetServiceProviderHasBeenSet;

                    /**
                     * <p>弹性公网IPv6带宽上限，单位：Mbps。</p><p>可选值范围取决于EIP计费方式：</p><ul><li>BANDWIDTH_PACKAGE（共享带宽包付费）：1 Mbps 至 2000 Mbps</li><li>TRAFFIC_POSTPAID_BY_HOUR（流量按小时后付费）：1 Mbps 至 200 Mbps</li></ul><p>默认值：1</p>
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * <p>带宽包唯一ID参数。可以使用<a href="https://cloud.tencent.com/document/product/215/19209">DescribeBandwidthPackages</a>接口查询BandwidthPackageId。<br>设定该参数且InternetChargeType为BANDWIDTH_PACKAGE，则表示创建的EIP加入该BGP带宽包并采用带宽包计费。</p>
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * <p>需要关联的标签列表。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>弹性公网IPv6网络出口，可选值：</p><ul><li>CENTER_EGRESS_1：中心出口一</li><li>CENTER_EGRESS_2：中心出口二<br>注意：不同地域支持的线路类型、网络出口略有差异，请以控制台展示为准。</li></ul><p>默认值：CENTER_EGRESS_1</p>
                     */
                    std::string m_egress;
                    bool m_egressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEIPV6ADDRESSESREQUEST_H_
