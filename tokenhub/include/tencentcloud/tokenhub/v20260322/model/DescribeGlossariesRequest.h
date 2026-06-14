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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEGLOSSARIESREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEGLOSSARIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/RequestFilter.h>
#include <tencentcloud/tokenhub/v20260322/model/RequestSort.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeGlossaries请求参数结构体
                */
                class DescribeGlossariesRequest : public AbstractModel
                {
                public:
                    DescribeGlossariesRequest();
                    ~DescribeGlossariesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数量。默认为 20，最大值为 100。
                     * @return Limit 返回数量。默认为 20，最大值为 100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量。默认为 20，最大值为 100。
                     * @param _limit 返回数量。默认为 20，最大值为 100。
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
                     * 获取偏移量。默认为 0。
                     * @return Offset 偏移量。默认为 0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量。默认为 0。
                     * @param _offset 偏移量。默认为 0。
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
                     * 获取过滤条件列表。支持的过滤字段：GlossaryId（术语库 ID）、Name（名称）、Source（源语言代码）、Target（目标语言代码）。
                     * @return Filters 过滤条件列表。支持的过滤字段：GlossaryId（术语库 ID）、Name（名称）、Source（源语言代码）、Target（目标语言代码）。
                     * 
                     */
                    std::vector<RequestFilter> GetFilters() const;

                    /**
                     * 设置过滤条件列表。支持的过滤字段：GlossaryId（术语库 ID）、Name（名称）、Source（源语言代码）、Target（目标语言代码）。
                     * @param _filters 过滤条件列表。支持的过滤字段：GlossaryId（术语库 ID）、Name（名称）、Source（源语言代码）、Target（目标语言代码）。
                     * 
                     */
                    void SetFilters(const std::vector<RequestFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序条件列表。支持的排序字段：CreatedTime（创建时间）、UpdatedTime（更新时间）。
                     * @return Sorts 排序条件列表。支持的排序字段：CreatedTime（创建时间）、UpdatedTime（更新时间）。
                     * 
                     */
                    std::vector<RequestSort> GetSorts() const;

                    /**
                     * 设置排序条件列表。支持的排序字段：CreatedTime（创建时间）、UpdatedTime（更新时间）。
                     * @param _sorts 排序条件列表。支持的排序字段：CreatedTime（创建时间）、UpdatedTime（更新时间）。
                     * 
                     */
                    void SetSorts(const std::vector<RequestSort>& _sorts);

                    /**
                     * 判断参数 Sorts 是否已赋值
                     * @return Sorts 是否已赋值
                     * 
                     */
                    bool SortsHasBeenSet() const;

                private:

                    /**
                     * 返回数量。默认为 20，最大值为 100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量。默认为 0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件列表。支持的过滤字段：GlossaryId（术语库 ID）、Name（名称）、Source（源语言代码）、Target（目标语言代码）。
                     */
                    std::vector<RequestFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序条件列表。支持的排序字段：CreatedTime（创建时间）、UpdatedTime（更新时间）。
                     */
                    std::vector<RequestSort> m_sorts;
                    bool m_sortsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEGLOSSARIESREQUEST_H_
