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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIPV6ADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIPV6ADDRESSESREQUEST_H_

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
                * DescribeIPv6Addresses请求参数结构体
                */
                class DescribeIPv6AddressesRequest : public AbstractModel
                {
                public:
                    DescribeIPv6AddressesRequest();
                    ~DescribeIPv6AddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标识 IPv6 的唯一 ID 列。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。

- 传统弹性公网 IPv6 唯一 ID 形如：`eip-11112222`
- 弹性公网 IPv6 唯一 ID 形如：`eipv6-11112222`

注意：参数不支持同时指定`IPv6AddressIds`和`Filters`。
                     * @return IPv6AddressIds 标识 IPv6 的唯一 ID 列。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。

- 传统弹性公网 IPv6 唯一 ID 形如：`eip-11112222`
- 弹性公网 IPv6 唯一 ID 形如：`eipv6-11112222`

注意：参数不支持同时指定`IPv6AddressIds`和`Filters`。
                     * 
                     */
                    std::vector<std::string> GetIPv6AddressIds() const;

                    /**
                     * 设置标识 IPv6 的唯一 ID 列。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。

- 传统弹性公网 IPv6 唯一 ID 形如：`eip-11112222`
- 弹性公网 IPv6 唯一 ID 形如：`eipv6-11112222`

注意：参数不支持同时指定`IPv6AddressIds`和`Filters`。
                     * @param _iPv6AddressIds 标识 IPv6 的唯一 ID 列。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。

- 传统弹性公网 IPv6 唯一 ID 形如：`eip-11112222`
- 弹性公网 IPv6 唯一 ID 形如：`eipv6-11112222`

注意：参数不支持同时指定`IPv6AddressIds`和`Filters`。
                     * 
                     */
                    void SetIPv6AddressIds(const std::vector<std::string>& _iPv6AddressIds);

                    /**
                     * 判断参数 IPv6AddressIds 是否已赋值
                     * @return IPv6AddressIds 是否已赋值
                     * 
                     */
                    bool IPv6AddressIdsHasBeenSet() const;

                    /**
                     * 获取每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。参数不支持同时指定`IPv6AddressIds`和`Filters`。详细的过滤条件如下：

- address-id - String - 是否必填：否 - （过滤条件）按照弹性公网IPv6的唯一ID过滤。
- public-ipv6-address - String - 是否必填：否 - （过滤条件）按照公网 IPv6 的 IP 地址过滤。
- network-interface-id - String - 是否必填：否 - （过滤条件）按照弹性网卡的唯一ID过滤。
- instance-id - String - 是否必填：否 - （过滤条件）按照绑定实例的唯一ID过滤。
- charge-type - String - 是否必填：否 - （过滤条件）按照计费类型过滤。
- private-ipv6-address - String - 是否必填：否 - （过滤条件）按照绑定的内网 IPv6 地址过滤。
- egress - String - 是否必填：否 - （过滤条件）按照出口过滤。
- address-type - String - 是否必填：否 - （过滤条件）按照IPv6类型 进行过滤。可选值：'EIP6'：传统弹性公网 IPv6，'EIPv6'：弹性公网 IPv6，'WanIPv6'：普通公网 IPv6，'HighQualityEIPv6'：精品弹性公网 IPv6。默认值是'EIPv6'。
- address-isp - String - 是否必填：否 - （过滤条件）按照 运营商类型 进行过滤。可选值：'BGP'：常规BGP，'CMCC'：移动，'CUCC'：联通, 'CTCC'：电信。
- address-status - String - 是否必填：否 - （过滤条件）按照 EIP 的状态过滤。状态包含：'CREATING'：创建中，'BINDING'：绑定中，'BIND'：已绑，'UNBINDING'：解绑中，'UNBIND'：未绑定，'OFFLINING'：下线中，'BIND_ENI'：绑定了ENI，'PRIVATE'：仅开通内网的IPv6。
- address-name - String - 是否必填：否 - （过滤条件）按照 EIP 名称过滤。不支持模糊过滤。
- tag-key - String - 是否必填：否 - （过滤条件）按照标签键进行过滤。
- tag-value - String - 是否必填：否 - （过滤条件）按照标签值进行过滤。
- tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。tag-key使用具体的标签键进行替换。
                     * @return Filters 每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。参数不支持同时指定`IPv6AddressIds`和`Filters`。详细的过滤条件如下：

- address-id - String - 是否必填：否 - （过滤条件）按照弹性公网IPv6的唯一ID过滤。
- public-ipv6-address - String - 是否必填：否 - （过滤条件）按照公网 IPv6 的 IP 地址过滤。
- network-interface-id - String - 是否必填：否 - （过滤条件）按照弹性网卡的唯一ID过滤。
- instance-id - String - 是否必填：否 - （过滤条件）按照绑定实例的唯一ID过滤。
- charge-type - String - 是否必填：否 - （过滤条件）按照计费类型过滤。
- private-ipv6-address - String - 是否必填：否 - （过滤条件）按照绑定的内网 IPv6 地址过滤。
- egress - String - 是否必填：否 - （过滤条件）按照出口过滤。
- address-type - String - 是否必填：否 - （过滤条件）按照IPv6类型 进行过滤。可选值：'EIP6'：传统弹性公网 IPv6，'EIPv6'：弹性公网 IPv6，'WanIPv6'：普通公网 IPv6，'HighQualityEIPv6'：精品弹性公网 IPv6。默认值是'EIPv6'。
- address-isp - String - 是否必填：否 - （过滤条件）按照 运营商类型 进行过滤。可选值：'BGP'：常规BGP，'CMCC'：移动，'CUCC'：联通, 'CTCC'：电信。
- address-status - String - 是否必填：否 - （过滤条件）按照 EIP 的状态过滤。状态包含：'CREATING'：创建中，'BINDING'：绑定中，'BIND'：已绑，'UNBINDING'：解绑中，'UNBIND'：未绑定，'OFFLINING'：下线中，'BIND_ENI'：绑定了ENI，'PRIVATE'：仅开通内网的IPv6。
- address-name - String - 是否必填：否 - （过滤条件）按照 EIP 名称过滤。不支持模糊过滤。
- tag-key - String - 是否必填：否 - （过滤条件）按照标签键进行过滤。
- tag-value - String - 是否必填：否 - （过滤条件）按照标签值进行过滤。
- tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。tag-key使用具体的标签键进行替换。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。参数不支持同时指定`IPv6AddressIds`和`Filters`。详细的过滤条件如下：

- address-id - String - 是否必填：否 - （过滤条件）按照弹性公网IPv6的唯一ID过滤。
- public-ipv6-address - String - 是否必填：否 - （过滤条件）按照公网 IPv6 的 IP 地址过滤。
- network-interface-id - String - 是否必填：否 - （过滤条件）按照弹性网卡的唯一ID过滤。
- instance-id - String - 是否必填：否 - （过滤条件）按照绑定实例的唯一ID过滤。
- charge-type - String - 是否必填：否 - （过滤条件）按照计费类型过滤。
- private-ipv6-address - String - 是否必填：否 - （过滤条件）按照绑定的内网 IPv6 地址过滤。
- egress - String - 是否必填：否 - （过滤条件）按照出口过滤。
- address-type - String - 是否必填：否 - （过滤条件）按照IPv6类型 进行过滤。可选值：'EIP6'：传统弹性公网 IPv6，'EIPv6'：弹性公网 IPv6，'WanIPv6'：普通公网 IPv6，'HighQualityEIPv6'：精品弹性公网 IPv6。默认值是'EIPv6'。
- address-isp - String - 是否必填：否 - （过滤条件）按照 运营商类型 进行过滤。可选值：'BGP'：常规BGP，'CMCC'：移动，'CUCC'：联通, 'CTCC'：电信。
- address-status - String - 是否必填：否 - （过滤条件）按照 EIP 的状态过滤。状态包含：'CREATING'：创建中，'BINDING'：绑定中，'BIND'：已绑，'UNBINDING'：解绑中，'UNBIND'：未绑定，'OFFLINING'：下线中，'BIND_ENI'：绑定了ENI，'PRIVATE'：仅开通内网的IPv6。
- address-name - String - 是否必填：否 - （过滤条件）按照 EIP 名称过滤。不支持模糊过滤。
- tag-key - String - 是否必填：否 - （过滤条件）按照标签键进行过滤。
- tag-value - String - 是否必填：否 - （过滤条件）按照标签值进行过滤。
- tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。tag-key使用具体的标签键进行替换。
                     * @param _filters 每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。参数不支持同时指定`IPv6AddressIds`和`Filters`。详细的过滤条件如下：

- address-id - String - 是否必填：否 - （过滤条件）按照弹性公网IPv6的唯一ID过滤。
- public-ipv6-address - String - 是否必填：否 - （过滤条件）按照公网 IPv6 的 IP 地址过滤。
- network-interface-id - String - 是否必填：否 - （过滤条件）按照弹性网卡的唯一ID过滤。
- instance-id - String - 是否必填：否 - （过滤条件）按照绑定实例的唯一ID过滤。
- charge-type - String - 是否必填：否 - （过滤条件）按照计费类型过滤。
- private-ipv6-address - String - 是否必填：否 - （过滤条件）按照绑定的内网 IPv6 地址过滤。
- egress - String - 是否必填：否 - （过滤条件）按照出口过滤。
- address-type - String - 是否必填：否 - （过滤条件）按照IPv6类型 进行过滤。可选值：'EIP6'：传统弹性公网 IPv6，'EIPv6'：弹性公网 IPv6，'WanIPv6'：普通公网 IPv6，'HighQualityEIPv6'：精品弹性公网 IPv6。默认值是'EIPv6'。
- address-isp - String - 是否必填：否 - （过滤条件）按照 运营商类型 进行过滤。可选值：'BGP'：常规BGP，'CMCC'：移动，'CUCC'：联通, 'CTCC'：电信。
- address-status - String - 是否必填：否 - （过滤条件）按照 EIP 的状态过滤。状态包含：'CREATING'：创建中，'BINDING'：绑定中，'BIND'：已绑，'UNBINDING'：解绑中，'UNBIND'：未绑定，'OFFLINING'：下线中，'BIND_ENI'：绑定了ENI，'PRIVATE'：仅开通内网的IPv6。
- address-name - String - 是否必填：否 - （过滤条件）按照 EIP 名称过滤。不支持模糊过滤。
- tag-key - String - 是否必填：否 - （过滤条件）按照标签键进行过滤。
- tag-value - String - 是否必填：否 - （过滤条件）按照标签值进行过滤。
- tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。tag-key使用具体的标签键进行替换。
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
                     * 获取是否查询传统型IPv6地址信息。可选值：
<li>True：查询传统型IPv6地址信息</li>
<li>False：不查询传统型IPv6地址信息</li>
默认值：False
                     * @return Traditional 是否查询传统型IPv6地址信息。可选值：
<li>True：查询传统型IPv6地址信息</li>
<li>False：不查询传统型IPv6地址信息</li>
默认值：False
                     * 
                     */
                    bool GetTraditional() const;

                    /**
                     * 设置是否查询传统型IPv6地址信息。可选值：
<li>True：查询传统型IPv6地址信息</li>
<li>False：不查询传统型IPv6地址信息</li>
默认值：False
                     * @param _traditional 是否查询传统型IPv6地址信息。可选值：
<li>True：查询传统型IPv6地址信息</li>
<li>False：不查询传统型IPv6地址信息</li>
默认值：False
                     * 
                     */
                    void SetTraditional(const bool& _traditional);

                    /**
                     * 判断参数 Traditional 是否已赋值
                     * @return Traditional 是否已赋值
                     * 
                     */
                    bool TraditionalHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * @return Offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * @param _offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
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
                     * 获取返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * @return Limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * @param _limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
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
                     * 标识 IPv6 的唯一 ID 列。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。

- 传统弹性公网 IPv6 唯一 ID 形如：`eip-11112222`
- 弹性公网 IPv6 唯一 ID 形如：`eipv6-11112222`

注意：参数不支持同时指定`IPv6AddressIds`和`Filters`。
                     */
                    std::vector<std::string> m_iPv6AddressIds;
                    bool m_iPv6AddressIdsHasBeenSet;

                    /**
                     * 每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。参数不支持同时指定`IPv6AddressIds`和`Filters`。详细的过滤条件如下：

- address-id - String - 是否必填：否 - （过滤条件）按照弹性公网IPv6的唯一ID过滤。
- public-ipv6-address - String - 是否必填：否 - （过滤条件）按照公网 IPv6 的 IP 地址过滤。
- network-interface-id - String - 是否必填：否 - （过滤条件）按照弹性网卡的唯一ID过滤。
- instance-id - String - 是否必填：否 - （过滤条件）按照绑定实例的唯一ID过滤。
- charge-type - String - 是否必填：否 - （过滤条件）按照计费类型过滤。
- private-ipv6-address - String - 是否必填：否 - （过滤条件）按照绑定的内网 IPv6 地址过滤。
- egress - String - 是否必填：否 - （过滤条件）按照出口过滤。
- address-type - String - 是否必填：否 - （过滤条件）按照IPv6类型 进行过滤。可选值：'EIP6'：传统弹性公网 IPv6，'EIPv6'：弹性公网 IPv6，'WanIPv6'：普通公网 IPv6，'HighQualityEIPv6'：精品弹性公网 IPv6。默认值是'EIPv6'。
- address-isp - String - 是否必填：否 - （过滤条件）按照 运营商类型 进行过滤。可选值：'BGP'：常规BGP，'CMCC'：移动，'CUCC'：联通, 'CTCC'：电信。
- address-status - String - 是否必填：否 - （过滤条件）按照 EIP 的状态过滤。状态包含：'CREATING'：创建中，'BINDING'：绑定中，'BIND'：已绑，'UNBINDING'：解绑中，'UNBIND'：未绑定，'OFFLINING'：下线中，'BIND_ENI'：绑定了ENI，'PRIVATE'：仅开通内网的IPv6。
- address-name - String - 是否必填：否 - （过滤条件）按照 EIP 名称过滤。不支持模糊过滤。
- tag-key - String - 是否必填：否 - （过滤条件）按照标签键进行过滤。
- tag-value - String - 是否必填：否 - （过滤条件）按照标签值进行过滤。
- tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。tag-key使用具体的标签键进行替换。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 是否查询传统型IPv6地址信息。可选值：
<li>True：查询传统型IPv6地址信息</li>
<li>False：不查询传统型IPv6地址信息</li>
默认值：False
                     */
                    bool m_traditional;
                    bool m_traditionalHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIPV6ADDRESSESREQUEST_H_
