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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_TASKINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_TASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 复杂文档合成任务的任务信息
                */
                class TaskInfo : public AbstractModel
                {
                public:
                    TaskInfo();
                    ~TaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合成任务Id，可以通过 ChannelGetTaskResultApi 接口获取任务信息
                     * @return TaskId 合成任务Id，可以通过 ChannelGetTaskResultApi 接口获取任务信息
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置合成任务Id，可以通过 ChannelGetTaskResultApi 接口获取任务信息
                     * @param _taskId 合成任务Id，可以通过 ChannelGetTaskResultApi 接口获取任务信息
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务状态：READY - 任务已完成；NOTREADY - 任务未完成；
                     * @return TaskStatus 任务状态：READY - 任务已完成；NOTREADY - 任务未完成；
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置任务状态：READY - 任务已完成；NOTREADY - 任务未完成；
                     * @param _taskStatus 任务状态：READY - 任务已完成；NOTREADY - 任务未完成；
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * 合成任务Id，可以通过 ChannelGetTaskResultApi 接口获取任务信息
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务状态：READY - 任务已完成；NOTREADY - 任务未完成；
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_TASKINFO_H_
