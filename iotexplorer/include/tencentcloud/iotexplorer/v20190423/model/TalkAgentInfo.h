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
#include <tencentcloud/iotexplorer/v20190423/model/TalkEventCallbackConfig.h>


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
                     * 获取<p>主账号UIN</p>
                     * @return Uin <p>主账号UIN</p>
                     * 
                     */
                    int64_t GetUin() const;

                    /**
                     * 设置<p>主账号UIN</p>
                     * @param _uin <p>主账号UIN</p>
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
                     * 获取<p>账号AppId</p>
                     * @return AppId <p>账号AppId</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>账号AppId</p>
                     * @param _appId <p>账号AppId</p>
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
                     * 获取<p>实例 ID</p>
                     * @return InstanceId <p>实例 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _instanceId <p>实例 ID</p>
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
                     * 获取<p>智能体ID</p>
                     * @return AgentId <p>智能体ID</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>智能体ID</p>
                     * @param _agentId <p>智能体ID</p>
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
                     * 获取<p>智能体名称</p>
                     * @return Name <p>智能体名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>智能体名称</p>
                     * @param _name <p>智能体名称</p>
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
                     * 获取<p>智能体描述</p>
                     * @return Description <p>智能体描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>智能体描述</p>
                     * @param _description <p>智能体描述</p>
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
                     * 获取<p>语音识别配置</p>
                     * @return STTConfig <p>语音识别配置</p>
                     * 
                     */
                    TalkSTTConfig GetSTTConfig() const;

                    /**
                     * 设置<p>语音识别配置</p>
                     * @param _sTTConfig <p>语音识别配置</p>
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
                     * 获取<p>大模型配置</p>
                     * @return LLMConfig <p>大模型配置</p>
                     * 
                     */
                    TalkLLMConfig GetLLMConfig() const;

                    /**
                     * 设置<p>大模型配置</p>
                     * @param _lLMConfig <p>大模型配置</p>
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
                     * 获取<p>语音合成配置</p>
                     * @return TTSConfig <p>语音合成配置</p>
                     * 
                     */
                    TalkTTSConfig GetTTSConfig() const;

                    /**
                     * 设置<p>语音合成配置</p>
                     * @param _tTSConfig <p>语音合成配置</p>
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
                     * 获取<p>对话行为配置</p>
                     * @return ConversationConfig <p>对话行为配置</p>
                     * 
                     */
                    TalkConversationConfig GetConversationConfig() const;

                    /**
                     * 设置<p>对话行为配置</p>
                     * @param _conversationConfig <p>对话行为配置</p>
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
                     * 获取<p>长期记忆配置</p>
                     * @return MemoryConfig <p>长期记忆配置</p>
                     * 
                     */
                    TalkMemoryConfig GetMemoryConfig() const;

                    /**
                     * 设置<p>长期记忆配置</p>
                     * @param _memoryConfig <p>长期记忆配置</p>
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
                     * 获取<p>IoT 工具列表</p>
                     * @return IOTTools <p>IoT 工具列表</p>
                     * 
                     */
                    std::vector<TalkIOTTool> GetIOTTools() const;

                    /**
                     * 设置<p>IoT 工具列表</p>
                     * @param _iOTTools <p>IoT 工具列表</p>
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
                     * 获取<p>Webhook 工具列表</p>
                     * @return WebhookTools <p>Webhook 工具列表</p>
                     * 
                     */
                    std::vector<TalkWebhookTool> GetWebhookTools() const;

                    /**
                     * 设置<p>Webhook 工具列表</p>
                     * @param _webhookTools <p>Webhook 工具列表</p>
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
                     * 获取<p>元信息JSON object 字符串</p>
                     * @return Metadata <p>元信息JSON object 字符串</p>
                     * 
                     */
                    std::string GetMetadata() const;

                    /**
                     * 设置<p>元信息JSON object 字符串</p>
                     * @param _metadata <p>元信息JSON object 字符串</p>
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
                     * 获取<p>绑定关系列表</p>
                     * @return Bindings <p>绑定关系列表</p>
                     * 
                     */
                    std::vector<TalkAgentBinding> GetBindings() const;

                    /**
                     * 设置<p>绑定关系列表</p>
                     * @param _bindings <p>绑定关系列表</p>
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
                     * 获取<p>创建时间，Unix 秒</p>
                     * @return CreateTime <p>创建时间，Unix 秒</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，Unix 秒</p>
                     * @param _createTime <p>创建时间，Unix 秒</p>
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
                     * 获取<p>更新时间，Unix 秒</p>
                     * @return UpdateTime <p>更新时间，Unix 秒</p>
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间，Unix 秒</p>
                     * @param _updateTime <p>更新时间，Unix 秒</p>
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>事件回调配置</p>
                     * @return EventCallbackConfig <p>事件回调配置</p>
                     * 
                     */
                    TalkEventCallbackConfig GetEventCallbackConfig() const;

                    /**
                     * 设置<p>事件回调配置</p>
                     * @param _eventCallbackConfig <p>事件回调配置</p>
                     * 
                     */
                    void SetEventCallbackConfig(const TalkEventCallbackConfig& _eventCallbackConfig);

                    /**
                     * 判断参数 EventCallbackConfig 是否已赋值
                     * @return EventCallbackConfig 是否已赋值
                     * 
                     */
                    bool EventCallbackConfigHasBeenSet() const;

                private:

                    /**
                     * <p>主账号UIN</p>
                     */
                    int64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>账号AppId</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>智能体ID</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>智能体名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>智能体描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>语音识别配置</p>
                     */
                    TalkSTTConfig m_sTTConfig;
                    bool m_sTTConfigHasBeenSet;

                    /**
                     * <p>大模型配置</p>
                     */
                    TalkLLMConfig m_lLMConfig;
                    bool m_lLMConfigHasBeenSet;

                    /**
                     * <p>语音合成配置</p>
                     */
                    TalkTTSConfig m_tTSConfig;
                    bool m_tTSConfigHasBeenSet;

                    /**
                     * <p>对话行为配置</p>
                     */
                    TalkConversationConfig m_conversationConfig;
                    bool m_conversationConfigHasBeenSet;

                    /**
                     * <p>长期记忆配置</p>
                     */
                    TalkMemoryConfig m_memoryConfig;
                    bool m_memoryConfigHasBeenSet;

                    /**
                     * <p>IoT 工具列表</p>
                     */
                    std::vector<TalkIOTTool> m_iOTTools;
                    bool m_iOTToolsHasBeenSet;

                    /**
                     * <p>Webhook 工具列表</p>
                     */
                    std::vector<TalkWebhookTool> m_webhookTools;
                    bool m_webhookToolsHasBeenSet;

                    /**
                     * <p>元信息JSON object 字符串</p>
                     */
                    std::string m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>绑定关系列表</p>
                     */
                    std::vector<TalkAgentBinding> m_bindings;
                    bool m_bindingsHasBeenSet;

                    /**
                     * <p>创建时间，Unix 秒</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间，Unix 秒</p>
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>事件回调配置</p>
                     */
                    TalkEventCallbackConfig m_eventCallbackConfig;
                    bool m_eventCallbackConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKAGENTINFO_H_
