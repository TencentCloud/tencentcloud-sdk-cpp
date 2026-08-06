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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGSERVICEROUTE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGSERVICEROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KongServicePreview.h>
#include <tencentcloud/tse/v20201207/model/KongRoutePreview.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * kong实例的服务和路由列表
                */
                class KongServiceRoute : public AbstractModel
                {
                public:
                    KongServiceRoute();
                    ~KongServiceRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>服务信息</p>
                     * @return Service <p>服务信息</p>
                     * 
                     */
                    KongServicePreview GetService() const;

                    /**
                     * 设置<p>服务信息</p>
                     * @param _service <p>服务信息</p>
                     * 
                     */
                    void SetService(const KongServicePreview& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取<p>路由总条数</p>
                     * @return RouteTotalCount <p>路由总条数</p>
                     * 
                     */
                    int64_t GetRouteTotalCount() const;

                    /**
                     * 设置<p>路由总条数</p>
                     * @param _routeTotalCount <p>路由总条数</p>
                     * 
                     */
                    void SetRouteTotalCount(const int64_t& _routeTotalCount);

                    /**
                     * 判断参数 RouteTotalCount 是否已赋值
                     * @return RouteTotalCount 是否已赋值
                     * 
                     */
                    bool RouteTotalCountHasBeenSet() const;

                    /**
                     * 获取<p>是否有未返回的路由</p>
                     * @return RouteHasMore <p>是否有未返回的路由</p>
                     * 
                     */
                    bool GetRouteHasMore() const;

                    /**
                     * 设置<p>是否有未返回的路由</p>
                     * @param _routeHasMore <p>是否有未返回的路由</p>
                     * 
                     */
                    void SetRouteHasMore(const bool& _routeHasMore);

                    /**
                     * 判断参数 RouteHasMore 是否已赋值
                     * @return RouteHasMore 是否已赋值
                     * 
                     */
                    bool RouteHasMoreHasBeenSet() const;

                    /**
                     * 获取<p>路由信息</p>
                     * @return Routes <p>路由信息</p>
                     * 
                     */
                    std::vector<KongRoutePreview> GetRoutes() const;

                    /**
                     * 设置<p>路由信息</p>
                     * @param _routes <p>路由信息</p>
                     * 
                     */
                    void SetRoutes(const std::vector<KongRoutePreview>& _routes);

                    /**
                     * 判断参数 Routes 是否已赋值
                     * @return Routes 是否已赋值
                     * 
                     */
                    bool RoutesHasBeenSet() const;

                private:

                    /**
                     * <p>服务信息</p>
                     */
                    KongServicePreview m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * <p>路由总条数</p>
                     */
                    int64_t m_routeTotalCount;
                    bool m_routeTotalCountHasBeenSet;

                    /**
                     * <p>是否有未返回的路由</p>
                     */
                    bool m_routeHasMore;
                    bool m_routeHasMoreHasBeenSet;

                    /**
                     * <p>路由信息</p>
                     */
                    std::vector<KongRoutePreview> m_routes;
                    bool m_routesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGSERVICEROUTE_H_
