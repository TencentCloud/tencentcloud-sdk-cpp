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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASECONSUMELOGOPTDTOCOLLECTION_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASECONSUMELOGOPTDTOCOLLECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/EventCaseConsumeLogOptDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 事件消费任务记录列表
                */
                class EventCaseConsumeLogOptDtoCollection : public AbstractModel
                {
                public:
                    EventCaseConsumeLogOptDtoCollection();
                    ~EventCaseConsumeLogOptDtoCollection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结果总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 结果总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置结果总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 结果总数
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
                     * 获取结果总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalPage 结果总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalPage() const;

                    /**
                     * 设置结果总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalPage 结果总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalPage(const uint64_t& _totalPage);

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     * 
                     */
                    bool TotalPageHasBeenSet() const;

                    /**
                     * 获取当前页结果数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageCount 当前页结果数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPageCount() const;

                    /**
                     * 设置当前页结果数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageCount 当前页结果数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageCount(const uint64_t& _pageCount);

                    /**
                     * 判断参数 PageCount 是否已赋值
                     * @return PageCount 是否已赋值
                     * 
                     */
                    bool PageCountHasBeenSet() const;

                    /**
                     * 获取页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNumber 页码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageNumber 页码
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
                     * 获取每页数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageSize 每页数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageSize 每页数目
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
                    std::vector<EventCaseConsumeLogOptDto> GetItems() const;

                    /**
                     * 设置分页数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items 分页数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<EventCaseConsumeLogOptDto>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 结果总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 结果总页数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * 当前页结果数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pageCount;
                    bool m_pageCountHasBeenSet;

                    /**
                     * 页码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventCaseConsumeLogOptDto> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASECONSUMELOGOPTDTOCOLLECTION_H_
