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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHSTARTINTEGRATIONTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHSTARTINTEGRATIONTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/StartTaskInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * BatchStartIntegrationTasks请求参数结构体
                */
                class BatchStartIntegrationTasksRequest : public AbstractModel
                {
                public:
                    BatchStartIntegrationTasksRequest();
                    ~BatchStartIntegrationTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务类型，201为实时任务，202为离线任务
                     * @return TaskType 任务类型，201为实时任务，202为离线任务
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置任务类型，201为实时任务，202为离线任务
                     * @param _taskType 任务类型，201为实时任务，202为离线任务
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

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
                     * 获取任务id
                     * @return TaskIds 任务id
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置任务id
                     * @param _taskIds 任务id
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取批量运行集成任务，目前仅实时集成用到了这个参数
                     * @return StartTaskInfoSet 批量运行集成任务，目前仅实时集成用到了这个参数
                     * 
                     */
                    std::vector<StartTaskInfo> GetStartTaskInfoSet() const;

                    /**
                     * 设置批量运行集成任务，目前仅实时集成用到了这个参数
                     * @param _startTaskInfoSet 批量运行集成任务，目前仅实时集成用到了这个参数
                     * 
                     */
                    void SetStartTaskInfoSet(const std::vector<StartTaskInfo>& _startTaskInfoSet);

                    /**
                     * 判断参数 StartTaskInfoSet 是否已赋值
                     * @return StartTaskInfoSet 是否已赋值
                     * 
                     */
                    bool StartTaskInfoSetHasBeenSet() const;

                private:

                    /**
                     * 任务类型，201为实时任务，202为离线任务
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务id
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 批量运行集成任务，目前仅实时集成用到了这个参数
                     */
                    std::vector<StartTaskInfo> m_startTaskInfoSet;
                    bool m_startTaskInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHSTARTINTEGRATIONTASKSREQUEST_H_
