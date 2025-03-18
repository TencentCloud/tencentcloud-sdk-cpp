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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEAPIOPSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEAPIOPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/InstanceOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/TaskTypeMap.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 实例查询类型
                */
                class InstanceApiOpsRequest : public AbstractModel
                {
                public:
                    InstanceApiOpsRequest();
                    ~InstanceApiOpsRequest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单个查询条件
                     * @return Instance 单个查询条件
                     * 
                     */
                    InstanceOpsDto GetInstance() const;

                    /**
                     * 设置单个查询条件
                     * @param _instance 单个查询条件
                     * 
                     */
                    void SetInstance(const InstanceOpsDto& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取排序字段，目前包含：重试次数，实例数据时间，运行耗时
                     * @return SortCol 排序字段，目前包含：重试次数，实例数据时间，运行耗时
                     * 
                     */
                    std::string GetSortCol() const;

                    /**
                     * 设置排序字段，目前包含：重试次数，实例数据时间，运行耗时
                     * @param _sortCol 排序字段，目前包含：重试次数，实例数据时间，运行耗时
                     * 
                     */
                    void SetSortCol(const std::string& _sortCol);

                    /**
                     * 判断参数 SortCol 是否已赋值
                     * @return SortCol 是否已赋值
                     * 
                     */
                    bool SortColHasBeenSet() const;

                    /**
                     * 获取任务id列表
                     * @return TaskIdList 任务id列表
                     * 
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置任务id列表
                     * @param _taskIdList 任务id列表
                     * 
                     */
                    void SetTaskIdList(const std::vector<std::string>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取按照taskName模糊查询
                     * @return TaskNameList 按照taskName模糊查询
                     * 
                     */
                    std::vector<std::string> GetTaskNameList() const;

                    /**
                     * 设置按照taskName模糊查询
                     * @param _taskNameList 按照taskName模糊查询
                     * 
                     */
                    void SetTaskNameList(const std::vector<std::string>& _taskNameList);

                    /**
                     * 判断参数 TaskNameList 是否已赋值
                     * @return TaskNameList 是否已赋值
                     * 
                     */
                    bool TaskNameListHasBeenSet() const;

                    /**
                     * 获取文件夹列表
                     * @return FolderList 文件夹列表
                     * 
                     */
                    std::vector<std::string> GetFolderList() const;

                    /**
                     * 设置文件夹列表
                     * @param _folderList 文件夹列表
                     * 
                     */
                    void SetFolderList(const std::vector<std::string>& _folderList);

                    /**
                     * 判断参数 FolderList 是否已赋值
                     * @return FolderList 是否已赋值
                     * 
                     */
                    bool FolderListHasBeenSet() const;

                    /**
                     * 获取升序或者降序
                     * @return Sort 升序或者降序
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置升序或者降序
                     * @param _sort 升序或者降序
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取实例状态列表
                     * @return StateList 实例状态列表
                     * 
                     */
                    std::vector<int64_t> GetStateList() const;

                    /**
                     * 设置实例状态列表
                     * @param _stateList 实例状态列表
                     * 
                     */
                    void SetStateList(const std::vector<int64_t>& _stateList);

                    /**
                     * 判断参数 StateList 是否已赋值
                     * @return StateList 是否已赋值
                     * 
                     */
                    bool StateListHasBeenSet() const;

                    /**
                     * 获取实例类型列表
                     * @return TaskTypeList 实例类型列表
                     * 
                     */
                    std::vector<int64_t> GetTaskTypeList() const;

                    /**
                     * 设置实例类型列表
                     * @param _taskTypeList 实例类型列表
                     * 
                     */
                    void SetTaskTypeList(const std::vector<int64_t>& _taskTypeList);

                    /**
                     * 判断参数 TaskTypeList 是否已赋值
                     * @return TaskTypeList 是否已赋值
                     * 
                     */
                    bool TaskTypeListHasBeenSet() const;

                    /**
                     * 获取周期类型
                     * @return CycleList 周期类型
                     * 
                     */
                    std::vector<std::string> GetCycleList() const;

                    /**
                     * 设置周期类型
                     * @param _cycleList 周期类型
                     * 
                     */
                    void SetCycleList(const std::vector<std::string>& _cycleList);

                    /**
                     * 判断参数 CycleList 是否已赋值
                     * @return CycleList 是否已赋值
                     * 
                     */
                    bool CycleListHasBeenSet() const;

                    /**
                     * 获取责任人
                     * @return OwnerList 责任人
                     * 
                     */
                    std::vector<std::string> GetOwnerList() const;

                    /**
                     * 设置责任人
                     * @param _ownerList 责任人
                     * 
                     */
                    void SetOwnerList(const std::vector<std::string>& _ownerList);

                    /**
                     * 判断参数 OwnerList 是否已赋值
                     * @return OwnerList 是否已赋值
                     * 
                     */
                    bool OwnerListHasBeenSet() const;

                    /**
                     * 获取数据时间
                     * @return DateFrom 数据时间
                     * 
                     */
                    std::string GetDateFrom() const;

                    /**
                     * 设置数据时间
                     * @param _dateFrom 数据时间
                     * 
                     */
                    void SetDateFrom(const std::string& _dateFrom);

                    /**
                     * 判断参数 DateFrom 是否已赋值
                     * @return DateFrom 是否已赋值
                     * 
                     */
                    bool DateFromHasBeenSet() const;

                    /**
                     * 获取数据时间
                     * @return DateTo 数据时间
                     * 
                     */
                    std::string GetDateTo() const;

                    /**
                     * 设置数据时间
                     * @param _dateTo 数据时间
                     * 
                     */
                    void SetDateTo(const std::string& _dateTo);

                    /**
                     * 判断参数 DateTo 是否已赋值
                     * @return DateTo 是否已赋值
                     * 
                     */
                    bool DateToHasBeenSet() const;

                    /**
                     * 获取实例入库时间
                     * @return CreateTimeFrom 实例入库时间
                     * 
                     */
                    std::string GetCreateTimeFrom() const;

                    /**
                     * 设置实例入库时间
                     * @param _createTimeFrom 实例入库时间
                     * 
                     */
                    void SetCreateTimeFrom(const std::string& _createTimeFrom);

                    /**
                     * 判断参数 CreateTimeFrom 是否已赋值
                     * @return CreateTimeFrom 是否已赋值
                     * 
                     */
                    bool CreateTimeFromHasBeenSet() const;

                    /**
                     * 获取实例入库时间
                     * @return CreateTimeTo 实例入库时间
                     * 
                     */
                    std::string GetCreateTimeTo() const;

                    /**
                     * 设置实例入库时间
                     * @param _createTimeTo 实例入库时间
                     * 
                     */
                    void SetCreateTimeTo(const std::string& _createTimeTo);

                    /**
                     * 判断参数 CreateTimeTo 是否已赋值
                     * @return CreateTimeTo 是否已赋值
                     * 
                     */
                    bool CreateTimeToHasBeenSet() const;

                    /**
                     * 获取 开始执行时间
                     * @return StartFrom  开始执行时间
                     * 
                     */
                    std::string GetStartFrom() const;

                    /**
                     * 设置 开始执行时间
                     * @param _startFrom  开始执行时间
                     * 
                     */
                    void SetStartFrom(const std::string& _startFrom);

                    /**
                     * 判断参数 StartFrom 是否已赋值
                     * @return StartFrom 是否已赋值
                     * 
                     */
                    bool StartFromHasBeenSet() const;

                    /**
                     * 获取 开始执行时间
                     * @return StartTo  开始执行时间
                     * 
                     */
                    std::string GetStartTo() const;

                    /**
                     * 设置 开始执行时间
                     * @param _startTo  开始执行时间
                     * 
                     */
                    void SetStartTo(const std::string& _startTo);

                    /**
                     * 判断参数 StartTo 是否已赋值
                     * @return StartTo 是否已赋值
                     * 
                     */
                    bool StartToHasBeenSet() const;

                    /**
                     * 获取所属工作流
                     * @return WorkflowIdList 所属工作流
                     * 
                     */
                    std::vector<std::string> GetWorkflowIdList() const;

                    /**
                     * 设置所属工作流
                     * @param _workflowIdList 所属工作流
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
                     * 获取按照workflowName模糊查询
                     * @return WorkflowNameList 按照workflowName模糊查询
                     * 
                     */
                    std::vector<std::string> GetWorkflowNameList() const;

                    /**
                     * 设置按照workflowName模糊查询
                     * @param _workflowNameList 按照workflowName模糊查询
                     * 
                     */
                    void SetWorkflowNameList(const std::vector<std::string>& _workflowNameList);

                    /**
                     * 判断参数 WorkflowNameList 是否已赋值
                     * @return WorkflowNameList 是否已赋值
                     * 
                     */
                    bool WorkflowNameListHasBeenSet() const;

                    /**
                     * 获取关键字模糊查询
                     * @return Keyword 关键字模糊查询
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键字模糊查询
                     * @param _keyword 关键字模糊查询
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
                     * 获取searchColumns是搜索的字段名列表
                     * @return SearchColumns searchColumns是搜索的字段名列表
                     * 
                     */
                    std::vector<std::string> GetSearchColumns() const;

                    /**
                     * 设置searchColumns是搜索的字段名列表
                     * @param _searchColumns searchColumns是搜索的字段名列表
                     * 
                     */
                    void SetSearchColumns(const std::vector<std::string>& _searchColumns);

                    /**
                     * 判断参数 SearchColumns 是否已赋值
                     * @return SearchColumns 是否已赋值
                     * 
                     */
                    bool SearchColumnsHasBeenSet() const;

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
                     * 获取限制
                     * @return Limit 限制
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制
                     * @param _limit 限制
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取任务类型映射关系, 存储任务类型id和任务类型描述信息
                     * @return TaskTypeMap 任务类型映射关系, 存储任务类型id和任务类型描述信息
                     * 
                     */
                    std::vector<TaskTypeMap> GetTaskTypeMap() const;

                    /**
                     * 设置任务类型映射关系, 存储任务类型id和任务类型描述信息
                     * @param _taskTypeMap 任务类型映射关系, 存储任务类型id和任务类型描述信息
                     * 
                     */
                    void SetTaskTypeMap(const std::vector<TaskTypeMap>& _taskTypeMap);

                    /**
                     * 判断参数 TaskTypeMap 是否已赋值
                     * @return TaskTypeMap 是否已赋值
                     * 
                     */
                    bool TaskTypeMapHasBeenSet() const;

                    /**
                     * 获取0 补录类型 1 周期实例 2 非周期实例
                     * @return InstanceType 0 补录类型 1 周期实例 2 非周期实例
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置0 补录类型 1 周期实例 2 非周期实例
                     * @param _instanceType 0 补录类型 1 周期实例 2 非周期实例
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取是否dag
                     * @return DagDeal 是否dag
                     * 
                     */
                    bool GetDagDeal() const;

                    /**
                     * 设置是否dag
                     * @param _dagDeal 是否dag
                     * 
                     */
                    void SetDagDeal(const bool& _dagDeal);

                    /**
                     * 判断参数 DagDeal 是否已赋值
                     * @return DagDeal 是否已赋值
                     * 
                     */
                    bool DagDealHasBeenSet() const;

                    /**
                     * 获取 1 父实例 2 子实例
                     * @return DagType  1 父实例 2 子实例
                     * 
                     */
                    std::string GetDagType() const;

                    /**
                     * 设置 1 父实例 2 子实例
                     * @param _dagType  1 父实例 2 子实例
                     * 
                     */
                    void SetDagType(const std::string& _dagType);

                    /**
                     * 判断参数 DagType 是否已赋值
                     * @return DagType 是否已赋值
                     * 
                     */
                    bool DagTypeHasBeenSet() const;

                    /**
                     * 获取1 自依赖 2 任务依赖  3 所有依赖
                     * @return DagDependent 1 自依赖 2 任务依赖  3 所有依赖
                     * 
                     */
                    std::string GetDagDependent() const;

                    /**
                     * 设置1 自依赖 2 任务依赖  3 所有依赖
                     * @param _dagDependent 1 自依赖 2 任务依赖  3 所有依赖
                     * 
                     */
                    void SetDagDependent(const std::string& _dagDependent);

                    /**
                     * 判断参数 DagDependent 是否已赋值
                     * @return DagDependent 是否已赋值
                     * 
                     */
                    bool DagDependentHasBeenSet() const;

                    /**
                     * 获取dag深度 默认为1，取值 1-6
                     * @return DagDepth dag深度 默认为1，取值 1-6
                     * 
                     */
                    int64_t GetDagDepth() const;

                    /**
                     * 设置dag深度 默认为1，取值 1-6
                     * @param _dagDepth dag深度 默认为1，取值 1-6
                     * 
                     */
                    void SetDagDepth(const int64_t& _dagDepth);

                    /**
                     * 判断参数 DagDepth 是否已赋值
                     * @return DagDepth 是否已赋值
                     * 
                     */
                    bool DagDepthHasBeenSet() const;

                    /**
                     * 获取租户id
                     * @return TenantId 租户id
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置租户id
                     * @param _tenantId 租户id
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取根据当前数据时间或者是下一个数据时间查询, 默认当前数据时间
                     * @return DataTimeCycle 根据当前数据时间或者是下一个数据时间查询, 默认当前数据时间
                     * 
                     */
                    std::string GetDataTimeCycle() const;

                    /**
                     * 设置根据当前数据时间或者是下一个数据时间查询, 默认当前数据时间
                     * @param _dataTimeCycle 根据当前数据时间或者是下一个数据时间查询, 默认当前数据时间
                     * 
                     */
                    void SetDataTimeCycle(const std::string& _dataTimeCycle);

                    /**
                     * 判断参数 DataTimeCycle 是否已赋值
                     * @return DataTimeCycle 是否已赋值
                     * 
                     */
                    bool DataTimeCycleHasBeenSet() const;

                    /**
                     * 获取资源组id,多个资源组id用英文逗号分隔
                     * @return ExecutorGroupIdList 资源组id,多个资源组id用英文逗号分隔
                     * 
                     */
                    std::vector<std::string> GetExecutorGroupIdList() const;

                    /**
                     * 设置资源组id,多个资源组id用英文逗号分隔
                     * @param _executorGroupIdList 资源组id,多个资源组id用英文逗号分隔
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
                     * 获取true 只过滤重跑过的实例，false 忽略此过滤条件，结果集过滤条件中不包括是否重跑
                     * @return OnlyRerun true 只过滤重跑过的实例，false 忽略此过滤条件，结果集过滤条件中不包括是否重跑
                     * 
                     */
                    bool GetOnlyRerun() const;

                    /**
                     * 设置true 只过滤重跑过的实例，false 忽略此过滤条件，结果集过滤条件中不包括是否重跑
                     * @param _onlyRerun true 只过滤重跑过的实例，false 忽略此过滤条件，结果集过滤条件中不包括是否重跑
                     * 
                     */
                    void SetOnlyRerun(const bool& _onlyRerun);

                    /**
                     * 判断参数 OnlyRerun 是否已赋值
                     * @return OnlyRerun 是否已赋值
                     * 
                     */
                    bool OnlyRerunHasBeenSet() const;

                    /**
                     * 获取时区
                     * @return ScheduleTimeZone 时区
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置时区
                     * @param _scheduleTimeZone 时区
                     * 
                     */
                    void SetScheduleTimeZone(const std::string& _scheduleTimeZone);

                    /**
                     * 判断参数 ScheduleTimeZone 是否已赋值
                     * @return ScheduleTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduleTimeZoneHasBeenSet() const;

                    /**
                     * 获取计划调度时间
                     * @return ScheduleTimeFrom 计划调度时间
                     * 
                     */
                    std::string GetScheduleTimeFrom() const;

                    /**
                     * 设置计划调度时间
                     * @param _scheduleTimeFrom 计划调度时间
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
                     * 获取计划调度时间
                     * @return ScheduleTimeTo 计划调度时间
                     * 
                     */
                    std::string GetScheduleTimeTo() const;

                    /**
                     * 设置计划调度时间
                     * @param _scheduleTimeTo 计划调度时间
                     * 
                     */
                    void SetScheduleTimeTo(const std::string& _scheduleTimeTo);

                    /**
                     * 判断参数 ScheduleTimeTo 是否已赋值
                     * @return ScheduleTimeTo 是否已赋值
                     * 
                     */
                    bool ScheduleTimeToHasBeenSet() const;

                private:

                    /**
                     * 单个查询条件
                     */
                    InstanceOpsDto m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * 排序字段，目前包含：重试次数，实例数据时间，运行耗时
                     */
                    std::string m_sortCol;
                    bool m_sortColHasBeenSet;

                    /**
                     * 任务id列表
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * 按照taskName模糊查询
                     */
                    std::vector<std::string> m_taskNameList;
                    bool m_taskNameListHasBeenSet;

                    /**
                     * 文件夹列表
                     */
                    std::vector<std::string> m_folderList;
                    bool m_folderListHasBeenSet;

                    /**
                     * 升序或者降序
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 实例状态列表
                     */
                    std::vector<int64_t> m_stateList;
                    bool m_stateListHasBeenSet;

                    /**
                     * 实例类型列表
                     */
                    std::vector<int64_t> m_taskTypeList;
                    bool m_taskTypeListHasBeenSet;

                    /**
                     * 周期类型
                     */
                    std::vector<std::string> m_cycleList;
                    bool m_cycleListHasBeenSet;

                    /**
                     * 责任人
                     */
                    std::vector<std::string> m_ownerList;
                    bool m_ownerListHasBeenSet;

                    /**
                     * 数据时间
                     */
                    std::string m_dateFrom;
                    bool m_dateFromHasBeenSet;

                    /**
                     * 数据时间
                     */
                    std::string m_dateTo;
                    bool m_dateToHasBeenSet;

                    /**
                     * 实例入库时间
                     */
                    std::string m_createTimeFrom;
                    bool m_createTimeFromHasBeenSet;

                    /**
                     * 实例入库时间
                     */
                    std::string m_createTimeTo;
                    bool m_createTimeToHasBeenSet;

                    /**
                     *  开始执行时间
                     */
                    std::string m_startFrom;
                    bool m_startFromHasBeenSet;

                    /**
                     *  开始执行时间
                     */
                    std::string m_startTo;
                    bool m_startToHasBeenSet;

                    /**
                     * 所属工作流
                     */
                    std::vector<std::string> m_workflowIdList;
                    bool m_workflowIdListHasBeenSet;

                    /**
                     * 按照workflowName模糊查询
                     */
                    std::vector<std::string> m_workflowNameList;
                    bool m_workflowNameListHasBeenSet;

                    /**
                     * 关键字模糊查询
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * searchColumns是搜索的字段名列表
                     */
                    std::vector<std::string> m_searchColumns;
                    bool m_searchColumnsHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 任务类型映射关系, 存储任务类型id和任务类型描述信息
                     */
                    std::vector<TaskTypeMap> m_taskTypeMap;
                    bool m_taskTypeMapHasBeenSet;

                    /**
                     * 0 补录类型 1 周期实例 2 非周期实例
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 是否dag
                     */
                    bool m_dagDeal;
                    bool m_dagDealHasBeenSet;

                    /**
                     *  1 父实例 2 子实例
                     */
                    std::string m_dagType;
                    bool m_dagTypeHasBeenSet;

                    /**
                     * 1 自依赖 2 任务依赖  3 所有依赖
                     */
                    std::string m_dagDependent;
                    bool m_dagDependentHasBeenSet;

                    /**
                     * dag深度 默认为1，取值 1-6
                     */
                    int64_t m_dagDepth;
                    bool m_dagDepthHasBeenSet;

                    /**
                     * 租户id
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 根据当前数据时间或者是下一个数据时间查询, 默认当前数据时间
                     */
                    std::string m_dataTimeCycle;
                    bool m_dataTimeCycleHasBeenSet;

                    /**
                     * 资源组id,多个资源组id用英文逗号分隔
                     */
                    std::vector<std::string> m_executorGroupIdList;
                    bool m_executorGroupIdListHasBeenSet;

                    /**
                     * true 只过滤重跑过的实例，false 忽略此过滤条件，结果集过滤条件中不包括是否重跑
                     */
                    bool m_onlyRerun;
                    bool m_onlyRerunHasBeenSet;

                    /**
                     * 时区
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * 计划调度时间
                     */
                    std::string m_scheduleTimeFrom;
                    bool m_scheduleTimeFromHasBeenSet;

                    /**
                     * 计划调度时间
                     */
                    std::string m_scheduleTimeTo;
                    bool m_scheduleTimeToHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEAPIOPSREQUEST_H_
