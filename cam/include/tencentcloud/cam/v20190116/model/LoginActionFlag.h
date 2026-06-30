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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LOGINACTIONFLAG_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LOGINACTIONFLAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 登录和敏感操作flag（校验方式是单选）
                */
                class LoginActionFlag : public AbstractModel
                {
                public:
                    LoginActionFlag();
                    ~LoginActionFlag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>0: 非安全手机校验 1: 安全手机校验。</p>
                     * @return Phone <p>0: 非安全手机校验 1: 安全手机校验。</p>
                     * 
                     */
                    uint64_t GetPhone() const;

                    /**
                     * 设置<p>0: 非安全手机校验 1: 安全手机校验。</p>
                     * @param _phone <p>0: 非安全手机校验 1: 安全手机校验。</p>
                     * 
                     */
                    void SetPhone(const uint64_t& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取<p>0: 非硬token校验 1: 硬token校验。</p>
                     * @return Token <p>0: 非硬token校验 1: 硬token校验。</p>
                     * 
                     */
                    uint64_t GetToken() const;

                    /**
                     * 设置<p>0: 非硬token校验 1: 硬token校验。</p>
                     * @param _token <p>0: 非硬token校验 1: 硬token校验。</p>
                     * 
                     */
                    void SetToken(const uint64_t& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取<p>0: 非软token校验 1: 软token校验</p>
                     * @return Stoken <p>0: 非软token校验 1: 软token校验</p>
                     * 
                     */
                    uint64_t GetStoken() const;

                    /**
                     * 设置<p>0: 非软token校验 1: 软token校验</p>
                     * @param _stoken <p>0: 非软token校验 1: 软token校验</p>
                     * 
                     */
                    void SetStoken(const uint64_t& _stoken);

                    /**
                     * 判断参数 Stoken 是否已赋值
                     * @return Stoken 是否已赋值
                     * 
                     */
                    bool StokenHasBeenSet() const;

                    /**
                     * 获取<p>0: 非微信校验 1: 微信校验</p>
                     * @return Wechat <p>0: 非微信校验 1: 微信校验</p>
                     * 
                     */
                    uint64_t GetWechat() const;

                    /**
                     * 设置<p>0: 非微信校验 1: 微信校验</p>
                     * @param _wechat <p>0: 非微信校验 1: 微信校验</p>
                     * 
                     */
                    void SetWechat(const uint64_t& _wechat);

                    /**
                     * 判断参数 Wechat 是否已赋值
                     * @return Wechat 是否已赋值
                     * 
                     */
                    bool WechatHasBeenSet() const;

                    /**
                     * 获取<p>0: 非自定义校验 1: 自定义校验</p>
                     * @return Custom <p>0: 非自定义校验 1: 自定义校验</p>
                     * 
                     */
                    uint64_t GetCustom() const;

                    /**
                     * 设置<p>0: 非自定义校验 1: 自定义校验</p>
                     * @param _custom <p>0: 非自定义校验 1: 自定义校验</p>
                     * 
                     */
                    void SetCustom(const uint64_t& _custom);

                    /**
                     * 判断参数 Custom 是否已赋值
                     * @return Custom 是否已赋值
                     * 
                     */
                    bool CustomHasBeenSet() const;

                    /**
                     * 获取<p>0: 非邮箱校验 1: 邮箱校验</p>
                     * @return Mail <p>0: 非邮箱校验 1: 邮箱校验</p>
                     * 
                     */
                    uint64_t GetMail() const;

                    /**
                     * 设置<p>0: 非邮箱校验 1: 邮箱校验</p>
                     * @param _mail <p>0: 非邮箱校验 1: 邮箱校验</p>
                     * 
                     */
                    void SetMail(const uint64_t& _mail);

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     * 
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取<p>0: 非u2f硬件token 1: u2f硬件token</p>
                     * @return U2FToken <p>0: 非u2f硬件token 1: u2f硬件token</p>
                     * 
                     */
                    uint64_t GetU2FToken() const;

                    /**
                     * 设置<p>0: 非u2f硬件token 1: u2f硬件token</p>
                     * @param _u2FToken <p>0: 非u2f硬件token 1: u2f硬件token</p>
                     * 
                     */
                    void SetU2FToken(const uint64_t& _u2FToken);

                    /**
                     * 判断参数 U2FToken 是否已赋值
                     * @return U2FToken 是否已赋值
                     * 
                     */
                    bool U2FTokenHasBeenSet() const;

                    /**
                     * 获取<p>0: 非passkey 校验 1: passkey校验</p>
                     * @return Passkey <p>0: 非passkey 校验 1: passkey校验</p>
                     * 
                     */
                    uint64_t GetPasskey() const;

                    /**
                     * 设置<p>0: 非passkey 校验 1: passkey校验</p>
                     * @param _passkey <p>0: 非passkey 校验 1: passkey校验</p>
                     * 
                     */
                    void SetPasskey(const uint64_t& _passkey);

                    /**
                     * 判断参数 Passkey 是否已赋值
                     * @return Passkey 是否已赋值
                     * 
                     */
                    bool PasskeyHasBeenSet() const;

                private:

                    /**
                     * <p>0: 非安全手机校验 1: 安全手机校验。</p>
                     */
                    uint64_t m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * <p>0: 非硬token校验 1: 硬token校验。</p>
                     */
                    uint64_t m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * <p>0: 非软token校验 1: 软token校验</p>
                     */
                    uint64_t m_stoken;
                    bool m_stokenHasBeenSet;

                    /**
                     * <p>0: 非微信校验 1: 微信校验</p>
                     */
                    uint64_t m_wechat;
                    bool m_wechatHasBeenSet;

                    /**
                     * <p>0: 非自定义校验 1: 自定义校验</p>
                     */
                    uint64_t m_custom;
                    bool m_customHasBeenSet;

                    /**
                     * <p>0: 非邮箱校验 1: 邮箱校验</p>
                     */
                    uint64_t m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * <p>0: 非u2f硬件token 1: u2f硬件token</p>
                     */
                    uint64_t m_u2FToken;
                    bool m_u2FTokenHasBeenSet;

                    /**
                     * <p>0: 非passkey 校验 1: passkey校验</p>
                     */
                    uint64_t m_passkey;
                    bool m_passkeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LOGINACTIONFLAG_H_
