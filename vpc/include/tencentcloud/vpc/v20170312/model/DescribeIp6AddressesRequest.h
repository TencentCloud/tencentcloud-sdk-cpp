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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIP6ADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIP6ADDRESSESREQUEST_H_

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
                * DescribeIp6Addresses请求参数结构体
                */
                class DescribeIp6AddressesRequest : public AbstractModel
                {
                public:
                    DescribeIp6AddressesRequest();
                    ~DescribeIp6AddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标识 IPv6 的唯一 ID 列表。IPv6 唯一 ID 形如：`eip-11112222`。参数不支持同时指定`Ip6AddressIds`和`Filters`。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询Ip6AddressIds。
                     * @return Ip6AddressIds 标识 IPv6 的唯一 ID 列表。IPv6 唯一 ID 形如：`eip-11112222`。参数不支持同时指定`Ip6AddressIds`和`Filters`。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询Ip6AddressIds。
                     * 
                     */
                    std::vector<std::string> GetIp6AddressIds() const;

                    /**
                     * 设置标识 IPv6 的唯一 ID 列表。IPv6 唯一 ID 形如：`eip-11112222`。参数不支持同时指定`Ip6AddressIds`和`Filters`。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询Ip6AddressIds。
                     * @param _ip6AddressIds 标识 IPv6 的唯一 ID 列表。IPv6 唯一 ID 形如：`eip-11112222`。参数不支持同时指定`Ip6AddressIds`和`Filters`。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询Ip6AddressIds。
                     * 
                     */
                    void SetIp6AddressIds(const std::vector<std::string>& _ip6AddressIds);

                    /**
                     * 判断参数 Ip6AddressIds 是否已赋值
                     * @return Ip6AddressIds 是否已赋值
                     * 
                     */
                    bool Ip6AddressIdsHasBeenSet() const;

                    /**
                     * 获取每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。参数不支持同时指定`AddressIds`和`Filters`。详细的过滤条件如下：
<li> address-ip - String - 是否必填：否 - （过滤条件）按照 IPv6 的 IP 地址过滤。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询address-ip。</li>
<li> network-interface-id - String - 是否必填：否 - （过滤条件）按照弹性网卡的唯一ID过滤。可以使用[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口查询network-interface-id。</li>
                     * @return Filters 每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。参数不支持同时指定`AddressIds`和`Filters`。详细的过滤条件如下：
<li> address-ip - String - 是否必填：否 - （过滤条件）按照 IPv6 的 IP 地址过滤。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询address-ip。</li>
<li> network-interface-id - String - 是否必填：否 - （过滤条件）按照弹性网卡的唯一ID过滤。可以使用[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口查询network-interface-id。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。参数不支持同时指定`AddressIds`和`Filters`。详细的过滤条件如下：
<li> address-ip - String - 是否必填：否 - （过滤条件）按照 IPv6 的 IP 地址过滤。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询address-ip。</li>
<li> network-interface-id - String - 是否必填：否 - （过滤条件）按照弹性网卡的唯一ID过滤。可以使用[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口查询network-interface-id。</li>
                     * @param _filters 每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。参数不支持同时指定`AddressIds`和`Filters`。详细的过滤条件如下：
<li> address-ip - String - 是否必填：否 - （过滤条件）按照 IPv6 的 IP 地址过滤。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询address-ip。</li>
<li> network-interface-id - String - 是否必填：否 - （过滤条件）按照弹性网卡的唯一ID过滤。可以使用[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口查询network-interface-id。</li>
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
                     * 获取偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * @return Offset 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * @param _offset 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
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
                     * 获取返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * @return Limit 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * @param _limit 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
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
                     * 标识 IPv6 的唯一 ID 列表。IPv6 唯一 ID 形如：`eip-11112222`。参数不支持同时指定`Ip6AddressIds`和`Filters`。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询Ip6AddressIds。
                     */
                    std::vector<std::string> m_ip6AddressIds;
                    bool m_ip6AddressIdsHasBeenSet;

                    /**
                     * 每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。参数不支持同时指定`AddressIds`和`Filters`。详细的过滤条件如下：
<li> address-ip - String - 是否必填：否 - （过滤条件）按照 IPv6 的 IP 地址过滤。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询address-ip。</li>
<li> network-interface-id - String - 是否必填：否 - （过滤条件）按照弹性网卡的唯一ID过滤。可以使用[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口查询network-interface-id。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIP6ADDRESSESREQUEST_H_
