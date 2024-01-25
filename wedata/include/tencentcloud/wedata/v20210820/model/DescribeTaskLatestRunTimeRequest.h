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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKLATESTRUNTIMEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKLATESTRUNTIMEREQUEST_H_

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
                * DescribeTaskLatestRunTime请求参数结构体
                */
                class DescribeTaskLatestRunTimeRequest : public AbstractModel
                {
                public:
                    DescribeTaskLatestRunTimeRequest();
                    ~DescribeTaskLatestRunTimeRequest() = default;
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
                     * 获取基准时间，非必填，如果不填，自动取当前的事件，如果要填，格式为 yyyy-MM-dd HH:mm:ss，如果格式不符合要求，则默认取当前时间
                     * @return BaseTime 基准时间，非必填，如果不填，自动取当前的事件，如果要填，格式为 yyyy-MM-dd HH:mm:ss，如果格式不符合要求，则默认取当前时间
                     * 
                     */
                    std::string GetBaseTime() const;

                    /**
                     * 设置基准时间，非必填，如果不填，自动取当前的事件，如果要填，格式为 yyyy-MM-dd HH:mm:ss，如果格式不符合要求，则默认取当前时间
                     * @param _baseTime 基准时间，非必填，如果不填，自动取当前的事件，如果要填，格式为 yyyy-MM-dd HH:mm:ss，如果格式不符合要求，则默认取当前时间
                     * 
                     */
                    void SetBaseTime(const std::string& _baseTime);

                    /**
                     * 判断参数 BaseTime 是否已赋值
                     * @return BaseTime 是否已赋值
                     * 
                     */
                    bool BaseTimeHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
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
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 获取周期类型
                     * @return CycleType 周期类型
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置周期类型
                     * @param _cycleType 周期类型
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
                     * 获取自依赖类型
                     * @return SelfDepend 自依赖类型
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置自依赖类型
                     * @param _selfDepend 自依赖类型
                     * 
                     */
                    void SetSelfDepend(const std::string& _selfDepend);

                    /**
                     * 判断参数 SelfDepend 是否已赋值
                     * @return SelfDepend 是否已赋值
                     * 
                     */
                    bool SelfDependHasBeenSet() const;

                    /**
                     * 获取TaskAction
                     * @return TaskAction TaskAction
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置TaskAction
                     * @param _taskAction TaskAction
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
                     * 获取循环步长
                     * @return CycleStep 循环步长
                     * 
                     */
                    int64_t GetCycleStep() const;

                    /**
                     * 设置循环步长
                     * @param _cycleStep 循环步长
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
                     * 获取延迟时间
                     * @return DelayTime 延迟时间
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置延迟时间
                     * @param _delayTime 延迟时间
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
                     * 获取Cron表达式
                     * @return CronTabExpression Cron表达式
                     * 
                     */
                    std::string GetCronTabExpression() const;

                    /**
                     * 设置Cron表达式
                     * @param _cronTabExpression Cron表达式
                     * 
                     */
                    void SetCronTabExpression(const std::string& _cronTabExpression);

                    /**
                     * 判断参数 CronTabExpression 是否已赋值
                     * @return CronTabExpression 是否已赋值
                     * 
                     */
                    bool CronTabExpressionHasBeenSet() const;

                    /**
                     * 获取小时周期在一天中的开始时间
                     * @return ExecutionStartTime 小时周期在一天中的开始时间
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置小时周期在一天中的开始时间
                     * @param _executionStartTime 小时周期在一天中的开始时间
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
                     * 获取小时周期在一天中的结束时间
                     * @return ExecutionEndTime 小时周期在一天中的结束时间
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置小时周期在一天中的结束时间
                     * @param _executionEndTime 小时周期在一天中的结束时间
                     * 
                     */
                    void SetExecutionEndTime(const std::string& _executionEndTime);

                    /**
                     * 判断参数 ExecutionEndTime 是否已赋值
                     * @return ExecutionEndTime 是否已赋值
                     * 
                     */
                    bool ExecutionEndTimeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 基准时间，非必填，如果不填，自动取当前的事件，如果要填，格式为 yyyy-MM-dd HH:mm:ss，如果格式不符合要求，则默认取当前时间
                     */
                    std::string m_baseTime;
                    bool m_baseTimeHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 周期类型
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 自依赖类型
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * TaskAction
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * 循环步长
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * 延迟时间
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * Cron表达式
                     */
                    std::string m_cronTabExpression;
                    bool m_cronTabExpressionHasBeenSet;

                    /**
                     * 小时周期在一天中的开始时间
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * 小时周期在一天中的结束时间
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKLATESTRUNTIMEREQUEST_H_
