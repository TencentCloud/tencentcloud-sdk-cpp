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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_SYSTEMCOMPLIANCEPACK_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_SYSTEMCOMPLIANCEPACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/CompliancePackRuleForManage.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * 系统合规包信息
                */
                class SystemCompliancePack : public AbstractModel
                {
                public:
                    SystemCompliancePack();
                    ~SystemCompliancePack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合规包ID
                     * @return CompliancePackId 合规包ID
                     * 
                     */
                    std::string GetCompliancePackId() const;

                    /**
                     * 设置合规包ID
                     * @param _compliancePackId 合规包ID
                     * 
                     */
                    void SetCompliancePackId(const std::string& _compliancePackId);

                    /**
                     * 判断参数 CompliancePackId 是否已赋值
                     * @return CompliancePackId 是否已赋值
                     * 
                     */
                    bool CompliancePackIdHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return CompliancePackName 名称
                     * 
                     */
                    std::string GetCompliancePackName() const;

                    /**
                     * 设置名称
                     * @param _compliancePackName 名称
                     * 
                     */
                    void SetCompliancePackName(const std::string& _compliancePackName);

                    /**
                     * 判断参数 CompliancePackName 是否已赋值
                     * @return CompliancePackName 是否已赋值
                     * 
                     */
                    bool CompliancePackNameHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
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
                     * 获取合规包风险等级1：高风险。
2：中风险。
3：低风险。
                     * @return RiskLevel 合规包风险等级1：高风险。
2：中风险。
3：低风险。
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置合规包风险等级1：高风险。
2：中风险。
3：低风险。
                     * @param _riskLevel 合规包风险等级1：高风险。
2：中风险。
3：低风险。
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
                     * 获取合规包规则信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigRules 合规包规则信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CompliancePackRuleForManage> GetConfigRules() const;

                    /**
                     * 设置合规包规则信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configRules 合规包规则信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigRules(const std::vector<CompliancePackRuleForManage>& _configRules);

                    /**
                     * 判断参数 ConfigRules 是否已赋值
                     * @return ConfigRules 是否已赋值
                     * 
                     */
                    bool ConfigRulesHasBeenSet() const;

                private:

                    /**
                     * 合规包ID
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_compliancePackName;
                    bool m_compliancePackNameHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 合规包风险等级1：高风险。
2：中风险。
3：低风险。
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 合规包规则信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CompliancePackRuleForManage> m_configRules;
                    bool m_configRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_SYSTEMCOMPLIANCEPACK_H_
