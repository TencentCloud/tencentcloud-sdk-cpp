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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPTASKSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TaskResponseInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeSparkAppTasks返回参数结构体
                */
                class DescribeSparkAppTasksResponse : public AbstractModel
                {
                public:
                    DescribeSparkAppTasksResponse();
                    ~DescribeSparkAppTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务结果（该字段已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks 任务结果（该字段已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskResponseInfo GetTasks() const;

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取任务总数
                     * @return TotalCount 任务总数
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取任务结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkAppTasks 任务结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskResponseInfo> GetSparkAppTasks() const;

                    /**
                     * 判断参数 SparkAppTasks 是否已赋值
                     * @return SparkAppTasks 是否已赋值
                     */
                    bool SparkAppTasksHasBeenSet() const;

                private:

                    /**
                     * 任务结果（该字段已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskResponseInfo m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 任务总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 任务结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskResponseInfo> m_sparkAppTasks;
                    bool m_sparkAppTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPTASKSRESPONSE_H_
