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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEQUOTAOVERVIEWREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEQUOTAOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/Filter.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeQuotaOverview请求参数结构体
                */
                class DescribeQuotaOverviewRequest : public AbstractModel
                {
                public:
                    DescribeQuotaOverviewRequest();
                    ~DescribeQuotaOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分页偏移量，从 0 开始，默认值为 0，必须大于等于 0。</p><p>单位：偏移量</p>
                     * @return Offset <p>分页偏移量，从 0 开始，默认值为 0，必须大于等于 0。</p><p>单位：偏移量</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，从 0 开始，默认值为 0，必须大于等于 0。</p><p>单位：偏移量</p>
                     * @param _offset <p>分页偏移量，从 0 开始，默认值为 0，必须大于等于 0。</p><p>单位：偏移量</p>
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
                     * 获取<p>每页返回的配额组数量</p><p>单位：个</p>
                     * @return Limit <p>每页返回的配额组数量</p><p>单位：个</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页返回的配额组数量</p><p>单位：个</p>
                     * @param _limit <p>每页返回的配额组数量</p><p>单位：个</p>
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
                     * 获取<p>配额组过滤条件</p>
                     * @return Filters <p>配额组过滤条件</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>配额组过滤条件</p>
                     * @param _filters <p>配额组过滤条件</p>
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
                     * <p>分页偏移量，从 0 开始，默认值为 0，必须大于等于 0。</p><p>单位：偏移量</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页返回的配额组数量</p><p>单位：个</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>配额组过滤条件</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEQUOTAOVERVIEWREQUEST_H_
