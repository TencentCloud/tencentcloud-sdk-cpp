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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBESECURITYGROUPROUTESREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBESECURITYGROUPROUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/InstanceRoute.h>
#include <tencentcloud/ckafka/v20190819/model/RouteFilter.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroupRoutes请求参数结构体
                */
                class DescribeSecurityGroupRoutesRequest : public AbstractModel
                {
                public:
                    DescribeSecurityGroupRoutesRequest();
                    ~DescribeSecurityGroupRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路由信息
                     * @return InstanceRoute 路由信息
                     * 
                     */
                    InstanceRoute GetInstanceRoute() const;

                    /**
                     * 设置路由信息
                     * @param _instanceRoute 路由信息
                     * 
                     */
                    void SetInstanceRoute(const InstanceRoute& _instanceRoute);

                    /**
                     * 判断参数 InstanceRoute 是否已赋值
                     * @return InstanceRoute 是否已赋值
                     * 
                     */
                    bool InstanceRouteHasBeenSet() const;

                    /**
                     * 获取过滤器
                     * @return Filters 过滤器
                     * 
                     */
                    std::vector<RouteFilter> GetFilters() const;

                    /**
                     * 设置过滤器
                     * @param _filters 过滤器
                     * 
                     */
                    void SetFilters(const std::vector<RouteFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取分页Offset,默认0
                     * @return Offset 分页Offset,默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页Offset,默认0
                     * @param _offset 分页Offset,默认0
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
                     * 获取分页Limit,默认20
                     * @return Limit 分页Limit,默认20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页Limit,默认20
                     * @param _limit 分页Limit,默认20
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
                     * 获取关键词,可根据实例id/实例名称/vip模糊搜索
                     * @return SearchWord 关键词,可根据实例id/实例名称/vip模糊搜索
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置关键词,可根据实例id/实例名称/vip模糊搜索
                     * @param _searchWord 关键词,可根据实例id/实例名称/vip模糊搜索
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                private:

                    /**
                     * 路由信息
                     */
                    InstanceRoute m_instanceRoute;
                    bool m_instanceRouteHasBeenSet;

                    /**
                     * 过滤器
                     */
                    std::vector<RouteFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页Offset,默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页Limit,默认20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 关键词,可根据实例id/实例名称/vip模糊搜索
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBESECURITYGROUPROUTESREQUEST_H_
