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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTASKLISTINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTASKLISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskInfoVo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 上报任务信息
                */
                class ReportTaskListInfo : public AbstractModel
                {
                public:
                    ReportTaskListInfo();
                    ~ReportTaskListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务列表详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rows 任务列表详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskInfoVo> GetRows() const;

                    /**
                     * 设置任务列表详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rows 任务列表详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRows(const std::vector<TaskInfoVo>& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNum 页码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageNum 页码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取每页条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageSize 每页条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageSize 每页条数
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
                     * 获取总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 总记录数
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

                private:

                    /**
                     * 任务列表详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskInfoVo> m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * 页码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 每页条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 总记录数
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTASKLISTINFO_H_
