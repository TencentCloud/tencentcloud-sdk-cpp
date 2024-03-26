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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKINFOREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskExtInfo.h>
#include <tencentcloud/wedata/v20210820/model/ParamInfo.h>
#include <tencentcloud/wedata/v20210820/model/DependencyConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyTaskInfo请求参数结构体
                */
                class ModifyTaskInfoRequest : public AbstractModel
                {
                public:
                    ModifyTaskInfoRequest();
                    ~ModifyTaskInfoRequest() = default;
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
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
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
                     * 获取执行时间，单位分钟，天/周/月/年调度才有。比如天调度，每天的02:00点执行一次，delayTime就是120分钟
                     * @return DelayTime 执行时间，单位分钟，天/周/月/年调度才有。比如天调度，每天的02:00点执行一次，delayTime就是120分钟
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置执行时间，单位分钟，天/周/月/年调度才有。比如天调度，每天的02:00点执行一次，delayTime就是120分钟
                     * @param _delayTime 执行时间，单位分钟，天/周/月/年调度才有。比如天调度，每天的02:00点执行一次，delayTime就是120分钟
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
                     * 获取新的任务名
                     * @return TaskName 新的任务名
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置新的任务名
                     * @param _taskName 新的任务名
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
                     * 获取失败重试间隔,单位分钟，创建任务的时候已经给了默认值
                     * @return RetryWait 失败重试间隔,单位分钟，创建任务的时候已经给了默认值
                     * 
                     */
                    int64_t GetRetryWait() const;

                    /**
                     * 设置失败重试间隔,单位分钟，创建任务的时候已经给了默认值
                     * @param _retryWait 失败重试间隔,单位分钟，创建任务的时候已经给了默认值
                     * 
                     */
                    void SetRetryWait(const int64_t& _retryWait);

                    /**
                     * 判断参数 RetryWait 是否已赋值
                     * @return RetryWait 是否已赋值
                     * 
                     */
                    bool RetryWaitHasBeenSet() const;

                    /**
                     * 获取失败重试次数，创建任务的时候已经给了默认值
                     * @return TryLimit 失败重试次数，创建任务的时候已经给了默认值
                     * 
                     */
                    int64_t GetTryLimit() const;

                    /**
                     * 设置失败重试次数，创建任务的时候已经给了默认值
                     * @param _tryLimit 失败重试次数，创建任务的时候已经给了默认值
                     * 
                     */
                    void SetTryLimit(const int64_t& _tryLimit);

                    /**
                     * 判断参数 TryLimit 是否已赋值
                     * @return TryLimit 是否已赋值
                     * 
                     */
                    bool TryLimitHasBeenSet() const;

                    /**
                     * 获取是否可重试，1代表可以重试
                     * @return Retriable 是否可重试，1代表可以重试
                     * 
                     */
                    int64_t GetRetriable() const;

                    /**
                     * 设置是否可重试，1代表可以重试
                     * @param _retriable 是否可重试，1代表可以重试
                     * 
                     */
                    void SetRetriable(const int64_t& _retriable);

                    /**
                     * 判断参数 Retriable 是否已赋值
                     * @return Retriable 是否已赋值
                     * 
                     */
                    bool RetriableHasBeenSet() const;

                    /**
                     * 获取运行优先级，4高 5中 6低
                     * @return RunPriority 运行优先级，4高 5中 6低
                     * 
                     */
                    int64_t GetRunPriority() const;

                    /**
                     * 设置运行优先级，4高 5中 6低
                     * @param _runPriority 运行优先级，4高 5中 6低
                     * 
                     */
                    void SetRunPriority(const int64_t& _runPriority);

                    /**
                     * 判断参数 RunPriority 是否已赋值
                     * @return RunPriority 是否已赋值
                     * 
                     */
                    bool RunPriorityHasBeenSet() const;

                    /**
                     * 获取任务的扩展配置
                     * @return TaskExt 任务的扩展配置
                     * 
                     */
                    std::vector<TaskExtInfo> GetTaskExt() const;

                    /**
                     * 设置任务的扩展配置
                     * @param _taskExt 任务的扩展配置
                     * 
                     */
                    void SetTaskExt(const std::vector<TaskExtInfo>& _taskExt);

                    /**
                     * 判断参数 TaskExt 是否已赋值
                     * @return TaskExt 是否已赋值
                     * 
                     */
                    bool TaskExtHasBeenSet() const;

                    /**
                     * 获取执行资源组id，需要去资源管理服务上创建调度资源组，并且绑定cvm机器
                     * @return ResourceGroup 执行资源组id，需要去资源管理服务上创建调度资源组，并且绑定cvm机器
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置执行资源组id，需要去资源管理服务上创建调度资源组，并且绑定cvm机器
                     * @param _resourceGroup 执行资源组id，需要去资源管理服务上创建调度资源组，并且绑定cvm机器
                     * 
                     */
                    void SetResourceGroup(const std::string& _resourceGroup);

                    /**
                     * 判断参数 ResourceGroup 是否已赋值
                     * @return ResourceGroup 是否已赋值
                     * 
                     */
                    bool ResourceGroupHasBeenSet() const;

                    /**
                     * 获取资源池队列名称
                     * @return YarnQueue 资源池队列名称
                     * 
                     */
                    std::string GetYarnQueue() const;

                    /**
                     * 设置资源池队列名称
                     * @param _yarnQueue 资源池队列名称
                     * 
                     */
                    void SetYarnQueue(const std::string& _yarnQueue);

                    /**
                     * 判断参数 YarnQueue 是否已赋值
                     * @return YarnQueue 是否已赋值
                     * 
                     */
                    bool YarnQueueHasBeenSet() const;

                    /**
                     * 获取资源组下具体执行机，any 表示可以跑在任意一台。
                     * @return BrokerIp 资源组下具体执行机，any 表示可以跑在任意一台。
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置资源组下具体执行机，any 表示可以跑在任意一台。
                     * @param _brokerIp 资源组下具体执行机，any 表示可以跑在任意一台。
                     * 
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     * 
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取责任人
                     * @return InCharge 责任人
                     * @deprecated
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置责任人
                     * @param _inCharge 责任人
                     * @deprecated
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * @deprecated
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取任务备注
                     * @return Notes 任务备注
                     * 
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置任务备注
                     * @param _notes 任务备注
                     * 
                     */
                    void SetNotes(const std::string& _notes);

                    /**
                     * 判断参数 Notes 是否已赋值
                     * @return Notes 是否已赋值
                     * 
                     */
                    bool NotesHasBeenSet() const;

                    /**
                     * 获取任务参数
                     * @return TaskParamInfos 任务参数
                     * 
                     */
                    std::vector<ParamInfo> GetTaskParamInfos() const;

                    /**
                     * 设置任务参数
                     * @param _taskParamInfos 任务参数
                     * 
                     */
                    void SetTaskParamInfos(const std::vector<ParamInfo>& _taskParamInfos);

                    /**
                     * 判断参数 TaskParamInfos 是否已赋值
                     * @return TaskParamInfos 是否已赋值
                     * 
                     */
                    bool TaskParamInfosHasBeenSet() const;

                    /**
                     * 获取源数据源
                     * @return SourceServer 源数据源
                     * 
                     */
                    std::string GetSourceServer() const;

                    /**
                     * 设置源数据源
                     * @param _sourceServer 源数据源
                     * 
                     */
                    void SetSourceServer(const std::string& _sourceServer);

                    /**
                     * 判断参数 SourceServer 是否已赋值
                     * @return SourceServer 是否已赋值
                     * 
                     */
                    bool SourceServerHasBeenSet() const;

                    /**
                     * 获取目标数据源
                     * @return TargetServer 目标数据源
                     * 
                     */
                    std::string GetTargetServer() const;

                    /**
                     * 设置目标数据源
                     * @param _targetServer 目标数据源
                     * 
                     */
                    void SetTargetServer(const std::string& _targetServer);

                    /**
                     * 判断参数 TargetServer 是否已赋值
                     * @return TargetServer 是否已赋值
                     * 
                     */
                    bool TargetServerHasBeenSet() const;

                    /**
                     * 获取是否支持工作流依赖 yes / no 默认 no
                     * @return DependencyWorkflow 是否支持工作流依赖 yes / no 默认 no
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置是否支持工作流依赖 yes / no 默认 no
                     * @param _dependencyWorkflow 是否支持工作流依赖 yes / no 默认 no
                     * 
                     */
                    void SetDependencyWorkflow(const std::string& _dependencyWorkflow);

                    /**
                     * 判断参数 DependencyWorkflow 是否已赋值
                     * @return DependencyWorkflow 是否已赋值
                     * 
                     */
                    bool DependencyWorkflowHasBeenSet() const;

                    /**
                     * 获取依赖配置
                     * @return DependencyConfigDTOs 依赖配置
                     * 
                     */
                    std::vector<DependencyConfig> GetDependencyConfigDTOs() const;

                    /**
                     * 设置依赖配置
                     * @param _dependencyConfigDTOs 依赖配置
                     * 
                     */
                    void SetDependencyConfigDTOs(const std::vector<DependencyConfig>& _dependencyConfigDTOs);

                    /**
                     * 判断参数 DependencyConfigDTOs 是否已赋值
                     * @return DependencyConfigDTOs 是否已赋值
                     * 
                     */
                    bool DependencyConfigDTOsHasBeenSet() const;

                    /**
                     * 获取执行耗时
                     * @return ExecutionTTL 执行耗时
                     * 
                     */
                    int64_t GetExecutionTTL() const;

                    /**
                     * 设置执行耗时
                     * @param _executionTTL 执行耗时
                     * 
                     */
                    void SetExecutionTTL(const int64_t& _executionTTL);

                    /**
                     * 判断参数 ExecutionTTL 是否已赋值
                     * @return ExecutionTTL 是否已赋值
                     * 
                     */
                    bool ExecutionTTLHasBeenSet() const;

                    /**
                     * 获取脚本是否改变
                     * @return ScriptChange 脚本是否改变
                     * 
                     */
                    bool GetScriptChange() const;

                    /**
                     * 设置脚本是否改变
                     * @param _scriptChange 脚本是否改变
                     * 
                     */
                    void SetScriptChange(const bool& _scriptChange);

                    /**
                     * 判断参数 ScriptChange 是否已赋值
                     * @return ScriptChange 是否已赋值
                     * 
                     */
                    bool ScriptChangeHasBeenSet() const;

                    /**
                     * 获取责任人id
                     * @return InChargeIds 责任人id
                     * 
                     */
                    std::vector<std::string> GetInChargeIds() const;

                    /**
                     * 设置责任人id
                     * @param _inChargeIds 责任人id
                     * 
                     */
                    void SetInChargeIds(const std::vector<std::string>& _inChargeIds);

                    /**
                     * 判断参数 InChargeIds 是否已赋值
                     * @return InChargeIds 是否已赋值
                     * 
                     */
                    bool InChargeIdsHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 执行时间，单位分钟，天/周/月/年调度才有。比如天调度，每天的02:00点执行一次，delayTime就是120分钟
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
                     * 新的任务名
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 失败重试间隔,单位分钟，创建任务的时候已经给了默认值
                     */
                    int64_t m_retryWait;
                    bool m_retryWaitHasBeenSet;

                    /**
                     * 失败重试次数，创建任务的时候已经给了默认值
                     */
                    int64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                    /**
                     * 是否可重试，1代表可以重试
                     */
                    int64_t m_retriable;
                    bool m_retriableHasBeenSet;

                    /**
                     * 运行优先级，4高 5中 6低
                     */
                    int64_t m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * 任务的扩展配置
                     */
                    std::vector<TaskExtInfo> m_taskExt;
                    bool m_taskExtHasBeenSet;

                    /**
                     * 执行资源组id，需要去资源管理服务上创建调度资源组，并且绑定cvm机器
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * 资源池队列名称
                     */
                    std::string m_yarnQueue;
                    bool m_yarnQueueHasBeenSet;

                    /**
                     * 资源组下具体执行机，any 表示可以跑在任意一台。
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * 责任人
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * 任务备注
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * 任务参数
                     */
                    std::vector<ParamInfo> m_taskParamInfos;
                    bool m_taskParamInfosHasBeenSet;

                    /**
                     * 源数据源
                     */
                    std::string m_sourceServer;
                    bool m_sourceServerHasBeenSet;

                    /**
                     * 目标数据源
                     */
                    std::string m_targetServer;
                    bool m_targetServerHasBeenSet;

                    /**
                     * 是否支持工作流依赖 yes / no 默认 no
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * 依赖配置
                     */
                    std::vector<DependencyConfig> m_dependencyConfigDTOs;
                    bool m_dependencyConfigDTOsHasBeenSet;

                    /**
                     * 执行耗时
                     */
                    int64_t m_executionTTL;
                    bool m_executionTTLHasBeenSet;

                    /**
                     * 脚本是否改变
                     */
                    bool m_scriptChange;
                    bool m_scriptChangeHasBeenSet;

                    /**
                     * 责任人id
                     */
                    std::vector<std::string> m_inChargeIds;
                    bool m_inChargeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKINFOREQUEST_H_
