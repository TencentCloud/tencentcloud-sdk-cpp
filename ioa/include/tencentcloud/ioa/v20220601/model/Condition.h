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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_CONDITION_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_CONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/Filter.h>
#include <tencentcloud/ioa/v20220601/model/FilterGroup.h>
#include <tencentcloud/ioa/v20220601/model/Sort.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * - [ ] 过滤条件<br>

<li>Name - String - 是否必填：否 - 操作符: ilike  - 排序支持：否- 根据分组名称进行查询。</li>
分页参数<br>
<li>PageNum 从1开始，小于等于0时使用默认参数。</li>
<li>PageSize 最大值5000，最好不超过100。</li>
                */
                class Condition : public AbstractModel
                {
                public:
                    Condition();
                    ~Condition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filters 条件过滤
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Filters Filters 条件过滤
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filters 条件过滤
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filters Filters 条件过滤
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取FilterGroups 条件过滤组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilterGroups FilterGroups 条件过滤组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FilterGroup> GetFilterGroups() const;

                    /**
                     * 设置FilterGroups 条件过滤组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filterGroups FilterGroups 条件过滤组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilterGroups(const std::vector<FilterGroup>& _filterGroups);

                    /**
                     * 判断参数 FilterGroups 是否已赋值
                     * @return FilterGroups 是否已赋值
                     * 
                     */
                    bool FilterGroupsHasBeenSet() const;

                    /**
                     * 获取Sort 排序字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sort Sort 排序字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Sort GetSort() const;

                    /**
                     * 设置Sort 排序字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sort Sort 排序字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSort(const Sort& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取PageSize 每页获取数(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageSize PageSize 每页获取数(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置PageSize 每页获取数(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageSize PageSize 每页获取数(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取PageNum 获取第几页(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNum PageNum 获取第几页(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置PageNum 获取第几页(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageNum PageNum 获取第几页(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                private:

                    /**
                     * Filters 条件过滤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * FilterGroups 条件过滤组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterGroup> m_filterGroups;
                    bool m_filterGroupsHasBeenSet;

                    /**
                     * Sort 排序字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Sort m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * PageSize 每页获取数(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * PageNum 获取第几页(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_CONDITION_H_
