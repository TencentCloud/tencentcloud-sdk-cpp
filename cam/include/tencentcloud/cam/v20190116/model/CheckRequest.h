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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CHECKREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CHECKREQUEST_H_

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
                * Check请求参数结构体
                */
                class CheckRequest : public AbstractModel
                {
                public:
                    CheckRequest();
                    ~CheckRequest() = default;
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
                     * 获取验证码
                     * @return Code 验证码
                     */
                    std::string GetCode() const;

                    /**
                     * 设置验证码
                     * @param Code 验证码
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取主账号
                     * @return OwnerUin 主账号
                     */
                    uint64_t GetOwnerUin() const;

                    /**
                     * 设置主账号
                     * @param OwnerUin 主账号
                     */
                    void SetOwnerUin(const uint64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     */
                    bool OwnerUinHasBeenSet() const;

                private:

                    /**
                     * 登录态Skey
                     */
                    std::string m_skey;
                    bool m_skeyHasBeenSet;

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
                     * 接口名
                     */
                    std::string m_interface;
                    bool m_interfaceHasBeenSet;

                    /**
                     * 验证类型
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 验证码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 主账号
                     */
                    uint64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CHECKREQUEST_H_
