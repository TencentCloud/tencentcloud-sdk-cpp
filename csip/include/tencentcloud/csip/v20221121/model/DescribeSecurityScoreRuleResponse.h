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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESECURITYSCORERULERESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESECURITYSCORERULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ScoreRuleItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSecurityScoreRule返回参数结构体
                */
                class DescribeSecurityScoreRuleResponse : public AbstractModel
                {
                public:
                    DescribeSecurityScoreRuleResponse();
                    ~DescribeSecurityScoreRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否为默认规则，用户未自定义时为true</p>
                     * @return IsDefault <p>是否为默认规则，用户未自定义时为true</p>
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取<p>当前生效规则列表</p>
                     * @return Rules <p>当前生效规则列表</p>
                     * 
                     */
                    std::vector<ScoreRuleItem> GetRules() const;

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * <p>是否为默认规则，用户未自定义时为true</p>
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * <p>当前生效规则列表</p>
                     */
                    std::vector<ScoreRuleItem> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESECURITYSCORERULERESPONSE_H_
