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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEAGENTLISTREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEAGENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/Filter.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * DescribeAgentList请求参数结构体
                */
                class DescribeAgentListRequest : public AbstractModel
                {
                public:
                    DescribeAgentListRequest();
                    ~DescribeAgentListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，从 0 开始
                     * @return Offset 偏移量，从 0 开始
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，从 0 开始
                     * @param _offset 偏移量，从 0 开始
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
                     * 获取返回数量，缺省为 20，最大 100
                     * @return Limit 返回数量，缺省为 20，最大 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，缺省为 20，最大 100
                     * @param _limit 返回数量，缺省为 20，最大 100
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
                     * 获取过滤条件数组，多个 Filter 之间为 AND 关系，同一 Filter 内多个 Values 为 OR 关系
                     * @return Filters 过滤条件数组，多个 Filter 之间为 AND 关系，同一 Filter 内多个 Values 为 OR 关系
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件数组，多个 Filter 之间为 AND 关系，同一 Filter 内多个 Values 为 OR 关系
                     * @param _filters 过滤条件数组，多个 Filter 之间为 AND 关系，同一 Filter 内多个 Values 为 OR 关系
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
                     * 获取排序字段
                     * @return SortBy 排序字段
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置排序字段
                     * @param _sortBy 排序字段
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取排序方向：ASC / DESC
                     * @return SortDirection 排序方向：ASC / DESC
                     * 
                     */
                    std::string GetSortDirection() const;

                    /**
                     * 设置排序方向：ASC / DESC
                     * @param _sortDirection 排序方向：ASC / DESC
                     * 
                     */
                    void SetSortDirection(const std::string& _sortDirection);

                    /**
                     * 判断参数 SortDirection 是否已赋值
                     * @return SortDirection 是否已赋值
                     * 
                     */
                    bool SortDirectionHasBeenSet() const;

                private:

                    /**
                     * 偏移量，从 0 开始
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，缺省为 20，最大 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件数组，多个 Filter 之间为 AND 关系，同一 Filter 内多个 Values 为 OR 关系
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 排序方向：ASC / DESC
                     */
                    std::string m_sortDirection;
                    bool m_sortDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEAGENTLISTREQUEST_H_
