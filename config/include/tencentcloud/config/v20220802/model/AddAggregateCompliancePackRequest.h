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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDAGGREGATECOMPLIANCEPACKREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDAGGREGATECOMPLIANCEPACKREQUEST_H_

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
                * AddAggregateCompliancePack请求参数结构体
                */
                class AddAggregateCompliancePackRequest : public AbstractModel
                {
                public:
                    AddAggregateCompliancePackRequest();
                    ~AddAggregateCompliancePackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>合规包规则</p>
                     * @return ConfigRules <p>合规包规则</p>
                     * 
                     */
                    std::vector<CompliancePackRule> GetConfigRules() const;

                    /**
                     * 设置<p>合规包规则</p>
                     * @param _configRules <p>合规包规则</p>
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
                     * 获取<p>风险等级<br>1：高风险。<br>2：中风险。<br>3：低风险。</p>
                     * @return RiskLevel <p>风险等级<br>1：高风险。<br>2：中风险。<br>3：低风险。</p>
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置<p>风险等级<br>1：高风险。<br>2：中风险。<br>3：低风险。</p>
                     * @param _riskLevel <p>风险等级<br>1：高风险。<br>2：中风险。<br>3：低风险。</p>
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
                     * 获取<p>账号组ID</p>
                     * @return AccountGroupId <p>账号组ID</p>
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置<p>账号组ID</p>
                     * @param _accountGroupId <p>账号组ID</p>
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
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * <p>合规包规则</p>
                     */
                    std::vector<CompliancePackRule> m_configRules;
                    bool m_configRulesHasBeenSet;

                    /**
                     * <p>风险等级<br>1：高风险。<br>2：中风险。<br>3：低风险。</p>
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>合规包名称</p>
                     */
                    std::string m_compliancePackName;
                    bool m_compliancePackNameHasBeenSet;

                    /**
                     * <p>账号组ID</p>
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDAGGREGATECOMPLIANCEPACKREQUEST_H_
