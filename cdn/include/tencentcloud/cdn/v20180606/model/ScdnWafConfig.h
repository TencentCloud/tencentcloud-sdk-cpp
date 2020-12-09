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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNWAFCONFIG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNWAFCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnErrorPage.h>
#include <tencentcloud/cdn/v20180606/model/ScdnWafRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * waf配置类型
                */
                class ScdnWafConfig : public AbstractModel
                {
                public:
                    ScdnWafConfig();
                    ~ScdnWafConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取on|off
                     * @return Switch on|off
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置on|off
                     * @param Switch on|off
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取intercept|observe，默认intercept
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mode intercept|observe，默认intercept
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMode() const;

                    /**
                     * 设置intercept|observe，默认intercept
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Mode intercept|observe，默认intercept
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取重定向的错误页面
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorPage 重定向的错误页面
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScdnErrorPage GetErrorPage() const;

                    /**
                     * 设置重定向的错误页面
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrorPage 重定向的错误页面
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrorPage(const ScdnErrorPage& _errorPage);

                    /**
                     * 判断参数 ErrorPage 是否已赋值
                     * @return ErrorPage 是否已赋值
                     */
                    bool ErrorPageHasBeenSet() const;

                    /**
                     * 获取webshell拦截开关，on|off，默认off
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebShellSwitch webshell拦截开关，on|off，默认off
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetWebShellSwitch() const;

                    /**
                     * 设置webshell拦截开关，on|off，默认off
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WebShellSwitch webshell拦截开关，on|off，默认off
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWebShellSwitch(const std::string& _webShellSwitch);

                    /**
                     * 判断参数 WebShellSwitch 是否已赋值
                     * @return WebShellSwitch 是否已赋值
                     */
                    bool WebShellSwitchHasBeenSet() const;

                    /**
                     * 获取类型拦截规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rules 类型拦截规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ScdnWafRule> GetRules() const;

                    /**
                     * 设置类型拦截规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Rules 类型拦截规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRules(const std::vector<ScdnWafRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * on|off
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * intercept|observe，默认intercept
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 重定向的错误页面
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScdnErrorPage m_errorPage;
                    bool m_errorPageHasBeenSet;

                    /**
                     * webshell拦截开关，on|off，默认off
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_webShellSwitch;
                    bool m_webShellSwitchHasBeenSet;

                    /**
                     * 类型拦截规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ScdnWafRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNWAFCONFIG_H_
