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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYROUTESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYROUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ListFilter.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeCloudNativeAPIGatewayRoutes请求参数结构体
                */
                class DescribeCloudNativeAPIGatewayRoutesRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayRoutesRequest();
                    ~DescribeCloudNativeAPIGatewayRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关ID
                     * @return GatewayId 网关ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关ID
                     * @param _gatewayId 网关ID
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取翻页单页查询限制数量[0,1000], 默认值0
                     * @return Limit 翻页单页查询限制数量[0,1000], 默认值0
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置翻页单页查询限制数量[0,1000], 默认值0
                     * @param _limit 翻页单页查询限制数量[0,1000], 默认值0
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
                     * 获取翻页单页偏移量，默认值0
                     * @return Offset 翻页单页偏移量，默认值0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置翻页单页偏移量，默认值0
                     * @param _offset 翻页单页偏移量，默认值0
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
                     * 获取服务的名字，精确匹配
                     * @return ServiceName 服务的名字，精确匹配
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务的名字，精确匹配
                     * @param _serviceName 服务的名字，精确匹配
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取路由的名字，精确匹配
                     * @return RouteName 路由的名字，精确匹配
                     * 
                     */
                    std::string GetRouteName() const;

                    /**
                     * 设置路由的名字，精确匹配
                     * @param _routeName 路由的名字，精确匹配
                     * 
                     */
                    void SetRouteName(const std::string& _routeName);

                    /**
                     * 判断参数 RouteName 是否已赋值
                     * @return RouteName 是否已赋值
                     * 
                     */
                    bool RouteNameHasBeenSet() const;

                    /**
                     * 获取过滤条件，多个过滤条件之间是与的关系，支持 name, path, host, method, service, protocol
                     * @return Filters 过滤条件，多个过滤条件之间是与的关系，支持 name, path, host, method, service, protocol
                     * 
                     */
                    std::vector<ListFilter> GetFilters() const;

                    /**
                     * 设置过滤条件，多个过滤条件之间是与的关系，支持 name, path, host, method, service, protocol
                     * @param _filters 过滤条件，多个过滤条件之间是与的关系，支持 name, path, host, method, service, protocol
                     * 
                     */
                    void SetFilters(const std::vector<ListFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 网关ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 翻页单页查询限制数量[0,1000], 默认值0
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 翻页单页偏移量，默认值0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 服务的名字，精确匹配
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 路由的名字，精确匹配
                     */
                    std::string m_routeName;
                    bool m_routeNameHasBeenSet;

                    /**
                     * 过滤条件，多个过滤条件之间是与的关系，支持 name, path, host, method, service, protocol
                     */
                    std::vector<ListFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYROUTESREQUEST_H_
