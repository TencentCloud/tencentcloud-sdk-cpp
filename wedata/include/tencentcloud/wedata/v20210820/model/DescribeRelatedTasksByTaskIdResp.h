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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERELATEDTASKSBYTASKIDRESP_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERELATEDTASKSBYTASKIDRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RelatedTask.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 查询任务绑定的事件的响应
                */
                class DescribeRelatedTasksByTaskIdResp : public AbstractModel
                {
                public:
                    DescribeRelatedTasksByTaskIdResp();
                    ~DescribeRelatedTasksByTaskIdResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNumber 页码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageNumber 页码
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
                     * 获取单页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageSize 单页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置单页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageSize 单页大小
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
                     * 获取任务直接关联的上下游任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelatedTaskList 任务直接关联的上下游任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RelatedTask> GetRelatedTaskList() const;

                    /**
                     * 设置任务直接关联的上下游任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relatedTaskList 任务直接关联的上下游任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelatedTaskList(const std::vector<RelatedTask>& _relatedTaskList);

                    /**
                     * 判断参数 RelatedTaskList 是否已赋值
                     * @return RelatedTaskList 是否已赋值
                     * 
                     */
                    bool RelatedTaskListHasBeenSet() const;

                private:

                    /**
                     * 页码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 单页大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 总条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 任务直接关联的上下游任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RelatedTask> m_relatedTaskList;
                    bool m_relatedTaskListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERELATEDTASKSBYTASKIDRESP_H_
