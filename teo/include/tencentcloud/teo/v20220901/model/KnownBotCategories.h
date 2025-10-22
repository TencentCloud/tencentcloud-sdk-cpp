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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_KNOWNBOTCATEGORIES_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_KNOWNBOTCATEGORIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>
#include <tencentcloud/teo/v20220901/model/BotManagementActionOverrides.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 商业或开源工具 UA 特征配置（原 UA 特征规则）。
                */
                class KnownBotCategories : public AbstractModel
                {
                public:
                    KnownBotCategories();
                    ~KnownBotCategories() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取来自已知商业工具或开源工具的访问请求的处置方式。 SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Disabled：未启用，不启用指定规则；</li><li>Challenge：挑战，其中 ChallengeActionParameters 中的 ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Allow：放行（待废弃）。</li> 
                     * @return BaseAction 来自已知商业工具或开源工具的访问请求的处置方式。 SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Disabled：未启用，不启用指定规则；</li><li>Challenge：挑战，其中 ChallengeActionParameters 中的 ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Allow：放行（待废弃）。</li> 
                     * 
                     */
                    SecurityAction GetBaseAction() const;

                    /**
                     * 设置来自已知商业工具或开源工具的访问请求的处置方式。 SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Disabled：未启用，不启用指定规则；</li><li>Challenge：挑战，其中 ChallengeActionParameters 中的 ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Allow：放行（待废弃）。</li> 
                     * @param _baseAction 来自已知商业工具或开源工具的访问请求的处置方式。 SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Disabled：未启用，不启用指定规则；</li><li>Challenge：挑战，其中 ChallengeActionParameters 中的 ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Allow：放行（待废弃）。</li> 
                     * 
                     */
                    void SetBaseAction(const SecurityAction& _baseAction);

                    /**
                     * 判断参数 BaseAction 是否已赋值
                     * @return BaseAction 是否已赋值
                     * 
                     */
                    bool BaseActionHasBeenSet() const;

                    /**
                     * 获取指定已知商业工具或开源工具的访问请求的处置方式。
                     * @return BotManagementActionOverrides 指定已知商业工具或开源工具的访问请求的处置方式。
                     * 
                     */
                    std::vector<BotManagementActionOverrides> GetBotManagementActionOverrides() const;

                    /**
                     * 设置指定已知商业工具或开源工具的访问请求的处置方式。
                     * @param _botManagementActionOverrides 指定已知商业工具或开源工具的访问请求的处置方式。
                     * 
                     */
                    void SetBotManagementActionOverrides(const std::vector<BotManagementActionOverrides>& _botManagementActionOverrides);

                    /**
                     * 判断参数 BotManagementActionOverrides 是否已赋值
                     * @return BotManagementActionOverrides 是否已赋值
                     * 
                     */
                    bool BotManagementActionOverridesHasBeenSet() const;

                private:

                    /**
                     * 来自已知商业工具或开源工具的访问请求的处置方式。 SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Disabled：未启用，不启用指定规则；</li><li>Challenge：挑战，其中 ChallengeActionParameters 中的 ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Allow：放行（待废弃）。</li> 
                     */
                    SecurityAction m_baseAction;
                    bool m_baseActionHasBeenSet;

                    /**
                     * 指定已知商业工具或开源工具的访问请求的处置方式。
                     */
                    std::vector<BotManagementActionOverrides> m_botManagementActionOverrides;
                    bool m_botManagementActionOverridesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_KNOWNBOTCATEGORIES_H_
