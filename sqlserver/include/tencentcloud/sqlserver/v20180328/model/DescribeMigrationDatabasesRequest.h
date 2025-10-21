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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONDATABASESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONDATABASESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeMigrationDatabases请求参数结构体
                */
                class DescribeMigrationDatabasesRequest : public AbstractModel
                {
                public:
                    DescribeMigrationDatabasesRequest();
                    ~DescribeMigrationDatabasesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取迁移源实例的ID，格式如：mssql-si2823jyl
                     * @return InstanceId 迁移源实例的ID，格式如：mssql-si2823jyl
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置迁移源实例的ID，格式如：mssql-si2823jyl
                     * @param _instanceId 迁移源实例的ID，格式如：mssql-si2823jyl
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
                     * 获取迁移源实例用户名
                     * @return UserName 迁移源实例用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置迁移源实例用户名
                     * @param _userName 迁移源实例用户名
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
                     * 获取迁移源实例密码
                     * @return Password 迁移源实例密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置迁移源实例密码
                     * @param _password 迁移源实例密码
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
                     * 迁移源实例的ID，格式如：mssql-si2823jyl
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 迁移源实例用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 迁移源实例密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONDATABASESREQUEST_H_
