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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCEPACKRULEFORMANAGE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCEPACKRULEFORMANAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/CompliancePackRules.h>
#include <tencentcloud/config/v20220802/model/Control.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * 管理端系统合规包规则
                */
                class CompliancePackRuleForManage : public AbstractModel
                {
                public:
                    CompliancePackRuleForManage();
                    ~CompliancePackRuleForManage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则唯一身份标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Identifier <p>规则唯一身份标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置<p>规则唯一身份标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _identifier <p>规则唯一身份标识</p>
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
                     * 获取<p>规则名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleName <p>规则名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>规则名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleName <p>规则名称</p>
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
                     * 获取<p>风险等级</p><p>1：高风险 2：中风险  3：低风险</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskLevel <p>风险等级</p><p>1：高风险 2：中风险  3：低风险</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置<p>风险等级</p><p>1：高风险 2：中风险  3：低风险</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskLevel <p>风险等级</p><p>1：高风险 2：中风险  3：低风险</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskLevel(const int64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间</p>
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
                     * 获取<p>合规包规则</p>
                     * @return CompliancePackRules <p>合规包规则</p>
                     * 
                     */
                    std::vector<CompliancePackRules> GetCompliancePackRules() const;

                    /**
                     * 设置<p>合规包规则</p>
                     * @param _compliancePackRules <p>合规包规则</p>
                     * 
                     */
                    void SetCompliancePackRules(const std::vector<CompliancePackRules>& _compliancePackRules);

                    /**
                     * 判断参数 CompliancePackRules 是否已赋值
                     * @return CompliancePackRules 是否已赋值
                     * 
                     */
                    bool CompliancePackRulesHasBeenSet() const;

                    /**
                     * 获取<p>规则编号信息</p>
                     * @return Control <p>规则编号信息</p>
                     * 
                     */
                    std::vector<Control> GetControl() const;

                    /**
                     * 设置<p>规则编号信息</p>
                     * @param _control <p>规则编号信息</p>
                     * 
                     */
                    void SetControl(const std::vector<Control>& _control);

                    /**
                     * 判断参数 Control 是否已赋值
                     * @return Control 是否已赋值
                     * 
                     */
                    bool ControlHasBeenSet() const;

                    /**
                     * 获取<p>资源类型</p>
                     * @return ResourceTypes <p>资源类型</p>
                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置<p>资源类型</p>
                     * @param _resourceTypes <p>资源类型</p>
                     * 
                     */
                    void SetResourceTypes(const std::vector<std::string>& _resourceTypes);

                    /**
                     * 判断参数 ResourceTypes 是否已赋值
                     * @return ResourceTypes 是否已赋值
                     * 
                     */
                    bool ResourceTypesHasBeenSet() const;

                private:

                    /**
                     * <p>规则唯一身份标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * <p>规则名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>风险等级</p><p>1：高风险 2：中风险  3：低风险</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>合规包规则</p>
                     */
                    std::vector<CompliancePackRules> m_compliancePackRules;
                    bool m_compliancePackRulesHasBeenSet;

                    /**
                     * <p>规则编号信息</p>
                     */
                    std::vector<Control> m_control;
                    bool m_controlHasBeenSet;

                    /**
                     * <p>资源类型</p>
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_COMPLIANCEPACKRULEFORMANAGE_H_
