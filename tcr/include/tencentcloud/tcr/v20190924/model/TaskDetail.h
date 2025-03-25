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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_TASKDETAIL_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_TASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 任务详情
                */
                class TaskDetail : public AbstractModel
                {
                public:
                    TaskDetail();
                    ~TaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务
                     * @return TaskName 任务
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务
                     * @param _taskName 任务
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取任务UUID
                     * @return TaskUUID 任务UUID
                     * 
                     */
                    std::string GetTaskUUID() const;

                    /**
                     * 设置任务UUID
                     * @param _taskUUID 任务UUID
                     * 
                     */
                    void SetTaskUUID(const std::string& _taskUUID);

                    /**
                     * 判断参数 TaskUUID 是否已赋值
                     * @return TaskUUID 是否已赋值
                     * 
                     */
                    bool TaskUUIDHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return TaskStatus 任务状态
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置任务状态
                     * @param _taskStatus 任务状态
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取任务的状态信息
                     * @return TaskMessage 任务的状态信息
                     * 
                     */
                    std::string GetTaskMessage() const;

                    /**
                     * 设置任务的状态信息
                     * @param _taskMessage 任务的状态信息
                     * 
                     */
                    void SetTaskMessage(const std::string& _taskMessage);

                    /**
                     * 判断参数 TaskMessage 是否已赋值
                     * @return TaskMessage 是否已赋值
                     * 
                     */
                    bool TaskMessageHasBeenSet() const;

                    /**
                     * 获取任务开始时间
                     * @return CreatedTime 任务开始时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置任务开始时间
                     * @param _createdTime 任务开始时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取任务结束时间
                     * @return FinishedTime 任务结束时间
                     * 
                     */
                    std::string GetFinishedTime() const;

                    /**
                     * 设置任务结束时间
                     * @param _finishedTime 任务结束时间
                     * 
                     */
                    void SetFinishedTime(const std::string& _finishedTime);

                    /**
                     * 判断参数 FinishedTime 是否已赋值
                     * @return FinishedTime 是否已赋值
                     * 
                     */
                    bool FinishedTimeHasBeenSet() const;

                private:

                    /**
                     * 任务
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务UUID
                     */
                    std::string m_taskUUID;
                    bool m_taskUUIDHasBeenSet;

                    /**
                     * 任务状态
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 任务的状态信息
                     */
                    std::string m_taskMessage;
                    bool m_taskMessageHasBeenSet;

                    /**
                     * 任务开始时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 任务结束时间
                     */
                    std::string m_finishedTime;
                    bool m_finishedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TASKDETAIL_H_
