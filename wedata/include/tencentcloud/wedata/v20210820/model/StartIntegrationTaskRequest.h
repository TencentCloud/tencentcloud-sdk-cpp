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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_STARTINTEGRATIONTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_STARTINTEGRATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RecordField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * StartIntegrationTask请求参数结构体
                */
                class StartIntegrationTaskRequest : public AbstractModel
                {
                public:
                    StartIntegrationTaskRequest();
                    ~StartIntegrationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
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
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取事件类型(START, STOP, SUSPEND, RESUME, COMMIT, TIMESTAMP)
                     * @return Event 事件类型(START, STOP, SUSPEND, RESUME, COMMIT, TIMESTAMP)
                     * 
                     */
                    std::string GetEvent() const;

                    /**
                     * 设置事件类型(START, STOP, SUSPEND, RESUME, COMMIT, TIMESTAMP)
                     * @param _event 事件类型(START, STOP, SUSPEND, RESUME, COMMIT, TIMESTAMP)
                     * 
                     */
                    void SetEvent(const std::string& _event);

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                    /**
                     * 获取额外参数
                     * @return ExtConfig 额外参数
                     * 
                     */
                    std::vector<RecordField> GetExtConfig() const;

                    /**
                     * 设置额外参数
                     * @param _extConfig 额外参数
                     * 
                     */
                    void SetExtConfig(const std::vector<RecordField>& _extConfig);

                    /**
                     * 判断参数 ExtConfig 是否已赋值
                     * @return ExtConfig 是否已赋值
                     * 
                     */
                    bool ExtConfigHasBeenSet() const;

                    /**
                     * 获取操作类型描述
                     * @return EventDesc 操作类型描述
                     * 
                     */
                    std::string GetEventDesc() const;

                    /**
                     * 设置操作类型描述
                     * @param _eventDesc 操作类型描述
                     * 
                     */
                    void SetEventDesc(const std::string& _eventDesc);

                    /**
                     * 判断参数 EventDesc 是否已赋值
                     * @return EventDesc 是否已赋值
                     * 
                     */
                    bool EventDescHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 事件类型(START, STOP, SUSPEND, RESUME, COMMIT, TIMESTAMP)
                     */
                    std::string m_event;
                    bool m_eventHasBeenSet;

                    /**
                     * 额外参数
                     */
                    std::vector<RecordField> m_extConfig;
                    bool m_extConfigHasBeenSet;

                    /**
                     * 操作类型描述
                     */
                    std::string m_eventDesc;
                    bool m_eventDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_STARTINTEGRATIONTASKREQUEST_H_
