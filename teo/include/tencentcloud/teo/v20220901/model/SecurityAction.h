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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DenyActionParameters.h>
#include <tencentcloud/teo/v20220901/model/RedirectActionParameters.h>
#include <tencentcloud/teo/v20220901/model/ChallengeActionParameters.h>
#include <tencentcloud/teo/v20220901/model/BlockIPActionParameters.h>
#include <tencentcloud/teo/v20220901/model/ReturnCustomPageActionParameters.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 安全的执行动作
                */
                class SecurityAction : public AbstractModel
                {
                public:
                    SecurityAction();
                    ~SecurityAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安全执行的具体动作。取值有：
<li>Deny：拦截，阻止请求访问站点资源；</li>
<li>Monitor：观察，仅记录日志；</li>
<li>Redirect：重定向至 URL；</li>
<li>Disabled：未启用，不启用指定规则；</li>
<li>Allow：允许访问，但延迟处理请求；</li>
<li>Challenge：挑战，响应挑战内容；</li>
<li>BlockIP：待废弃，IP 封禁；</li>
<li>ReturnCustomPage：待废弃，使用指定页面拦截；</li>
<li>JSChallenge：待废弃，JavaScript 挑战；</li>
<li>ManagedChallenge：待废弃，托管挑战。</li>
                     * @return Name 安全执行的具体动作。取值有：
<li>Deny：拦截，阻止请求访问站点资源；</li>
<li>Monitor：观察，仅记录日志；</li>
<li>Redirect：重定向至 URL；</li>
<li>Disabled：未启用，不启用指定规则；</li>
<li>Allow：允许访问，但延迟处理请求；</li>
<li>Challenge：挑战，响应挑战内容；</li>
<li>BlockIP：待废弃，IP 封禁；</li>
<li>ReturnCustomPage：待废弃，使用指定页面拦截；</li>
<li>JSChallenge：待废弃，JavaScript 挑战；</li>
<li>ManagedChallenge：待废弃，托管挑战。</li>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置安全执行的具体动作。取值有：
<li>Deny：拦截，阻止请求访问站点资源；</li>
<li>Monitor：观察，仅记录日志；</li>
<li>Redirect：重定向至 URL；</li>
<li>Disabled：未启用，不启用指定规则；</li>
<li>Allow：允许访问，但延迟处理请求；</li>
<li>Challenge：挑战，响应挑战内容；</li>
<li>BlockIP：待废弃，IP 封禁；</li>
<li>ReturnCustomPage：待废弃，使用指定页面拦截；</li>
<li>JSChallenge：待废弃，JavaScript 挑战；</li>
<li>ManagedChallenge：待废弃，托管挑战。</li>
                     * @param _name 安全执行的具体动作。取值有：
<li>Deny：拦截，阻止请求访问站点资源；</li>
<li>Monitor：观察，仅记录日志；</li>
<li>Redirect：重定向至 URL；</li>
<li>Disabled：未启用，不启用指定规则；</li>
<li>Allow：允许访问，但延迟处理请求；</li>
<li>Challenge：挑战，响应挑战内容；</li>
<li>BlockIP：待废弃，IP 封禁；</li>
<li>ReturnCustomPage：待废弃，使用指定页面拦截；</li>
<li>JSChallenge：待废弃，JavaScript 挑战；</li>
<li>ManagedChallenge：待废弃，托管挑战。</li>
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
                     * 获取当 Name 为 Deny 时的附加参数。
                     * @return DenyActionParameters 当 Name 为 Deny 时的附加参数。
                     * 
                     */
                    DenyActionParameters GetDenyActionParameters() const;

                    /**
                     * 设置当 Name 为 Deny 时的附加参数。
                     * @param _denyActionParameters 当 Name 为 Deny 时的附加参数。
                     * 
                     */
                    void SetDenyActionParameters(const DenyActionParameters& _denyActionParameters);

                    /**
                     * 判断参数 DenyActionParameters 是否已赋值
                     * @return DenyActionParameters 是否已赋值
                     * 
                     */
                    bool DenyActionParametersHasBeenSet() const;

                    /**
                     * 获取当 Name 为 Redirect 时的附加参数。
                     * @return RedirectActionParameters 当 Name 为 Redirect 时的附加参数。
                     * 
                     */
                    RedirectActionParameters GetRedirectActionParameters() const;

                    /**
                     * 设置当 Name 为 Redirect 时的附加参数。
                     * @param _redirectActionParameters 当 Name 为 Redirect 时的附加参数。
                     * 
                     */
                    void SetRedirectActionParameters(const RedirectActionParameters& _redirectActionParameters);

                    /**
                     * 判断参数 RedirectActionParameters 是否已赋值
                     * @return RedirectActionParameters 是否已赋值
                     * 
                     */
                    bool RedirectActionParametersHasBeenSet() const;

                    /**
                     * 获取当 Name 为 Challenge 时的附加参数。
                     * @return ChallengeActionParameters 当 Name 为 Challenge 时的附加参数。
                     * 
                     */
                    ChallengeActionParameters GetChallengeActionParameters() const;

                    /**
                     * 设置当 Name 为 Challenge 时的附加参数。
                     * @param _challengeActionParameters 当 Name 为 Challenge 时的附加参数。
                     * 
                     */
                    void SetChallengeActionParameters(const ChallengeActionParameters& _challengeActionParameters);

                    /**
                     * 判断参数 ChallengeActionParameters 是否已赋值
                     * @return ChallengeActionParameters 是否已赋值
                     * 
                     */
                    bool ChallengeActionParametersHasBeenSet() const;

                    /**
                     * 获取待废弃，当 Name 为 BlockIP 时的附加参数。
                     * @return BlockIPActionParameters 待废弃，当 Name 为 BlockIP 时的附加参数。
                     * 
                     */
                    BlockIPActionParameters GetBlockIPActionParameters() const;

                    /**
                     * 设置待废弃，当 Name 为 BlockIP 时的附加参数。
                     * @param _blockIPActionParameters 待废弃，当 Name 为 BlockIP 时的附加参数。
                     * 
                     */
                    void SetBlockIPActionParameters(const BlockIPActionParameters& _blockIPActionParameters);

                    /**
                     * 判断参数 BlockIPActionParameters 是否已赋值
                     * @return BlockIPActionParameters 是否已赋值
                     * 
                     */
                    bool BlockIPActionParametersHasBeenSet() const;

                    /**
                     * 获取待废弃，当 Name 为 ReturnCustomPage 时的附加参数。
                     * @return ReturnCustomPageActionParameters 待废弃，当 Name 为 ReturnCustomPage 时的附加参数。
                     * 
                     */
                    ReturnCustomPageActionParameters GetReturnCustomPageActionParameters() const;

                    /**
                     * 设置待废弃，当 Name 为 ReturnCustomPage 时的附加参数。
                     * @param _returnCustomPageActionParameters 待废弃，当 Name 为 ReturnCustomPage 时的附加参数。
                     * 
                     */
                    void SetReturnCustomPageActionParameters(const ReturnCustomPageActionParameters& _returnCustomPageActionParameters);

                    /**
                     * 判断参数 ReturnCustomPageActionParameters 是否已赋值
                     * @return ReturnCustomPageActionParameters 是否已赋值
                     * 
                     */
                    bool ReturnCustomPageActionParametersHasBeenSet() const;

                private:

                    /**
                     * 安全执行的具体动作。取值有：
<li>Deny：拦截，阻止请求访问站点资源；</li>
<li>Monitor：观察，仅记录日志；</li>
<li>Redirect：重定向至 URL；</li>
<li>Disabled：未启用，不启用指定规则；</li>
<li>Allow：允许访问，但延迟处理请求；</li>
<li>Challenge：挑战，响应挑战内容；</li>
<li>BlockIP：待废弃，IP 封禁；</li>
<li>ReturnCustomPage：待废弃，使用指定页面拦截；</li>
<li>JSChallenge：待废弃，JavaScript 挑战；</li>
<li>ManagedChallenge：待废弃，托管挑战。</li>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 当 Name 为 Deny 时的附加参数。
                     */
                    DenyActionParameters m_denyActionParameters;
                    bool m_denyActionParametersHasBeenSet;

                    /**
                     * 当 Name 为 Redirect 时的附加参数。
                     */
                    RedirectActionParameters m_redirectActionParameters;
                    bool m_redirectActionParametersHasBeenSet;

                    /**
                     * 当 Name 为 Challenge 时的附加参数。
                     */
                    ChallengeActionParameters m_challengeActionParameters;
                    bool m_challengeActionParametersHasBeenSet;

                    /**
                     * 待废弃，当 Name 为 BlockIP 时的附加参数。
                     */
                    BlockIPActionParameters m_blockIPActionParameters;
                    bool m_blockIPActionParametersHasBeenSet;

                    /**
                     * 待废弃，当 Name 为 ReturnCustomPage 时的附加参数。
                     */
                    ReturnCustomPageActionParameters m_returnCustomPageActionParameters;
                    bool m_returnCustomPageActionParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYACTION_H_
