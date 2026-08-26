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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_CREATEAIWORKBENCHTASKREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_CREATEAIWORKBENCHTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateAIWorkbenchTask请求参数结构体
                */
                class CreateAIWorkbenchTaskRequest : public AbstractModel
                {
                public:
                    CreateAIWorkbenchTaskRequest();
                    ~CreateAIWorkbenchTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务名称</p>
                     * @return Name <p>任务名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>任务名称</p>
                     * @param _name <p>任务名称</p>
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
                     * 获取<p>关联 Agent ID</p>
                     * @return AgentId <p>关联 Agent ID</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>关联 Agent ID</p>
                     * @param _agentId <p>关联 Agent ID</p>
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
                     * @return PromptTemplate <p>提示词模板</p>
                     * 
                     */
                    std::string GetPromptTemplate() const;

                    /**
                     * 设置<p>提示词模板</p>
                     * @param _promptTemplate <p>提示词模板</p>
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
                     * @return OutputFormat <p>输出格式: markdown / json</p>
                     * 
                     */
                    std::string GetOutputFormat() const;

                    /**
                     * 设置<p>输出格式: markdown / json</p>
                     * @param _outputFormat <p>输出格式: markdown / json</p>
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
                     * @return TriggerType <p>触发类型: manual / cron / webhook</p>
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>触发类型: manual / cron / webhook</p>
                     * @param _triggerType <p>触发类型: manual / cron / webhook</p>
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
                     * 获取<p>Cron 时区</p>
                     * @return CronTimezone <p>Cron 时区</p>
                     * 
                     */
                    std::string GetCronTimezone() const;

                    /**
                     * 设置<p>Cron 时区</p>
                     * @param _cronTimezone <p>Cron 时区</p>
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
                     * 获取<p>关联资源地图 ID</p>
                     * @return ResourceMapId <p>关联资源地图 ID</p>
                     * 
                     */
                    std::string GetResourceMapId() const;

                    /**
                     * 设置<p>关联资源地图 ID</p>
                     * @param _resourceMapId <p>关联资源地图 ID</p>
                     * 
                     */
                    void SetResourceMapId(const std::string& _resourceMapId);

                    /**
                     * 判断参数 ResourceMapId 是否已赋值
                     * @return ResourceMapId 是否已赋值
                     * 
                     */
                    bool ResourceMapIdHasBeenSet() const;

                    /**
                     * 获取<p>技能 ID 列表</p>
                     * @return SkillIds <p>技能 ID 列表</p>
                     * 
                     */
                    std::vector<std::string> GetSkillIds() const;

                    /**
                     * 设置<p>技能 ID 列表</p>
                     * @param _skillIds <p>技能 ID 列表</p>
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
                     * 获取<p>MCP 端点 ID 列表</p>
                     * @return McpEndpointIds <p>MCP 端点 ID 列表</p>
                     * 
                     */
                    std::vector<std::string> GetMcpEndpointIds() const;

                    /**
                     * 设置<p>MCP 端点 ID 列表</p>
                     * @param _mcpEndpointIds <p>MCP 端点 ID 列表</p>
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
                     * @return TimeoutSec <p>超时时间(秒)</p>
                     * 
                     */
                    int64_t GetTimeoutSec() const;

                    /**
                     * 设置<p>超时时间(秒)</p>
                     * @param _timeoutSec <p>超时时间(秒)</p>
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
                     * @return RetryCount <p>重试次数</p>
                     * 
                     */
                    int64_t GetRetryCount() const;

                    /**
                     * 设置<p>重试次数</p>
                     * @param _retryCount <p>重试次数</p>
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
                     * 获取<p>是否启用</p>
                     * @return Enabled <p>是否启用</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否启用</p>
                     * @param _enabled <p>是否启用</p>
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
                     * <p>任务名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>任务描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>关联 Agent ID</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>提示词模板</p>
                     */
                    std::string m_promptTemplate;
                    bool m_promptTemplateHasBeenSet;

                    /**
                     * <p>输出格式: markdown / json</p>
                     */
                    std::string m_outputFormat;
                    bool m_outputFormatHasBeenSet;

                    /**
                     * <p>触发类型: manual / cron / webhook</p>
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>Cron 表达式</p>
                     */
                    std::string m_cronExpr;
                    bool m_cronExprHasBeenSet;

                    /**
                     * <p>Cron 时区</p>
                     */
                    std::string m_cronTimezone;
                    bool m_cronTimezoneHasBeenSet;

                    /**
                     * <p>关联资源地图 ID</p>
                     */
                    std::string m_resourceMapId;
                    bool m_resourceMapIdHasBeenSet;

                    /**
                     * <p>技能 ID 列表</p>
                     */
                    std::vector<std::string> m_skillIds;
                    bool m_skillIdsHasBeenSet;

                    /**
                     * <p>MCP 端点 ID 列表</p>
                     */
                    std::vector<std::string> m_mcpEndpointIds;
                    bool m_mcpEndpointIdsHasBeenSet;

                    /**
                     * <p>超时时间(秒)</p>
                     */
                    int64_t m_timeoutSec;
                    bool m_timeoutSecHasBeenSet;

                    /**
                     * <p>重试次数</p>
                     */
                    int64_t m_retryCount;
                    bool m_retryCountHasBeenSet;

                    /**
                     * <p>是否启用</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_CREATEAIWORKBENCHTASKREQUEST_H_
