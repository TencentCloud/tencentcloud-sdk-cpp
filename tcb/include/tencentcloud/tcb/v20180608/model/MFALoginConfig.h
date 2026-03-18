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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MFALOGINCONFIG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MFALOGINCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 多因子认证登录配置，用于管理 MFA（Multi-Factor Authentication）相关设置。包括 MFA 总开关、短信验证、邮箱验证、强制绑定手机号、TOTP 动态验证码等认证方式的独立开关配置。当 MFA 总开关（On）开启时，用户在登录后需完成额外的身份验证步骤。各子开关可独立控制具体的验证方式。不传则不修改当前配置。
                */
                class MFALoginConfig : public AbstractModel
                {
                public:
                    MFALoginConfig();
                    ~MFALoginConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MFA 多因子认证开关。取值范围：
TRUE：开启 MFA 多因子认证
FALSE：关闭 MFA 多因子认证
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return On MFA 多因子认证开关。取值范围：
TRUE：开启 MFA 多因子认证
FALSE：关闭 MFA 多因子认证
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOn() const;

                    /**
                     * 设置MFA 多因子认证开关。取值范围：
TRUE：开启 MFA 多因子认证
FALSE：关闭 MFA 多因子认证
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _on MFA 多因子认证开关。取值范围：
TRUE：开启 MFA 多因子认证
FALSE：关闭 MFA 多因子认证
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOn(const std::string& _on);

                    /**
                     * 判断参数 On 是否已赋值
                     * @return On 是否已赋值
                     * 
                     */
                    bool OnHasBeenSet() const;

                    /**
                     * 获取短信验证开关，控制是否在 MFA 流程中启用短信验证码校验。取值范围：
TRUE：开启短信验证
FALSE：关闭短信验证
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sms 短信验证开关，控制是否在 MFA 流程中启用短信验证码校验。取值范围：
TRUE：开启短信验证
FALSE：关闭短信验证
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSms() const;

                    /**
                     * 设置短信验证开关，控制是否在 MFA 流程中启用短信验证码校验。取值范围：
TRUE：开启短信验证
FALSE：关闭短信验证
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sms 短信验证开关，控制是否在 MFA 流程中启用短信验证码校验。取值范围：
TRUE：开启短信验证
FALSE：关闭短信验证
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSms(const std::string& _sms);

                    /**
                     * 判断参数 Sms 是否已赋值
                     * @return Sms 是否已赋值
                     * 
                     */
                    bool SmsHasBeenSet() const;

                    /**
                     * 获取邮箱验证开关，控制是否在 MFA 流程中启用邮箱验证码校验。取值范围：
TRUE：开启邮箱验证
FALSE：关闭邮箱验证
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Email 邮箱验证开关，控制是否在 MFA 流程中启用邮箱验证码校验。取值范围：
TRUE：开启邮箱验证
FALSE：关闭邮箱验证
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱验证开关，控制是否在 MFA 流程中启用邮箱验证码校验。取值范围：
TRUE：开启邮箱验证
FALSE：关闭邮箱验证
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _email 邮箱验证开关，控制是否在 MFA 流程中启用邮箱验证码校验。取值范围：
TRUE：开启邮箱验证
FALSE：关闭邮箱验证
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取强制绑定手机号开关，控制用户在完成 MFA 认证前是否必须绑定手机号。取值范围：
TRUE：要求绑定手机号
FALSE：不要求绑定手机号
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequiredBindPhone 强制绑定手机号开关，控制用户在完成 MFA 认证前是否必须绑定手机号。取值范围：
TRUE：要求绑定手机号
FALSE：不要求绑定手机号
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequiredBindPhone() const;

                    /**
                     * 设置强制绑定手机号开关，控制用户在完成 MFA 认证前是否必须绑定手机号。取值范围：
TRUE：要求绑定手机号
FALSE：不要求绑定手机号
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requiredBindPhone 强制绑定手机号开关，控制用户在完成 MFA 认证前是否必须绑定手机号。取值范围：
TRUE：要求绑定手机号
FALSE：不要求绑定手机号
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequiredBindPhone(const std::string& _requiredBindPhone);

                    /**
                     * 判断参数 RequiredBindPhone 是否已赋值
                     * @return RequiredBindPhone 是否已赋值
                     * 
                     */
                    bool RequiredBindPhoneHasBeenSet() const;

                private:

                    /**
                     * MFA 多因子认证开关。取值范围：
TRUE：开启 MFA 多因子认证
FALSE：关闭 MFA 多因子认证
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_on;
                    bool m_onHasBeenSet;

                    /**
                     * 短信验证开关，控制是否在 MFA 流程中启用短信验证码校验。取值范围：
TRUE：开启短信验证
FALSE：关闭短信验证
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sms;
                    bool m_smsHasBeenSet;

                    /**
                     * 邮箱验证开关，控制是否在 MFA 流程中启用邮箱验证码校验。取值范围：
TRUE：开启邮箱验证
FALSE：关闭邮箱验证
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 强制绑定手机号开关，控制用户在完成 MFA 认证前是否必须绑定手机号。取值范围：
TRUE：要求绑定手机号
FALSE：不要求绑定手机号
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requiredBindPhone;
                    bool m_requiredBindPhoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MFALOGINCONFIG_H_
