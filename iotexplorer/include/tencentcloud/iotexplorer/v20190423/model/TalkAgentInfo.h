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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKAGENTINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKAGENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkSTTConfig.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkLLMConfig.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkTTSConfig.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkConversationConfig.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkMemoryConfig.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkIOTTool.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkWebhookTool.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkAgentBinding.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeTalk智能体配置信息描述
                */
                class TalkAgentInfo : public AbstractModel
                {
                public:
                    TalkAgentInfo();
                    ~TalkAgentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主账号UIN
                     * @return Uin 主账号UIN
                     * 
                     */
                    int64_t GetUin() const;

                    /**
                     * 设置主账号UIN
                     * @param _uin 主账号UIN
                     * 
                     */
                    void SetUin(const int64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取账号AppId
                     * @return AppId 账号AppId
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置账号AppId
                     * @param _appId 账号AppId
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取实例 ID
                     * @return InstanceId 实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID
                     * @param _instanceId 实例 ID
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
                     * 获取智能体ID
                     * @return AgentId 智能体ID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置智能体ID
                     * @param _agentId 智能体ID
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
                     * 获取智能体名称
                     * @return Name 智能体名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置智能体名称
                     * @param _name 智能体名称
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
                     * 获取智能体描述
                     * @return Description 智能体描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置智能体描述
                     * @param _description 智能体描述
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
                     * 获取语音识别配置
                     * @return STTConfig 语音识别配置
                     * 
                     */
                    TalkSTTConfig GetSTTConfig() const;

                    /**
                     * 设置语音识别配置
                     * @param _sTTConfig 语音识别配置
                     * 
                     */
                    void SetSTTConfig(const TalkSTTConfig& _sTTConfig);

                    /**
                     * 判断参数 STTConfig 是否已赋值
                     * @return STTConfig 是否已赋值
                     * 
                     */
                    bool STTConfigHasBeenSet() const;

                    /**
                     * 获取大模型配置
                     * @return LLMConfig 大模型配置
                     * 
                     */
                    TalkLLMConfig GetLLMConfig() const;

                    /**
                     * 设置大模型配置
                     * @param _lLMConfig 大模型配置
                     * 
                     */
                    void SetLLMConfig(const TalkLLMConfig& _lLMConfig);

                    /**
                     * 判断参数 LLMConfig 是否已赋值
                     * @return LLMConfig 是否已赋值
                     * 
                     */
                    bool LLMConfigHasBeenSet() const;

                    /**
                     * 获取语音合成配置
                     * @return TTSConfig 语音合成配置
                     * 
                     */
                    TalkTTSConfig GetTTSConfig() const;

                    /**
                     * 设置语音合成配置
                     * @param _tTSConfig 语音合成配置
                     * 
                     */
                    void SetTTSConfig(const TalkTTSConfig& _tTSConfig);

                    /**
                     * 判断参数 TTSConfig 是否已赋值
                     * @return TTSConfig 是否已赋值
                     * 
                     */
                    bool TTSConfigHasBeenSet() const;

                    /**
                     * 获取对话行为配置
                     * @return ConversationConfig 对话行为配置
                     * 
                     */
                    TalkConversationConfig GetConversationConfig() const;

                    /**
                     * 设置对话行为配置
                     * @param _conversationConfig 对话行为配置
                     * 
                     */
                    void SetConversationConfig(const TalkConversationConfig& _conversationConfig);

                    /**
                     * 判断参数 ConversationConfig 是否已赋值
                     * @return ConversationConfig 是否已赋值
                     * 
                     */
                    bool ConversationConfigHasBeenSet() const;

                    /**
                     * 获取长期记忆配置
                     * @return MemoryConfig 长期记忆配置
                     * 
                     */
                    TalkMemoryConfig GetMemoryConfig() const;

                    /**
                     * 设置长期记忆配置
                     * @param _memoryConfig 长期记忆配置
                     * 
                     */
                    void SetMemoryConfig(const TalkMemoryConfig& _memoryConfig);

                    /**
                     * 判断参数 MemoryConfig 是否已赋值
                     * @return MemoryConfig 是否已赋值
                     * 
                     */
                    bool MemoryConfigHasBeenSet() const;

                    /**
                     * 获取IoT 工具列表
                     * @return IOTTools IoT 工具列表
                     * 
                     */
                    std::vector<TalkIOTTool> GetIOTTools() const;

                    /**
                     * 设置IoT 工具列表
                     * @param _iOTTools IoT 工具列表
                     * 
                     */
                    void SetIOTTools(const std::vector<TalkIOTTool>& _iOTTools);

                    /**
                     * 判断参数 IOTTools 是否已赋值
                     * @return IOTTools 是否已赋值
                     * 
                     */
                    bool IOTToolsHasBeenSet() const;

                    /**
                     * 获取Webhook 工具列表
                     * @return WebhookTools Webhook 工具列表
                     * 
                     */
                    std::vector<TalkWebhookTool> GetWebhookTools() const;

                    /**
                     * 设置Webhook 工具列表
                     * @param _webhookTools Webhook 工具列表
                     * 
                     */
                    void SetWebhookTools(const std::vector<TalkWebhookTool>& _webhookTools);

                    /**
                     * 判断参数 WebhookTools 是否已赋值
                     * @return WebhookTools 是否已赋值
                     * 
                     */
                    bool WebhookToolsHasBeenSet() const;

                    /**
                     * 获取元信息JSON object 字符串
                     * @return Metadata 元信息JSON object 字符串
                     * 
                     */
                    std::string GetMetadata() const;

                    /**
                     * 设置元信息JSON object 字符串
                     * @param _metadata 元信息JSON object 字符串
                     * 
                     */
                    void SetMetadata(const std::string& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取绑定关系列表
                     * @return Bindings 绑定关系列表
                     * 
                     */
                    std::vector<TalkAgentBinding> GetBindings() const;

                    /**
                     * 设置绑定关系列表
                     * @param _bindings 绑定关系列表
                     * 
                     */
                    void SetBindings(const std::vector<TalkAgentBinding>& _bindings);

                    /**
                     * 判断参数 Bindings 是否已赋值
                     * @return Bindings 是否已赋值
                     * 
                     */
                    bool BindingsHasBeenSet() const;

                    /**
                     * 获取创建时间，Unix 秒
                     * @return CreateTime 创建时间，Unix 秒
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，Unix 秒
                     * @param _createTime 创建时间，Unix 秒
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间，Unix 秒
                     * @return UpdateTime 更新时间，Unix 秒
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间，Unix 秒
                     * @param _updateTime 更新时间，Unix 秒
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 主账号UIN
                     */
                    int64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 账号AppId
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 智能体ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 智能体名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 智能体描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 语音识别配置
                     */
                    TalkSTTConfig m_sTTConfig;
                    bool m_sTTConfigHasBeenSet;

                    /**
                     * 大模型配置
                     */
                    TalkLLMConfig m_lLMConfig;
                    bool m_lLMConfigHasBeenSet;

                    /**
                     * 语音合成配置
                     */
                    TalkTTSConfig m_tTSConfig;
                    bool m_tTSConfigHasBeenSet;

                    /**
                     * 对话行为配置
                     */
                    TalkConversationConfig m_conversationConfig;
                    bool m_conversationConfigHasBeenSet;

                    /**
                     * 长期记忆配置
                     */
                    TalkMemoryConfig m_memoryConfig;
                    bool m_memoryConfigHasBeenSet;

                    /**
                     * IoT 工具列表
                     */
                    std::vector<TalkIOTTool> m_iOTTools;
                    bool m_iOTToolsHasBeenSet;

                    /**
                     * Webhook 工具列表
                     */
                    std::vector<TalkWebhookTool> m_webhookTools;
                    bool m_webhookToolsHasBeenSet;

                    /**
                     * 元信息JSON object 字符串
                     */
                    std::string m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * 绑定关系列表
                     */
                    std::vector<TalkAgentBinding> m_bindings;
                    bool m_bindingsHasBeenSet;

                    /**
                     * 创建时间，Unix 秒
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间，Unix 秒
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKAGENTINFO_H_
