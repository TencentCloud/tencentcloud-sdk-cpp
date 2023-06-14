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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEROUTEPOLICIESREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEROUTEPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmvpc/v20180625/model/Filter.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
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
                     * 获取路由表实例ID，例如：rtb-afg8md3c。
                     * @return RouteTableId 路由表实例ID，例如：rtb-afg8md3c。
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置路由表实例ID，例如：rtb-afg8md3c。
                     * @param _routeTableId 路由表实例ID，例如：rtb-afg8md3c。
                     * 
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取路由策略实例ID，例如：rti-azd4dt1c。
                     * @return RoutePolicyIds 路由策略实例ID，例如：rti-azd4dt1c。
                     * 
                     */
                    std::vector<std::string> GetRoutePolicyIds() const;

                    /**
                     * 设置路由策略实例ID，例如：rti-azd4dt1c。
                     * @param _routePolicyIds 路由策略实例ID，例如：rti-azd4dt1c。
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
                     * 获取过滤条件，参数不支持同时指定RoutePolicyIds和Filters。
route-table-id - String - （过滤条件）路由表实例ID。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
route-policy-id - String - （过滤条件）路由策略ID。
route-policy-description-like - String -（过滤条件）路由项备注。
route-policy-type - String - （过滤条件）路由项策略类型。
destination-cidr-like - String - （过滤条件）路由项目的地址。
gateway-id-like - String - （过滤条件）路由项下一跳网关。
gateway-type - String - （过滤条件）路由项下一条网关类型。
enable - Bool - （过滤条件）路由策略是否启用。
                     * @return Filters 过滤条件，参数不支持同时指定RoutePolicyIds和Filters。
route-table-id - String - （过滤条件）路由表实例ID。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
route-policy-id - String - （过滤条件）路由策略ID。
route-policy-description-like - String -（过滤条件）路由项备注。
route-policy-type - String - （过滤条件）路由项策略类型。
destination-cidr-like - String - （过滤条件）路由项目的地址。
gateway-id-like - String - （过滤条件）路由项下一跳网关。
gateway-type - String - （过滤条件）路由项下一条网关类型。
enable - Bool - （过滤条件）路由策略是否启用。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定RoutePolicyIds和Filters。
route-table-id - String - （过滤条件）路由表实例ID。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
route-policy-id - String - （过滤条件）路由策略ID。
route-policy-description-like - String -（过滤条件）路由项备注。
route-policy-type - String - （过滤条件）路由项策略类型。
destination-cidr-like - String - （过滤条件）路由项目的地址。
gateway-id-like - String - （过滤条件）路由项下一跳网关。
gateway-type - String - （过滤条件）路由项下一条网关类型。
enable - Bool - （过滤条件）路由策略是否启用。
                     * @param _filters 过滤条件，参数不支持同时指定RoutePolicyIds和Filters。
route-table-id - String - （过滤条件）路由表实例ID。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
route-policy-id - String - （过滤条件）路由策略ID。
route-policy-description-like - String -（过滤条件）路由项备注。
route-policy-type - String - （过滤条件）路由项策略类型。
destination-cidr-like - String - （过滤条件）路由项目的地址。
gateway-id-like - String - （过滤条件）路由项下一跳网关。
gateway-type - String - （过滤条件）路由项下一条网关类型。
enable - Bool - （过滤条件）路由策略是否启用。
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
                     * 获取初始行的偏移量，默认为0。
                     * @return Offset 初始行的偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置初始行的偏移量，默认为0。
                     * @param _offset 初始行的偏移量，默认为0。
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
                     * 获取每页行数，默认为20。
                     * @return Limit 每页行数，默认为20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页行数，默认为20。
                     * @param _limit 每页行数，默认为20。
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
                     * 路由表实例ID，例如：rtb-afg8md3c。
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * 路由策略实例ID，例如：rti-azd4dt1c。
                     */
                    std::vector<std::string> m_routePolicyIds;
                    bool m_routePolicyIdsHasBeenSet;

                    /**
                     * 过滤条件，参数不支持同时指定RoutePolicyIds和Filters。
route-table-id - String - （过滤条件）路由表实例ID。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
route-policy-id - String - （过滤条件）路由策略ID。
route-policy-description-like - String -（过滤条件）路由项备注。
route-policy-type - String - （过滤条件）路由项策略类型。
destination-cidr-like - String - （过滤条件）路由项目的地址。
gateway-id-like - String - （过滤条件）路由项下一跳网关。
gateway-type - String - （过滤条件）路由项下一条网关类型。
enable - Bool - （过滤条件）路由策略是否启用。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 初始行的偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页行数，默认为20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEROUTEPOLICIESREQUEST_H_
