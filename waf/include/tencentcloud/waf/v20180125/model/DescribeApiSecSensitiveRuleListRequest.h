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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPISECSENSITIVERULELISTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPISECSENSITIVERULELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeApiSecSensitiveRuleList请求参数结构体
                */
                class DescribeApiSecSensitiveRuleListRequest : public AbstractModel
                {
                public:
                    DescribeApiSecSensitiveRuleListRequest();
                    ~DescribeApiSecSensitiveRuleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>域名</p>
                     * @return Domain <p>域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
                     * @param _domain <p>域名</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>是否查询api提取规则策略，true表示查询</p>
                     * @return IsQueryApiExtractRule <p>是否查询api提取规则策略，true表示查询</p>
                     * 
                     */
                    bool GetIsQueryApiExtractRule() const;

                    /**
                     * 设置<p>是否查询api提取规则策略，true表示查询</p>
                     * @param _isQueryApiExtractRule <p>是否查询api提取规则策略，true表示查询</p>
                     * 
                     */
                    void SetIsQueryApiExtractRule(const bool& _isQueryApiExtractRule);

                    /**
                     * 判断参数 IsQueryApiExtractRule 是否已赋值
                     * @return IsQueryApiExtractRule 是否已赋值
                     * 
                     */
                    bool IsQueryApiExtractRuleHasBeenSet() const;

                    /**
                     * 获取<p>是否查询api鉴权规则</p>
                     * @return IsQueryApiPrivilegeRule <p>是否查询api鉴权规则</p>
                     * 
                     */
                    bool GetIsQueryApiPrivilegeRule() const;

                    /**
                     * 设置<p>是否查询api鉴权规则</p>
                     * @param _isQueryApiPrivilegeRule <p>是否查询api鉴权规则</p>
                     * 
                     */
                    void SetIsQueryApiPrivilegeRule(const bool& _isQueryApiPrivilegeRule);

                    /**
                     * 判断参数 IsQueryApiPrivilegeRule 是否已赋值
                     * @return IsQueryApiPrivilegeRule 是否已赋值
                     * 
                     */
                    bool IsQueryApiPrivilegeRuleHasBeenSet() const;

                    /**
                     * 获取<p>是否查询api场景规则</p>
                     * @return IsQueryApiSceneRule <p>是否查询api场景规则</p>
                     * 
                     */
                    bool GetIsQueryApiSceneRule() const;

                    /**
                     * 设置<p>是否查询api场景规则</p>
                     * @param _isQueryApiSceneRule <p>是否查询api场景规则</p>
                     * 
                     */
                    void SetIsQueryApiSceneRule(const bool& _isQueryApiSceneRule);

                    /**
                     * 判断参数 IsQueryApiSceneRule 是否已赋值
                     * @return IsQueryApiSceneRule 是否已赋值
                     * 
                     */
                    bool IsQueryApiSceneRuleHasBeenSet() const;

                    /**
                     * 获取<p>查询鉴权配置的时候，该rule只返回鉴权配置的规则</p>
                     * @return RuleName <p>查询鉴权配置的时候，该rule只返回鉴权配置的规则</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>查询鉴权配置的时候，该rule只返回鉴权配置的规则</p>
                     * @param _ruleName <p>查询鉴权配置的时候，该rule只返回鉴权配置的规则</p>
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
                     * 获取<p>是否查询api自定义事件规则</p>
                     * @return IsQueryApiCustomEventRule <p>是否查询api自定义事件规则</p>
                     * 
                     */
                    bool GetIsQueryApiCustomEventRule() const;

                    /**
                     * 设置<p>是否查询api自定义事件规则</p>
                     * @param _isQueryApiCustomEventRule <p>是否查询api自定义事件规则</p>
                     * 
                     */
                    void SetIsQueryApiCustomEventRule(const bool& _isQueryApiCustomEventRule);

                    /**
                     * 判断参数 IsQueryApiCustomEventRule 是否已赋值
                     * @return IsQueryApiCustomEventRule 是否已赋值
                     * 
                     */
                    bool IsQueryApiCustomEventRuleHasBeenSet() const;

                    /**
                     * 获取<p>是否查询无效api排除策略</p>
                     * @return IsQueryApiExcludeRule <p>是否查询无效api排除策略</p>
                     * 
                     */
                    bool GetIsQueryApiExcludeRule() const;

                    /**
                     * 设置<p>是否查询无效api排除策略</p>
                     * @param _isQueryApiExcludeRule <p>是否查询无效api排除策略</p>
                     * 
                     */
                    void SetIsQueryApiExcludeRule(const bool& _isQueryApiExcludeRule);

                    /**
                     * 判断参数 IsQueryApiExcludeRule 是否已赋值
                     * @return IsQueryApiExcludeRule 是否已赋值
                     * 
                     */
                    bool IsQueryApiExcludeRuleHasBeenSet() const;

                    /**
                     * 获取<p>是否查询敏感数据加白规则</p>
                     * @return IsQueryApiSensitiveWhiteRule <p>是否查询敏感数据加白规则</p>
                     * 
                     */
                    bool GetIsQueryApiSensitiveWhiteRule() const;

                    /**
                     * 设置<p>是否查询敏感数据加白规则</p>
                     * @param _isQueryApiSensitiveWhiteRule <p>是否查询敏感数据加白规则</p>
                     * 
                     */
                    void SetIsQueryApiSensitiveWhiteRule(const bool& _isQueryApiSensitiveWhiteRule);

                    /**
                     * 判断参数 IsQueryApiSensitiveWhiteRule 是否已赋值
                     * @return IsQueryApiSensitiveWhiteRule 是否已赋值
                     * 
                     */
                    bool IsQueryApiSensitiveWhiteRuleHasBeenSet() const;

                private:

                    /**
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>是否查询api提取规则策略，true表示查询</p>
                     */
                    bool m_isQueryApiExtractRule;
                    bool m_isQueryApiExtractRuleHasBeenSet;

                    /**
                     * <p>是否查询api鉴权规则</p>
                     */
                    bool m_isQueryApiPrivilegeRule;
                    bool m_isQueryApiPrivilegeRuleHasBeenSet;

                    /**
                     * <p>是否查询api场景规则</p>
                     */
                    bool m_isQueryApiSceneRule;
                    bool m_isQueryApiSceneRuleHasBeenSet;

                    /**
                     * <p>查询鉴权配置的时候，该rule只返回鉴权配置的规则</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>是否查询api自定义事件规则</p>
                     */
                    bool m_isQueryApiCustomEventRule;
                    bool m_isQueryApiCustomEventRuleHasBeenSet;

                    /**
                     * <p>是否查询无效api排除策略</p>
                     */
                    bool m_isQueryApiExcludeRule;
                    bool m_isQueryApiExcludeRuleHasBeenSet;

                    /**
                     * <p>是否查询敏感数据加白规则</p>
                     */
                    bool m_isQueryApiSensitiveWhiteRule;
                    bool m_isQueryApiSensitiveWhiteRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPISECSENSITIVERULELISTREQUEST_H_
