/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYRULEIDREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYRULEIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSecurityRuleId请求参数结构体
                */
                class DescribeSecurityRuleIdRequest : public AbstractModel
                {
                public:
                    DescribeSecurityRuleIdRequest();
                    ~DescribeSecurityRuleIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则Id数组。
                     * @return RuleIdList 规则Id数组。
                     */
                    std::vector<int64_t> GetRuleIdList() const;

                    /**
                     * 设置规则Id数组。
                     * @param RuleIdList 规则Id数组。
                     */
                    void SetRuleIdList(const std::vector<int64_t>& _ruleIdList);

                    /**
                     * 判断参数 RuleIdList 是否已赋值
                     * @return RuleIdList 是否已赋值
                     */
                    bool RuleIdListHasBeenSet() const;

                    /**
                     * 获取规则类型，取值有：
<li>waf：web托管规则；</li>
<li>acl：自定义规则；</li>
<li>rate：速率限制规则；</li>
<li>bot：Bot基础规则。</li>
                     * @return RuleType 规则类型，取值有：
<li>waf：web托管规则；</li>
<li>acl：自定义规则；</li>
<li>rate：速率限制规则；</li>
<li>bot：Bot基础规则。</li>
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型，取值有：
<li>waf：web托管规则；</li>
<li>acl：自定义规则；</li>
<li>rate：速率限制规则；</li>
<li>bot：Bot基础规则。</li>
                     * @param RuleType 规则类型，取值有：
<li>waf：web托管规则；</li>
<li>acl：自定义规则；</li>
<li>rate：速率限制规则；</li>
<li>bot：Bot基础规则。</li>
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取子域名/应用名。
                     * @return Entity 子域名/应用名。
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置子域名/应用名。
                     * @param Entity 子域名/应用名。
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                private:

                    /**
                     * 规则Id数组。
                     */
                    std::vector<int64_t> m_ruleIdList;
                    bool m_ruleIdListHasBeenSet;

                    /**
                     * 规则类型，取值有：
<li>waf：web托管规则；</li>
<li>acl：自定义规则；</li>
<li>rate：速率限制规则；</li>
<li>bot：Bot基础规则。</li>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 子域名/应用名。
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYRULEIDREQUEST_H_
