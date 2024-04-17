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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHDELETEINTEGRATIONTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHDELETEINTEGRATIONTASKSREQUEST_H_

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
                * BatchDeleteIntegrationTasks请求参数结构体
                */
                class BatchDeleteIntegrationTasksRequest : public AbstractModel
                {
                public:
                    BatchDeleteIntegrationTasksRequest();
                    ~BatchDeleteIntegrationTasksRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取是否删除开发态任务。默认不删除开发态，为 0 不删除 , 为 1 删除
                     * @return DeleteKFFlag 是否删除开发态任务。默认不删除开发态，为 0 不删除 , 为 1 删除
                     * 
                     */
                    int64_t GetDeleteKFFlag() const;

                    /**
                     * 设置是否删除开发态任务。默认不删除开发态，为 0 不删除 , 为 1 删除
                     * @param _deleteKFFlag 是否删除开发态任务。默认不删除开发态，为 0 不删除 , 为 1 删除
                     * 
                     */
                    void SetDeleteKFFlag(const int64_t& _deleteKFFlag);

                    /**
                     * 判断参数 DeleteKFFlag 是否已赋值
                     * @return DeleteKFFlag 是否已赋值
                     * 
                     */
                    bool DeleteKFFlagHasBeenSet() const;

                    /**
                     * 获取操作名称
                     * @return Name 操作名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置操作名称
                     * @param _name 操作名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取本次批量操作涉及任务，用于审计
                     * @return TaskNames 本次批量操作涉及任务，用于审计
                     * 
                     */
                    std::vector<std::string> GetTaskNames() const;

                    /**
                     * 设置本次批量操作涉及任务，用于审计
                     * @param _taskNames 本次批量操作涉及任务，用于审计
                     * 
                     */
                    void SetTaskNames(const std::vector<std::string>& _taskNames);

                    /**
                     * 判断参数 TaskNames 是否已赋值
                     * @return TaskNames 是否已赋值
                     * 
                     */
                    bool TaskNamesHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

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
                     * 是否删除开发态任务。默认不删除开发态，为 0 不删除 , 为 1 删除
                     */
                    int64_t m_deleteKFFlag;
                    bool m_deleteKFFlagHasBeenSet;

                    /**
                     * 操作名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 本次批量操作涉及任务，用于审计
                     */
                    std::vector<std::string> m_taskNames;
                    bool m_taskNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHDELETEINTEGRATIONTASKSREQUEST_H_
