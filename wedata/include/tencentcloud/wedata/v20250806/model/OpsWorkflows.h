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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSWORKFLOWS_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSWORKFLOWS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/OpsWorkflow.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 查询工作流分页列表
                */
                class OpsWorkflows : public AbstractModel
                {
                public:
                    OpsWorkflows();
                    ~OpsWorkflows() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录列表	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 记录列表	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OpsWorkflow> GetItems() const;

                    /**
                     * 设置记录列表	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items 记录列表	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<OpsWorkflow>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

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
                     * 获取总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalPageNumber 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalPageNumber() const;

                    /**
                     * 设置总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalPageNumber 总页数
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
                     * 获取分页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageSize 分页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageSize 分页大小
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
                     * 获取分页页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNumber 分页页码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置分页页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageNumber 分页页码
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

                private:

                    /**
                     * 记录列表	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OpsWorkflow> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 结果总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                    /**
                     * 分页大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页页码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSWORKFLOWS_H_
