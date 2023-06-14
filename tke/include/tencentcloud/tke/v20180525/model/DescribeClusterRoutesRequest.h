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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERROUTESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERROUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Filter.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterRoutes请求参数结构体
                */
                class DescribeClusterRoutesRequest : public AbstractModel
                {
                public:
                    DescribeClusterRoutesRequest();
                    ~DescribeClusterRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路由表名称。
                     * @return RouteTableName 路由表名称。
                     * 
                     */
                    std::string GetRouteTableName() const;

                    /**
                     * 设置路由表名称。
                     * @param _routeTableName 路由表名称。
                     * 
                     */
                    void SetRouteTableName(const std::string& _routeTableName);

                    /**
                     * 判断参数 RouteTableName 是否已赋值
                     * @return RouteTableName 是否已赋值
                     * 
                     */
                    bool RouteTableNameHasBeenSet() const;

                    /**
                     * 获取过滤条件,当前只支持按照单个条件GatewayIP进行过滤（可选）
                     * @return Filters 过滤条件,当前只支持按照单个条件GatewayIP进行过滤（可选）
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件,当前只支持按照单个条件GatewayIP进行过滤（可选）
                     * @param _filters 过滤条件,当前只支持按照单个条件GatewayIP进行过滤（可选）
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 路由表名称。
                     */
                    std::string m_routeTableName;
                    bool m_routeTableNameHasBeenSet;

                    /**
                     * 过滤条件,当前只支持按照单个条件GatewayIP进行过滤（可选）
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERROUTESREQUEST_H_
