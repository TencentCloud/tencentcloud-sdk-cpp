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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMRISKSTRATEGYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMRISKSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateDspmRiskStrategy请求参数结构体
                */
                class CreateDspmRiskStrategyRequest : public AbstractModel
                {
                public:
                    CreateDspmRiskStrategyRequest();
                    ~CreateDspmRiskStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>策略名</p>
                     * @return Name <p>策略名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>策略名</p>
                     * @param _name <p>策略名</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>策略规则，JSON 字符串</p>
                     * @return Rule <p>策略规则，JSON 字符串</p>
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置<p>策略规则，JSON 字符串</p>
                     * @param _rule <p>策略规则，JSON 字符串</p>
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>英文策略名</p>
                     * @return EnName <p>英文策略名</p>
                     * 
                     */
                    std::string GetEnName() const;

                    /**
                     * 设置<p>英文策略名</p>
                     * @param _enName <p>英文策略名</p>
                     * 
                     */
                    void SetEnName(const std::string& _enName);

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     * 
                     */
                    bool EnNameHasBeenSet() const;

                    /**
                     * 获取<p>策略描述</p>
                     * @return Description <p>策略描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>策略描述</p>
                     * @param _description <p>策略描述</p>
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
                     * 获取<p>英文策略描述</p>
                     * @return EnDescription <p>英文策略描述</p>
                     * 
                     */
                    std::string GetEnDescription() const;

                    /**
                     * 设置<p>英文策略描述</p>
                     * @param _enDescription <p>英文策略描述</p>
                     * 
                     */
                    void SetEnDescription(const std::string& _enDescription);

                    /**
                     * 判断参数 EnDescription 是否已赋值
                     * @return EnDescription 是否已赋值
                     * 
                     */
                    bool EnDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>风险等级，可选值：Info/Low/Medium/High。不传默认 Medium</p>
                     * @return RiskLevel <p>风险等级，可选值：Info/Low/Medium/High。不传默认 Medium</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>风险等级，可选值：Info/Low/Medium/High。不传默认 Medium</p>
                     * @param _riskLevel <p>风险等级，可选值：Info/Low/Medium/High。不传默认 Medium</p>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>是否启用。0-禁用，1-启用，不传默认启用</p>
                     * @return IsEnabled <p>是否启用。0-禁用，1-启用，不传默认启用</p>
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置<p>是否启用。0-禁用，1-启用，不传默认启用</p>
                     * @param _isEnabled <p>是否启用。0-禁用，1-启用，不传默认启用</p>
                     * 
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取<p>风险类型。当前仅支持 alarm，不传默认 alarm</p>
                     * @return RiskType <p>风险类型。当前仅支持 alarm，不传默认 alarm</p>
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置<p>风险类型。当前仅支持 alarm，不传默认 alarm</p>
                     * @param _riskType <p>风险类型。当前仅支持 alarm，不传默认 alarm</p>
                     * 
                     */
                    void SetRiskType(const std::string& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>策略类别。当前仅支持 SQLOperationAnomaly，不传默认 SQLOperationAnomaly</p>
                     * @return StrategyCategory <p>策略类别。当前仅支持 SQLOperationAnomaly，不传默认 SQLOperationAnomaly</p>
                     * 
                     */
                    std::string GetStrategyCategory() const;

                    /**
                     * 设置<p>策略类别。当前仅支持 SQLOperationAnomaly，不传默认 SQLOperationAnomaly</p>
                     * @param _strategyCategory <p>策略类别。当前仅支持 SQLOperationAnomaly，不传默认 SQLOperationAnomaly</p>
                     * 
                     */
                    void SetStrategyCategory(const std::string& _strategyCategory);

                    /**
                     * 判断参数 StrategyCategory 是否已赋值
                     * @return StrategyCategory 是否已赋值
                     * 
                     */
                    bool StrategyCategoryHasBeenSet() const;

                private:

                    /**
                     * <p>策略名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>策略规则，JSON 字符串</p>
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>英文策略名</p>
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * <p>策略描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>英文策略描述</p>
                     */
                    std::string m_enDescription;
                    bool m_enDescriptionHasBeenSet;

                    /**
                     * <p>风险等级，可选值：Info/Low/Medium/High。不传默认 Medium</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>是否启用。0-禁用，1-启用，不传默认启用</p>
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * <p>风险类型。当前仅支持 alarm，不传默认 alarm</p>
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * <p>策略类别。当前仅支持 SQLOperationAnomaly，不传默认 SQLOperationAnomaly</p>
                     */
                    std::string m_strategyCategory;
                    bool m_strategyCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMRISKSTRATEGYREQUEST_H_
