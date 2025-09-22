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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKINSTANCESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKINSTANCESREQUEST_H_

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
                * ListTaskInstances请求参数结构体
                */
                class ListTaskInstancesRequest : public AbstractModel
                {
                public:
                    ListTaskInstancesRequest();
                    ~ListTaskInstancesRequest() = default;
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
                     * 获取**每页显示的条数，默认为10，最小值为1、最大值为100
                     * @return PageSize **每页显示的条数，默认为10，最小值为1、最大值为100
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置**每页显示的条数，默认为10，最小值为1、最大值为100
                     * @param _pageSize **每页显示的条数，默认为10，最小值为1、最大值为100
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
                     * 获取**时区**timeZone, 传入的时间字符串的所在时区，默认UTC+8
                     * @return TimeZone **时区**timeZone, 传入的时间字符串的所在时区，默认UTC+8
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置**时区**timeZone, 传入的时间字符串的所在时区，默认UTC+8
                     * @param _timeZone **时区**timeZone, 传入的时间字符串的所在时区，默认UTC+8
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

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
                     * 获取**实例状态** - WAIT_EVENT: 等待事件 - WAIT_UPSTREAM: 等待上游 - WAIT_RUN: 等待运行 - RUNNING: 运行中 - SKIP_RUNNING: 跳过运行 - FAILED_RETRY: 失败重试 - EXPIRED: 失败 - COMPLETED: 成功
                     * @return InstanceState **实例状态** - WAIT_EVENT: 等待事件 - WAIT_UPSTREAM: 等待上游 - WAIT_RUN: 等待运行 - RUNNING: 运行中 - SKIP_RUNNING: 跳过运行 - FAILED_RETRY: 失败重试 - EXPIRED: 失败 - COMPLETED: 成功
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置**实例状态** - WAIT_EVENT: 等待事件 - WAIT_UPSTREAM: 等待上游 - WAIT_RUN: 等待运行 - RUNNING: 运行中 - SKIP_RUNNING: 跳过运行 - FAILED_RETRY: 失败重试 - EXPIRED: 失败 - COMPLETED: 成功
                     * @param _instanceState **实例状态** - WAIT_EVENT: 等待事件 - WAIT_UPSTREAM: 等待上游 - WAIT_RUN: 等待运行 - RUNNING: 运行中 - SKIP_RUNNING: 跳过运行 - FAILED_RETRY: 失败重试 - EXPIRED: 失败 - COMPLETED: 成功
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取**任务类型Id**
                     * @return TaskTypeId **任务类型Id**
                     * 
                     */
                    uint64_t GetTaskTypeId() const;

                    /**
                     * 设置**任务类型Id**
                     * @param _taskTypeId **任务类型Id**
                     * 
                     */
                    void SetTaskTypeId(const uint64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取**任务周期类型** * ONEOFF_CYCLE: 一次性 * YEAR_CYCLE: 年 * MONTH_CYCLE: 月 * WEEK_CYCLE: 周 * DAY_CYCLE: 天 * HOUR_CYCLE: 小时 * MINUTE_CYCLE: 分钟 * CRONTAB_CYCLE: crontab表达式类型
                     * @return CycleType **任务周期类型** * ONEOFF_CYCLE: 一次性 * YEAR_CYCLE: 年 * MONTH_CYCLE: 月 * WEEK_CYCLE: 周 * DAY_CYCLE: 天 * HOUR_CYCLE: 小时 * MINUTE_CYCLE: 分钟 * CRONTAB_CYCLE: crontab表达式类型
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置**任务周期类型** * ONEOFF_CYCLE: 一次性 * YEAR_CYCLE: 年 * MONTH_CYCLE: 月 * WEEK_CYCLE: 周 * DAY_CYCLE: 天 * HOUR_CYCLE: 小时 * MINUTE_CYCLE: 分钟 * CRONTAB_CYCLE: crontab表达式类型
                     * @param _cycleType **任务周期类型** * ONEOFF_CYCLE: 一次性 * YEAR_CYCLE: 年 * MONTH_CYCLE: 月 * WEEK_CYCLE: 周 * DAY_CYCLE: 天 * HOUR_CYCLE: 小时 * MINUTE_CYCLE: 分钟 * CRONTAB_CYCLE: crontab表达式类型
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取**任务负责人id**
                     * @return OwnerUin **任务负责人id**
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置**任务负责人id**
                     * @param _ownerUin **任务负责人id**
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
                     * 获取**任务所属文件id**
                     * @return FolderId **任务所属文件id**
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置**任务所属文件id**
                     * @param _folderId **任务所属文件id**
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
                     * 获取**任务所属工作流id**
                     * @return WorkflowId **任务所属工作流id**
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置**任务所属工作流id**
                     * @param _workflowId **任务所属工作流id**
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
                     * 获取**执行资源组Id**
                     * @return ExecutorGroupId **执行资源组Id**
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置**执行资源组Id**
                     * @param _executorGroupId **执行资源组Id**
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取**实例计划调度时间过滤条件**过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * @return ScheduleTimeFrom **实例计划调度时间过滤条件**过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetScheduleTimeFrom() const;

                    /**
                     * 设置**实例计划调度时间过滤条件**过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * @param _scheduleTimeFrom **实例计划调度时间过滤条件**过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
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
                     * 获取**实例计划调度时间过滤条件**过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * @return ScheduleTimeTo **实例计划调度时间过滤条件**过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetScheduleTimeTo() const;

                    /**
                     * 设置**实例计划调度时间过滤条件**过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * @param _scheduleTimeTo **实例计划调度时间过滤条件**过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
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
                     * 获取**实例执行开始时间过滤条件**过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * @return StartTimeFrom **实例执行开始时间过滤条件**过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetStartTimeFrom() const;

                    /**
                     * 设置**实例执行开始时间过滤条件**过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * @param _startTimeFrom **实例执行开始时间过滤条件**过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
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
                     * 获取**实例最近更新时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * @return LastUpdateTimeFrom **实例最近更新时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetLastUpdateTimeFrom() const;

                    /**
                     * 设置**实例最近更新时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * @param _lastUpdateTimeFrom **实例最近更新时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetLastUpdateTimeFrom(const std::string& _lastUpdateTimeFrom);

                    /**
                     * 判断参数 LastUpdateTimeFrom 是否已赋值
                     * @return LastUpdateTimeFrom 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeFromHasBeenSet() const;

                    /**
                     * 获取**实例最近更新时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * @return LastUpdateTimeTo **实例最近更新时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetLastUpdateTimeTo() const;

                    /**
                     * 设置**实例最近更新时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * @param _lastUpdateTimeTo **实例最近更新时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetLastUpdateTimeTo(const std::string& _lastUpdateTimeTo);

                    /**
                     * 判断参数 LastUpdateTimeTo 是否已赋值
                     * @return LastUpdateTimeTo 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeToHasBeenSet() const;

                    /**
                     * 获取**查询结果排序字段**- SCHEDULE_DATE 表示 根据计划调度时间排序- START_TIME 表示 根据实例开始执行时间排序- END_TIME 表示 根据实例结束执行时间排序- COST_TIME 表示 根据实例执行时长排序
                     * @return SortColumn **查询结果排序字段**- SCHEDULE_DATE 表示 根据计划调度时间排序- START_TIME 表示 根据实例开始执行时间排序- END_TIME 表示 根据实例结束执行时间排序- COST_TIME 表示 根据实例执行时长排序
                     * 
                     */
                    std::string GetSortColumn() const;

                    /**
                     * 设置**查询结果排序字段**- SCHEDULE_DATE 表示 根据计划调度时间排序- START_TIME 表示 根据实例开始执行时间排序- END_TIME 表示 根据实例结束执行时间排序- COST_TIME 表示 根据实例执行时长排序
                     * @param _sortColumn **查询结果排序字段**- SCHEDULE_DATE 表示 根据计划调度时间排序- START_TIME 表示 根据实例开始执行时间排序- END_TIME 表示 根据实例结束执行时间排序- COST_TIME 表示 根据实例执行时长排序
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

                private:

                    /**
                     * **项目ID**
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * **页码，整型**
配合pageSize使用且不能小于1， 默认值1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * **每页显示的条数，默认为10，最小值为1、最大值为100
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * **任务名称 或 任务ID**
支持模糊搜索过滤, 多个用 英文逗号, 分割
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * **时区**timeZone, 传入的时间字符串的所在时区，默认UTC+8
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * **实例类型** 
- 0 表示补录类型 
- 1 表示周期实例 
- 2 表示非周期实例
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * **实例状态** - WAIT_EVENT: 等待事件 - WAIT_UPSTREAM: 等待上游 - WAIT_RUN: 等待运行 - RUNNING: 运行中 - SKIP_RUNNING: 跳过运行 - FAILED_RETRY: 失败重试 - EXPIRED: 失败 - COMPLETED: 成功
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * **任务类型Id**
                     */
                    uint64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * **任务周期类型** * ONEOFF_CYCLE: 一次性 * YEAR_CYCLE: 年 * MONTH_CYCLE: 月 * WEEK_CYCLE: 周 * DAY_CYCLE: 天 * HOUR_CYCLE: 小时 * MINUTE_CYCLE: 分钟 * CRONTAB_CYCLE: crontab表达式类型
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * **任务负责人id**
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * **任务所属文件id**
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * **任务所属工作流id**
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * **执行资源组Id**
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * **实例计划调度时间过滤条件**过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_scheduleTimeFrom;
                    bool m_scheduleTimeFromHasBeenSet;

                    /**
                     * **实例计划调度时间过滤条件**过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_scheduleTimeTo;
                    bool m_scheduleTimeToHasBeenSet;

                    /**
                     * **实例执行开始时间过滤条件**过滤起始时间，时间格式为 yyyy-MM-dd HH:mm:ss
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
                     * **实例最近更新时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_lastUpdateTimeFrom;
                    bool m_lastUpdateTimeFromHasBeenSet;

                    /**
                     * **实例最近更新时间过滤条件**
过滤截止时间，时间格式为 yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_lastUpdateTimeTo;
                    bool m_lastUpdateTimeToHasBeenSet;

                    /**
                     * **查询结果排序字段**- SCHEDULE_DATE 表示 根据计划调度时间排序- START_TIME 表示 根据实例开始执行时间排序- END_TIME 表示 根据实例结束执行时间排序- COST_TIME 表示 根据实例执行时长排序
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKINSTANCESREQUEST_H_
