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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYWORKFLOWSCHEDULEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYWORKFLOWSCHEDULEREQUEST_H_

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
                * ModifyWorkflowSchedule请求参数结构体
                */
                class ModifyWorkflowScheduleRequest : public AbstractModel
                {
                public:
                    ModifyWorkflowScheduleRequest();
                    ~ModifyWorkflowScheduleRequest() = default;
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
                     * 获取工作流id
                     * @return WorkflowId 工作流id
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流id
                     * @param _workflowId 工作流id
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
                     * 获取延迟时间，单位分钟
                     * @return DelayTime 延迟时间，单位分钟
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置延迟时间，单位分钟
                     * @param _delayTime 延迟时间，单位分钟
                     * 
                     */
                    void SetDelayTime(const int64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取启动时间
                     * @return StartupTime 启动时间
                     * 
                     */
                    int64_t GetStartupTime() const;

                    /**
                     * 设置启动时间
                     * @param _startupTime 启动时间
                     * 
                     */
                    void SetStartupTime(const int64_t& _startupTime);

                    /**
                     * 判断参数 StartupTime 是否已赋值
                     * @return StartupTime 是否已赋值
                     * 
                     */
                    bool StartupTimeHasBeenSet() const;

                    /**
                     * 获取自依赖类型  1:有序串行 一次一个 排队, 2: 无序串行 一次一个 不排队， 3:并行 一次多个
                     * @return SelfDepend 自依赖类型  1:有序串行 一次一个 排队, 2: 无序串行 一次一个 不排队， 3:并行 一次多个
                     * 
                     */
                    int64_t GetSelfDepend() const;

                    /**
                     * 设置自依赖类型  1:有序串行 一次一个 排队, 2: 无序串行 一次一个 不排队， 3:并行 一次多个
                     * @param _selfDepend 自依赖类型  1:有序串行 一次一个 排队, 2: 无序串行 一次一个 不排队， 3:并行 一次多个
                     * 
                     */
                    void SetSelfDepend(const int64_t& _selfDepend);

                    /**
                     * 判断参数 SelfDepend 是否已赋值
                     * @return SelfDepend 是否已赋值
                     * 
                     */
                    bool SelfDependHasBeenSet() const;

                    /**
                     * 获取"周期类型  0:crontab类型, 1:分钟，2:小时，3:天，4:周，5:月，6:一次性，7:用户驱动，10:弹性周期 周,11:弹性周期 月,12:年,13:即时触发Instant类型，与正常周期调度任务逻辑隔离
                     * @return CycleType "周期类型  0:crontab类型, 1:分钟，2:小时，3:天，4:周，5:月，6:一次性，7:用户驱动，10:弹性周期 周,11:弹性周期 月,12:年,13:即时触发Instant类型，与正常周期调度任务逻辑隔离
                     * 
                     */
                    int64_t GetCycleType() const;

                    /**
                     * 设置"周期类型  0:crontab类型, 1:分钟，2:小时，3:天，4:周，5:月，6:一次性，7:用户驱动，10:弹性周期 周,11:弹性周期 月,12:年,13:即时触发Instant类型，与正常周期调度任务逻辑隔离
                     * @param _cycleType "周期类型  0:crontab类型, 1:分钟，2:小时，3:天，4:周，5:月，6:一次性，7:用户驱动，10:弹性周期 周,11:弹性周期 月,12:年,13:即时触发Instant类型，与正常周期调度任务逻辑隔离
                     * 
                     */
                    void SetCycleType(const int64_t& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取步长，间隔时间，最小1
                     * @return CycleStep 步长，间隔时间，最小1
                     * 
                     */
                    int64_t GetCycleStep() const;

                    /**
                     * 设置步长，间隔时间，最小1
                     * @param _cycleStep 步长，间隔时间，最小1
                     * 
                     */
                    void SetCycleStep(const int64_t& _cycleStep);

                    /**
                     * 判断参数 CycleStep 是否已赋值
                     * @return CycleStep 是否已赋值
                     * 
                     */
                    bool CycleStepHasBeenSet() const;

                    /**
                     * 获取生效开始时间，格式 yyyy-MM-dd HH:mm:ss
                     * @return StartTime 生效开始时间，格式 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置生效开始时间，格式 yyyy-MM-dd HH:mm:ss
                     * @param _startTime 生效开始时间，格式 yyyy-MM-dd HH:mm:ss
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
                     * 获取生效结束时间，格式 yyyy-MM-dd HH:mm:ss
                     * @return EndTime 生效结束时间，格式 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置生效结束时间，格式 yyyy-MM-dd HH:mm:ss
                     * @param _endTime 生效结束时间，格式 yyyy-MM-dd HH:mm:ss
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
                     * 获取调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为'0,3,4'。
                     * @return TaskAction 调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为'0,3,4'。
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为'0,3,4'。
                     * @param _taskAction 调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为'0,3,4'。
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
                     * 获取cron表达式  周期类型为crontab调度才需要
                     * @return CrontabExpression cron表达式  周期类型为crontab调度才需要
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置cron表达式  周期类型为crontab调度才需要
                     * @param _crontabExpression cron表达式  周期类型为crontab调度才需要
                     * 
                     */
                    void SetCrontabExpression(const std::string& _crontabExpression);

                    /**
                     * 判断参数 CrontabExpression 是否已赋值
                     * @return CrontabExpression 是否已赋值
                     * 
                     */
                    bool CrontabExpressionHasBeenSet() const;

                    /**
                     * 获取执行时间左闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效
                     * @return ExecutionStartTime 执行时间左闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置执行时间左闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效
                     * @param _executionStartTime 执行时间左闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效
                     * 
                     */
                    void SetExecutionStartTime(const std::string& _executionStartTime);

                    /**
                     * 判断参数 ExecutionStartTime 是否已赋值
                     * @return ExecutionStartTime 是否已赋值
                     * 
                     */
                    bool ExecutionStartTimeHasBeenSet() const;

                    /**
                     * 获取执行时间右闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效
                     * @return ExecutionEndTime 执行时间右闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置执行时间右闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效
                     * @param _executionEndTime 执行时间右闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效
                     * 
                     */
                    void SetExecutionEndTime(const std::string& _executionEndTime);

                    /**
                     * 判断参数 ExecutionEndTime 是否已赋值
                     * @return ExecutionEndTime 是否已赋值
                     * 
                     */
                    bool ExecutionEndTimeHasBeenSet() const;

                    /**
                     * 获取工作流依赖 ,yes 或者no
                     * @return DependencyWorkflow 工作流依赖 ,yes 或者no
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置工作流依赖 ,yes 或者no
                     * @param _dependencyWorkflow 工作流依赖 ,yes 或者no
                     * 
                     */
                    void SetDependencyWorkflow(const std::string& _dependencyWorkflow);

                    /**
                     * 判断参数 DependencyWorkflow 是否已赋值
                     * @return DependencyWorkflow 是否已赋值
                     * 
                     */
                    bool DependencyWorkflowHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 工作流id
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 延迟时间，单位分钟
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 启动时间
                     */
                    int64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * 自依赖类型  1:有序串行 一次一个 排队, 2: 无序串行 一次一个 不排队， 3:并行 一次多个
                     */
                    int64_t m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * "周期类型  0:crontab类型, 1:分钟，2:小时，3:天，4:周，5:月，6:一次性，7:用户驱动，10:弹性周期 周,11:弹性周期 月,12:年,13:即时触发Instant类型，与正常周期调度任务逻辑隔离
                     */
                    int64_t m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 步长，间隔时间，最小1
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * 生效开始时间，格式 yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 生效结束时间，格式 yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为'0,3,4'。
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * cron表达式  周期类型为crontab调度才需要
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * 执行时间左闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * 执行时间右闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * 工作流依赖 ,yes 或者no
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYWORKFLOWSCHEDULEREQUEST_H_
