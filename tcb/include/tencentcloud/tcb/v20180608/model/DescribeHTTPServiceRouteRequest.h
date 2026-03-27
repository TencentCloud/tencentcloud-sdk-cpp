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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEHTTPSERVICEROUTEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEHTTPSERVICEROUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/Filter.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeHTTPServiceRoute请求参数结构体
                */
                class DescribeHTTPServiceRouteRequest : public AbstractModel
                {
                public:
                    DescribeHTTPServiceRouteRequest();
                    ~DescribeHTTPServiceRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取过滤条件。Key的含义参考对应字段，Value精确匹配。可过滤: Domain、Path、DomainType、UpstreamResourceType。可过滤的Values单条不超过100
                     * @return Filters 过滤条件。Key的含义参考对应字段，Value精确匹配。可过滤: Domain、Path、DomainType、UpstreamResourceType。可过滤的Values单条不超过100
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。Key的含义参考对应字段，Value精确匹配。可过滤: Domain、Path、DomainType、UpstreamResourceType。可过滤的Values单条不超过100
                     * @param _filters 过滤条件。Key的含义参考对应字段，Value精确匹配。可过滤: Domain、Path、DomainType、UpstreamResourceType。可过滤的Values单条不超过100
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
                     * 获取分页偏移量。默认 0
                     * @return Offset 分页偏移量。默认 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量。默认 0
                     * @param _offset 分页偏移量。默认 0
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
                     * 获取分页限制。默认20，最大值1000
                     * @return Limit 分页限制。默认20，最大值1000
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页限制。默认20，最大值1000
                     * @param _limit 分页限制。默认20，最大值1000
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
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 过滤条件。Key的含义参考对应字段，Value精确匹配。可过滤: Domain、Path、DomainType、UpstreamResourceType。可过滤的Values单条不超过100
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页偏移量。默认 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页限制。默认20，最大值1000
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEHTTPSERVICEROUTEREQUEST_H_
