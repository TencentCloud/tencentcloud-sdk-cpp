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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTSCHEDULEDTASKSRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTSCHEDULEDTASKSRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/ScheduledTaskDetail.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 定时任务列表分页结果
                */
                class ListScheduledTasksRsp : public AbstractModel
                {
                public:
                    ListScheduledTasksRsp();
                    ~ListScheduledTasksRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>当前页任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks <p>当前页任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ScheduledTaskDetail> GetTasks() const;

                    /**
                     * 设置<p>当前页任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tasks <p>当前页任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTasks(const std::vector<ScheduledTaskDetail>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取<p>符合筛选条件的任务总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total <p>符合筛选条件的任务总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置<p>符合筛选条件的任务总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total <p>符合筛选条件的任务总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>当前页码（从 1 开始）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Page <p>当前页码（从 1 开始）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>当前页码（从 1 开始）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _page <p>当前页码（从 1 开始）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取<p>实际生效的每页数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageSize <p>实际生效的每页数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>实际生效的每页数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageSize <p>实际生效的每页数量</p>
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

                private:

                    /**
                     * <p>当前页任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ScheduledTaskDetail> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>符合筛选条件的任务总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>当前页码（从 1 开始）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>实际生效的每页数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTSCHEDULEDTASKSRSP_H_
