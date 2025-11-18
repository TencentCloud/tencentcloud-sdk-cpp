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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLOSEACCOUNTCAMREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLOSEACCOUNTCAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CloseAccountCAM请求参数结构体
                */
                class CloseAccountCAMRequest : public AbstractModel
                {
                public:
                    CloseAccountCAMRequest();
                    ~CloseAccountCAMRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return DBInstanceId 实例ID
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _dBInstanceId 实例ID
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取需要关闭CAM服务的账号名称
                     * @return UserName 需要关闭CAM服务的账号名称
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置需要关闭CAM服务的账号名称
                     * @param _userName 需要关闭CAM服务的账号名称
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
                     * 获取关闭CAM后，登录该账号所需要的新密码
                     * @return Password 关闭CAM后，登录该账号所需要的新密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置关闭CAM后，登录该账号所需要的新密码
                     * @param _password 关闭CAM后，登录该账号所需要的新密码
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
                     * 获取密码是否加密
                     * @return PasswordEncrypt 密码是否加密
                     * 
                     */
                    bool GetPasswordEncrypt() const;

                    /**
                     * 设置密码是否加密
                     * @param _passwordEncrypt 密码是否加密
                     * 
                     */
                    void SetPasswordEncrypt(const bool& _passwordEncrypt);

                    /**
                     * 判断参数 PasswordEncrypt 是否已赋值
                     * @return PasswordEncrypt 是否已赋值
                     * 
                     */
                    bool PasswordEncryptHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 需要关闭CAM服务的账号名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 关闭CAM后，登录该账号所需要的新密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 密码是否加密
                     */
                    bool m_passwordEncrypt;
                    bool m_passwordEncryptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLOSEACCOUNTCAMREQUEST_H_
