/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SLOWATTACKDEFENSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SLOWATTACKDEFENSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>
#include <tencentcloud/teo/v20220901/model/MinimalRequestBodyTransferRate.h>
#include <tencentcloud/teo/v20220901/model/RequestBodyTransferTimeout.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 慢速攻击防护的具体配置。
                */
                class SlowAttackDefense : public AbstractModel
                {
                public:
                    SlowAttackDefense();
                    ~SlowAttackDefense() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取慢速攻击防护是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * @return Enabled 慢速攻击防护是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置慢速攻击防护是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * @param _enabled 慢速攻击防护是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取慢速攻击防护的处置方式，当 Enabled 为 on 时，此字段必填。SecurityAction 的 Name 取值支持：<li>Monitor：观察；</li><li>Deny：拦截；</li>
                     * @return Action 慢速攻击防护的处置方式，当 Enabled 为 on 时，此字段必填。SecurityAction 的 Name 取值支持：<li>Monitor：观察；</li><li>Deny：拦截；</li>
                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置慢速攻击防护的处置方式，当 Enabled 为 on 时，此字段必填。SecurityAction 的 Name 取值支持：<li>Monitor：观察；</li><li>Deny：拦截；</li>
                     * @param _action 慢速攻击防护的处置方式，当 Enabled 为 on 时，此字段必填。SecurityAction 的 Name 取值支持：<li>Monitor：观察；</li><li>Deny：拦截；</li>
                     * 
                     */
                    void SetAction(const SecurityAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取正文传输最小速率阈值的具体配置，当 Enabled 为 on 时，此字段必填。
                     * @return MinimalRequestBodyTransferRate 正文传输最小速率阈值的具体配置，当 Enabled 为 on 时，此字段必填。
                     * 
                     */
                    MinimalRequestBodyTransferRate GetMinimalRequestBodyTransferRate() const;

                    /**
                     * 设置正文传输最小速率阈值的具体配置，当 Enabled 为 on 时，此字段必填。
                     * @param _minimalRequestBodyTransferRate 正文传输最小速率阈值的具体配置，当 Enabled 为 on 时，此字段必填。
                     * 
                     */
                    void SetMinimalRequestBodyTransferRate(const MinimalRequestBodyTransferRate& _minimalRequestBodyTransferRate);

                    /**
                     * 判断参数 MinimalRequestBodyTransferRate 是否已赋值
                     * @return MinimalRequestBodyTransferRate 是否已赋值
                     * 
                     */
                    bool MinimalRequestBodyTransferRateHasBeenSet() const;

                    /**
                     * 获取正文传输超时时长的具体配置，当 Enabled 为 on 时，此字段必填。
                     * @return RequestBodyTransferTimeout 正文传输超时时长的具体配置，当 Enabled 为 on 时，此字段必填。
                     * 
                     */
                    RequestBodyTransferTimeout GetRequestBodyTransferTimeout() const;

                    /**
                     * 设置正文传输超时时长的具体配置，当 Enabled 为 on 时，此字段必填。
                     * @param _requestBodyTransferTimeout 正文传输超时时长的具体配置，当 Enabled 为 on 时，此字段必填。
                     * 
                     */
                    void SetRequestBodyTransferTimeout(const RequestBodyTransferTimeout& _requestBodyTransferTimeout);

                    /**
                     * 判断参数 RequestBodyTransferTimeout 是否已赋值
                     * @return RequestBodyTransferTimeout 是否已赋值
                     * 
                     */
                    bool RequestBodyTransferTimeoutHasBeenSet() const;

                private:

                    /**
                     * 慢速攻击防护是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 慢速攻击防护的处置方式，当 Enabled 为 on 时，此字段必填。SecurityAction 的 Name 取值支持：<li>Monitor：观察；</li><li>Deny：拦截；</li>
                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 正文传输最小速率阈值的具体配置，当 Enabled 为 on 时，此字段必填。
                     */
                    MinimalRequestBodyTransferRate m_minimalRequestBodyTransferRate;
                    bool m_minimalRequestBodyTransferRateHasBeenSet;

                    /**
                     * 正文传输超时时长的具体配置，当 Enabled 为 on 时，此字段必填。
                     */
                    RequestBodyTransferTimeout m_requestBodyTransferTimeout;
                    bool m_requestBodyTransferTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SLOWATTACKDEFENSE_H_
