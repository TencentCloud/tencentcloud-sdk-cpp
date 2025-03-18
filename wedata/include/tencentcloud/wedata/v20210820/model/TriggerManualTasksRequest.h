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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TRIGGERMANUALTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TRIGGERMANUALTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/KVPair.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * TriggerManualTasks请求参数结构体
                */
                class TriggerManualTasksRequest : public AbstractModel
                {
                public:
                    TriggerManualTasksRequest();
                    ~TriggerManualTasksRequest() = default;
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
                     * 获取触发运行名称
                     * @return TriggerName 触发运行名称
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置触发运行名称
                     * @param _triggerName 触发运行名称
                     * 
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     * 
                     */
                    bool TriggerNameHasBeenSet() const;

                    /**
                     * 获取运行范围 ENTIRE_WORKFLOW or SPECIFIED_TASK
                     * @return TriggerScope 运行范围 ENTIRE_WORKFLOW or SPECIFIED_TASK
                     * 
                     */
                    std::string GetTriggerScope() const;

                    /**
                     * 设置运行范围 ENTIRE_WORKFLOW or SPECIFIED_TASK
                     * @param _triggerScope 运行范围 ENTIRE_WORKFLOW or SPECIFIED_TASK
                     * 
                     */
                    void SetTriggerScope(const std::string& _triggerScope);

                    /**
                     * 判断参数 TriggerScope 是否已赋值
                     * @return TriggerScope 是否已赋值
                     * 
                     */
                    bool TriggerScopeHasBeenSet() const;

                    /**
                     * 获取运行数据时间列表
                     * @return DataTimeList 运行数据时间列表
                     * 
                     */
                    std::vector<std::string> GetDataTimeList() const;

                    /**
                     * 设置运行数据时间列表
                     * @param _dataTimeList 运行数据时间列表
                     * 
                     */
                    void SetDataTimeList(const std::vector<std::string>& _dataTimeList);

                    /**
                     * 判断参数 DataTimeList 是否已赋值
                     * @return DataTimeList 是否已赋值
                     * 
                     */
                    bool DataTimeListHasBeenSet() const;

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
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取需要运行的任务列表
TriggerScope=ENTIRE_WORKFLOW 时无需传此参数，TriggerScope=SPECIFIED_TASK此参数必传
                     * @return TaskIds 需要运行的任务列表
TriggerScope=ENTIRE_WORKFLOW 时无需传此参数，TriggerScope=SPECIFIED_TASK此参数必传
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置需要运行的任务列表
TriggerScope=ENTIRE_WORKFLOW 时无需传此参数，TriggerScope=SPECIFIED_TASK此参数必传
                     * @param _taskIds 需要运行的任务列表
TriggerScope=ENTIRE_WORKFLOW 时无需传此参数，TriggerScope=SPECIFIED_TASK此参数必传
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取用户提交运行时指定的调度资源组，未指定时使用任务配置的调度资源组
                     * @return SchedulerResourceGroup 用户提交运行时指定的调度资源组，未指定时使用任务配置的调度资源组
                     * 
                     */
                    std::string GetSchedulerResourceGroup() const;

                    /**
                     * 设置用户提交运行时指定的调度资源组，未指定时使用任务配置的调度资源组
                     * @param _schedulerResourceGroup 用户提交运行时指定的调度资源组，未指定时使用任务配置的调度资源组
                     * 
                     */
                    void SetSchedulerResourceGroup(const std::string& _schedulerResourceGroup);

                    /**
                     * 判断参数 SchedulerResourceGroup 是否已赋值
                     * @return SchedulerResourceGroup 是否已赋值
                     * 
                     */
                    bool SchedulerResourceGroupHasBeenSet() const;

                    /**
                     * 获取用户提交运行时指定的集成资源组，未指定时使用任务配置的集成资源组
                     * @return IntegrationResourceGroup 用户提交运行时指定的集成资源组，未指定时使用任务配置的集成资源组
                     * 
                     */
                    std::string GetIntegrationResourceGroup() const;

                    /**
                     * 设置用户提交运行时指定的集成资源组，未指定时使用任务配置的集成资源组
                     * @param _integrationResourceGroup 用户提交运行时指定的集成资源组，未指定时使用任务配置的集成资源组
                     * 
                     */
                    void SetIntegrationResourceGroup(const std::string& _integrationResourceGroup);

                    /**
                     * 判断参数 IntegrationResourceGroup 是否已赋值
                     * @return IntegrationResourceGroup 是否已赋值
                     * 
                     */
                    bool IntegrationResourceGroupHasBeenSet() const;

                    /**
                     * 获取执行顺序 ASC、RAND、DESC
                     * @return ExecOrder 执行顺序 ASC、RAND、DESC
                     * 
                     */
                    std::string GetExecOrder() const;

                    /**
                     * 设置执行顺序 ASC、RAND、DESC
                     * @param _execOrder 执行顺序 ASC、RAND、DESC
                     * 
                     */
                    void SetExecOrder(const std::string& _execOrder);

                    /**
                     * 判断参数 ExecOrder 是否已赋值
                     * @return ExecOrder 是否已赋值
                     * 
                     */
                    bool ExecOrderHasBeenSet() const;

                    /**
                     * 获取自定义参数，最高优先级
                     * @return CustomParams 自定义参数，最高优先级
                     * 
                     */
                    std::vector<KVPair> GetCustomParams() const;

                    /**
                     * 设置自定义参数，最高优先级
                     * @param _customParams 自定义参数，最高优先级
                     * 
                     */
                    void SetCustomParams(const std::vector<KVPair>& _customParams);

                    /**
                     * 判断参数 CustomParams 是否已赋值
                     * @return CustomParams 是否已赋值
                     * 
                     */
                    bool CustomParamsHasBeenSet() const;

                    /**
                     * 获取页面反显使用，无业务含义
                     * @return ExtraParams 页面反显使用，无业务含义
                     * 
                     */
                    std::string GetExtraParams() const;

                    /**
                     * 设置页面反显使用，无业务含义
                     * @param _extraParams 页面反显使用，无业务含义
                     * 
                     */
                    void SetExtraParams(const std::string& _extraParams);

                    /**
                     * 判断参数 ExtraParams 是否已赋值
                     * @return ExtraParams 是否已赋值
                     * 
                     */
                    bool ExtraParamsHasBeenSet() const;

                    /**
                     * 获取实例时间的时区
                     * @return ScheduleTimeZone 实例时间的时区
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置实例时间的时区
                     * @param _scheduleTimeZone 实例时间的时区
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
                     * 获取时间类型，DATA_TIME：数据时间、SCHEDULE_TIME：计划调度时间, 为空时会被当成DATA_TIME处理
                     * @return TimeType 时间类型，DATA_TIME：数据时间、SCHEDULE_TIME：计划调度时间, 为空时会被当成DATA_TIME处理
                     * 
                     */
                    std::string GetTimeType() const;

                    /**
                     * 设置时间类型，DATA_TIME：数据时间、SCHEDULE_TIME：计划调度时间, 为空时会被当成DATA_TIME处理
                     * @param _timeType 时间类型，DATA_TIME：数据时间、SCHEDULE_TIME：计划调度时间, 为空时会被当成DATA_TIME处理
                     * 
                     */
                    void SetTimeType(const std::string& _timeType);

                    /**
                     * 判断参数 TimeType 是否已赋值
                     * @return TimeType 是否已赋值
                     * 
                     */
                    bool TimeTypeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 触发运行名称
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * 运行范围 ENTIRE_WORKFLOW or SPECIFIED_TASK
                     */
                    std::string m_triggerScope;
                    bool m_triggerScopeHasBeenSet;

                    /**
                     * 运行数据时间列表
                     */
                    std::vector<std::string> m_dataTimeList;
                    bool m_dataTimeListHasBeenSet;

                    /**
                     * 工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 需要运行的任务列表
TriggerScope=ENTIRE_WORKFLOW 时无需传此参数，TriggerScope=SPECIFIED_TASK此参数必传
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 用户提交运行时指定的调度资源组，未指定时使用任务配置的调度资源组
                     */
                    std::string m_schedulerResourceGroup;
                    bool m_schedulerResourceGroupHasBeenSet;

                    /**
                     * 用户提交运行时指定的集成资源组，未指定时使用任务配置的集成资源组
                     */
                    std::string m_integrationResourceGroup;
                    bool m_integrationResourceGroupHasBeenSet;

                    /**
                     * 执行顺序 ASC、RAND、DESC
                     */
                    std::string m_execOrder;
                    bool m_execOrderHasBeenSet;

                    /**
                     * 自定义参数，最高优先级
                     */
                    std::vector<KVPair> m_customParams;
                    bool m_customParamsHasBeenSet;

                    /**
                     * 页面反显使用，无业务含义
                     */
                    std::string m_extraParams;
                    bool m_extraParamsHasBeenSet;

                    /**
                     * 实例时间的时区
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * 时间类型，DATA_TIME：数据时间、SCHEDULE_TIME：计划调度时间, 为空时会被当成DATA_TIME处理
                     */
                    std::string m_timeType;
                    bool m_timeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TRIGGERMANUALTASKSREQUEST_H_
