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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTBEHAVIORDETECTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTBEHAVIORDETECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 客户端行为校验
                */
                class ClientBehaviorDetection : public AbstractModel
                {
                public:
                    ClientBehaviorDetection();
                    ~ClientBehaviorDetection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作量证明校验强度。取值有：<li>low：低；</li><li>medium：中；</li><li>high：高。</li>
                     * @return CryptoChallengeIntensity 工作量证明校验强度。取值有：<li>low：低；</li><li>medium：中；</li><li>high：高。</li>
                     * 
                     */
                    std::string GetCryptoChallengeIntensity() const;

                    /**
                     * 设置工作量证明校验强度。取值有：<li>low：低；</li><li>medium：中；</li><li>high：高。</li>
                     * @param _cryptoChallengeIntensity 工作量证明校验强度。取值有：<li>low：低；</li><li>medium：中；</li><li>high：高。</li>
                     * 
                     */
                    void SetCryptoChallengeIntensity(const std::string& _cryptoChallengeIntensity);

                    /**
                     * 判断参数 CryptoChallengeIntensity 是否已赋值
                     * @return CryptoChallengeIntensity 是否已赋值
                     * 
                     */
                    bool CryptoChallengeIntensityHasBeenSet() const;

                    /**
                     * 获取客户端行为校验的执行方式。取值有：<li>0ms：立即执行；</li><li>100ms：延迟 100ms 执行；</li><li>200ms：延迟 200ms 执行；</li><li>300ms：延迟 300ms 执行；</li><li>400ms：延迟 400ms 执行；</li><li>500ms：延迟 500ms 执行；</li><li>600ms：延迟 600ms 执行；</li><li>700ms：延迟 700ms 执行；</li><li>800ms：延迟 800ms 执行；</li><li>900ms：延迟 900ms 执行；</li><li>1000ms：延迟 1000ms 执行。</li> 
                     * @return CryptoChallengeDelayBefore 客户端行为校验的执行方式。取值有：<li>0ms：立即执行；</li><li>100ms：延迟 100ms 执行；</li><li>200ms：延迟 200ms 执行；</li><li>300ms：延迟 300ms 执行；</li><li>400ms：延迟 400ms 执行；</li><li>500ms：延迟 500ms 执行；</li><li>600ms：延迟 600ms 执行；</li><li>700ms：延迟 700ms 执行；</li><li>800ms：延迟 800ms 执行；</li><li>900ms：延迟 900ms 执行；</li><li>1000ms：延迟 1000ms 执行。</li> 
                     * 
                     */
                    std::string GetCryptoChallengeDelayBefore() const;

                    /**
                     * 设置客户端行为校验的执行方式。取值有：<li>0ms：立即执行；</li><li>100ms：延迟 100ms 执行；</li><li>200ms：延迟 200ms 执行；</li><li>300ms：延迟 300ms 执行；</li><li>400ms：延迟 400ms 执行；</li><li>500ms：延迟 500ms 执行；</li><li>600ms：延迟 600ms 执行；</li><li>700ms：延迟 700ms 执行；</li><li>800ms：延迟 800ms 执行；</li><li>900ms：延迟 900ms 执行；</li><li>1000ms：延迟 1000ms 执行。</li> 
                     * @param _cryptoChallengeDelayBefore 客户端行为校验的执行方式。取值有：<li>0ms：立即执行；</li><li>100ms：延迟 100ms 执行；</li><li>200ms：延迟 200ms 执行；</li><li>300ms：延迟 300ms 执行；</li><li>400ms：延迟 400ms 执行；</li><li>500ms：延迟 500ms 执行；</li><li>600ms：延迟 600ms 执行；</li><li>700ms：延迟 700ms 执行；</li><li>800ms：延迟 800ms 执行；</li><li>900ms：延迟 900ms 执行；</li><li>1000ms：延迟 1000ms 执行。</li> 
                     * 
                     */
                    void SetCryptoChallengeDelayBefore(const std::string& _cryptoChallengeDelayBefore);

                    /**
                     * 判断参数 CryptoChallengeDelayBefore 是否已赋值
                     * @return CryptoChallengeDelayBefore 是否已赋值
                     * 
                     */
                    bool CryptoChallengeDelayBeforeHasBeenSet() const;

                    /**
                     * 获取触发阈值统计的时间窗口，取值有：<li>5s：5 秒内；</li><li>10s：10 秒内；</li><li>15s：15 秒内；</li><li>30s：30 秒内；</li><li>60s：60 秒内；</li><li>5m：5 分钟内；</li><li>10m：10 分钟内；</li><li>30m：30 分钟内；</li><li>60m：60 分钟内。</li> 
                     * @return MaxChallengeCountInterval 触发阈值统计的时间窗口，取值有：<li>5s：5 秒内；</li><li>10s：10 秒内；</li><li>15s：15 秒内；</li><li>30s：30 秒内；</li><li>60s：60 秒内；</li><li>5m：5 分钟内；</li><li>10m：10 分钟内；</li><li>30m：30 分钟内；</li><li>60m：60 分钟内。</li> 
                     * 
                     */
                    std::string GetMaxChallengeCountInterval() const;

                    /**
                     * 设置触发阈值统计的时间窗口，取值有：<li>5s：5 秒内；</li><li>10s：10 秒内；</li><li>15s：15 秒内；</li><li>30s：30 秒内；</li><li>60s：60 秒内；</li><li>5m：5 分钟内；</li><li>10m：10 分钟内；</li><li>30m：30 分钟内；</li><li>60m：60 分钟内。</li> 
                     * @param _maxChallengeCountInterval 触发阈值统计的时间窗口，取值有：<li>5s：5 秒内；</li><li>10s：10 秒内；</li><li>15s：15 秒内；</li><li>30s：30 秒内；</li><li>60s：60 秒内；</li><li>5m：5 分钟内；</li><li>10m：10 分钟内；</li><li>30m：30 分钟内；</li><li>60m：60 分钟内。</li> 
                     * 
                     */
                    void SetMaxChallengeCountInterval(const std::string& _maxChallengeCountInterval);

                    /**
                     * 判断参数 MaxChallengeCountInterval 是否已赋值
                     * @return MaxChallengeCountInterval 是否已赋值
                     * 
                     */
                    bool MaxChallengeCountIntervalHasBeenSet() const;

                    /**
                     * 获取触发阈值统计的累计次数，取值范围 1 ~ 100000000。
                     * @return MaxChallengeCountThreshold 触发阈值统计的累计次数，取值范围 1 ~ 100000000。
                     * 
                     */
                    int64_t GetMaxChallengeCountThreshold() const;

                    /**
                     * 设置触发阈值统计的累计次数，取值范围 1 ~ 100000000。
                     * @param _maxChallengeCountThreshold 触发阈值统计的累计次数，取值范围 1 ~ 100000000。
                     * 
                     */
                    void SetMaxChallengeCountThreshold(const int64_t& _maxChallengeCountThreshold);

                    /**
                     * 判断参数 MaxChallengeCountThreshold 是否已赋值
                     * @return MaxChallengeCountThreshold 是否已赋值
                     * 
                     */
                    bool MaxChallengeCountThresholdHasBeenSet() const;

                    /**
                     * 获取客户端未启用 JS（未完成检测）时的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * @return ChallengeNotFinishedAction 客户端未启用 JS（未完成检测）时的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * 
                     */
                    SecurityAction GetChallengeNotFinishedAction() const;

                    /**
                     * 设置客户端未启用 JS（未完成检测）时的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * @param _challengeNotFinishedAction 客户端未启用 JS（未完成检测）时的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * 
                     */
                    void SetChallengeNotFinishedAction(const SecurityAction& _challengeNotFinishedAction);

                    /**
                     * 判断参数 ChallengeNotFinishedAction 是否已赋值
                     * @return ChallengeNotFinishedAction 是否已赋值
                     * 
                     */
                    bool ChallengeNotFinishedActionHasBeenSet() const;

                    /**
                     * 获取客户端检测超时的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * @return ChallengeTimeoutAction 客户端检测超时的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * 
                     */
                    SecurityAction GetChallengeTimeoutAction() const;

                    /**
                     * 设置客户端检测超时的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * @param _challengeTimeoutAction 客户端检测超时的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * 
                     */
                    void SetChallengeTimeoutAction(const SecurityAction& _challengeTimeoutAction);

                    /**
                     * 判断参数 ChallengeTimeoutAction 是否已赋值
                     * @return ChallengeTimeoutAction 是否已赋值
                     * 
                     */
                    bool ChallengeTimeoutActionHasBeenSet() const;

                    /**
                     * 获取Bot 客户端的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * @return BotClientAction Bot 客户端的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * 
                     */
                    SecurityAction GetBotClientAction() const;

                    /**
                     * 设置Bot 客户端的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * @param _botClientAction Bot 客户端的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * 
                     */
                    void SetBotClientAction(const SecurityAction& _botClientAction);

                    /**
                     * 判断参数 BotClientAction 是否已赋值
                     * @return BotClientAction 是否已赋值
                     * 
                     */
                    bool BotClientActionHasBeenSet() const;

                private:

                    /**
                     * 工作量证明校验强度。取值有：<li>low：低；</li><li>medium：中；</li><li>high：高。</li>
                     */
                    std::string m_cryptoChallengeIntensity;
                    bool m_cryptoChallengeIntensityHasBeenSet;

                    /**
                     * 客户端行为校验的执行方式。取值有：<li>0ms：立即执行；</li><li>100ms：延迟 100ms 执行；</li><li>200ms：延迟 200ms 执行；</li><li>300ms：延迟 300ms 执行；</li><li>400ms：延迟 400ms 执行；</li><li>500ms：延迟 500ms 执行；</li><li>600ms：延迟 600ms 执行；</li><li>700ms：延迟 700ms 执行；</li><li>800ms：延迟 800ms 执行；</li><li>900ms：延迟 900ms 执行；</li><li>1000ms：延迟 1000ms 执行。</li> 
                     */
                    std::string m_cryptoChallengeDelayBefore;
                    bool m_cryptoChallengeDelayBeforeHasBeenSet;

                    /**
                     * 触发阈值统计的时间窗口，取值有：<li>5s：5 秒内；</li><li>10s：10 秒内；</li><li>15s：15 秒内；</li><li>30s：30 秒内；</li><li>60s：60 秒内；</li><li>5m：5 分钟内；</li><li>10m：10 分钟内；</li><li>30m：30 分钟内；</li><li>60m：60 分钟内。</li> 
                     */
                    std::string m_maxChallengeCountInterval;
                    bool m_maxChallengeCountIntervalHasBeenSet;

                    /**
                     * 触发阈值统计的累计次数，取值范围 1 ~ 100000000。
                     */
                    int64_t m_maxChallengeCountThreshold;
                    bool m_maxChallengeCountThresholdHasBeenSet;

                    /**
                     * 客户端未启用 JS（未完成检测）时的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     */
                    SecurityAction m_challengeNotFinishedAction;
                    bool m_challengeNotFinishedActionHasBeenSet;

                    /**
                     * 客户端检测超时的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     */
                    SecurityAction m_challengeTimeoutAction;
                    bool m_challengeTimeoutActionHasBeenSet;

                    /**
                     * Bot 客户端的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     */
                    SecurityAction m_botClientAction;
                    bool m_botClientActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTBEHAVIORDETECTION_H_
