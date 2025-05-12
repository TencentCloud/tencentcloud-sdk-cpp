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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeAddresses请求参数结构体
                */
                class DescribeAddressesRequest : public AbstractModel
                {
                public:
                    DescribeAddressesRequest();
                    ~DescribeAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标识 EIP 的唯一 ID 列表。EIP 唯一 ID 形如：`eip-11112222`。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。参数不支持同时指定`AddressIds`和`Filters.address-id`。
                     * @return AddressIds 标识 EIP 的唯一 ID 列表。EIP 唯一 ID 形如：`eip-11112222`。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。参数不支持同时指定`AddressIds`和`Filters.address-id`。
                     * 
                     */
                    std::vector<std::string> GetAddressIds() const;

                    /**
                     * 设置标识 EIP 的唯一 ID 列表。EIP 唯一 ID 形如：`eip-11112222`。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。参数不支持同时指定`AddressIds`和`Filters.address-id`。
                     * @param _addressIds 标识 EIP 的唯一 ID 列表。EIP 唯一 ID 形如：`eip-11112222`。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。参数不支持同时指定`AddressIds`和`Filters.address-id`。
                     * 
                     */
                    void SetAddressIds(const std::vector<std::string>& _addressIds);

                    /**
                     * 判断参数 AddressIds 是否已赋值
                     * @return AddressIds 是否已赋值
                     * 
                     */
                    bool AddressIdsHasBeenSet() const;

                    /**
                     * 获取每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。详细的过滤条件如下：
<li> address-id - String - 是否必填：否 - （过滤条件）按照 EIP 的唯一 ID 过滤。EIP 唯一 ID 形如：eip-11112222。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取address-id。</li>
<li> address-name - String - 是否必填：否 - （过滤条件）按照 EIP 名称过滤。不支持模糊过滤。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取address-name。</li>
<li> address-ip - String - 是否必填：否 - （过滤条件）按照 EIP 的 IP 地址过滤。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取address-ip。</li>
<li> address-status - String - 是否必填：否 - （过滤条件）按照 EIP 的状态过滤。状态包含：'CREATING'：创建中，'BINDING'：绑定中，'BIND'：已绑，'UNBINDING'：解绑中，'UNBIND'：未绑定，'OFFLINING'：下线中，'BIND_ENI'：绑定了ENI。</li>
<li> instance-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的实例 ID 过滤。实例 ID 形如：ins-11112222。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取instance-id。</li>
<li> private-ip-address - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的内网 IP 过滤。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取private-ip-address。</li>
<li> network-interface-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的弹性网卡 ID 过滤。弹性网卡 ID 形如：eni-11112222。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取network-interface-id。</li>
<li> is-arrears - String - 是否必填：否 - （过滤条件）按照 EIP 是否欠费进行过滤。（TRUE：EIP 处于欠费状态|FALSE：EIP 费用状态正常）</li>
<li> address-type - String - 是否必填：否 - （过滤条件）按照 IP类型 进行过滤。可选值：'WanIP'：普通公网 IP, 'EIP'：弹性公网 IP，'AnycastEIP'：加速 IP，'HighQualityEIP'：精品弹性公网 IP， 'AntiDDoSEIP'：高防 IP。默认值是'EIP'。</li>
<li> address-isp - String - 是否必填：否 - （过滤条件）按照 运营商类型 进行过滤。可选值：'BGP'：常规BGP，'CMCC'：移动，'CUCC'：联通, 'CTCC'：电信</li>
<li> dedicated-cluster-id - String - 是否必填：否 - （过滤条件）按照 CDC 的唯一 ID 过滤。CDC 唯一 ID 形如：cluster-11112222。</li>
<li> tag-key - String - 是否必填：否 - （过滤条件）按照标签键进行过滤。</li>
<li> tag-value - String - 是否必填：否 - （过滤条件）按照标签值进行过滤。</li>
<li> tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。tag-key使用具体的标签键进行替换。</li>
                     * @return Filters 每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。详细的过滤条件如下：
<li> address-id - String - 是否必填：否 - （过滤条件）按照 EIP 的唯一 ID 过滤。EIP 唯一 ID 形如：eip-11112222。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取address-id。</li>
<li> address-name - String - 是否必填：否 - （过滤条件）按照 EIP 名称过滤。不支持模糊过滤。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取address-name。</li>
<li> address-ip - String - 是否必填：否 - （过滤条件）按照 EIP 的 IP 地址过滤。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取address-ip。</li>
<li> address-status - String - 是否必填：否 - （过滤条件）按照 EIP 的状态过滤。状态包含：'CREATING'：创建中，'BINDING'：绑定中，'BIND'：已绑，'UNBINDING'：解绑中，'UNBIND'：未绑定，'OFFLINING'：下线中，'BIND_ENI'：绑定了ENI。</li>
<li> instance-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的实例 ID 过滤。实例 ID 形如：ins-11112222。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取instance-id。</li>
<li> private-ip-address - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的内网 IP 过滤。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取private-ip-address。</li>
<li> network-interface-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的弹性网卡 ID 过滤。弹性网卡 ID 形如：eni-11112222。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取network-interface-id。</li>
<li> is-arrears - String - 是否必填：否 - （过滤条件）按照 EIP 是否欠费进行过滤。（TRUE：EIP 处于欠费状态|FALSE：EIP 费用状态正常）</li>
<li> address-type - String - 是否必填：否 - （过滤条件）按照 IP类型 进行过滤。可选值：'WanIP'：普通公网 IP, 'EIP'：弹性公网 IP，'AnycastEIP'：加速 IP，'HighQualityEIP'：精品弹性公网 IP， 'AntiDDoSEIP'：高防 IP。默认值是'EIP'。</li>
<li> address-isp - String - 是否必填：否 - （过滤条件）按照 运营商类型 进行过滤。可选值：'BGP'：常规BGP，'CMCC'：移动，'CUCC'：联通, 'CTCC'：电信</li>
<li> dedicated-cluster-id - String - 是否必填：否 - （过滤条件）按照 CDC 的唯一 ID 过滤。CDC 唯一 ID 形如：cluster-11112222。</li>
<li> tag-key - String - 是否必填：否 - （过滤条件）按照标签键进行过滤。</li>
<li> tag-value - String - 是否必填：否 - （过滤条件）按照标签值进行过滤。</li>
<li> tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。tag-key使用具体的标签键进行替换。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。详细的过滤条件如下：
<li> address-id - String - 是否必填：否 - （过滤条件）按照 EIP 的唯一 ID 过滤。EIP 唯一 ID 形如：eip-11112222。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取address-id。</li>
<li> address-name - String - 是否必填：否 - （过滤条件）按照 EIP 名称过滤。不支持模糊过滤。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取address-name。</li>
<li> address-ip - String - 是否必填：否 - （过滤条件）按照 EIP 的 IP 地址过滤。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取address-ip。</li>
<li> address-status - String - 是否必填：否 - （过滤条件）按照 EIP 的状态过滤。状态包含：'CREATING'：创建中，'BINDING'：绑定中，'BIND'：已绑，'UNBINDING'：解绑中，'UNBIND'：未绑定，'OFFLINING'：下线中，'BIND_ENI'：绑定了ENI。</li>
<li> instance-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的实例 ID 过滤。实例 ID 形如：ins-11112222。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取instance-id。</li>
<li> private-ip-address - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的内网 IP 过滤。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取private-ip-address。</li>
<li> network-interface-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的弹性网卡 ID 过滤。弹性网卡 ID 形如：eni-11112222。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取network-interface-id。</li>
<li> is-arrears - String - 是否必填：否 - （过滤条件）按照 EIP 是否欠费进行过滤。（TRUE：EIP 处于欠费状态|FALSE：EIP 费用状态正常）</li>
<li> address-type - String - 是否必填：否 - （过滤条件）按照 IP类型 进行过滤。可选值：'WanIP'：普通公网 IP, 'EIP'：弹性公网 IP，'AnycastEIP'：加速 IP，'HighQualityEIP'：精品弹性公网 IP， 'AntiDDoSEIP'：高防 IP。默认值是'EIP'。</li>
<li> address-isp - String - 是否必填：否 - （过滤条件）按照 运营商类型 进行过滤。可选值：'BGP'：常规BGP，'CMCC'：移动，'CUCC'：联通, 'CTCC'：电信</li>
<li> dedicated-cluster-id - String - 是否必填：否 - （过滤条件）按照 CDC 的唯一 ID 过滤。CDC 唯一 ID 形如：cluster-11112222。</li>
<li> tag-key - String - 是否必填：否 - （过滤条件）按照标签键进行过滤。</li>
<li> tag-value - String - 是否必填：否 - （过滤条件）按照标签值进行过滤。</li>
<li> tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。tag-key使用具体的标签键进行替换。</li>
                     * @param _filters 每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。详细的过滤条件如下：
<li> address-id - String - 是否必填：否 - （过滤条件）按照 EIP 的唯一 ID 过滤。EIP 唯一 ID 形如：eip-11112222。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取address-id。</li>
<li> address-name - String - 是否必填：否 - （过滤条件）按照 EIP 名称过滤。不支持模糊过滤。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取address-name。</li>
<li> address-ip - String - 是否必填：否 - （过滤条件）按照 EIP 的 IP 地址过滤。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取address-ip。</li>
<li> address-status - String - 是否必填：否 - （过滤条件）按照 EIP 的状态过滤。状态包含：'CREATING'：创建中，'BINDING'：绑定中，'BIND'：已绑，'UNBINDING'：解绑中，'UNBIND'：未绑定，'OFFLINING'：下线中，'BIND_ENI'：绑定了ENI。</li>
<li> instance-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的实例 ID 过滤。实例 ID 形如：ins-11112222。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取instance-id。</li>
<li> private-ip-address - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的内网 IP 过滤。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取private-ip-address。</li>
<li> network-interface-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的弹性网卡 ID 过滤。弹性网卡 ID 形如：eni-11112222。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取network-interface-id。</li>
<li> is-arrears - String - 是否必填：否 - （过滤条件）按照 EIP 是否欠费进行过滤。（TRUE：EIP 处于欠费状态|FALSE：EIP 费用状态正常）</li>
<li> address-type - String - 是否必填：否 - （过滤条件）按照 IP类型 进行过滤。可选值：'WanIP'：普通公网 IP, 'EIP'：弹性公网 IP，'AnycastEIP'：加速 IP，'HighQualityEIP'：精品弹性公网 IP， 'AntiDDoSEIP'：高防 IP。默认值是'EIP'。</li>
<li> address-isp - String - 是否必填：否 - （过滤条件）按照 运营商类型 进行过滤。可选值：'BGP'：常规BGP，'CMCC'：移动，'CUCC'：联通, 'CTCC'：电信</li>
<li> dedicated-cluster-id - String - 是否必填：否 - （过滤条件）按照 CDC 的唯一 ID 过滤。CDC 唯一 ID 形如：cluster-11112222。</li>
<li> tag-key - String - 是否必填：否 - （过滤条件）按照标签键进行过滤。</li>
<li> tag-value - String - 是否必填：否 - （过滤条件）按照标签值进行过滤。</li>
<li> tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。tag-key使用具体的标签键进行替换。</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API 中的相关小节。
                     * @return Offset 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API 中的相关小节。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API 中的相关小节。
                     * @param _offset 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API 中的相关小节。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API 中的相关小节。
                     * @return Limit 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API 中的相关小节。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API 中的相关小节。
                     * @param _limit 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API 中的相关小节。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 标识 EIP 的唯一 ID 列表。EIP 唯一 ID 形如：`eip-11112222`。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取AddressId。参数不支持同时指定`AddressIds`和`Filters.address-id`。
                     */
                    std::vector<std::string> m_addressIds;
                    bool m_addressIdsHasBeenSet;

                    /**
                     * 每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。详细的过滤条件如下：
<li> address-id - String - 是否必填：否 - （过滤条件）按照 EIP 的唯一 ID 过滤。EIP 唯一 ID 形如：eip-11112222。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取address-id。</li>
<li> address-name - String - 是否必填：否 - （过滤条件）按照 EIP 名称过滤。不支持模糊过滤。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取address-name。</li>
<li> address-ip - String - 是否必填：否 - （过滤条件）按照 EIP 的 IP 地址过滤。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取address-ip。</li>
<li> address-status - String - 是否必填：否 - （过滤条件）按照 EIP 的状态过滤。状态包含：'CREATING'：创建中，'BINDING'：绑定中，'BIND'：已绑，'UNBINDING'：解绑中，'UNBIND'：未绑定，'OFFLINING'：下线中，'BIND_ENI'：绑定了ENI。</li>
<li> instance-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的实例 ID 过滤。实例 ID 形如：ins-11112222。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取instance-id。</li>
<li> private-ip-address - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的内网 IP 过滤。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取private-ip-address。</li>
<li> network-interface-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的弹性网卡 ID 过滤。弹性网卡 ID 形如：eni-11112222。可以使用[DescribeAddresses](https://cloud.tencent.com/document/product/215/16702)接口获取network-interface-id。</li>
<li> is-arrears - String - 是否必填：否 - （过滤条件）按照 EIP 是否欠费进行过滤。（TRUE：EIP 处于欠费状态|FALSE：EIP 费用状态正常）</li>
<li> address-type - String - 是否必填：否 - （过滤条件）按照 IP类型 进行过滤。可选值：'WanIP'：普通公网 IP, 'EIP'：弹性公网 IP，'AnycastEIP'：加速 IP，'HighQualityEIP'：精品弹性公网 IP， 'AntiDDoSEIP'：高防 IP。默认值是'EIP'。</li>
<li> address-isp - String - 是否必填：否 - （过滤条件）按照 运营商类型 进行过滤。可选值：'BGP'：常规BGP，'CMCC'：移动，'CUCC'：联通, 'CTCC'：电信</li>
<li> dedicated-cluster-id - String - 是否必填：否 - （过滤条件）按照 CDC 的唯一 ID 过滤。CDC 唯一 ID 形如：cluster-11112222。</li>
<li> tag-key - String - 是否必填：否 - （过滤条件）按照标签键进行过滤。</li>
<li> tag-value - String - 是否必填：否 - （过滤条件）按照标签值进行过滤。</li>
<li> tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。tag-key使用具体的标签键进行替换。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API 中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API 中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSESREQUEST_H_
