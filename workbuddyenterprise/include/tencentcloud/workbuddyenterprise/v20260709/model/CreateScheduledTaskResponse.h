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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CREATESCHEDULEDTASKRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CREATESCHEDULEDTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * CreateScheduledTask返回参数结构体
                */
                class CreateScheduledTaskResponse : public AbstractModel
                {
                public:
                    CreateScheduledTaskResponse();
                    ~CreateScheduledTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务 ID</p>
                     * @return TaskId <p>任务 ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务唯一标识</p>
                     * @return TaskKey <p>任务唯一标识</p>
                     * 
                     */
                    std::string GetTaskKey() const;

                    /**
                     * 判断参数 TaskKey 是否已赋值
                     * @return TaskKey 是否已赋值
                     * 
                     */
                    bool TaskKeyHasBeenSet() const;

                    /**
                     * 获取<p>任务状态：ACTIVE（启用）/ PAUSED（暂停）/ DISABLED（停用）</p>
                     * @return Status <p>任务状态：ACTIVE（启用）/ PAUSED（暂停）/ DISABLED（停用）</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>下次执行时间</p>
                     * @return NextRunTime <p>下次执行时间</p>
                     * 
                     */
                    std::string GetNextRunTime() const;

                    /**
                     * 判断参数 NextRunTime 是否已赋值
                     * @return NextRunTime 是否已赋值
                     * 
                     */
                    bool NextRunTimeHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务唯一标识</p>
                     */
                    std::string m_taskKey;
                    bool m_taskKeyHasBeenSet;

                    /**
                     * <p>任务状态：ACTIVE（启用）/ PAUSED（暂停）/ DISABLED（停用）</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>下次执行时间</p>
                     */
                    std::string m_nextRunTime;
                    bool m_nextRunTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CREATESCHEDULEDTASKRESPONSE_H_
