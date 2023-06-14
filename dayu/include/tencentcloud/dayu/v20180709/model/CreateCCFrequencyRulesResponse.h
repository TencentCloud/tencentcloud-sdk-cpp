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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATECCFREQUENCYRULESRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATECCFREQUENCYRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateCCFrequencyRules返回参数结构体
                */
                class CreateCCFrequencyRulesResponse : public AbstractModel
                {
                public:
                    CreateCCFrequencyRulesResponse();
                    ~CreateCCFrequencyRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CC防护的访问频率控制规则ID
                     * @return CCFrequencyRuleId CC防护的访问频率控制规则ID
                     * 
                     */
                    std::string GetCCFrequencyRuleId() const;

                    /**
                     * 判断参数 CCFrequencyRuleId 是否已赋值
                     * @return CCFrequencyRuleId 是否已赋值
                     * 
                     */
                    bool CCFrequencyRuleIdHasBeenSet() const;

                private:

                    /**
                     * CC防护的访问频率控制规则ID
                     */
                    std::string m_cCFrequencyRuleId;
                    bool m_cCFrequencyRuleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATECCFREQUENCYRULESRESPONSE_H_
