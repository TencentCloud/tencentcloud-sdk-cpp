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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYEXECSTRATEGYREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYEXECSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ProdSchedulerTask.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyExecStrategy请求参数结构体
                */
                class ModifyExecStrategyRequest : public AbstractModel
                {
                public:
                    ModifyExecStrategyRequest();
                    ~ModifyExecStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则组ID
                     * @return RuleGroupId 规则组ID
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置规则组ID
                     * @param _ruleGroupId 规则组ID
                     * 
                     */
                    void SetRuleGroupId(const uint64_t& _ruleGroupId);

                    /**
                     * 判断参数 RuleGroupId 是否已赋值
                     * @return RuleGroupId 是否已赋值
                     * 
                     */
                    bool RuleGroupIdHasBeenSet() const;

                    /**
                     * 获取监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
                     * @return MonitorType 监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
                     * 
                     */
                    uint64_t GetMonitorType() const;

                    /**
                     * 设置监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
                     * @param _monitorType 监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
                     * 
                     */
                    void SetMonitorType(const uint64_t& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取计算队列
                     * @return ExecQueue 计算队列
                     * 
                     */
                    std::string GetExecQueue() const;

                    /**
                     * 设置计算队列
                     * @param _execQueue 计算队列
                     * 
                     */
                    void SetExecQueue(const std::string& _execQueue);

                    /**
                     * 判断参数 ExecQueue 是否已赋值
                     * @return ExecQueue 是否已赋值
                     * 
                     */
                    bool ExecQueueHasBeenSet() const;

                    /**
                     * 获取执行资源组ID
                     * @return ExecutorGroupId 执行资源组ID
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置执行资源组ID
                     * @param _executorGroupId 执行资源组ID
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
                     * 获取执行资源组名称
                     * @return ExecutorGroupName 执行资源组名称
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置执行资源组名称
                     * @param _executorGroupName 执行资源组名称
                     * 
                     */
                    void SetExecutorGroupName(const std::string& _executorGroupName);

                    /**
                     * 判断参数 ExecutorGroupName 是否已赋值
                     * @return ExecutorGroupName 是否已赋值
                     * 
                     */
                    bool ExecutorGroupNameHasBeenSet() const;

                    /**
                     * 获取关联的生产调度任务列表
                     * @return Tasks 关联的生产调度任务列表
                     * 
                     */
                    std::vector<ProdSchedulerTask> GetTasks() const;

                    /**
                     * 设置关联的生产调度任务列表
                     * @param _tasks 关联的生产调度任务列表
                     * 
                     */
                    void SetTasks(const std::vector<ProdSchedulerTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

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
                     * 获取离线周期模式下,生效日期-开始时间
                     * @return StartTime 离线周期模式下,生效日期-开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置离线周期模式下,生效日期-开始时间
                     * @param _startTime 离线周期模式下,生效日期-开始时间
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
                     * 获取离线周期模式下,生效日期-结束时间
                     * @return EndTime 离线周期模式下,生效日期-结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置离线周期模式下,生效日期-结束时间
                     * @param _endTime 离线周期模式下,生效日期-结束时间
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
                     * 获取离线周期模式下,调度周期 
MINUTE_CYCLE:I,
HOUR_CYCLE:H,
DAY_CYCLE:D,
WEEK_CYCLE:W,
MONTH_CYCLE:M
                     * @return CycleType 离线周期模式下,调度周期 
MINUTE_CYCLE:I,
HOUR_CYCLE:H,
DAY_CYCLE:D,
WEEK_CYCLE:W,
MONTH_CYCLE:M
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置离线周期模式下,调度周期 
MINUTE_CYCLE:I,
HOUR_CYCLE:H,
DAY_CYCLE:D,
WEEK_CYCLE:W,
MONTH_CYCLE:M
                     * @param _cycleType 离线周期模式下,调度周期 
MINUTE_CYCLE:I,
HOUR_CYCLE:H,
DAY_CYCLE:D,
WEEK_CYCLE:W,
MONTH_CYCLE:M
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
                     * 获取离线周期模式下,调度步长
                     * @return CycleStep 离线周期模式下,调度步长
                     * 
                     */
                    uint64_t GetCycleStep() const;

                    /**
                     * 设置离线周期模式下,调度步长
                     * @param _cycleStep 离线周期模式下,调度步长
                     * 
                     */
                    void SetCycleStep(const uint64_t& _cycleStep);

                    /**
                     * 判断参数 CycleStep 是否已赋值
                     * @return CycleStep 是否已赋值
                     * 
                     */
                    bool CycleStepHasBeenSet() const;

                    /**
                     * 获取离线周期模式下,指定时间
                     * @return TaskAction 离线周期模式下,指定时间
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置离线周期模式下,指定时间
                     * @param _taskAction 离线周期模式下,指定时间
                     * 
                     */
                    void SetTaskAction(const std::string& _taskAction);

                    /**
                     * 判断参数 TaskAction 是否已赋值
                     * @return TaskAction 是否已赋值
                     * 
                     */
                    bool TaskActionHasBeenSet() const;

                    /**
                     * 获取延时执行时间，单位分钟，可选: <0-1439
                     * @return DelayTime 延时执行时间，单位分钟，可选: <0-1439
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置延时执行时间，单位分钟，可选: <0-1439
                     * @param _delayTime 延时执行时间，单位分钟，可选: <0-1439
                     * 
                     */
                    void SetDelayTime(const uint64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取数据库Id
                     * @return DatabaseId 数据库Id
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置数据库Id
                     * @param _databaseId 数据库Id
                     * 
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     * 
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取数据源Id
                     * @return DatasourceId 数据源Id
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源Id
                     * @param _datasourceId 数据源Id
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取数据表Id
                     * @return TableId 数据表Id
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置数据表Id
                     * @param _tableId 数据表Id
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取运行的执行引擎，不传时会请求该数据源下默认的执行引擎
                     * @return ExecEngineType 运行的执行引擎，不传时会请求该数据源下默认的执行引擎
                     * 
                     */
                    std::string GetExecEngineType() const;

                    /**
                     * 设置运行的执行引擎，不传时会请求该数据源下默认的执行引擎
                     * @param _execEngineType 运行的执行引擎，不传时会请求该数据源下默认的执行引擎
                     * 
                     */
                    void SetExecEngineType(const std::string& _execEngineType);

                    /**
                     * 判断参数 ExecEngineType 是否已赋值
                     * @return ExecEngineType 是否已赋值
                     * 
                     */
                    bool ExecEngineTypeHasBeenSet() const;

                    /**
                     * 获取触发场景
                     * @return TriggerTypes 触发场景
                     * 
                     */
                    std::vector<std::string> GetTriggerTypes() const;

                    /**
                     * 设置触发场景
                     * @param _triggerTypes 触发场景
                     * 
                     */
                    void SetTriggerTypes(const std::vector<std::string>& _triggerTypes);

                    /**
                     * 判断参数 TriggerTypes 是否已赋值
                     * @return TriggerTypes 是否已赋值
                     * 
                     */
                    bool TriggerTypesHasBeenSet() const;

                private:

                    /**
                     * 规则组ID
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * 监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
                     */
                    uint64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 计算队列
                     */
                    std::string m_execQueue;
                    bool m_execQueueHasBeenSet;

                    /**
                     * 执行资源组ID
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * 执行资源组名称
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                    /**
                     * 关联的生产调度任务列表
                     */
                    std::vector<ProdSchedulerTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 离线周期模式下,生效日期-开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 离线周期模式下,生效日期-结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 离线周期模式下,调度周期 
MINUTE_CYCLE:I,
HOUR_CYCLE:H,
DAY_CYCLE:D,
WEEK_CYCLE:W,
MONTH_CYCLE:M
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 离线周期模式下,调度步长
                     */
                    uint64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * 离线周期模式下,指定时间
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * 延时执行时间，单位分钟，可选: <0-1439
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 数据库Id
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 数据源Id
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据表Id
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 运行的执行引擎，不传时会请求该数据源下默认的执行引擎
                     */
                    std::string m_execEngineType;
                    bool m_execEngineTypeHasBeenSet;

                    /**
                     * 触发场景
                     */
                    std::vector<std::string> m_triggerTypes;
                    bool m_triggerTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYEXECSTRATEGYREQUEST_H_
