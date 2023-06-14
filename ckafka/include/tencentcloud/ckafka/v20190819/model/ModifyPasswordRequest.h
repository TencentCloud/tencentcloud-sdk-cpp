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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYPASSWORDREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * ModifyPassword请求参数结构体
                */
                class ModifyPasswordRequest : public AbstractModel
                {
                public:
                    ModifyPasswordRequest();
                    ~ModifyPasswordRequest() = default;
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
                     * 获取用户名称
                     * @return Name 用户名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户名称
                     * @param _name 用户名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取用户当前密码
                     * @return Password 用户当前密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置用户当前密码
                     * @param _password 用户当前密码
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
                     * 获取用户新密码
                     * @return PasswordNew 用户新密码
                     * 
                     */
                    std::string GetPasswordNew() const;

                    /**
                     * 设置用户新密码
                     * @param _passwordNew 用户新密码
                     * 
                     */
                    void SetPasswordNew(const std::string& _passwordNew);

                    /**
                     * 判断参数 PasswordNew 是否已赋值
                     * @return PasswordNew 是否已赋值
                     * 
                     */
                    bool PasswordNewHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户当前密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 用户新密码
                     */
                    std::string m_passwordNew;
                    bool m_passwordNewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYPASSWORDREQUEST_H_
