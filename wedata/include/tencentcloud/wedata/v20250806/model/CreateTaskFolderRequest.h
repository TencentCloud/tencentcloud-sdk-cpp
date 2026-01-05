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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKFOLDERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKFOLDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * CreateTaskFolder请求参数结构体
                */
                class CreateTaskFolderRequest : public AbstractModel
                {
                public:
                    CreateTaskFolderRequest();
                    ~CreateTaskFolderRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取父文件夹绝对路径，如/abc/de，如果是根目录则传/
                     * @return ParentTaskFolderPath 父文件夹绝对路径，如/abc/de，如果是根目录则传/
                     * 
                     */
                    std::string GetParentTaskFolderPath() const;

                    /**
                     * 设置父文件夹绝对路径，如/abc/de，如果是根目录则传/
                     * @param _parentTaskFolderPath 父文件夹绝对路径，如/abc/de，如果是根目录则传/
                     * 
                     */
                    void SetParentTaskFolderPath(const std::string& _parentTaskFolderPath);

                    /**
                     * 判断参数 ParentTaskFolderPath 是否已赋值
                     * @return ParentTaskFolderPath 是否已赋值
                     * 
                     */
                    bool ParentTaskFolderPathHasBeenSet() const;

                    /**
                     * 获取要创建的文件夹名字
                     * @return TaskFolderName 要创建的文件夹名字
                     * 
                     */
                    std::string GetTaskFolderName() const;

                    /**
                     * 设置要创建的文件夹名字
                     * @param _taskFolderName 要创建的文件夹名字
                     * 
                     */
                    void SetTaskFolderName(const std::string& _taskFolderName);

                    /**
                     * 判断参数 TaskFolderName 是否已赋值
                     * @return TaskFolderName 是否已赋值
                     * 
                     */
                    bool TaskFolderNameHasBeenSet() const;

                    /**
                     * 获取任务文件夹类型

| 任务文件夹类型取值 | 任务文件夹类型界面对应名称 |
| ---------------- | ------------------------ |
| ETL              | 集成任务                 |
| EMR              | EMR                      |
| DLC              | DLC                      |
| SETATS           | SETATS                   |
| TDSQL            | TDSQL                    |
| TCHOUSE          | TCHOUSE                  |
| GENERAL          | 通用                     |
| TI_ONE           | TI-ONE机器学习           |
| ACROSS_WORKFLOWS | 跨工作流                 |
                     * @return TaskFolderType 任务文件夹类型

| 任务文件夹类型取值 | 任务文件夹类型界面对应名称 |
| ---------------- | ------------------------ |
| ETL              | 集成任务                 |
| EMR              | EMR                      |
| DLC              | DLC                      |
| SETATS           | SETATS                   |
| TDSQL            | TDSQL                    |
| TCHOUSE          | TCHOUSE                  |
| GENERAL          | 通用                     |
| TI_ONE           | TI-ONE机器学习           |
| ACROSS_WORKFLOWS | 跨工作流                 |
                     * 
                     */
                    std::string GetTaskFolderType() const;

                    /**
                     * 设置任务文件夹类型

| 任务文件夹类型取值 | 任务文件夹类型界面对应名称 |
| ---------------- | ------------------------ |
| ETL              | 集成任务                 |
| EMR              | EMR                      |
| DLC              | DLC                      |
| SETATS           | SETATS                   |
| TDSQL            | TDSQL                    |
| TCHOUSE          | TCHOUSE                  |
| GENERAL          | 通用                     |
| TI_ONE           | TI-ONE机器学习           |
| ACROSS_WORKFLOWS | 跨工作流                 |
                     * @param _taskFolderType 任务文件夹类型

| 任务文件夹类型取值 | 任务文件夹类型界面对应名称 |
| ---------------- | ------------------------ |
| ETL              | 集成任务                 |
| EMR              | EMR                      |
| DLC              | DLC                      |
| SETATS           | SETATS                   |
| TDSQL            | TDSQL                    |
| TCHOUSE          | TCHOUSE                  |
| GENERAL          | 通用                     |
| TI_ONE           | TI-ONE机器学习           |
| ACROSS_WORKFLOWS | 跨工作流                 |
                     * 
                     */
                    void SetTaskFolderType(const std::string& _taskFolderType);

                    /**
                     * 判断参数 TaskFolderType 是否已赋值
                     * @return TaskFolderType 是否已赋值
                     * 
                     */
                    bool TaskFolderTypeHasBeenSet() const;

                    /**
                     * 获取工作流ID
                     * @return WorkflowId 工作流ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流ID
                     * @param _workflowId 工作流ID
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 父文件夹绝对路径，如/abc/de，如果是根目录则传/
                     */
                    std::string m_parentTaskFolderPath;
                    bool m_parentTaskFolderPathHasBeenSet;

                    /**
                     * 要创建的文件夹名字
                     */
                    std::string m_taskFolderName;
                    bool m_taskFolderNameHasBeenSet;

                    /**
                     * 任务文件夹类型

| 任务文件夹类型取值 | 任务文件夹类型界面对应名称 |
| ---------------- | ------------------------ |
| ETL              | 集成任务                 |
| EMR              | EMR                      |
| DLC              | DLC                      |
| SETATS           | SETATS                   |
| TDSQL            | TDSQL                    |
| TCHOUSE          | TCHOUSE                  |
| GENERAL          | 通用                     |
| TI_ONE           | TI-ONE机器学习           |
| ACROSS_WORKFLOWS | 跨工作流                 |
                     */
                    std::string m_taskFolderType;
                    bool m_taskFolderTypeHasBeenSet;

                    /**
                     * 工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKFOLDERREQUEST_H_
