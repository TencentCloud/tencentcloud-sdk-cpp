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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATEMQTTUSERREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATEMQTTUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * CreateMQTTUser请求参数结构体
                */
                class CreateMQTTUserRequest : public AbstractModel
                {
                public:
                    CreateMQTTUserRequest();
                    ~CreateMQTTUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
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
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取是否开启生产权限
                     * @return PermWrite 是否开启生产权限
                     * 
                     */
                    bool GetPermWrite() const;

                    /**
                     * 设置是否开启生产权限
                     * @param _permWrite 是否开启生产权限
                     * 
                     */
                    void SetPermWrite(const bool& _permWrite);

                    /**
                     * 判断参数 PermWrite 是否已赋值
                     * @return PermWrite 是否已赋值
                     * 
                     */
                    bool PermWriteHasBeenSet() const;

                    /**
                     * 获取是否开启消费权限
                     * @return PermRead 是否开启消费权限
                     * 
                     */
                    bool GetPermRead() const;

                    /**
                     * 设置是否开启消费权限
                     * @param _permRead 是否开启消费权限
                     * 
                     */
                    void SetPermRead(const bool& _permRead);

                    /**
                     * 判断参数 PermRead 是否已赋值
                     * @return PermRead 是否已赋值
                     * 
                     */
                    bool PermReadHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return Username 用户名
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置用户名
                     * @param _username 用户名
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取密码，该字段为空时候则后端会默认生成
                     * @return Password 密码，该字段为空时候则后端会默认生成
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码，该字段为空时候则后端会默认生成
                     * @param _password 密码，该字段为空时候则后端会默认生成
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
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否开启生产权限
                     */
                    bool m_permWrite;
                    bool m_permWriteHasBeenSet;

                    /**
                     * 是否开启消费权限
                     */
                    bool m_permRead;
                    bool m_permReadHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 密码，该字段为空时候则后端会默认生成
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATEMQTTUSERREQUEST_H_
