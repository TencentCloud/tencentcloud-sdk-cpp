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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_REGEXPRULEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_REGEXPRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/WhiteListRegexpExpressionInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 正则规则详情
                */
                class RegexpRuleInfo : public AbstractModel
                {
                public:
                    RegexpRuleInfo();
                    ~RegexpRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleName 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleName 规则名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取启用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 启用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置启用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 启用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取正则表达式列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpressionList 正则表达式列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WhiteListRegexpExpressionInfo> GetExpressionList() const;

                    /**
                     * 设置正则表达式列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expressionList 正则表达式列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpressionList(const std::vector<WhiteListRegexpExpressionInfo>& _expressionList);

                    /**
                     * 判断参数 ExpressionList 是否已赋值
                     * @return ExpressionList 是否已赋值
                     * 
                     */
                    bool ExpressionListHasBeenSet() const;

                    /**
                     * 获取规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleID 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleID 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取最近更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 最近更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最近更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 最近更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取最近操作账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorUIN 最近操作账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperatorUIN() const;

                    /**
                     * 设置最近操作账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatorUIN 最近操作账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatorUIN(const std::string& _operatorUIN);

                    /**
                     * 判断参数 OperatorUIN 是否已赋值
                     * @return OperatorUIN 是否已赋值
                     * 
                     */
                    bool OperatorUINHasBeenSet() const;

                private:

                    /**
                     * 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 启用状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 正则表达式列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WhiteListRegexpExpressionInfo> m_expressionList;
                    bool m_expressionListHasBeenSet;

                    /**
                     * 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 最近更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 最近操作账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operatorUIN;
                    bool m_operatorUINHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_REGEXPRULEINFO_H_
