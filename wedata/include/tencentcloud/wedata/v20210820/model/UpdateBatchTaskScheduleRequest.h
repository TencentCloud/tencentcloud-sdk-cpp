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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKSCHEDULEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKSCHEDULEREQUEST_H_

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
                * UpdateBatchTaskSchedule请求参数结构体
                */
                class UpdateBatchTaskScheduleRequest : public AbstractModel
                {
                public:
                    UpdateBatchTaskScheduleRequest();
                    ~UpdateBatchTaskScheduleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待更新的任务ID
                     * @return TaskIds 待更新的任务ID
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置待更新的任务ID
                     * @param _taskIds 待更新的任务ID
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
                     * 获取任务依赖
                     * @return SelfDepend 任务依赖
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置任务依赖
                     * @param _selfDepend 任务依赖
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
                     * 获取指定运行时间
                     * @return TaskAction 指定运行时间
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置指定运行时间
                     * @param _taskAction 指定运行时间
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
                     * 获取调度周期时间单位
                     * @return CycleType 调度周期时间单位
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置调度周期时间单位
                     * @param _cycleType 调度周期时间单位
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
                     * 获取调度周期
                     * @return CycleStep 调度周期
                     * 
                     */
                    int64_t GetCycleStep() const;

                    /**
                     * 设置调度周期
                     * @param _cycleStep 调度周期
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
                     * 获取Crontab表达式
                     * @return CrontabExpression Crontab表达式
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置Crontab表达式
                     * @param _crontabExpression Crontab表达式
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
                     * 获取执行时间左闭区间
                     * @return ExecutionStartTime 执行时间左闭区间
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置执行时间左闭区间
                     * @param _executionStartTime 执行时间左闭区间
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
                     * 获取执行时间右闭区间
                     * @return ExecutionEndTime 执行时间右闭区间
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置执行时间右闭区间
                     * @param _executionEndTime 执行时间右闭区间
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
                     * 待更新的任务ID
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务依赖
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

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
                     * 延迟时间
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 指定运行时间
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * 调度周期时间单位
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 调度周期
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * Crontab表达式
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * 执行时间左闭区间
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * 执行时间右闭区间
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKSCHEDULEREQUEST_H_
