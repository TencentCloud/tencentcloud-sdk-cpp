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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEHAVIPSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEHAVIPSREQUEST_H_

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
                * DescribeHaVips请求参数结构体
                */
                class DescribeHaVipsRequest : public AbstractModel
                {
                public:
                    DescribeHaVipsRequest();
                    ~DescribeHaVipsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><code>HAVIP</code>唯一<code>ID</code>，形如：<code>havip-9o233uri</code>。</p>
                     * @return HaVipIds <p><code>HAVIP</code>唯一<code>ID</code>，形如：<code>havip-9o233uri</code>。</p>
                     * 
                     */
                    std::vector<std::string> GetHaVipIds() const;

                    /**
                     * 设置<p><code>HAVIP</code>唯一<code>ID</code>，形如：<code>havip-9o233uri</code>。</p>
                     * @param _haVipIds <p><code>HAVIP</code>唯一<code>ID</code>，形如：<code>havip-9o233uri</code>。</p>
                     * 
                     */
                    void SetHaVipIds(const std::vector<std::string>& _haVipIds);

                    /**
                     * 判断参数 HaVipIds 是否已赋值
                     * @return HaVipIds 是否已赋值
                     * 
                     */
                    bool HaVipIdsHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件，参数不支持同时指定<code>HaVipIds</code>和<code>Filters</code>。Filter 数量限制为10个，以及单Filter 的value值限制为5个。<li>havip-id - String - <code>HAVIP</code>唯一<code>ID</code>，形如：<code>havip-9o233uri</code>。</li><li>havip-name - String - <code>HAVIP</code>名称。</li><li>vpc-id - String - <code>HAVIP</code>所在私有网络<code>ID</code>。</li><li>subnet-id - String - <code>HAVIP</code>所在子网<code>ID</code>。</li><li>vip - String - <code>HAVIP</code>的地址<code>VIP</code>。</li><li>address-ip - String - <code>HAVIP</code>绑定的弹性公网<code>IP</code>。</li><li>havip-association.instance-id - String - <code>HAVIP</code>绑定的子机或网卡。</li><li>havip-association.instance-type - String - <code>HAVIP</code>绑定的类型，取值:CVM, ENI。</li><li>check-associate - Bool - 是否开启HaVip飘移时校验绑定的子机或网卡。</li><li>cdc-id - String - CDC实例ID。</li></p><li>type - String - HAVIP类型。取值: NORMAL(普通); GWLB(网关负载均衡); OPTIMIZATION(优化模式)。</li><li>termination-protection - String - 删除保护。取值: true; false。</li><li>traffic-protection - String - 流量保护。取值: true; false。</li>
                     * @return Filters <p>过滤条件，参数不支持同时指定<code>HaVipIds</code>和<code>Filters</code>。Filter 数量限制为10个，以及单Filter 的value值限制为5个。<li>havip-id - String - <code>HAVIP</code>唯一<code>ID</code>，形如：<code>havip-9o233uri</code>。</li><li>havip-name - String - <code>HAVIP</code>名称。</li><li>vpc-id - String - <code>HAVIP</code>所在私有网络<code>ID</code>。</li><li>subnet-id - String - <code>HAVIP</code>所在子网<code>ID</code>。</li><li>vip - String - <code>HAVIP</code>的地址<code>VIP</code>。</li><li>address-ip - String - <code>HAVIP</code>绑定的弹性公网<code>IP</code>。</li><li>havip-association.instance-id - String - <code>HAVIP</code>绑定的子机或网卡。</li><li>havip-association.instance-type - String - <code>HAVIP</code>绑定的类型，取值:CVM, ENI。</li><li>check-associate - Bool - 是否开启HaVip飘移时校验绑定的子机或网卡。</li><li>cdc-id - String - CDC实例ID。</li></p><li>type - String - HAVIP类型。取值: NORMAL(普通); GWLB(网关负载均衡); OPTIMIZATION(优化模式)。</li><li>termination-protection - String - 删除保护。取值: true; false。</li><li>traffic-protection - String - 流量保护。取值: true; false。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，参数不支持同时指定<code>HaVipIds</code>和<code>Filters</code>。Filter 数量限制为10个，以及单Filter 的value值限制为5个。<li>havip-id - String - <code>HAVIP</code>唯一<code>ID</code>，形如：<code>havip-9o233uri</code>。</li><li>havip-name - String - <code>HAVIP</code>名称。</li><li>vpc-id - String - <code>HAVIP</code>所在私有网络<code>ID</code>。</li><li>subnet-id - String - <code>HAVIP</code>所在子网<code>ID</code>。</li><li>vip - String - <code>HAVIP</code>的地址<code>VIP</code>。</li><li>address-ip - String - <code>HAVIP</code>绑定的弹性公网<code>IP</code>。</li><li>havip-association.instance-id - String - <code>HAVIP</code>绑定的子机或网卡。</li><li>havip-association.instance-type - String - <code>HAVIP</code>绑定的类型，取值:CVM, ENI。</li><li>check-associate - Bool - 是否开启HaVip飘移时校验绑定的子机或网卡。</li><li>cdc-id - String - CDC实例ID。</li></p><li>type - String - HAVIP类型。取值: NORMAL(普通); GWLB(网关负载均衡); OPTIMIZATION(优化模式)。</li><li>termination-protection - String - 删除保护。取值: true; false。</li><li>traffic-protection - String - 流量保护。取值: true; false。</li>
                     * @param _filters <p>过滤条件，参数不支持同时指定<code>HaVipIds</code>和<code>Filters</code>。Filter 数量限制为10个，以及单Filter 的value值限制为5个。<li>havip-id - String - <code>HAVIP</code>唯一<code>ID</code>，形如：<code>havip-9o233uri</code>。</li><li>havip-name - String - <code>HAVIP</code>名称。</li><li>vpc-id - String - <code>HAVIP</code>所在私有网络<code>ID</code>。</li><li>subnet-id - String - <code>HAVIP</code>所在子网<code>ID</code>。</li><li>vip - String - <code>HAVIP</code>的地址<code>VIP</code>。</li><li>address-ip - String - <code>HAVIP</code>绑定的弹性公网<code>IP</code>。</li><li>havip-association.instance-id - String - <code>HAVIP</code>绑定的子机或网卡。</li><li>havip-association.instance-type - String - <code>HAVIP</code>绑定的类型，取值:CVM, ENI。</li><li>check-associate - Bool - 是否开启HaVip飘移时校验绑定的子机或网卡。</li><li>cdc-id - String - CDC实例ID。</li></p><li>type - String - HAVIP类型。取值: NORMAL(普通); GWLB(网关负载均衡); OPTIMIZATION(优化模式)。</li><li>termination-protection - String - 删除保护。取值: true; false。</li><li>traffic-protection - String - 流量保护。取值: true; false。</li>
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
                     * 获取<p>偏移量，默认为0。</p>
                     * @return Offset <p>偏移量，默认为0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0。</p>
                     * @param _offset <p>偏移量，默认为0。</p>
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
                     * 获取<p>返回数量，默认为20，最大值为100。</p>
                     * @return Limit <p>返回数量，默认为20，最大值为100。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为20，最大值为100。</p>
                     * @param _limit <p>返回数量，默认为20，最大值为100。</p>
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
                     * <p><code>HAVIP</code>唯一<code>ID</code>，形如：<code>havip-9o233uri</code>。</p>
                     */
                    std::vector<std::string> m_haVipIds;
                    bool m_haVipIdsHasBeenSet;

                    /**
                     * <p>过滤条件，参数不支持同时指定<code>HaVipIds</code>和<code>Filters</code>。Filter 数量限制为10个，以及单Filter 的value值限制为5个。<li>havip-id - String - <code>HAVIP</code>唯一<code>ID</code>，形如：<code>havip-9o233uri</code>。</li><li>havip-name - String - <code>HAVIP</code>名称。</li><li>vpc-id - String - <code>HAVIP</code>所在私有网络<code>ID</code>。</li><li>subnet-id - String - <code>HAVIP</code>所在子网<code>ID</code>。</li><li>vip - String - <code>HAVIP</code>的地址<code>VIP</code>。</li><li>address-ip - String - <code>HAVIP</code>绑定的弹性公网<code>IP</code>。</li><li>havip-association.instance-id - String - <code>HAVIP</code>绑定的子机或网卡。</li><li>havip-association.instance-type - String - <code>HAVIP</code>绑定的类型，取值:CVM, ENI。</li><li>check-associate - Bool - 是否开启HaVip飘移时校验绑定的子机或网卡。</li><li>cdc-id - String - CDC实例ID。</li></p><li>type - String - HAVIP类型。取值: NORMAL(普通); GWLB(网关负载均衡); OPTIMIZATION(优化模式)。</li><li>termination-protection - String - 删除保护。取值: true; false。</li><li>traffic-protection - String - 流量保护。取值: true; false。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>偏移量，默认为0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认为20，最大值为100。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEHAVIPSREQUEST_H_
