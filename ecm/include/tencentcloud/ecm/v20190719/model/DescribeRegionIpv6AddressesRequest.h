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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEREGIONIPV6ADDRESSESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEREGIONIPV6ADDRESSESREQUEST_H_

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
                * DescribeRegionIpv6Addresses请求参数结构体
                */
                class DescribeRegionIpv6AddressesRequest : public AbstractModel
                {
                public:
                    DescribeRegionIpv6AddressesRequest();
                    ~DescribeRegionIpv6AddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ECM 地域，为空时返回所有地域的IPv6地址。
                     * @return EcmRegion ECM 地域，为空时返回所有地域的IPv6地址。
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM 地域，为空时返回所有地域的IPv6地址。
                     * @param _ecmRegion ECM 地域，为空时返回所有地域的IPv6地址。
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
                     * 获取详细的过滤条件如下：
address-id - String - 是否必填：否 - （过滤条件）按照 EIP 的 ID 过滤。
address-ip - String - 是否必填：否 - （过滤条件）按照 EIP 的 IP 地址过滤。
network-interface-id - String - 是否必填：否 - （过滤条件）按照弹性网卡的唯一ID过滤。
instance-id - String - 是否必填：否 - （过滤条件）按照 EIP 所绑定的实例 ID 过滤。
vpc-id - String - 是否必填：否 - （过滤条件）按照 EIP 所在 VPC 的 ID 进行过滤。
address-isp - String - 是否必填：否 - （过滤条件）按照 EIP 的运营商进行过滤。
address-status  - String - 是否必填：否 - （过滤条件）按照 EIP  的状态信息进行过滤。
                     * @return Filters 详细的过滤条件如下：
address-id - String - 是否必填：否 - （过滤条件）按照 EIP 的 ID 过滤。
address-ip - String - 是否必填：否 - （过滤条件）按照 EIP 的 IP 地址过滤。
network-interface-id - String - 是否必填：否 - （过滤条件）按照弹性网卡的唯一ID过滤。
instance-id - String - 是否必填：否 - （过滤条件）按照 EIP 所绑定的实例 ID 过滤。
vpc-id - String - 是否必填：否 - （过滤条件）按照 EIP 所在 VPC 的 ID 进行过滤。
address-isp - String - 是否必填：否 - （过滤条件）按照 EIP 的运营商进行过滤。
address-status  - String - 是否必填：否 - （过滤条件）按照 EIP  的状态信息进行过滤。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置详细的过滤条件如下：
address-id - String - 是否必填：否 - （过滤条件）按照 EIP 的 ID 过滤。
address-ip - String - 是否必填：否 - （过滤条件）按照 EIP 的 IP 地址过滤。
network-interface-id - String - 是否必填：否 - （过滤条件）按照弹性网卡的唯一ID过滤。
instance-id - String - 是否必填：否 - （过滤条件）按照 EIP 所绑定的实例 ID 过滤。
vpc-id - String - 是否必填：否 - （过滤条件）按照 EIP 所在 VPC 的 ID 进行过滤。
address-isp - String - 是否必填：否 - （过滤条件）按照 EIP 的运营商进行过滤。
address-status  - String - 是否必填：否 - （过滤条件）按照 EIP  的状态信息进行过滤。
                     * @param _filters 详细的过滤条件如下：
address-id - String - 是否必填：否 - （过滤条件）按照 EIP 的 ID 过滤。
address-ip - String - 是否必填：否 - （过滤条件）按照 EIP 的 IP 地址过滤。
network-interface-id - String - 是否必填：否 - （过滤条件）按照弹性网卡的唯一ID过滤。
instance-id - String - 是否必填：否 - （过滤条件）按照 EIP 所绑定的实例 ID 过滤。
vpc-id - String - 是否必填：否 - （过滤条件）按照 EIP 所在 VPC 的 ID 进行过滤。
address-isp - String - 是否必填：否 - （过滤条件）按照 EIP 的运营商进行过滤。
address-status  - String - 是否必填：否 - （过滤条件）按照 EIP  的状态信息进行过滤。
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
                     * 获取偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * @return Offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * @param _offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
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
                     * 获取返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     * @return Limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     * @param _limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
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
                     * ECM 地域，为空时返回所有地域的IPv6地址。
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * 详细的过滤条件如下：
address-id - String - 是否必填：否 - （过滤条件）按照 EIP 的 ID 过滤。
address-ip - String - 是否必填：否 - （过滤条件）按照 EIP 的 IP 地址过滤。
network-interface-id - String - 是否必填：否 - （过滤条件）按照弹性网卡的唯一ID过滤。
instance-id - String - 是否必填：否 - （过滤条件）按照 EIP 所绑定的实例 ID 过滤。
vpc-id - String - 是否必填：否 - （过滤条件）按照 EIP 所在 VPC 的 ID 进行过滤。
address-isp - String - 是否必填：否 - （过滤条件）按照 EIP 的运营商进行过滤。
address-status  - String - 是否必填：否 - （过滤条件）按照 EIP  的状态信息进行过滤。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEREGIONIPV6ADDRESSESREQUEST_H_
