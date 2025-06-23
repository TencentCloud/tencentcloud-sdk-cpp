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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKINFODSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKINFODSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskExtInfo.h>
#include <tencentcloud/wedata/v20210820/model/ParamInfo.h>
#include <tencentcloud/wedata/v20210820/model/DependencyConfig.h>
#include <tencentcloud/wedata/v20210820/model/RegisterDsEventPublisherReq.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyTaskInfoDs请求参数结构体
                */
                class ModifyTaskInfoDsRequest : public AbstractModel
                {
                public:
                    ModifyTaskInfoDsRequest();
                    ~ModifyTaskInfoDsRequest() = default;
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
                     * 获取启动时间：该字段已废弃，无需填写
                     * @return StartupTime 启动时间：该字段已废弃，无需填写
                     * 
                     */
                    int64_t GetStartupTime() const;

                    /**
                     * 设置启动时间：该字段已废弃，无需填写
                     * @param _startupTime 启动时间：该字段已废弃，无需填写
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
                     * 获取自依赖类型  1:有序串行 一次一个 排队  2: 无序串行 一次一个 不排队 3:并行 一次多个；暂不支持其他值
                     * @return SelfDepend 自依赖类型  1:有序串行 一次一个 排队  2: 无序串行 一次一个 不排队 3:并行 一次多个；暂不支持其他值
                     * 
                     */
                    int64_t GetSelfDepend() const;

                    /**
                     * 设置自依赖类型  1:有序串行 一次一个 排队  2: 无序串行 一次一个 不排队 3:并行 一次多个；暂不支持其他值
                     * @param _selfDepend 自依赖类型  1:有序串行 一次一个 排队  2: 无序串行 一次一个 不排队 3:并行 一次多个；暂不支持其他值
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
                     * 获取调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为 0,3,4。设置该值时，请把CycleStep字段设置为1（如果原始值不为1）。
                     * @return TaskAction 调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为 0,3,4。设置该值时，请把CycleStep字段设置为1（如果原始值不为1）。
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为 0,3,4。设置该值时，请把CycleStep字段设置为1（如果原始值不为1）。
                     * @param _taskAction 调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为 0,3,4。设置该值时，请把CycleStep字段设置为1（如果原始值不为1）。
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
                     * 获取周期类型  0:crontab类型, 1:分钟，2:小时，3:天，4:周，5:月，6:一次性，7:用户驱动，10:弹性周期 周,11:弹性周期 月,12:年,13:即时触发Instant类型，与正常周期调度任务逻辑隔离
                     * @return CycleType 周期类型  0:crontab类型, 1:分钟，2:小时，3:天，4:周，5:月，6:一次性，7:用户驱动，10:弹性周期 周,11:弹性周期 月,12:年,13:即时触发Instant类型，与正常周期调度任务逻辑隔离
                     * 
                     */
                    int64_t GetCycleType() const;

                    /**
                     * 设置周期类型  0:crontab类型, 1:分钟，2:小时，3:天，4:周，5:月，6:一次性，7:用户驱动，10:弹性周期 周,11:弹性周期 月,12:年,13:即时触发Instant类型，与正常周期调度任务逻辑隔离
                     * @param _cycleType 周期类型  0:crontab类型, 1:分钟，2:小时，3:天，4:周，5:月，6:一次性，7:用户驱动，10:弹性周期 周,11:弹性周期 月,12:年,13:即时触发Instant类型，与正常周期调度任务逻辑隔离
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
                     * 获取小时和分钟任务才有；分钟任务：5、10、15、20、30，表示每隔5【或其他值】分钟执行一次；小时任务：1、2、3、4、5、6、7、8、9、10、11、12，表示每隔1【或其他值】小时执行一次。该值大于1时，请把TaskAction字段设置为空字符串。
                     * @return CycleStep 小时和分钟任务才有；分钟任务：5、10、15、20、30，表示每隔5【或其他值】分钟执行一次；小时任务：1、2、3、4、5、6、7、8、9、10、11、12，表示每隔1【或其他值】小时执行一次。该值大于1时，请把TaskAction字段设置为空字符串。
                     * 
                     */
                    int64_t GetCycleStep() const;

                    /**
                     * 设置小时和分钟任务才有；分钟任务：5、10、15、20、30，表示每隔5【或其他值】分钟执行一次；小时任务：1、2、3、4、5、6、7、8、9、10、11、12，表示每隔1【或其他值】小时执行一次。该值大于1时，请把TaskAction字段设置为空字符串。
                     * @param _cycleStep 小时和分钟任务才有；分钟任务：5、10、15、20、30，表示每隔5【或其他值】分钟执行一次；小时任务：1、2、3、4、5、6、7、8、9、10、11、12，表示每隔1【或其他值】小时执行一次。该值大于1时，请把TaskAction字段设置为空字符串。
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
                     * 获取任务名，该字段废弃，请勿使用该字段重命名任务
                     * @return TaskName 任务名，该字段废弃，请勿使用该字段重命名任务
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名，该字段废弃，请勿使用该字段重命名任务
                     * @param _taskName 任务名，该字段废弃，请勿使用该字段重命名任务
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
                     * 获取是否可重试，0代码不可重试，1代表可以重试；暂不支持其他值
                     * @return Retriable 是否可重试，0代码不可重试，1代表可以重试；暂不支持其他值
                     * 
                     */
                    int64_t GetRetriable() const;

                    /**
                     * 设置是否可重试，0代码不可重试，1代表可以重试；暂不支持其他值
                     * @param _retriable 是否可重试，0代码不可重试，1代表可以重试；暂不支持其他值
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
                     * 获取运行优先级，4高 5中 6低；暂不支持其他值
                     * @return RunPriority 运行优先级，4高 5中 6低；暂不支持其他值
                     * 
                     */
                    int64_t GetRunPriority() const;

                    /**
                     * 设置运行优先级，4高 5中 6低；暂不支持其他值
                     * @param _runPriority 运行优先级，4高 5中 6低；暂不支持其他值
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
                     * 获取执行资源组Id，需要去资源管理服务上创建调度资源组，并且绑定cvm机器
                     * @return ResourceGroup 执行资源组Id，需要去资源管理服务上创建调度资源组，并且绑定cvm机器
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置执行资源组Id，需要去资源管理服务上创建调度资源组，并且绑定cvm机器
                     * @param _resourceGroup 执行资源组Id，需要去资源管理服务上创建调度资源组，并且绑定cvm机器
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
                     * 获取责任人，多个责任人请用分号隔开
                     * @return InCharge 责任人，多个责任人请用分号隔开
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置责任人，多个责任人请用分号隔开
                     * @param _inCharge 责任人，多个责任人请用分号隔开
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
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
                     * 获取源数据源Id
                     * @return SourceServer 源数据源Id
                     * 
                     */
                    std::string GetSourceServer() const;

                    /**
                     * 设置源数据源Id
                     * @param _sourceServer 源数据源Id
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
                     * 获取目标数据源Id
                     * @return TargetServer 目标数据源Id
                     * 
                     */
                    std::string GetTargetServer() const;

                    /**
                     * 设置目标数据源Id
                     * @param _targetServer 目标数据源Id
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
                     * 获取依赖配置,仅可修改上游任务实例配置方法
                     * @return DependencyConfigDTOs 依赖配置,仅可修改上游任务实例配置方法
                     * 
                     */
                    std::vector<DependencyConfig> GetDependencyConfigDTOs() const;

                    /**
                     * 设置依赖配置,仅可修改上游任务实例配置方法
                     * @param _dependencyConfigDTOs 依赖配置,仅可修改上游任务实例配置方法
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
                     * 获取运行耗时超时时间分钟数
                     * @return ExecutionTTL 运行耗时超时时间分钟数
                     * 
                     */
                    int64_t GetExecutionTTL() const;

                    /**
                     * 设置运行耗时超时时间分钟数
                     * @param _executionTTL 运行耗时超时时间分钟数
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
                     * 获取任务时区，仅支持整数时区配置
                     * @return ScheduleTimeZone 任务时区，仅支持整数时区配置
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置任务时区，仅支持整数时区配置
                     * @param _scheduleTimeZone 任务时区，仅支持整数时区配置
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
                     * 获取0 正常调度 1 空跑调度；暂不支持其他值
                     * @return ScheduleRunType 0 正常调度 1 空跑调度；暂不支持其他值
                     * 
                     */
                    uint64_t GetScheduleRunType() const;

                    /**
                     * 设置0 正常调度 1 空跑调度；暂不支持其他值
                     * @param _scheduleRunType 0 正常调度 1 空跑调度；暂不支持其他值
                     * 
                     */
                    void SetScheduleRunType(const uint64_t& _scheduleRunType);

                    /**
                     * 判断参数 ScheduleRunType 是否已赋值
                     * @return ScheduleRunType 是否已赋值
                     * 
                     */
                    bool ScheduleRunTypeHasBeenSet() const;

                    /**
                     * 获取0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill；暂不支持其他值
                     * @return ConcurrentStrategy 0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill；暂不支持其他值
                     * 
                     */
                    uint64_t GetConcurrentStrategy() const;

                    /**
                     * 设置0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill；暂不支持其他值
                     * @param _concurrentStrategy 0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill；暂不支持其他值
                     * 
                     */
                    void SetConcurrentStrategy(const uint64_t& _concurrentStrategy);

                    /**
                     * 判断参数 ConcurrentStrategy 是否已赋值
                     * @return ConcurrentStrategy 是否已赋值
                     * 
                     */
                    bool ConcurrentStrategyHasBeenSet() const;

                    /**
                     * 获取shell任务发布事件
                     * @return RegisterDsEventPublisherRequest shell任务发布事件
                     * 
                     */
                    RegisterDsEventPublisherReq GetRegisterDsEventPublisherRequest() const;

                    /**
                     * 设置shell任务发布事件
                     * @param _registerDsEventPublisherRequest shell任务发布事件
                     * 
                     */
                    void SetRegisterDsEventPublisherRequest(const RegisterDsEventPublisherReq& _registerDsEventPublisherRequest);

                    /**
                     * 判断参数 RegisterDsEventPublisherRequest 是否已赋值
                     * @return RegisterDsEventPublisherRequest 是否已赋值
                     * 
                     */
                    bool RegisterDsEventPublisherRequestHasBeenSet() const;

                    /**
                     * 获取base64编码后脚本内容
                     * @return Content base64编码后脚本内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置base64编码后脚本内容
                     * @param _content base64编码后脚本内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

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
                     * 启动时间：该字段已废弃，无需填写
                     */
                    int64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * 自依赖类型  1:有序串行 一次一个 排队  2: 无序串行 一次一个 不排队 3:并行 一次多个；暂不支持其他值
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
                     * 调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为 0,3,4。设置该值时，请把CycleStep字段设置为1（如果原始值不为1）。
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * 周期类型  0:crontab类型, 1:分钟，2:小时，3:天，4:周，5:月，6:一次性，7:用户驱动，10:弹性周期 周,11:弹性周期 月,12:年,13:即时触发Instant类型，与正常周期调度任务逻辑隔离
                     */
                    int64_t m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 小时和分钟任务才有；分钟任务：5、10、15、20、30，表示每隔5【或其他值】分钟执行一次；小时任务：1、2、3、4、5、6、7、8、9、10、11、12，表示每隔1【或其他值】小时执行一次。该值大于1时，请把TaskAction字段设置为空字符串。
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
                     * 任务名，该字段废弃，请勿使用该字段重命名任务
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
                     * 是否可重试，0代码不可重试，1代表可以重试；暂不支持其他值
                     */
                    int64_t m_retriable;
                    bool m_retriableHasBeenSet;

                    /**
                     * 运行优先级，4高 5中 6低；暂不支持其他值
                     */
                    int64_t m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * 任务的扩展配置
                     */
                    std::vector<TaskExtInfo> m_taskExt;
                    bool m_taskExtHasBeenSet;

                    /**
                     * 执行资源组Id，需要去资源管理服务上创建调度资源组，并且绑定cvm机器
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
                     * 责任人，多个责任人请用分号隔开
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
                     * 源数据源Id
                     */
                    std::string m_sourceServer;
                    bool m_sourceServerHasBeenSet;

                    /**
                     * 目标数据源Id
                     */
                    std::string m_targetServer;
                    bool m_targetServerHasBeenSet;

                    /**
                     * 是否支持工作流依赖 yes / no 默认 no
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * 依赖配置,仅可修改上游任务实例配置方法
                     */
                    std::vector<DependencyConfig> m_dependencyConfigDTOs;
                    bool m_dependencyConfigDTOsHasBeenSet;

                    /**
                     * 运行耗时超时时间分钟数
                     */
                    int64_t m_executionTTL;
                    bool m_executionTTLHasBeenSet;

                    /**
                     * 脚本是否改变
                     */
                    bool m_scriptChange;
                    bool m_scriptChangeHasBeenSet;

                    /**
                     * 任务时区，仅支持整数时区配置
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * 0 正常调度 1 空跑调度；暂不支持其他值
                     */
                    uint64_t m_scheduleRunType;
                    bool m_scheduleRunTypeHasBeenSet;

                    /**
                     * 0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill；暂不支持其他值
                     */
                    uint64_t m_concurrentStrategy;
                    bool m_concurrentStrategyHasBeenSet;

                    /**
                     * shell任务发布事件
                     */
                    RegisterDsEventPublisherReq m_registerDsEventPublisherRequest;
                    bool m_registerDsEventPublisherRequestHasBeenSet;

                    /**
                     * base64编码后脚本内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKINFODSREQUEST_H_
