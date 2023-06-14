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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_RESETACCOUNTPASSWORDREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_RESETACCOUNTPASSWORDREQUEST_H_

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
                * ResetAccountPassword请求参数结构体
                */
                class ResetAccountPasswordRequest : public AbstractModel
                {
                public:
                    ResetAccountPasswordRequest();
                    ~ResetAccountPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如postgres-4wdeb0zv
                     * @return DBInstanceId 实例ID，形如postgres-4wdeb0zv
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID，形如postgres-4wdeb0zv
                     * @param _dBInstanceId 实例ID，形如postgres-4wdeb0zv
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
                     * 获取实例账户名
                     * @return UserName 实例账户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置实例账户名
                     * @param _userName 实例账户名
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
                     * 获取UserName账户对应的新密码
                     * @return Password UserName账户对应的新密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置UserName账户对应的新密码
                     * @param _password UserName账户对应的新密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如postgres-4wdeb0zv
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 实例账户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * UserName账户对应的新密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_RESETACCOUNTPASSWORDREQUEST_H_
