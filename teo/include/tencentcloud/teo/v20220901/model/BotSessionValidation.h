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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTSESSIONVALIDATION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTSESSIONVALIDATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/MaxNewSessionTriggerConfig.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>
#include <tencentcloud/teo/v20220901/model/SessionRateControl.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Cookie 校验和会话跟踪行为具体配置。
                */
                class BotSessionValidation : public AbstractModel
                {
                public:
                    BotSessionValidation();
                    ~BotSessionValidation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否更新 Cookie 并校验。取值有：<li>on：更新 Cookie 并校验；</li><li>off：仅校验。</li>
                     * @return IssueNewBotSessionCookie 是否更新 Cookie 并校验。取值有：<li>on：更新 Cookie 并校验；</li><li>off：仅校验。</li>
                     * 
                     */
                    std::string GetIssueNewBotSessionCookie() const;

                    /**
                     * 设置是否更新 Cookie 并校验。取值有：<li>on：更新 Cookie 并校验；</li><li>off：仅校验。</li>
                     * @param _issueNewBotSessionCookie 是否更新 Cookie 并校验。取值有：<li>on：更新 Cookie 并校验；</li><li>off：仅校验。</li>
                     * 
                     */
                    void SetIssueNewBotSessionCookie(const std::string& _issueNewBotSessionCookie);

                    /**
                     * 判断参数 IssueNewBotSessionCookie 是否已赋值
                     * @return IssueNewBotSessionCookie 是否已赋值
                     * 
                     */
                    bool IssueNewBotSessionCookieHasBeenSet() const;

                    /**
                     * 获取更新 Cookie 并校验时的触发阈值，仅当 IssueNewBotSessionCookie 为 on 时有效。
                     * @return MaxNewSessionTriggerConfig 更新 Cookie 并校验时的触发阈值，仅当 IssueNewBotSessionCookie 为 on 时有效。
                     * 
                     */
                    MaxNewSessionTriggerConfig GetMaxNewSessionTriggerConfig() const;

                    /**
                     * 设置更新 Cookie 并校验时的触发阈值，仅当 IssueNewBotSessionCookie 为 on 时有效。
                     * @param _maxNewSessionTriggerConfig 更新 Cookie 并校验时的触发阈值，仅当 IssueNewBotSessionCookie 为 on 时有效。
                     * 
                     */
                    void SetMaxNewSessionTriggerConfig(const MaxNewSessionTriggerConfig& _maxNewSessionTriggerConfig);

                    /**
                     * 判断参数 MaxNewSessionTriggerConfig 是否已赋值
                     * @return MaxNewSessionTriggerConfig 是否已赋值
                     * 
                     */
                    bool MaxNewSessionTriggerConfigHasBeenSet() const;

                    /**
                     * 获取未携带 Cookie 或 Cookie 已过期的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * @return SessionExpiredAction 未携带 Cookie 或 Cookie 已过期的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * 
                     */
                    SecurityAction GetSessionExpiredAction() const;

                    /**
                     * 设置未携带 Cookie 或 Cookie 已过期的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * @param _sessionExpiredAction 未携带 Cookie 或 Cookie 已过期的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * 
                     */
                    void SetSessionExpiredAction(const SecurityAction& _sessionExpiredAction);

                    /**
                     * 判断参数 SessionExpiredAction 是否已赋值
                     * @return SessionExpiredAction 是否已赋值
                     * 
                     */
                    bool SessionExpiredActionHasBeenSet() const;

                    /**
                     * 获取不合法 Cookie 的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * @return SessionInvalidAction 不合法 Cookie 的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * 
                     */
                    SecurityAction GetSessionInvalidAction() const;

                    /**
                     * 设置不合法 Cookie 的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * @param _sessionInvalidAction 不合法 Cookie 的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     * 
                     */
                    void SetSessionInvalidAction(const SecurityAction& _sessionInvalidAction);

                    /**
                     * 判断参数 SessionInvalidAction 是否已赋值
                     * @return SessionInvalidAction 是否已赋值
                     * 
                     */
                    bool SessionInvalidActionHasBeenSet() const;

                    /**
                     * 获取会话速率和周期特征校验的具体配置。
                     * @return SessionRateControl 会话速率和周期特征校验的具体配置。
                     * 
                     */
                    SessionRateControl GetSessionRateControl() const;

                    /**
                     * 设置会话速率和周期特征校验的具体配置。
                     * @param _sessionRateControl 会话速率和周期特征校验的具体配置。
                     * 
                     */
                    void SetSessionRateControl(const SessionRateControl& _sessionRateControl);

                    /**
                     * 判断参数 SessionRateControl 是否已赋值
                     * @return SessionRateControl 是否已赋值
                     * 
                     */
                    bool SessionRateControlHasBeenSet() const;

                private:

                    /**
                     * 是否更新 Cookie 并校验。取值有：<li>on：更新 Cookie 并校验；</li><li>off：仅校验。</li>
                     */
                    std::string m_issueNewBotSessionCookie;
                    bool m_issueNewBotSessionCookieHasBeenSet;

                    /**
                     * 更新 Cookie 并校验时的触发阈值，仅当 IssueNewBotSessionCookie 为 on 时有效。
                     */
                    MaxNewSessionTriggerConfig m_maxNewSessionTriggerConfig;
                    bool m_maxNewSessionTriggerConfigHasBeenSet;

                    /**
                     * 未携带 Cookie 或 Cookie 已过期的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     */
                    SecurityAction m_sessionExpiredAction;
                    bool m_sessionExpiredActionHasBeenSet;

                    /**
                     * 不合法 Cookie 的执行动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截，其中 DenyActionParameters 中支持 Stall 配置；</li><li>Monitor：观察；</li><li>Allow：等待后响应，其中 AllowActionParameters 需要 MinDelayTime 和 MaxDelayTime 配置。</li>
                     */
                    SecurityAction m_sessionInvalidAction;
                    bool m_sessionInvalidActionHasBeenSet;

                    /**
                     * 会话速率和周期特征校验的具体配置。
                     */
                    SessionRateControl m_sessionRateControl;
                    bool m_sessionRateControlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTSESSIONVALIDATION_H_
