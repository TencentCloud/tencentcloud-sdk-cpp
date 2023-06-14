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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEACCOUNTUSERREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEACCOUNTUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/Auth.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * CreateAccountUser请求参数结构体
                */
                class CreateAccountUserRequest : public AbstractModel
                {
                public:
                    CreateAccountUserRequest();
                    ~CreateAccountUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @return InstanceId 实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @param _instanceId 实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
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
                     * 获取新账号名称。其格式要求如下：<ul><li>字符范围[1,32]。</li><li>可输入[A,Z]、[a,z]、[1,9]范围的字符以及下划线“_”与短划线“-”。</li></ul>
                     * @return UserName 新账号名称。其格式要求如下：<ul><li>字符范围[1,32]。</li><li>可输入[A,Z]、[a,z]、[1,9]范围的字符以及下划线“_”与短划线“-”。</li></ul>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置新账号名称。其格式要求如下：<ul><li>字符范围[1,32]。</li><li>可输入[A,Z]、[a,z]、[1,9]范围的字符以及下划线“_”与短划线“-”。</li></ul>
                     * @param _userName 新账号名称。其格式要求如下：<ul><li>字符范围[1,32]。</li><li>可输入[A,Z]、[a,z]、[1,9]范围的字符以及下划线“_”与短划线“-”。</li></ul>
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
                     * 获取新账号密码。密码复杂度要求如下：<ul><li>字符长度范围[8,32]。</li><li>至少包含字母、数字和特殊字符（叹号“!”、at"@"、井号“#”、百分号“%”、插入符“^”、星号“*”、小括号“()”、下划线“_”）中的两种。</li></ul>
                     * @return Password 新账号密码。密码复杂度要求如下：<ul><li>字符长度范围[8,32]。</li><li>至少包含字母、数字和特殊字符（叹号“!”、at"@"、井号“#”、百分号“%”、插入符“^”、星号“*”、小括号“()”、下划线“_”）中的两种。</li></ul>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置新账号密码。密码复杂度要求如下：<ul><li>字符长度范围[8,32]。</li><li>至少包含字母、数字和特殊字符（叹号“!”、at"@"、井号“#”、百分号“%”、插入符“^”、星号“*”、小括号“()”、下划线“_”）中的两种。</li></ul>
                     * @param _password 新账号密码。密码复杂度要求如下：<ul><li>字符长度范围[8,32]。</li><li>至少包含字母、数字和特殊字符（叹号“!”、at"@"、井号“#”、百分号“%”、插入符“^”、星号“*”、小括号“()”、下划线“_”）中的两种。</li></ul>
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
                     * 获取mongouser 账号对应的密码。mongouser 为系统默认账号，即为创建实例时，设置的密码。
                     * @return MongoUserPassword mongouser 账号对应的密码。mongouser 为系统默认账号，即为创建实例时，设置的密码。
                     * 
                     */
                    std::string GetMongoUserPassword() const;

                    /**
                     * 设置mongouser 账号对应的密码。mongouser 为系统默认账号，即为创建实例时，设置的密码。
                     * @param _mongoUserPassword mongouser 账号对应的密码。mongouser 为系统默认账号，即为创建实例时，设置的密码。
                     * 
                     */
                    void SetMongoUserPassword(const std::string& _mongoUserPassword);

                    /**
                     * 判断参数 MongoUserPassword 是否已赋值
                     * @return MongoUserPassword 是否已赋值
                     * 
                     */
                    bool MongoUserPasswordHasBeenSet() const;

                    /**
                     * 获取账号备注信息。
                     * @return UserDesc 账号备注信息。
                     * 
                     */
                    std::string GetUserDesc() const;

                    /**
                     * 设置账号备注信息。
                     * @param _userDesc 账号备注信息。
                     * 
                     */
                    void SetUserDesc(const std::string& _userDesc);

                    /**
                     * 判断参数 UserDesc 是否已赋值
                     * @return UserDesc 是否已赋值
                     * 
                     */
                    bool UserDescHasBeenSet() const;

                    /**
                     * 获取账号的读写权限信息。
                     * @return AuthRole 账号的读写权限信息。
                     * 
                     */
                    std::vector<Auth> GetAuthRole() const;

                    /**
                     * 设置账号的读写权限信息。
                     * @param _authRole 账号的读写权限信息。
                     * 
                     */
                    void SetAuthRole(const std::vector<Auth>& _authRole);

                    /**
                     * 判断参数 AuthRole 是否已赋值
                     * @return AuthRole 是否已赋值
                     * 
                     */
                    bool AuthRoleHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 新账号名称。其格式要求如下：<ul><li>字符范围[1,32]。</li><li>可输入[A,Z]、[a,z]、[1,9]范围的字符以及下划线“_”与短划线“-”。</li></ul>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 新账号密码。密码复杂度要求如下：<ul><li>字符长度范围[8,32]。</li><li>至少包含字母、数字和特殊字符（叹号“!”、at"@"、井号“#”、百分号“%”、插入符“^”、星号“*”、小括号“()”、下划线“_”）中的两种。</li></ul>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * mongouser 账号对应的密码。mongouser 为系统默认账号，即为创建实例时，设置的密码。
                     */
                    std::string m_mongoUserPassword;
                    bool m_mongoUserPasswordHasBeenSet;

                    /**
                     * 账号备注信息。
                     */
                    std::string m_userDesc;
                    bool m_userDescHasBeenSet;

                    /**
                     * 账号的读写权限信息。
                     */
                    std::vector<Auth> m_authRole;
                    bool m_authRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEACCOUNTUSERREQUEST_H_
