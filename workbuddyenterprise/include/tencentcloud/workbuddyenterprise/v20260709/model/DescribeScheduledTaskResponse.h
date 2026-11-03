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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESCHEDULEDTASKRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESCHEDULEDTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/AgentConfig.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/DeliveryTarget.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * DescribeScheduledTask返回参数结构体
                */
                class DescribeScheduledTaskResponse : public AbstractModel
                {
                public:
                    DescribeScheduledTaskResponse();
                    ~DescribeScheduledTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId <p>任务 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

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
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>关联 Agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentId <p>关联 Agent ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentId() const;

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
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务 Agent 配置（Prompt/Model/AgentId）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentConfig <p>任务 Agent 配置（Prompt/Model/AgentId）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AgentConfig GetAgentConfig() const;

                    /**
                     * 判断参数 AgentConfig 是否已赋值
                     * @return AgentConfig 是否已赋值
                     * 
                     */
                    bool AgentConfigHasBeenSet() const;

                    /**
                     * 获取<p>生效日期开始时间（YYYY-MM-DD 格式），不传时不限制开始时间</p>
                     * @return EffectiveStart <p>生效日期开始时间（YYYY-MM-DD 格式），不传时不限制开始时间</p>
                     * 
                     */
                    std::string GetEffectiveStart() const;

                    /**
                     * 判断参数 EffectiveStart 是否已赋值
                     * @return EffectiveStart 是否已赋值
                     * 
                     */
                    bool EffectiveStartHasBeenSet() const;

                    /**
                     * 获取<p>生效日期结束时间（YYYY-MM-DD 格式），不传时不限制结束时间</p>
                     * @return EffectiveEnd <p>生效日期结束时间（YYYY-MM-DD 格式），不传时不限制结束时间</p>
                     * 
                     */
                    std::string GetEffectiveEnd() const;

                    /**
                     * 判断参数 EffectiveEnd 是否已赋值
                     * @return EffectiveEnd 是否已赋值
                     * 
                     */
                    bool EffectiveEndHasBeenSet() const;

                    /**
                     * 获取<p>投递目标集合（BOT_CHANNEL / WEBHOOK 可并存）</p>
                     * @return DeliveryTargetSet <p>投递目标集合（BOT_CHANNEL / WEBHOOK 可并存）</p>
                     * 
                     */
                    std::vector<DeliveryTarget> GetDeliveryTargetSet() const;

                    /**
                     * 判断参数 DeliveryTargetSet 是否已赋值
                     * @return DeliveryTargetSet 是否已赋值
                     * 
                     */
                    bool DeliveryTargetSetHasBeenSet() const;

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
                     * <p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

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
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * <p>任务 Agent 配置（Prompt/Model/AgentId）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AgentConfig m_agentConfig;
                    bool m_agentConfigHasBeenSet;

                    /**
                     * <p>生效日期开始时间（YYYY-MM-DD 格式），不传时不限制开始时间</p>
                     */
                    std::string m_effectiveStart;
                    bool m_effectiveStartHasBeenSet;

                    /**
                     * <p>生效日期结束时间（YYYY-MM-DD 格式），不传时不限制结束时间</p>
                     */
                    std::string m_effectiveEnd;
                    bool m_effectiveEndHasBeenSet;

                    /**
                     * <p>投递目标集合（BOT_CHANNEL / WEBHOOK 可并存）</p>
                     */
                    std::vector<DeliveryTarget> m_deliveryTargetSet;
                    bool m_deliveryTargetSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESCHEDULEDTASKRESPONSE_H_
