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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLOGDESENSITIZECONFIG_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLOGDESENSITIZECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/AIGWCustomDesensitizeRule.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI 网关日志脱敏配置
                */
                class AIGWLogDesensitizeConfig : public AbstractModel
                {
                public:
                    AIGWLogDesensitizeConfig();
                    ~AIGWLogDesensitizeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>日志脱敏配置总开关</p>
                     * @return Enabled <p>日志脱敏配置总开关</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>日志脱敏配置总开关</p>
                     * @param _enabled <p>日志脱敏配置总开关</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>内置规则类型：Phone、IdCard、BankCard、Email、IP、Name</p>
                     * @return PredefinedRuleTypes <p>内置规则类型：Phone、IdCard、BankCard、Email、IP、Name</p>
                     * 
                     */
                    std::vector<std::string> GetPredefinedRuleTypes() const;

                    /**
                     * 设置<p>内置规则类型：Phone、IdCard、BankCard、Email、IP、Name</p>
                     * @param _predefinedRuleTypes <p>内置规则类型：Phone、IdCard、BankCard、Email、IP、Name</p>
                     * 
                     */
                    void SetPredefinedRuleTypes(const std::vector<std::string>& _predefinedRuleTypes);

                    /**
                     * 判断参数 PredefinedRuleTypes 是否已赋值
                     * @return PredefinedRuleTypes 是否已赋值
                     * 
                     */
                    bool PredefinedRuleTypesHasBeenSet() const;

                    /**
                     * 获取<p>自定义规则，最多 20 条</p>
                     * @return CustomRules <p>自定义规则，最多 20 条</p>
                     * 
                     */
                    std::vector<AIGWCustomDesensitizeRule> GetCustomRules() const;

                    /**
                     * 设置<p>自定义规则，最多 20 条</p>
                     * @param _customRules <p>自定义规则，最多 20 条</p>
                     * 
                     */
                    void SetCustomRules(const std::vector<AIGWCustomDesensitizeRule>& _customRules);

                    /**
                     * 判断参数 CustomRules 是否已赋值
                     * @return CustomRules 是否已赋值
                     * 
                     */
                    bool CustomRulesHasBeenSet() const;

                    /**
                     * 获取<p>脱敏方向：Request、Response；为空时默认两者</p>
                     * @return Scope <p>脱敏方向：Request、Response；为空时默认两者</p>
                     * 
                     */
                    std::vector<std::string> GetScope() const;

                    /**
                     * 设置<p>脱敏方向：Request、Response；为空时默认两者</p>
                     * @param _scope <p>脱敏方向：Request、Response；为空时默认两者</p>
                     * 
                     */
                    void SetScope(const std::vector<std::string>& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                private:

                    /**
                     * <p>日志脱敏配置总开关</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>内置规则类型：Phone、IdCard、BankCard、Email、IP、Name</p>
                     */
                    std::vector<std::string> m_predefinedRuleTypes;
                    bool m_predefinedRuleTypesHasBeenSet;

                    /**
                     * <p>自定义规则，最多 20 条</p>
                     */
                    std::vector<AIGWCustomDesensitizeRule> m_customRules;
                    bool m_customRulesHasBeenSet;

                    /**
                     * <p>脱敏方向：Request、Response；为空时默认两者</p>
                     */
                    std::vector<std::string> m_scope;
                    bool m_scopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLOGDESENSITIZECONFIG_H_
