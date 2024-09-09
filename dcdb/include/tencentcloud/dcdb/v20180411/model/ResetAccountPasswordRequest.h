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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_RESETACCOUNTPASSWORDREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_RESETACCOUNTPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * ResetAccountPassword请求参数结构体
                */
                class ResetAccountPasswordRequest : public AbstractModel
                {
                public:
                    ResetAccountPasswordRequest();
                    ~ResetAccountPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，形如：dcdbt-ow728lmc。
                     * @return InstanceId 实例 ID，形如：dcdbt-ow728lmc。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，形如：dcdbt-ow728lmc。
                     * @param _instanceId 实例 ID，形如：dcdbt-ow728lmc。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取登录用户名。
                     * @return UserName 登录用户名。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置登录用户名。
                     * @param _userName 登录用户名。
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
                     * 获取用户允许的访问 host，用户名+host唯一确定一个账号。
                     * @return Host 用户允许的访问 host，用户名+host唯一确定一个账号。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置用户允许的访问 host，用户名+host唯一确定一个账号。
                     * @param _host 用户允许的访问 host，用户名+host唯一确定一个账号。
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
                     * 获取新密码，由字母、数字或常见符号组成，不能包含分号、单引号和双引号，长度为6~32位。
                     * @return Password 新密码，由字母、数字或常见符号组成，不能包含分号、单引号和双引号，长度为6~32位。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置新密码，由字母、数字或常见符号组成，不能包含分号、单引号和双引号，长度为6~32位。
                     * @param _password 新密码，由字母、数字或常见符号组成，不能包含分号、单引号和双引号，长度为6~32位。
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
                     * 获取使用GetPublicKey返回的RSA2048公钥加密后的密码，加密算法是PKCS1v15
                     * @return EncryptedPassword 使用GetPublicKey返回的RSA2048公钥加密后的密码，加密算法是PKCS1v15
                     * 
                     */
                    std::string GetEncryptedPassword() const;

                    /**
                     * 设置使用GetPublicKey返回的RSA2048公钥加密后的密码，加密算法是PKCS1v15
                     * @param _encryptedPassword 使用GetPublicKey返回的RSA2048公钥加密后的密码，加密算法是PKCS1v15
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
                     * 实例 ID，形如：dcdbt-ow728lmc。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 登录用户名。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户允许的访问 host，用户名+host唯一确定一个账号。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 新密码，由字母、数字或常见符号组成，不能包含分号、单引号和双引号，长度为6~32位。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 使用GetPublicKey返回的RSA2048公钥加密后的密码，加密算法是PKCS1v15
                     */
                    std::string m_encryptedPassword;
                    bool m_encryptedPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_RESETACCOUNTPASSWORDREQUEST_H_
