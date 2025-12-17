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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTEPOLICIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTEPOLICIESREQUEST_H_

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
                * DescribeRoutePolicies请求参数结构体
                */
                class DescribeRoutePoliciesRequest : public AbstractModel
                {
                public:
                    DescribeRoutePoliciesRequest();
                    ~DescribeRoutePoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路由策略实例唯一ID。形如：rrp-q7ywkx31。每次请求的实例的上限为100。参数不支持同时指定RoutePolicyIds和Filters。
                     * @return RoutePolicyIds 路由策略实例唯一ID。形如：rrp-q7ywkx31。每次请求的实例的上限为100。参数不支持同时指定RoutePolicyIds和Filters。
                     * 
                     */
                    std::vector<std::string> GetRoutePolicyIds() const;

                    /**
                     * 设置路由策略实例唯一ID。形如：rrp-q7ywkx31。每次请求的实例的上限为100。参数不支持同时指定RoutePolicyIds和Filters。
                     * @param _routePolicyIds 路由策略实例唯一ID。形如：rrp-q7ywkx31。每次请求的实例的上限为100。参数不支持同时指定RoutePolicyIds和Filters。
                     * 
                     */
                    void SetRoutePolicyIds(const std::vector<std::string>& _routePolicyIds);

                    /**
                     * 判断参数 RoutePolicyIds 是否已赋值
                     * @return RoutePolicyIds 是否已赋值
                     * 
                     */
                    bool RoutePolicyIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，不支持同时指定RoutePolicyIds和Filters参数。
支持的过滤条件如下：
<li>route-policy-name：路由策略实例名称，支持模糊查询。</li>
<li>route-policy-description：路由策略实例描述，支持模糊查询。</li>
<li>route-policy-id ：路由策略实例ID，例如：rrp-q7ywkx3w。</li>

  **说明：**若同一个过滤条件（Filter）存在多个Values，则同一Filter下Values间的关系为逻辑或（OR）关系；若存在多个过滤条件（Filter），Filter之间的关系为逻辑与（AND）关系。
                     * @return Filters 过滤条件，不支持同时指定RoutePolicyIds和Filters参数。
支持的过滤条件如下：
<li>route-policy-name：路由策略实例名称，支持模糊查询。</li>
<li>route-policy-description：路由策略实例描述，支持模糊查询。</li>
<li>route-policy-id ：路由策略实例ID，例如：rrp-q7ywkx3w。</li>

  **说明：**若同一个过滤条件（Filter）存在多个Values，则同一Filter下Values间的关系为逻辑或（OR）关系；若存在多个过滤条件（Filter），Filter之间的关系为逻辑与（AND）关系。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，不支持同时指定RoutePolicyIds和Filters参数。
支持的过滤条件如下：
<li>route-policy-name：路由策略实例名称，支持模糊查询。</li>
<li>route-policy-description：路由策略实例描述，支持模糊查询。</li>
<li>route-policy-id ：路由策略实例ID，例如：rrp-q7ywkx3w。</li>

  **说明：**若同一个过滤条件（Filter）存在多个Values，则同一Filter下Values间的关系为逻辑或（OR）关系；若存在多个过滤条件（Filter），Filter之间的关系为逻辑与（AND）关系。
                     * @param _filters 过滤条件，不支持同时指定RoutePolicyIds和Filters参数。
支持的过滤条件如下：
<li>route-policy-name：路由策略实例名称，支持模糊查询。</li>
<li>route-policy-description：路由策略实例描述，支持模糊查询。</li>
<li>route-policy-id ：路由策略实例ID，例如：rrp-q7ywkx3w。</li>

  **说明：**若同一个过滤条件（Filter）存在多个Values，则同一Filter下Values间的关系为逻辑或（OR）关系；若存在多个过滤条件（Filter），Filter之间的关系为逻辑与（AND）关系。
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
                    std::string GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const std::string& _offset);

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
                    std::string GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取是否返回路由策略条目。默认为False。当该参数为False时，仍然会返回空的返回空的RoutePolicyEntrySet。
                     * @return NeedRoutePolicyEntry 是否返回路由策略条目。默认为False。当该参数为False时，仍然会返回空的返回空的RoutePolicyEntrySet。
                     * 
                     */
                    bool GetNeedRoutePolicyEntry() const;

                    /**
                     * 设置是否返回路由策略条目。默认为False。当该参数为False时，仍然会返回空的返回空的RoutePolicyEntrySet。
                     * @param _needRoutePolicyEntry 是否返回路由策略条目。默认为False。当该参数为False时，仍然会返回空的返回空的RoutePolicyEntrySet。
                     * 
                     */
                    void SetNeedRoutePolicyEntry(const bool& _needRoutePolicyEntry);

                    /**
                     * 判断参数 NeedRoutePolicyEntry 是否已赋值
                     * @return NeedRoutePolicyEntry 是否已赋值
                     * 
                     */
                    bool NeedRoutePolicyEntryHasBeenSet() const;

                private:

                    /**
                     * 路由策略实例唯一ID。形如：rrp-q7ywkx31。每次请求的实例的上限为100。参数不支持同时指定RoutePolicyIds和Filters。
                     */
                    std::vector<std::string> m_routePolicyIds;
                    bool m_routePolicyIdsHasBeenSet;

                    /**
                     * 过滤条件，不支持同时指定RoutePolicyIds和Filters参数。
支持的过滤条件如下：
<li>route-policy-name：路由策略实例名称，支持模糊查询。</li>
<li>route-policy-description：路由策略实例描述，支持模糊查询。</li>
<li>route-policy-id ：路由策略实例ID，例如：rrp-q7ywkx3w。</li>

  **说明：**若同一个过滤条件（Filter）存在多个Values，则同一Filter下Values间的关系为逻辑或（OR）关系；若存在多个过滤条件（Filter），Filter之间的关系为逻辑与（AND）关系。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 是否返回路由策略条目。默认为False。当该参数为False时，仍然会返回空的返回空的RoutePolicyEntrySet。
                     */
                    bool m_needRoutePolicyEntry;
                    bool m_needRoutePolicyEntryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTEPOLICIESREQUEST_H_
