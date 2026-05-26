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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAPISECSENSITIVERULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAPISECSENSITIVERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ApiSecCustomSensitiveRule.h>
#include <tencentcloud/waf/v20180125/model/ApiSecExtractRule.h>
#include <tencentcloud/waf/v20180125/model/ApiSecPrivilegeRule.h>
#include <tencentcloud/waf/v20180125/model/ApiSecSceneRule.h>
#include <tencentcloud/waf/v20180125/model/ApiSecCustomEventRule.h>
#include <tencentcloud/waf/v20180125/model/ApiSecExcludeRule.h>
#include <tencentcloud/waf/v20180125/model/ApiSecSensitiveWhiteRule.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyApiSecSensitiveRule请求参数结构体
                */
                class ModifyApiSecSensitiveRuleRequest : public AbstractModel
                {
                public:
                    ModifyApiSecSensitiveRuleRequest();
                    ~ModifyApiSecSensitiveRuleRequest() = default;
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
                     * 获取<p>1表示开，0表示关，3表示删除</p>
                     * @return Status <p>1表示开，0表示关，3表示删除</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>1表示开，0表示关，3表示删除</p>
                     * @param _status <p>1表示开，0表示关，3表示删除</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>规则名称</p>
                     * @return RuleName <p>规则名称</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>规则名称</p>
                     * @param _ruleName <p>规则名称</p>
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
                     * 获取<p>rulename列表，批量操作的时候填改值</p>
                     * @return RuleNameList <p>rulename列表，批量操作的时候填改值</p>
                     * 
                     */
                    std::vector<std::string> GetRuleNameList() const;

                    /**
                     * 设置<p>rulename列表，批量操作的时候填改值</p>
                     * @param _ruleNameList <p>rulename列表，批量操作的时候填改值</p>
                     * 
                     */
                    void SetRuleNameList(const std::vector<std::string>& _ruleNameList);

                    /**
                     * 判断参数 RuleNameList 是否已赋值
                     * @return RuleNameList 是否已赋值
                     * 
                     */
                    bool RuleNameListHasBeenSet() const;

                    /**
                     * 获取<p>客户自定义配置</p>
                     * @return CustomRule <p>客户自定义配置</p>
                     * 
                     */
                    ApiSecCustomSensitiveRule GetCustomRule() const;

                    /**
                     * 设置<p>客户自定义配置</p>
                     * @param _customRule <p>客户自定义配置</p>
                     * 
                     */
                    void SetCustomRule(const ApiSecCustomSensitiveRule& _customRule);

                    /**
                     * 判断参数 CustomRule 是否已赋值
                     * @return CustomRule 是否已赋值
                     * 
                     */
                    bool CustomRuleHasBeenSet() const;

                    /**
                     * 获取<p>批量操作的时候的api提取规则</p>
                     * @return ApiExtractRuleName <p>批量操作的时候的api提取规则</p>
                     * 
                     */
                    std::vector<std::string> GetApiExtractRuleName() const;

                    /**
                     * 设置<p>批量操作的时候的api提取规则</p>
                     * @param _apiExtractRuleName <p>批量操作的时候的api提取规则</p>
                     * 
                     */
                    void SetApiExtractRuleName(const std::vector<std::string>& _apiExtractRuleName);

                    /**
                     * 判断参数 ApiExtractRuleName 是否已赋值
                     * @return ApiExtractRuleName 是否已赋值
                     * 
                     */
                    bool ApiExtractRuleNameHasBeenSet() const;

                    /**
                     * 获取<p>api提取规则内容</p>
                     * @return CustomApiExtractRule <p>api提取规则内容</p>
                     * 
                     */
                    ApiSecExtractRule GetCustomApiExtractRule() const;

                    /**
                     * 设置<p>api提取规则内容</p>
                     * @param _customApiExtractRule <p>api提取规则内容</p>
                     * 
                     */
                    void SetCustomApiExtractRule(const ApiSecExtractRule& _customApiExtractRule);

                    /**
                     * 判断参数 CustomApiExtractRule 是否已赋值
                     * @return CustomApiExtractRule 是否已赋值
                     * 
                     */
                    bool CustomApiExtractRuleHasBeenSet() const;

                    /**
                     * 获取<p>匹配操作时候的api鉴权规则</p>
                     * @return ApiSecPrivilegeRuleName <p>匹配操作时候的api鉴权规则</p>
                     * 
                     */
                    std::vector<std::string> GetApiSecPrivilegeRuleName() const;

                    /**
                     * 设置<p>匹配操作时候的api鉴权规则</p>
                     * @param _apiSecPrivilegeRuleName <p>匹配操作时候的api鉴权规则</p>
                     * 
                     */
                    void SetApiSecPrivilegeRuleName(const std::vector<std::string>& _apiSecPrivilegeRuleName);

                    /**
                     * 判断参数 ApiSecPrivilegeRuleName 是否已赋值
                     * @return ApiSecPrivilegeRuleName 是否已赋值
                     * 
                     */
                    bool ApiSecPrivilegeRuleNameHasBeenSet() const;

                    /**
                     * 获取<p>自定义api鉴权规则</p>
                     * @return ApiSecPrivilegeRule <p>自定义api鉴权规则</p>
                     * 
                     */
                    ApiSecPrivilegeRule GetApiSecPrivilegeRule() const;

                    /**
                     * 设置<p>自定义api鉴权规则</p>
                     * @param _apiSecPrivilegeRule <p>自定义api鉴权规则</p>
                     * 
                     */
                    void SetApiSecPrivilegeRule(const ApiSecPrivilegeRule& _apiSecPrivilegeRule);

                    /**
                     * 判断参数 ApiSecPrivilegeRule 是否已赋值
                     * @return ApiSecPrivilegeRule 是否已赋值
                     * 
                     */
                    bool ApiSecPrivilegeRuleHasBeenSet() const;

                    /**
                     * 获取<p>批量操作的时候的自定义场景列表</p>
                     * @return ApiSecSceneRuleNameList <p>批量操作的时候的自定义场景列表</p>
                     * 
                     */
                    std::vector<std::string> GetApiSecSceneRuleNameList() const;

                    /**
                     * 设置<p>批量操作的时候的自定义场景列表</p>
                     * @param _apiSecSceneRuleNameList <p>批量操作的时候的自定义场景列表</p>
                     * 
                     */
                    void SetApiSecSceneRuleNameList(const std::vector<std::string>& _apiSecSceneRuleNameList);

                    /**
                     * 判断参数 ApiSecSceneRuleNameList 是否已赋值
                     * @return ApiSecSceneRuleNameList 是否已赋值
                     * 
                     */
                    bool ApiSecSceneRuleNameListHasBeenSet() const;

                    /**
                     * 获取<p>单条自定义api场景规则</p>
                     * @return ApiSecSceneRule <p>单条自定义api场景规则</p>
                     * 
                     */
                    ApiSecSceneRule GetApiSecSceneRule() const;

                    /**
                     * 设置<p>单条自定义api场景规则</p>
                     * @param _apiSecSceneRule <p>单条自定义api场景规则</p>
                     * 
                     */
                    void SetApiSecSceneRule(const ApiSecSceneRule& _apiSecSceneRule);

                    /**
                     * 判断参数 ApiSecSceneRule 是否已赋值
                     * @return ApiSecSceneRule 是否已赋值
                     * 
                     */
                    bool ApiSecSceneRuleHasBeenSet() const;

                    /**
                     * 获取<p>批量操作的时候的自定义事件规则列表</p>
                     * @return ApiSecCustomEventRuleNameList <p>批量操作的时候的自定义事件规则列表</p>
                     * 
                     */
                    std::vector<std::string> GetApiSecCustomEventRuleNameList() const;

                    /**
                     * 设置<p>批量操作的时候的自定义事件规则列表</p>
                     * @param _apiSecCustomEventRuleNameList <p>批量操作的时候的自定义事件规则列表</p>
                     * 
                     */
                    void SetApiSecCustomEventRuleNameList(const std::vector<std::string>& _apiSecCustomEventRuleNameList);

                    /**
                     * 判断参数 ApiSecCustomEventRuleNameList 是否已赋值
                     * @return ApiSecCustomEventRuleNameList 是否已赋值
                     * 
                     */
                    bool ApiSecCustomEventRuleNameListHasBeenSet() const;

                    /**
                     * 获取<p>自定义事件规则</p>
                     * @return ApiSecCustomEventRuleRule <p>自定义事件规则</p>
                     * 
                     */
                    ApiSecCustomEventRule GetApiSecCustomEventRuleRule() const;

                    /**
                     * 设置<p>自定义事件规则</p>
                     * @param _apiSecCustomEventRuleRule <p>自定义事件规则</p>
                     * 
                     */
                    void SetApiSecCustomEventRuleRule(const ApiSecCustomEventRule& _apiSecCustomEventRuleRule);

                    /**
                     * 判断参数 ApiSecCustomEventRuleRule 是否已赋值
                     * @return ApiSecCustomEventRuleRule 是否已赋值
                     * 
                     */
                    bool ApiSecCustomEventRuleRuleHasBeenSet() const;

                    /**
                     * 获取<p>批量操作的时候的无效api排除规则</p>
                     * @return ApiExcludeRuleName <p>批量操作的时候的无效api排除规则</p>
                     * 
                     */
                    std::vector<std::string> GetApiExcludeRuleName() const;

                    /**
                     * 设置<p>批量操作的时候的无效api排除规则</p>
                     * @param _apiExcludeRuleName <p>批量操作的时候的无效api排除规则</p>
                     * 
                     */
                    void SetApiExcludeRuleName(const std::vector<std::string>& _apiExcludeRuleName);

                    /**
                     * 判断参数 ApiExcludeRuleName 是否已赋值
                     * @return ApiExcludeRuleName 是否已赋值
                     * 
                     */
                    bool ApiExcludeRuleNameHasBeenSet() const;

                    /**
                     * 获取<p>无效api排除规则</p>
                     * @return CustomApiExcludeRule <p>无效api排除规则</p>
                     * 
                     */
                    ApiSecExcludeRule GetCustomApiExcludeRule() const;

                    /**
                     * 设置<p>无效api排除规则</p>
                     * @param _customApiExcludeRule <p>无效api排除规则</p>
                     * 
                     */
                    void SetCustomApiExcludeRule(const ApiSecExcludeRule& _customApiExcludeRule);

                    /**
                     * 判断参数 CustomApiExcludeRule 是否已赋值
                     * @return CustomApiExcludeRule 是否已赋值
                     * 
                     */
                    bool CustomApiExcludeRuleHasBeenSet() const;

                    /**
                     * 获取<p>批量操作时的敏感数据加白规则名称列表</p>
                     * @return ApiSecSensitiveWhiteRuleNameList <p>批量操作时的敏感数据加白规则名称列表</p>
                     * 
                     */
                    std::vector<std::string> GetApiSecSensitiveWhiteRuleNameList() const;

                    /**
                     * 设置<p>批量操作时的敏感数据加白规则名称列表</p>
                     * @param _apiSecSensitiveWhiteRuleNameList <p>批量操作时的敏感数据加白规则名称列表</p>
                     * 
                     */
                    void SetApiSecSensitiveWhiteRuleNameList(const std::vector<std::string>& _apiSecSensitiveWhiteRuleNameList);

                    /**
                     * 判断参数 ApiSecSensitiveWhiteRuleNameList 是否已赋值
                     * @return ApiSecSensitiveWhiteRuleNameList 是否已赋值
                     * 
                     */
                    bool ApiSecSensitiveWhiteRuleNameListHasBeenSet() const;

                    /**
                     * 获取<p>敏感数据加白规则</p>
                     * @return ApiSecSensitiveWhiteRuleRule <p>敏感数据加白规则</p>
                     * 
                     */
                    ApiSecSensitiveWhiteRule GetApiSecSensitiveWhiteRuleRule() const;

                    /**
                     * 设置<p>敏感数据加白规则</p>
                     * @param _apiSecSensitiveWhiteRuleRule <p>敏感数据加白规则</p>
                     * 
                     */
                    void SetApiSecSensitiveWhiteRuleRule(const ApiSecSensitiveWhiteRule& _apiSecSensitiveWhiteRuleRule);

                    /**
                     * 判断参数 ApiSecSensitiveWhiteRuleRule 是否已赋值
                     * @return ApiSecSensitiveWhiteRuleRule 是否已赋值
                     * 
                     */
                    bool ApiSecSensitiveWhiteRuleRuleHasBeenSet() const;

                private:

                    /**
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>1表示开，0表示关，3表示删除</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>规则名称</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>rulename列表，批量操作的时候填改值</p>
                     */
                    std::vector<std::string> m_ruleNameList;
                    bool m_ruleNameListHasBeenSet;

                    /**
                     * <p>客户自定义配置</p>
                     */
                    ApiSecCustomSensitiveRule m_customRule;
                    bool m_customRuleHasBeenSet;

                    /**
                     * <p>批量操作的时候的api提取规则</p>
                     */
                    std::vector<std::string> m_apiExtractRuleName;
                    bool m_apiExtractRuleNameHasBeenSet;

                    /**
                     * <p>api提取规则内容</p>
                     */
                    ApiSecExtractRule m_customApiExtractRule;
                    bool m_customApiExtractRuleHasBeenSet;

                    /**
                     * <p>匹配操作时候的api鉴权规则</p>
                     */
                    std::vector<std::string> m_apiSecPrivilegeRuleName;
                    bool m_apiSecPrivilegeRuleNameHasBeenSet;

                    /**
                     * <p>自定义api鉴权规则</p>
                     */
                    ApiSecPrivilegeRule m_apiSecPrivilegeRule;
                    bool m_apiSecPrivilegeRuleHasBeenSet;

                    /**
                     * <p>批量操作的时候的自定义场景列表</p>
                     */
                    std::vector<std::string> m_apiSecSceneRuleNameList;
                    bool m_apiSecSceneRuleNameListHasBeenSet;

                    /**
                     * <p>单条自定义api场景规则</p>
                     */
                    ApiSecSceneRule m_apiSecSceneRule;
                    bool m_apiSecSceneRuleHasBeenSet;

                    /**
                     * <p>批量操作的时候的自定义事件规则列表</p>
                     */
                    std::vector<std::string> m_apiSecCustomEventRuleNameList;
                    bool m_apiSecCustomEventRuleNameListHasBeenSet;

                    /**
                     * <p>自定义事件规则</p>
                     */
                    ApiSecCustomEventRule m_apiSecCustomEventRuleRule;
                    bool m_apiSecCustomEventRuleRuleHasBeenSet;

                    /**
                     * <p>批量操作的时候的无效api排除规则</p>
                     */
                    std::vector<std::string> m_apiExcludeRuleName;
                    bool m_apiExcludeRuleNameHasBeenSet;

                    /**
                     * <p>无效api排除规则</p>
                     */
                    ApiSecExcludeRule m_customApiExcludeRule;
                    bool m_customApiExcludeRuleHasBeenSet;

                    /**
                     * <p>批量操作时的敏感数据加白规则名称列表</p>
                     */
                    std::vector<std::string> m_apiSecSensitiveWhiteRuleNameList;
                    bool m_apiSecSensitiveWhiteRuleNameListHasBeenSet;

                    /**
                     * <p>敏感数据加白规则</p>
                     */
                    ApiSecSensitiveWhiteRule m_apiSecSensitiveWhiteRuleRule;
                    bool m_apiSecSensitiveWhiteRuleRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAPISECSENSITIVERULEREQUEST_H_
