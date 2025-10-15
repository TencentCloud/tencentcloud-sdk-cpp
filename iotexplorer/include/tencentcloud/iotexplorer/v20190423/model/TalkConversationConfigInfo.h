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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKCONVERSATIONCONFIGINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKCONVERSATIONCONFIGINFO_H_

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
                * TTS配置信息。
                */
                class TalkConversationConfigInfo : public AbstractModel
                {
                public:
                    TalkConversationConfigInfo();
                    ~TalkConversationConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取会话超时（秒）
                     * @return SessionTimeout 会话超时（秒）
                     * 
                     */
                    int64_t GetSessionTimeout() const;

                    /**
                     * 设置会话超时（秒）
                     * @param _sessionTimeout 会话超时（秒）
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

                private:

                    /**
                     * 会话超时（秒）
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKCONVERSATIONCONFIGINFO_H_
