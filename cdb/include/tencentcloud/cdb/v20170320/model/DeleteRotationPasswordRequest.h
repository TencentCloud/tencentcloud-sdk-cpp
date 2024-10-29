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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DELETEROTATIONPASSWORDREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DELETEROTATIONPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DeleteRotationPassword请求参数结构体
                */
                class DeleteRotationPasswordRequest : public AbstractModel
                {
                public:
                    DeleteRotationPasswordRequest();
                    ~DeleteRotationPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同
                     * @return InstanceId 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同
                     * @param _instanceId 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同
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
                     * 获取关闭密码轮转的实例账户名,例如root
                     * @return User 关闭密码轮转的实例账户名,例如root
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置关闭密码轮转的实例账户名,例如root
                     * @param _user 关闭密码轮转的实例账户名,例如root
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取关闭密码轮转的实例账户域名，例如%
                     * @return Host 关闭密码轮转的实例账户域名，例如%
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置关闭密码轮转的实例账户域名，例如%
                     * @param _host 关闭密码轮转的实例账户域名，例如%
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
                     * 获取关闭密码轮转后实例账户的最新密码
                     * @return Password 关闭密码轮转后实例账户的最新密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置关闭密码轮转后实例账户的最新密码
                     * @param _password 关闭密码轮转后实例账户的最新密码
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
                     * 获取传入不为空则对密码进行了加密处理
                     * @return EncryptMethod 传入不为空则对密码进行了加密处理
                     * 
                     */
                    std::string GetEncryptMethod() const;

                    /**
                     * 设置传入不为空则对密码进行了加密处理
                     * @param _encryptMethod 传入不为空则对密码进行了加密处理
                     * 
                     */
                    void SetEncryptMethod(const std::string& _encryptMethod);

                    /**
                     * 判断参数 EncryptMethod 是否已赋值
                     * @return EncryptMethod 是否已赋值
                     * 
                     */
                    bool EncryptMethodHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 关闭密码轮转的实例账户名,例如root
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 关闭密码轮转的实例账户域名，例如%
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 关闭密码轮转后实例账户的最新密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 传入不为空则对密码进行了加密处理
                     */
                    std::string m_encryptMethod;
                    bool m_encryptMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DELETEROTATIONPASSWORDREQUEST_H_
