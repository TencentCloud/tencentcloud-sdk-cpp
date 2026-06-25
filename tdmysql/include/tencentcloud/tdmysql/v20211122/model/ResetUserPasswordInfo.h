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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_RESETUSERPASSWORDINFO_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_RESETUSERPASSWORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 重置密码的用户类型
                */
                class ResetUserPasswordInfo : public AbstractModel
                {
                public:
                    ResetUserPasswordInfo();
                    ~ResetUserPasswordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户名</p>
                     * @return UserName <p>用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _userName <p>用户名</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>host</p>
                     * @return Host <p>host</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>host</p>
                     * @param _host <p>host</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>明文密码</p>
                     * @return Password <p>明文密码</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>明文密码</p>
                     * @param _password <p>明文密码</p>
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
                     * 获取<p>加密密码</p>
                     * @return EncryptedPassword <p>加密密码</p>
                     * 
                     */
                    std::string GetEncryptedPassword() const;

                    /**
                     * 设置<p>加密密码</p>
                     * @param _encryptedPassword <p>加密密码</p>
                     * 
                     */
                    void SetEncryptedPassword(const std::string& _encryptedPassword);

                    /**
                     * 判断参数 EncryptedPassword 是否已赋值
                     * @return EncryptedPassword 是否已赋值
                     * 
                     */
                    bool EncryptedPasswordHasBeenSet() const;

                private:

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>host</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>明文密码</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>加密密码</p>
                     */
                    std::string m_encryptedPassword;
                    bool m_encryptedPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_RESETUSERPASSWORDINFO_H_
