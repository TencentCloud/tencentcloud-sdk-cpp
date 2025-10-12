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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEFOLDERPAGE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEFOLDERPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ResourceFolder.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 资源文件夹分页
                */
                class ResourceFolderPage : public AbstractModel
                {
                public:
                    ResourceFolderPage();
                    ~ResourceFolderPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源文件夹集合信息
                     * @return Items 资源文件夹集合信息
                     * 
                     */
                    std::vector<ResourceFolder> GetItems() const;

                    /**
                     * 设置资源文件夹集合信息
                     * @param _items 资源文件夹集合信息
                     * 
                     */
                    void SetItems(const std::vector<ResourceFolder>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取总页数
                     * @return TotalPageNumber 总页数
                     * 
                     */
                    uint64_t GetTotalPageNumber() const;

                    /**
                     * 设置总页数
                     * @param _totalPageNumber 总页数
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
                     * 获取总数量
                     * @return TotalCount 总数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置总数量
                     * @param _totalCount 总数量
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
                     * 获取当前页
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNumber 当前页
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置当前页
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageNumber 当前页
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
                     * 获取每页显示数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageSize 每页显示数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页显示数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageSize 每页显示数
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

                private:

                    /**
                     * 资源文件夹集合信息
                     */
                    std::vector<ResourceFolder> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 总页数
                     */
                    uint64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                    /**
                     * 总数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 当前页
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页显示数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEFOLDERPAGE_H_
