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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDRINSTANCEPAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDRINSTANCEPAGEREQUEST_H_

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
                * DescribeDrInstancePage请求参数结构体
                */
                class DescribeDrInstancePageRequest : public AbstractModel
                {
                public:
                    DescribeDrInstancePageRequest();
                    ~DescribeDrInstancePageRequest() = default;
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
                     * 获取任务来源 ADHOC || WORKFLOW
                     * @return TaskSource 任务来源 ADHOC || WORKFLOW
                     * 
                     */
                    std::string GetTaskSource() const;

                    /**
                     * 设置任务来源 ADHOC || WORKFLOW
                     * @param _taskSource 任务来源 ADHOC || WORKFLOW
                     * 
                     */
                    void SetTaskSource(const std::string& _taskSource);

                    /**
                     * 判断参数 TaskSource 是否已赋值
                     * @return TaskSource 是否已赋值
                     * 
                     */
                    bool TaskSourceHasBeenSet() const;

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
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
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
                     * 获取提交开始时间 yyyy-MM-dd HH:mm:ss
                     * @return StartTime 提交开始时间 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置提交开始时间 yyyy-MM-dd HH:mm:ss
                     * @param _startTime 提交开始时间 yyyy-MM-dd HH:mm:ss
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
                     * 获取提交结束时间 yyyy-MM-dd HH:mm:ss
                     * @return EndTime 提交结束时间 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置提交结束时间 yyyy-MM-dd HH:mm:ss
                     * @param _endTime 提交结束时间 yyyy-MM-dd HH:mm:ss
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
                     * 获取文件夹id
                     * @return FolderIds 文件夹id
                     * 
                     */
                    std::vector<std::string> GetFolderIds() const;

                    /**
                     * 设置文件夹id
                     * @param _folderIds 文件夹id
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
                     * 获取工作流id
                     * @return WorkflowIds 工作流id
                     * 
                     */
                    std::vector<std::string> GetWorkflowIds() const;

                    /**
                     * 设置工作流id
                     * @param _workflowIds 工作流id
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
                     * 获取只看我的
                     * @return JustMe 只看我的
                     * 
                     */
                    bool GetJustMe() const;

                    /**
                     * 设置只看我的
                     * @param _justMe 只看我的
                     * 
                     */
                    void SetJustMe(const bool& _justMe);

                    /**
                     * 判断参数 JustMe 是否已赋值
                     * @return JustMe 是否已赋值
                     * 
                     */
                    bool JustMeHasBeenSet() const;

                    /**
                     * 获取任务类型
                     * @return TaskTypes 任务类型
                     * 
                     */
                    std::vector<std::string> GetTaskTypes() const;

                    /**
                     * 设置任务类型
                     * @param _taskTypes 任务类型
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
                     * 获取试运行提交人userId列表
                     * @return SubmitUsers 试运行提交人userId列表
                     * 
                     */
                    std::vector<std::string> GetSubmitUsers() const;

                    /**
                     * 设置试运行提交人userId列表
                     * @param _submitUsers 试运行提交人userId列表
                     * 
                     */
                    void SetSubmitUsers(const std::vector<std::string>& _submitUsers);

                    /**
                     * 判断参数 SubmitUsers 是否已赋值
                     * @return SubmitUsers 是否已赋值
                     * 
                     */
                    bool SubmitUsersHasBeenSet() const;

                    /**
                     * 获取试运行状态
                     * @return StatusList 试运行状态
                     * 
                     */
                    std::vector<std::string> GetStatusList() const;

                    /**
                     * 设置试运行状态
                     * @param _statusList 试运行状态
                     * 
                     */
                    void SetStatusList(const std::vector<std::string>& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务来源 ADHOC || WORKFLOW
                     */
                    std::string m_taskSource;
                    bool m_taskSourceHasBeenSet;

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
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 提交开始时间 yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 提交结束时间 yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 文件夹id
                     */
                    std::vector<std::string> m_folderIds;
                    bool m_folderIdsHasBeenSet;

                    /**
                     * 工作流id
                     */
                    std::vector<std::string> m_workflowIds;
                    bool m_workflowIdsHasBeenSet;

                    /**
                     * 只看我的
                     */
                    bool m_justMe;
                    bool m_justMeHasBeenSet;

                    /**
                     * 任务类型
                     */
                    std::vector<std::string> m_taskTypes;
                    bool m_taskTypesHasBeenSet;

                    /**
                     * 试运行提交人userId列表
                     */
                    std::vector<std::string> m_submitUsers;
                    bool m_submitUsersHasBeenSet;

                    /**
                     * 试运行状态
                     */
                    std::vector<std::string> m_statusList;
                    bool m_statusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDRINSTANCEPAGEREQUEST_H_
