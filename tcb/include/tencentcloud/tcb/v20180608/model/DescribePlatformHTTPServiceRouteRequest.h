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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPLATFORMHTTPSERVICEROUTEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPLATFORMHTTPSERVICEROUTEREQUEST_H_

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
                * DescribePlatformHTTPServiceRoute请求参数结构体
                */
                class DescribePlatformHTTPServiceRouteRequest : public AbstractModel
                {
                public:
                    DescribePlatformHTTPServiceRouteRequest();
                    ~DescribePlatformHTTPServiceRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>平台id</p>
                     * @return PlatformId <p>平台id</p>
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置<p>平台id</p>
                     * @param _platformId <p>平台id</p>
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件。Key的含义参考对应字段，Value精确匹配。可过滤: Domain、Path、DomainType、UpstreamResourceType。可过滤的Values单条不超过100</p>
                     * @return Filters <p>过滤条件。Key的含义参考对应字段，Value精确匹配。可过滤: Domain、Path、DomainType、UpstreamResourceType。可过滤的Values单条不超过100</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件。Key的含义参考对应字段，Value精确匹配。可过滤: Domain、Path、DomainType、UpstreamResourceType。可过滤的Values单条不超过100</p>
                     * @param _filters <p>过滤条件。Key的含义参考对应字段，Value精确匹配。可过滤: Domain、Path、DomainType、UpstreamResourceType。可过滤的Values单条不超过100</p>
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
                     * 获取<p>分页偏移量。默认 0</p>
                     * @return Offset <p>分页偏移量。默认 0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量。默认 0</p>
                     * @param _offset <p>分页偏移量。默认 0</p>
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
                     * 获取<p>分页限制。默认20，最大值1000</p>
                     * @return Limit <p>分页限制。默认20，最大值1000</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页限制。默认20，最大值1000</p>
                     * @param _limit <p>分页限制。默认20，最大值1000</p>
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
                     * <p>平台id</p>
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * <p>过滤条件。Key的含义参考对应字段，Value精确匹配。可过滤: Domain、Path、DomainType、UpstreamResourceType。可过滤的Values单条不超过100</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分页偏移量。默认 0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页限制。默认20，最大值1000</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPLATFORMHTTPSERVICEROUTEREQUEST_H_
