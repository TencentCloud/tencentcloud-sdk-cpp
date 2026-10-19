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
                     * 获取<p>项目Id</p>
                     * @return ProjectId <p>项目Id</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目Id</p>
                     * @param _projectId <p>项目Id</p>
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
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _taskId <p>任务ID</p>
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
                     * 获取<p>执行时间，单位分钟，天/周/月/年调度才有。比如天调度，每天的02:00点执行一次，delayTime就是120分钟</p>
                     * @return DelayTime <p>执行时间，单位分钟，天/周/月/年调度才有。比如天调度，每天的02:00点执行一次，delayTime就是120分钟</p>
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置<p>执行时间，单位分钟，天/周/月/年调度才有。比如天调度，每天的02:00点执行一次，delayTime就是120分钟</p>
                     * @param _delayTime <p>执行时间，单位分钟，天/周/月/年调度才有。比如天调度，每天的02:00点执行一次，delayTime就是120分钟</p>
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
                     * 获取<p>启动时间：该字段已废弃，无需填写</p>
                     * @return StartupTime <p>启动时间：该字段已废弃，无需填写</p>
                     * 
                     */
                    int64_t GetStartupTime() const;

                    /**
                     * 设置<p>启动时间：该字段已废弃，无需填写</p>
                     * @param _startupTime <p>启动时间：该字段已废弃，无需填写</p>
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
                     * 获取<p>自依赖类型  1:有序串行 一次一个 排队  2: 无序串行 一次一个 不排队 3:并行 一次多个；暂不支持其他值</p>
                     * @return SelfDepend <p>自依赖类型  1:有序串行 一次一个 排队  2: 无序串行 一次一个 不排队 3:并行 一次多个；暂不支持其他值</p>
                     * 
                     */
                    int64_t GetSelfDepend() const;

                    /**
                     * 设置<p>自依赖类型  1:有序串行 一次一个 排队  2: 无序串行 一次一个 不排队 3:并行 一次多个；暂不支持其他值</p>
                     * @param _selfDepend <p>自依赖类型  1:有序串行 一次一个 排队  2: 无序串行 一次一个 不排队 3:并行 一次多个；暂不支持其他值</p>
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
                     * 获取<p>生效开始时间，格式 yyyy-MM-dd HH:mm:ss</p>
                     * @return StartTime <p>生效开始时间，格式 yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>生效开始时间，格式 yyyy-MM-dd HH:mm:ss</p>
                     * @param _startTime <p>生效开始时间，格式 yyyy-MM-dd HH:mm:ss</p>
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
                     * 获取<p>生效结束时间，格式 yyyy-MM-dd HH:mm:ss</p>
                     * @return EndTime <p>生效结束时间，格式 yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>生效结束时间，格式 yyyy-MM-dd HH:mm:ss</p>
                     * @param _endTime <p>生效结束时间，格式 yyyy-MM-dd HH:mm:ss</p>
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
                     * 获取<p>调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为 0,3,4。设置该值时，请把CycleStep字段设置为1（如果原始值不为1）。</p>
                     * @return TaskAction <p>调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为 0,3,4。设置该值时，请把CycleStep字段设置为1（如果原始值不为1）。</p>
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置<p>调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为 0,3,4。设置该值时，请把CycleStep字段设置为1（如果原始值不为1）。</p>
                     * @param _taskAction <p>调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为 0,3,4。设置该值时，请把CycleStep字段设置为1（如果原始值不为1）。</p>
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
                     * 获取<p>周期类型  0:crontab类型, 1:分钟，2:小时，3:天，4:周，5:月，6:一次性，7:用户驱动，10:弹性周期 周,11:弹性周期 月,12:年,13:即时触发Instant类型，与正常周期调度任务逻辑隔离</p>
                     * @return CycleType <p>周期类型  0:crontab类型, 1:分钟，2:小时，3:天，4:周，5:月，6:一次性，7:用户驱动，10:弹性周期 周,11:弹性周期 月,12:年,13:即时触发Instant类型，与正常周期调度任务逻辑隔离</p>
                     * 
                     */
                    int64_t GetCycleType() const;

                    /**
                     * 设置<p>周期类型  0:crontab类型, 1:分钟，2:小时，3:天，4:周，5:月，6:一次性，7:用户驱动，10:弹性周期 周,11:弹性周期 月,12:年,13:即时触发Instant类型，与正常周期调度任务逻辑隔离</p>
                     * @param _cycleType <p>周期类型  0:crontab类型, 1:分钟，2:小时，3:天，4:周，5:月，6:一次性，7:用户驱动，10:弹性周期 周,11:弹性周期 月,12:年,13:即时触发Instant类型，与正常周期调度任务逻辑隔离</p>
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
                     * 获取<p>小时和分钟任务才有；分钟任务：5、10、15、20、30，表示每隔5【或其他值】分钟执行一次；小时任务：1、2、3、4、5、6、7、8、9、10、11、12，表示每隔1【或其他值】小时执行一次。该值大于1时，请把TaskAction字段设置为空字符串。</p>
                     * @return CycleStep <p>小时和分钟任务才有；分钟任务：5、10、15、20、30，表示每隔5【或其他值】分钟执行一次；小时任务：1、2、3、4、5、6、7、8、9、10、11、12，表示每隔1【或其他值】小时执行一次。该值大于1时，请把TaskAction字段设置为空字符串。</p>
                     * 
                     */
                    int64_t GetCycleStep() const;

                    /**
                     * 设置<p>小时和分钟任务才有；分钟任务：5、10、15、20、30，表示每隔5【或其他值】分钟执行一次；小时任务：1、2、3、4、5、6、7、8、9、10、11、12，表示每隔1【或其他值】小时执行一次。该值大于1时，请把TaskAction字段设置为空字符串。</p>
                     * @param _cycleStep <p>小时和分钟任务才有；分钟任务：5、10、15、20、30，表示每隔5【或其他值】分钟执行一次；小时任务：1、2、3、4、5、6、7、8、9、10、11、12，表示每隔1【或其他值】小时执行一次。该值大于1时，请把TaskAction字段设置为空字符串。</p>
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
                     * 获取<p>cron表达式  周期类型为crontab调度才需要</p>
                     * @return CrontabExpression <p>cron表达式  周期类型为crontab调度才需要</p>
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置<p>cron表达式  周期类型为crontab调度才需要</p>
                     * @param _crontabExpression <p>cron表达式  周期类型为crontab调度才需要</p>
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
                     * 获取<p>执行时间左闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效</p>
                     * @return ExecutionStartTime <p>执行时间左闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效</p>
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置<p>执行时间左闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效</p>
                     * @param _executionStartTime <p>执行时间左闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效</p>
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
                     * 获取<p>执行时间右闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效</p>
                     * @return ExecutionEndTime <p>执行时间右闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效</p>
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置<p>执行时间右闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效</p>
                     * @param _executionEndTime <p>执行时间右闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效</p>
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
                     * 获取<p>任务名，该字段废弃，请勿使用该字段重命名任务</p>
                     * @return TaskName <p>任务名，该字段废弃，请勿使用该字段重命名任务</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名，该字段废弃，请勿使用该字段重命名任务</p>
                     * @param _taskName <p>任务名，该字段废弃，请勿使用该字段重命名任务</p>
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
                     * 获取<p>失败重试间隔,单位分钟，创建任务的时候已经给了默认值</p>
                     * @return RetryWait <p>失败重试间隔,单位分钟，创建任务的时候已经给了默认值</p>
                     * 
                     */
                    int64_t GetRetryWait() const;

                    /**
                     * 设置<p>失败重试间隔,单位分钟，创建任务的时候已经给了默认值</p>
                     * @param _retryWait <p>失败重试间隔,单位分钟，创建任务的时候已经给了默认值</p>
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
                     * 获取<p>失败重试次数，创建任务的时候已经给了默认值</p>
                     * @return TryLimit <p>失败重试次数，创建任务的时候已经给了默认值</p>
                     * 
                     */
                    int64_t GetTryLimit() const;

                    /**
                     * 设置<p>失败重试次数，创建任务的时候已经给了默认值</p>
                     * @param _tryLimit <p>失败重试次数，创建任务的时候已经给了默认值</p>
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
                     * 获取<p>是否可重试，0代码不可重试，1代表可以重试；暂不支持其他值</p>
                     * @return Retriable <p>是否可重试，0代码不可重试，1代表可以重试；暂不支持其他值</p>
                     * 
                     */
                    int64_t GetRetriable() const;

                    /**
                     * 设置<p>是否可重试，0代码不可重试，1代表可以重试；暂不支持其他值</p>
                     * @param _retriable <p>是否可重试，0代码不可重试，1代表可以重试；暂不支持其他值</p>
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
                     * 获取<p>运行优先级，4高 5中 6低；暂不支持其他值</p>
                     * @return RunPriority <p>运行优先级，4高 5中 6低；暂不支持其他值</p>
                     * 
                     */
                    int64_t GetRunPriority() const;

                    /**
                     * 设置<p>运行优先级，4高 5中 6低；暂不支持其他值</p>
                     * @param _runPriority <p>运行优先级，4高 5中 6低；暂不支持其他值</p>
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
                     * 获取<p>任务的扩展配置</p>
                     * @return TaskExt <p>任务的扩展配置</p>
                     * 
                     */
                    std::vector<TaskExtInfo> GetTaskExt() const;

                    /**
                     * 设置<p>任务的扩展配置</p>
                     * @param _taskExt <p>任务的扩展配置</p>
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
                     * 获取<p>执行资源组Id，需要去资源管理服务上创建调度资源组，并且绑定cvm机器</p>
                     * @return ResourceGroup <p>执行资源组Id，需要去资源管理服务上创建调度资源组，并且绑定cvm机器</p>
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置<p>执行资源组Id，需要去资源管理服务上创建调度资源组，并且绑定cvm机器</p>
                     * @param _resourceGroup <p>执行资源组Id，需要去资源管理服务上创建调度资源组，并且绑定cvm机器</p>
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
                     * 获取<p>资源池队列名称</p>
                     * @return YarnQueue <p>资源池队列名称</p>
                     * 
                     */
                    std::string GetYarnQueue() const;

                    /**
                     * 设置<p>资源池队列名称</p>
                     * @param _yarnQueue <p>资源池队列名称</p>
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
                     * 获取<p>资源组下具体执行机，any 表示可以跑在任意一台。</p>
                     * @return BrokerIp <p>资源组下具体执行机，any 表示可以跑在任意一台。</p>
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置<p>资源组下具体执行机，any 表示可以跑在任意一台。</p>
                     * @param _brokerIp <p>资源组下具体执行机，any 表示可以跑在任意一台。</p>
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
                     * 获取<p>责任人，多个责任人请用分号隔开</p>
                     * @return InCharge <p>责任人，多个责任人请用分号隔开</p>
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置<p>责任人，多个责任人请用分号隔开</p>
                     * @param _inCharge <p>责任人，多个责任人请用分号隔开</p>
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
                     * 获取<p>任务备注</p>
                     * @return Notes <p>任务备注</p>
                     * 
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置<p>任务备注</p>
                     * @param _notes <p>任务备注</p>
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
                     * 获取<p>任务参数</p>
                     * @return TaskParamInfos <p>任务参数</p>
                     * 
                     */
                    std::vector<ParamInfo> GetTaskParamInfos() const;

                    /**
                     * 设置<p>任务参数</p>
                     * @param _taskParamInfos <p>任务参数</p>
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
                     * 获取<p>源数据源Id</p>
                     * @return SourceServer <p>源数据源Id</p>
                     * 
                     */
                    std::string GetSourceServer() const;

                    /**
                     * 设置<p>源数据源Id</p>
                     * @param _sourceServer <p>源数据源Id</p>
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
                     * 获取<p>目标数据源Id</p>
                     * @return TargetServer <p>目标数据源Id</p>
                     * 
                     */
                    std::string GetTargetServer() const;

                    /**
                     * 设置<p>目标数据源Id</p>
                     * @param _targetServer <p>目标数据源Id</p>
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
                     * 获取<p>是否支持工作流依赖 yes / no 默认 no</p>
                     * @return DependencyWorkflow <p>是否支持工作流依赖 yes / no 默认 no</p>
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置<p>是否支持工作流依赖 yes / no 默认 no</p>
                     * @param _dependencyWorkflow <p>是否支持工作流依赖 yes / no 默认 no</p>
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
                     * 获取<p>依赖配置,仅可修改上游任务实例配置方法</p>
                     * @return DependencyConfigDTOs <p>依赖配置,仅可修改上游任务实例配置方法</p>
                     * 
                     */
                    std::vector<DependencyConfig> GetDependencyConfigDTOs() const;

                    /**
                     * 设置<p>依赖配置,仅可修改上游任务实例配置方法</p>
                     * @param _dependencyConfigDTOs <p>依赖配置,仅可修改上游任务实例配置方法</p>
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
                     * 获取<p>运行耗时超时时间分钟数</p>
                     * @return ExecutionTTL <p>运行耗时超时时间分钟数</p>
                     * 
                     */
                    int64_t GetExecutionTTL() const;

                    /**
                     * 设置<p>运行耗时超时时间分钟数</p>
                     * @param _executionTTL <p>运行耗时超时时间分钟数</p>
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
                     * 获取<p>脚本是否改变</p>
                     * @return ScriptChange <p>脚本是否改变</p>
                     * 
                     */
                    bool GetScriptChange() const;

                    /**
                     * 设置<p>脚本是否改变</p>
                     * @param _scriptChange <p>脚本是否改变</p>
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
                     * 获取<p>任务时区，仅支持整数时区配置</p>
                     * @return ScheduleTimeZone <p>任务时区，仅支持整数时区配置</p>
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置<p>任务时区，仅支持整数时区配置</p>
                     * @param _scheduleTimeZone <p>任务时区，仅支持整数时区配置</p>
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
                     * 获取<p>0 正常调度 1 空跑调度；暂不支持其他值</p>
                     * @return ScheduleRunType <p>0 正常调度 1 空跑调度；暂不支持其他值</p>
                     * 
                     */
                    uint64_t GetScheduleRunType() const;

                    /**
                     * 设置<p>0 正常调度 1 空跑调度；暂不支持其他值</p>
                     * @param _scheduleRunType <p>0 正常调度 1 空跑调度；暂不支持其他值</p>
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
                     * 获取<p>0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill；暂不支持其他值</p>
                     * @return ConcurrentStrategy <p>0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill；暂不支持其他值</p>
                     * 
                     */
                    uint64_t GetConcurrentStrategy() const;

                    /**
                     * 设置<p>0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill；暂不支持其他值</p>
                     * @param _concurrentStrategy <p>0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill；暂不支持其他值</p>
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
                     * 获取<p>shell任务发布事件</p>
                     * @return RegisterDsEventPublisherRequest <p>shell任务发布事件</p>
                     * 
                     */
                    RegisterDsEventPublisherReq GetRegisterDsEventPublisherRequest() const;

                    /**
                     * 设置<p>shell任务发布事件</p>
                     * @param _registerDsEventPublisherRequest <p>shell任务发布事件</p>
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
                     * 获取<p>base64编码后脚本内容</p>
                     * @return Content <p>base64编码后脚本内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>base64编码后脚本内容</p>
                     * @param _content <p>base64编码后脚本内容</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>分钟任务相位偏移</p>
                     * @return MinuteOffset <p>分钟任务相位偏移</p>
                     * 
                     */
                    uint64_t GetMinuteOffset() const;

                    /**
                     * 设置<p>分钟任务相位偏移</p>
                     * @param _minuteOffset <p>分钟任务相位偏移</p>
                     * 
                     */
                    void SetMinuteOffset(const uint64_t& _minuteOffset);

                    /**
                     * 判断参数 MinuteOffset 是否已赋值
                     * @return MinuteOffset 是否已赋值
                     * 
                     */
                    bool MinuteOffsetHasBeenSet() const;

                private:

                    /**
                     * <p>项目Id</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>执行时间，单位分钟，天/周/月/年调度才有。比如天调度，每天的02:00点执行一次，delayTime就是120分钟</p>
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * <p>启动时间：该字段已废弃，无需填写</p>
                     */
                    int64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * <p>自依赖类型  1:有序串行 一次一个 排队  2: 无序串行 一次一个 不排队 3:并行 一次多个；暂不支持其他值</p>
                     */
                    int64_t m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * <p>生效开始时间，格式 yyyy-MM-dd HH:mm:ss</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>生效结束时间，格式 yyyy-MM-dd HH:mm:ss</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为 0,3,4。设置该值时，请把CycleStep字段设置为1（如果原始值不为1）。</p>
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * <p>周期类型  0:crontab类型, 1:分钟，2:小时，3:天，4:周，5:月，6:一次性，7:用户驱动，10:弹性周期 周,11:弹性周期 月,12:年,13:即时触发Instant类型，与正常周期调度任务逻辑隔离</p>
                     */
                    int64_t m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>小时和分钟任务才有；分钟任务：5、10、15、20、30，表示每隔5【或其他值】分钟执行一次；小时任务：1、2、3、4、5、6、7、8、9、10、11、12，表示每隔1【或其他值】小时执行一次。该值大于1时，请把TaskAction字段设置为空字符串。</p>
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * <p>cron表达式  周期类型为crontab调度才需要</p>
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * <p>执行时间左闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效</p>
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * <p>执行时间右闭区间，格式：HH:mm  小时调度才有，例如小时任务, 每日固定区间生效</p>
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * <p>任务名，该字段废弃，请勿使用该字段重命名任务</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>失败重试间隔,单位分钟，创建任务的时候已经给了默认值</p>
                     */
                    int64_t m_retryWait;
                    bool m_retryWaitHasBeenSet;

                    /**
                     * <p>失败重试次数，创建任务的时候已经给了默认值</p>
                     */
                    int64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                    /**
                     * <p>是否可重试，0代码不可重试，1代表可以重试；暂不支持其他值</p>
                     */
                    int64_t m_retriable;
                    bool m_retriableHasBeenSet;

                    /**
                     * <p>运行优先级，4高 5中 6低；暂不支持其他值</p>
                     */
                    int64_t m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * <p>任务的扩展配置</p>
                     */
                    std::vector<TaskExtInfo> m_taskExt;
                    bool m_taskExtHasBeenSet;

                    /**
                     * <p>执行资源组Id，需要去资源管理服务上创建调度资源组，并且绑定cvm机器</p>
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * <p>资源池队列名称</p>
                     */
                    std::string m_yarnQueue;
                    bool m_yarnQueueHasBeenSet;

                    /**
                     * <p>资源组下具体执行机，any 表示可以跑在任意一台。</p>
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * <p>责任人，多个责任人请用分号隔开</p>
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * <p>任务备注</p>
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * <p>任务参数</p>
                     */
                    std::vector<ParamInfo> m_taskParamInfos;
                    bool m_taskParamInfosHasBeenSet;

                    /**
                     * <p>源数据源Id</p>
                     */
                    std::string m_sourceServer;
                    bool m_sourceServerHasBeenSet;

                    /**
                     * <p>目标数据源Id</p>
                     */
                    std::string m_targetServer;
                    bool m_targetServerHasBeenSet;

                    /**
                     * <p>是否支持工作流依赖 yes / no 默认 no</p>
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * <p>依赖配置,仅可修改上游任务实例配置方法</p>
                     */
                    std::vector<DependencyConfig> m_dependencyConfigDTOs;
                    bool m_dependencyConfigDTOsHasBeenSet;

                    /**
                     * <p>运行耗时超时时间分钟数</p>
                     */
                    int64_t m_executionTTL;
                    bool m_executionTTLHasBeenSet;

                    /**
                     * <p>脚本是否改变</p>
                     */
                    bool m_scriptChange;
                    bool m_scriptChangeHasBeenSet;

                    /**
                     * <p>任务时区，仅支持整数时区配置</p>
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * <p>0 正常调度 1 空跑调度；暂不支持其他值</p>
                     */
                    uint64_t m_scheduleRunType;
                    bool m_scheduleRunTypeHasBeenSet;

                    /**
                     * <p>0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill；暂不支持其他值</p>
                     */
                    uint64_t m_concurrentStrategy;
                    bool m_concurrentStrategyHasBeenSet;

                    /**
                     * <p>shell任务发布事件</p>
                     */
                    RegisterDsEventPublisherReq m_registerDsEventPublisherRequest;
                    bool m_registerDsEventPublisherRequestHasBeenSet;

                    /**
                     * <p>base64编码后脚本内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>分钟任务相位偏移</p>
                     */
                    uint64_t m_minuteOffset;
                    bool m_minuteOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKINFODSREQUEST_H_
