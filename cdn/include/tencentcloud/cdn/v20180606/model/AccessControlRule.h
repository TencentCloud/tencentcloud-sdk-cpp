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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ACCESSCONTROLRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ACCESSCONTROLRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 访问控制规则
                */
                class AccessControlRule : public AbstractModel
                {
                public:
                    AccessControlRule();
                    ~AccessControlRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则类型：<br>requestHeader ：对请求头部进行访问控制<br>url ： 对访问url进行访问控制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleType <p>规则类型：<br>requestHeader ：对请求头部进行访问控制<br>url ： 对访问url进行访问控制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置<p>规则类型：<br>requestHeader ：对请求头部进行访问控制<br>url ： 对访问url进行访问控制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleType <p>规则类型：<br>requestHeader ：对请求头部进行访问控制<br>url ： 对访问url进行访问控制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>封禁内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleContent <p>封禁内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleContent() const;

                    /**
                     * 设置<p>封禁内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleContent <p>封禁内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleContent(const std::string& _ruleContent);

                    /**
                     * 判断参数 RuleContent 是否已赋值
                     * @return RuleContent 是否已赋值
                     * 
                     */
                    bool RuleContentHasBeenSet() const;

                    /**
                     * 获取<p>on ：正则匹配<br>off ：字面匹配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Regex <p>on ：正则匹配<br>off ：字面匹配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置<p>on ：正则匹配<br>off ：字面匹配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regex <p>on ：正则匹配<br>off ：字面匹配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegex(const std::string& _regex);

                    /**
                     * 判断参数 Regex 是否已赋值
                     * @return Regex 是否已赋值
                     * 
                     */
                    bool RegexHasBeenSet() const;

                    /**
                     * 获取<p>RuleType为requestHeader时必填，否则不需要填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleHeader <p>RuleType为requestHeader时必填，否则不需要填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleHeader() const;

                    /**
                     * 设置<p>RuleType为requestHeader时必填，否则不需要填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleHeader <p>RuleType为requestHeader时必填，否则不需要填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleHeader(const std::string& _ruleHeader);

                    /**
                     * 判断参数 RuleHeader 是否已赋值
                     * @return RuleHeader 是否已赋值
                     * 
                     */
                    bool RuleHeaderHasBeenSet() const;

                private:

                    /**
                     * <p>规则类型：<br>requestHeader ：对请求头部进行访问控制<br>url ： 对访问url进行访问控制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>封禁内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleContent;
                    bool m_ruleContentHasBeenSet;

                    /**
                     * <p>on ：正则匹配<br>off ：字面匹配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                    /**
                     * <p>RuleType为requestHeader时必填，否则不需要填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleHeader;
                    bool m_ruleHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ACCESSCONTROLRULE_H_
