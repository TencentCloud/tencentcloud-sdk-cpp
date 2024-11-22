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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBERESERVEIPADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBERESERVEIPADDRESSESREQUEST_H_

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
                * DescribeReserveIpAddresses请求参数结构体
                */
                class DescribeReserveIpAddressesRequest : public AbstractModel
                {
                public:
                    DescribeReserveIpAddressesRequest();
                    ~DescribeReserveIpAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取内网保留IP唯一ID 列表
                     * @return ReserveIpIds 内网保留IP唯一ID 列表
                     * 
                     */
                    std::vector<std::string> GetReserveIpIds() const;

                    /**
                     * 设置内网保留IP唯一ID 列表
                     * @param _reserveIpIds 内网保留IP唯一ID 列表
                     * 
                     */
                    void SetReserveIpIds(const std::vector<std::string>& _reserveIpIds);

                    /**
                     * 判断参数 ReserveIpIds 是否已赋值
                     * @return ReserveIpIds 是否已赋值
                     * 
                     */
                    bool ReserveIpIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，参数不支持同时指定ReserveIpIds和Filters。

reserve-ip-id  - String - （过滤条件）内网保留 IP唯一 ID，形如：rsvip-pvqgv9vi。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
subnet-id - String - （过滤条件）所属子网实例ID，形如：subnet-f49l6u0z。
address-ip - String - （过滤条件）内网保留 IP 地址，形如：192.168.0.10。
ip-type - String - （过滤条件）业务类型 ipType，0。
name - String - （过滤条件）名称。
state - String - （过滤条件）状态，可选值：Bind， UnBind。
resource-id - String - （过滤条件）绑定的实例资源，形如：eni-059qmnif。
tag-key - String -（过滤条件）按照标签键进行过滤。
tag:tag-key - String - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。

                     * @return Filters 过滤条件，参数不支持同时指定ReserveIpIds和Filters。

reserve-ip-id  - String - （过滤条件）内网保留 IP唯一 ID，形如：rsvip-pvqgv9vi。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
subnet-id - String - （过滤条件）所属子网实例ID，形如：subnet-f49l6u0z。
address-ip - String - （过滤条件）内网保留 IP 地址，形如：192.168.0.10。
ip-type - String - （过滤条件）业务类型 ipType，0。
name - String - （过滤条件）名称。
state - String - （过滤条件）状态，可选值：Bind， UnBind。
resource-id - String - （过滤条件）绑定的实例资源，形如：eni-059qmnif。
tag-key - String -（过滤条件）按照标签键进行过滤。
tag:tag-key - String - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定ReserveIpIds和Filters。

reserve-ip-id  - String - （过滤条件）内网保留 IP唯一 ID，形如：rsvip-pvqgv9vi。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
subnet-id - String - （过滤条件）所属子网实例ID，形如：subnet-f49l6u0z。
address-ip - String - （过滤条件）内网保留 IP 地址，形如：192.168.0.10。
ip-type - String - （过滤条件）业务类型 ipType，0。
name - String - （过滤条件）名称。
state - String - （过滤条件）状态，可选值：Bind， UnBind。
resource-id - String - （过滤条件）绑定的实例资源，形如：eni-059qmnif。
tag-key - String -（过滤条件）按照标签键进行过滤。
tag:tag-key - String - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。

                     * @param _filters 过滤条件，参数不支持同时指定ReserveIpIds和Filters。

reserve-ip-id  - String - （过滤条件）内网保留 IP唯一 ID，形如：rsvip-pvqgv9vi。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
subnet-id - String - （过滤条件）所属子网实例ID，形如：subnet-f49l6u0z。
address-ip - String - （过滤条件）内网保留 IP 地址，形如：192.168.0.10。
ip-type - String - （过滤条件）业务类型 ipType，0。
name - String - （过滤条件）名称。
state - String - （过滤条件）状态，可选值：Bind， UnBind。
resource-id - String - （过滤条件）绑定的实例资源，形如：eni-059qmnif。
tag-key - String -（过滤条件）按照标签键进行过滤。
tag:tag-key - String - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。

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
                     * 获取偏移量。
                     * @return Offset 偏移量。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。
                     * @param _offset 偏移量。
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
                     * 获取请求对象个数。
                     * @return Limit 请求对象个数。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置请求对象个数。
                     * @param _limit 请求对象个数。
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
                     * 内网保留IP唯一ID 列表
                     */
                    std::vector<std::string> m_reserveIpIds;
                    bool m_reserveIpIdsHasBeenSet;

                    /**
                     * 过滤条件，参数不支持同时指定ReserveIpIds和Filters。

reserve-ip-id  - String - （过滤条件）内网保留 IP唯一 ID，形如：rsvip-pvqgv9vi。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
subnet-id - String - （过滤条件）所属子网实例ID，形如：subnet-f49l6u0z。
address-ip - String - （过滤条件）内网保留 IP 地址，形如：192.168.0.10。
ip-type - String - （过滤条件）业务类型 ipType，0。
name - String - （过滤条件）名称。
state - String - （过滤条件）状态，可选值：Bind， UnBind。
resource-id - String - （过滤条件）绑定的实例资源，形如：eni-059qmnif。
tag-key - String -（过滤条件）按照标签键进行过滤。
tag:tag-key - String - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 请求对象个数。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBERESERVEIPADDRESSESREQUEST_H_
