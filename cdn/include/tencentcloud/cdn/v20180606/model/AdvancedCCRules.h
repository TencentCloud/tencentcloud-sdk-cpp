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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDCCRULES_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDCCRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnSevenLayerRules.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * scdn 的自定义 cc 规则
                */
                class AdvancedCCRules : public AbstractModel
                {
                public:
                    AdvancedCCRules();
                    ~AdvancedCCRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取探测时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetectionTime 探测时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDetectionTime() const;

                    /**
                     * 设置探测时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detectionTime 探测时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetectionTime(const uint64_t& _detectionTime);

                    /**
                     * 判断参数 DetectionTime 是否已赋值
                     * @return DetectionTime 是否已赋值
                     * 
                     */
                    bool DetectionTimeHasBeenSet() const;

                    /**
                     * 获取限频阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrequencyLimit 限频阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFrequencyLimit() const;

                    /**
                     * 设置限频阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frequencyLimit 限频阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrequencyLimit(const uint64_t& _frequencyLimit);

                    /**
                     * 判断参数 FrequencyLimit 是否已赋值
                     * @return FrequencyLimit 是否已赋值
                     * 
                     */
                    bool FrequencyLimitHasBeenSet() const;

                    /**
                     * 获取IP 惩罚配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PunishmentSwitch IP 惩罚配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPunishmentSwitch() const;

                    /**
                     * 设置IP 惩罚配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _punishmentSwitch IP 惩罚配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPunishmentSwitch(const std::string& _punishmentSwitch);

                    /**
                     * 判断参数 PunishmentSwitch 是否已赋值
                     * @return PunishmentSwitch 是否已赋值
                     * 
                     */
                    bool PunishmentSwitchHasBeenSet() const;

                    /**
                     * 获取IP 惩罚时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PunishmentTime IP 惩罚时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPunishmentTime() const;

                    /**
                     * 设置IP 惩罚时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _punishmentTime IP 惩罚时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPunishmentTime(const uint64_t& _punishmentTime);

                    /**
                     * 判断参数 PunishmentTime 是否已赋值
                     * @return PunishmentTime 是否已赋值
                     * 
                     */
                    bool PunishmentTimeHasBeenSet() const;

                    /**
                     * 获取执行动作，intercept|redirect
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action 执行动作，intercept|redirect
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置执行动作，intercept|redirect
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _action 执行动作，intercept|redirect
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取动作为 redirect 时，重定向的url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedirectUrl 动作为 redirect 时，重定向的url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置动作为 redirect 时，重定向的url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redirectUrl 动作为 redirect 时，重定向的url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     * 
                     */
                    bool RedirectUrlHasBeenSet() const;

                    /**
                     * 获取七层限频具体配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Configure 七层限频具体配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ScdnSevenLayerRules> GetConfigure() const;

                    /**
                     * 设置七层限频具体配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configure 七层限频具体配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigure(const std::vector<ScdnSevenLayerRules>& _configure);

                    /**
                     * 判断参数 Configure 是否已赋值
                     * @return Configure 是否已赋值
                     * 
                     */
                    bool ConfigureHasBeenSet() const;

                    /**
                     * 获取自定义cc规则配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 自定义cc规则配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置自定义cc规则配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch 自定义cc规则配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 探测时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_detectionTime;
                    bool m_detectionTimeHasBeenSet;

                    /**
                     * 限频阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_frequencyLimit;
                    bool m_frequencyLimitHasBeenSet;

                    /**
                     * IP 惩罚配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_punishmentSwitch;
                    bool m_punishmentSwitchHasBeenSet;

                    /**
                     * IP 惩罚时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_punishmentTime;
                    bool m_punishmentTimeHasBeenSet;

                    /**
                     * 执行动作，intercept|redirect
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 动作为 redirect 时，重定向的url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                    /**
                     * 七层限频具体配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ScdnSevenLayerRules> m_configure;
                    bool m_configureHasBeenSet;

                    /**
                     * 自定义cc规则配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDCCRULES_H_
