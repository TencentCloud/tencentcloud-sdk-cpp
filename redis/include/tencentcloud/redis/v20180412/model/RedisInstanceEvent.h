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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_REDISINSTANCEEVENT_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_REDISINSTANCEEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 实例事件信息
                */
                class RedisInstanceEvent : public AbstractModel
                {
                public:
                    RedisInstanceEvent();
                    ~RedisInstanceEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件 ID。
                     * @return ID 事件 ID。
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置事件 ID。
                     * @param _iD 事件 ID。
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceId 实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param _instanceName 实例名称。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取事件类型，当前仅支持配置实例迁移、资源腾挪、机房裁撤相关的运维操作。该参数仅支持配置为 **InstanceMigration**。
                     * @return Type 事件类型，当前仅支持配置实例迁移、资源腾挪、机房裁撤相关的运维操作。该参数仅支持配置为 **InstanceMigration**。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置事件类型，当前仅支持配置实例迁移、资源腾挪、机房裁撤相关的运维操作。该参数仅支持配置为 **InstanceMigration**。
                     * @param _type 事件类型，当前仅支持配置实例迁移、资源腾挪、机房裁撤相关的运维操作。该参数仅支持配置为 **InstanceMigration**。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取事件等级根据其影响严重程度和紧急程度进行分级，由重至轻依次为关键、重要、中等、一般。
- Critical：关键
- High：重要
- Middle：中等
- Low：一般
                     * @return Grade 事件等级根据其影响严重程度和紧急程度进行分级，由重至轻依次为关键、重要、中等、一般。
- Critical：关键
- High：重要
- Middle：中等
- Low：一般
                     * 
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置事件等级根据其影响严重程度和紧急程度进行分级，由重至轻依次为关键、重要、中等、一般。
- Critical：关键
- High：重要
- Middle：中等
- Low：一般
                     * @param _grade 事件等级根据其影响严重程度和紧急程度进行分级，由重至轻依次为关键、重要、中等、一般。
- Critical：关键
- High：重要
- Middle：中等
- Low：一般
                     * 
                     */
                    void SetGrade(const std::string& _grade);

                    /**
                     * 判断参数 Grade 是否已赋值
                     * @return Grade 是否已赋值
                     * 
                     */
                    bool GradeHasBeenSet() const;

                    /**
                     * 获取事件计划执行日期。
                     * @return ExecutionDate 事件计划执行日期。
                     * 
                     */
                    std::string GetExecutionDate() const;

                    /**
                     * 设置事件计划执行日期。
                     * @param _executionDate 事件计划执行日期。
                     * 
                     */
                    void SetExecutionDate(const std::string& _executionDate);

                    /**
                     * 判断参数 ExecutionDate 是否已赋值
                     * @return ExecutionDate 是否已赋值
                     * 
                     */
                    bool ExecutionDateHasBeenSet() const;

                    /**
                     * 获取事件计划执行开始时间。
                     * @return StartTime 事件计划执行开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置事件计划执行开始时间。
                     * @param _startTime 事件计划执行开始时间。
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
                     * 获取事件计划执行结束时间。
                     * @return EndTime 事件计划执行结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置事件计划执行结束时间。
                     * @param _endTime 事件计划执行结束时间。
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
                     * 获取运维事件最迟执行的日期，即该事件必须在该日期之前完成，否则可能会对业务产生影响。
                     * @return LatestExecutionDate 运维事件最迟执行的日期，即该事件必须在该日期之前完成，否则可能会对业务产生影响。
                     * 
                     */
                    std::string GetLatestExecutionDate() const;

                    /**
                     * 设置运维事件最迟执行的日期，即该事件必须在该日期之前完成，否则可能会对业务产生影响。
                     * @param _latestExecutionDate 运维事件最迟执行的日期，即该事件必须在该日期之前完成，否则可能会对业务产生影响。
                     * 
                     */
                    void SetLatestExecutionDate(const std::string& _latestExecutionDate);

                    /**
                     * 判断参数 LatestExecutionDate 是否已赋值
                     * @return LatestExecutionDate 是否已赋值
                     * 
                     */
                    bool LatestExecutionDateHasBeenSet() const;

                    /**
                     * 获取事件当前状态。
- Waiting：未到达执行日期或不在维护时间窗内的事件。
- Running：在维护时间窗内，正在执行维护的事件。
- Finished：已全部完成维护的事件。
- Canceled：已取消执行的事件。
                     * @return Status 事件当前状态。
- Waiting：未到达执行日期或不在维护时间窗内的事件。
- Running：在维护时间窗内，正在执行维护的事件。
- Finished：已全部完成维护的事件。
- Canceled：已取消执行的事件。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置事件当前状态。
- Waiting：未到达执行日期或不在维护时间窗内的事件。
- Running：在维护时间窗内，正在执行维护的事件。
- Finished：已全部完成维护的事件。
- Canceled：已取消执行的事件。
                     * @param _status 事件当前状态。
- Waiting：未到达执行日期或不在维护时间窗内的事件。
- Running：在维护时间窗内，正在执行维护的事件。
- Finished：已全部完成维护的事件。
- Canceled：已取消执行的事件。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取事件执行任务完成时间。
                     * @return TaskEndTime 事件执行任务完成时间。
                     * 
                     */
                    std::string GetTaskEndTime() const;

                    /**
                     * 设置事件执行任务完成时间。
                     * @param _taskEndTime 事件执行任务完成时间。
                     * 
                     */
                    void SetTaskEndTime(const std::string& _taskEndTime);

                    /**
                     * 判断参数 TaskEndTime 是否已赋值
                     * @return TaskEndTime 是否已赋值
                     * 
                     */
                    bool TaskEndTimeHasBeenSet() const;

                    /**
                     * 获取事件影响信息。
                     * @return EffectInfo 事件影响信息。
                     * 
                     */
                    std::string GetEffectInfo() const;

                    /**
                     * 设置事件影响信息。
                     * @param _effectInfo 事件影响信息。
                     * 
                     */
                    void SetEffectInfo(const std::string& _effectInfo);

                    /**
                     * 判断参数 EffectInfo 是否已赋值
                     * @return EffectInfo 是否已赋值
                     * 
                     */
                    bool EffectInfoHasBeenSet() const;

                    /**
                     * 获取事件最初计划执行日期。
                     * @return InitialExecutionDate 事件最初计划执行日期。
                     * 
                     */
                    std::string GetInitialExecutionDate() const;

                    /**
                     * 设置事件最初计划执行日期。
                     * @param _initialExecutionDate 事件最初计划执行日期。
                     * 
                     */
                    void SetInitialExecutionDate(const std::string& _initialExecutionDate);

                    /**
                     * 判断参数 InitialExecutionDate 是否已赋值
                     * @return InitialExecutionDate 是否已赋值
                     * 
                     */
                    bool InitialExecutionDateHasBeenSet() const;

                private:

                    /**
                     * 事件 ID。
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 事件类型，当前仅支持配置实例迁移、资源腾挪、机房裁撤相关的运维操作。该参数仅支持配置为 **InstanceMigration**。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 事件等级根据其影响严重程度和紧急程度进行分级，由重至轻依次为关键、重要、中等、一般。
- Critical：关键
- High：重要
- Middle：中等
- Low：一般
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * 事件计划执行日期。
                     */
                    std::string m_executionDate;
                    bool m_executionDateHasBeenSet;

                    /**
                     * 事件计划执行开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 事件计划执行结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 运维事件最迟执行的日期，即该事件必须在该日期之前完成，否则可能会对业务产生影响。
                     */
                    std::string m_latestExecutionDate;
                    bool m_latestExecutionDateHasBeenSet;

                    /**
                     * 事件当前状态。
- Waiting：未到达执行日期或不在维护时间窗内的事件。
- Running：在维护时间窗内，正在执行维护的事件。
- Finished：已全部完成维护的事件。
- Canceled：已取消执行的事件。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 事件执行任务完成时间。
                     */
                    std::string m_taskEndTime;
                    bool m_taskEndTimeHasBeenSet;

                    /**
                     * 事件影响信息。
                     */
                    std::string m_effectInfo;
                    bool m_effectInfoHasBeenSet;

                    /**
                     * 事件最初计划执行日期。
                     */
                    std::string m_initialExecutionDate;
                    bool m_initialExecutionDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REDISINSTANCEEVENT_H_
