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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKSESSIONBATCHSQLRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKSESSIONBATCHSQLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/BatchSqlTask.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeSparkSessionBatchSQL返回参数结构体
                */
                class DescribeSparkSessionBatchSQLResponse : public AbstractModel
                {
                public:
                    DescribeSparkSessionBatchSQLResponse();
                    ~DescribeSparkSessionBatchSQLResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取状态：0：运行中、1：成功、2：失败、3：取消、4：超时；
                     * @return State 状态：0：运行中、1：成功、2：失败、3：取消、4：超时；
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取SQL子任务列表，仅展示运行完成的子任务，若某个任务运行失败，后续其它子任务不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks SQL子任务列表，仅展示运行完成的子任务，若某个任务运行失败，后续其它子任务不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BatchSqlTask> GetTasks() const;

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取非sql运行的异常事件信息，包含资源创建失败、调度异常，JOB超时等，正常运行下该Event值为空
                     * @return Event 非sql运行的异常事件信息，包含资源创建失败、调度异常，JOB超时等，正常运行下该Event值为空
                     * 
                     */
                    std::string GetEvent() const;

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                private:

                    /**
                     * 状态：0：运行中、1：成功、2：失败、3：取消、4：超时；
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * SQL子任务列表，仅展示运行完成的子任务，若某个任务运行失败，后续其它子任务不返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BatchSqlTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 非sql运行的异常事件信息，包含资源创建失败、调度异常，JOB超时等，正常运行下该Event值为空
                     */
                    std::string m_event;
                    bool m_eventHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKSESSIONBATCHSQLRESPONSE_H_
