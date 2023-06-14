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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_RESETDBINSTANCEPASSWORDREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_RESETDBINSTANCEPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * ResetDBInstancePassword请求参数结构体
                */
                class ResetDBInstancePasswordRequest : public AbstractModel
                {
                public:
                    ResetDBInstancePasswordRequest();
                    ~ResetDBInstancePasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
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
                     * 获取实例账号名
                     * @return UserName 实例账号名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置实例账号名
                     * @param _userName 实例账号名
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
                     * 获取新密码，新密码长度不能少于8位
                     * @return Password 新密码，新密码长度不能少于8位
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置新密码，新密码长度不能少于8位
                     * @param _password 新密码，新密码长度不能少于8位
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
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例账号名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 新密码，新密码长度不能少于8位
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_RESETDBINSTANCEPASSWORDREQUEST_H_
