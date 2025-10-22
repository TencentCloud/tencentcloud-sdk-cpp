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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENTACTIONOVERRIDES_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENTACTIONOVERRIDES_H_

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
                * Bot 规则项的具体配置，用于覆盖上层的默认配置。
                */
                class BotManagementActionOverrides : public AbstractModel
                {
                public:
                    BotManagementActionOverrides();
                    ~BotManagementActionOverrides() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bot 规则组下的具体项，用于改写此单条规则项配置的内容，Ids 所对应的具体信息请参考 DescribeBotManagedRules 接口返回的信息。
                     * @return Ids Bot 规则组下的具体项，用于改写此单条规则项配置的内容，Ids 所对应的具体信息请参考 DescribeBotManagedRules 接口返回的信息。
                     * 
                     */
                    std::vector<std::string> GetIds() const;

                    /**
                     * 设置Bot 规则组下的具体项，用于改写此单条规则项配置的内容，Ids 所对应的具体信息请参考 DescribeBotManagedRules 接口返回的信息。
                     * @param _ids Bot 规则组下的具体项，用于改写此单条规则项配置的内容，Ids 所对应的具体信息请参考 DescribeBotManagedRules 接口返回的信息。
                     * 
                     */
                    void SetIds(const std::vector<std::string>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取Ids 中指定 Bot 规则项的处置动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Disabled：未启用，不启用指定规则；</li><li>Challenge：挑战，其中 ChallengeActionParameters 中的 ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Allow：放行（仅限Bot基础特征管理）。</li>

                     * @return Action Ids 中指定 Bot 规则项的处置动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Disabled：未启用，不启用指定规则；</li><li>Challenge：挑战，其中 ChallengeActionParameters 中的 ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Allow：放行（仅限Bot基础特征管理）。</li>

                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置Ids 中指定 Bot 规则项的处置动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Disabled：未启用，不启用指定规则；</li><li>Challenge：挑战，其中 ChallengeActionParameters 中的 ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Allow：放行（仅限Bot基础特征管理）。</li>

                     * @param _action Ids 中指定 Bot 规则项的处置动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Disabled：未启用，不启用指定规则；</li><li>Challenge：挑战，其中 ChallengeActionParameters 中的 ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Allow：放行（仅限Bot基础特征管理）。</li>

                     * 
                     */
                    void SetAction(const SecurityAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * Bot 规则组下的具体项，用于改写此单条规则项配置的内容，Ids 所对应的具体信息请参考 DescribeBotManagedRules 接口返回的信息。
                     */
                    std::vector<std::string> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * Ids 中指定 Bot 规则项的处置动作。 SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Disabled：未启用，不启用指定规则；</li><li>Challenge：挑战，其中 ChallengeActionParameters 中的 ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Allow：放行（仅限Bot基础特征管理）。</li>

                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENTACTIONOVERRIDES_H_
