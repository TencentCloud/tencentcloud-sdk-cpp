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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEFUSIONINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEFUSIONINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/Filter.h>
#include <tencentcloud/trocket/v20230308/model/TagFilter.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeFusionInstanceList请求参数结构体
                */
                class DescribeFusionInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeFusionInstanceListRequest();
                    ~DescribeFusionInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询起始位置，默认为0。
                     * @return Offset 查询起始位置，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询起始位置，默认为0。
                     * @param _offset 查询起始位置，默认为0。
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
                     * 获取查询结果限制数量，默认20。
                     * @return Limit 查询结果限制数量，默认20。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询结果限制数量，默认20。
                     * @param _limit 查询结果限制数量，默认20。
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
                     * 获取过滤查询条件列表，请在引用此参数的API说明中了解使用方法。
                     * @return Filters 过滤查询条件列表，请在引用此参数的API说明中了解使用方法。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤查询条件列表，请在引用此参数的API说明中了解使用方法。
                     * @param _filters 过滤查询条件列表，请在引用此参数的API说明中了解使用方法。
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
                     * 获取标签过滤器
                     * @return TagFilters 标签过滤器
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置标签过滤器
                     * @param _tagFilters 标签过滤器
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * 查询起始位置，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询结果限制数量，默认20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤查询条件列表，请在引用此参数的API说明中了解使用方法。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 标签过滤器
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEFUSIONINSTANCELISTREQUEST_H_
