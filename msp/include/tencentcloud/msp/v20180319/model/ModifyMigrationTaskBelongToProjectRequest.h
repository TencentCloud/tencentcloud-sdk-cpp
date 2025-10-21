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

#ifndef TENCENTCLOUD_MSP_V20180319_MODEL_MODIFYMIGRATIONTASKBELONGTOPROJECTREQUEST_H_
#define TENCENTCLOUD_MSP_V20180319_MODEL_MODIFYMIGRATIONTASKBELONGTOPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Msp
    {
        namespace V20180319
        {
            namespace Model
            {
                /**
                * ModifyMigrationTaskBelongToProject请求参数结构体
                */
                class ModifyMigrationTaskBelongToProjectRequest : public AbstractModel
                {
                public:
                    ModifyMigrationTaskBelongToProjectRequest();
                    ~ModifyMigrationTaskBelongToProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID，例如msp-jitoh33n
                     * @return TaskId 任务ID，例如msp-jitoh33n
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID，例如msp-jitoh33n
                     * @param _taskId 任务ID，例如msp-jitoh33n
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
                     * 获取项目ID，例如10005
                     * @return ProjectId 项目ID，例如10005
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID，例如10005
                     * @param _projectId 项目ID，例如10005
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 任务ID，例如msp-jitoh33n
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 项目ID，例如10005
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MSP_V20180319_MODEL_MODIFYMIGRATIONTASKBELONGTOPROJECTREQUEST_H_
