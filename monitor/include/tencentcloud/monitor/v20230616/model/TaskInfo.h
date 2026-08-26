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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_TASKINFO_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_TASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 任务实体
                */
                class TaskInfo : public AbstractModel
                {
                public:
                    TaskInfo();
                    ~TaskInfo() = default;
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
                     * 获取<p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>提示词模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PromptTemplate <p>提示词模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPromptTemplate() const;

                    /**
                     * 设置<p>提示词模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _promptTemplate <p>提示词模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPromptTemplate(const std::string& _promptTemplate);

                    /**
                     * 判断参数 PromptTemplate 是否已赋值
                     * @return PromptTemplate 是否已赋值
                     * 
                     */
                    bool PromptTemplateHasBeenSet() const;

                    /**
                     * 获取<p>输出格式: markdown / json</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputFormat <p>输出格式: markdown / json</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutputFormat() const;

                    /**
                     * 设置<p>输出格式: markdown / json</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputFormat <p>输出格式: markdown / json</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputFormat(const std::string& _outputFormat);

                    /**
                     * 判断参数 OutputFormat 是否已赋值
                     * @return OutputFormat 是否已赋值
                     * 
                     */
                    bool OutputFormatHasBeenSet() const;

                    /**
                     * 获取<p>触发类型: manual / cron / webhook</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerType <p>触发类型: manual / cron / webhook</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>触发类型: manual / cron / webhook</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerType <p>触发类型: manual / cron / webhook</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

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
                     * 获取<p>Cron 时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CronTimezone <p>Cron 时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCronTimezone() const;

                    /**
                     * 设置<p>Cron 时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cronTimezone <p>Cron 时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCronTimezone(const std::string& _cronTimezone);

                    /**
                     * 判断参数 CronTimezone 是否已赋值
                     * @return CronTimezone 是否已赋值
                     * 
                     */
                    bool CronTimezoneHasBeenSet() const;

                    /**
                     * 获取<p>关联技能 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkillIds <p>关联技能 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSkillIds() const;

                    /**
                     * 设置<p>关联技能 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _skillIds <p>关联技能 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSkillIds(const std::vector<std::string>& _skillIds);

                    /**
                     * 判断参数 SkillIds 是否已赋值
                     * @return SkillIds 是否已赋值
                     * 
                     */
                    bool SkillIdsHasBeenSet() const;

                    /**
                     * 获取<p>关联 MCP 端点 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return McpEndpointIds <p>关联 MCP 端点 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetMcpEndpointIds() const;

                    /**
                     * 设置<p>关联 MCP 端点 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mcpEndpointIds <p>关联 MCP 端点 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMcpEndpointIds(const std::vector<std::string>& _mcpEndpointIds);

                    /**
                     * 判断参数 McpEndpointIds 是否已赋值
                     * @return McpEndpointIds 是否已赋值
                     * 
                     */
                    bool McpEndpointIdsHasBeenSet() const;

                    /**
                     * 获取<p>超时时间(秒)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeoutSec <p>超时时间(秒)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeoutSec() const;

                    /**
                     * 设置<p>超时时间(秒)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeoutSec <p>超时时间(秒)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeoutSec(const int64_t& _timeoutSec);

                    /**
                     * 判断参数 TimeoutSec 是否已赋值
                     * @return TimeoutSec 是否已赋值
                     * 
                     */
                    bool TimeoutSecHasBeenSet() const;

                    /**
                     * 获取<p>重试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryCount <p>重试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetryCount() const;

                    /**
                     * 设置<p>重试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryCount <p>重试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetryCount(const int64_t& _retryCount);

                    /**
                     * 判断参数 RetryCount 是否已赋值
                     * @return RetryCount 是否已赋值
                     * 
                     */
                    bool RetryCountHasBeenSet() const;

                    /**
                     * 获取<p>通知id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotifyIds <p>通知id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNotifyIds() const;

                    /**
                     * 设置<p>通知id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notifyIds <p>通知id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotifyIds(const std::vector<std::string>& _notifyIds);

                    /**
                     * 判断参数 NotifyIds 是否已赋值
                     * @return NotifyIds 是否已赋值
                     * 
                     */
                    bool NotifyIdsHasBeenSet() const;

                    /**
                     * 获取<p>是否启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enabled <p>是否启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enabled <p>是否启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

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
                     * <p>提示词模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_promptTemplate;
                    bool m_promptTemplateHasBeenSet;

                    /**
                     * <p>输出格式: markdown / json</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outputFormat;
                    bool m_outputFormatHasBeenSet;

                    /**
                     * <p>触发类型: manual / cron / webhook</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>Cron 表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cronExpr;
                    bool m_cronExprHasBeenSet;

                    /**
                     * <p>Cron 时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cronTimezone;
                    bool m_cronTimezoneHasBeenSet;

                    /**
                     * <p>关联技能 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_skillIds;
                    bool m_skillIdsHasBeenSet;

                    /**
                     * <p>关联 MCP 端点 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_mcpEndpointIds;
                    bool m_mcpEndpointIdsHasBeenSet;

                    /**
                     * <p>超时时间(秒)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeoutSec;
                    bool m_timeoutSecHasBeenSet;

                    /**
                     * <p>重试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retryCount;
                    bool m_retryCountHasBeenSet;

                    /**
                     * <p>通知id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_notifyIds;
                    bool m_notifyIdsHasBeenSet;

                    /**
                     * <p>是否启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_TASKINFO_H_
