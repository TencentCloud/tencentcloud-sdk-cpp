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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKLIFECYCLESCRIPTSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKLIFECYCLESCRIPTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20191022/model/Filter.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * DescribeNotebookLifecycleScripts请求参数结构体
                */
                class DescribeNotebookLifecycleScriptsRequest : public AbstractModel
                {
                public:
                    DescribeNotebookLifecycleScriptsRequest();
                    ~DescribeNotebookLifecycleScriptsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取返回数量，默认为20
                     * @return Limit 返回数量，默认为20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20
                     * @param _limit 返回数量，默认为20
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
                     * 获取过滤条件。
instance-name - String - 是否必填：否 -（过滤条件）按照名称过滤。
search-by-name - String - 是否必填：否 -（过滤条件）按照名称检索，模糊匹配。
                     * @return Filters 过滤条件。
instance-name - String - 是否必填：否 -（过滤条件）按照名称过滤。
search-by-name - String - 是否必填：否 -（过滤条件）按照名称检索，模糊匹配。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
instance-name - String - 是否必填：否 -（过滤条件）按照名称过滤。
search-by-name - String - 是否必填：否 -（过滤条件）按照名称检索，模糊匹配。
                     * @param _filters 过滤条件。
instance-name - String - 是否必填：否 -（过滤条件）按照名称过滤。
search-by-name - String - 是否必填：否 -（过滤条件）按照名称检索，模糊匹配。
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
                     * 获取排序规则。默认取Descending
Descending 按更新时间降序
Ascending 按更新时间升序
                     * @return SortOrder 排序规则。默认取Descending
Descending 按更新时间降序
Ascending 按更新时间升序
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置排序规则。默认取Descending
Descending 按更新时间降序
Ascending 按更新时间升序
                     * @param _sortOrder 排序规则。默认取Descending
Descending 按更新时间降序
Ascending 按更新时间升序
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * 偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件。
instance-name - String - 是否必填：否 -（过滤条件）按照名称过滤。
search-by-name - String - 是否必填：否 -（过滤条件）按照名称检索，模糊匹配。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序规则。默认取Descending
Descending 按更新时间降序
Ascending 按更新时间升序
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKLIFECYCLESCRIPTSREQUEST_H_
