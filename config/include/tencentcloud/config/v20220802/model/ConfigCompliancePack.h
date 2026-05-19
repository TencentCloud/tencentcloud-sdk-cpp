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
                     * 获取<p>合规包状态</p>
                     * @return Status <p>合规包状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>合规包状态</p>
                     * @param _status <p>合规包状态</p>
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
                     * 获取<p>合规包ID</p>
                     * @return CompliancePackId <p>合规包ID</p>
                     * 
                     */
                    std::string GetCompliancePackId() const;

                    /**
                     * 设置<p>合规包ID</p>
                     * @param _compliancePackId <p>合规包ID</p>
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
                     * 获取<p>合规包名称</p>
                     * @return CompliancePackName <p>合规包名称</p>
                     * 
                     */
                    std::string GetCompliancePackName() const;

                    /**
                     * 设置<p>合规包名称</p>
                     * @param _compliancePackName <p>合规包名称</p>
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
                     * 获取<p>评估结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComplianceResult <p>评估结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComplianceResult() const;

                    /**
                     * 设置<p>评估结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _complianceResult <p>评估结果</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>不合规规则名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoCompliantNames <p>不合规规则名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNoCompliantNames() const;

                    /**
                     * 设置<p>不合规规则名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noCompliantNames <p>不合规规则名</p>
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
                     * 获取<p>合规包规则数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleCount <p>合规包规则数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleCount() const;

                    /**
                     * 设置<p>合规包规则数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleCount <p>合规包规则数</p>
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
                     * <p>合规包状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>合规包ID</p>
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                    /**
                     * <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>合规包名称</p>
                     */
                    std::string m_compliancePackName;
                    bool m_compliancePackNameHasBeenSet;

                    /**
                     * <p>风险等级</p>
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>评估结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>不合规规则名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_noCompliantNames;
                    bool m_noCompliantNamesHasBeenSet;

                    /**
                     * <p>合规包规则数</p>
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
