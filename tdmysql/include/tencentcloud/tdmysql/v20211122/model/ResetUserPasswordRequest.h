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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_RESETUSERPASSWORDREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_RESETUSERPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ResetUserPassword请求参数结构体
                */
                class ResetUserPasswordRequest : public AbstractModel
                {
                public:
                    ResetUserPasswordRequest();
                    ~ResetUserPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户名
                     * @return UserName 用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param _userName 用户名
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
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取主机IP，IP段以%结尾，表示允许该IP段的所有IP
                     * @return Host 主机IP，IP段以%结尾，表示允许该IP段的所有IP
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置主机IP，IP段以%结尾，表示允许该IP段的所有IP
                     * @param _host 主机IP，IP段以%结尾，表示允许该IP段的所有IP
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
                     * 获取新密码，要求长度8-32，至少包含英文、数字和符号中的两种
                     * @return Password 新密码，要求长度8-32，至少包含英文、数字和符号中的两种
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置新密码，要求长度8-32，至少包含英文、数字和符号中的两种
                     * @param _password 新密码，要求长度8-32，至少包含英文、数字和符号中的两种
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
                     * 获取加密密码
                     * @return EncryptedPassword 加密密码
                     * 
                     */
                    std::string GetEncryptedPassword() const;

                    /**
                     * 设置加密密码
                     * @param _encryptedPassword 加密密码
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
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主机IP，IP段以%结尾，表示允许该IP段的所有IP
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 新密码，要求长度8-32，至少包含英文、数字和符号中的两种
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 加密密码
                     */
                    std::string m_encryptedPassword;
                    bool m_encryptedPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_RESETUSERPASSWORDREQUEST_H_
