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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKFOLDERDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKFOLDERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 任务文件夹详细信息
                */
                class TaskFolderDetail : public AbstractModel
                {
                public:
                    TaskFolderDetail();
                    ~TaskFolderDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskFolderId 文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskFolderId() const;

                    /**
                     * 设置文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskFolderId 文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskFolderId(const std::string& _taskFolderId);

                    /**
                     * 判断参数 TaskFolderId 是否已赋值
                     * @return TaskFolderId 是否已赋值
                     * 
                     */
                    bool TaskFolderIdHasBeenSet() const;

                    /**
                     * 获取文件夹绝对路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskFolderPath 文件夹绝对路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskFolderPath() const;

                    /**
                     * 设置文件夹绝对路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskFolderPath 文件夹绝对路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskFolderPath(const std::string& _taskFolderPath);

                    /**
                     * 判断参数 TaskFolderPath 是否已赋值
                     * @return TaskFolderPath 是否已赋值
                     * 
                     */
                    bool TaskFolderPathHasBeenSet() const;

                    /**
                     * 获取创建人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserUin 创建人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置创建人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUserUin 创建人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取父文件夹绝对路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentTaskFolderPath 父文件夹绝对路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentTaskFolderPath() const;

                    /**
                     * 设置父文件夹绝对路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentTaskFolderPath 父文件夹绝对路径
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskFolderName 文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskFolderName() const;

                    /**
                     * 设置文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskFolderName 文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

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

注意：此字段可能返回 null，表示取不到有效值。
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

注意：此字段可能返回 null，表示取不到有效值。
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

注意：此字段可能返回 null，表示取不到有效值。
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

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskFolderType(const std::string& _taskFolderType);

                    /**
                     * 判断参数 TaskFolderType 是否已赋值
                     * @return TaskFolderType 是否已赋值
                     * 
                     */
                    bool TaskFolderTypeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskFolderId;
                    bool m_taskFolderIdHasBeenSet;

                    /**
                     * 文件夹绝对路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskFolderPath;
                    bool m_taskFolderPathHasBeenSet;

                    /**
                     * 创建人ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * 父文件夹绝对路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentTaskFolderPath;
                    bool m_parentTaskFolderPathHasBeenSet;

                    /**
                     * 文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskFolderName;
                    bool m_taskFolderNameHasBeenSet;

                    /**
                     * 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

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

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskFolderType;
                    bool m_taskFolderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKFOLDERDETAIL_H_
