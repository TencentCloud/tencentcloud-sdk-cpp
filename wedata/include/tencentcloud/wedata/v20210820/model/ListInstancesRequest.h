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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_LISTINSTANCESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_LISTINSTANCESREQUEST_H_

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
                * ListInstances请求参数结构体
                */
                class ListInstancesRequest : public AbstractModel
                {
                public:
                    ListInstancesRequest();
                    ~ListInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取**项目ID**
                     * @return ProjectId **项目ID**
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置**项目ID**
                     * @param _projectId **项目ID**
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
                     * 获取**实例计划调度时间过滤条件**
过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * @return ScheduleTimeFrom **实例计划调度时间过滤条件**
过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetScheduleTimeFrom() const;

                    /**
                     * 设置**实例计划调度时间过滤条件**
过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * @param _scheduleTimeFrom **实例计划调度时间过滤条件**
过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetScheduleTimeFrom(const std::string& _scheduleTimeFrom);

                    /**
                     * 判断参数 ScheduleTimeFrom 是否已赋值
                     * @return ScheduleTimeFrom 是否已赋值
                     * 
                     */
                    bool ScheduleTimeFromHasBeenSet() const;

                    /**
                     * 获取**实例计划调度时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * @return ScheduleTimeTo **实例计划调度时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetScheduleTimeTo() const;

                    /**
                     * 设置**实例计划调度时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * @param _scheduleTimeTo **实例计划调度时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetScheduleTimeTo(const std::string& _scheduleTimeTo);

                    /**
                     * 判断参数 ScheduleTimeTo 是否已赋值
                     * @return ScheduleTimeTo 是否已赋值
                     * 
                     */
                    bool ScheduleTimeToHasBeenSet() const;

                    /**
                     * 获取**页码，整型**
配合pageSize使用且不能小于1， 默认值1
                     * @return PageNumber **页码，整型**
配合pageSize使用且不能小于1， 默认值1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置**页码，整型**
配合pageSize使用且不能小于1， 默认值1
                     * @param _pageNumber **页码，整型**
配合pageSize使用且不能小于1， 默认值1
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
                     * 获取**每页数目，整型**
配合pageNumber使用且不能大于200, 默认值 10
                     * @return PageSize **每页数目，整型**
配合pageNumber使用且不能大于200, 默认值 10
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置**每页数目，整型**
配合pageNumber使用且不能大于200, 默认值 10
                     * @param _pageSize **每页数目，整型**
配合pageNumber使用且不能大于200, 默认值 10
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
                     * 获取**查询结果排序字段**

- SCHEDULE_DATE 表示 根据计划调度时间排序
- START_TIME 表示 根据实例开始执行时间排序
- END_TIME 表示 根据实例结束执行时间排序
- COST_TIME 表示 根据实例执行时长排序
                     * @return SortColumn **查询结果排序字段**

- SCHEDULE_DATE 表示 根据计划调度时间排序
- START_TIME 表示 根据实例开始执行时间排序
- END_TIME 表示 根据实例结束执行时间排序
- COST_TIME 表示 根据实例执行时长排序
                     * 
                     */
                    std::string GetSortColumn() const;

                    /**
                     * 设置**查询结果排序字段**

- SCHEDULE_DATE 表示 根据计划调度时间排序
- START_TIME 表示 根据实例开始执行时间排序
- END_TIME 表示 根据实例结束执行时间排序
- COST_TIME 表示 根据实例执行时长排序
                     * @param _sortColumn **查询结果排序字段**

- SCHEDULE_DATE 表示 根据计划调度时间排序
- START_TIME 表示 根据实例开始执行时间排序
- END_TIME 表示 根据实例结束执行时间排序
- COST_TIME 表示 根据实例执行时长排序
                     * 
                     */
                    void SetSortColumn(const std::string& _sortColumn);

                    /**
                     * 判断参数 SortColumn 是否已赋值
                     * @return SortColumn 是否已赋值
                     * 
                     */
                    bool SortColumnHasBeenSet() const;

                    /**
                     * 获取**实例排序方式**

- ASC 
- DESC
                     * @return SortType **实例排序方式**

- ASC 
- DESC
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置**实例排序方式**

- ASC 
- DESC
                     * @param _sortType **实例排序方式**

- ASC 
- DESC
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取**实例类型**

- 0 表示补录类型
- 1 表示周期实例
- 2 表示非周期实例
                     * @return InstanceType **实例类型**

- 0 表示补录类型
- 1 表示周期实例
- 2 表示非周期实例
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置**实例类型**

- 0 表示补录类型
- 1 表示周期实例
- 2 表示非周期实例
                     * @param _instanceType **实例类型**

- 0 表示补录类型
- 1 表示周期实例
- 2 表示非周期实例
                     * 
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取**实例执行状态**
支持过滤多个，条件间为 或 的过滤关系

- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
                     * @return InstanceStateList **实例执行状态**
支持过滤多个，条件间为 或 的过滤关系

- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
                     * 
                     */
                    std::vector<uint64_t> GetInstanceStateList() const;

                    /**
                     * 设置**实例执行状态**
支持过滤多个，条件间为 或 的过滤关系

- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
                     * @param _instanceStateList **实例执行状态**
支持过滤多个，条件间为 或 的过滤关系

- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
                     * 
                     */
                    void SetInstanceStateList(const std::vector<uint64_t>& _instanceStateList);

                    /**
                     * 判断参数 InstanceStateList 是否已赋值
                     * @return InstanceStateList 是否已赋值
                     * 
                     */
                    bool InstanceStateListHasBeenSet() const;

                    /**
                     * 获取**任务类型Id**

- 支持过滤多个，条件间为 或 的过滤关系
- 可以通过接口 DescribeAllTaskType 获取项目支持的全部任务类型
                     * @return TaskTypeIdList **任务类型Id**

- 支持过滤多个，条件间为 或 的过滤关系
- 可以通过接口 DescribeAllTaskType 获取项目支持的全部任务类型
                     * 
                     */
                    std::vector<uint64_t> GetTaskTypeIdList() const;

                    /**
                     * 设置**任务类型Id**

- 支持过滤多个，条件间为 或 的过滤关系
- 可以通过接口 DescribeAllTaskType 获取项目支持的全部任务类型
                     * @param _taskTypeIdList **任务类型Id**

- 支持过滤多个，条件间为 或 的过滤关系
- 可以通过接口 DescribeAllTaskType 获取项目支持的全部任务类型
                     * 
                     */
                    void SetTaskTypeIdList(const std::vector<uint64_t>& _taskTypeIdList);

                    /**
                     * 判断参数 TaskTypeIdList 是否已赋值
                     * @return TaskTypeIdList 是否已赋值
                     * 
                     */
                    bool TaskTypeIdListHasBeenSet() const;

                    /**
                     * 获取**任务周期类型**
支持过滤多个，条件间为 或 的过滤关系
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
                     * @return TaskCycleList **任务周期类型**
支持过滤多个，条件间为 或 的过滤关系
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
                     * 
                     */
                    std::vector<std::string> GetTaskCycleList() const;

                    /**
                     * 设置**任务周期类型**
支持过滤多个，条件间为 或 的过滤关系
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
                     * @param _taskCycleList **任务周期类型**
支持过滤多个，条件间为 或 的过滤关系
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
                     * 
                     */
                    void SetTaskCycleList(const std::vector<std::string>& _taskCycleList);

                    /**
                     * 判断参数 TaskCycleList 是否已赋值
                     * @return TaskCycleList 是否已赋值
                     * 
                     */
                    bool TaskCycleListHasBeenSet() const;

                    /**
                     * 获取**任务名称 或 任务ID**
支持模糊搜索过滤, 多个用 英文逗号, 分割
                     * @return Keyword **任务名称 或 任务ID**
支持模糊搜索过滤, 多个用 英文逗号, 分割
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置**任务名称 或 任务ID**
支持模糊搜索过滤, 多个用 英文逗号, 分割
                     * @param _keyword **任务名称 或 任务ID**
支持模糊搜索过滤, 多个用 英文逗号, 分割
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
                     * 获取**任务负责人**
支持过滤多个，条件间为 或 的过滤关系
                     * @return InChargeList **任务负责人**
支持过滤多个，条件间为 或 的过滤关系
                     * 
                     */
                    std::vector<std::string> GetInChargeList() const;

                    /**
                     * 设置**任务负责人**
支持过滤多个，条件间为 或 的过滤关系
                     * @param _inChargeList **任务负责人**
支持过滤多个，条件间为 或 的过滤关系
                     * 
                     */
                    void SetInChargeList(const std::vector<std::string>& _inChargeList);

                    /**
                     * 判断参数 InChargeList 是否已赋值
                     * @return InChargeList 是否已赋值
                     * 
                     */
                    bool InChargeListHasBeenSet() const;

                    /**
                     * 获取**任务所属文件件**
支持过滤多个，条件间为 或 的过滤关系
可以通过接口 FindAllFolder 获取项目下的所有文件夹列表
                     * @return TaskFolderIdList **任务所属文件件**
支持过滤多个，条件间为 或 的过滤关系
可以通过接口 FindAllFolder 获取项目下的所有文件夹列表
                     * 
                     */
                    std::vector<std::string> GetTaskFolderIdList() const;

                    /**
                     * 设置**任务所属文件件**
支持过滤多个，条件间为 或 的过滤关系
可以通过接口 FindAllFolder 获取项目下的所有文件夹列表
                     * @param _taskFolderIdList **任务所属文件件**
支持过滤多个，条件间为 或 的过滤关系
可以通过接口 FindAllFolder 获取项目下的所有文件夹列表
                     * 
                     */
                    void SetTaskFolderIdList(const std::vector<std::string>& _taskFolderIdList);

                    /**
                     * 判断参数 TaskFolderIdList 是否已赋值
                     * @return TaskFolderIdList 是否已赋值
                     * 
                     */
                    bool TaskFolderIdListHasBeenSet() const;

                    /**
                     * 获取**任务所属工作流**
支持过滤多个，条件间为 或 的过滤关系
可以通过接口 DescribeOpsWorkflows 获取项目下的所有工作流列表
                     * @return WorkflowIdList **任务所属工作流**
支持过滤多个，条件间为 或 的过滤关系
可以通过接口 DescribeOpsWorkflows 获取项目下的所有工作流列表
                     * 
                     */
                    std::vector<std::string> GetWorkflowIdList() const;

                    /**
                     * 设置**任务所属工作流**
支持过滤多个，条件间为 或 的过滤关系
可以通过接口 DescribeOpsWorkflows 获取项目下的所有工作流列表
                     * @param _workflowIdList **任务所属工作流**
支持过滤多个，条件间为 或 的过滤关系
可以通过接口 DescribeOpsWorkflows 获取项目下的所有工作流列表
                     * 
                     */
                    void SetWorkflowIdList(const std::vector<std::string>& _workflowIdList);

                    /**
                     * 判断参数 WorkflowIdList 是否已赋值
                     * @return WorkflowIdList 是否已赋值
                     * 
                     */
                    bool WorkflowIdListHasBeenSet() const;

                    /**
                     * 获取**执行资源组Id**
支持过滤多个，条件间为 或 的过滤关系
可以通过接口 DescribeNormalSchedulerExecutorGroups 获取项目下的所有调度资源组列表
可以通过接口 DescribeNormalIntegrationExecutorGroups 获取项目下的所有集成资源组列表
                     * @return ExecutorGroupIdList **执行资源组Id**
支持过滤多个，条件间为 或 的过滤关系
可以通过接口 DescribeNormalSchedulerExecutorGroups 获取项目下的所有调度资源组列表
可以通过接口 DescribeNormalIntegrationExecutorGroups 获取项目下的所有集成资源组列表
                     * 
                     */
                    std::vector<std::string> GetExecutorGroupIdList() const;

                    /**
                     * 设置**执行资源组Id**
支持过滤多个，条件间为 或 的过滤关系
可以通过接口 DescribeNormalSchedulerExecutorGroups 获取项目下的所有调度资源组列表
可以通过接口 DescribeNormalIntegrationExecutorGroups 获取项目下的所有集成资源组列表
                     * @param _executorGroupIdList **执行资源组Id**
支持过滤多个，条件间为 或 的过滤关系
可以通过接口 DescribeNormalSchedulerExecutorGroups 获取项目下的所有调度资源组列表
可以通过接口 DescribeNormalIntegrationExecutorGroups 获取项目下的所有集成资源组列表
                     * 
                     */
                    void SetExecutorGroupIdList(const std::vector<std::string>& _executorGroupIdList);

                    /**
                     * 判断参数 ExecutorGroupIdList 是否已赋值
                     * @return ExecutorGroupIdList 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdListHasBeenSet() const;

                    /**
                     * 获取**实例执行开始时间过滤条件**
过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * @return StartTimeFrom **实例执行开始时间过滤条件**
过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetStartTimeFrom() const;

                    /**
                     * 设置**实例执行开始时间过滤条件**
过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * @param _startTimeFrom **实例执行开始时间过滤条件**
过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetStartTimeFrom(const std::string& _startTimeFrom);

                    /**
                     * 判断参数 StartTimeFrom 是否已赋值
                     * @return StartTimeFrom 是否已赋值
                     * 
                     */
                    bool StartTimeFromHasBeenSet() const;

                    /**
                     * 获取**实例执行开始时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * @return StartTimeTo **实例执行开始时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetStartTimeTo() const;

                    /**
                     * 设置**实例执行开始时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * @param _startTimeTo **实例执行开始时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetStartTimeTo(const std::string& _startTimeTo);

                    /**
                     * 判断参数 StartTimeTo 是否已赋值
                     * @return StartTimeTo 是否已赋值
                     * 
                     */
                    bool StartTimeToHasBeenSet() const;

                    /**
                     * 获取**时区**
timeZone, 默认UTC+8
                     * @return ScheduleTimeZone **时区**
timeZone, 默认UTC+8
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置**时区**
timeZone, 默认UTC+8
                     * @param _scheduleTimeZone **时区**
timeZone, 默认UTC+8
                     * 
                     */
                    void SetScheduleTimeZone(const std::string& _scheduleTimeZone);

                    /**
                     * 判断参数 ScheduleTimeZone 是否已赋值
                     * @return ScheduleTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduleTimeZoneHasBeenSet() const;

                private:

                    /**
                     * **项目ID**
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * **实例计划调度时间过滤条件**
过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_scheduleTimeFrom;
                    bool m_scheduleTimeFromHasBeenSet;

                    /**
                     * **实例计划调度时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_scheduleTimeTo;
                    bool m_scheduleTimeToHasBeenSet;

                    /**
                     * **页码，整型**
配合pageSize使用且不能小于1， 默认值1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * **每页数目，整型**
配合pageNumber使用且不能大于200, 默认值 10
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * **查询结果排序字段**

- SCHEDULE_DATE 表示 根据计划调度时间排序
- START_TIME 表示 根据实例开始执行时间排序
- END_TIME 表示 根据实例结束执行时间排序
- COST_TIME 表示 根据实例执行时长排序
                     */
                    std::string m_sortColumn;
                    bool m_sortColumnHasBeenSet;

                    /**
                     * **实例排序方式**

- ASC 
- DESC
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * **实例类型**

- 0 表示补录类型
- 1 表示周期实例
- 2 表示非周期实例
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * **实例执行状态**
支持过滤多个，条件间为 或 的过滤关系

- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
                     */
                    std::vector<uint64_t> m_instanceStateList;
                    bool m_instanceStateListHasBeenSet;

                    /**
                     * **任务类型Id**

- 支持过滤多个，条件间为 或 的过滤关系
- 可以通过接口 DescribeAllTaskType 获取项目支持的全部任务类型
                     */
                    std::vector<uint64_t> m_taskTypeIdList;
                    bool m_taskTypeIdListHasBeenSet;

                    /**
                     * **任务周期类型**
支持过滤多个，条件间为 或 的过滤关系
* O: ONEOFF_CYCLE
* Y: YEAR_CYCLE
* M: MONTH_CYCLE
* W: WEEK_CYCLE
* D: DAY_CYCLE
* H: HOUR_CYCLE
* I: MINUTE_CYCLE
* C: CRONTAB_CYCLE
                     */
                    std::vector<std::string> m_taskCycleList;
                    bool m_taskCycleListHasBeenSet;

                    /**
                     * **任务名称 或 任务ID**
支持模糊搜索过滤, 多个用 英文逗号, 分割
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * **任务负责人**
支持过滤多个，条件间为 或 的过滤关系
                     */
                    std::vector<std::string> m_inChargeList;
                    bool m_inChargeListHasBeenSet;

                    /**
                     * **任务所属文件件**
支持过滤多个，条件间为 或 的过滤关系
可以通过接口 FindAllFolder 获取项目下的所有文件夹列表
                     */
                    std::vector<std::string> m_taskFolderIdList;
                    bool m_taskFolderIdListHasBeenSet;

                    /**
                     * **任务所属工作流**
支持过滤多个，条件间为 或 的过滤关系
可以通过接口 DescribeOpsWorkflows 获取项目下的所有工作流列表
                     */
                    std::vector<std::string> m_workflowIdList;
                    bool m_workflowIdListHasBeenSet;

                    /**
                     * **执行资源组Id**
支持过滤多个，条件间为 或 的过滤关系
可以通过接口 DescribeNormalSchedulerExecutorGroups 获取项目下的所有调度资源组列表
可以通过接口 DescribeNormalIntegrationExecutorGroups 获取项目下的所有集成资源组列表
                     */
                    std::vector<std::string> m_executorGroupIdList;
                    bool m_executorGroupIdListHasBeenSet;

                    /**
                     * **实例执行开始时间过滤条件**
过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_startTimeFrom;
                    bool m_startTimeFromHasBeenSet;

                    /**
                     * **实例执行开始时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_startTimeTo;
                    bool m_startTimeToHasBeenSet;

                    /**
                     * **时区**
timeZone, 默认UTC+8
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_LISTINSTANCESREQUEST_H_
