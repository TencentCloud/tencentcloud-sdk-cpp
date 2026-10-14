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
#include <tencentcloud/teo/v20220901/model/AllowActionParameters.h>
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
                     * 获取<p>安全执行的具体动作。取值有：</p><ul><li>Deny：拦截，阻止请求访问站点资源；</li><li>Monitor：观察，仅记录日志；</li><li>Redirect：重定向至 URL；</li><li>Disabled：未启用，不启用指定规则；</li><li>Allow：放行， 跳过当前安全模块剩余规则。当配置 AllowActionParameters 参数时延迟响应；</li><li>Challenge：挑战，响应挑战内容；</li><li>BlockIP：待废弃，IP 封禁；</li><li>ReturnCustomPage：待废弃，使用指定页面拦截；</li><li>JSChallenge：待废弃，JavaScript 挑战；</li><li>ManagedChallenge：待废弃，托管挑战。</li></ul>
                     * @return Name <p>安全执行的具体动作。取值有：</p><ul><li>Deny：拦截，阻止请求访问站点资源；</li><li>Monitor：观察，仅记录日志；</li><li>Redirect：重定向至 URL；</li><li>Disabled：未启用，不启用指定规则；</li><li>Allow：放行， 跳过当前安全模块剩余规则。当配置 AllowActionParameters 参数时延迟响应；</li><li>Challenge：挑战，响应挑战内容；</li><li>BlockIP：待废弃，IP 封禁；</li><li>ReturnCustomPage：待废弃，使用指定页面拦截；</li><li>JSChallenge：待废弃，JavaScript 挑战；</li><li>ManagedChallenge：待废弃，托管挑战。</li></ul>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>安全执行的具体动作。取值有：</p><ul><li>Deny：拦截，阻止请求访问站点资源；</li><li>Monitor：观察，仅记录日志；</li><li>Redirect：重定向至 URL；</li><li>Disabled：未启用，不启用指定规则；</li><li>Allow：放行， 跳过当前安全模块剩余规则。当配置 AllowActionParameters 参数时延迟响应；</li><li>Challenge：挑战，响应挑战内容；</li><li>BlockIP：待废弃，IP 封禁；</li><li>ReturnCustomPage：待废弃，使用指定页面拦截；</li><li>JSChallenge：待废弃，JavaScript 挑战；</li><li>ManagedChallenge：待废弃，托管挑战。</li></ul>
                     * @param _name <p>安全执行的具体动作。取值有：</p><ul><li>Deny：拦截，阻止请求访问站点资源；</li><li>Monitor：观察，仅记录日志；</li><li>Redirect：重定向至 URL；</li><li>Disabled：未启用，不启用指定规则；</li><li>Allow：放行， 跳过当前安全模块剩余规则。当配置 AllowActionParameters 参数时延迟响应；</li><li>Challenge：挑战，响应挑战内容；</li><li>BlockIP：待废弃，IP 封禁；</li><li>ReturnCustomPage：待废弃，使用指定页面拦截；</li><li>JSChallenge：待废弃，JavaScript 挑战；</li><li>ManagedChallenge：待废弃，托管挑战。</li></ul>
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
                     * 获取<p>当 Name 为 Deny 时的附加参数。</p>
                     * @return DenyActionParameters <p>当 Name 为 Deny 时的附加参数。</p>
                     * 
                     */
                    DenyActionParameters GetDenyActionParameters() const;

                    /**
                     * 设置<p>当 Name 为 Deny 时的附加参数。</p>
                     * @param _denyActionParameters <p>当 Name 为 Deny 时的附加参数。</p>
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
                     * 获取<p>当 Name 为 Redirect 时的附加参数。</p>
                     * @return RedirectActionParameters <p>当 Name 为 Redirect 时的附加参数。</p>
                     * 
                     */
                    RedirectActionParameters GetRedirectActionParameters() const;

                    /**
                     * 设置<p>当 Name 为 Redirect 时的附加参数。</p>
                     * @param _redirectActionParameters <p>当 Name 为 Redirect 时的附加参数。</p>
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
                     * 获取<p>当 Name 为 Allow 时的附加参数。</p>
                     * @return AllowActionParameters <p>当 Name 为 Allow 时的附加参数。</p>
                     * 
                     */
                    AllowActionParameters GetAllowActionParameters() const;

                    /**
                     * 设置<p>当 Name 为 Allow 时的附加参数。</p>
                     * @param _allowActionParameters <p>当 Name 为 Allow 时的附加参数。</p>
                     * 
                     */
                    void SetAllowActionParameters(const AllowActionParameters& _allowActionParameters);

                    /**
                     * 判断参数 AllowActionParameters 是否已赋值
                     * @return AllowActionParameters 是否已赋值
                     * 
                     */
                    bool AllowActionParametersHasBeenSet() const;

                    /**
                     * 获取<p>当 Name 为 Challenge 时的附加参数。</p>
                     * @return ChallengeActionParameters <p>当 Name 为 Challenge 时的附加参数。</p>
                     * 
                     */
                    ChallengeActionParameters GetChallengeActionParameters() const;

                    /**
                     * 设置<p>当 Name 为 Challenge 时的附加参数。</p>
                     * @param _challengeActionParameters <p>当 Name 为 Challenge 时的附加参数。</p>
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
                     * 获取<p>待废弃，当 Name 为 BlockIP 时的附加参数。</p>
                     * @return BlockIPActionParameters <p>待废弃，当 Name 为 BlockIP 时的附加参数。</p>
                     * 
                     */
                    BlockIPActionParameters GetBlockIPActionParameters() const;

                    /**
                     * 设置<p>待废弃，当 Name 为 BlockIP 时的附加参数。</p>
                     * @param _blockIPActionParameters <p>待废弃，当 Name 为 BlockIP 时的附加参数。</p>
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
                     * 获取<p>待废弃，当 Name 为 ReturnCustomPage 时的附加参数。</p>
                     * @return ReturnCustomPageActionParameters <p>待废弃，当 Name 为 ReturnCustomPage 时的附加参数。</p>
                     * 
                     */
                    ReturnCustomPageActionParameters GetReturnCustomPageActionParameters() const;

                    /**
                     * 设置<p>待废弃，当 Name 为 ReturnCustomPage 时的附加参数。</p>
                     * @param _returnCustomPageActionParameters <p>待废弃，当 Name 为 ReturnCustomPage 时的附加参数。</p>
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
                     * <p>安全执行的具体动作。取值有：</p><ul><li>Deny：拦截，阻止请求访问站点资源；</li><li>Monitor：观察，仅记录日志；</li><li>Redirect：重定向至 URL；</li><li>Disabled：未启用，不启用指定规则；</li><li>Allow：放行， 跳过当前安全模块剩余规则。当配置 AllowActionParameters 参数时延迟响应；</li><li>Challenge：挑战，响应挑战内容；</li><li>BlockIP：待废弃，IP 封禁；</li><li>ReturnCustomPage：待废弃，使用指定页面拦截；</li><li>JSChallenge：待废弃，JavaScript 挑战；</li><li>ManagedChallenge：待废弃，托管挑战。</li></ul>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>当 Name 为 Deny 时的附加参数。</p>
                     */
                    DenyActionParameters m_denyActionParameters;
                    bool m_denyActionParametersHasBeenSet;

                    /**
                     * <p>当 Name 为 Redirect 时的附加参数。</p>
                     */
                    RedirectActionParameters m_redirectActionParameters;
                    bool m_redirectActionParametersHasBeenSet;

                    /**
                     * <p>当 Name 为 Allow 时的附加参数。</p>
                     */
                    AllowActionParameters m_allowActionParameters;
                    bool m_allowActionParametersHasBeenSet;

                    /**
                     * <p>当 Name 为 Challenge 时的附加参数。</p>
                     */
                    ChallengeActionParameters m_challengeActionParameters;
                    bool m_challengeActionParametersHasBeenSet;

                    /**
                     * <p>待废弃，当 Name 为 BlockIP 时的附加参数。</p>
                     */
                    BlockIPActionParameters m_blockIPActionParameters;
                    bool m_blockIPActionParametersHasBeenSet;

                    /**
                     * <p>待废弃，当 Name 为 ReturnCustomPage 时的附加参数。</p>
                     */
                    ReturnCustomPageActionParameters m_returnCustomPageActionParameters;
                    bool m_returnCustomPageActionParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYACTION_H_
