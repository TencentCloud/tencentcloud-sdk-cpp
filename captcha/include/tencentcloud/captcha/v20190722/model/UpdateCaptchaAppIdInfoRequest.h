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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_UPDATECAPTCHAAPPIDINFOREQUEST_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_UPDATECAPTCHAAPPIDINFOREQUEST_H_

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
                * UpdateCaptchaAppIdInfo请求参数结构体
                */
                class UpdateCaptchaAppIdInfoRequest : public AbstractModel
                {
                public:
                    UpdateCaptchaAppIdInfoRequest();
                    ~UpdateCaptchaAppIdInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取验证码应用ID
                     * @return CaptchaAppId 验证码应用ID
                     * 
                     */
                    int64_t GetCaptchaAppId() const;

                    /**
                     * 设置验证码应用ID
                     * @param _captchaAppId 验证码应用ID
                     * 
                     */
                    void SetCaptchaAppId(const int64_t& _captchaAppId);

                    /**
                     * 判断参数 CaptchaAppId 是否已赋值
                     * @return CaptchaAppId 是否已赋值
                     * 
                     */
                    bool CaptchaAppIdHasBeenSet() const;

                    /**
                     * 获取应用名
                     * @return AppName 应用名
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名
                     * @param _appName 应用名
                     * 
                     */
                    void SetAppName(const std::string& _appName);

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
                     * 设置域名限制
                     * @param _domainLimit 域名限制
                     * 
                     */
                    void SetDomainLimit(const std::string& _domainLimit);

                    /**
                     * 判断参数 DomainLimit 是否已赋值
                     * @return DomainLimit 是否已赋值
                     * 
                     */
                    bool DomainLimitHasBeenSet() const;

                    /**
                     * 获取场景类型
                     * @return SceneType 场景类型
                     * 
                     */
                    int64_t GetSceneType() const;

                    /**
                     * 设置场景类型
                     * @param _sceneType 场景类型
                     * 
                     */
                    void SetSceneType(const int64_t& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取验证码类型
                     * @return CapType 验证码类型
                     * 
                     */
                    int64_t GetCapType() const;

                    /**
                     * 设置验证码类型
                     * @param _capType 验证码类型
                     * 
                     */
                    void SetCapType(const int64_t& _capType);

                    /**
                     * 判断参数 CapType 是否已赋值
                     * @return CapType 是否已赋值
                     * 
                     */
                    bool CapTypeHasBeenSet() const;

                    /**
                     * 获取风险级别
                     * @return EvilInterceptGrade 风险级别
                     * 
                     */
                    int64_t GetEvilInterceptGrade() const;

                    /**
                     * 设置风险级别
                     * @param _evilInterceptGrade 风险级别
                     * 
                     */
                    void SetEvilInterceptGrade(const int64_t& _evilInterceptGrade);

                    /**
                     * 判断参数 EvilInterceptGrade 是否已赋值
                     * @return EvilInterceptGrade 是否已赋值
                     * 
                     */
                    bool EvilInterceptGradeHasBeenSet() const;

                    /**
                     * 获取智能检测
                     * @return SmartVerify 智能检测
                     * 
                     */
                    int64_t GetSmartVerify() const;

                    /**
                     * 设置智能检测
                     * @param _smartVerify 智能检测
                     * 
                     */
                    void SetSmartVerify(const int64_t& _smartVerify);

                    /**
                     * 判断参数 SmartVerify 是否已赋值
                     * @return SmartVerify 是否已赋值
                     * 
                     */
                    bool SmartVerifyHasBeenSet() const;

                    /**
                     * 获取开启智能引擎
                     * @return SmartEngine 开启智能引擎
                     * 
                     */
                    int64_t GetSmartEngine() const;

                    /**
                     * 设置开启智能引擎
                     * @param _smartEngine 开启智能引擎
                     * 
                     */
                    void SetSmartEngine(const int64_t& _smartEngine);

                    /**
                     * 判断参数 SmartEngine 是否已赋值
                     * @return SmartEngine 是否已赋值
                     * 
                     */
                    bool SmartEngineHasBeenSet() const;

                    /**
                     * 获取web风格
                     * @return SchemeColor web风格
                     * 
                     */
                    std::string GetSchemeColor() const;

                    /**
                     * 设置web风格
                     * @param _schemeColor web风格
                     * 
                     */
                    void SetSchemeColor(const std::string& _schemeColor);

                    /**
                     * 判断参数 SchemeColor 是否已赋值
                     * @return SchemeColor 是否已赋值
                     * 
                     */
                    bool SchemeColorHasBeenSet() const;

                    /**
                     * 获取语言
                     * @return CaptchaLanguage 语言
                     * 
                     */
                    int64_t GetCaptchaLanguage() const;

                    /**
                     * 设置语言
                     * @param _captchaLanguage 语言
                     * 
                     */
                    void SetCaptchaLanguage(const int64_t& _captchaLanguage);

                    /**
                     * 判断参数 CaptchaLanguage 是否已赋值
                     * @return CaptchaLanguage 是否已赋值
                     * 
                     */
                    bool CaptchaLanguageHasBeenSet() const;

                    /**
                     * 获取告警邮箱
                     * @return MailAlarm 告警邮箱
                     * 
                     */
                    std::string GetMailAlarm() const;

                    /**
                     * 设置告警邮箱
                     * @param _mailAlarm 告警邮箱
                     * 
                     */
                    void SetMailAlarm(const std::string& _mailAlarm);

                    /**
                     * 判断参数 MailAlarm 是否已赋值
                     * @return MailAlarm 是否已赋值
                     * 
                     */
                    bool MailAlarmHasBeenSet() const;

                    /**
                     * 获取是否全屏
                     * @return TopFullScreen 是否全屏
                     * 
                     */
                    int64_t GetTopFullScreen() const;

                    /**
                     * 设置是否全屏
                     * @param _topFullScreen 是否全屏
                     * 
                     */
                    void SetTopFullScreen(const int64_t& _topFullScreen);

                    /**
                     * 判断参数 TopFullScreen 是否已赋值
                     * @return TopFullScreen 是否已赋值
                     * 
                     */
                    bool TopFullScreenHasBeenSet() const;

                    /**
                     * 获取流量限制
                     * @return TrafficThreshold 流量限制
                     * 
                     */
                    int64_t GetTrafficThreshold() const;

                    /**
                     * 设置流量限制
                     * @param _trafficThreshold 流量限制
                     * 
                     */
                    void SetTrafficThreshold(const int64_t& _trafficThreshold);

                    /**
                     * 判断参数 TrafficThreshold 是否已赋值
                     * @return TrafficThreshold 是否已赋值
                     * 
                     */
                    bool TrafficThresholdHasBeenSet() const;

                private:

                    /**
                     * 验证码应用ID
                     */
                    int64_t m_captchaAppId;
                    bool m_captchaAppIdHasBeenSet;

                    /**
                     * 应用名
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 域名限制
                     */
                    std::string m_domainLimit;
                    bool m_domainLimitHasBeenSet;

                    /**
                     * 场景类型
                     */
                    int64_t m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * 验证码类型
                     */
                    int64_t m_capType;
                    bool m_capTypeHasBeenSet;

                    /**
                     * 风险级别
                     */
                    int64_t m_evilInterceptGrade;
                    bool m_evilInterceptGradeHasBeenSet;

                    /**
                     * 智能检测
                     */
                    int64_t m_smartVerify;
                    bool m_smartVerifyHasBeenSet;

                    /**
                     * 开启智能引擎
                     */
                    int64_t m_smartEngine;
                    bool m_smartEngineHasBeenSet;

                    /**
                     * web风格
                     */
                    std::string m_schemeColor;
                    bool m_schemeColorHasBeenSet;

                    /**
                     * 语言
                     */
                    int64_t m_captchaLanguage;
                    bool m_captchaLanguageHasBeenSet;

                    /**
                     * 告警邮箱
                     */
                    std::string m_mailAlarm;
                    bool m_mailAlarmHasBeenSet;

                    /**
                     * 是否全屏
                     */
                    int64_t m_topFullScreen;
                    bool m_topFullScreenHasBeenSet;

                    /**
                     * 流量限制
                     */
                    int64_t m_trafficThreshold;
                    bool m_trafficThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_UPDATECAPTCHAAPPIDINFOREQUEST_H_
