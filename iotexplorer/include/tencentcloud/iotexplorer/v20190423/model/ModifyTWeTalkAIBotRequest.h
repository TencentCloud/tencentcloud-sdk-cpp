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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYTWETALKAIBOTREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYTWETALKAIBOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkSTTConfigInfo.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkLLMConfigInfo.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkTTSConfigInfo.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkAgentConfigInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * ModifyTWeTalkAIBot请求参数结构体
                */
                class ModifyTWeTalkAIBotRequest : public AbstractModel
                {
                public:
                    ModifyTWeTalkAIBotRequest();
                    ~ModifyTWeTalkAIBotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取智能体ID
                     * @return BotId 智能体ID
                     * 
                     */
                    std::string GetBotId() const;

                    /**
                     * 设置智能体ID
                     * @param _botId 智能体ID
                     * 
                     */
                    void SetBotId(const std::string& _botId);

                    /**
                     * 判断参数 BotId 是否已赋值
                     * @return BotId 是否已赋值
                     * 
                     */
                    bool BotIdHasBeenSet() const;

                    /**
                     * 获取产品ID
                     * @return Name 产品ID
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置产品ID
                     * @param _name 产品ID
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
                     * 获取名称
                     * @return Description 名称
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置名称
                     * @param _description 名称
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
                     * 获取支持的语言，zh-中文；en-英文；默认zh
                     * @return TargetLanguage 支持的语言，zh-中文；en-英文；默认zh
                     * 
                     */
                    std::string GetTargetLanguage() const;

                    /**
                     * 设置支持的语言，zh-中文；en-英文；默认zh
                     * @param _targetLanguage 支持的语言，zh-中文；en-英文；默认zh
                     * 
                     */
                    void SetTargetLanguage(const std::string& _targetLanguage);

                    /**
                     * 判断参数 TargetLanguage 是否已赋值
                     * @return TargetLanguage 是否已赋值
                     * 
                     */
                    bool TargetLanguageHasBeenSet() const;

                    /**
                     * 获取自定义语音识别配置
                     * @return STTConfig 自定义语音识别配置
                     * 
                     */
                    TalkSTTConfigInfo GetSTTConfig() const;

                    /**
                     * 设置自定义语音识别配置
                     * @param _sTTConfig 自定义语音识别配置
                     * 
                     */
                    void SetSTTConfig(const TalkSTTConfigInfo& _sTTConfig);

                    /**
                     * 判断参数 STTConfig 是否已赋值
                     * @return STTConfig 是否已赋值
                     * 
                     */
                    bool STTConfigHasBeenSet() const;

                    /**
                     * 获取自定义大模型配置
                     * @return LLMConfig 自定义大模型配置
                     * 
                     */
                    TalkLLMConfigInfo GetLLMConfig() const;

                    /**
                     * 设置自定义大模型配置
                     * @param _lLMConfig 自定义大模型配置
                     * 
                     */
                    void SetLLMConfig(const TalkLLMConfigInfo& _lLMConfig);

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
                    TalkTTSConfigInfo GetTTSConfig() const;

                    /**
                     * 设置语音合成配置
                     * @param _tTSConfig 语音合成配置
                     * 
                     */
                    void SetTTSConfig(const TalkTTSConfigInfo& _tTSConfig);

                    /**
                     * 判断参数 TTSConfig 是否已赋值
                     * @return TTSConfig 是否已赋值
                     * 
                     */
                    bool TTSConfigHasBeenSet() const;

                    /**
                     * 获取智能体配置
                     * @return AgentConfig 智能体配置
                     * 
                     */
                    TalkAgentConfigInfo GetAgentConfig() const;

                    /**
                     * 设置智能体配置
                     * @param _agentConfig 智能体配置
                     * 
                     */
                    void SetAgentConfig(const TalkAgentConfigInfo& _agentConfig);

                    /**
                     * 判断参数 AgentConfig 是否已赋值
                     * @return AgentConfig 是否已赋值
                     * 
                     */
                    bool AgentConfigHasBeenSet() const;

                    /**
                     * 获取自定义工具配置，最多可创建10个
                     * @return CustomTools 自定义工具配置，最多可创建10个
                     * 
                     */
                    std::string GetCustomTools() const;

                    /**
                     * 设置自定义工具配置，最多可创建10个
                     * @param _customTools 自定义工具配置，最多可创建10个
                     * 
                     */
                    void SetCustomTools(const std::string& _customTools);

                    /**
                     * 判断参数 CustomTools 是否已赋值
                     * @return CustomTools 是否已赋值
                     * 
                     */
                    bool CustomToolsHasBeenSet() const;

                private:

                    /**
                     * 智能体ID
                     */
                    std::string m_botId;
                    bool m_botIdHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 支持的语言，zh-中文；en-英文；默认zh
                     */
                    std::string m_targetLanguage;
                    bool m_targetLanguageHasBeenSet;

                    /**
                     * 自定义语音识别配置
                     */
                    TalkSTTConfigInfo m_sTTConfig;
                    bool m_sTTConfigHasBeenSet;

                    /**
                     * 自定义大模型配置
                     */
                    TalkLLMConfigInfo m_lLMConfig;
                    bool m_lLMConfigHasBeenSet;

                    /**
                     * 语音合成配置
                     */
                    TalkTTSConfigInfo m_tTSConfig;
                    bool m_tTSConfigHasBeenSet;

                    /**
                     * 智能体配置
                     */
                    TalkAgentConfigInfo m_agentConfig;
                    bool m_agentConfigHasBeenSet;

                    /**
                     * 自定义工具配置，最多可创建10个
                     */
                    std::string m_customTools;
                    bool m_customToolsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYTWETALKAIBOTREQUEST_H_
