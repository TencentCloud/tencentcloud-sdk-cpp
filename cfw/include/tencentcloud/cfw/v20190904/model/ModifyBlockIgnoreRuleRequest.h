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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYBLOCKIGNORERULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYBLOCKIGNORERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/IntrusionDefenseRule.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyBlockIgnoreRule请求参数结构体
                */
                class ModifyBlockIgnoreRuleRequest : public AbstractModel
                {
                public:
                    ModifyBlockIgnoreRuleRequest();
                    ~ModifyBlockIgnoreRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则列表
                     * @return Rule 规则列表
                     * 
                     */
                    IntrusionDefenseRule GetRule() const;

                    /**
                     * 设置规则列表
                     * @param _rule 规则列表
                     * 
                     */
                    void SetRule(const IntrusionDefenseRule& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取规则类型，1封禁，2放通
                     * @return RuleType 规则类型，1封禁，2放通
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置规则类型，1封禁，2放通
                     * @param _ruleType 规则类型，1封禁，2放通
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                private:

                    /**
                     * 规则列表
                     */
                    IntrusionDefenseRule m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 规则类型，1封禁，2放通
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYBLOCKIGNORERULEREQUEST_H_
