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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATESCRIPTSIMPORTTASKSDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATESCRIPTSIMPORTTASKSDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskDsDTOLite.h>
#include <tencentcloud/wedata/v20210820/model/CustomizeBusinessEntityDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateScriptsImportTasksDs请求参数结构体
                */
                class CreateScriptsImportTasksDsRequest : public AbstractModel
                {
                public:
                    CreateScriptsImportTasksDsRequest();
                    ~CreateScriptsImportTasksDsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务属性
                     * @return Task 任务属性
                     * 
                     */
                    TaskDsDTOLite GetTask() const;

                    /**
                     * 设置任务属性
                     * @param _task 任务属性
                     * 
                     */
                    void SetTask(const TaskDsDTOLite& _task);

                    /**
                     * 判断参数 Task 是否已赋值
                     * @return Task 是否已赋值
                     * 
                     */
                    bool TaskHasBeenSet() const;

                    /**
                     * 获取自定义业务实体信息列表
                     * @return EntityDTOList 自定义业务实体信息列表
                     * 
                     */
                    std::vector<CustomizeBusinessEntityDTO> GetEntityDTOList() const;

                    /**
                     * 设置自定义业务实体信息列表
                     * @param _entityDTOList 自定义业务实体信息列表
                     * 
                     */
                    void SetEntityDTOList(const std::vector<CustomizeBusinessEntityDTO>& _entityDTOList);

                    /**
                     * 判断参数 EntityDTOList 是否已赋值
                     * @return EntityDTOList 是否已赋值
                     * 
                     */
                    bool EntityDTOListHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取0:跳过；1:重命名
                     * @return TaskNameExistMode 0:跳过；1:重命名
                     * 
                     */
                    int64_t GetTaskNameExistMode() const;

                    /**
                     * 设置0:跳过；1:重命名
                     * @param _taskNameExistMode 0:跳过；1:重命名
                     * 
                     */
                    void SetTaskNameExistMode(const int64_t& _taskNameExistMode);

                    /**
                     * 判断参数 TaskNameExistMode 是否已赋值
                     * @return TaskNameExistMode 是否已赋值
                     * 
                     */
                    bool TaskNameExistModeHasBeenSet() const;

                    /**
                     * 获取任务目录ID
                     * @return TaskFolderId 任务目录ID
                     * 
                     */
                    std::string GetTaskFolderId() const;

                    /**
                     * 设置任务目录ID
                     * @param _taskFolderId 任务目录ID
                     * 
                     */
                    void SetTaskFolderId(const std::string& _taskFolderId);

                    /**
                     * 判断参数 TaskFolderId 是否已赋值
                     * @return TaskFolderId 是否已赋值
                     * 
                     */
                    bool TaskFolderIdHasBeenSet() const;

                private:

                    /**
                     * 任务属性
                     */
                    TaskDsDTOLite m_task;
                    bool m_taskHasBeenSet;

                    /**
                     * 自定义业务实体信息列表
                     */
                    std::vector<CustomizeBusinessEntityDTO> m_entityDTOList;
                    bool m_entityDTOListHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 0:跳过；1:重命名
                     */
                    int64_t m_taskNameExistMode;
                    bool m_taskNameExistModeHasBeenSet;

                    /**
                     * 任务目录ID
                     */
                    std::string m_taskFolderId;
                    bool m_taskFolderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATESCRIPTSIMPORTTASKSDSREQUEST_H_
