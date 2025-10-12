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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_EXECUTORRESOURCEGROUPDATA_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_EXECUTORRESOURCEGROUPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ExecutorResourceGroupInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ExecutorResourceGroup分页对象
                */
                class ExecutorResourceGroupData : public AbstractModel
                {
                public:
                    ExecutorResourceGroupData();
                    ~ExecutorResourceGroupData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结果list
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 结果list
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExecutorResourceGroupInfo> GetItems() const;

                    /**
                     * 设置结果list
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items 结果list
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<ExecutorResourceGroupInfo>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取总条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 总条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 总条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNumber 页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageNumber 页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageSize 页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageSize 页大小
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
                     * 获取总分页页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalPageNumber 总分页页码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalPageNumber() const;

                    /**
                     * 设置总分页页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalPageNumber 总分页页码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalPageNumber(const int64_t& _totalPageNumber);

                    /**
                     * 判断参数 TotalPageNumber 是否已赋值
                     * @return TotalPageNumber 是否已赋值
                     * 
                     */
                    bool TotalPageNumberHasBeenSet() const;

                private:

                    /**
                     * 结果list
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExecutorResourceGroupInfo> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 总条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 页数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 页大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 总分页页码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_EXECUTORRESOURCEGROUPDATA_H_
