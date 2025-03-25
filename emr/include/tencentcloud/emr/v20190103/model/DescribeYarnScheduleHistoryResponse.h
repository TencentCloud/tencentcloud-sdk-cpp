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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEYARNSCHEDULEHISTORYRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEYARNSCHEDULEHISTORYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/SchedulerTaskInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeYarnScheduleHistory返回参数结构体
                */
                class DescribeYarnScheduleHistoryResponse : public AbstractModel
                {
                public:
                    DescribeYarnScheduleHistoryResponse();
                    ~DescribeYarnScheduleHistoryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks 任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SchedulerTaskInfo> GetTasks() const;

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取任务详情总数
                     * @return Total 任务详情总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取调度类型筛选列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerNameList 调度类型筛选列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSchedulerNameList() const;

                    /**
                     * 判断参数 SchedulerNameList 是否已赋值
                     * @return SchedulerNameList 是否已赋值
                     * 
                     */
                    bool SchedulerNameListHasBeenSet() const;

                    /**
                     * 获取状态筛选列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StateList 状态筛选列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetStateList() const;

                    /**
                     * 判断参数 StateList 是否已赋值
                     * @return StateList 是否已赋值
                     * 
                     */
                    bool StateListHasBeenSet() const;

                private:

                    /**
                     * 任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SchedulerTaskInfo> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 任务详情总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 调度类型筛选列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_schedulerNameList;
                    bool m_schedulerNameListHasBeenSet;

                    /**
                     * 状态筛选列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_stateList;
                    bool m_stateListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEYARNSCHEDULEHISTORYRESPONSE_H_
