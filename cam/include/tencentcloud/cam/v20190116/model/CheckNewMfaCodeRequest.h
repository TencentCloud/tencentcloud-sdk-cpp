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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CHECKNEWMFACODEREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CHECKNEWMFACODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * CheckNewMfaCode请求参数结构体
                */
                class CheckNewMfaCodeRequest : public AbstractModel
                {
                public:
                    CheckNewMfaCodeRequest();
                    ~CheckNewMfaCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取登录态Skey
                     * @return Skey 登录态Skey
                     */
                    std::string GetSkey() const;

                    /**
                     * 设置登录态Skey
                     * @param Skey 登录态Skey
                     */
                    void SetSkey(const std::string& _skey);

                    /**
                     * 判断参数 Skey 是否已赋值
                     * @return Skey 是否已赋值
                     */
                    bool SkeyHasBeenSet() const;

                    /**
                     * 获取接口名
                     * @return Interface 接口名
                     */
                    std::string GetInterface() const;

                    /**
                     * 设置接口名
                     * @param Interface 接口名
                     */
                    void SetInterface(const std::string& _interface);

                    /**
                     * 判断参数 Interface 是否已赋值
                     * @return Interface 是否已赋值
                     */
                    bool InterfaceHasBeenSet() const;

                    /**
                     * 获取IP
                     * @return ClientIP IP
                     */
                    std::string GetClientIP() const;

                    /**
                     * 设置IP
                     * @param ClientIP IP
                     */
                    void SetClientIP(const std::string& _clientIP);

                    /**
                     * 判断参数 ClientIP 是否已赋值
                     * @return ClientIP 是否已赋值
                     */
                    bool ClientIPHasBeenSet() const;

                    /**
                     * 获取浏览器UA
                     * @return ClientUA 浏览器UA
                     */
                    std::string GetClientUA() const;

                    /**
                     * 设置浏览器UA
                     * @param ClientUA 浏览器UA
                     */
                    void SetClientUA(const std::string& _clientUA);

                    /**
                     * 判断参数 ClientUA 是否已赋值
                     * @return ClientUA 是否已赋值
                     */
                    bool ClientUAHasBeenSet() const;

                    /**
                     * 获取验证类型
                     * @return AuthType 验证类型
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置验证类型
                     * @param AuthType 验证类型
                     */
                    void SetAuthType(const uint64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取主账号uin
                     * @return OwnerUin 主账号uin
                     */
                    uint64_t GetOwnerUin() const;

                    /**
                     * 设置主账号uin
                     * @param OwnerUin 主账号uin
                     */
                    void SetOwnerUin(const uint64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取手机验证码
                     * @return PhoneCode 手机验证码
                     */
                    uint64_t GetPhoneCode() const;

                    /**
                     * 设置手机验证码
                     * @param PhoneCode 手机验证码
                     */
                    void SetPhoneCode(const uint64_t& _phoneCode);

                    /**
                     * 判断参数 PhoneCode 是否已赋值
                     * @return PhoneCode 是否已赋值
                     */
                    bool PhoneCodeHasBeenSet() const;

                    /**
                     * 获取手机号码
                     * @return PhoneNumber 手机号码
                     */
                    uint64_t GetPhoneNumber() const;

                    /**
                     * 设置手机号码
                     * @param PhoneNumber 手机号码
                     */
                    void SetPhoneNumber(const uint64_t& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取邮箱验证码
                     * @return MailCode 邮箱验证码
                     */
                    uint64_t GetMailCode() const;

                    /**
                     * 设置邮箱验证码
                     * @param MailCode 邮箱验证码
                     */
                    void SetMailCode(const uint64_t& _mailCode);

                    /**
                     * 判断参数 MailCode 是否已赋值
                     * @return MailCode 是否已赋值
                     */
                    bool MailCodeHasBeenSet() const;

                    /**
                     * 获取邮箱
                     * @return Mail 邮箱
                     */
                    std::string GetMail() const;

                    /**
                     * 设置邮箱
                     * @param Mail 邮箱
                     */
                    void SetMail(const std::string& _mail);

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取手机国码
                     * @return CountryCode 手机国码
                     */
                    uint64_t GetCountryCode() const;

                    /**
                     * 设置手机国码
                     * @param CountryCode 手机国码
                     */
                    void SetCountryCode(const uint64_t& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     */
                    bool CountryCodeHasBeenSet() const;

                private:

                    /**
                     * 登录态Skey
                     */
                    std::string m_skey;
                    bool m_skeyHasBeenSet;

                    /**
                     * 接口名
                     */
                    std::string m_interface;
                    bool m_interfaceHasBeenSet;

                    /**
                     * IP
                     */
                    std::string m_clientIP;
                    bool m_clientIPHasBeenSet;

                    /**
                     * 浏览器UA
                     */
                    std::string m_clientUA;
                    bool m_clientUAHasBeenSet;

                    /**
                     * 验证类型
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 主账号uin
                     */
                    uint64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 手机验证码
                     */
                    uint64_t m_phoneCode;
                    bool m_phoneCodeHasBeenSet;

                    /**
                     * 手机号码
                     */
                    uint64_t m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 邮箱验证码
                     */
                    uint64_t m_mailCode;
                    bool m_mailCodeHasBeenSet;

                    /**
                     * 邮箱
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * 手机国码
                     */
                    uint64_t m_countryCode;
                    bool m_countryCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CHECKNEWMFACODEREQUEST_H_
