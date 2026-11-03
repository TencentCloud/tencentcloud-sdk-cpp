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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYSCHEDULEDTASKREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYSCHEDULEDTASKREQUEST_H_

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
                * ModifyScheduledTask请求参数结构体
                */
                class ModifyScheduledTaskRequest : public AbstractModel
                {
                public:
                    ModifyScheduledTaskRequest();
                    ~ModifyScheduledTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务 ID</p>
                     * @return TaskId <p>任务 ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务 ID</p>
                     * @param _taskId <p>任务 ID</p>
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
                     * 获取<p>任务名称</p>
                     * @return TaskName <p>任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称</p>
                     * @param _taskName <p>任务名称</p>
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
                     * 获取<p>任务描述</p>
                     * @return Description <p>任务描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>任务描述</p>
                     * @param _description <p>任务描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>任务关联的 Agent 配置</p>
                     * @return AgentConfig <p>任务关联的 Agent 配置</p>
                     * 
                     */
                    AgentConfig GetAgentConfig() const;

                    /**
                     * 设置<p>任务关联的 Agent 配置</p>
                     * @param _agentConfig <p>任务关联的 Agent 配置</p>
                     * 
                     */
                    void SetAgentConfig(const AgentConfig& _agentConfig);

                    /**
                     * 判断参数 AgentConfig 是否已赋值
                     * @return AgentConfig 是否已赋值
                     * 
                     */
                    bool AgentConfigHasBeenSet() const;

                    /**
                     * 获取<p>Cron 表达式</p>
                     * @return CronExpr <p>Cron 表达式</p>
                     * 
                     */
                    std::string GetCronExpr() const;

                    /**
                     * 设置<p>Cron 表达式</p>
                     * @param _cronExpr <p>Cron 表达式</p>
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
                     * @return Status <p>任务状态：ACTIVE（启用）/ PAUSED（暂停）/ DISABLED（停用）</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态：ACTIVE（启用）/ PAUSED（暂停）/ DISABLED（停用）</p>
                     * @param _status <p>任务状态：ACTIVE（启用）/ PAUSED（暂停）/ DISABLED（停用）</p>
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
                     * 获取<p>生效日期开始时间（YYYY-MM-DD 格式），传空串清除，不传保持原值</p>
                     * @return EffectiveStart <p>生效日期开始时间（YYYY-MM-DD 格式），传空串清除，不传保持原值</p>
                     * 
                     */
                    std::string GetEffectiveStart() const;

                    /**
                     * 设置<p>生效日期开始时间（YYYY-MM-DD 格式），传空串清除，不传保持原值</p>
                     * @param _effectiveStart <p>生效日期开始时间（YYYY-MM-DD 格式），传空串清除，不传保持原值</p>
                     * 
                     */
                    void SetEffectiveStart(const std::string& _effectiveStart);

                    /**
                     * 判断参数 EffectiveStart 是否已赋值
                     * @return EffectiveStart 是否已赋值
                     * 
                     */
                    bool EffectiveStartHasBeenSet() const;

                    /**
                     * 获取<p>生效日期结束时间（YYYY-MM-DD 格式），传空串清除，不传保持原值</p>
                     * @return EffectiveEnd <p>生效日期结束时间（YYYY-MM-DD 格式），传空串清除，不传保持原值</p>
                     * 
                     */
                    std::string GetEffectiveEnd() const;

                    /**
                     * 设置<p>生效日期结束时间（YYYY-MM-DD 格式），传空串清除，不传保持原值</p>
                     * @param _effectiveEnd <p>生效日期结束时间（YYYY-MM-DD 格式），传空串清除，不传保持原值</p>
                     * 
                     */
                    void SetEffectiveEnd(const std::string& _effectiveEnd);

                    /**
                     * 判断参数 EffectiveEnd 是否已赋值
                     * @return EffectiveEnd 是否已赋值
                     * 
                     */
                    bool EffectiveEndHasBeenSet() const;

                    /**
                     * 获取<p>投递目标集合（部分更新时整体替换）</p>
                     * @return DeliveryTargetSet <p>投递目标集合（部分更新时整体替换）</p>
                     * 
                     */
                    std::vector<DeliveryTarget> GetDeliveryTargetSet() const;

                    /**
                     * 设置<p>投递目标集合（部分更新时整体替换）</p>
                     * @param _deliveryTargetSet <p>投递目标集合（部分更新时整体替换）</p>
                     * 
                     */
                    void SetDeliveryTargetSet(const std::vector<DeliveryTarget>& _deliveryTargetSet);

                    /**
                     * 判断参数 DeliveryTargetSet 是否已赋值
                     * @return DeliveryTargetSet 是否已赋值
                     * 
                     */
                    bool DeliveryTargetSetHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>任务描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>任务关联的 Agent 配置</p>
                     */
                    AgentConfig m_agentConfig;
                    bool m_agentConfigHasBeenSet;

                    /**
                     * <p>Cron 表达式</p>
                     */
                    std::string m_cronExpr;
                    bool m_cronExprHasBeenSet;

                    /**
                     * <p>任务状态：ACTIVE（启用）/ PAUSED（暂停）/ DISABLED（停用）</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>生效日期开始时间（YYYY-MM-DD 格式），传空串清除，不传保持原值</p>
                     */
                    std::string m_effectiveStart;
                    bool m_effectiveStartHasBeenSet;

                    /**
                     * <p>生效日期结束时间（YYYY-MM-DD 格式），传空串清除，不传保持原值</p>
                     */
                    std::string m_effectiveEnd;
                    bool m_effectiveEndHasBeenSet;

                    /**
                     * <p>投递目标集合（部分更新时整体替换）</p>
                     */
                    std::vector<DeliveryTarget> m_deliveryTargetSet;
                    bool m_deliveryTargetSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYSCHEDULEDTASKREQUEST_H_
