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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNIMAGESECRETINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNIMAGESECRETINFO_H_

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
                * ImageSecretInfo的信息
                */
                class CloudBaseRunImageSecretInfo : public AbstractModel
                {
                public:
                    CloudBaseRunImageSecretInfo();
                    ~CloudBaseRunImageSecretInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像地址
                     * @return RegistryServer 镜像地址
                     * 
                     */
                    std::string GetRegistryServer() const;

                    /**
                     * 设置镜像地址
                     * @param _registryServer 镜像地址
                     * 
                     */
                    void SetRegistryServer(const std::string& _registryServer);

                    /**
                     * 判断参数 RegistryServer 是否已赋值
                     * @return RegistryServer 是否已赋值
                     * 
                     */
                    bool RegistryServerHasBeenSet() const;

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
                     * 获取仓库密码
                     * @return Password 仓库密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置仓库密码
                     * @param _password 仓库密码
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
                     * 获取邮箱
                     * @return Email 邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱
                     * @param _email 邮箱
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                private:

                    /**
                     * 镜像地址
                     */
                    std::string m_registryServer;
                    bool m_registryServerHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 仓库密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNIMAGESECRETINFO_H_
