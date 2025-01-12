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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEPUBLICDIRECTCONNECTTUNNELROUTESREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEPUBLICDIRECTCONNECTTUNNELROUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/Filter.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * DescribePublicDirectConnectTunnelRoutes请求参数结构体
                */
                class DescribePublicDirectConnectTunnelRoutesRequest : public AbstractModel
                {
                public:
                    DescribePublicDirectConnectTunnelRoutesRequest();
                    ~DescribePublicDirectConnectTunnelRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取专用通道ID。
                     * @return DirectConnectTunnelId 专用通道ID。
                     * 
                     */
                    std::string GetDirectConnectTunnelId() const;

                    /**
                     * 设置专用通道ID。
                     * @param _directConnectTunnelId 专用通道ID。
                     * 
                     */
                    void SetDirectConnectTunnelId(const std::string& _directConnectTunnelId);

                    /**
                     * 判断参数 DirectConnectTunnelId 是否已赋值
                     * @return DirectConnectTunnelId 是否已赋值
                     * 
                     */
                    bool DirectConnectTunnelIdHasBeenSet() const;

                    /**
                     * 获取过滤条件：
route-type：路由类型，取值：BGP/STATIC；
route-subnet：路由cidr，取值如：192.68.1.0/24。
                     * @return Filters 过滤条件：
route-type：路由类型，取值：BGP/STATIC；
route-subnet：路由cidr，取值如：192.68.1.0/24。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件：
route-type：路由类型，取值：BGP/STATIC；
route-subnet：路由cidr，取值如：192.68.1.0/24。
                     * @param _filters 过滤条件：
route-type：路由类型，取值：BGP/STATIC；
route-subnet：路由cidr，取值如：192.68.1.0/24。
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
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 专用通道ID。
                     */
                    std::string m_directConnectTunnelId;
                    bool m_directConnectTunnelIdHasBeenSet;

                    /**
                     * 过滤条件：
route-type：路由类型，取值：BGP/STATIC；
route-subnet：路由cidr，取值如：192.68.1.0/24。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEPUBLICDIRECTCONNECTTUNNELROUTESREQUEST_H_
