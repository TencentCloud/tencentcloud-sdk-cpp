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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEALLBYFOLDERNEWREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEALLBYFOLDERNEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/FolderOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/WorkflowCanvasOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/ProjectBaseInfoOpsRequest.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeAllByFolderNew请求参数结构体
                */
                class DescribeAllByFolderNewRequest : public AbstractModel
                {
                public:
                    DescribeAllByFolderNewRequest();
                    ~DescribeAllByFolderNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件夹属性
                     * @return Folder 文件夹属性
                     * 
                     */
                    FolderOpsDto GetFolder() const;

                    /**
                     * 设置文件夹属性
                     * @param _folder 文件夹属性
                     * 
                     */
                    void SetFolder(const FolderOpsDto& _folder);

                    /**
                     * 判断参数 Folder 是否已赋值
                     * @return Folder 是否已赋值
                     * 
                     */
                    bool FolderHasBeenSet() const;

                    /**
                     * 获取工作流列表
                     * @return Workflows 工作流列表
                     * 
                     */
                    std::vector<WorkflowCanvasOpsDto> GetWorkflows() const;

                    /**
                     * 设置工作流列表
                     * @param _workflows 工作流列表
                     * 
                     */
                    void SetWorkflows(const std::vector<WorkflowCanvasOpsDto>& _workflows);

                    /**
                     * 判断参数 Workflows 是否已赋值
                     * @return Workflows 是否已赋值
                     * 
                     */
                    bool WorkflowsHasBeenSet() const;

                    /**
                     * 获取目标文件id
                     * @return TargetFolderId 目标文件id
                     * 
                     */
                    std::string GetTargetFolderId() const;

                    /**
                     * 设置目标文件id
                     * @param _targetFolderId 目标文件id
                     * 
                     */
                    void SetTargetFolderId(const std::string& _targetFolderId);

                    /**
                     * 判断参数 TargetFolderId 是否已赋值
                     * @return TargetFolderId 是否已赋值
                     * 
                     */
                    bool TargetFolderIdHasBeenSet() const;

                    /**
                     * 获取关键字
                     * @return KeyWords 关键字
                     * 
                     */
                    std::string GetKeyWords() const;

                    /**
                     * 设置关键字
                     * @param _keyWords 关键字
                     * 
                     */
                    void SetKeyWords(const std::string& _keyWords);

                    /**
                     * 判断参数 KeyWords 是否已赋值
                     * @return KeyWords 是否已赋值
                     * 
                     */
                    bool KeyWordsHasBeenSet() const;

                    /**
                     * 获取父文件id
                     * @return ParentsFolderId 父文件id
                     * 
                     */
                    std::string GetParentsFolderId() const;

                    /**
                     * 设置父文件id
                     * @param _parentsFolderId 父文件id
                     * 
                     */
                    void SetParentsFolderId(const std::string& _parentsFolderId);

                    /**
                     * 判断参数 ParentsFolderId 是否已赋值
                     * @return ParentsFolderId 是否已赋值
                     * 
                     */
                    bool ParentsFolderIdHasBeenSet() const;

                    /**
                     * 获取拉取文件夹列表
                     * @return IsAddWorkflow 拉取文件夹列表
                     * 
                     */
                    std::string GetIsAddWorkflow() const;

                    /**
                     * 设置拉取文件夹列表
                     * @param _isAddWorkflow 拉取文件夹列表
                     * 
                     */
                    void SetIsAddWorkflow(const std::string& _isAddWorkflow);

                    /**
                     * 判断参数 IsAddWorkflow 是否已赋值
                     * @return IsAddWorkflow 是否已赋值
                     * 
                     */
                    bool IsAddWorkflowHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return TaskStates 任务状态
                     * 
                     */
                    std::vector<std::string> GetTaskStates() const;

                    /**
                     * 设置任务状态
                     * @param _taskStates 任务状态
                     * 
                     */
                    void SetTaskStates(const std::vector<std::string>& _taskStates);

                    /**
                     * 判断参数 TaskStates 是否已赋值
                     * @return TaskStates 是否已赋值
                     * 
                     */
                    bool TaskStatesHasBeenSet() const;

                    /**
                     * 获取搜索类型
                     * @return FindType 搜索类型
                     * 
                     */
                    std::string GetFindType() const;

                    /**
                     * 设置搜索类型
                     * @param _findType 搜索类型
                     * 
                     */
                    void SetFindType(const std::string& _findType);

                    /**
                     * 判断参数 FindType 是否已赋值
                     * @return FindType 是否已赋值
                     * 
                     */
                    bool FindTypeHasBeenSet() const;

                    /**
                     * 获取访问类型
                     * @return OptType 访问类型
                     * 
                     */
                    std::string GetOptType() const;

                    /**
                     * 设置访问类型
                     * @param _optType 访问类型
                     * 
                     */
                    void SetOptType(const std::string& _optType);

                    /**
                     * 判断参数 OptType 是否已赋值
                     * @return OptType 是否已赋值
                     * 
                     */
                    bool OptTypeHasBeenSet() const;

                    /**
                     * 获取操作者名称
                     * @return OperatorName 操作者名称
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置操作者名称
                     * @param _operatorName 操作者名称
                     * 
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     * 
                     */
                    bool OperatorNameHasBeenSet() const;

                    /**
                     * 获取操作者id
                     * @return OperatorId 操作者id
                     * 
                     */
                    std::string GetOperatorId() const;

                    /**
                     * 设置操作者id
                     * @param _operatorId 操作者id
                     * 
                     */
                    void SetOperatorId(const std::string& _operatorId);

                    /**
                     * 判断参数 OperatorId 是否已赋值
                     * @return OperatorId 是否已赋值
                     * 
                     */
                    bool OperatorIdHasBeenSet() const;

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
                     * 获取项目标志
                     * @return ProjectIdent 项目标志
                     * 
                     */
                    std::string GetProjectIdent() const;

                    /**
                     * 设置项目标志
                     * @param _projectIdent 项目标志
                     * 
                     */
                    void SetProjectIdent(const std::string& _projectIdent);

                    /**
                     * 判断参数 ProjectIdent 是否已赋值
                     * @return ProjectIdent 是否已赋值
                     * 
                     */
                    bool ProjectIdentHasBeenSet() const;

                    /**
                     * 获取项目名称
                     * @return ProjectName 项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
                     * @param _projectName 项目名称
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取索引页码
                     * @return PageIndex 索引页码
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置索引页码
                     * @param _pageIndex 索引页码
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取页面大小
                     * @return PageSize 页面大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页面大小
                     * @param _pageSize 页面大小
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取数据总数
                     * @return Count 数据总数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置数据总数
                     * @param _count 数据总数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取基础请求信息
                     * @return RequestBaseInfo 基础请求信息
                     * 
                     */
                    ProjectBaseInfoOpsRequest GetRequestBaseInfo() const;

                    /**
                     * 设置基础请求信息
                     * @param _requestBaseInfo 基础请求信息
                     * 
                     */
                    void SetRequestBaseInfo(const ProjectBaseInfoOpsRequest& _requestBaseInfo);

                    /**
                     * 判断参数 RequestBaseInfo 是否已赋值
                     * @return RequestBaseInfo 是否已赋值
                     * 
                     */
                    bool RequestBaseInfoHasBeenSet() const;

                    /**
                     * 获取是否计算总数
                     * @return IsCount 是否计算总数
                     * 
                     */
                    bool GetIsCount() const;

                    /**
                     * 设置是否计算总数
                     * @param _isCount 是否计算总数
                     * 
                     */
                    void SetIsCount(const bool& _isCount);

                    /**
                     * 判断参数 IsCount 是否已赋值
                     * @return IsCount 是否已赋值
                     * 
                     */
                    bool IsCountHasBeenSet() const;

                private:

                    /**
                     * 文件夹属性
                     */
                    FolderOpsDto m_folder;
                    bool m_folderHasBeenSet;

                    /**
                     * 工作流列表
                     */
                    std::vector<WorkflowCanvasOpsDto> m_workflows;
                    bool m_workflowsHasBeenSet;

                    /**
                     * 目标文件id
                     */
                    std::string m_targetFolderId;
                    bool m_targetFolderIdHasBeenSet;

                    /**
                     * 关键字
                     */
                    std::string m_keyWords;
                    bool m_keyWordsHasBeenSet;

                    /**
                     * 父文件id
                     */
                    std::string m_parentsFolderId;
                    bool m_parentsFolderIdHasBeenSet;

                    /**
                     * 拉取文件夹列表
                     */
                    std::string m_isAddWorkflow;
                    bool m_isAddWorkflowHasBeenSet;

                    /**
                     * 任务状态
                     */
                    std::vector<std::string> m_taskStates;
                    bool m_taskStatesHasBeenSet;

                    /**
                     * 搜索类型
                     */
                    std::string m_findType;
                    bool m_findTypeHasBeenSet;

                    /**
                     * 访问类型
                     */
                    std::string m_optType;
                    bool m_optTypeHasBeenSet;

                    /**
                     * 操作者名称
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                    /**
                     * 操作者id
                     */
                    std::string m_operatorId;
                    bool m_operatorIdHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目标志
                     */
                    std::string m_projectIdent;
                    bool m_projectIdentHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 索引页码
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * 页面大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 数据总数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 基础请求信息
                     */
                    ProjectBaseInfoOpsRequest m_requestBaseInfo;
                    bool m_requestBaseInfoHasBeenSet;

                    /**
                     * 是否计算总数
                     */
                    bool m_isCount;
                    bool m_isCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEALLBYFOLDERNEWREQUEST_H_
