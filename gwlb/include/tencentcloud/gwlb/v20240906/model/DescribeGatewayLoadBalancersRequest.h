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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBEGATEWAYLOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBEGATEWAYLOADBALANCERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gwlb/v20240906/model/Filter.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * DescribeGatewayLoadBalancers请求参数结构体
                */
                class DescribeGatewayLoadBalancersRequest : public AbstractModel
                {
                public:
                    DescribeGatewayLoadBalancersRequest();
                    ~DescribeGatewayLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关负载均衡实例ID。支持批量筛选的实例ID数量上限为20个。</p>
                     * @return LoadBalancerIds <p>网关负载均衡实例ID。支持批量筛选的实例ID数量上限为20个。</p>
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置<p>网关负载均衡实例ID。支持批量筛选的实例ID数量上限为20个。</p>
                     * @param _loadBalancerIds <p>网关负载均衡实例ID。支持批量筛选的实例ID数量上限为20个。</p>
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取<p>一次批量返回网关负载均衡实例的数量，默认为20，最大值为100。</p>
                     * @return Limit <p>一次批量返回网关负载均衡实例的数量，默认为20，最大值为100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>一次批量返回网关负载均衡实例的数量，默认为20，最大值为100。</p>
                     * @param _limit <p>一次批量返回网关负载均衡实例的数量，默认为20，最大值为100。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>返回网关负载均衡实例列表的起始偏移量，默认0。</p>
                     * @return Offset <p>返回网关负载均衡实例列表的起始偏移量，默认0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>返回网关负载均衡实例列表的起始偏移量，默认0。</p>
                     * @param _offset <p>返回网关负载均衡实例列表的起始偏移量，默认0。</p>
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
                     * 获取<p>查询负载均衡详细信息列表的过滤条件，每次请求的Filters的上限为10，Filter.Values的上限为100。Filter.Name和Filter.Values皆为必填项。详细的过滤条件如下：- VpcId - String - 是否必填：否 - （过滤条件）按照网关负载均衡实例所属的私有网络过滤，如“vpc-bhqk****”。- Vips - String  - 是否必填：否 - （过滤条件）按照网关负载均衡实例的VIP进行过滤，如“10.1.1.1”- tag:tag-key - String - 是否必填：否 - （过滤条件）按照GWLB标签键值对进行过滤，tag-key使用具体的标签键进行替换。</p>
                     * @return Filters <p>查询负载均衡详细信息列表的过滤条件，每次请求的Filters的上限为10，Filter.Values的上限为100。Filter.Name和Filter.Values皆为必填项。详细的过滤条件如下：- VpcId - String - 是否必填：否 - （过滤条件）按照网关负载均衡实例所属的私有网络过滤，如“vpc-bhqk****”。- Vips - String  - 是否必填：否 - （过滤条件）按照网关负载均衡实例的VIP进行过滤，如“10.1.1.1”- tag:tag-key - String - 是否必填：否 - （过滤条件）按照GWLB标签键值对进行过滤，tag-key使用具体的标签键进行替换。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>查询负载均衡详细信息列表的过滤条件，每次请求的Filters的上限为10，Filter.Values的上限为100。Filter.Name和Filter.Values皆为必填项。详细的过滤条件如下：- VpcId - String - 是否必填：否 - （过滤条件）按照网关负载均衡实例所属的私有网络过滤，如“vpc-bhqk****”。- Vips - String  - 是否必填：否 - （过滤条件）按照网关负载均衡实例的VIP进行过滤，如“10.1.1.1”- tag:tag-key - String - 是否必填：否 - （过滤条件）按照GWLB标签键值对进行过滤，tag-key使用具体的标签键进行替换。</p>
                     * @param _filters <p>查询负载均衡详细信息列表的过滤条件，每次请求的Filters的上限为10，Filter.Values的上限为100。Filter.Name和Filter.Values皆为必填项。详细的过滤条件如下：- VpcId - String - 是否必填：否 - （过滤条件）按照网关负载均衡实例所属的私有网络过滤，如“vpc-bhqk****”。- Vips - String  - 是否必填：否 - （过滤条件）按照网关负载均衡实例的VIP进行过滤，如“10.1.1.1”- tag:tag-key - String - 是否必填：否 - （过滤条件）按照GWLB标签键值对进行过滤，tag-key使用具体的标签键进行替换。</p>
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
                     * 获取<p>搜索字段，模糊匹配名称、VIP。</p>
                     * @return SearchKey <p>搜索字段，模糊匹配名称、VIP。</p>
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置<p>搜索字段，模糊匹配名称、VIP。</p>
                     * @param _searchKey <p>搜索字段，模糊匹配名称、VIP。</p>
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * <p>网关负载均衡实例ID。支持批量筛选的实例ID数量上限为20个。</p>
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * <p>一次批量返回网关负载均衡实例的数量，默认为20，最大值为100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>返回网关负载均衡实例列表的起始偏移量，默认0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>查询负载均衡详细信息列表的过滤条件，每次请求的Filters的上限为10，Filter.Values的上限为100。Filter.Name和Filter.Values皆为必填项。详细的过滤条件如下：- VpcId - String - 是否必填：否 - （过滤条件）按照网关负载均衡实例所属的私有网络过滤，如“vpc-bhqk****”。- Vips - String  - 是否必填：否 - （过滤条件）按照网关负载均衡实例的VIP进行过滤，如“10.1.1.1”- tag:tag-key - String - 是否必填：否 - （过滤条件）按照GWLB标签键值对进行过滤，tag-key使用具体的标签键进行替换。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>搜索字段，模糊匹配名称、VIP。</p>
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBEGATEWAYLOADBALANCERSREQUEST_H_
