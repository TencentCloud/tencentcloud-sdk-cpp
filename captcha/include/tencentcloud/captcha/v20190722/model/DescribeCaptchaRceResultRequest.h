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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARCERESULTREQUEST_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARCERESULTREQUEST_H_

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
                * DescribeCaptchaRceResult请求参数结构体
                */
                class DescribeCaptchaRceResultRequest : public AbstractModel
                {
                public:
                    DescribeCaptchaRceResultRequest();
                    ~DescribeCaptchaRceResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取固定填值：9。
                     * @return CaptchaType 固定填值：9。
                     * 
                     */
                    uint64_t GetCaptchaType() const;

                    /**
                     * 设置固定填值：9。
                     * @param _captchaType 固定填值：9。
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
                     * 获取前端回调函数返回的用户验证票据
                     * @return Ticket 前端回调函数返回的用户验证票据
                     * 
                     */
                    std::string GetTicket() const;

                    /**
                     * 设置前端回调函数返回的用户验证票据
                     * @param _ticket 前端回调函数返回的用户验证票据
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
                     * 获取业务侧获取到的验证码使用者的外网IP
                     * @return UserIp 业务侧获取到的验证码使用者的外网IP
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置业务侧获取到的验证码使用者的外网IP
                     * @param _userIp 业务侧获取到的验证码使用者的外网IP
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
                     * 获取前端回调函数返回的随机字符串
                     * @return Randstr 前端回调函数返回的随机字符串
                     * 
                     */
                    std::string GetRandstr() const;

                    /**
                     * 设置前端回调函数返回的随机字符串
                     * @param _randstr 前端回调函数返回的随机字符串
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
                     * 获取验证码应用ID。登录 [验证码控制台](https://console.cloud.tencent.com/captcha/graphical)，在验证列表的【密钥】列，即可查看到CaptchaAppId。
                     * @return CaptchaAppId 验证码应用ID。登录 [验证码控制台](https://console.cloud.tencent.com/captcha/graphical)，在验证列表的【密钥】列，即可查看到CaptchaAppId。
                     * 
                     */
                    uint64_t GetCaptchaAppId() const;

                    /**
                     * 设置验证码应用ID。登录 [验证码控制台](https://console.cloud.tencent.com/captcha/graphical)，在验证列表的【密钥】列，即可查看到CaptchaAppId。
                     * @param _captchaAppId 验证码应用ID。登录 [验证码控制台](https://console.cloud.tencent.com/captcha/graphical)，在验证列表的【密钥】列，即可查看到CaptchaAppId。
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
                     * 获取验证码应用密钥。登录 [验证码控制台](https://console.cloud.tencent.com/captcha/graphical)，在验证列表的【密钥】列，即可查看到AppSecretKey。AppSecretKey属于服务器端校验验证码票据的密钥，请妥善保密，请勿泄露给第三方。
                     * @return AppSecretKey 验证码应用密钥。登录 [验证码控制台](https://console.cloud.tencent.com/captcha/graphical)，在验证列表的【密钥】列，即可查看到AppSecretKey。AppSecretKey属于服务器端校验验证码票据的密钥，请妥善保密，请勿泄露给第三方。
                     * 
                     */
                    std::string GetAppSecretKey() const;

                    /**
                     * 设置验证码应用密钥。登录 [验证码控制台](https://console.cloud.tencent.com/captcha/graphical)，在验证列表的【密钥】列，即可查看到AppSecretKey。AppSecretKey属于服务器端校验验证码票据的密钥，请妥善保密，请勿泄露给第三方。
                     * @param _appSecretKey 验证码应用密钥。登录 [验证码控制台](https://console.cloud.tencent.com/captcha/graphical)，在验证列表的【密钥】列，即可查看到AppSecretKey。AppSecretKey属于服务器端校验验证码票据的密钥，请妥善保密，请勿泄露给第三方。
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
                     * 获取预留字段
                     * @return BusinessId 预留字段
                     * 
                     */
                    uint64_t GetBusinessId() const;

                    /**
                     * 设置预留字段
                     * @param _businessId 预留字段
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
                     * 获取预留字段
                     * @return SceneId 预留字段
                     * 
                     */
                    uint64_t GetSceneId() const;

                    /**
                     * 设置预留字段
                     * @param _sceneId 预留字段
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
                     * 获取mac 地址或设备唯一标识
                     * @return MacAddress mac 地址或设备唯一标识
                     * 
                     */
                    std::string GetMacAddress() const;

                    /**
                     * 设置mac 地址或设备唯一标识
                     * @param _macAddress mac 地址或设备唯一标识
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
                     * 获取手机设备号
                     * @return Imei 手机设备号
                     * 
                     */
                    std::string GetImei() const;

                    /**
                     * 设置手机设备号
                     * @param _imei 手机设备号
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
                     * 获取是否返回前端获取验证码时间，取值1：需要返回
                     * @return NeedGetCaptchaTime 是否返回前端获取验证码时间，取值1：需要返回
                     * 
                     */
                    int64_t GetNeedGetCaptchaTime() const;

                    /**
                     * 设置是否返回前端获取验证码时间，取值1：需要返回
                     * @param _needGetCaptchaTime 是否返回前端获取验证码时间，取值1：需要返回
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
                     * 固定填值：9。
                     */
                    uint64_t m_captchaType;
                    bool m_captchaTypeHasBeenSet;

                    /**
                     * 前端回调函数返回的用户验证票据
                     */
                    std::string m_ticket;
                    bool m_ticketHasBeenSet;

                    /**
                     * 业务侧获取到的验证码使用者的外网IP
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 前端回调函数返回的随机字符串
                     */
                    std::string m_randstr;
                    bool m_randstrHasBeenSet;

                    /**
                     * 验证码应用ID。登录 [验证码控制台](https://console.cloud.tencent.com/captcha/graphical)，在验证列表的【密钥】列，即可查看到CaptchaAppId。
                     */
                    uint64_t m_captchaAppId;
                    bool m_captchaAppIdHasBeenSet;

                    /**
                     * 验证码应用密钥。登录 [验证码控制台](https://console.cloud.tencent.com/captcha/graphical)，在验证列表的【密钥】列，即可查看到AppSecretKey。AppSecretKey属于服务器端校验验证码票据的密钥，请妥善保密，请勿泄露给第三方。
                     */
                    std::string m_appSecretKey;
                    bool m_appSecretKeyHasBeenSet;

                    /**
                     * 预留字段
                     */
                    uint64_t m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 预留字段
                     */
                    uint64_t m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * mac 地址或设备唯一标识
                     */
                    std::string m_macAddress;
                    bool m_macAddressHasBeenSet;

                    /**
                     * 手机设备号
                     */
                    std::string m_imei;
                    bool m_imeiHasBeenSet;

                    /**
                     * 是否返回前端获取验证码时间，取值1：需要返回
                     */
                    int64_t m_needGetCaptchaTime;
                    bool m_needGetCaptchaTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARCERESULTREQUEST_H_
