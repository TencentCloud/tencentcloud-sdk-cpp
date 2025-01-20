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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEUSEDIPADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEUSEDIPADDRESSREQUEST_H_

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
                * DescribeUsedIpAddress请求参数结构体
                */
                class DescribeUsedIpAddressRequest : public AbstractModel
                {
                public:
                    DescribeUsedIpAddressRequest();
                    ~DescribeUsedIpAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC实例ID。
                     * @return VpcId VPC实例ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。
                     * @param _vpcId VPC实例ID。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网实例ID。
                     * @return SubnetId 子网实例ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网实例ID。
                     * @param _subnetId 子网实例ID。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取查询是否占用的ip列表，ip需要在vpc或子网内。最多允许一次查询100个IP。
                     * @return IpAddresses 查询是否占用的ip列表，ip需要在vpc或子网内。最多允许一次查询100个IP。
                     * 
                     */
                    std::vector<std::string> GetIpAddresses() const;

                    /**
                     * 设置查询是否占用的ip列表，ip需要在vpc或子网内。最多允许一次查询100个IP。
                     * @param _ipAddresses 查询是否占用的ip列表，ip需要在vpc或子网内。最多允许一次查询100个IP。
                     * 
                     */
                    void SetIpAddresses(const std::vector<std::string>& _ipAddresses);

                    /**
                     * 判断参数 IpAddresses 是否已赋值
                     * @return IpAddresses 是否已赋值
                     * 
                     */
                    bool IpAddressesHasBeenSet() const;

                    /**
                     * 获取过滤条件，不支持同时指定IpAddresses和Filters参数。 支持的过滤条件如下： <li>ip-addresses：IP地址。</li> <li>resource-id：资源ID。</li>
                     * @return Filters 过滤条件，不支持同时指定IpAddresses和Filters参数。 支持的过滤条件如下： <li>ip-addresses：IP地址。</li> <li>resource-id：资源ID。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，不支持同时指定IpAddresses和Filters参数。 支持的过滤条件如下： <li>ip-addresses：IP地址。</li> <li>resource-id：资源ID。</li>
                     * @param _filters 过滤条件，不支持同时指定IpAddresses和Filters参数。 支持的过滤条件如下： <li>ip-addresses：IP地址。</li> <li>resource-id：资源ID。</li>
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
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网实例ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 查询是否占用的ip列表，ip需要在vpc或子网内。最多允许一次查询100个IP。
                     */
                    std::vector<std::string> m_ipAddresses;
                    bool m_ipAddressesHasBeenSet;

                    /**
                     * 过滤条件，不支持同时指定IpAddresses和Filters参数。 支持的过滤条件如下： <li>ip-addresses：IP地址。</li> <li>resource-id：资源ID。</li>
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

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEUSEDIPADDRESSREQUEST_H_
