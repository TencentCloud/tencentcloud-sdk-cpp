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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCECONFIGRULE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCECONFIGRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/InputParameter.h>
#include <tencentcloud/config/v20220802/model/SourceConditionForManage.h>
#include <tencentcloud/config/v20220802/model/InputParameterForManage.h>


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
                class ComplianceConfigRule : public AbstractModel
                {
                public:
                    ComplianceConfigRule();
                    ~ComplianceConfigRule() = default;
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
                     * 获取风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskLevel 风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskLevel 风险等级
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取规则状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 规则状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置规则状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 规则状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigRuleId 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigRuleId() const;

                    /**
                     * 设置规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configRuleId 规则ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取评估结果
合规： 'COMPLIANT'
不合规： 'NON_COMPLIANT'
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComplianceResult 评估结果
合规： 'COMPLIANT'
不合规： 'NON_COMPLIANT'
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComplianceResult() const;

                    /**
                     * 设置评估结果
合规： 'COMPLIANT'
不合规： 'NON_COMPLIANT'
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _complianceResult 评估结果
合规： 'COMPLIANT'
不合规： 'NON_COMPLIANT'
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComplianceResult(const std::string& _complianceResult);

                    /**
                     * 判断参数 ComplianceResult 是否已赋值
                     * @return ComplianceResult 是否已赋值
                     * 
                     */
                    bool ComplianceResultHasBeenSet() const;

                    /**
                     * 获取关键字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels 关键字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置关键字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels 关键字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取入参
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputParameter 入参
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InputParameter> GetInputParameter() const;

                    /**
                     * 设置入参
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputParameter 入参
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取参数格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceCondition 参数格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SourceConditionForManage> GetSourceCondition() const;

                    /**
                     * 设置参数格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceCondition 参数格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceCondition(const std::vector<SourceConditionForManage>& _sourceCondition);

                    /**
                     * 判断参数 SourceCondition 是否已赋值
                     * @return SourceCondition 是否已赋值
                     * 
                     */
                    bool SourceConditionHasBeenSet() const;

                    /**
                     * 获取规则标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Identifier 规则标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置规则标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _identifier 规则标识
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建方式 user、compliancePack、system
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateByType 创建方式 user、compliancePack、system
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateByType() const;

                    /**
                     * 设置创建方式 user、compliancePack、system
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createByType 创建方式 user、compliancePack、system
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateByType(const std::string& _createByType);

                    /**
                     * 判断参数 CreateByType 是否已赋值
                     * @return CreateByType 是否已赋值
                     * 
                     */
                    bool CreateByTypeHasBeenSet() const;

                    /**
                     * 获取规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 规则描述
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
                     * 获取参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManageInputParameter 参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InputParameterForManage> GetManageInputParameter() const;

                    /**
                     * 设置参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _manageInputParameter 参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetManageInputParameter(const std::vector<InputParameterForManage>& _manageInputParameter);

                    /**
                     * 判断参数 ManageInputParameter 是否已赋值
                     * @return ManageInputParameter 是否已赋值
                     * 
                     */
                    bool ManageInputParameterHasBeenSet() const;

                private:

                    /**
                     * 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 规则状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configRuleId;
                    bool m_configRuleIdHasBeenSet;

                    /**
                     * 评估结果
合规： 'COMPLIANT'
不合规： 'NON_COMPLIANT'
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                    /**
                     * 关键字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 入参
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InputParameter> m_inputParameter;
                    bool m_inputParameterHasBeenSet;

                    /**
                     * 参数格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SourceConditionForManage> m_sourceCondition;
                    bool m_sourceConditionHasBeenSet;

                    /**
                     * 规则标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * 创建方式 user、compliancePack、system
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createByType;
                    bool m_createByTypeHasBeenSet;

                    /**
                     * 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InputParameterForManage> m_manageInputParameter;
                    bool m_manageInputParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCECONFIGRULE_H_
