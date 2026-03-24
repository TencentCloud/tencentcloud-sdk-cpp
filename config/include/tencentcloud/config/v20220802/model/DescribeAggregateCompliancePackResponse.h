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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBEAGGREGATECOMPLIANCEPACKRESPONSE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBEAGGREGATECOMPLIANCEPACKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/ComplianceConfigRule.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * DescribeAggregateCompliancePack返回参数结构体
                */
                class DescribeAggregateCompliancePackResponse : public AbstractModel
                {
                public:
                    DescribeAggregateCompliancePackResponse();
                    ~DescribeAggregateCompliancePackResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取合规包名称
                     * @return CompliancePackName 合规包名称
                     * 
                     */
                    std::string GetCompliancePackName() const;

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
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return RiskLevel 风险等级
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取合规包规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigRules 合规包规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ComplianceConfigRule> GetConfigRules() const;

                    /**
                     * 判断参数 ConfigRules 是否已赋值
                     * @return ConfigRules 是否已赋值
                     * 
                     */
                    bool ConfigRulesHasBeenSet() const;

                    /**
                     * 获取合规包id
                     * @return CompliancePackId 合规包id
                     * 
                     */
                    std::string GetCompliancePackId() const;

                    /**
                     * 判断参数 CompliancePackId 是否已赋值
                     * @return CompliancePackId 是否已赋值
                     * 
                     */
                    bool CompliancePackIdHasBeenSet() const;

                    /**
                     * 获取合规包状态
                     * @return Status 合规包状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 合规包名称
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
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 风险等级
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 合规包规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ComplianceConfigRule> m_configRules;
                    bool m_configRulesHasBeenSet;

                    /**
                     * 合规包id
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                    /**
                     * 合规包状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBEAGGREGATECOMPLIANCEPACKRESPONSE_H_
