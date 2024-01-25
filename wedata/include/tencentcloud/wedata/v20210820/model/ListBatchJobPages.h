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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_LISTBATCHJOBPAGES_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_LISTBATCHJOBPAGES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/BatchJobVO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 操作列表
                */
                class ListBatchJobPages : public AbstractModel
                {
                public:
                    ListBatchJobPages();
                    ~ListBatchJobPages() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalPage 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalPage() const;

                    /**
                     * 设置总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalPage 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalPage(const int64_t& _totalPage);

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     * 
                     */
                    bool TotalPageHasBeenSet() const;

                    /**
                     * 获取总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageCount 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageCount() const;

                    /**
                     * 设置总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageCount 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageCount(const int64_t& _pageCount);

                    /**
                     * 判断参数 PageCount 是否已赋值
                     * @return PageCount 是否已赋值
                     * 
                     */
                    bool PageCountHasBeenSet() const;

                    /**
                     * 获取当前页码数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageSize 当前页码数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置当前页码数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageSize 当前页码数
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
                     * 获取job记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items job记录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BatchJobVO> GetItems() const;

                    /**
                     * 设置job记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items job记录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<BatchJobVO>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取当前页条目数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNumber 当前页条目数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置当前页条目数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageNumber 当前页条目数
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
                     * 获取回溯ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestId 回溯ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置回溯ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestId 回溯ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                private:

                    /**
                     * 总条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageCount;
                    bool m_pageCountHasBeenSet;

                    /**
                     * 当前页码数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * job记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BatchJobVO> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 当前页条目数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 回溯ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_LISTBATCHJOBPAGES_H_
