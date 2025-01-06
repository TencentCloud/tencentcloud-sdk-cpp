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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKFOLDERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKFOLDERREQUEST_H_

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
                * CreateTaskFolder请求参数结构体
                */
                class CreateTaskFolderRequest : public AbstractModel
                {
                public:
                    CreateTaskFolderRequest();
                    ~CreateTaskFolderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
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
                     * 获取文件夹名称
                     * @return FolderName 文件夹名称
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置文件夹名称
                     * @param _folderName 文件夹名称
                     * 
                     */
                    void SetFolderName(const std::string& _folderName);

                    /**
                     * 判断参数 FolderName 是否已赋值
                     * @return FolderName 是否已赋值
                     * 
                     */
                    bool FolderNameHasBeenSet() const;

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

                    /**
                     * 获取父文件夹ID
                     * @return ParentFolderId 父文件夹ID
                     * 
                     */
                    std::string GetParentFolderId() const;

                    /**
                     * 设置父文件夹ID
                     * @param _parentFolderId 父文件夹ID
                     * 
                     */
                    void SetParentFolderId(const std::string& _parentFolderId);

                    /**
                     * 判断参数 ParentFolderId 是否已赋值
                     * @return ParentFolderId 是否已赋值
                     * 
                     */
                    bool ParentFolderIdHasBeenSet() const;

                    /**
                     * 获取目录分类，该值必传，枚举值如下：
ETL：数据集成
EMR：EMR
TBDS：TBDS
DLC：DLC
TDSQL：TDSQL
TCHOUSE：TCHOUSE
GENERAL：通用
TI_ONE：TI-ONE机器学习
ACROSS_WORKFLOWS：跨工作流
                     * @return TaskNodeType 目录分类，该值必传，枚举值如下：
ETL：数据集成
EMR：EMR
TBDS：TBDS
DLC：DLC
TDSQL：TDSQL
TCHOUSE：TCHOUSE
GENERAL：通用
TI_ONE：TI-ONE机器学习
ACROSS_WORKFLOWS：跨工作流
                     * 
                     */
                    std::string GetTaskNodeType() const;

                    /**
                     * 设置目录分类，该值必传，枚举值如下：
ETL：数据集成
EMR：EMR
TBDS：TBDS
DLC：DLC
TDSQL：TDSQL
TCHOUSE：TCHOUSE
GENERAL：通用
TI_ONE：TI-ONE机器学习
ACROSS_WORKFLOWS：跨工作流
                     * @param _taskNodeType 目录分类，该值必传，枚举值如下：
ETL：数据集成
EMR：EMR
TBDS：TBDS
DLC：DLC
TDSQL：TDSQL
TCHOUSE：TCHOUSE
GENERAL：通用
TI_ONE：TI-ONE机器学习
ACROSS_WORKFLOWS：跨工作流
                     * 
                     */
                    void SetTaskNodeType(const std::string& _taskNodeType);

                    /**
                     * 判断参数 TaskNodeType 是否已赋值
                     * @return TaskNodeType 是否已赋值
                     * 
                     */
                    bool TaskNodeTypeHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 文件夹名称
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * 工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 父文件夹ID
                     */
                    std::string m_parentFolderId;
                    bool m_parentFolderIdHasBeenSet;

                    /**
                     * 目录分类，该值必传，枚举值如下：
ETL：数据集成
EMR：EMR
TBDS：TBDS
DLC：DLC
TDSQL：TDSQL
TCHOUSE：TCHOUSE
GENERAL：通用
TI_ONE：TI-ONE机器学习
ACROSS_WORKFLOWS：跨工作流
                     */
                    std::string m_taskNodeType;
                    bool m_taskNodeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKFOLDERREQUEST_H_
