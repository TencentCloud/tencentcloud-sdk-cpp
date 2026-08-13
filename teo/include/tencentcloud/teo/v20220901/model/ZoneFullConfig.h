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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ZONEFULLCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ZONEFULLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ZoneConfig.h>
#include <tencentcloud/teo/v20220901/model/ConfigGroupRuleEngineItem.h>
#include <tencentcloud/teo/v20220901/model/WebSecurity.h>
#include <tencentcloud/teo/v20220901/model/ConfigGroupFunctionTrigger.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 站点完整配置结构。
                */
                class ZoneFullConfig : public AbstractModel
                {
                public:
                    ZoneFullConfig();
                    ~ZoneFullConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>语法版本，当前默认为 1.0，输入其他值将会报错。</p>
                     * @return FormatVersion <p>语法版本，当前默认为 1.0，输入其他值将会报错。</p>
                     * 
                     */
                    std::string GetFormatVersion() const;

                    /**
                     * 设置<p>语法版本，当前默认为 1.0，输入其他值将会报错。</p>
                     * @param _formatVersion <p>语法版本，当前默认为 1.0，输入其他值将会报错。</p>
                     * 
                     */
                    void SetFormatVersion(const std::string& _formatVersion);

                    /**
                     * 判断参数 FormatVersion 是否已赋值
                     * @return FormatVersion 是否已赋值
                     * 
                     */
                    bool FormatVersionHasBeenSet() const;

                    /**
                     * 获取<p>站点级配置，包含「站点加速」中所有配置项，且所有项均为必选，否则配置无效。</p>
                     * @return ZoneConfig <p>站点级配置，包含「站点加速」中所有配置项，且所有项均为必选，否则配置无效。</p>
                     * 
                     */
                    ZoneConfig GetZoneConfig() const;

                    /**
                     * 设置<p>站点级配置，包含「站点加速」中所有配置项，且所有项均为必选，否则配置无效。</p>
                     * @param _zoneConfig <p>站点级配置，包含「站点加速」中所有配置项，且所有项均为必选，否则配置无效。</p>
                     * 
                     */
                    void SetZoneConfig(const ZoneConfig& _zoneConfig);

                    /**
                     * 判断参数 ZoneConfig 是否已赋值
                     * @return ZoneConfig 是否已赋值
                     * 
                     */
                    bool ZoneConfigHasBeenSet() const;

                    /**
                     * 获取<p>规则级配置，包含「规则引擎」中所有规则，且数组可为空，表示不启用任何规则。</p>
                     * @return Rules <p>规则级配置，包含「规则引擎」中所有规则，且数组可为空，表示不启用任何规则。</p>
                     * 
                     */
                    std::vector<ConfigGroupRuleEngineItem> GetRules() const;

                    /**
                     * 设置<p>规则级配置，包含「规则引擎」中所有规则，且数组可为空，表示不启用任何规则。</p>
                     * @param _rules <p>规则级配置，包含「规则引擎」中所有规则，且数组可为空，表示不启用任何规则。</p>
                     * 
                     */
                    void SetRules(const std::vector<ConfigGroupRuleEngineItem>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取<p>Web 安全防护配置，对应控制台中「安全防护 - Web 防护」里支持的功能。</p>
                     * @return WebSecurity <p>Web 安全防护配置，对应控制台中「安全防护 - Web 防护」里支持的功能。</p>
                     * 
                     */
                    WebSecurity GetWebSecurity() const;

                    /**
                     * 设置<p>Web 安全防护配置，对应控制台中「安全防护 - Web 防护」里支持的功能。</p>
                     * @param _webSecurity <p>Web 安全防护配置，对应控制台中「安全防护 - Web 防护」里支持的功能。</p>
                     * 
                     */
                    void SetWebSecurity(const WebSecurity& _webSecurity);

                    /**
                     * 判断参数 WebSecurity 是否已赋值
                     * @return WebSecurity 是否已赋值
                     * 
                     */
                    bool WebSecurityHasBeenSet() const;

                    /**
                     * 获取<p>边缘函数触发规则配置，包含触发「边缘函数」中所有规则，且数组可为空，表示不启用任何规则。</p>
                     * @return FunctionTriggers <p>边缘函数触发规则配置，包含触发「边缘函数」中所有规则，且数组可为空，表示不启用任何规则。</p>
                     * 
                     */
                    std::vector<ConfigGroupFunctionTrigger> GetFunctionTriggers() const;

                    /**
                     * 设置<p>边缘函数触发规则配置，包含触发「边缘函数」中所有规则，且数组可为空，表示不启用任何规则。</p>
                     * @param _functionTriggers <p>边缘函数触发规则配置，包含触发「边缘函数」中所有规则，且数组可为空，表示不启用任何规则。</p>
                     * 
                     */
                    void SetFunctionTriggers(const std::vector<ConfigGroupFunctionTrigger>& _functionTriggers);

                    /**
                     * 判断参数 FunctionTriggers 是否已赋值
                     * @return FunctionTriggers 是否已赋值
                     * 
                     */
                    bool FunctionTriggersHasBeenSet() const;

                private:

                    /**
                     * <p>语法版本，当前默认为 1.0，输入其他值将会报错。</p>
                     */
                    std::string m_formatVersion;
                    bool m_formatVersionHasBeenSet;

                    /**
                     * <p>站点级配置，包含「站点加速」中所有配置项，且所有项均为必选，否则配置无效。</p>
                     */
                    ZoneConfig m_zoneConfig;
                    bool m_zoneConfigHasBeenSet;

                    /**
                     * <p>规则级配置，包含「规则引擎」中所有规则，且数组可为空，表示不启用任何规则。</p>
                     */
                    std::vector<ConfigGroupRuleEngineItem> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * <p>Web 安全防护配置，对应控制台中「安全防护 - Web 防护」里支持的功能。</p>
                     */
                    WebSecurity m_webSecurity;
                    bool m_webSecurityHasBeenSet;

                    /**
                     * <p>边缘函数触发规则配置，包含触发「边缘函数」中所有规则，且数组可为空，表示不启用任何规则。</p>
                     */
                    std::vector<ConfigGroupFunctionTrigger> m_functionTriggers;
                    bool m_functionTriggersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ZONEFULLCONFIG_H_
