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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEADDRESSESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEADDRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取ECM 地域
                     * @return EcmRegion ECM 地域
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM 地域
                     * @param _ecmRegion ECM 地域
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取标识 EIP 的唯一 ID 列表。EIP 唯一 ID 形如：eip-11112222。参数不支持同时指定AddressIds和Filters。
                     * @return AddressIds 标识 EIP 的唯一 ID 列表。EIP 唯一 ID 形如：eip-11112222。参数不支持同时指定AddressIds和Filters。
                     * 
                     */
                    std::vector<std::string> GetAddressIds() const;

                    /**
                     * 设置标识 EIP 的唯一 ID 列表。EIP 唯一 ID 形如：eip-11112222。参数不支持同时指定AddressIds和Filters。
                     * @param _addressIds 标识 EIP 的唯一 ID 列表。EIP 唯一 ID 形如：eip-11112222。参数不支持同时指定AddressIds和Filters。
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
                     * 获取每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定AddressIds和Filters。详细的过滤条件如下：
address-id - String - 是否必填：否 - （过滤条件）按照 EIP 的唯一 ID 过滤。EIP 唯一 ID 形如：eip-11112222。
address-name - String - 是否必填：否 - （过滤条件）按照 EIP 名称过滤。不支持模糊过滤。
address-ip - String - 是否必填：否 - （过滤条件）按照 EIP 的 IP 地址过滤。
address-status - String - 是否必填：否 - （过滤条件）按照 EIP 的状态过滤。取值范围：详见EIP状态列表。
instance-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的实例 ID 过滤。实例 ID 形如：ins-11112222。
private-ip-address - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的内网 IP 过滤。
network-interface-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的弹性网卡 ID 过滤。弹性网卡 ID 形如：eni-11112222。
is-arrears - String - 是否必填：否 - （过滤条件）按照 EIP 是否欠费进行过滤。（TRUE：EIP 处于欠费状态|FALSE：EIP 费用状态正常）
                     * @return Filters 每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定AddressIds和Filters。详细的过滤条件如下：
address-id - String - 是否必填：否 - （过滤条件）按照 EIP 的唯一 ID 过滤。EIP 唯一 ID 形如：eip-11112222。
address-name - String - 是否必填：否 - （过滤条件）按照 EIP 名称过滤。不支持模糊过滤。
address-ip - String - 是否必填：否 - （过滤条件）按照 EIP 的 IP 地址过滤。
address-status - String - 是否必填：否 - （过滤条件）按照 EIP 的状态过滤。取值范围：详见EIP状态列表。
instance-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的实例 ID 过滤。实例 ID 形如：ins-11112222。
private-ip-address - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的内网 IP 过滤。
network-interface-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的弹性网卡 ID 过滤。弹性网卡 ID 形如：eni-11112222。
is-arrears - String - 是否必填：否 - （过滤条件）按照 EIP 是否欠费进行过滤。（TRUE：EIP 处于欠费状态|FALSE：EIP 费用状态正常）
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定AddressIds和Filters。详细的过滤条件如下：
address-id - String - 是否必填：否 - （过滤条件）按照 EIP 的唯一 ID 过滤。EIP 唯一 ID 形如：eip-11112222。
address-name - String - 是否必填：否 - （过滤条件）按照 EIP 名称过滤。不支持模糊过滤。
address-ip - String - 是否必填：否 - （过滤条件）按照 EIP 的 IP 地址过滤。
address-status - String - 是否必填：否 - （过滤条件）按照 EIP 的状态过滤。取值范围：详见EIP状态列表。
instance-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的实例 ID 过滤。实例 ID 形如：ins-11112222。
private-ip-address - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的内网 IP 过滤。
network-interface-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的弹性网卡 ID 过滤。弹性网卡 ID 形如：eni-11112222。
is-arrears - String - 是否必填：否 - （过滤条件）按照 EIP 是否欠费进行过滤。（TRUE：EIP 处于欠费状态|FALSE：EIP 费用状态正常）
                     * @param _filters 每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定AddressIds和Filters。详细的过滤条件如下：
address-id - String - 是否必填：否 - （过滤条件）按照 EIP 的唯一 ID 过滤。EIP 唯一 ID 形如：eip-11112222。
address-name - String - 是否必填：否 - （过滤条件）按照 EIP 名称过滤。不支持模糊过滤。
address-ip - String - 是否必填：否 - （过滤条件）按照 EIP 的 IP 地址过滤。
address-status - String - 是否必填：否 - （过滤条件）按照 EIP 的状态过滤。取值范围：详见EIP状态列表。
instance-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的实例 ID 过滤。实例 ID 形如：ins-11112222。
private-ip-address - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的内网 IP 过滤。
network-interface-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的弹性网卡 ID 过滤。弹性网卡 ID 形如：eni-11112222。
is-arrears - String - 是否必填：否 - （过滤条件）按照 EIP 是否欠费进行过滤。（TRUE：EIP 处于欠费状态|FALSE：EIP 费用状态正常）
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * ECM 地域
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * 标识 EIP 的唯一 ID 列表。EIP 唯一 ID 形如：eip-11112222。参数不支持同时指定AddressIds和Filters。
                     */
                    std::vector<std::string> m_addressIds;
                    bool m_addressIdsHasBeenSet;

                    /**
                     * 每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定AddressIds和Filters。详细的过滤条件如下：
address-id - String - 是否必填：否 - （过滤条件）按照 EIP 的唯一 ID 过滤。EIP 唯一 ID 形如：eip-11112222。
address-name - String - 是否必填：否 - （过滤条件）按照 EIP 名称过滤。不支持模糊过滤。
address-ip - String - 是否必填：否 - （过滤条件）按照 EIP 的 IP 地址过滤。
address-status - String - 是否必填：否 - （过滤条件）按照 EIP 的状态过滤。取值范围：详见EIP状态列表。
instance-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的实例 ID 过滤。实例 ID 形如：ins-11112222。
private-ip-address - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的内网 IP 过滤。
network-interface-id - String - 是否必填：否 - （过滤条件）按照 EIP 绑定的弹性网卡 ID 过滤。弹性网卡 ID 形如：eni-11112222。
is-arrears - String - 是否必填：否 - （过滤条件）按照 EIP 是否欠费进行过滤。（TRUE：EIP 处于欠费状态|FALSE：EIP 费用状态正常）
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEADDRESSESREQUEST_H_
