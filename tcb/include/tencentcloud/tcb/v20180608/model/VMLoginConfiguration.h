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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_VMLOGINCONFIGURATION_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_VMLOGINCONFIGURATION_H_

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
                * 云服务器登录方式
                */
                class VMLoginConfiguration : public AbstractModel
                {
                public:
                    VMLoginConfiguration();
                    ~VMLoginConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取登录方式。扫码登录时指定为 SCAN_LOGIN
                     * @return LoginType 登录方式。扫码登录时指定为 SCAN_LOGIN
                     * 
                     */
                    std::string GetLoginType() const;

                    /**
                     * 设置登录方式。扫码登录时指定为 SCAN_LOGIN
                     * @param _loginType 登录方式。扫码登录时指定为 SCAN_LOGIN
                     * 
                     */
                    void SetLoginType(const std::string& _loginType);

                    /**
                     * 判断参数 LoginType 是否已赋值
                     * @return LoginType 是否已赋值
                     * 
                     */
                    bool LoginTypeHasBeenSet() const;

                    /**
                     * 获取是否自动生成密码
                     * @return AutoGeneratePassword 是否自动生成密码
                     * 
                     */
                    std::string GetAutoGeneratePassword() const;

                    /**
                     * 设置是否自动生成密码
                     * @param _autoGeneratePassword 是否自动生成密码
                     * 
                     */
                    void SetAutoGeneratePassword(const std::string& _autoGeneratePassword);

                    /**
                     * 判断参数 AutoGeneratePassword 是否已赋值
                     * @return AutoGeneratePassword 是否已赋值
                     * 
                     */
                    bool AutoGeneratePasswordHasBeenSet() const;

                    /**
                     * 获取指定密码登录
                     * @return Password 指定密码登录
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置指定密码登录
                     * @param _password 指定密码登录
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取绑定密钥ID
                     * @return KeyIds 绑定密钥ID
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置绑定密钥ID
                     * @param _keyIds 绑定密钥ID
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                private:

                    /**
                     * 登录方式。扫码登录时指定为 SCAN_LOGIN
                     */
                    std::string m_loginType;
                    bool m_loginTypeHasBeenSet;

                    /**
                     * 是否自动生成密码
                     */
                    std::string m_autoGeneratePassword;
                    bool m_autoGeneratePasswordHasBeenSet;

                    /**
                     * 指定密码登录
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 绑定密钥ID
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_VMLOGINCONFIGURATION_H_
