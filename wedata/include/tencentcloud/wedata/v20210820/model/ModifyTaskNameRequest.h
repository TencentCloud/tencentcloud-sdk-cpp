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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKNAMEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKNAMEREQUEST_H_

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
                * ModifyTaskName请求参数结构体
                */
                class ModifyTaskNameRequest : public AbstractModel
                {
                public:
                    ModifyTaskNameRequest();
                    ~ModifyTaskNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取名称
                     * @return TaskName 名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置名称
                     * @param _taskName 名称
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
                     * 获取id
                     * @return TaskId id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置id
                     * @param _taskId id
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
                     * 获取项目/工作空间id
                     * @return ProjectId 项目/工作空间id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目/工作空间id
                     * @param _projectId 项目/工作空间id
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
                     * 获取备注
                     * @return Notes 备注
                     * 
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置备注
                     * @param _notes 备注
                     * 
                     */
                    void SetNotes(const std::string& _notes);

                    /**
                     * 判断参数 Notes 是否已赋值
                     * @return Notes 是否已赋值
                     * 
                     */
                    bool NotesHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 项目/工作空间id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKNAMEREQUEST_H_
