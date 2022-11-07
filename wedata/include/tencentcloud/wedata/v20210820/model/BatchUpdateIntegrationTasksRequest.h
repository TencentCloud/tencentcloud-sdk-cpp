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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHUPDATEINTEGRATIONTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHUPDATEINTEGRATIONTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * BatchUpdateIntegrationTasks请求参数结构体
                */
                class BatchUpdateIntegrationTasksRequest : public AbstractModel
                {
                public:
                    BatchUpdateIntegrationTasksRequest();
                    ~BatchUpdateIntegrationTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id
                     * @return TaskIds 任务id
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置任务id
                     * @param TaskIds 任务id
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取责任人（多个责任人用小写分号隔开；离线任务传入的是账号名，实时任务传入的是账号id）
                     * @return Incharge 责任人（多个责任人用小写分号隔开；离线任务传入的是账号名，实时任务传入的是账号id）
                     */
                    std::string GetIncharge() const;

                    /**
                     * 设置责任人（多个责任人用小写分号隔开；离线任务传入的是账号名，实时任务传入的是账号id）
                     * @param Incharge 责任人（多个责任人用小写分号隔开；离线任务传入的是账号名，实时任务传入的是账号id）
                     */
                    void SetIncharge(const std::string& _incharge);

                    /**
                     * 判断参数 Incharge 是否已赋值
                     * @return Incharge 是否已赋值
                     */
                    bool InchargeHasBeenSet() const;

                    /**
                     * 获取任务类型
                     * @return TaskType 任务类型
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置任务类型
                     * @param TaskType 任务类型
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param ProjectId 项目id
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 责任人（多个责任人用小写分号隔开；离线任务传入的是账号名，实时任务传入的是账号id）
                     */
                    std::string m_incharge;
                    bool m_inchargeHasBeenSet;

                    /**
                     * 任务类型
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHUPDATEINTEGRATIONTASKSREQUEST_H_
