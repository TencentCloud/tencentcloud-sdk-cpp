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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DELETEACCOUNTUSERREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DELETEACCOUNTUSERREQUEST_H_

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
                * DeleteAccountUser请求参数结构体
                */
                class DeleteAccountUserRequest : public AbstractModel
                {
                public:
                    DeleteAccountUserRequest();
                    ~DeleteAccountUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定待删除账号的实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。

                     * @return InstanceId 指定待删除账号的实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。

                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定待删除账号的实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。

                     * @param _instanceId 指定待删除账号的实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。

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
                     * 获取配置待删除的账号名。
                     * @return UserName 配置待删除的账号名。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置配置待删除的账号名。
                     * @param _userName 配置待删除的账号名。
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
                     * 获取配置 mongouser 对应的密码。mongouser为系统默认账号，输入其对应的密码。
                     * @return MongoUserPassword 配置 mongouser 对应的密码。mongouser为系统默认账号，输入其对应的密码。
                     * 
                     */
                    std::string GetMongoUserPassword() const;

                    /**
                     * 设置配置 mongouser 对应的密码。mongouser为系统默认账号，输入其对应的密码。
                     * @param _mongoUserPassword 配置 mongouser 对应的密码。mongouser为系统默认账号，输入其对应的密码。
                     * 
                     */
                    void SetMongoUserPassword(const std::string& _mongoUserPassword);

                    /**
                     * 判断参数 MongoUserPassword 是否已赋值
                     * @return MongoUserPassword 是否已赋值
                     * 
                     */
                    bool MongoUserPasswordHasBeenSet() const;

                private:

                    /**
                     * 指定待删除账号的实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 配置待删除的账号名。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 配置 mongouser 对应的密码。mongouser为系统默认账号，输入其对应的密码。
                     */
                    std::string m_mongoUserPassword;
                    bool m_mongoUserPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DELETEACCOUNTUSERREQUEST_H_
