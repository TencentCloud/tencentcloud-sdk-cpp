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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_EXECUTETASKINSTANCEREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_EXECUTETASKINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ExecuteTaskInstance请求参数结构体
                */
                class ExecuteTaskInstanceRequest : public AbstractModel
                {
                public:
                    ExecuteTaskInstanceRequest();
                    ~ExecuteTaskInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务动作ID
                     * @return TaskActionId 任务动作ID
                     * 
                     */
                    uint64_t GetTaskActionId() const;

                    /**
                     * 设置任务动作ID
                     * @param _taskActionId 任务动作ID
                     * 
                     */
                    void SetTaskActionId(const uint64_t& _taskActionId);

                    /**
                     * 判断参数 TaskActionId 是否已赋值
                     * @return TaskActionId 是否已赋值
                     * 
                     */
                    bool TaskActionIdHasBeenSet() const;

                    /**
                     * 获取任务动作实例ID
                     * @return TaskInstanceIds 任务动作实例ID
                     * 
                     */
                    std::vector<uint64_t> GetTaskInstanceIds() const;

                    /**
                     * 设置任务动作实例ID
                     * @param _taskInstanceIds 任务动作实例ID
                     * 
                     */
                    void SetTaskInstanceIds(const std::vector<uint64_t>& _taskInstanceIds);

                    /**
                     * 判断参数 TaskInstanceIds 是否已赋值
                     * @return TaskInstanceIds 是否已赋值
                     * 
                     */
                    bool TaskInstanceIdsHasBeenSet() const;

                    /**
                     * 获取是否操作整个任务
                     * @return IsOperateAll 是否操作整个任务
                     * 
                     */
                    bool GetIsOperateAll() const;

                    /**
                     * 设置是否操作整个任务
                     * @param _isOperateAll 是否操作整个任务
                     * 
                     */
                    void SetIsOperateAll(const bool& _isOperateAll);

                    /**
                     * 判断参数 IsOperateAll 是否已赋值
                     * @return IsOperateAll 是否已赋值
                     * 
                     */
                    bool IsOperateAllHasBeenSet() const;

                    /**
                     * 获取操作类型：（1--启动   2--执行  3--跳过   5--重试）
                     * @return ActionType 操作类型：（1--启动   2--执行  3--跳过   5--重试）
                     * 
                     */
                    uint64_t GetActionType() const;

                    /**
                     * 设置操作类型：（1--启动   2--执行  3--跳过   5--重试）
                     * @param _actionType 操作类型：（1--启动   2--执行  3--跳过   5--重试）
                     * 
                     */
                    void SetActionType(const uint64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取动作组ID
                     * @return TaskGroupId 动作组ID
                     * 
                     */
                    uint64_t GetTaskGroupId() const;

                    /**
                     * 设置动作组ID
                     * @param _taskGroupId 动作组ID
                     * 
                     */
                    void SetTaskGroupId(const uint64_t& _taskGroupId);

                    /**
                     * 判断参数 TaskGroupId 是否已赋值
                     * @return TaskGroupId 是否已赋值
                     * 
                     */
                    bool TaskGroupIdHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务动作ID
                     */
                    uint64_t m_taskActionId;
                    bool m_taskActionIdHasBeenSet;

                    /**
                     * 任务动作实例ID
                     */
                    std::vector<uint64_t> m_taskInstanceIds;
                    bool m_taskInstanceIdsHasBeenSet;

                    /**
                     * 是否操作整个任务
                     */
                    bool m_isOperateAll;
                    bool m_isOperateAllHasBeenSet;

                    /**
                     * 操作类型：（1--启动   2--执行  3--跳过   5--重试）
                     */
                    uint64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 动作组ID
                     */
                    uint64_t m_taskGroupId;
                    bool m_taskGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_EXECUTETASKINSTANCEREQUEST_H_
