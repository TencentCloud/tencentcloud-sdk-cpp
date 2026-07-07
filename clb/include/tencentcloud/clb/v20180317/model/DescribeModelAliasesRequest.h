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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELALIASESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELALIASESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Filter.h>
#include <tencentcloud/clb/v20180317/model/Sort.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeModelAliases请求参数结构体
                */
                class DescribeModelAliasesRequest : public AbstractModel
                {
                public:
                    DescribeModelAliasesRequest();
                    ~DescribeModelAliasesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>过滤条件</p><p>支持的过滤键：</p><ul><li>ModelAliasName：按模型别名过滤。</li></ul>
                     * @return Filters <p>过滤条件</p><p>支持的过滤键：</p><ul><li>ModelAliasName：按模型别名过滤。</li></ul>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件</p><p>支持的过滤键：</p><ul><li>ModelAliasName：按模型别名过滤。</li></ul>
                     * @param _filters <p>过滤条件</p><p>支持的过滤键：</p><ul><li>ModelAliasName：按模型别名过滤。</li></ul>
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
                     * 获取<p>每页数量，取值范围：[1, 100]，默认值：20。</p>
                     * @return Limit <p>每页数量，取值范围：[1, 100]，默认值：20。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页数量，取值范围：[1, 100]，默认值：20。</p>
                     * @param _limit <p>每页数量，取值范围：[1, 100]，默认值：20。</p>
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
                     * 获取<p>分页偏移量，默认值：0。</p>
                     * @return Offset <p>分页偏移量，默认值：0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，默认值：0。</p>
                     * @param _offset <p>分页偏移量，默认值：0。</p>
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
                     * 获取<p>排序条件。支持按 InputCoefficient、InputCachedCoefficient 或 OutputCoefficient 排序，Order 支持 ASC、DESC。不传或传空数组时，默认按 OutputCoefficient 降序排列。最多支持 3 个排序条件，排序字段不可重复。</p>
                     * @return Sort <p>排序条件。支持按 InputCoefficient、InputCachedCoefficient 或 OutputCoefficient 排序，Order 支持 ASC、DESC。不传或传空数组时，默认按 OutputCoefficient 降序排列。最多支持 3 个排序条件，排序字段不可重复。</p>
                     * 
                     */
                    std::vector<Sort> GetSort() const;

                    /**
                     * 设置<p>排序条件。支持按 InputCoefficient、InputCachedCoefficient 或 OutputCoefficient 排序，Order 支持 ASC、DESC。不传或传空数组时，默认按 OutputCoefficient 降序排列。最多支持 3 个排序条件，排序字段不可重复。</p>
                     * @param _sort <p>排序条件。支持按 InputCoefficient、InputCachedCoefficient 或 OutputCoefficient 排序，Order 支持 ASC、DESC。不传或传空数组时，默认按 OutputCoefficient 降序排列。最多支持 3 个排序条件，排序字段不可重复。</p>
                     * 
                     */
                    void SetSort(const std::vector<Sort>& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * <p>过滤条件</p><p>支持的过滤键：</p><ul><li>ModelAliasName：按模型别名过滤。</li></ul>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>每页数量，取值范围：[1, 100]，默认值：20。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移量，默认值：0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>排序条件。支持按 InputCoefficient、InputCachedCoefficient 或 OutputCoefficient 排序，Order 支持 ASC、DESC。不传或传空数组时，默认按 OutputCoefficient 降序排列。最多支持 3 个排序条件，排序字段不可重复。</p>
                     */
                    std::vector<Sort> m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELALIASESREQUEST_H_
