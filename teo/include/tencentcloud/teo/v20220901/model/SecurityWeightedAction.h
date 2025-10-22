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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYWEIGHTEDACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYWEIGHTEDACTION_H_

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
                * 按权重分配的 SecurityAction。
                */
                class SecurityWeightedAction : public AbstractModel
                {
                public:
                    SecurityWeightedAction();
                    ~SecurityWeightedAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bot 自定义规则的处置方式。取值有：<li>Allow：放行，其中 AllowActionParameters 支持 MinDelayTime 和 MaxDelayTime 配置；</li><li>Deny：拦截，其中 DenyActionParameters 中支持 BlockIp、ReturnCustomPage 和 Stall 配置；</li><li>Monitor：观察；</li><li>Challenge：挑战，其中 ChallengeActionParameters.ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Redirect：重定向至URL。</li>
                     * @return SecurityAction Bot 自定义规则的处置方式。取值有：<li>Allow：放行，其中 AllowActionParameters 支持 MinDelayTime 和 MaxDelayTime 配置；</li><li>Deny：拦截，其中 DenyActionParameters 中支持 BlockIp、ReturnCustomPage 和 Stall 配置；</li><li>Monitor：观察；</li><li>Challenge：挑战，其中 ChallengeActionParameters.ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Redirect：重定向至URL。</li>
                     * 
                     */
                    SecurityAction GetSecurityAction() const;

                    /**
                     * 设置Bot 自定义规则的处置方式。取值有：<li>Allow：放行，其中 AllowActionParameters 支持 MinDelayTime 和 MaxDelayTime 配置；</li><li>Deny：拦截，其中 DenyActionParameters 中支持 BlockIp、ReturnCustomPage 和 Stall 配置；</li><li>Monitor：观察；</li><li>Challenge：挑战，其中 ChallengeActionParameters.ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Redirect：重定向至URL。</li>
                     * @param _securityAction Bot 自定义规则的处置方式。取值有：<li>Allow：放行，其中 AllowActionParameters 支持 MinDelayTime 和 MaxDelayTime 配置；</li><li>Deny：拦截，其中 DenyActionParameters 中支持 BlockIp、ReturnCustomPage 和 Stall 配置；</li><li>Monitor：观察；</li><li>Challenge：挑战，其中 ChallengeActionParameters.ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Redirect：重定向至URL。</li>
                     * 
                     */
                    void SetSecurityAction(const SecurityAction& _securityAction);

                    /**
                     * 判断参数 SecurityAction 是否已赋值
                     * @return SecurityAction 是否已赋值
                     * 
                     */
                    bool SecurityActionHasBeenSet() const;

                    /**
                     * 获取当前 SecurityAction 的权重，仅支持 10 ~ 100 且必须为 10 的倍数，其中 Weight 参数全部相加须等于 100。
                     * @return Weight 当前 SecurityAction 的权重，仅支持 10 ~ 100 且必须为 10 的倍数，其中 Weight 参数全部相加须等于 100。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置当前 SecurityAction 的权重，仅支持 10 ~ 100 且必须为 10 的倍数，其中 Weight 参数全部相加须等于 100。
                     * @param _weight 当前 SecurityAction 的权重，仅支持 10 ~ 100 且必须为 10 的倍数，其中 Weight 参数全部相加须等于 100。
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * Bot 自定义规则的处置方式。取值有：<li>Allow：放行，其中 AllowActionParameters 支持 MinDelayTime 和 MaxDelayTime 配置；</li><li>Deny：拦截，其中 DenyActionParameters 中支持 BlockIp、ReturnCustomPage 和 Stall 配置；</li><li>Monitor：观察；</li><li>Challenge：挑战，其中 ChallengeActionParameters.ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Redirect：重定向至URL。</li>
                     */
                    SecurityAction m_securityAction;
                    bool m_securityActionHasBeenSet;

                    /**
                     * 当前 SecurityAction 的权重，仅支持 10 ~ 100 且必须为 10 的倍数，其中 Weight 参数全部相加须等于 100。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYWEIGHTEDACTION_H_
