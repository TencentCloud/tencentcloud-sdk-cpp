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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_SCHEDULEDTASKSUMMARY_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_SCHEDULEDTASKSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/AgentConfig.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * 定时任务列表项
                */
                class ScheduledTaskSummary : public AbstractModel
                {
                public:
                    ScheduledTaskSummary();
                    ~ScheduledTaskSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId <p>任务 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId <p>任务 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>任务唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskKey <p>任务唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskKey() const;

                    /**
                     * 设置<p>任务唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskKey <p>任务唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskKey(const std::string& _taskKey);

                    /**
                     * 判断参数 TaskKey 是否已赋值
                     * @return TaskKey 是否已赋值
                     * 
                     */
                    bool TaskKeyHasBeenSet() const;

                    /**
                     * 获取<p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>关联 Agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentId <p>关联 Agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>关联 Agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentId <p>关联 Agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取<p>Cron 表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CronExpr <p>Cron 表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCronExpr() const;

                    /**
                     * 设置<p>Cron 表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cronExpr <p>Cron 表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCronExpr(const std::string& _cronExpr);

                    /**
                     * 判断参数 CronExpr 是否已赋值
                     * @return CronExpr 是否已赋值
                     * 
                     */
                    bool CronExprHasBeenSet() const;

                    /**
                     * 获取<p>任务状态：ACTIVE（启用）/ PAUSED（暂停）/ DISABLED（停用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>任务状态：ACTIVE（启用）/ PAUSED（暂停）/ DISABLED（停用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态：ACTIVE（启用）/ PAUSED（暂停）/ DISABLED（停用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>任务状态：ACTIVE（启用）/ PAUSED（暂停）/ DISABLED（停用）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>最近执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastRunTime <p>最近执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastRunTime() const;

                    /**
                     * 设置<p>最近执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastRunTime <p>最近执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastRunTime(const std::string& _lastRunTime);

                    /**
                     * 判断参数 LastRunTime 是否已赋值
                     * @return LastRunTime 是否已赋值
                     * 
                     */
                    bool LastRunTimeHasBeenSet() const;

                    /**
                     * 获取<p>下次执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextRunTime <p>下次执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNextRunTime() const;

                    /**
                     * 设置<p>下次执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nextRunTime <p>下次执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNextRunTime(const std::string& _nextRunTime);

                    /**
                     * 判断参数 NextRunTime 是否已赋值
                     * @return NextRunTime 是否已赋值
                     * 
                     */
                    bool NextRunTimeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务 Agent 配置（Prompt/Model/AgentId）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentConfig <p>任务 Agent 配置（Prompt/Model/AgentId）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AgentConfig GetAgentConfig() const;

                    /**
                     * 设置<p>任务 Agent 配置（Prompt/Model/AgentId）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentConfig <p>任务 Agent 配置（Prompt/Model/AgentId）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentConfig(const AgentConfig& _agentConfig);

                    /**
                     * 判断参数 AgentConfig 是否已赋值
                     * @return AgentConfig 是否已赋值
                     * 
                     */
                    bool AgentConfigHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskKey;
                    bool m_taskKeyHasBeenSet;

                    /**
                     * <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>关联 Agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>Cron 表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cronExpr;
                    bool m_cronExprHasBeenSet;

                    /**
                     * <p>任务状态：ACTIVE（启用）/ PAUSED（暂停）/ DISABLED（停用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>最近执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastRunTime;
                    bool m_lastRunTimeHasBeenSet;

                    /**
                     * <p>下次执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nextRunTime;
                    bool m_nextRunTimeHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>任务 Agent 配置（Prompt/Model/AgentId）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AgentConfig m_agentConfig;
                    bool m_agentConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_SCHEDULEDTASKSUMMARY_H_
