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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARESULTREQUEST_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARESULTREQUEST_H_

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
                * DescribeCaptchaResult请求参数结构体
                */
                class DescribeCaptchaResultRequest : public AbstractModel
                {
                public:
                    DescribeCaptchaResultRequest();
                    ~DescribeCaptchaResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>固定填值：9。</p>
                     * @return CaptchaType <p>固定填值：9。</p>
                     * 
                     */
                    uint64_t GetCaptchaType() const;

                    /**
                     * 设置<p>固定填值：9。</p>
                     * @param _captchaType <p>固定填值：9。</p>
                     * 
                     */
                    void SetCaptchaType(const uint64_t& _captchaType);

                    /**
                     * 判断参数 CaptchaType 是否已赋值
                     * @return CaptchaType 是否已赋值
                     * 
                     */
                    bool CaptchaTypeHasBeenSet() const;

                    /**
                     * 获取<p>前端回调函数返回的用户验证票据</p>
                     * @return Ticket <p>前端回调函数返回的用户验证票据</p>
                     * 
                     */
                    std::string GetTicket() const;

                    /**
                     * 设置<p>前端回调函数返回的用户验证票据</p>
                     * @param _ticket <p>前端回调函数返回的用户验证票据</p>
                     * 
                     */
                    void SetTicket(const std::string& _ticket);

                    /**
                     * 判断参数 Ticket 是否已赋值
                     * @return Ticket 是否已赋值
                     * 
                     */
                    bool TicketHasBeenSet() const;

                    /**
                     * 获取<p>业务侧获取到的验证码使用者的外网IP</p>
                     * @return UserIp <p>业务侧获取到的验证码使用者的外网IP</p>
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置<p>业务侧获取到的验证码使用者的外网IP</p>
                     * @param _userIp <p>业务侧获取到的验证码使用者的外网IP</p>
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取<p>前端回调函数返回的随机字符串</p>
                     * @return Randstr <p>前端回调函数返回的随机字符串</p>
                     * 
                     */
                    std::string GetRandstr() const;

                    /**
                     * 设置<p>前端回调函数返回的随机字符串</p>
                     * @param _randstr <p>前端回调函数返回的随机字符串</p>
                     * 
                     */
                    void SetRandstr(const std::string& _randstr);

                    /**
                     * 判断参数 Randstr 是否已赋值
                     * @return Randstr 是否已赋值
                     * 
                     */
                    bool RandstrHasBeenSet() const;

                    /**
                     * 获取<p>验证码应用ID。登录 <a href="https://console.cloud.tencent.com/captcha/graphical">验证码控制台</a>，在验证列表的【密钥】列，即可查看到CaptchaAppId。</p>
                     * @return CaptchaAppId <p>验证码应用ID。登录 <a href="https://console.cloud.tencent.com/captcha/graphical">验证码控制台</a>，在验证列表的【密钥】列，即可查看到CaptchaAppId。</p>
                     * 
                     */
                    uint64_t GetCaptchaAppId() const;

                    /**
                     * 设置<p>验证码应用ID。登录 <a href="https://console.cloud.tencent.com/captcha/graphical">验证码控制台</a>，在验证列表的【密钥】列，即可查看到CaptchaAppId。</p>
                     * @param _captchaAppId <p>验证码应用ID。登录 <a href="https://console.cloud.tencent.com/captcha/graphical">验证码控制台</a>，在验证列表的【密钥】列，即可查看到CaptchaAppId。</p>
                     * 
                     */
                    void SetCaptchaAppId(const uint64_t& _captchaAppId);

                    /**
                     * 判断参数 CaptchaAppId 是否已赋值
                     * @return CaptchaAppId 是否已赋值
                     * 
                     */
                    bool CaptchaAppIdHasBeenSet() const;

                    /**
                     * 获取<p>验证码应用密钥。登录 <a href="https://console.cloud.tencent.com/captcha/graphical">验证码控制台</a>，在验证列表的【密钥】列，即可查看到AppSecretKey。AppSecretKey属于服务器端校验验证码票据的密钥，请妥善保密，请勿泄露给第三方。</p>
                     * @return AppSecretKey <p>验证码应用密钥。登录 <a href="https://console.cloud.tencent.com/captcha/graphical">验证码控制台</a>，在验证列表的【密钥】列，即可查看到AppSecretKey。AppSecretKey属于服务器端校验验证码票据的密钥，请妥善保密，请勿泄露给第三方。</p>
                     * 
                     */
                    std::string GetAppSecretKey() const;

                    /**
                     * 设置<p>验证码应用密钥。登录 <a href="https://console.cloud.tencent.com/captcha/graphical">验证码控制台</a>，在验证列表的【密钥】列，即可查看到AppSecretKey。AppSecretKey属于服务器端校验验证码票据的密钥，请妥善保密，请勿泄露给第三方。</p>
                     * @param _appSecretKey <p>验证码应用密钥。登录 <a href="https://console.cloud.tencent.com/captcha/graphical">验证码控制台</a>，在验证列表的【密钥】列，即可查看到AppSecretKey。AppSecretKey属于服务器端校验验证码票据的密钥，请妥善保密，请勿泄露给第三方。</p>
                     * 
                     */
                    void SetAppSecretKey(const std::string& _appSecretKey);

                    /**
                     * 判断参数 AppSecretKey 是否已赋值
                     * @return AppSecretKey 是否已赋值
                     * 
                     */
                    bool AppSecretKeyHasBeenSet() const;

                    /**
                     * 获取<p>预留字段</p>
                     * @return BusinessId <p>预留字段</p>
                     * 
                     */
                    uint64_t GetBusinessId() const;

                    /**
                     * 设置<p>预留字段</p>
                     * @param _businessId <p>预留字段</p>
                     * 
                     */
                    void SetBusinessId(const uint64_t& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取<p>预留字段</p>
                     * @return SceneId <p>预留字段</p>
                     * 
                     */
                    uint64_t GetSceneId() const;

                    /**
                     * 设置<p>预留字段</p>
                     * @param _sceneId <p>预留字段</p>
                     * 
                     */
                    void SetSceneId(const uint64_t& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                    /**
                     * 获取<p>mac 地址或设备唯一标识</p>
                     * @return MacAddress <p>mac 地址或设备唯一标识</p>
                     * 
                     */
                    std::string GetMacAddress() const;

                    /**
                     * 设置<p>mac 地址或设备唯一标识</p>
                     * @param _macAddress <p>mac 地址或设备唯一标识</p>
                     * 
                     */
                    void SetMacAddress(const std::string& _macAddress);

                    /**
                     * 判断参数 MacAddress 是否已赋值
                     * @return MacAddress 是否已赋值
                     * 
                     */
                    bool MacAddressHasBeenSet() const;

                    /**
                     * 获取<p>手机设备号</p>
                     * @return Imei <p>手机设备号</p>
                     * 
                     */
                    std::string GetImei() const;

                    /**
                     * 设置<p>手机设备号</p>
                     * @param _imei <p>手机设备号</p>
                     * 
                     */
                    void SetImei(const std::string& _imei);

                    /**
                     * 判断参数 Imei 是否已赋值
                     * @return Imei 是否已赋值
                     * 
                     */
                    bool ImeiHasBeenSet() const;

                    /**
                     * 获取<p>是否返回前端获取验证码时间，取值1：需要返回</p>
                     * @return NeedGetCaptchaTime <p>是否返回前端获取验证码时间，取值1：需要返回</p>
                     * 
                     */
                    int64_t GetNeedGetCaptchaTime() const;

                    /**
                     * 设置<p>是否返回前端获取验证码时间，取值1：需要返回</p>
                     * @param _needGetCaptchaTime <p>是否返回前端获取验证码时间，取值1：需要返回</p>
                     * 
                     */
                    void SetNeedGetCaptchaTime(const int64_t& _needGetCaptchaTime);

                    /**
                     * 判断参数 NeedGetCaptchaTime 是否已赋值
                     * @return NeedGetCaptchaTime 是否已赋值
                     * 
                     */
                    bool NeedGetCaptchaTimeHasBeenSet() const;

                private:

                    /**
                     * <p>固定填值：9。</p>
                     */
                    uint64_t m_captchaType;
                    bool m_captchaTypeHasBeenSet;

                    /**
                     * <p>前端回调函数返回的用户验证票据</p>
                     */
                    std::string m_ticket;
                    bool m_ticketHasBeenSet;

                    /**
                     * <p>业务侧获取到的验证码使用者的外网IP</p>
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * <p>前端回调函数返回的随机字符串</p>
                     */
                    std::string m_randstr;
                    bool m_randstrHasBeenSet;

                    /**
                     * <p>验证码应用ID。登录 <a href="https://console.cloud.tencent.com/captcha/graphical">验证码控制台</a>，在验证列表的【密钥】列，即可查看到CaptchaAppId。</p>
                     */
                    uint64_t m_captchaAppId;
                    bool m_captchaAppIdHasBeenSet;

                    /**
                     * <p>验证码应用密钥。登录 <a href="https://console.cloud.tencent.com/captcha/graphical">验证码控制台</a>，在验证列表的【密钥】列，即可查看到AppSecretKey。AppSecretKey属于服务器端校验验证码票据的密钥，请妥善保密，请勿泄露给第三方。</p>
                     */
                    std::string m_appSecretKey;
                    bool m_appSecretKeyHasBeenSet;

                    /**
                     * <p>预留字段</p>
                     */
                    uint64_t m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * <p>预留字段</p>
                     */
                    uint64_t m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * <p>mac 地址或设备唯一标识</p>
                     */
                    std::string m_macAddress;
                    bool m_macAddressHasBeenSet;

                    /**
                     * <p>手机设备号</p>
                     */
                    std::string m_imei;
                    bool m_imeiHasBeenSet;

                    /**
                     * <p>是否返回前端获取验证码时间，取值1：需要返回</p>
                     */
                    int64_t m_needGetCaptchaTime;
                    bool m_needGetCaptchaTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARESULTREQUEST_H_
