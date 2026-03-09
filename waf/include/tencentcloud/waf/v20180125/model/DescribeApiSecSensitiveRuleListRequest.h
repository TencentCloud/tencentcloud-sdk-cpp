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
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取是否查询api提取规则策略，true表示查询
                     * @return IsQueryApiExtractRule 是否查询api提取规则策略，true表示查询
                     * 
                     */
                    bool GetIsQueryApiExtractRule() const;

                    /**
                     * 设置是否查询api提取规则策略，true表示查询
                     * @param _isQueryApiExtractRule 是否查询api提取规则策略，true表示查询
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
                     * 获取是否查询api鉴权规则
                     * @return IsQueryApiPrivilegeRule 是否查询api鉴权规则
                     * 
                     */
                    bool GetIsQueryApiPrivilegeRule() const;

                    /**
                     * 设置是否查询api鉴权规则
                     * @param _isQueryApiPrivilegeRule 是否查询api鉴权规则
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
                     * 获取是否查询api场景规则
                     * @return IsQueryApiSceneRule 是否查询api场景规则
                     * 
                     */
                    bool GetIsQueryApiSceneRule() const;

                    /**
                     * 设置是否查询api场景规则
                     * @param _isQueryApiSceneRule 是否查询api场景规则
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
                     * 获取查询鉴权配置的时候，该rule只返回鉴权配置的规则
                     * @return RuleName 查询鉴权配置的时候，该rule只返回鉴权配置的规则
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置查询鉴权配置的时候，该rule只返回鉴权配置的规则
                     * @param _ruleName 查询鉴权配置的时候，该rule只返回鉴权配置的规则
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
                     * 获取是否查询api自定义事件规则
                     * @return IsQueryApiCustomEventRule 是否查询api自定义事件规则
                     * 
                     */
                    bool GetIsQueryApiCustomEventRule() const;

                    /**
                     * 设置是否查询api自定义事件规则
                     * @param _isQueryApiCustomEventRule 是否查询api自定义事件规则
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
                     * 获取是否查询无效api排除策略
                     * @return IsQueryApiExcludeRule 是否查询无效api排除策略
                     * 
                     */
                    bool GetIsQueryApiExcludeRule() const;

                    /**
                     * 设置是否查询无效api排除策略
                     * @param _isQueryApiExcludeRule 是否查询无效api排除策略
                     * 
                     */
                    void SetIsQueryApiExcludeRule(const bool& _isQueryApiExcludeRule);

                    /**
                     * 判断参数 IsQueryApiExcludeRule 是否已赋值
                     * @return IsQueryApiExcludeRule 是否已赋值
                     * 
                     */
                    bool IsQueryApiExcludeRuleHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 是否查询api提取规则策略，true表示查询
                     */
                    bool m_isQueryApiExtractRule;
                    bool m_isQueryApiExtractRuleHasBeenSet;

                    /**
                     * 是否查询api鉴权规则
                     */
                    bool m_isQueryApiPrivilegeRule;
                    bool m_isQueryApiPrivilegeRuleHasBeenSet;

                    /**
                     * 是否查询api场景规则
                     */
                    bool m_isQueryApiSceneRule;
                    bool m_isQueryApiSceneRuleHasBeenSet;

                    /**
                     * 查询鉴权配置的时候，该rule只返回鉴权配置的规则
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 是否查询api自定义事件规则
                     */
                    bool m_isQueryApiCustomEventRule;
                    bool m_isQueryApiCustomEventRuleHasBeenSet;

                    /**
                     * 是否查询无效api排除策略
                     */
                    bool m_isQueryApiExcludeRule;
                    bool m_isQueryApiExcludeRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPISECSENSITIVERULELISTREQUEST_H_
