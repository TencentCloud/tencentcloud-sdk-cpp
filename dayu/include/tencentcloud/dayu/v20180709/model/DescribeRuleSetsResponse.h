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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBERULESETSRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBERULESETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/KeyValueRecord.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeRuleSets返回参数结构体
                */
                class DescribeRuleSetsResponse : public AbstractModel
                {
                public:
                    DescribeRuleSetsResponse();
                    ~DescribeRuleSetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则记录数数组，取值说明:
Key值为"Id"时，Value表示资源ID
Key值为"RuleIdList"时，Value值表示资源的规则ID，多个规则ID用","分割
Key值为"RuleNameList"时，Value值表示资源的规则名，多个规则名用","分割
Key值为"RuleNum"时，Value值表示资源的规则数
                     * @return L4RuleSets 规则记录数数组，取值说明:
Key值为"Id"时，Value表示资源ID
Key值为"RuleIdList"时，Value值表示资源的规则ID，多个规则ID用","分割
Key值为"RuleNameList"时，Value值表示资源的规则名，多个规则名用","分割
Key值为"RuleNum"时，Value值表示资源的规则数
                     * 
                     */
                    std::vector<KeyValueRecord> GetL4RuleSets() const;

                    /**
                     * 判断参数 L4RuleSets 是否已赋值
                     * @return L4RuleSets 是否已赋值
                     * 
                     */
                    bool L4RuleSetsHasBeenSet() const;

                    /**
                     * 获取规则记录数数组，取值说明:
Key值为"Id"时，Value表示资源ID
Key值为"RuleIdList"时，Value值表示资源的规则ID，多个规则ID用","分割
Key值为"RuleNameList"时，Value值表示资源的规则名，多个规则名用","分割
Key值为"RuleNum"时，Value值表示资源的规则数
                     * @return L7RuleSets 规则记录数数组，取值说明:
Key值为"Id"时，Value表示资源ID
Key值为"RuleIdList"时，Value值表示资源的规则ID，多个规则ID用","分割
Key值为"RuleNameList"时，Value值表示资源的规则名，多个规则名用","分割
Key值为"RuleNum"时，Value值表示资源的规则数
                     * 
                     */
                    std::vector<KeyValueRecord> GetL7RuleSets() const;

                    /**
                     * 判断参数 L7RuleSets 是否已赋值
                     * @return L7RuleSets 是否已赋值
                     * 
                     */
                    bool L7RuleSetsHasBeenSet() const;

                private:

                    /**
                     * 规则记录数数组，取值说明:
Key值为"Id"时，Value表示资源ID
Key值为"RuleIdList"时，Value值表示资源的规则ID，多个规则ID用","分割
Key值为"RuleNameList"时，Value值表示资源的规则名，多个规则名用","分割
Key值为"RuleNum"时，Value值表示资源的规则数
                     */
                    std::vector<KeyValueRecord> m_l4RuleSets;
                    bool m_l4RuleSetsHasBeenSet;

                    /**
                     * 规则记录数数组，取值说明:
Key值为"Id"时，Value表示资源ID
Key值为"RuleIdList"时，Value值表示资源的规则ID，多个规则ID用","分割
Key值为"RuleNameList"时，Value值表示资源的规则名，多个规则名用","分割
Key值为"RuleNum"时，Value值表示资源的规则数
                     */
                    std::vector<KeyValueRecord> m_l7RuleSets;
                    bool m_l7RuleSetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBERULESETSRESPONSE_H_
