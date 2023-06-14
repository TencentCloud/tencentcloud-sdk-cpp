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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SETACCOUNTUSERPRIVILEGEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SETACCOUNTUSERPRIVILEGEREQUEST_H_

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
                * SetAccountUserPrivilege请求参数结构体
                */
                class SetAccountUserPrivilegeRequest : public AbstractModel
                {
                public:
                    SetAccountUserPrivilegeRequest();
                    ~SetAccountUserPrivilegeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定待设置账号的实例ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @return InstanceId 指定待设置账号的实例ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定待设置账号的实例ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @param _instanceId 指定待设置账号的实例ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
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
                     * 获取设置账号名称。
                     * @return UserName 设置账号名称。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置设置账号名称。
                     * @param _userName 设置账号名称。
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
                     * 获取设置权限信息。
                     * @return AuthRole 设置权限信息。
                     * 
                     */
                    std::vector<Auth> GetAuthRole() const;

                    /**
                     * 设置设置权限信息。
                     * @param _authRole 设置权限信息。
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
                     * 指定待设置账号的实例ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 设置账号名称。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 设置权限信息。
                     */
                    std::vector<Auth> m_authRole;
                    bool m_authRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SETACCOUNTUSERPRIVILEGEREQUEST_H_
