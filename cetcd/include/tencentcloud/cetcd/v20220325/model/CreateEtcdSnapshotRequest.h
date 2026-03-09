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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_CREATEETCDSNAPSHOTREQUEST_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_CREATEETCDSNAPSHOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * CreateEtcdSnapshot请求参数结构体
                */
                class CreateEtcdSnapshotRequest : public AbstractModel
                {
                public:
                    CreateEtcdSnapshotRequest();
                    ~CreateEtcdSnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取etcd实例id
                     * @return InstanceId etcd实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置etcd实例id
                     * @param _instanceId etcd实例id
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
                     * 获取etcd快照名称
                     * @return SnapshotName etcd快照名称
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置etcd快照名称
                     * @param _snapshotName etcd快照名称
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取备份用户名
                     * @return User 备份用户名
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置备份用户名
                     * @param _user 备份用户名
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
                     * 获取备份密码
                     * @return Password 备份密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置备份密码
                     * @param _password 备份密码
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
                     * etcd实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * etcd快照名称
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * 备份用户名
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 备份密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_CREATEETCDSNAPSHOTREQUEST_H_
