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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKSREQUEST_H_

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
                * ListTasks请求参数结构体
                */
                class ListTasksRequest : public AbstractModel
                {
                public:
                    ListTasksRequest();
                    ~ListTasksRequest() = default;
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
                     * 获取请求的数据页数。默认值为1，取值大于等于1
                     * @return PageNumber 请求的数据页数。默认值为1，取值大于等于1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置请求的数据页数。默认值为1，取值大于等于1
                     * @param _pageNumber 请求的数据页数。默认值为1，取值大于等于1
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页显示的数据条数。默认值为10 ，最小值为10，最大值为200
                     * @return PageSize 每页显示的数据条数。默认值为10 ，最小值为10，最大值为200
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页显示的数据条数。默认值为10 ，最小值为10，最大值为200
                     * @param _pageSize 每页显示的数据条数。默认值为10 ，最小值为10，最大值为200
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
                     * 获取所属工作流ID
                     * @return WorkflowId 所属工作流ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置所属工作流ID
                     * @param _workflowId 所属工作流ID
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
                     * 获取责任人ID
                     * @return OwnerUin 责任人ID
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置责任人ID
                     * @param _ownerUin 责任人ID
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取任务类型
                     * @return TaskTypeId 任务类型
                     * 
                     */
                    int64_t GetTaskTypeId() const;

                    /**
                     * 设置任务类型
                     * @param _taskTypeId 任务类型
                     * 
                     */
                    void SetTaskTypeId(const int64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取任务状态
* N: 新建 
* Y: 调度中 
* F: 已下线 
* O: 已暂停 
* T: 下线中 
* INVALID: 已失效
                     * @return Status 任务状态
* N: 新建 
* Y: 调度中 
* F: 已下线 
* O: 已暂停 
* T: 下线中 
* INVALID: 已失效
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
* N: 新建 
* Y: 调度中 
* F: 已下线 
* O: 已暂停 
* T: 下线中 
* INVALID: 已失效
                     * @param _status 任务状态
* N: 新建 
* Y: 调度中 
* F: 已下线 
* O: 已暂停 
* T: 下线中 
* INVALID: 已失效
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
                     * 获取提交状态
                     * @return Submit 提交状态
                     * 
                     */
                    bool GetSubmit() const;

                    /**
                     * 设置提交状态
                     * @param _submit 提交状态
                     * 
                     */
                    void SetSubmit(const bool& _submit);

                    /**
                     * 判断参数 Submit 是否已赋值
                     * @return Submit 是否已赋值
                     * 
                     */
                    bool SubmitHasBeenSet() const;

                    /**
                     * 获取BundleId信息
                     * @return BundleId BundleId信息
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置BundleId信息
                     * @param _bundleId BundleId信息
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取创建人ID
                     * @return CreateUserUin 创建人ID
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置创建人ID
                     * @param _createUserUin 创建人ID
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
                     * 获取修改时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     * @return ModifyTime 修改时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     * 
                     */
                    std::vector<std::string> GetModifyTime() const;

                    /**
                     * 设置修改时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     * @param _modifyTime 修改时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     * 
                     */
                    void SetModifyTime(const std::vector<std::string>& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取创建时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     * @return CreateTime 创建时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     * 
                     */
                    std::vector<std::string> GetCreateTime() const;

                    /**
                     * 设置创建时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     * @param _createTime 创建时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     * 
                     */
                    void SetCreateTime(const std::vector<std::string>& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 请求的数据页数。默认值为1，取值大于等于1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页显示的数据条数。默认值为10 ，最小值为10，最大值为200
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 所属工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 责任人ID
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 任务类型
                     */
                    int64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * 任务状态
* N: 新建 
* Y: 调度中 
* F: 已下线 
* O: 已暂停 
* T: 下线中 
* INVALID: 已失效
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 提交状态
                     */
                    bool m_submit;
                    bool m_submitHasBeenSet;

                    /**
                     * BundleId信息
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * 创建人ID
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * 修改时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     */
                    std::vector<std::string> m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 创建时间区间 yyyy-MM-dd HH:mm:ss，需要在数组填入两个时间
                     */
                    std::vector<std::string> m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKSREQUEST_H_
