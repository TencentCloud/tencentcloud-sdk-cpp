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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPROMETHEUSOVERVIEWSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPROMETHEUSOVERVIEWSREQUEST_H_

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
                * DescribePrometheusOverviews请求参数结构体
                */
                class DescribePrometheusOverviewsRequest : public AbstractModel
                {
                public:
                    DescribePrometheusOverviewsRequest();
                    ~DescribePrometheusOverviewsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用于分页
                     * @return Offset 用于分页
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置用于分页
                     * @param _offset 用于分页
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
                     * 获取用于分页
                     * @return Limit 用于分页
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置用于分页
                     * @param _limit 用于分页
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
                     * 获取过滤实例，目前支持：
ID: 通过实例ID来过滤 
Name: 通过实例名称来过滤
                     * @return Filters 过滤实例，目前支持：
ID: 通过实例ID来过滤 
Name: 通过实例名称来过滤
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤实例，目前支持：
ID: 通过实例ID来过滤 
Name: 通过实例名称来过滤
                     * @param _filters 过滤实例，目前支持：
ID: 通过实例ID来过滤 
Name: 通过实例名称来过滤
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
                     * 用于分页
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 用于分页
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤实例，目前支持：
ID: 通过实例ID来过滤 
Name: 通过实例名称来过滤
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPROMETHEUSOVERVIEWSREQUEST_H_
