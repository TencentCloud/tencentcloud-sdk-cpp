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
                     * 获取<p>内网保留IP唯一ID 列表</p>
                     * @return ReserveIpIds <p>内网保留IP唯一ID 列表</p>
                     * 
                     */
                    std::vector<std::string> GetReserveIpIds() const;

                    /**
                     * 设置<p>内网保留IP唯一ID 列表</p>
                     * @param _reserveIpIds <p>内网保留IP唯一ID 列表</p>
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
                     * 获取<p>过滤条件，参数不支持同时指定ReserveIpIds和Filters。</p><p>reserve-ip-id  - String - （过滤条件）内网保留 IP唯一 ID，形如：rsvip-pvqgv9vi。<br>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。<br>subnet-id - String - （过滤条件）所属子网实例ID，形如：subnet-f49l6u0z。<br>reserve-address-ip - String - （过滤条件）内网保留 IP 地址，形如：192.168.0.10。<br>ip-type - String - （过滤条件）业务类型 ipType，0。<br>name - String - （过滤条件）名称。<br>state - String - （过滤条件）状态，可选值：Bind， UnBind。<br>resource-id - String - （过滤条件）绑定的实例资源，形如：eni-059qmnif。<br>tag-key - String -（过滤条件）按照标签键进行过滤。<br>tag:tag-key - String - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。</p>
                     * @return Filters <p>过滤条件，参数不支持同时指定ReserveIpIds和Filters。</p><p>reserve-ip-id  - String - （过滤条件）内网保留 IP唯一 ID，形如：rsvip-pvqgv9vi。<br>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。<br>subnet-id - String - （过滤条件）所属子网实例ID，形如：subnet-f49l6u0z。<br>reserve-address-ip - String - （过滤条件）内网保留 IP 地址，形如：192.168.0.10。<br>ip-type - String - （过滤条件）业务类型 ipType，0。<br>name - String - （过滤条件）名称。<br>state - String - （过滤条件）状态，可选值：Bind， UnBind。<br>resource-id - String - （过滤条件）绑定的实例资源，形如：eni-059qmnif。<br>tag-key - String -（过滤条件）按照标签键进行过滤。<br>tag:tag-key - String - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，参数不支持同时指定ReserveIpIds和Filters。</p><p>reserve-ip-id  - String - （过滤条件）内网保留 IP唯一 ID，形如：rsvip-pvqgv9vi。<br>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。<br>subnet-id - String - （过滤条件）所属子网实例ID，形如：subnet-f49l6u0z。<br>reserve-address-ip - String - （过滤条件）内网保留 IP 地址，形如：192.168.0.10。<br>ip-type - String - （过滤条件）业务类型 ipType，0。<br>name - String - （过滤条件）名称。<br>state - String - （过滤条件）状态，可选值：Bind， UnBind。<br>resource-id - String - （过滤条件）绑定的实例资源，形如：eni-059qmnif。<br>tag-key - String -（过滤条件）按照标签键进行过滤。<br>tag:tag-key - String - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。</p>
                     * @param _filters <p>过滤条件，参数不支持同时指定ReserveIpIds和Filters。</p><p>reserve-ip-id  - String - （过滤条件）内网保留 IP唯一 ID，形如：rsvip-pvqgv9vi。<br>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。<br>subnet-id - String - （过滤条件）所属子网实例ID，形如：subnet-f49l6u0z。<br>reserve-address-ip - String - （过滤条件）内网保留 IP 地址，形如：192.168.0.10。<br>ip-type - String - （过滤条件）业务类型 ipType，0。<br>name - String - （过滤条件）名称。<br>state - String - （过滤条件）状态，可选值：Bind， UnBind。<br>resource-id - String - （过滤条件）绑定的实例资源，形如：eni-059qmnif。<br>tag-key - String -（过滤条件）按照标签键进行过滤。<br>tag:tag-key - String - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。</p>
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
                     * 获取<p>偏移量。</p>
                     * @return Offset <p>偏移量。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量。</p>
                     * @param _offset <p>偏移量。</p>
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
                     * 获取<p>请求对象个数。</p>
                     * @return Limit <p>请求对象个数。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>请求对象个数。</p>
                     * @param _limit <p>请求对象个数。</p>
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
                     * <p>内网保留IP唯一ID 列表</p>
                     */
                    std::vector<std::string> m_reserveIpIds;
                    bool m_reserveIpIdsHasBeenSet;

                    /**
                     * <p>过滤条件，参数不支持同时指定ReserveIpIds和Filters。</p><p>reserve-ip-id  - String - （过滤条件）内网保留 IP唯一 ID，形如：rsvip-pvqgv9vi。<br>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。<br>subnet-id - String - （过滤条件）所属子网实例ID，形如：subnet-f49l6u0z。<br>reserve-address-ip - String - （过滤条件）内网保留 IP 地址，形如：192.168.0.10。<br>ip-type - String - （过滤条件）业务类型 ipType，0。<br>name - String - （过滤条件）名称。<br>state - String - （过滤条件）状态，可选值：Bind， UnBind。<br>resource-id - String - （过滤条件）绑定的实例资源，形如：eni-059qmnif。<br>tag-key - String -（过滤条件）按照标签键进行过滤。<br>tag:tag-key - String - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>偏移量。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>请求对象个数。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBERESERVEIPADDRESSESREQUEST_H_
