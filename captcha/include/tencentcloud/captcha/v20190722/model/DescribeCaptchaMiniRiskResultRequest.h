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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAMINIRISKRESULTREQUEST_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAMINIRISKRESULTREQUEST_H_

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
                * DescribeCaptchaMiniRiskResult请求参数结构体
                */
                class DescribeCaptchaMiniRiskResultRequest : public AbstractModel
                {
                public:
                    DescribeCaptchaMiniRiskResultRequest();
                    ~DescribeCaptchaMiniRiskResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取固定填值：9（滑块验证码）
                     * @return CaptchaType 固定填值：9（滑块验证码）
                     * 
                     */
                    uint64_t GetCaptchaType() const;

                    /**
                     * 设置固定填值：9（滑块验证码）
                     * @param _captchaType 固定填值：9（滑块验证码）
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
                     * 获取验证码返回给用户的票据
                     * @return Ticket 验证码返回给用户的票据
                     * 
                     */
                    std::string GetTicket() const;

                    /**
                     * 设置验证码返回给用户的票据
                     * @param _ticket 验证码返回给用户的票据
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
                     * 获取验证码应用APPID
                     * @return CaptchaAppId 验证码应用APPID
                     * 
                     */
                    uint64_t GetCaptchaAppId() const;

                    /**
                     * 设置验证码应用APPID
                     * @param _captchaAppId 验证码应用APPID
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
                     * 获取用于服务器端校验验证码票据的验证密钥，请妥善保密，请勿泄露给第三方
                     * @return AppSecretKey 用于服务器端校验验证码票据的验证密钥，请妥善保密，请勿泄露给第三方
                     * 
                     */
                    std::string GetAppSecretKey() const;

                    /**
                     * 设置用于服务器端校验验证码票据的验证密钥，请妥善保密，请勿泄露给第三方
                     * @param _appSecretKey 用于服务器端校验验证码票据的验证密钥，请妥善保密，请勿泄露给第三方
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
                     * 获取业务 ID，网站或应用在多个业务中使用此服务，通过此 ID 区分统计数据
                     * @return BusinessId 业务 ID，网站或应用在多个业务中使用此服务，通过此 ID 区分统计数据
                     * 
                     */
                    uint64_t GetBusinessId() const;

                    /**
                     * 设置业务 ID，网站或应用在多个业务中使用此服务，通过此 ID 区分统计数据
                     * @param _businessId 业务 ID，网站或应用在多个业务中使用此服务，通过此 ID 区分统计数据
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
                     * 获取场景 ID，网站或应用的业务下有多个场景使用此服务，通过此 ID 区分统计数据
                     * @return SceneId 场景 ID，网站或应用的业务下有多个场景使用此服务，通过此 ID 区分统计数据
                     * 
                     */
                    uint64_t GetSceneId() const;

                    /**
                     * 设置场景 ID，网站或应用的业务下有多个场景使用此服务，通过此 ID 区分统计数据
                     * @param _sceneId 场景 ID，网站或应用的业务下有多个场景使用此服务，通过此 ID 区分统计数据
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
                     * 获取验证场景：1 活动防刷场景，2 登录保护场景，3 注册保护场景。根据需求选择场景参数。
                     * @return SceneCode 验证场景：1 活动防刷场景，2 登录保护场景，3 注册保护场景。根据需求选择场景参数。
                     * 
                     */
                    int64_t GetSceneCode() const;

                    /**
                     * 设置验证场景：1 活动防刷场景，2 登录保护场景，3 注册保护场景。根据需求选择场景参数。
                     * @param _sceneCode 验证场景：1 活动防刷场景，2 登录保护场景，3 注册保护场景。根据需求选择场景参数。
                     * 
                     */
                    void SetSceneCode(const int64_t& _sceneCode);

                    /**
                     * 判断参数 SceneCode 是否已赋值
                     * @return SceneCode 是否已赋值
                     * 
                     */
                    bool SceneCodeHasBeenSet() const;

                    /**
                     * 获取用户操作来源的微信开放账号
                     * @return WeChatOpenId 用户操作来源的微信开放账号
                     * 
                     */
                    std::string GetWeChatOpenId() const;

                    /**
                     * 设置用户操作来源的微信开放账号
                     * @param _weChatOpenId 用户操作来源的微信开放账号
                     * 
                     */
                    void SetWeChatOpenId(const std::string& _weChatOpenId);

                    /**
                     * 判断参数 WeChatOpenId 是否已赋值
                     * @return WeChatOpenId 是否已赋值
                     * 
                     */
                    bool WeChatOpenIdHasBeenSet() const;

                private:

                    /**
                     * 固定填值：9（滑块验证码）
                     */
                    uint64_t m_captchaType;
                    bool m_captchaTypeHasBeenSet;

                    /**
                     * 验证码返回给用户的票据
                     */
                    std::string m_ticket;
                    bool m_ticketHasBeenSet;

                    /**
                     * 业务侧获取到的验证码使用者的外网IP
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 验证码应用APPID
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

                    /**
                     * 验证场景：1 活动防刷场景，2 登录保护场景，3 注册保护场景。根据需求选择场景参数。
                     */
                    int64_t m_sceneCode;
                    bool m_sceneCodeHasBeenSet;

                    /**
                     * 用户操作来源的微信开放账号
                     */
                    std::string m_weChatOpenId;
                    bool m_weChatOpenIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAMINIRISKRESULTREQUEST_H_
