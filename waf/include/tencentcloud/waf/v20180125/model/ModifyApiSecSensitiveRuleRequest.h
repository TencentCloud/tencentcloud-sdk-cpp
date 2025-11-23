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
                     * 获取1表示开，0表示关，3表示删除
                     * @return Status 1表示开，0表示关，3表示删除
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置1表示开，0表示关，3表示删除
                     * @param _status 1表示开，0表示关，3表示删除
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
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
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
                     * 获取客户自定义配置
                     * @return CustomRule 客户自定义配置
                     * 
                     */
                    ApiSecCustomSensitiveRule GetCustomRule() const;

                    /**
                     * 设置客户自定义配置
                     * @param _customRule 客户自定义配置
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
                     * 获取rulename列表，批量操作的时候填改值
                     * @return RuleNameList rulename列表，批量操作的时候填改值
                     * 
                     */
                    std::vector<std::string> GetRuleNameList() const;

                    /**
                     * 设置rulename列表，批量操作的时候填改值
                     * @param _ruleNameList rulename列表，批量操作的时候填改值
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
                     * 获取api提取规则内容
                     * @return CustomApiExtractRule api提取规则内容
                     * 
                     */
                    ApiSecExtractRule GetCustomApiExtractRule() const;

                    /**
                     * 设置api提取规则内容
                     * @param _customApiExtractRule api提取规则内容
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
                     * 获取批量操作的时候的api提取规则
                     * @return ApiExtractRuleName 批量操作的时候的api提取规则
                     * 
                     */
                    std::vector<std::string> GetApiExtractRuleName() const;

                    /**
                     * 设置批量操作的时候的api提取规则
                     * @param _apiExtractRuleName 批量操作的时候的api提取规则
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
                     * 获取自定义api鉴权规则
                     * @return ApiSecPrivilegeRule 自定义api鉴权规则
                     * 
                     */
                    ApiSecPrivilegeRule GetApiSecPrivilegeRule() const;

                    /**
                     * 设置自定义api鉴权规则
                     * @param _apiSecPrivilegeRule 自定义api鉴权规则
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
                     * 获取匹配操作时候的api鉴权规则
                     * @return ApiSecPrivilegeRuleName 匹配操作时候的api鉴权规则
                     * 
                     */
                    std::vector<std::string> GetApiSecPrivilegeRuleName() const;

                    /**
                     * 设置匹配操作时候的api鉴权规则
                     * @param _apiSecPrivilegeRuleName 匹配操作时候的api鉴权规则
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
                     * 获取批量操作的时候的自定义场景列表
                     * @return ApiSecSceneRuleNameList 批量操作的时候的自定义场景列表
                     * 
                     */
                    std::vector<std::string> GetApiSecSceneRuleNameList() const;

                    /**
                     * 设置批量操作的时候的自定义场景列表
                     * @param _apiSecSceneRuleNameList 批量操作的时候的自定义场景列表
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
                     * 获取单条自定义api场景规则
                     * @return ApiSecSceneRule 单条自定义api场景规则
                     * 
                     */
                    ApiSecSceneRule GetApiSecSceneRule() const;

                    /**
                     * 设置单条自定义api场景规则
                     * @param _apiSecSceneRule 单条自定义api场景规则
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
                     * 获取批量操作的时候的自定义事件规则列表
                     * @return ApiSecCustomEventRuleNameList 批量操作的时候的自定义事件规则列表
                     * 
                     */
                    std::vector<std::string> GetApiSecCustomEventRuleNameList() const;

                    /**
                     * 设置批量操作的时候的自定义事件规则列表
                     * @param _apiSecCustomEventRuleNameList 批量操作的时候的自定义事件规则列表
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
                     * 获取自定义事件规则
                     * @return ApiSecCustomEventRuleRule 自定义事件规则
                     * 
                     */
                    ApiSecCustomEventRule GetApiSecCustomEventRuleRule() const;

                    /**
                     * 设置自定义事件规则
                     * @param _apiSecCustomEventRuleRule 自定义事件规则
                     * 
                     */
                    void SetApiSecCustomEventRuleRule(const ApiSecCustomEventRule& _apiSecCustomEventRuleRule);

                    /**
                     * 判断参数 ApiSecCustomEventRuleRule 是否已赋值
                     * @return ApiSecCustomEventRuleRule 是否已赋值
                     * 
                     */
                    bool ApiSecCustomEventRuleRuleHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 1表示开，0表示关，3表示删除
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 客户自定义配置
                     */
                    ApiSecCustomSensitiveRule m_customRule;
                    bool m_customRuleHasBeenSet;

                    /**
                     * rulename列表，批量操作的时候填改值
                     */
                    std::vector<std::string> m_ruleNameList;
                    bool m_ruleNameListHasBeenSet;

                    /**
                     * api提取规则内容
                     */
                    ApiSecExtractRule m_customApiExtractRule;
                    bool m_customApiExtractRuleHasBeenSet;

                    /**
                     * 批量操作的时候的api提取规则
                     */
                    std::vector<std::string> m_apiExtractRuleName;
                    bool m_apiExtractRuleNameHasBeenSet;

                    /**
                     * 自定义api鉴权规则
                     */
                    ApiSecPrivilegeRule m_apiSecPrivilegeRule;
                    bool m_apiSecPrivilegeRuleHasBeenSet;

                    /**
                     * 匹配操作时候的api鉴权规则
                     */
                    std::vector<std::string> m_apiSecPrivilegeRuleName;
                    bool m_apiSecPrivilegeRuleNameHasBeenSet;

                    /**
                     * 批量操作的时候的自定义场景列表
                     */
                    std::vector<std::string> m_apiSecSceneRuleNameList;
                    bool m_apiSecSceneRuleNameListHasBeenSet;

                    /**
                     * 单条自定义api场景规则
                     */
                    ApiSecSceneRule m_apiSecSceneRule;
                    bool m_apiSecSceneRuleHasBeenSet;

                    /**
                     * 批量操作的时候的自定义事件规则列表
                     */
                    std::vector<std::string> m_apiSecCustomEventRuleNameList;
                    bool m_apiSecCustomEventRuleNameListHasBeenSet;

                    /**
                     * 自定义事件规则
                     */
                    ApiSecCustomEventRule m_apiSecCustomEventRuleRule;
                    bool m_apiSecCustomEventRuleRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAPISECSENSITIVERULEREQUEST_H_
