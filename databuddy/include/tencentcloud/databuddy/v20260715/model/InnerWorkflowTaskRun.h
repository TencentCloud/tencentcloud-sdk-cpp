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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUN_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskRunIteration.h>
#include <tencentcloud/databuddy/v20260715/model/ScheduleBizEnumBrief.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 内嵌工作流任务运行详情（仅限 FOR_EACH 任务）
                */
                class InnerWorkflowTaskRun : public AbstractModel
                {
                public:
                    InnerWorkflowTaskRun();
                    ~InnerWorkflowTaskRun() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNumber 当前页码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置当前页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageNumber 当前页码
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
                     * 获取每页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageSize 每页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageSize 每页大小
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
                     * 获取总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 总记录数
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
                     * @return TotalPageNumber 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalPageNumber() const;

                    /**
                     * 设置总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalPageNumber 总页数
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
                     * 获取迭代运行列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 迭代运行列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InnerWorkflowTaskRunIteration> GetItems() const;

                    /**
                     * 设置迭代运行列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items 迭代运行列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<InnerWorkflowTaskRunIteration>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取迭代次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IterationCount 迭代次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIterationCount() const;

                    /**
                     * 设置迭代次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iterationCount 迭代次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIterationCount(const int64_t& _iterationCount);

                    /**
                     * 判断参数 IterationCount 是否已赋值
                     * @return IterationCount 是否已赋值
                     * 
                     */
                    bool IterationCountHasBeenSet() const;

                    /**
                     * 获取失败次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailureCount 失败次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFailureCount() const;

                    /**
                     * 设置失败次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failureCount 失败次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailureCount(const int64_t& _failureCount);

                    /**
                     * 判断参数 FailureCount 是否已赋值
                     * @return FailureCount 是否已赋值
                     * 
                     */
                    bool FailureCountHasBeenSet() const;

                    /**
                     * 获取成功次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessCount 成功次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置成功次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successCount 成功次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取内嵌工作流ID，可通过 ListWorkflows 获取
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerWorkflowId 内嵌工作流ID，可通过 ListWorkflows 获取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInnerWorkflowId() const;

                    /**
                     * 设置内嵌工作流ID，可通过 ListWorkflows 获取
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _innerWorkflowId 内嵌工作流ID，可通过 ListWorkflows 获取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInnerWorkflowId(const std::string& _innerWorkflowId);

                    /**
                     * 判断参数 InnerWorkflowId 是否已赋值
                     * @return InnerWorkflowId 是否已赋值
                     * 
                     */
                    bool InnerWorkflowIdHasBeenSet() const;

                    /**
                     * 获取内嵌任务ID，可通过 ListWorkflowTasks 获取
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerTaskId 内嵌任务ID，可通过 ListWorkflowTasks 获取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInnerTaskId() const;

                    /**
                     * 设置内嵌任务ID，可通过 ListWorkflowTasks 获取
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _innerTaskId 内嵌任务ID，可通过 ListWorkflowTasks 获取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInnerTaskId(const std::string& _innerTaskId);

                    /**
                     * 判断参数 InnerTaskId 是否已赋值
                     * @return InnerTaskId 是否已赋值
                     * 
                     */
                    bool InnerTaskIdHasBeenSet() const;

                    /**
                     * 获取内嵌任务运行状态数量统计（实例业务枚举键值对列表）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerTaskRunBizEnumInfos 内嵌任务运行状态数量统计（实例业务枚举键值对列表）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ScheduleBizEnumBrief> GetInnerTaskRunBizEnumInfos() const;

                    /**
                     * 设置内嵌任务运行状态数量统计（实例业务枚举键值对列表）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _innerTaskRunBizEnumInfos 内嵌任务运行状态数量统计（实例业务枚举键值对列表）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInnerTaskRunBizEnumInfos(const std::vector<ScheduleBizEnumBrief>& _innerTaskRunBizEnumInfos);

                    /**
                     * 判断参数 InnerTaskRunBizEnumInfos 是否已赋值
                     * @return InnerTaskRunBizEnumInfos 是否已赋值
                     * 
                     */
                    bool InnerTaskRunBizEnumInfosHasBeenSet() const;

                private:

                    /**
                     * 当前页码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                    /**
                     * 迭代运行列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InnerWorkflowTaskRunIteration> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 迭代次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_iterationCount;
                    bool m_iterationCountHasBeenSet;

                    /**
                     * 失败次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_failureCount;
                    bool m_failureCountHasBeenSet;

                    /**
                     * 成功次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 内嵌工作流ID，可通过 ListWorkflows 获取
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_innerWorkflowId;
                    bool m_innerWorkflowIdHasBeenSet;

                    /**
                     * 内嵌任务ID，可通过 ListWorkflowTasks 获取
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_innerTaskId;
                    bool m_innerTaskIdHasBeenSet;

                    /**
                     * 内嵌任务运行状态数量统计（实例业务枚举键值对列表）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ScheduleBizEnumBrief> m_innerTaskRunBizEnumInfos;
                    bool m_innerTaskRunBizEnumInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUN_H_
