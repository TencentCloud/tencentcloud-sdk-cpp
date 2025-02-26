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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAAPPIDINFORESPONSE_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAAPPIDINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCaptchaAppIdInfo返回参数结构体
                */
                class DescribeCaptchaAppIdInfoResponse : public AbstractModel
                {
                public:
                    DescribeCaptchaAppIdInfoResponse();
                    ~DescribeCaptchaAppIdInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取界面风格
                     * @return SchemeColor 界面风格
                     * 
                     */
                    std::string GetSchemeColor() const;

                    /**
                     * 判断参数 SchemeColor 是否已赋值
                     * @return SchemeColor 是否已赋值
                     * 
                     */
                    bool SchemeColorHasBeenSet() const;

                    /**
                     * 获取语言
                     * @return Language 语言
                     * 
                     */
                    int64_t GetLanguage() const;

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取场景
                     * @return SceneType 场景
                     * 
                     */
                    int64_t GetSceneType() const;

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取防控风险等级
                     * @return EvilInterceptGrade 防控风险等级
                     * 
                     */
                    int64_t GetEvilInterceptGrade() const;

                    /**
                     * 判断参数 EvilInterceptGrade 是否已赋值
                     * @return EvilInterceptGrade 是否已赋值
                     * 
                     */
                    bool EvilInterceptGradeHasBeenSet() const;

                    /**
                     * 获取智能验证
                     * @return SmartVerify 智能验证
                     * 
                     */
                    int64_t GetSmartVerify() const;

                    /**
                     * 判断参数 SmartVerify 是否已赋值
                     * @return SmartVerify 是否已赋值
                     * 
                     */
                    bool SmartVerifyHasBeenSet() const;

                    /**
                     * 获取智能引擎
                     * @return SmartEngine 智能引擎
                     * 
                     */
                    int64_t GetSmartEngine() const;

                    /**
                     * 判断参数 SmartEngine 是否已赋值
                     * @return SmartEngine 是否已赋值
                     * 
                     */
                    bool SmartEngineHasBeenSet() const;

                    /**
                     * 获取验证码类型
                     * @return CapType 验证码类型
                     * 
                     */
                    int64_t GetCapType() const;

                    /**
                     * 判断参数 CapType 是否已赋值
                     * @return CapType 是否已赋值
                     * 
                     */
                    bool CapTypeHasBeenSet() const;

                    /**
                     * 获取应用名称
                     * @return AppName 应用名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取域名限制
                     * @return DomainLimit 域名限制
                     * 
                     */
                    std::string GetDomainLimit() const;

                    /**
                     * 判断参数 DomainLimit 是否已赋值
                     * @return DomainLimit 是否已赋值
                     * 
                     */
                    bool DomainLimitHasBeenSet() const;

                    /**
                     * 获取邮件告警
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MailAlarm 邮件告警
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetMailAlarm() const;

                    /**
                     * 判断参数 MailAlarm 是否已赋值
                     * @return MailAlarm 是否已赋值
                     * 
                     */
                    bool MailAlarmHasBeenSet() const;

                    /**
                     * 获取流量控制
                     * @return TrafficThreshold 流量控制
                     * 
                     */
                    int64_t GetTrafficThreshold() const;

                    /**
                     * 判断参数 TrafficThreshold 是否已赋值
                     * @return TrafficThreshold 是否已赋值
                     * 
                     */
                    bool TrafficThresholdHasBeenSet() const;

                    /**
                     * 获取加密key
                     * @return EncryptKey 加密key
                     * 
                     */
                    std::string GetEncryptKey() const;

                    /**
                     * 判断参数 EncryptKey 是否已赋值
                     * @return EncryptKey 是否已赋值
                     * 
                     */
                    bool EncryptKeyHasBeenSet() const;

                    /**
                     * 获取是否全屏
                     * @return TopFullScreen 是否全屏
                     * 
                     */
                    int64_t GetTopFullScreen() const;

                    /**
                     * 判断参数 TopFullScreen 是否已赋值
                     * @return TopFullScreen 是否已赋值
                     * 
                     */
                    bool TopFullScreenHasBeenSet() const;

                    /**
                     * 获取成功返回0 其它失败
                     * @return CaptchaCode 成功返回0 其它失败
                     * 
                     */
                    int64_t GetCaptchaCode() const;

                    /**
                     * 判断参数 CaptchaCode 是否已赋值
                     * @return CaptchaCode 是否已赋值
                     * 
                     */
                    bool CaptchaCodeHasBeenSet() const;

                    /**
                     * 获取返回操作信息
                     * @return CaptchaMsg 返回操作信息
                     * 
                     */
                    std::string GetCaptchaMsg() const;

                    /**
                     * 判断参数 CaptchaMsg 是否已赋值
                     * @return CaptchaMsg 是否已赋值
                     * 
                     */
                    bool CaptchaMsgHasBeenSet() const;

                private:

                    /**
                     * 界面风格
                     */
                    std::string m_schemeColor;
                    bool m_schemeColorHasBeenSet;

                    /**
                     * 语言
                     */
                    int64_t m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * 场景
                     */
                    int64_t m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * 防控风险等级
                     */
                    int64_t m_evilInterceptGrade;
                    bool m_evilInterceptGradeHasBeenSet;

                    /**
                     * 智能验证
                     */
                    int64_t m_smartVerify;
                    bool m_smartVerifyHasBeenSet;

                    /**
                     * 智能引擎
                     */
                    int64_t m_smartEngine;
                    bool m_smartEngineHasBeenSet;

                    /**
                     * 验证码类型
                     */
                    int64_t m_capType;
                    bool m_capTypeHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 域名限制
                     */
                    std::string m_domainLimit;
                    bool m_domainLimitHasBeenSet;

                    /**
                     * 邮件告警
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_mailAlarm;
                    bool m_mailAlarmHasBeenSet;

                    /**
                     * 流量控制
                     */
                    int64_t m_trafficThreshold;
                    bool m_trafficThresholdHasBeenSet;

                    /**
                     * 加密key
                     */
                    std::string m_encryptKey;
                    bool m_encryptKeyHasBeenSet;

                    /**
                     * 是否全屏
                     */
                    int64_t m_topFullScreen;
                    bool m_topFullScreenHasBeenSet;

                    /**
                     * 成功返回0 其它失败
                     */
                    int64_t m_captchaCode;
                    bool m_captchaCodeHasBeenSet;

                    /**
                     * 返回操作信息
                     */
                    std::string m_captchaMsg;
                    bool m_captchaMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAAPPIDINFORESPONSE_H_
