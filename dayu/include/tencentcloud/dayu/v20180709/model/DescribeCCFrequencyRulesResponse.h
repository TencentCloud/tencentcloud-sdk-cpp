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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCFREQUENCYRULESRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCFREQUENCYRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/CCFrequencyRule.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeCCFrequencyRules返回参数结构体
                */
                class DescribeCCFrequencyRulesResponse : public AbstractModel
                {
                public:
                    DescribeCCFrequencyRulesResponse();
                    ~DescribeCCFrequencyRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取访问频率控制规则列表
                     * @return CCFrequencyRuleList 访问频率控制规则列表
                     * 
                     */
                    std::vector<CCFrequencyRule> GetCCFrequencyRuleList() const;

                    /**
                     * 判断参数 CCFrequencyRuleList 是否已赋值
                     * @return CCFrequencyRuleList 是否已赋值
                     * 
                     */
                    bool CCFrequencyRuleListHasBeenSet() const;

                    /**
                     * 获取访问频率控制规则开关状态，取值[on(开启)，off(关闭)]
                     * @return CCFrequencyRuleStatus 访问频率控制规则开关状态，取值[on(开启)，off(关闭)]
                     * 
                     */
                    std::string GetCCFrequencyRuleStatus() const;

                    /**
                     * 判断参数 CCFrequencyRuleStatus 是否已赋值
                     * @return CCFrequencyRuleStatus 是否已赋值
                     * 
                     */
                    bool CCFrequencyRuleStatusHasBeenSet() const;

                private:

                    /**
                     * 访问频率控制规则列表
                     */
                    std::vector<CCFrequencyRule> m_cCFrequencyRuleList;
                    bool m_cCFrequencyRuleListHasBeenSet;

                    /**
                     * 访问频率控制规则开关状态，取值[on(开启)，off(关闭)]
                     */
                    std::string m_cCFrequencyRuleStatus;
                    bool m_cCFrequencyRuleStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCFREQUENCYRULESRESPONSE_H_
