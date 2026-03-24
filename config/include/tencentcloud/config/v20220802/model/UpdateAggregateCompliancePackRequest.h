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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEAGGREGATECOMPLIANCEPACKREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEAGGREGATECOMPLIANCEPACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/CompliancePackRule.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * UpdateAggregateCompliancePack请求参数结构体
                */
                class UpdateAggregateCompliancePackRequest : public AbstractModel
                {
                public:
                    UpdateAggregateCompliancePackRequest();
                    ~UpdateAggregateCompliancePackRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取合规包规则
                     * @return ConfigRules 合规包规则
                     * 
                     */
                    std::vector<CompliancePackRule> GetConfigRules() const;

                    /**
                     * 设置合规包规则
                     * @param _configRules 合规包规则
                     * 
                     */
                    void SetConfigRules(const std::vector<CompliancePackRule>& _configRules);

                    /**
                     * 判断参数 ConfigRules 是否已赋值
                     * @return ConfigRules 是否已赋值
                     * 
                     */
                    bool ConfigRulesHasBeenSet() const;

                    /**
                     * 获取账号组ID
                     * @return AccountGroupId 账号组ID
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置账号组ID
                     * @param _accountGroupId 账号组ID
                     * 
                     */
                    void SetAccountGroupId(const std::string& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

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
                     * 合规包ID
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                    /**
                     * 合规包规则
                     */
                    std::vector<CompliancePackRule> m_configRules;
                    bool m_configRulesHasBeenSet;

                    /**
                     * 账号组ID
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEAGGREGATECOMPLIANCEPACKREQUEST_H_
