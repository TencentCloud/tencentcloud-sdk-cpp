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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DEPENDENCYCONFIGPAGE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DEPENDENCYCONFIGPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TaskDependDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 查询任务上游依赖详情分页
                */
                class DependencyConfigPage : public AbstractModel
                {
                public:
                    DependencyConfigPage();
                    ~DependencyConfigPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取满足查询条件的数据总条数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 满足查询条件的数据总条数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置满足查询条件的数据总条数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 满足查询条件的数据总条数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取满足查询条件的数据总页数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalPageNumber 满足查询条件的数据总页数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalPageNumber() const;

                    /**
                     * 设置满足查询条件的数据总页数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalPageNumber 满足查询条件的数据总页数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalPageNumber(const uint64_t& _totalPageNumber);

                    /**
                     * 判断参数 TotalPageNumber 是否已赋值
                     * @return TotalPageNumber 是否已赋值
                     * 
                     */
                    bool TotalPageNumberHasBeenSet() const;

                    /**
                     * 获取当前请求的数据页数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNumber 当前请求的数据页数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置当前请求的数据页数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageNumber 当前请求的数据页数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取当前请求的数据页条数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageSize 当前请求的数据页条数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置当前请求的数据页条数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageSize 当前请求的数据页条数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取分页数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 分页数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskDependDto> GetItems() const;

                    /**
                     * 设置分页数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items 分页数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<TaskDependDto>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 满足查询条件的数据总条数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 满足查询条件的数据总页数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                    /**
                     * 当前请求的数据页数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 当前请求的数据页条数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskDependDto> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DEPENDENCYCONFIGPAGE_H_
