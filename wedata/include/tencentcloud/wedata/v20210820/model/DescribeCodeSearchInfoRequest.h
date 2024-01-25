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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECODESEARCHINFOREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECODESEARCHINFOREQUEST_H_

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
                * DescribeCodeSearchInfo请求参数结构体
                */
                class DescribeCodeSearchInfoRequest : public AbstractModel
                {
                public:
                    DescribeCodeSearchInfoRequest();
                    ~DescribeCodeSearchInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索关键词
                     * @return Keyword 搜索关键词
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置搜索关键词
                     * @param _keyword 搜索关键词
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
                     * 获取要查询的搜索范围
                     * @return SearchScope 要查询的搜索范围
                     * 
                     */
                    std::string GetSearchScope() const;

                    /**
                     * 设置要查询的搜索范围
                     * @param _searchScope 要查询的搜索范围
                     * 
                     */
                    void SetSearchScope(const std::string& _searchScope);

                    /**
                     * 判断参数 SearchScope 是否已赋值
                     * @return SearchScope 是否已赋值
                     * 
                     */
                    bool SearchScopeHasBeenSet() const;

                    /**
                     * 获取页数
                     * @return PageNumber 页数
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页数
                     * @param _pageNumber 页数
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取条数
                     * @return PageSize 条数
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置条数
                     * @param _pageSize 条数
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

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
                     * 获取搜索范围列表
                     * @return SearchScopes 搜索范围列表
                     * 
                     */
                    std::vector<std::string> GetSearchScopes() const;

                    /**
                     * 设置搜索范围列表
                     * @param _searchScopes 搜索范围列表
                     * 
                     */
                    void SetSearchScopes(const std::vector<std::string>& _searchScopes);

                    /**
                     * 判断参数 SearchScopes 是否已赋值
                     * @return SearchScopes 是否已赋值
                     * 
                     */
                    bool SearchScopesHasBeenSet() const;

                    /**
                     * 获取责任人ID列表
                     * @return OwnerIds 责任人ID列表
                     * 
                     */
                    std::vector<std::string> GetOwnerIds() const;

                    /**
                     * 设置责任人ID列表
                     * @param _ownerIds 责任人ID列表
                     * 
                     */
                    void SetOwnerIds(const std::vector<std::string>& _ownerIds);

                    /**
                     * 判断参数 OwnerIds 是否已赋值
                     * @return OwnerIds 是否已赋值
                     * 
                     */
                    bool OwnerIdsHasBeenSet() const;

                    /**
                     * 获取文件类型列表
                     * @return FileTypes 文件类型列表
                     * 
                     */
                    std::vector<std::string> GetFileTypes() const;

                    /**
                     * 设置文件类型列表
                     * @param _fileTypes 文件类型列表
                     * 
                     */
                    void SetFileTypes(const std::vector<std::string>& _fileTypes);

                    /**
                     * 判断参数 FileTypes 是否已赋值
                     * @return FileTypes 是否已赋值
                     * 
                     */
                    bool FileTypesHasBeenSet() const;

                    /**
                     * 获取任务类型列表
                     * @return TaskTypes 任务类型列表
                     * 
                     */
                    std::vector<std::string> GetTaskTypes() const;

                    /**
                     * 设置任务类型列表
                     * @param _taskTypes 任务类型列表
                     * 
                     */
                    void SetTaskTypes(const std::vector<std::string>& _taskTypes);

                    /**
                     * 判断参数 TaskTypes 是否已赋值
                     * @return TaskTypes 是否已赋值
                     * 
                     */
                    bool TaskTypesHasBeenSet() const;

                    /**
                     * 获取更新时间范围：开始时间
                     * @return StartTime 更新时间范围：开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置更新时间范围：开始时间
                     * @param _startTime 更新时间范围：开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取更新时间范围：结束时间
                     * @return EndTime 更新时间范围：结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置更新时间范围：结束时间
                     * @param _endTime 更新时间范围：结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取开发态/生产态
                     * @return Status 开发态/生产态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置开发态/生产态
                     * @param _status 开发态/生产态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取工作流ID
                     * @return WorkflowIds 工作流ID
                     * 
                     */
                    std::vector<std::string> GetWorkflowIds() const;

                    /**
                     * 设置工作流ID
                     * @param _workflowIds 工作流ID
                     * 
                     */
                    void SetWorkflowIds(const std::vector<std::string>& _workflowIds);

                    /**
                     * 判断参数 WorkflowIds 是否已赋值
                     * @return WorkflowIds 是否已赋值
                     * 
                     */
                    bool WorkflowIdsHasBeenSet() const;

                    /**
                     * 获取文件夹ID
                     * @return FolderIds 文件夹ID
                     * 
                     */
                    std::vector<std::string> GetFolderIds() const;

                    /**
                     * 设置文件夹ID
                     * @param _folderIds 文件夹ID
                     * 
                     */
                    void SetFolderIds(const std::vector<std::string>& _folderIds);

                    /**
                     * 判断参数 FolderIds 是否已赋值
                     * @return FolderIds 是否已赋值
                     * 
                     */
                    bool FolderIdsHasBeenSet() const;

                    /**
                     * 获取数据源ID
                     * @return DatasourceIds 数据源ID
                     * 
                     */
                    std::vector<std::string> GetDatasourceIds() const;

                    /**
                     * 设置数据源ID
                     * @param _datasourceIds 数据源ID
                     * 
                     */
                    void SetDatasourceIds(const std::vector<std::string>& _datasourceIds);

                    /**
                     * 判断参数 DatasourceIds 是否已赋值
                     * @return DatasourceIds 是否已赋值
                     * 
                     */
                    bool DatasourceIdsHasBeenSet() const;

                    /**
                     * 获取文件夹路径
                     * @return FolderPaths 文件夹路径
                     * 
                     */
                    std::vector<std::string> GetFolderPaths() const;

                    /**
                     * 设置文件夹路径
                     * @param _folderPaths 文件夹路径
                     * 
                     */
                    void SetFolderPaths(const std::vector<std::string>& _folderPaths);

                    /**
                     * 判断参数 FolderPaths 是否已赋值
                     * @return FolderPaths 是否已赋值
                     * 
                     */
                    bool FolderPathsHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return TaskStatus 任务状态
                     * 
                     */
                    std::vector<std::string> GetTaskStatus() const;

                    /**
                     * 设置任务状态
                     * @param _taskStatus 任务状态
                     * 
                     */
                    void SetTaskStatus(const std::vector<std::string>& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * 搜索关键词
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 要查询的搜索范围
                     */
                    std::string m_searchScope;
                    bool m_searchScopeHasBeenSet;

                    /**
                     * 页数
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 条数
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 搜索范围列表
                     */
                    std::vector<std::string> m_searchScopes;
                    bool m_searchScopesHasBeenSet;

                    /**
                     * 责任人ID列表
                     */
                    std::vector<std::string> m_ownerIds;
                    bool m_ownerIdsHasBeenSet;

                    /**
                     * 文件类型列表
                     */
                    std::vector<std::string> m_fileTypes;
                    bool m_fileTypesHasBeenSet;

                    /**
                     * 任务类型列表
                     */
                    std::vector<std::string> m_taskTypes;
                    bool m_taskTypesHasBeenSet;

                    /**
                     * 更新时间范围：开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 更新时间范围：结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 开发态/生产态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 工作流ID
                     */
                    std::vector<std::string> m_workflowIds;
                    bool m_workflowIdsHasBeenSet;

                    /**
                     * 文件夹ID
                     */
                    std::vector<std::string> m_folderIds;
                    bool m_folderIdsHasBeenSet;

                    /**
                     * 数据源ID
                     */
                    std::vector<std::string> m_datasourceIds;
                    bool m_datasourceIdsHasBeenSet;

                    /**
                     * 文件夹路径
                     */
                    std::vector<std::string> m_folderPaths;
                    bool m_folderPathsHasBeenSet;

                    /**
                     * 任务状态
                     */
                    std::vector<std::string> m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECODESEARCHINFOREQUEST_H_
