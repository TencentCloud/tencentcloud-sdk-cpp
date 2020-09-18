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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAMINIRESULTREQUEST_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAMINIRESULTREQUEST_H_

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
                * DescribeCaptchaMiniResult请求参数结构体
                */
                class DescribeCaptchaMiniResultRequest : public AbstractModel
                {
                public:
                    DescribeCaptchaMiniResultRequest();
                    ~DescribeCaptchaMiniResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取验证码类型，9：滑块验证码
                     * @return CaptchaType 验证码类型，9：滑块验证码
                     */
                    uint64_t GetCaptchaType() const;

                    /**
                     * 设置验证码类型，9：滑块验证码
                     * @param CaptchaType 验证码类型，9：滑块验证码
                     */
                    void SetCaptchaType(const uint64_t& _captchaType);

                    /**
                     * 判断参数 CaptchaType 是否已赋值
                     * @return CaptchaType 是否已赋值
                     */
                    bool CaptchaTypeHasBeenSet() const;

                    /**
                     * 获取验证码返回给用户的票据
                     * @return Ticket 验证码返回给用户的票据
                     */
                    std::string GetTicket() const;

                    /**
                     * 设置验证码返回给用户的票据
                     * @param Ticket 验证码返回给用户的票据
                     */
                    void SetTicket(const std::string& _ticket);

                    /**
                     * 判断参数 Ticket 是否已赋值
                     * @return Ticket 是否已赋值
                     */
                    bool TicketHasBeenSet() const;

                    /**
                     * 获取用户操作来源的外网 IP
                     * @return UserIp 用户操作来源的外网 IP
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置用户操作来源的外网 IP
                     * @param UserIp 用户操作来源的外网 IP
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取验证码应用ID
                     * @return CaptchaAppId 验证码应用ID
                     */
                    uint64_t GetCaptchaAppId() const;

                    /**
                     * 设置验证码应用ID
                     * @param CaptchaAppId 验证码应用ID
                     */
                    void SetCaptchaAppId(const uint64_t& _captchaAppId);

                    /**
                     * 判断参数 CaptchaAppId 是否已赋值
                     * @return CaptchaAppId 是否已赋值
                     */
                    bool CaptchaAppIdHasBeenSet() const;

                    /**
                     * 获取用于服务器端校验验证码票据的验证密钥，请妥善保密，请勿泄露给第三方
                     * @return AppSecretKey 用于服务器端校验验证码票据的验证密钥，请妥善保密，请勿泄露给第三方
                     */
                    std::string GetAppSecretKey() const;

                    /**
                     * 设置用于服务器端校验验证码票据的验证密钥，请妥善保密，请勿泄露给第三方
                     * @param AppSecretKey 用于服务器端校验验证码票据的验证密钥，请妥善保密，请勿泄露给第三方
                     */
                    void SetAppSecretKey(const std::string& _appSecretKey);

                    /**
                     * 判断参数 AppSecretKey 是否已赋值
                     * @return AppSecretKey 是否已赋值
                     */
                    bool AppSecretKeyHasBeenSet() const;

                    /**
                     * 获取业务 ID，网站或应用在多个业务中使用此服务，通过此 ID 区分统计数据
                     * @return BusinessId 业务 ID，网站或应用在多个业务中使用此服务，通过此 ID 区分统计数据
                     */
                    uint64_t GetBusinessId() const;

                    /**
                     * 设置业务 ID，网站或应用在多个业务中使用此服务，通过此 ID 区分统计数据
                     * @param BusinessId 业务 ID，网站或应用在多个业务中使用此服务，通过此 ID 区分统计数据
                     */
                    void SetBusinessId(const uint64_t& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取场景 ID，网站或应用的业务下有多个场景使用此服务，通过此 ID 区分统计数据
                     * @return SceneId 场景 ID，网站或应用的业务下有多个场景使用此服务，通过此 ID 区分统计数据
                     */
                    uint64_t GetSceneId() const;

                    /**
                     * 设置场景 ID，网站或应用的业务下有多个场景使用此服务，通过此 ID 区分统计数据
                     * @param SceneId 场景 ID，网站或应用的业务下有多个场景使用此服务，通过此 ID 区分统计数据
                     */
                    void SetSceneId(const uint64_t& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     */
                    bool SceneIdHasBeenSet() const;

                    /**
                     * 获取mac 地址或设备唯一标识
                     * @return MacAddress mac 地址或设备唯一标识
                     */
                    std::string GetMacAddress() const;

                    /**
                     * 设置mac 地址或设备唯一标识
                     * @param MacAddress mac 地址或设备唯一标识
                     */
                    void SetMacAddress(const std::string& _macAddress);

                    /**
                     * 判断参数 MacAddress 是否已赋值
                     * @return MacAddress 是否已赋值
                     */
                    bool MacAddressHasBeenSet() const;

                    /**
                     * 获取手机设备号
                     * @return Imei 手机设备号
                     */
                    std::string GetImei() const;

                    /**
                     * 设置手机设备号
                     * @param Imei 手机设备号
                     */
                    void SetImei(const std::string& _imei);

                    /**
                     * 判断参数 Imei 是否已赋值
                     * @return Imei 是否已赋值
                     */
                    bool ImeiHasBeenSet() const;

                private:

                    /**
                     * 验证码类型，9：滑块验证码
                     */
                    uint64_t m_captchaType;
                    bool m_captchaTypeHasBeenSet;

                    /**
                     * 验证码返回给用户的票据
                     */
                    std::string m_ticket;
                    bool m_ticketHasBeenSet;

                    /**
                     * 用户操作来源的外网 IP
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 验证码应用ID
                     */
                    uint64_t m_captchaAppId;
                    bool m_captchaAppIdHasBeenSet;

                    /**
                     * 用于服务器端校验验证码票据的验证密钥，请妥善保密，请勿泄露给第三方
                     */
                    std::string m_appSecretKey;
                    bool m_appSecretKeyHasBeenSet;

                    /**
                     * 业务 ID，网站或应用在多个业务中使用此服务，通过此 ID 区分统计数据
                     */
                    uint64_t m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 场景 ID，网站或应用的业务下有多个场景使用此服务，通过此 ID 区分统计数据
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAMINIRESULTREQUEST_H_
