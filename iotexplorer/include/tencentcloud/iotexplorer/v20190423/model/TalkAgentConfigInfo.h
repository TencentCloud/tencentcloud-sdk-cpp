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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKAGENTCONFIGINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKAGENTCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkIdleDetectionConfigInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 智能体配置信息。
                */
                class TalkAgentConfigInfo : public AbstractModel
                {
                public:
                    TalkAgentConfigInfo();
                    ~TalkAgentConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取会话超时（秒），指连接会话的时间，例如30秒是指会话在30秒后断开
                     * @return SessionTimeout 会话超时（秒），指连接会话的时间，例如30秒是指会话在30秒后断开
                     * 
                     */
                    int64_t GetSessionTimeout() const;

                    /**
                     * 设置会话超时（秒），指连接会话的时间，例如30秒是指会话在30秒后断开
                     * @param _sessionTimeout 会话超时（秒），指连接会话的时间，例如30秒是指会话在30秒后断开
                     * 
                     */
                    void SetSessionTimeout(const int64_t& _sessionTimeout);

                    /**
                     * 判断参数 SessionTimeout 是否已赋值
                     * @return SessionTimeout 是否已赋值
                     * 
                     */
                    bool SessionTimeoutHasBeenSet() const;

                    /**
                     * 获取允许打断
                     * @return InterruptionEnabled 允许打断
                     * 
                     */
                    bool GetInterruptionEnabled() const;

                    /**
                     * 设置允许打断
                     * @param _interruptionEnabled 允许打断
                     * 
                     */
                    void SetInterruptionEnabled(const bool& _interruptionEnabled);

                    /**
                     * 判断参数 InterruptionEnabled 是否已赋值
                     * @return InterruptionEnabled 是否已赋值
                     * 
                     */
                    bool InterruptionEnabledHasBeenSet() const;

                    /**
                     * 获取最大上下文
                     * @return MaxContextTokens 最大上下文
                     * 
                     */
                    int64_t GetMaxContextTokens() const;

                    /**
                     * 设置最大上下文
                     * @param _maxContextTokens 最大上下文
                     * 
                     */
                    void SetMaxContextTokens(const int64_t& _maxContextTokens);

                    /**
                     * 判断参数 MaxContextTokens 是否已赋值
                     * @return MaxContextTokens 是否已赋值
                     * 
                     */
                    bool MaxContextTokensHasBeenSet() const;

                    /**
                     * 获取空闲检测配置
                     * @return IdleDetection 空闲检测配置
                     * 
                     */
                    TalkIdleDetectionConfigInfo GetIdleDetection() const;

                    /**
                     * 设置空闲检测配置
                     * @param _idleDetection 空闲检测配置
                     * 
                     */
                    void SetIdleDetection(const TalkIdleDetectionConfigInfo& _idleDetection);

                    /**
                     * 判断参数 IdleDetection 是否已赋值
                     * @return IdleDetection 是否已赋值
                     * 
                     */
                    bool IdleDetectionHasBeenSet() const;

                    /**
                     * 获取是否启用情绪识别
                     * @return EmotionEnabled 是否启用情绪识别
                     * 
                     */
                    bool GetEmotionEnabled() const;

                    /**
                     * 设置是否启用情绪识别
                     * @param _emotionEnabled 是否启用情绪识别
                     * 
                     */
                    void SetEmotionEnabled(const bool& _emotionEnabled);

                    /**
                     * 判断参数 EmotionEnabled 是否已赋值
                     * @return EmotionEnabled 是否已赋值
                     * 
                     */
                    bool EmotionEnabledHasBeenSet() const;

                    /**
                     * 获取是否启用语义vad
                     * @return SemanticVADEnabled 是否启用语义vad
                     * 
                     */
                    bool GetSemanticVADEnabled() const;

                    /**
                     * 设置是否启用语义vad
                     * @param _semanticVADEnabled 是否启用语义vad
                     * 
                     */
                    void SetSemanticVADEnabled(const bool& _semanticVADEnabled);

                    /**
                     * 判断参数 SemanticVADEnabled 是否已赋值
                     * @return SemanticVADEnabled 是否已赋值
                     * 
                     */
                    bool SemanticVADEnabledHasBeenSet() const;

                    /**
                     * 获取语义vad灵敏度， 1-慢 2-适中 3-快
                     * @return SemanticVADSensitivity 语义vad灵敏度， 1-慢 2-适中 3-快
                     * 
                     */
                    int64_t GetSemanticVADSensitivity() const;

                    /**
                     * 设置语义vad灵敏度， 1-慢 2-适中 3-快
                     * @param _semanticVADSensitivity 语义vad灵敏度， 1-慢 2-适中 3-快
                     * 
                     */
                    void SetSemanticVADSensitivity(const int64_t& _semanticVADSensitivity);

                    /**
                     * 判断参数 SemanticVADSensitivity 是否已赋值
                     * @return SemanticVADSensitivity 是否已赋值
                     * 
                     */
                    bool SemanticVADSensitivityHasBeenSet() const;

                    /**
                     * 获取VAD 静默检测时间， 当开启语义vad此配置失效
                     * @return SilenceTime VAD 静默检测时间， 当开启语义vad此配置失效
                     * 
                     */
                    int64_t GetSilenceTime() const;

                    /**
                     * 设置VAD 静默检测时间， 当开启语义vad此配置失效
                     * @param _silenceTime VAD 静默检测时间， 当开启语义vad此配置失效
                     * 
                     */
                    void SetSilenceTime(const int64_t& _silenceTime);

                    /**
                     * 判断参数 SilenceTime 是否已赋值
                     * @return SilenceTime 是否已赋值
                     * 
                     */
                    bool SilenceTimeHasBeenSet() const;

                    /**
                     * 获取是否启用噪声过滤
                     * @return NoiseFilterEnabled 是否启用噪声过滤
                     * 
                     */
                    bool GetNoiseFilterEnabled() const;

                    /**
                     * 设置是否启用噪声过滤
                     * @param _noiseFilterEnabled 是否启用噪声过滤
                     * 
                     */
                    void SetNoiseFilterEnabled(const bool& _noiseFilterEnabled);

                    /**
                     * 判断参数 NoiseFilterEnabled 是否已赋值
                     * @return NoiseFilterEnabled 是否已赋值
                     * 
                     */
                    bool NoiseFilterEnabledHasBeenSet() const;

                    /**
                     * 获取是否开启长记忆，默认开启
                     * @return LongTermMemoryEnabled 是否开启长记忆，默认开启
                     * 
                     */
                    bool GetLongTermMemoryEnabled() const;

                    /**
                     * 设置是否开启长记忆，默认开启
                     * @param _longTermMemoryEnabled 是否开启长记忆，默认开启
                     * 
                     */
                    void SetLongTermMemoryEnabled(const bool& _longTermMemoryEnabled);

                    /**
                     * 判断参数 LongTermMemoryEnabled 是否已赋值
                     * @return LongTermMemoryEnabled 是否已赋值
                     * 
                     */
                    bool LongTermMemoryEnabledHasBeenSet() const;

                    /**
                     * 获取系统提示词，仅当未配置LLMConfig时使用
                     * @return SystemPrompt 系统提示词，仅当未配置LLMConfig时使用
                     * 
                     */
                    std::string GetSystemPrompt() const;

                    /**
                     * 设置系统提示词，仅当未配置LLMConfig时使用
                     * @param _systemPrompt 系统提示词，仅当未配置LLMConfig时使用
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
                     * 获取开机问候语，如果未配置默认不开启
                     * @return GreetingMessage 开机问候语，如果未配置默认不开启
                     * 
                     */
                    std::string GetGreetingMessage() const;

                    /**
                     * 设置开机问候语，如果未配置默认不开启
                     * @param _greetingMessage 开机问候语，如果未配置默认不开启
                     * 
                     */
                    void SetGreetingMessage(const std::string& _greetingMessage);

                    /**
                     * 判断参数 GreetingMessage 是否已赋值
                     * @return GreetingMessage 是否已赋值
                     * 
                     */
                    bool GreetingMessageHasBeenSet() const;

                    /**
                     * 获取系统默认音色，当配置复刻音色时，默认值为200000000
                     * @return DefaultVoiceType 系统默认音色，当配置复刻音色时，默认值为200000000
                     * 
                     */
                    int64_t GetDefaultVoiceType() const;

                    /**
                     * 设置系统默认音色，当配置复刻音色时，默认值为200000000
                     * @param _defaultVoiceType 系统默认音色，当配置复刻音色时，默认值为200000000
                     * 
                     */
                    void SetDefaultVoiceType(const int64_t& _defaultVoiceType);

                    /**
                     * 判断参数 DefaultVoiceType 是否已赋值
                     * @return DefaultVoiceType 是否已赋值
                     * 
                     */
                    bool DefaultVoiceTypeHasBeenSet() const;

                    /**
                     * 获取复刻音色
                     * @return FastVoiceType 复刻音色
                     * 
                     */
                    std::string GetFastVoiceType() const;

                    /**
                     * 设置复刻音色
                     * @param _fastVoiceType 复刻音色
                     * 
                     */
                    void SetFastVoiceType(const std::string& _fastVoiceType);

                    /**
                     * 判断参数 FastVoiceType 是否已赋值
                     * @return FastVoiceType 是否已赋值
                     * 
                     */
                    bool FastVoiceTypeHasBeenSet() const;

                private:

                    /**
                     * 会话超时（秒），指连接会话的时间，例如30秒是指会话在30秒后断开
                     */
                    int64_t m_sessionTimeout;
                    bool m_sessionTimeoutHasBeenSet;

                    /**
                     * 允许打断
                     */
                    bool m_interruptionEnabled;
                    bool m_interruptionEnabledHasBeenSet;

                    /**
                     * 最大上下文
                     */
                    int64_t m_maxContextTokens;
                    bool m_maxContextTokensHasBeenSet;

                    /**
                     * 空闲检测配置
                     */
                    TalkIdleDetectionConfigInfo m_idleDetection;
                    bool m_idleDetectionHasBeenSet;

                    /**
                     * 是否启用情绪识别
                     */
                    bool m_emotionEnabled;
                    bool m_emotionEnabledHasBeenSet;

                    /**
                     * 是否启用语义vad
                     */
                    bool m_semanticVADEnabled;
                    bool m_semanticVADEnabledHasBeenSet;

                    /**
                     * 语义vad灵敏度， 1-慢 2-适中 3-快
                     */
                    int64_t m_semanticVADSensitivity;
                    bool m_semanticVADSensitivityHasBeenSet;

                    /**
                     * VAD 静默检测时间， 当开启语义vad此配置失效
                     */
                    int64_t m_silenceTime;
                    bool m_silenceTimeHasBeenSet;

                    /**
                     * 是否启用噪声过滤
                     */
                    bool m_noiseFilterEnabled;
                    bool m_noiseFilterEnabledHasBeenSet;

                    /**
                     * 是否开启长记忆，默认开启
                     */
                    bool m_longTermMemoryEnabled;
                    bool m_longTermMemoryEnabledHasBeenSet;

                    /**
                     * 系统提示词，仅当未配置LLMConfig时使用
                     */
                    std::string m_systemPrompt;
                    bool m_systemPromptHasBeenSet;

                    /**
                     * 开机问候语，如果未配置默认不开启
                     */
                    std::string m_greetingMessage;
                    bool m_greetingMessageHasBeenSet;

                    /**
                     * 系统默认音色，当配置复刻音色时，默认值为200000000
                     */
                    int64_t m_defaultVoiceType;
                    bool m_defaultVoiceTypeHasBeenSet;

                    /**
                     * 复刻音色
                     */
                    std::string m_fastVoiceType;
                    bool m_fastVoiceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKAGENTCONFIGINFO_H_
