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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATESECURITYRULESRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATESECURITYRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateSecurityRules返回参数结构体
                */
                class CreateSecurityRulesResponse : public AbstractModel
                {
                public:
                    CreateSecurityRulesResponse();
                    ~CreateSecurityRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则ID列表
                     * @return RuleIdList 规则ID列表
                     * 
                     */
                    std::vector<std::string> GetRuleIdList() const;

                    /**
                     * 判断参数 RuleIdList 是否已赋值
                     * @return RuleIdList 是否已赋值
                     * 
                     */
                    bool RuleIdListHasBeenSet() const;

                private:

                    /**
                     * 规则ID列表
                     */
                    std::vector<std::string> m_ruleIdList;
                    bool m_ruleIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATESECURITYRULESRESPONSE_H_
