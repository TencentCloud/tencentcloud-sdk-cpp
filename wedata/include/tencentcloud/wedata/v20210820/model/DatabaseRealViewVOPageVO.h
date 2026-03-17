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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATABASEREALVIEWVOPAGEVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATABASEREALVIEWVOPAGEVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DatabaseRealViewVO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 实时获取数据库列表 分页参数
                */
                class DatabaseRealViewVOPageVO : public AbstractModel
                {
                public:
                    DatabaseRealViewVOPageVO();
                    ~DatabaseRealViewVOPageVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分页页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNumber 分页页码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageNumber 分页页码
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
                     * 获取总个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 总个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 总个数
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

                    /**
                     * 获取记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rows 记录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DatabaseRealViewVO> GetRows() const;

                    /**
                     * 设置记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rows 记录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRows(const std::vector<DatabaseRealViewVO>& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                private:

                    /**
                     * 分页页码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 总个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 总分页页码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                    /**
                     * 记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DatabaseRealViewVO> m_rows;
                    bool m_rowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATABASEREALVIEWVOPAGEVO_H_
