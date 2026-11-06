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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONLLMCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONLLMCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationMcpServer.h>
#include <tencentcloud/trtc/v20190722/model/KeyValueItem.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationHistoryMessage.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * AI对话的LLM参数配置
                */
                class VoiceConversationLLMConfig : public AbstractModel
                {
                public:
                    VoiceConversationLLMConfig();
                    ~VoiceConversationLLMConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>LLM 协议类型，如openai（OpenAI 兼容协议）。</p>
                     * @return LLMType <p>LLM 协议类型，如openai（OpenAI 兼容协议）。</p>
                     * 
                     */
                    std::string GetLLMType() const;

                    /**
                     * 设置<p>LLM 协议类型，如openai（OpenAI 兼容协议）。</p>
                     * @param _lLMType <p>LLM 协议类型，如openai（OpenAI 兼容协议）。</p>
                     * 
                     */
                    void SetLLMType(const std::string& _lLMType);

                    /**
                     * 判断参数 LLMType 是否已赋值
                     * @return LLMType 是否已赋值
                     * 
                     */
                    bool LLMTypeHasBeenSet() const;

                    /**
                     * 获取<p>模型名，如 gpt-4o-mini</p>
                     * @return Model <p>模型名，如 gpt-4o-mini</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型名，如 gpt-4o-mini</p>
                     * @param _model <p>模型名，如 gpt-4o-mini</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>OpenAI 协议兼容的 endpoint。</p>
                     * @return APIUrl <p>OpenAI 协议兼容的 endpoint。</p>
                     * 
                     */
                    std::string GetAPIUrl() const;

                    /**
                     * 设置<p>OpenAI 协议兼容的 endpoint。</p>
                     * @param _aPIUrl <p>OpenAI 协议兼容的 endpoint。</p>
                     * 
                     */
                    void SetAPIUrl(const std::string& _aPIUrl);

                    /**
                     * 判断参数 APIUrl 是否已赋值
                     * @return APIUrl 是否已赋值
                     * 
                     */
                    bool APIUrlHasBeenSet() const;

                    /**
                     * 获取<p>厂商 API Key。</p>
                     * @return APIKey <p>厂商 API Key。</p>
                     * 
                     */
                    std::string GetAPIKey() const;

                    /**
                     * 设置<p>厂商 API Key。</p>
                     * @param _aPIKey <p>厂商 API Key。</p>
                     * 
                     */
                    void SetAPIKey(const std::string& _aPIKey);

                    /**
                     * 判断参数 APIKey 是否已赋值
                     * @return APIKey 是否已赋值
                     * 
                     */
                    bool APIKeyHasBeenSet() const;

                    /**
                     * 获取<p>系统提示词。</p>
                     * @return SystemPrompt <p>系统提示词。</p>
                     * 
                     */
                    std::string GetSystemPrompt() const;

                    /**
                     * 设置<p>系统提示词。</p>
                     * @param _systemPrompt <p>系统提示词。</p>
                     * 
                     */
                    void SetSystemPrompt(const std::string& _systemPrompt);

                    /**
                     * 判断参数 SystemPrompt 是否已赋值
                     * @return SystemPrompt 是否已赋值
                     * 
                     */
                    bool SystemPromptHasBeenSet() const;

                    /**
                     * 获取<p>LLM 调用失败后，使用此文本生成 TTS音频。</p>
                     * @return FailureMessage <p>LLM 调用失败后，使用此文本生成 TTS音频。</p>
                     * 
                     */
                    std::string GetFailureMessage() const;

                    /**
                     * 设置<p>LLM 调用失败后，使用此文本生成 TTS音频。</p>
                     * @param _failureMessage <p>LLM 调用失败后，使用此文本生成 TTS音频。</p>
                     * 
                     */
                    void SetFailureMessage(const std::string& _failureMessage);

                    /**
                     * 判断参数 FailureMessage 是否已赋值
                     * @return FailureMessage 是否已赋值
                     * 
                     */
                    bool FailureMessageHasBeenSet() const;

                    /**
                     * 获取<p>单次回复最大 Token 数，0=不限制，默认值为0。注意：如果模型输出token数量大于设置的MaxTokens的值，会截断回复内容。</p>
                     * @return MaxTokens <p>单次回复最大 Token 数，0=不限制，默认值为0。注意：如果模型输出token数量大于设置的MaxTokens的值，会截断回复内容。</p>
                     * 
                     */
                    uint64_t GetMaxTokens() const;

                    /**
                     * 设置<p>单次回复最大 Token 数，0=不限制，默认值为0。注意：如果模型输出token数量大于设置的MaxTokens的值，会截断回复内容。</p>
                     * @param _maxTokens <p>单次回复最大 Token 数，0=不限制，默认值为0。注意：如果模型输出token数量大于设置的MaxTokens的值，会截断回复内容。</p>
                     * 
                     */
                    void SetMaxTokens(const uint64_t& _maxTokens);

                    /**
                     * 判断参数 MaxTokens 是否已赋值
                     * @return MaxTokens 是否已赋值
                     * 
                     */
                    bool MaxTokensHasBeenSet() const;

                    /**
                     * 获取<p>是否开启思考模式（需结合提供厂商具体使用）。注意：开启思考模式会占用输出token数。</p>
                     * @return ThinkingMode <p>是否开启思考模式（需结合提供厂商具体使用）。注意：开启思考模式会占用输出token数。</p>
                     * 
                     */
                    bool GetThinkingMode() const;

                    /**
                     * 设置<p>是否开启思考模式（需结合提供厂商具体使用）。注意：开启思考模式会占用输出token数。</p>
                     * @param _thinkingMode <p>是否开启思考模式（需结合提供厂商具体使用）。注意：开启思考模式会占用输出token数。</p>
                     * 
                     */
                    void SetThinkingMode(const bool& _thinkingMode);

                    /**
                     * 判断参数 ThinkingMode 是否已赋值
                     * @return ThinkingMode 是否已赋值
                     * 
                     */
                    bool ThinkingModeHasBeenSet() const;

                    /**
                     * 获取<p>LLM 中缓存的对话轮次数量，范围 0~50。建议值[10, 30]。注意：指定轮次上下文的总 token 数不能超过 LLM 支持的上限。</p>
                     * @return MaxHistory <p>LLM 中缓存的对话轮次数量，范围 0~50。建议值[10, 30]。注意：指定轮次上下文的总 token 数不能超过 LLM 支持的上限。</p>
                     * 
                     */
                    uint64_t GetMaxHistory() const;

                    /**
                     * 设置<p>LLM 中缓存的对话轮次数量，范围 0~50。建议值[10, 30]。注意：指定轮次上下文的总 token 数不能超过 LLM 支持的上限。</p>
                     * @param _maxHistory <p>LLM 中缓存的对话轮次数量，范围 0~50。建议值[10, 30]。注意：指定轮次上下文的总 token 数不能超过 LLM 支持的上限。</p>
                     * 
                     */
                    void SetMaxHistory(const uint64_t& _maxHistory);

                    /**
                     * 判断参数 MaxHistory 是否已赋值
                     * @return MaxHistory 是否已赋值
                     * 
                     */
                    bool MaxHistoryHasBeenSet() const;

                    /**
                     * 获取<p>MCP 工具调用最大轮次，范围 0~50，默认 10。</p>
                     * @return MaxToolRound <p>MCP 工具调用最大轮次，范围 0~50，默认 10。</p>
                     * 
                     */
                    uint64_t GetMaxToolRound() const;

                    /**
                     * 设置<p>MCP 工具调用最大轮次，范围 0~50，默认 10。</p>
                     * @param _maxToolRound <p>MCP 工具调用最大轮次，范围 0~50，默认 10。</p>
                     * 
                     */
                    void SetMaxToolRound(const uint64_t& _maxToolRound);

                    /**
                     * 判断参数 MaxToolRound 是否已赋值
                     * @return MaxToolRound 是否已赋值
                     * 
                     */
                    bool MaxToolRoundHasBeenSet() const;

                    /**
                     * 获取<p>单次请求的超时事件（毫秒），范围 1000~60000，默认 10000。</p><p>单位：毫秒</p>
                     * @return Timeout <p>单次请求的超时事件（毫秒），范围 1000~60000，默认 10000。</p><p>单位：毫秒</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>单次请求的超时事件（毫秒），范围 1000~60000，默认 10000。</p><p>单位：毫秒</p>
                     * @param _timeout <p>单次请求的超时事件（毫秒），范围 1000~60000，默认 10000。</p><p>单位：毫秒</p>
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>采样温度，范围 0.0~2.0，默认 1.0。</p>
                     * @return Temperature <p>采样温度，范围 0.0~2.0，默认 1.0。</p>
                     * 
                     */
                    double GetTemperature() const;

                    /**
                     * 设置<p>采样温度，范围 0.0~2.0，默认 1.0。</p>
                     * @param _temperature <p>采样温度，范围 0.0~2.0，默认 1.0。</p>
                     * 
                     */
                    void SetTemperature(const double& _temperature);

                    /**
                     * 判断参数 Temperature 是否已赋值
                     * @return Temperature 是否已赋值
                     * 
                     */
                    bool TemperatureHasBeenSet() const;

                    /**
                     * 获取<p>采样概率，范围 0.0~1.0，默认 1.0。</p>
                     * @return TopP <p>采样概率，范围 0.0~1.0，默认 1.0。</p>
                     * 
                     */
                    double GetTopP() const;

                    /**
                     * 设置<p>采样概率，范围 0.0~1.0，默认 1.0。</p>
                     * @param _topP <p>采样概率，范围 0.0~1.0，默认 1.0。</p>
                     * 
                     */
                    void SetTopP(const double& _topP);

                    /**
                     * 判断参数 TopP 是否已赋值
                     * @return TopP 是否已赋值
                     * 
                     */
                    bool TopPHasBeenSet() const;

                    /**
                     * 获取<p>Mcp Server参数。</p>
                     * @return McpServer <p>Mcp Server参数。</p>
                     * 
                     */
                    VoiceConversationMcpServer GetMcpServer() const;

                    /**
                     * 设置<p>Mcp Server参数。</p>
                     * @param _mcpServer <p>Mcp Server参数。</p>
                     * 
                     */
                    void SetMcpServer(const VoiceConversationMcpServer& _mcpServer);

                    /**
                     * 判断参数 McpServer 是否已赋值
                     * @return McpServer 是否已赋值
                     * 
                     */
                    bool McpServerHasBeenSet() const;

                    /**
                     * 获取<p>自定义 HTTP 请求头。</p>
                     * @return CustomHeaders <p>自定义 HTTP 请求头。</p>
                     * 
                     */
                    std::vector<KeyValueItem> GetCustomHeaders() const;

                    /**
                     * 设置<p>自定义 HTTP 请求头。</p>
                     * @param _customHeaders <p>自定义 HTTP 请求头。</p>
                     * 
                     */
                    void SetCustomHeaders(const std::vector<KeyValueItem>& _customHeaders);

                    /**
                     * 判断参数 CustomHeaders 是否已赋值
                     * @return CustomHeaders 是否已赋值
                     * 
                     */
                    bool CustomHeadersHasBeenSet() const;

                    /**
                     * 获取<p>各厂商独有的扩展参数（如 DeepSeek 的<code>reasoning_effort</code>、混元的 <code>enable_enhancement</code> 等）。</p>
                     * @return CustomFields <p>各厂商独有的扩展参数（如 DeepSeek 的<code>reasoning_effort</code>、混元的 <code>enable_enhancement</code> 等）。</p>
                     * 
                     */
                    std::vector<KeyValueItem> GetCustomFields() const;

                    /**
                     * 设置<p>各厂商独有的扩展参数（如 DeepSeek 的<code>reasoning_effort</code>、混元的 <code>enable_enhancement</code> 等）。</p>
                     * @param _customFields <p>各厂商独有的扩展参数（如 DeepSeek 的<code>reasoning_effort</code>、混元的 <code>enable_enhancement</code> 等）。</p>
                     * 
                     */
                    void SetCustomFields(const std::vector<KeyValueItem>& _customFields);

                    /**
                     * 判断参数 CustomFields 是否已赋值
                     * @return CustomFields 是否已赋值
                     * 
                     */
                    bool CustomFieldsHasBeenSet() const;

                    /**
                     * 获取<p>初始历史消息，每项为 <code>{&quot;Role&quot;: &quot;user&quot;/&quot;assistant&quot;/&quot;system&quot;, &quot;Content&quot;: &quot;xxx&quot;}</code>这种格式。</p>
                     * @return HistoryMessages <p>初始历史消息，每项为 <code>{&quot;Role&quot;: &quot;user&quot;/&quot;assistant&quot;/&quot;system&quot;, &quot;Content&quot;: &quot;xxx&quot;}</code>这种格式。</p>
                     * 
                     */
                    std::vector<VoiceConversationHistoryMessage> GetHistoryMessages() const;

                    /**
                     * 设置<p>初始历史消息，每项为 <code>{&quot;Role&quot;: &quot;user&quot;/&quot;assistant&quot;/&quot;system&quot;, &quot;Content&quot;: &quot;xxx&quot;}</code>这种格式。</p>
                     * @param _historyMessages <p>初始历史消息，每项为 <code>{&quot;Role&quot;: &quot;user&quot;/&quot;assistant&quot;/&quot;system&quot;, &quot;Content&quot;: &quot;xxx&quot;}</code>这种格式。</p>
                     * 
                     */
                    void SetHistoryMessages(const std::vector<VoiceConversationHistoryMessage>& _historyMessages);

                    /**
                     * 判断参数 HistoryMessages 是否已赋值
                     * @return HistoryMessages 是否已赋值
                     * 
                     */
                    bool HistoryMessagesHasBeenSet() const;

                private:

                    /**
                     * <p>LLM 协议类型，如openai（OpenAI 兼容协议）。</p>
                     */
                    std::string m_lLMType;
                    bool m_lLMTypeHasBeenSet;

                    /**
                     * <p>模型名，如 gpt-4o-mini</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>OpenAI 协议兼容的 endpoint。</p>
                     */
                    std::string m_aPIUrl;
                    bool m_aPIUrlHasBeenSet;

                    /**
                     * <p>厂商 API Key。</p>
                     */
                    std::string m_aPIKey;
                    bool m_aPIKeyHasBeenSet;

                    /**
                     * <p>系统提示词。</p>
                     */
                    std::string m_systemPrompt;
                    bool m_systemPromptHasBeenSet;

                    /**
                     * <p>LLM 调用失败后，使用此文本生成 TTS音频。</p>
                     */
                    std::string m_failureMessage;
                    bool m_failureMessageHasBeenSet;

                    /**
                     * <p>单次回复最大 Token 数，0=不限制，默认值为0。注意：如果模型输出token数量大于设置的MaxTokens的值，会截断回复内容。</p>
                     */
                    uint64_t m_maxTokens;
                    bool m_maxTokensHasBeenSet;

                    /**
                     * <p>是否开启思考模式（需结合提供厂商具体使用）。注意：开启思考模式会占用输出token数。</p>
                     */
                    bool m_thinkingMode;
                    bool m_thinkingModeHasBeenSet;

                    /**
                     * <p>LLM 中缓存的对话轮次数量，范围 0~50。建议值[10, 30]。注意：指定轮次上下文的总 token 数不能超过 LLM 支持的上限。</p>
                     */
                    uint64_t m_maxHistory;
                    bool m_maxHistoryHasBeenSet;

                    /**
                     * <p>MCP 工具调用最大轮次，范围 0~50，默认 10。</p>
                     */
                    uint64_t m_maxToolRound;
                    bool m_maxToolRoundHasBeenSet;

                    /**
                     * <p>单次请求的超时事件（毫秒），范围 1000~60000，默认 10000。</p><p>单位：毫秒</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>采样温度，范围 0.0~2.0，默认 1.0。</p>
                     */
                    double m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * <p>采样概率，范围 0.0~1.0，默认 1.0。</p>
                     */
                    double m_topP;
                    bool m_topPHasBeenSet;

                    /**
                     * <p>Mcp Server参数。</p>
                     */
                    VoiceConversationMcpServer m_mcpServer;
                    bool m_mcpServerHasBeenSet;

                    /**
                     * <p>自定义 HTTP 请求头。</p>
                     */
                    std::vector<KeyValueItem> m_customHeaders;
                    bool m_customHeadersHasBeenSet;

                    /**
                     * <p>各厂商独有的扩展参数（如 DeepSeek 的<code>reasoning_effort</code>、混元的 <code>enable_enhancement</code> 等）。</p>
                     */
                    std::vector<KeyValueItem> m_customFields;
                    bool m_customFieldsHasBeenSet;

                    /**
                     * <p>初始历史消息，每项为 <code>{&quot;Role&quot;: &quot;user&quot;/&quot;assistant&quot;/&quot;system&quot;, &quot;Content&quot;: &quot;xxx&quot;}</code>这种格式。</p>
                     */
                    std::vector<VoiceConversationHistoryMessage> m_historyMessages;
                    bool m_historyMessagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONLLMCONFIG_H_
