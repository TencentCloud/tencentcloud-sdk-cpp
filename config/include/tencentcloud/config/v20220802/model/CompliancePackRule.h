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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCEPACKRULE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCEPACKRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/InputParameter.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * 合规包规则信息
                */
                class CompliancePackRule : public AbstractModel
                {
                public:
                    CompliancePackRule();
                    ~CompliancePackRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则名称</p>
                     * @return RuleName <p>规则名称</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>规则名称</p>
                     * @param _ruleName <p>规则名称</p>
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
                     * 获取<p>风险等级</p>
                     * @return RiskLevel <p>风险等级</p>
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置<p>风险等级</p>
                     * @param _riskLevel <p>风险等级</p>
                     * 
                     */
                    void SetRiskLevel(const uint64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>入参</p>
                     * @return InputParameter <p>入参</p>
                     * 
                     */
                    std::vector<InputParameter> GetInputParameter() const;

                    /**
                     * 设置<p>入参</p>
                     * @param _inputParameter <p>入参</p>
                     * 
                     */
                    void SetInputParameter(const std::vector<InputParameter>& _inputParameter);

                    /**
                     * 判断参数 InputParameter 是否已赋值
                     * @return InputParameter 是否已赋值
                     * 
                     */
                    bool InputParameterHasBeenSet() const;

                    /**
                     * 获取<p>规则身份标识</p>
                     * @return Identifier <p>规则身份标识</p>
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置<p>规则身份标识</p>
                     * @param _identifier <p>规则身份标识</p>
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>预设规则身份标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManagedRuleIdentifier <p>预设规则身份标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetManagedRuleIdentifier() const;

                    /**
                     * 设置<p>预设规则身份标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _managedRuleIdentifier <p>预设规则身份标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetManagedRuleIdentifier(const std::string& _managedRuleIdentifier);

                    /**
                     * 判断参数 ManagedRuleIdentifier 是否已赋值
                     * @return ManagedRuleIdentifier 是否已赋值
                     * 
                     */
                    bool ManagedRuleIdentifierHasBeenSet() const;

                    /**
                     * 获取<p>规则ID</p>
                     * @return ConfigRuleId <p>规则ID</p>
                     * 
                     */
                    std::string GetConfigRuleId() const;

                    /**
                     * 设置<p>规则ID</p>
                     * @param _configRuleId <p>规则ID</p>
                     * 
                     */
                    void SetConfigRuleId(const std::string& _configRuleId);

                    /**
                     * 判断参数 ConfigRuleId 是否已赋值
                     * @return ConfigRuleId 是否已赋值
                     * 
                     */
                    bool ConfigRuleIdHasBeenSet() const;

                    /**
                     * 获取<p>合规包ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompliancePackId <p>合规包ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCompliancePackId() const;

                    /**
                     * 设置<p>合规包ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compliancePackId <p>合规包ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompliancePackId(const std::string& _compliancePackId);

                    /**
                     * 判断参数 CompliancePackId 是否已赋值
                     * @return CompliancePackId 是否已赋值
                     * 
                     */
                    bool CompliancePackIdHasBeenSet() const;

                private:

                    /**
                     * <p>规则名称</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>风险等级</p>
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>入参</p>
                     */
                    std::vector<InputParameter> m_inputParameter;
                    bool m_inputParameterHasBeenSet;

                    /**
                     * <p>规则身份标识</p>
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>预设规则身份标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_managedRuleIdentifier;
                    bool m_managedRuleIdentifierHasBeenSet;

                    /**
                     * <p>规则ID</p>
                     */
                    std::string m_configRuleId;
                    bool m_configRuleIdHasBeenSet;

                    /**
                     * <p>合规包ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCEPACKRULE_H_
