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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNROUTESREQUEST_H_

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
                * DescribeCcnRoutes请求参数结构体
                */
                class DescribeCcnRoutesRequest : public AbstractModel
                {
                public:
                    DescribeCcnRoutesRequest();
                    ~DescribeCcnRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CCN实例ID，形如：`ccn-gree226l`。
                     * @return CcnId CCN实例ID，形如：`ccn-gree226l`。
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置CCN实例ID，形如：`ccn-gree226l`。
                     * @param _ccnId CCN实例ID，形如：`ccn-gree226l`。
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取CCN路由策略唯一ID，形如：`ccnr-f49l6u0z`。
                     * @return RouteIds CCN路由策略唯一ID，形如：`ccnr-f49l6u0z`。
                     * 
                     */
                    std::vector<std::string> GetRouteIds() const;

                    /**
                     * 设置CCN路由策略唯一ID，形如：`ccnr-f49l6u0z`。
                     * @param _routeIds CCN路由策略唯一ID，形如：`ccnr-f49l6u0z`。
                     * 
                     */
                    void SetRouteIds(const std::vector<std::string>& _routeIds);

                    /**
                     * 判断参数 RouteIds 是否已赋值
                     * @return RouteIds 是否已赋值
                     * 
                     */
                    bool RouteIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，参数不支持同时指定RouteIds和Filters。
<li>route-id - String -（过滤条件）路由策略ID。</li>
<li>cidr-block - String -（过滤条件）目的端。</li>
<li>instance-type - String -（过滤条件）下一跳类型。</li>
<li>instance-region - String -（过滤条件）下一跳所属地域。</li>
<li>instance-id - String -（过滤条件）下一跳实例ID。</li>
<li>route-table-id - String -（过滤条件）路由表ID列表，形如ccntr-1234edfr，可以根据路由表ID 过滤。</li>
                     * @return Filters 过滤条件，参数不支持同时指定RouteIds和Filters。
<li>route-id - String -（过滤条件）路由策略ID。</li>
<li>cidr-block - String -（过滤条件）目的端。</li>
<li>instance-type - String -（过滤条件）下一跳类型。</li>
<li>instance-region - String -（过滤条件）下一跳所属地域。</li>
<li>instance-id - String -（过滤条件）下一跳实例ID。</li>
<li>route-table-id - String -（过滤条件）路由表ID列表，形如ccntr-1234edfr，可以根据路由表ID 过滤。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定RouteIds和Filters。
<li>route-id - String -（过滤条件）路由策略ID。</li>
<li>cidr-block - String -（过滤条件）目的端。</li>
<li>instance-type - String -（过滤条件）下一跳类型。</li>
<li>instance-region - String -（过滤条件）下一跳所属地域。</li>
<li>instance-id - String -（过滤条件）下一跳实例ID。</li>
<li>route-table-id - String -（过滤条件）路由表ID列表，形如ccntr-1234edfr，可以根据路由表ID 过滤。</li>
                     * @param _filters 过滤条件，参数不支持同时指定RouteIds和Filters。
<li>route-id - String -（过滤条件）路由策略ID。</li>
<li>cidr-block - String -（过滤条件）目的端。</li>
<li>instance-type - String -（过滤条件）下一跳类型。</li>
<li>instance-region - String -（过滤条件）下一跳所属地域。</li>
<li>instance-id - String -（过滤条件）下一跳实例ID。</li>
<li>route-table-id - String -（过滤条件）路由表ID列表，形如ccntr-1234edfr，可以根据路由表ID 过滤。</li>
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取返回数量
                     * @return Limit 返回数量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量
                     * @param _limit 返回数量
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
                     * CCN实例ID，形如：`ccn-gree226l`。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * CCN路由策略唯一ID，形如：`ccnr-f49l6u0z`。
                     */
                    std::vector<std::string> m_routeIds;
                    bool m_routeIdsHasBeenSet;

                    /**
                     * 过滤条件，参数不支持同时指定RouteIds和Filters。
<li>route-id - String -（过滤条件）路由策略ID。</li>
<li>cidr-block - String -（过滤条件）目的端。</li>
<li>instance-type - String -（过滤条件）下一跳类型。</li>
<li>instance-region - String -（过滤条件）下一跳所属地域。</li>
<li>instance-id - String -（过滤条件）下一跳实例ID。</li>
<li>route-table-id - String -（过滤条件）路由表ID列表，形如ccntr-1234edfr，可以根据路由表ID 过滤。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNROUTESREQUEST_H_
