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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERELATEDTASKSBYTASKIDREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERELATEDTASKSBYTASKIDREQUEST_H_

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
                * DescribeRelatedTasksByTaskId请求参数结构体
                */
                class DescribeRelatedTasksByTaskIdRequest : public AbstractModel
                {
                public:
                    DescribeRelatedTasksByTaskIdRequest();
                    ~DescribeRelatedTasksByTaskIdRequest() = default;
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
                     * 获取任务Id
                     * @return TaskId 任务Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务Id
                     * @param _taskId 任务Id
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
                     * 获取当前页码，从1开始
                     * @return PageNumber 当前页码，从1开始
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置当前页码，从1开始
                     * @param _pageNumber 当前页码，从1开始
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
                     * 获取单页大小，最大200
                     * @return PageSize 单页大小，最大200
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置单页大小，最大200
                     * @param _pageSize 单页大小，最大200
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
                     * 获取查询直接依赖方向，如UP表示上游、DOWN表示下游
                     * @return DependencyDirection 查询直接依赖方向，如UP表示上游、DOWN表示下游
                     * 
                     */
                    std::string GetDependencyDirection() const;

                    /**
                     * 设置查询直接依赖方向，如UP表示上游、DOWN表示下游
                     * @param _dependencyDirection 查询直接依赖方向，如UP表示上游、DOWN表示下游
                     * 
                     */
                    void SetDependencyDirection(const std::string& _dependencyDirection);

                    /**
                     * 判断参数 DependencyDirection 是否已赋值
                     * @return DependencyDirection 是否已赋值
                     * 
                     */
                    bool DependencyDirectionHasBeenSet() const;

                    /**
                     * 获取查询开发环境还是生产环境版本，DEV表示开发环境、PROD表示生产环境
                     * @return Environment 查询开发环境还是生产环境版本，DEV表示开发环境、PROD表示生产环境
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置查询开发环境还是生产环境版本，DEV表示开发环境、PROD表示生产环境
                     * @param _environment 查询开发环境还是生产环境版本，DEV表示开发环境、PROD表示生产环境
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取任务名称，模糊搜索
                     * @return TaskName 任务名称，模糊搜索
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称，模糊搜索
                     * @param _taskName 任务名称，模糊搜索
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
                     * 获取任务调度周期,I：分支；H：小时；D：天；W：周；M：月；Y：年；O：一次性。
                     * @return CycleTypeList 任务调度周期,I：分支；H：小时；D：天；W：周；M：月；Y：年；O：一次性。
                     * 
                     */
                    std::vector<std::string> GetCycleTypeList() const;

                    /**
                     * 设置任务调度周期,I：分支；H：小时；D：天；W：周；M：月；Y：年；O：一次性。
                     * @param _cycleTypeList 任务调度周期,I：分支；H：小时；D：天；W：周；M：月；Y：年；O：一次性。
                     * 
                     */
                    void SetCycleTypeList(const std::vector<std::string>& _cycleTypeList);

                    /**
                     * 判断参数 CycleTypeList 是否已赋值
                     * @return CycleTypeList 是否已赋值
                     * 
                     */
                    bool CycleTypeListHasBeenSet() const;

                    /**
                     * 获取任务状态，N：新建； Y：调度中； O：已暂停；F：已下线；INVALID：已失效
                     * @return StatusList 任务状态，N：新建； Y：调度中； O：已暂停；F：已下线；INVALID：已失效
                     * 
                     */
                    std::vector<std::string> GetStatusList() const;

                    /**
                     * 设置任务状态，N：新建； Y：调度中； O：已暂停；F：已下线；INVALID：已失效
                     * @param _statusList 任务状态，N：新建； Y：调度中； O：已暂停；F：已下线；INVALID：已失效
                     * 
                     */
                    void SetStatusList(const std::vector<std::string>& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                    /**
                     * 获取任务责任人名
                     * @return OwnerNameList 任务责任人名
                     * 
                     */
                    std::vector<std::string> GetOwnerNameList() const;

                    /**
                     * 设置任务责任人名
                     * @param _ownerNameList 任务责任人名
                     * 
                     */
                    void SetOwnerNameList(const std::vector<std::string>& _ownerNameList);

                    /**
                     * 判断参数 OwnerNameList 是否已赋值
                     * @return OwnerNameList 是否已赋值
                     * 
                     */
                    bool OwnerNameListHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 当前页码，从1开始
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 单页大小，最大200
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 查询直接依赖方向，如UP表示上游、DOWN表示下游
                     */
                    std::string m_dependencyDirection;
                    bool m_dependencyDirectionHasBeenSet;

                    /**
                     * 查询开发环境还是生产环境版本，DEV表示开发环境、PROD表示生产环境
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 任务名称，模糊搜索
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务调度周期,I：分支；H：小时；D：天；W：周；M：月；Y：年；O：一次性。
                     */
                    std::vector<std::string> m_cycleTypeList;
                    bool m_cycleTypeListHasBeenSet;

                    /**
                     * 任务状态，N：新建； Y：调度中； O：已暂停；F：已下线；INVALID：已失效
                     */
                    std::vector<std::string> m_statusList;
                    bool m_statusListHasBeenSet;

                    /**
                     * 任务责任人名
                     */
                    std::vector<std::string> m_ownerNameList;
                    bool m_ownerNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERELATEDTASKSBYTASKIDREQUEST_H_
