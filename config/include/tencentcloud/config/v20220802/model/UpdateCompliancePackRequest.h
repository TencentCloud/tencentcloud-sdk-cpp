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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATECOMPLIANCEPACKREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATECOMPLIANCEPACKREQUEST_H_

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
                * UpdateCompliancePack请求参数结构体
                */
                class UpdateCompliancePackRequest : public AbstractModel
                {
                public:
                    UpdateCompliancePackRequest();
                    ~UpdateCompliancePackRequest() = default;
                    std::string ToJsonString() const;


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
                     * <p>合规包ID</p>
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                    /**
                     * <p>合规包规则</p>
                     */
                    std::vector<CompliancePackRule> m_configRules;
                    bool m_configRulesHasBeenSet;

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

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATECOMPLIANCEPACKREQUEST_H_
