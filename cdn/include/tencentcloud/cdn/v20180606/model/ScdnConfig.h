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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNCONFIG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnCCRules.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedCCRules.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * cc的配置类型
                */
                class ScdnConfig : public AbstractModel
                {
                public:
                    ScdnConfig();
                    ~ScdnConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取scdn cc配置开关，取值有：
on：开启
off：关闭
                     * @return Switch scdn cc配置开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置scdn cc配置开关，取值有：
on：开启
off：关闭
                     * @param _switch scdn cc配置开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取自定义 cc 防护规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rules 自定义 cc 防护规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ScdnCCRules> GetRules() const;

                    /**
                     * 设置自定义 cc 防护规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rules 自定义 cc 防护规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRules(const std::vector<ScdnCCRules>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取增强自定义 cc 防护规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedRules 增强自定义 cc 防护规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AdvancedCCRules> GetAdvancedRules() const;

                    /**
                     * 设置增强自定义 cc 防护规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancedRules 增强自定义 cc 防护规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvancedRules(const std::vector<AdvancedCCRules>& _advancedRules);

                    /**
                     * 判断参数 AdvancedRules 是否已赋值
                     * @return AdvancedRules 是否已赋值
                     * 
                     */
                    bool AdvancedRulesHasBeenSet() const;

                    /**
                     * 获取增强自定义 cc 防护规则， 全局
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GlobalAdvancedRules 增强自定义 cc 防护规则， 全局
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AdvancedCCRules> GetGlobalAdvancedRules() const;

                    /**
                     * 设置增强自定义 cc 防护规则， 全局
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _globalAdvancedRules 增强自定义 cc 防护规则， 全局
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGlobalAdvancedRules(const std::vector<AdvancedCCRules>& _globalAdvancedRules);

                    /**
                     * 判断参数 GlobalAdvancedRules 是否已赋值
                     * @return GlobalAdvancedRules 是否已赋值
                     * 
                     */
                    bool GlobalAdvancedRulesHasBeenSet() const;

                private:

                    /**
                     * scdn cc配置开关，取值有：
on：开启
off：关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 自定义 cc 防护规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ScdnCCRules> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 增强自定义 cc 防护规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AdvancedCCRules> m_advancedRules;
                    bool m_advancedRulesHasBeenSet;

                    /**
                     * 增强自定义 cc 防护规则， 全局
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AdvancedCCRules> m_globalAdvancedRules;
                    bool m_globalAdvancedRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNCONFIG_H_
