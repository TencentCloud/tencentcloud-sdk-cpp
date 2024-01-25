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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKPARENTRUNTIMEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKPARENTRUNTIMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskParentSchedulerDependency.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTaskParentRunTime请求参数结构体
                */
                class DescribeTaskParentRunTimeRequest : public AbstractModel
                {
                public:
                    DescribeTaskParentRunTimeRequest();
                    ~DescribeTaskParentRunTimeRequest() = default;
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
                     * 获取父任务配置
                     * @return ParentConfigs 父任务配置
                     * 
                     */
                    std::vector<TaskParentSchedulerDependency> GetParentConfigs() const;

                    /**
                     * 设置父任务配置
                     * @param _parentConfigs 父任务配置
                     * 
                     */
                    void SetParentConfigs(const std::vector<TaskParentSchedulerDependency>& _parentConfigs);

                    /**
                     * 判断参数 ParentConfigs 是否已赋值
                     * @return ParentConfigs 是否已赋值
                     * 
                     */
                    bool ParentConfigsHasBeenSet() const;

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
                     * 获取周期步长
                     * @return CycleStep 周期步长
                     * 
                     */
                    int64_t GetCycleStep() const;

                    /**
                     * 设置周期步长
                     * @param _cycleStep 周期步长
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
                     * 获取当前任务的数据时间，格式为 yyyy-MM-dd HH:mm:ss
                     * @return CurRunDate 当前任务的数据时间，格式为 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置当前任务的数据时间，格式为 yyyy-MM-dd HH:mm:ss
                     * @param _curRunDate 当前任务的数据时间，格式为 yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

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
                     * @return CrontabExpression Cron表达式
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置Cron表达式
                     * @param _crontabExpression Cron表达式
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
                     * 获取初始化策略
                     * @return InstanceInitStrategy 初始化策略
                     * 
                     */
                    std::string GetInstanceInitStrategy() const;

                    /**
                     * 设置初始化策略
                     * @param _instanceInitStrategy 初始化策略
                     * 
                     */
                    void SetInstanceInitStrategy(const std::string& _instanceInitStrategy);

                    /**
                     * 判断参数 InstanceInitStrategy 是否已赋值
                     * @return InstanceInitStrategy 是否已赋值
                     * 
                     */
                    bool InstanceInitStrategyHasBeenSet() const;

                    /**
                     * 获取任务Action
                     * @return TaskAction 任务Action
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置任务Action
                     * @param _taskAction 任务Action
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
                     * 获取周期类型为小时的时候需要设置当天的开始时间
                     * @return ExecutionStartTime 周期类型为小时的时候需要设置当天的开始时间
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置周期类型为小时的时候需要设置当天的开始时间
                     * @param _executionStartTime 周期类型为小时的时候需要设置当天的开始时间
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
                     * 获取周期类型为小时的时候需要设置当天的结束时间
                     * @return ExecutionEndTime 周期类型为小时的时候需要设置当天的结束时间
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置周期类型为小时的时候需要设置当天的结束时间
                     * @param _executionEndTime 周期类型为小时的时候需要设置当天的结束时间
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
                     * 父任务配置
                     */
                    std::vector<TaskParentSchedulerDependency> m_parentConfigs;
                    bool m_parentConfigsHasBeenSet;

                    /**
                     * 周期类型
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 周期步长
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * 当前任务的数据时间，格式为 yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 延迟时间
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * Cron表达式
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * 初始化策略
                     */
                    std::string m_instanceInitStrategy;
                    bool m_instanceInitStrategyHasBeenSet;

                    /**
                     * 任务Action
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * 周期类型为小时的时候需要设置当天的开始时间
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * 周期类型为小时的时候需要设置当天的结束时间
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKPARENTRUNTIMEREQUEST_H_
