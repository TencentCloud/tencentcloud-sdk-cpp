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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RENEWWORKFLOWDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RENEWWORKFLOWDSREQUEST_H_

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
                * RenewWorkflowDs请求参数结构体
                */
                class RenewWorkflowDsRequest : public AbstractModel
                {
                public:
                    RenewWorkflowDsRequest();
                    ~RenewWorkflowDsRequest() = default;
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
                     * 获取工作流名称
                     * @return WorkflowName 工作流名称
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置工作流名称
                     * @param _workflowName 工作流名称
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取工作流描述
                     * @return WorkflowDesc 工作流描述
                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置工作流描述
                     * @param _workflowDesc 工作流描述
                     * 
                     */
                    void SetWorkflowDesc(const std::string& _workflowDesc);

                    /**
                     * 判断参数 WorkflowDesc 是否已赋值
                     * @return WorkflowDesc 是否已赋值
                     * 
                     */
                    bool WorkflowDescHasBeenSet() const;

                    /**
                     * 获取文件夹ID
                     * @return FolderId 文件夹ID
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置文件夹ID
                     * @param _folderId 文件夹ID
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取责任ID，多个使用;分割
                     * @return OwnerId 责任ID，多个使用;分割
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置责任ID，多个使用;分割
                     * @param _ownerId 责任ID，多个使用;分割
                     * 
                     */
                    void SetOwnerId(const std::string& _ownerId);

                    /**
                     * 判断参数 OwnerId 是否已赋值
                     * @return OwnerId 是否已赋值
                     * 
                     */
                    bool OwnerIdHasBeenSet() const;

                    /**
                     * 获取责任人名称，多个使用;分割
                     * @return Owner 责任人名称，多个使用;分割
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置责任人名称，多个使用;分割
                     * @param _owner 责任人名称，多个使用;分割
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取SparkSql参数
                     * @return SparkSqlParams SparkSql参数
                     * 
                     */
                    std::string GetSparkSqlParams() const;

                    /**
                     * 设置SparkSql参数
                     * @param _sparkSqlParams SparkSql参数
                     * 
                     */
                    void SetSparkSqlParams(const std::string& _sparkSqlParams);

                    /**
                     * 判断参数 SparkSqlParams 是否已赋值
                     * @return SparkSqlParams 是否已赋值
                     * 
                     */
                    bool SparkSqlParamsHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 工作流名称
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 工作流描述
                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * 文件夹ID
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * 责任ID，多个使用;分割
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                    /**
                     * 责任人名称，多个使用;分割
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * SparkSql参数
                     */
                    std::string m_sparkSqlParams;
                    bool m_sparkSqlParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RENEWWORKFLOWDSREQUEST_H_
