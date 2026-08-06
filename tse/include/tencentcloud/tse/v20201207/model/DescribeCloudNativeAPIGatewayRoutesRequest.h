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
                     * 获取<p>网关ID</p>
                     * @return GatewayId <p>网关ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关ID</p>
                     * @param _gatewayId <p>网关ID</p>
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
                     * 获取<p>翻页单页查询限制数量[0,1000], 默认值0</p>
                     * @return Limit <p>翻页单页查询限制数量[0,1000], 默认值0</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>翻页单页查询限制数量[0,1000], 默认值0</p>
                     * @param _limit <p>翻页单页查询限制数量[0,1000], 默认值0</p>
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
                     * 获取<p>翻页单页偏移量，默认值0</p>
                     * @return Offset <p>翻页单页偏移量，默认值0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>翻页单页偏移量，默认值0</p>
                     * @param _offset <p>翻页单页偏移量，默认值0</p>
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
                     * 获取<p>服务的名字，精确匹配</p>
                     * @return ServiceName <p>服务的名字，精确匹配</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>服务的名字，精确匹配</p>
                     * @param _serviceName <p>服务的名字，精确匹配</p>
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
                     * 获取<p>路由的名字，精确匹配</p>
                     * @return RouteName <p>路由的名字，精确匹配</p>
                     * 
                     */
                    std::string GetRouteName() const;

                    /**
                     * 设置<p>路由的名字，精确匹配</p>
                     * @param _routeName <p>路由的名字，精确匹配</p>
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
                     * 获取<p>过滤条件，多个过滤条件之间是与的关系，支持 name, path, host, method, service, protocol</p>
                     * @return Filters <p>过滤条件，多个过滤条件之间是与的关系，支持 name, path, host, method, service, protocol</p>
                     * 
                     */
                    std::vector<ListFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，多个过滤条件之间是与的关系，支持 name, path, host, method, service, protocol</p>
                     * @param _filters <p>过滤条件，多个过滤条件之间是与的关系，支持 name, path, host, method, service, protocol</p>
                     * 
                     */
                    void SetFilters(const std::vector<ListFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>路由类型</p>
                     * @return RouteTypes <p>路由类型</p>
                     * 
                     */
                    std::vector<std::string> GetRouteTypes() const;

                    /**
                     * 设置<p>路由类型</p>
                     * @param _routeTypes <p>路由类型</p>
                     * 
                     */
                    void SetRouteTypes(const std::vector<std::string>& _routeTypes);

                    /**
                     * 判断参数 RouteTypes 是否已赋值
                     * @return RouteTypes 是否已赋值
                     * 
                     */
                    bool RouteTypesHasBeenSet() const;

                    /**
                     * 获取<p>是否将灰度规则可能带来的路由排在原始路由前</p>
                     * @return GrayRoutesFirst <p>是否将灰度规则可能带来的路由排在原始路由前</p>
                     * 
                     */
                    bool GetGrayRoutesFirst() const;

                    /**
                     * 设置<p>是否将灰度规则可能带来的路由排在原始路由前</p>
                     * @param _grayRoutesFirst <p>是否将灰度规则可能带来的路由排在原始路由前</p>
                     * 
                     */
                    void SetGrayRoutesFirst(const bool& _grayRoutesFirst);

                    /**
                     * 判断参数 GrayRoutesFirst 是否已赋值
                     * @return GrayRoutesFirst 是否已赋值
                     * 
                     */
                    bool GrayRoutesFirstHasBeenSet() const;

                    /**
                     * 获取<p>排序字段</p>
                     * @return OrderField <p>排序字段</p>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置<p>排序字段</p>
                     * @param _orderField <p>排序字段</p>
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取<p>排序方式</p><p>枚举值：</p><ul><li>DESC： 降序</li><li>ASC： 升序</li></ul>
                     * @return OrderType <p>排序方式</p><p>枚举值：</p><ul><li>DESC： 降序</li><li>ASC： 升序</li></ul>
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置<p>排序方式</p><p>枚举值：</p><ul><li>DESC： 降序</li><li>ASC： 升序</li></ul>
                     * @param _orderType <p>排序方式</p><p>枚举值：</p><ul><li>DESC： 降序</li><li>ASC： 升序</li></ul>
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                private:

                    /**
                     * <p>网关ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>翻页单页查询限制数量[0,1000], 默认值0</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>翻页单页偏移量，默认值0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>服务的名字，精确匹配</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>路由的名字，精确匹配</p>
                     */
                    std::string m_routeName;
                    bool m_routeNameHasBeenSet;

                    /**
                     * <p>过滤条件，多个过滤条件之间是与的关系，支持 name, path, host, method, service, protocol</p>
                     */
                    std::vector<ListFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>路由类型</p>
                     */
                    std::vector<std::string> m_routeTypes;
                    bool m_routeTypesHasBeenSet;

                    /**
                     * <p>是否将灰度规则可能带来的路由排在原始路由前</p>
                     */
                    bool m_grayRoutesFirst;
                    bool m_grayRoutesFirstHasBeenSet;

                    /**
                     * <p>排序字段</p>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * <p>排序方式</p><p>枚举值：</p><ul><li>DESC： 降序</li><li>ASC： 升序</li></ul>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYROUTESREQUEST_H_
