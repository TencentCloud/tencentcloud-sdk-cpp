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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGCOMPLIANCEPACK_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGCOMPLIANCEPACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * 用户合规包信息
                */
                class ConfigCompliancePack : public AbstractModel
                {
                public:
                    ConfigCompliancePack();
                    ~ConfigCompliancePack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合规包状态
                     * @return Status 合规包状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置合规包状态
                     * @param _status 合规包状态
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
                     * 获取合规包名称
                     * @return CompliancePackName 合规包名称
                     * 
                     */
                    std::string GetCompliancePackName() const;

                    /**
                     * 设置合规包名称
                     * @param _compliancePackName 合规包名称
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
                     * 获取风险等级
                     * @return RiskLevel 风险等级
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置风险等级
                     * @param _riskLevel 风险等级
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
                     * 获取评估结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComplianceResult 评估结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComplianceResult() const;

                    /**
                     * 设置评估结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _complianceResult 评估结果
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取不合规规则名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoCompliantNames 不合规规则名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNoCompliantNames() const;

                    /**
                     * 设置不合规规则名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noCompliantNames 不合规规则名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNoCompliantNames(const std::vector<std::string>& _noCompliantNames);

                    /**
                     * 判断参数 NoCompliantNames 是否已赋值
                     * @return NoCompliantNames 是否已赋值
                     * 
                     */
                    bool NoCompliantNamesHasBeenSet() const;

                    /**
                     * 获取合规包规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleCount 合规包规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleCount() const;

                    /**
                     * 设置合规包规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleCount 合规包规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleCount(const uint64_t& _ruleCount);

                    /**
                     * 判断参数 RuleCount 是否已赋值
                     * @return RuleCount 是否已赋值
                     * 
                     */
                    bool RuleCountHasBeenSet() const;

                private:

                    /**
                     * 合规包状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 合规包ID
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 合规包名称
                     */
                    std::string m_compliancePackName;
                    bool m_compliancePackNameHasBeenSet;

                    /**
                     * 风险等级
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 评估结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 不合规规则名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_noCompliantNames;
                    bool m_noCompliantNamesHasBeenSet;

                    /**
                     * 合规包规则数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleCount;
                    bool m_ruleCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGCOMPLIANCEPACK_H_
