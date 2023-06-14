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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNCCRULES_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNCCRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
                class ScdnCCRules : public AbstractModel
                {
                public:
                    ScdnCCRules();
                    ~ScdnCCRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
index：首页
                     * @return RuleType 规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
index：首页
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
index：首页
                     * @param _ruleType 规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
index：首页
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取规则值
                     * @return RuleValue 规则值
                     * 
                     */
                    std::vector<std::string> GetRuleValue() const;

                    /**
                     * 设置规则值
                     * @param _ruleValue 规则值
                     * 
                     */
                    void SetRuleValue(const std::vector<std::string>& _ruleValue);

                    /**
                     * 判断参数 RuleValue 是否已赋值
                     * @return RuleValue 是否已赋值
                     * 
                     */
                    bool RuleValueHasBeenSet() const;

                    /**
                     * 获取规则限频
                     * @return Qps 规则限频
                     * 
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置规则限频
                     * @param _qps 规则限频
                     * 
                     */
                    void SetQps(const uint64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

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

                private:

                    /**
                     * 规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
index：首页
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 规则值
                     */
                    std::vector<std::string> m_ruleValue;
                    bool m_ruleValueHasBeenSet;

                    /**
                     * 规则限频
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNCCRULES_H_
