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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPERATEOPSTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPERATEOPSTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskTag.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeOperateOpsTasks请求参数结构体
                */
                class DescribeOperateOpsTasksRequest : public AbstractModel
                {
                public:
                    DescribeOperateOpsTasksRequest();
                    ~DescribeOperateOpsTasksRequest() = default;
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
                     * 获取文件夹id，多个文件夹以逗号分隔
                     * @return FolderIdList 文件夹id，多个文件夹以逗号分隔
                     * 
                     */
                    std::string GetFolderIdList() const;

                    /**
                     * 设置文件夹id，多个文件夹以逗号分隔
                     * @param _folderIdList 文件夹id，多个文件夹以逗号分隔
                     * 
                     */
                    void SetFolderIdList(const std::string& _folderIdList);

                    /**
                     * 判断参数 FolderIdList 是否已赋值
                     * @return FolderIdList 是否已赋值
                     * 
                     */
                    bool FolderIdListHasBeenSet() const;

                    /**
                     * 获取工作流id，多个工作流id之间以英文字符逗号分隔
                     * @return WorkFlowIdList 工作流id，多个工作流id之间以英文字符逗号分隔
                     * 
                     */
                    std::string GetWorkFlowIdList() const;

                    /**
                     * 设置工作流id，多个工作流id之间以英文字符逗号分隔
                     * @param _workFlowIdList 工作流id，多个工作流id之间以英文字符逗号分隔
                     * 
                     */
                    void SetWorkFlowIdList(const std::string& _workFlowIdList);

                    /**
                     * 判断参数 WorkFlowIdList 是否已赋值
                     * @return WorkFlowIdList 是否已赋值
                     * 
                     */
                    bool WorkFlowIdListHasBeenSet() const;

                    /**
                     * 获取工作流名称，多个工作流名称之间以英文字符逗号分隔
                     * @return WorkFlowNameList 工作流名称，多个工作流名称之间以英文字符逗号分隔
                     * 
                     */
                    std::string GetWorkFlowNameList() const;

                    /**
                     * 设置工作流名称，多个工作流名称之间以英文字符逗号分隔
                     * @param _workFlowNameList 工作流名称，多个工作流名称之间以英文字符逗号分隔
                     * 
                     */
                    void SetWorkFlowNameList(const std::string& _workFlowNameList);

                    /**
                     * 判断参数 WorkFlowNameList 是否已赋值
                     * @return WorkFlowNameList 是否已赋值
                     * 
                     */
                    bool WorkFlowNameListHasBeenSet() const;

                    /**
                     * 获取任务名称，多个任务名称之间以英文字符逗号分隔
                     * @return TaskNameList 任务名称，多个任务名称之间以英文字符逗号分隔
                     * 
                     */
                    std::string GetTaskNameList() const;

                    /**
                     * 设置任务名称，多个任务名称之间以英文字符逗号分隔
                     * @param _taskNameList 任务名称，多个任务名称之间以英文字符逗号分隔
                     * 
                     */
                    void SetTaskNameList(const std::string& _taskNameList);

                    /**
                     * 判断参数 TaskNameList 是否已赋值
                     * @return TaskNameList 是否已赋值
                     * 
                     */
                    bool TaskNameListHasBeenSet() const;

                    /**
                     * 获取任务id，多个任务id之间以英文字符逗号分隔
                     * @return TaskIdList 任务id，多个任务id之间以英文字符逗号分隔
                     * 
                     */
                    std::string GetTaskIdList() const;

                    /**
                     * 设置任务id，多个任务id之间以英文字符逗号分隔
                     * @param _taskIdList 任务id，多个任务id之间以英文字符逗号分隔
                     * 
                     */
                    void SetTaskIdList(const std::string& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取页号
                     * @return PageNumber 页号
                     * 
                     */
                    std::string GetPageNumber() const;

                    /**
                     * 设置页号
                     * @param _pageNumber 页号
                     * 
                     */
                    void SetPageNumber(const std::string& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return PageSize 分页大小
                     * 
                     */
                    std::string GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param _pageSize 分页大小
                     * 
                     */
                    void SetPageSize(const std::string& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取排序字段，支持字段为FirstSubmitTime和FirstRunTime，标识最近提交和首次执行事件
                     * @return SortItem 排序字段，支持字段为FirstSubmitTime和FirstRunTime，标识最近提交和首次执行事件
                     * 
                     */
                    std::string GetSortItem() const;

                    /**
                     * 设置排序字段，支持字段为FirstSubmitTime和FirstRunTime，标识最近提交和首次执行事件
                     * @param _sortItem 排序字段，支持字段为FirstSubmitTime和FirstRunTime，标识最近提交和首次执行事件
                     * 
                     */
                    void SetSortItem(const std::string& _sortItem);

                    /**
                     * 判断参数 SortItem 是否已赋值
                     * @return SortItem 是否已赋值
                     * 
                     */
                    bool SortItemHasBeenSet() const;

                    /**
                     * 获取排序类型。两种取值 DESC、ASC
                     * @return SortType 排序类型。两种取值 DESC、ASC
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置排序类型。两种取值 DESC、ASC
                     * @param _sortType 排序类型。两种取值 DESC、ASC
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
                     * 获取责任人，多个责任人之间以英文字符逗号分隔
                     * @return InChargeList 责任人，多个责任人之间以英文字符逗号分隔
                     * 
                     */
                    std::string GetInChargeList() const;

                    /**
                     * 设置责任人，多个责任人之间以英文字符逗号分隔
                     * @param _inChargeList 责任人，多个责任人之间以英文字符逗号分隔
                     * 
                     */
                    void SetInChargeList(const std::string& _inChargeList);

                    /**
                     * 判断参数 InChargeList 是否已赋值
                     * @return InChargeList 是否已赋值
                     * 
                     */
                    bool InChargeListHasBeenSet() const;

                    /**
                     * 获取任务类型Id字符串，多个任务类型id之间以英文字符逗号分隔
                     * @return TaskTypeIdList 任务类型Id字符串，多个任务类型id之间以英文字符逗号分隔
                     * 
                     */
                    std::string GetTaskTypeIdList() const;

                    /**
                     * 设置任务类型Id字符串，多个任务类型id之间以英文字符逗号分隔
                     * @param _taskTypeIdList 任务类型Id字符串，多个任务类型id之间以英文字符逗号分隔
                     * 
                     */
                    void SetTaskTypeIdList(const std::string& _taskTypeIdList);

                    /**
                     * 判断参数 TaskTypeIdList 是否已赋值
                     * @return TaskTypeIdList 是否已赋值
                     * 
                     */
                    bool TaskTypeIdListHasBeenSet() const;

                    /**
                     * 获取任务状态字符串，多个任务状态之间以英文字符逗号分隔
                     * @return StatusList 任务状态字符串，多个任务状态之间以英文字符逗号分隔
                     * 
                     */
                    std::string GetStatusList() const;

                    /**
                     * 设置任务状态字符串，多个任务状态之间以英文字符逗号分隔
                     * @param _statusList 任务状态字符串，多个任务状态之间以英文字符逗号分隔
                     * 
                     */
                    void SetStatusList(const std::string& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                    /**
                     * 获取任务周期类型字符串，多个任务周期之间以英文字符逗号分隔
                     * @return TaskCycleUnitList 任务周期类型字符串，多个任务周期之间以英文字符逗号分隔
                     * 
                     */
                    std::string GetTaskCycleUnitList() const;

                    /**
                     * 设置任务周期类型字符串，多个任务周期之间以英文字符逗号分隔
                     * @param _taskCycleUnitList 任务周期类型字符串，多个任务周期之间以英文字符逗号分隔
                     * 
                     */
                    void SetTaskCycleUnitList(const std::string& _taskCycleUnitList);

                    /**
                     * 判断参数 TaskCycleUnitList 是否已赋值
                     * @return TaskCycleUnitList 是否已赋值
                     * 
                     */
                    bool TaskCycleUnitListHasBeenSet() const;

                    /**
                     * 获取任务所属产品类型
                     * @return ProductNameList 任务所属产品类型
                     * 
                     */
                    std::string GetProductNameList() const;

                    /**
                     * 设置任务所属产品类型
                     * @param _productNameList 任务所属产品类型
                     * 
                     */
                    void SetProductNameList(const std::string& _productNameList);

                    /**
                     * 判断参数 ProductNameList 是否已赋值
                     * @return ProductNameList 是否已赋值
                     * 
                     */
                    bool ProductNameListHasBeenSet() const;

                    /**
                     * 获取数据源id或（仅针对离线同步任务）来源数据源id
                     * @return SourceServiceId 数据源id或（仅针对离线同步任务）来源数据源id
                     * 
                     */
                    std::string GetSourceServiceId() const;

                    /**
                     * 设置数据源id或（仅针对离线同步任务）来源数据源id
                     * @param _sourceServiceId 数据源id或（仅针对离线同步任务）来源数据源id
                     * 
                     */
                    void SetSourceServiceId(const std::string& _sourceServiceId);

                    /**
                     * 判断参数 SourceServiceId 是否已赋值
                     * @return SourceServiceId 是否已赋值
                     * 
                     */
                    bool SourceServiceIdHasBeenSet() const;

                    /**
                     * 获取数据源类型或（仅针对离线同步任务）来源数据源类型
                     * @return SourceServiceType 数据源类型或（仅针对离线同步任务）来源数据源类型
                     * 
                     */
                    std::string GetSourceServiceType() const;

                    /**
                     * 设置数据源类型或（仅针对离线同步任务）来源数据源类型
                     * @param _sourceServiceType 数据源类型或（仅针对离线同步任务）来源数据源类型
                     * 
                     */
                    void SetSourceServiceType(const std::string& _sourceServiceType);

                    /**
                     * 判断参数 SourceServiceType 是否已赋值
                     * @return SourceServiceType 是否已赋值
                     * 
                     */
                    bool SourceServiceTypeHasBeenSet() const;

                    /**
                     * 获取（仅针对离线同步任务）目标数据源id
                     * @return TargetServiceId （仅针对离线同步任务）目标数据源id
                     * 
                     */
                    std::string GetTargetServiceId() const;

                    /**
                     * 设置（仅针对离线同步任务）目标数据源id
                     * @param _targetServiceId （仅针对离线同步任务）目标数据源id
                     * 
                     */
                    void SetTargetServiceId(const std::string& _targetServiceId);

                    /**
                     * 判断参数 TargetServiceId 是否已赋值
                     * @return TargetServiceId 是否已赋值
                     * 
                     */
                    bool TargetServiceIdHasBeenSet() const;

                    /**
                     * 获取（仅针对离线同步任务）目标数据源类型
                     * @return TargetServiceType （仅针对离线同步任务）目标数据源类型
                     * 
                     */
                    std::string GetTargetServiceType() const;

                    /**
                     * 设置（仅针对离线同步任务）目标数据源类型
                     * @param _targetServiceType （仅针对离线同步任务）目标数据源类型
                     * 
                     */
                    void SetTargetServiceType(const std::string& _targetServiceType);

                    /**
                     * 判断参数 TargetServiceType 是否已赋值
                     * @return TargetServiceType 是否已赋值
                     * 
                     */
                    bool TargetServiceTypeHasBeenSet() const;

                    /**
                     * 获取告警类型，多个类型以逗号分隔
                     * @return AlarmType 告警类型，多个类型以逗号分隔
                     * 
                     */
                    std::string GetAlarmType() const;

                    /**
                     * 设置告警类型，多个类型以逗号分隔
                     * @param _alarmType 告警类型，多个类型以逗号分隔
                     * 
                     */
                    void SetAlarmType(const std::string& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取资源组id,多个资源组id之间以英文字符逗号分隔
                     * @return ExecutorGroupIdList 资源组id,多个资源组id之间以英文字符逗号分隔
                     * 
                     */
                    std::string GetExecutorGroupIdList() const;

                    /**
                     * 设置资源组id,多个资源组id之间以英文字符逗号分隔
                     * @param _executorGroupIdList 资源组id,多个资源组id之间以英文字符逗号分隔
                     * 
                     */
                    void SetExecutorGroupIdList(const std::string& _executorGroupIdList);

                    /**
                     * 判断参数 ExecutorGroupIdList 是否已赋值
                     * @return ExecutorGroupIdList 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdListHasBeenSet() const;

                    /**
                     * 获取任务标签
                     * @return TaskTags 任务标签
                     * 
                     */
                    std::vector<TaskTag> GetTaskTags() const;

                    /**
                     * 设置任务标签
                     * @param _taskTags 任务标签
                     * 
                     */
                    void SetTaskTags(const std::vector<TaskTag>& _taskTags);

                    /**
                     * 判断参数 TaskTags 是否已赋值
                     * @return TaskTags 是否已赋值
                     * 
                     */
                    bool TaskTagsHasBeenSet() const;

                    /**
                     * 获取查询关键字
                     * @return KeyWord 查询关键字
                     * 
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置查询关键字
                     * @param _keyWord 查询关键字
                     * 
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     * 
                     */
                    bool KeyWordHasBeenSet() const;

                    /**
                     * 获取实例生成方式
                     * @return InitStrategy 实例生成方式
                     * 
                     */
                    std::string GetInitStrategy() const;

                    /**
                     * 设置实例生成方式
                     * @param _initStrategy 实例生成方式
                     * 
                     */
                    void SetInitStrategy(const std::string& _initStrategy);

                    /**
                     * 判断参数 InitStrategy 是否已赋值
                     * @return InitStrategy 是否已赋值
                     * 
                     */
                    bool InitStrategyHasBeenSet() const;

                    /**
                     * 获取额外请求的资源类型
                     * @return RequestResourceTypes 额外请求的资源类型
                     * 
                     */
                    std::vector<std::string> GetRequestResourceTypes() const;

                    /**
                     * 设置额外请求的资源类型
                     * @param _requestResourceTypes 额外请求的资源类型
                     * 
                     */
                    void SetRequestResourceTypes(const std::vector<std::string>& _requestResourceTypes);

                    /**
                     * 判断参数 RequestResourceTypes 是否已赋值
                     * @return RequestResourceTypes 是否已赋值
                     * 
                     */
                    bool RequestResourceTypesHasBeenSet() const;

                    /**
                     * 获取项目ID列表
                     * @return ProjectIds 项目ID列表
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置项目ID列表
                     * @param _projectIds 项目ID列表
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取黑名单任务ID列表，传了该值在筛选的时候会将列表中的任务ID剔除
                     * @return BlackTaskIdList 黑名单任务ID列表，传了该值在筛选的时候会将列表中的任务ID剔除
                     * 
                     */
                    std::vector<std::string> GetBlackTaskIdList() const;

                    /**
                     * 设置黑名单任务ID列表，传了该值在筛选的时候会将列表中的任务ID剔除
                     * @param _blackTaskIdList 黑名单任务ID列表，传了该值在筛选的时候会将列表中的任务ID剔除
                     * 
                     */
                    void SetBlackTaskIdList(const std::vector<std::string>& _blackTaskIdList);

                    /**
                     * 判断参数 BlackTaskIdList 是否已赋值
                     * @return BlackTaskIdList 是否已赋值
                     * 
                     */
                    bool BlackTaskIdListHasBeenSet() const;

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

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 文件夹id，多个文件夹以逗号分隔
                     */
                    std::string m_folderIdList;
                    bool m_folderIdListHasBeenSet;

                    /**
                     * 工作流id，多个工作流id之间以英文字符逗号分隔
                     */
                    std::string m_workFlowIdList;
                    bool m_workFlowIdListHasBeenSet;

                    /**
                     * 工作流名称，多个工作流名称之间以英文字符逗号分隔
                     */
                    std::string m_workFlowNameList;
                    bool m_workFlowNameListHasBeenSet;

                    /**
                     * 任务名称，多个任务名称之间以英文字符逗号分隔
                     */
                    std::string m_taskNameList;
                    bool m_taskNameListHasBeenSet;

                    /**
                     * 任务id，多个任务id之间以英文字符逗号分隔
                     */
                    std::string m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * 页号
                     */
                    std::string m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小
                     */
                    std::string m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 排序字段，支持字段为FirstSubmitTime和FirstRunTime，标识最近提交和首次执行事件
                     */
                    std::string m_sortItem;
                    bool m_sortItemHasBeenSet;

                    /**
                     * 排序类型。两种取值 DESC、ASC
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 责任人，多个责任人之间以英文字符逗号分隔
                     */
                    std::string m_inChargeList;
                    bool m_inChargeListHasBeenSet;

                    /**
                     * 任务类型Id字符串，多个任务类型id之间以英文字符逗号分隔
                     */
                    std::string m_taskTypeIdList;
                    bool m_taskTypeIdListHasBeenSet;

                    /**
                     * 任务状态字符串，多个任务状态之间以英文字符逗号分隔
                     */
                    std::string m_statusList;
                    bool m_statusListHasBeenSet;

                    /**
                     * 任务周期类型字符串，多个任务周期之间以英文字符逗号分隔
                     */
                    std::string m_taskCycleUnitList;
                    bool m_taskCycleUnitListHasBeenSet;

                    /**
                     * 任务所属产品类型
                     */
                    std::string m_productNameList;
                    bool m_productNameListHasBeenSet;

                    /**
                     * 数据源id或（仅针对离线同步任务）来源数据源id
                     */
                    std::string m_sourceServiceId;
                    bool m_sourceServiceIdHasBeenSet;

                    /**
                     * 数据源类型或（仅针对离线同步任务）来源数据源类型
                     */
                    std::string m_sourceServiceType;
                    bool m_sourceServiceTypeHasBeenSet;

                    /**
                     * （仅针对离线同步任务）目标数据源id
                     */
                    std::string m_targetServiceId;
                    bool m_targetServiceIdHasBeenSet;

                    /**
                     * （仅针对离线同步任务）目标数据源类型
                     */
                    std::string m_targetServiceType;
                    bool m_targetServiceTypeHasBeenSet;

                    /**
                     * 告警类型，多个类型以逗号分隔
                     */
                    std::string m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * 资源组id,多个资源组id之间以英文字符逗号分隔
                     */
                    std::string m_executorGroupIdList;
                    bool m_executorGroupIdListHasBeenSet;

                    /**
                     * 任务标签
                     */
                    std::vector<TaskTag> m_taskTags;
                    bool m_taskTagsHasBeenSet;

                    /**
                     * 查询关键字
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                    /**
                     * 实例生成方式
                     */
                    std::string m_initStrategy;
                    bool m_initStrategyHasBeenSet;

                    /**
                     * 额外请求的资源类型
                     */
                    std::vector<std::string> m_requestResourceTypes;
                    bool m_requestResourceTypesHasBeenSet;

                    /**
                     * 项目ID列表
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 黑名单任务ID列表，传了该值在筛选的时候会将列表中的任务ID剔除
                     */
                    std::vector<std::string> m_blackTaskIdList;
                    bool m_blackTaskIdListHasBeenSet;

                    /**
                     * 时区
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPERATEOPSTASKSREQUEST_H_
