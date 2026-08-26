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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPRULECONTENTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPRULECONTENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DLP 规则内容。子规则 ID 由服务端内部管理不对外暴露，作用域由后端默认应用到全部范围
                */
                class TrafficSandboxDLPRuleContentItem : public AbstractModel
                {
                public:
                    TrafficSandboxDLPRuleContentItem();
                    ~TrafficSandboxDLPRuleContentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子规则名称
入参限制：长度 1-128
                     * @return RuleName 子规则名称
入参限制：长度 1-128
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置子规则名称
入参限制：长度 1-128
                     * @param _ruleName 子规则名称
入参限制：长度 1-128
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取规则内容
入参限制：正则表达式，最大长度 2048
                     * @return RuleContent 规则内容
入参限制：正则表达式，最大长度 2048
                     * 
                     */
                    std::string GetRuleContent() const;

                    /**
                     * 设置规则内容
入参限制：正则表达式，最大长度 2048
                     * @param _ruleContent 规则内容
入参限制：正则表达式，最大长度 2048
                     * 
                     */
                    void SetRuleContent(const std::string& _ruleContent);

                    /**
                     * 判断参数 RuleContent 是否已赋值
                     * @return RuleContent 是否已赋值
                     * 
                     */
                    bool RuleContentHasBeenSet() const;

                private:

                    /**
                     * 子规则名称
入参限制：长度 1-128
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则内容
入参限制：正则表达式，最大长度 2048
                     */
                    std::string m_ruleContent;
                    bool m_ruleContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPRULECONTENTITEM_H_
