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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEROUTETABLESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEROUTETABLESREQUEST_H_

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
                * DescribeRouteTables请求参数结构体
                */
                class DescribeRouteTablesRequest : public AbstractModel
                {
                public:
                    DescribeRouteTablesRequest();
                    ~DescribeRouteTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路由表实例ID，例如：rtb-azd4dt1c。
                     * @return RouteTableIds 路由表实例ID，例如：rtb-azd4dt1c。
                     * 
                     */
                    std::vector<std::string> GetRouteTableIds() const;

                    /**
                     * 设置路由表实例ID，例如：rtb-azd4dt1c。
                     * @param _routeTableIds 路由表实例ID，例如：rtb-azd4dt1c。
                     * 
                     */
                    void SetRouteTableIds(const std::vector<std::string>& _routeTableIds);

                    /**
                     * 判断参数 RouteTableIds 是否已赋值
                     * @return RouteTableIds 是否已赋值
                     * 
                     */
                    bool RouteTableIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，参数不支持同时指定RouteTableIds和Filters。
route-table-id - String - （过滤条件）路由表实例ID。
route-table-name - String - （过滤条件）路由表名称。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
association.main - String - （过滤条件）是否主路由表。
                     * @return Filters 过滤条件，参数不支持同时指定RouteTableIds和Filters。
route-table-id - String - （过滤条件）路由表实例ID。
route-table-name - String - （过滤条件）路由表名称。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
association.main - String - （过滤条件）是否主路由表。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定RouteTableIds和Filters。
route-table-id - String - （过滤条件）路由表实例ID。
route-table-name - String - （过滤条件）路由表名称。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
association.main - String - （过滤条件）是否主路由表。
                     * @param _filters 过滤条件，参数不支持同时指定RouteTableIds和Filters。
route-table-id - String - （过滤条件）路由表实例ID。
route-table-name - String - （过滤条件）路由表名称。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
association.main - String - （过滤条件）是否主路由表。
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
                     * 获取限数
                     * @return Limit 限数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限数
                     * @param _limit 限数
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取ECM 地域，传空或不传表示所有区域
                     * @return EcmRegion ECM 地域，传空或不传表示所有区域
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM 地域，传空或不传表示所有区域
                     * @param _ecmRegion ECM 地域，传空或不传表示所有区域
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                private:

                    /**
                     * 路由表实例ID，例如：rtb-azd4dt1c。
                     */
                    std::vector<std::string> m_routeTableIds;
                    bool m_routeTableIdsHasBeenSet;

                    /**
                     * 过滤条件，参数不支持同时指定RouteTableIds和Filters。
route-table-id - String - （过滤条件）路由表实例ID。
route-table-name - String - （过滤条件）路由表名称。
vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。
association.main - String - （过滤条件）是否主路由表。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * ECM 地域，传空或不传表示所有区域
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEROUTETABLESREQUEST_H_
