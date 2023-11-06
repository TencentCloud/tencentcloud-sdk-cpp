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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDSFOLDERTREEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDSFOLDERTREEREQUEST_H_

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
                * DescribeDsFolderTree请求参数结构体
                */
                class DescribeDsFolderTreeRequest : public AbstractModel
                {
                public:
                    DescribeDsFolderTreeRequest();
                    ~DescribeDsFolderTreeRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取是否一级拉取
                     * @return FirstLevelPull 是否一级拉取
                     * 
                     */
                    bool GetFirstLevelPull() const;

                    /**
                     * 设置是否一级拉取
                     * @param _firstLevelPull 是否一级拉取
                     * 
                     */
                    void SetFirstLevelPull(const bool& _firstLevelPull);

                    /**
                     * 判断参数 FirstLevelPull 是否已赋值
                     * @return FirstLevelPull 是否已赋值
                     * 
                     */
                    bool FirstLevelPullHasBeenSet() const;

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
                     * 获取关键字搜索
                     * @return Keyword 关键字搜索
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键字搜索
                     * @param _keyword 关键字搜索
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取是否包含工作流
                     * @return IncludeWorkflow 是否包含工作流
                     * 
                     */
                    bool GetIncludeWorkflow() const;

                    /**
                     * 设置是否包含工作流
                     * @param _includeWorkflow 是否包含工作流
                     * 
                     */
                    void SetIncludeWorkflow(const bool& _includeWorkflow);

                    /**
                     * 判断参数 IncludeWorkflow 是否已赋值
                     * @return IncludeWorkflow 是否已赋值
                     * 
                     */
                    bool IncludeWorkflowHasBeenSet() const;

                    /**
                     * 获取是否包含任务
                     * @return IncludeTask 是否包含任务
                     * 
                     */
                    bool GetIncludeTask() const;

                    /**
                     * 设置是否包含任务
                     * @param _includeTask 是否包含任务
                     * 
                     */
                    void SetIncludeTask(const bool& _includeTask);

                    /**
                     * 判断参数 IncludeTask 是否已赋值
                     * @return IncludeTask 是否已赋值
                     * 
                     */
                    bool IncludeTaskHasBeenSet() const;

                    /**
                     * 获取是否包含虚拟任务，当 IncludeTask 为 true 的时候，该参数才生效，默认为 true
                     * @return IncludeVirtualTask 是否包含虚拟任务，当 IncludeTask 为 true 的时候，该参数才生效，默认为 true
                     * 
                     */
                    bool GetIncludeVirtualTask() const;

                    /**
                     * 设置是否包含虚拟任务，当 IncludeTask 为 true 的时候，该参数才生效，默认为 true
                     * @param _includeVirtualTask 是否包含虚拟任务，当 IncludeTask 为 true 的时候，该参数才生效，默认为 true
                     * 
                     */
                    void SetIncludeVirtualTask(const bool& _includeVirtualTask);

                    /**
                     * 判断参数 IncludeVirtualTask 是否已赋值
                     * @return IncludeVirtualTask 是否已赋值
                     * 
                     */
                    bool IncludeVirtualTaskHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 是否一级拉取
                     */
                    bool m_firstLevelPull;
                    bool m_firstLevelPullHasBeenSet;

                    /**
                     * 文件夹ID
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * 工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 关键字搜索
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 是否包含工作流
                     */
                    bool m_includeWorkflow;
                    bool m_includeWorkflowHasBeenSet;

                    /**
                     * 是否包含任务
                     */
                    bool m_includeTask;
                    bool m_includeTaskHasBeenSet;

                    /**
                     * 是否包含虚拟任务，当 IncludeTask 为 true 的时候，该参数才生效，默认为 true
                     */
                    bool m_includeVirtualTask;
                    bool m_includeVirtualTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDSFOLDERTREEREQUEST_H_
