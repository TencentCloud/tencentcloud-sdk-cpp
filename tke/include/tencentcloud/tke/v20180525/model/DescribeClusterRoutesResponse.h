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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERROUTESRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERROUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/RouteInfo.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterRoutes返回参数结构体
                */
                class DescribeClusterRoutesResponse : public AbstractModel
                {
                public:
                    DescribeClusterRoutesResponse();
                    ~DescribeClusterRoutesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的实例数量。
                     * @return TotalCount 符合条件的实例数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取集群路由对象。
                     * @return RouteSet 集群路由对象。
                     * 
                     */
                    std::vector<RouteInfo> GetRouteSet() const;

                    /**
                     * 判断参数 RouteSet 是否已赋值
                     * @return RouteSet 是否已赋值
                     * 
                     */
                    bool RouteSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的实例数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 集群路由对象。
                     */
                    std::vector<RouteInfo> m_routeSet;
                    bool m_routeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERROUTESRESPONSE_H_
