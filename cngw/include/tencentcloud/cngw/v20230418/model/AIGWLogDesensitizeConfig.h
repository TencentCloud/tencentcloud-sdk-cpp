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
                * AI 网关 B 层日志脱敏配置（写入 LLM Log 前对 payload 掩码）
                */
                class AIGWLogDesensitizeConfig : public AbstractModel
                {
                public:
                    AIGWLogDesensitizeConfig();
                    ~AIGWLogDesensitizeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>日志脱敏开关</p>
                     * @return Enabled <p>日志脱敏开关</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>日志脱敏开关</p>
                     * @param _enabled <p>日志脱敏开关</p>
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
                     * 获取<p>预定义规则类型</p><p>枚举值：</p><ul><li>Phone： 电话号码</li><li>IdCard： 身份证号</li><li>BankCard： 银行卡号</li><li>Email： 邮箱地址</li><li>IP： IP地址</li><li>Name： 姓名</li></ul>
                     * @return PredefinedRuleTypes <p>预定义规则类型</p><p>枚举值：</p><ul><li>Phone： 电话号码</li><li>IdCard： 身份证号</li><li>BankCard： 银行卡号</li><li>Email： 邮箱地址</li><li>IP： IP地址</li><li>Name： 姓名</li></ul>
                     * 
                     */
                    std::vector<std::string> GetPredefinedRuleTypes() const;

                    /**
                     * 设置<p>预定义规则类型</p><p>枚举值：</p><ul><li>Phone： 电话号码</li><li>IdCard： 身份证号</li><li>BankCard： 银行卡号</li><li>Email： 邮箱地址</li><li>IP： IP地址</li><li>Name： 姓名</li></ul>
                     * @param _predefinedRuleTypes <p>预定义规则类型</p><p>枚举值：</p><ul><li>Phone： 电话号码</li><li>IdCard： 身份证号</li><li>BankCard： 银行卡号</li><li>Email： 邮箱地址</li><li>IP： IP地址</li><li>Name： 姓名</li></ul>
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
                     * 获取<p>自定义脱敏规则</p>
                     * @return CustomRules <p>自定义脱敏规则</p>
                     * 
                     */
                    std::vector<AIGWCustomDesensitizeRule> GetCustomRules() const;

                    /**
                     * 设置<p>自定义脱敏规则</p>
                     * @param _customRules <p>自定义脱敏规则</p>
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
                     * 获取<p>日志脱敏范围</p><p>枚举值：</p><ul><li>Request： 请求</li><li>Response： 响应</li></ul>
                     * @return Scope <p>日志脱敏范围</p><p>枚举值：</p><ul><li>Request： 请求</li><li>Response： 响应</li></ul>
                     * 
                     */
                    std::vector<std::string> GetScope() const;

                    /**
                     * 设置<p>日志脱敏范围</p><p>枚举值：</p><ul><li>Request： 请求</li><li>Response： 响应</li></ul>
                     * @param _scope <p>日志脱敏范围</p><p>枚举值：</p><ul><li>Request： 请求</li><li>Response： 响应</li></ul>
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
                     * <p>日志脱敏开关</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>预定义规则类型</p><p>枚举值：</p><ul><li>Phone： 电话号码</li><li>IdCard： 身份证号</li><li>BankCard： 银行卡号</li><li>Email： 邮箱地址</li><li>IP： IP地址</li><li>Name： 姓名</li></ul>
                     */
                    std::vector<std::string> m_predefinedRuleTypes;
                    bool m_predefinedRuleTypesHasBeenSet;

                    /**
                     * <p>自定义脱敏规则</p>
                     */
                    std::vector<AIGWCustomDesensitizeRule> m_customRules;
                    bool m_customRulesHasBeenSet;

                    /**
                     * <p>日志脱敏范围</p><p>枚举值：</p><ul><li>Request： 请求</li><li>Response： 响应</li></ul>
                     */
                    std::vector<std::string> m_scope;
                    bool m_scopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLOGDESENSITIZECONFIG_H_
