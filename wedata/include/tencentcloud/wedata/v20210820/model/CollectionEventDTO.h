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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COLLECTIONEVENTDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COLLECTIONEVENTDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/EventDsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 分页数据集
                */
                class CollectionEventDTO : public AbstractModel
                {
                public:
                    CollectionEventDTO();
                    ~CollectionEventDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数据条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalItems 总数据条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalItems() const;

                    /**
                     * 设置总数据条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalItems 总数据条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalItems(const int64_t& _totalItems);

                    /**
                     * 判断参数 TotalItems 是否已赋值
                     * @return TotalItems 是否已赋值
                     * 
                     */
                    bool TotalItemsHasBeenSet() const;

                    /**
                     * 获取总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalPages 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalPages() const;

                    /**
                     * 设置总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalPages 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalPages(const int64_t& _totalPages);

                    /**
                     * 判断参数 TotalPages 是否已赋值
                     * @return TotalPages 是否已赋值
                     * 
                     */
                    bool TotalPagesHasBeenSet() const;

                    /**
                     * 获取当前页数据条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentPageItems 当前页数据条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCurrentPageItems() const;

                    /**
                     * 设置当前页数据条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentPageItems 当前页数据条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrentPageItems(const int64_t& _currentPageItems);

                    /**
                     * 判断参数 CurrentPageItems 是否已赋值
                     * @return CurrentPageItems 是否已赋值
                     * 
                     */
                    bool CurrentPageItemsHasBeenSet() const;

                    /**
                     * 获取当前页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentPage 当前页码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCurrentPage() const;

                    /**
                     * 设置当前页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentPage 当前页码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrentPage(const int64_t& _currentPage);

                    /**
                     * 判断参数 CurrentPage 是否已赋值
                     * @return CurrentPage 是否已赋值
                     * 
                     */
                    bool CurrentPageHasBeenSet() const;

                    /**
                     * 获取分页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageSize 分页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageSize 分页大小
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
                     * 获取数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventDsDto> GetItems() const;

                    /**
                     * 设置数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items 数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<EventDsDto>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 总数据条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalItems;
                    bool m_totalItemsHasBeenSet;

                    /**
                     * 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalPages;
                    bool m_totalPagesHasBeenSet;

                    /**
                     * 当前页数据条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_currentPageItems;
                    bool m_currentPageItemsHasBeenSet;

                    /**
                     * 当前页码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_currentPage;
                    bool m_currentPageHasBeenSet;

                    /**
                     * 分页大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventDsDto> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COLLECTIONEVENTDTO_H_
