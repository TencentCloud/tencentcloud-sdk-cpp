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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMRISKSTRATEGYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMRISKSTRATEGYREQUEST_H_

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
                * ModifyDspmRiskStrategy请求参数结构体
                */
                class ModifyDspmRiskStrategyRequest : public AbstractModel
                {
                public:
                    ModifyDspmRiskStrategyRequest();
                    ~ModifyDspmRiskStrategyRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>风险策略类型</p>
                     * @return StrategyType <p>风险策略类型</p>
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置<p>风险策略类型</p>
                     * @param _strategyType <p>风险策略类型</p>
                     * 
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否启用</p>
                     * @return IsEnabled <p>是否启用</p>
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置<p>是否启用</p>
                     * @param _isEnabled <p>是否启用</p>
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
                     * 获取<p>策略内容，如：{     ThresholdValue: &quot;100&quot; }</p>
                     * @return Rule <p>策略内容，如：{     ThresholdValue: &quot;100&quot; }</p>
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置<p>策略内容，如：{     ThresholdValue: &quot;100&quot; }</p>
                     * @param _rule <p>策略内容，如：{     ThresholdValue: &quot;100&quot; }</p>
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
                     * 获取<p>可选值：Info/Low/Medium/High</p>
                     * @return RiskLevel <p>可选值：Info/Low/Medium/High</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>可选值：Info/Low/Medium/High</p>
                     * @param _riskLevel <p>可选值：Info/Low/Medium/High</p>
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
                     * 获取<p>策略id</p>
                     * @return StrategyId <p>策略id</p>
                     * 
                     */
                    std::vector<uint64_t> GetStrategyId() const;

                    /**
                     * 设置<p>策略id</p>
                     * @param _strategyId <p>策略id</p>
                     * 
                     */
                    void SetStrategyId(const std::vector<uint64_t>& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

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
                     * 获取<p>支持的数据库类型</p>
                     * @return DbTypes <p>支持的数据库类型</p>
                     * 
                     */
                    std::string GetDbTypes() const;

                    /**
                     * 设置<p>支持的数据库类型</p>
                     * @param _dbTypes <p>支持的数据库类型</p>
                     * 
                     */
                    void SetDbTypes(const std::string& _dbTypes);

                    /**
                     * 判断参数 DbTypes 是否已赋值
                     * @return DbTypes 是否已赋值
                     * 
                     */
                    bool DbTypesHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>风险策略类型</p>
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * <p>是否启用</p>
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * <p>策略内容，如：{     ThresholdValue: &quot;100&quot; }</p>
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * <p>可选值：Info/Low/Medium/High</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>策略id</p>
                     */
                    std::vector<uint64_t> m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * <p>策略名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>策略描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>支持的数据库类型</p>
                     */
                    std::string m_dbTypes;
                    bool m_dbTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMRISKSTRATEGYREQUEST_H_
