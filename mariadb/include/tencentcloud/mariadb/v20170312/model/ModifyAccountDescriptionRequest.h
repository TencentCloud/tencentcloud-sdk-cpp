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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYACCOUNTDESCRIPTIONREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYACCOUNTDESCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyAccountDescription请求参数结构体
                */
                class ModifyAccountDescriptionRequest : public AbstractModel
                {
                public:
                    ModifyAccountDescriptionRequest();
                    ~ModifyAccountDescriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     * @return InstanceId 实例 ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     * @param _instanceId 实例 ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
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
                     * 获取登录用户名。
                     * @return UserName 登录用户名。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置登录用户名。
                     * @param _userName 登录用户名。
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
                     * 获取用户允许的访问 host，用户名+host唯一确定一个账号。
                     * @return Host 用户允许的访问 host，用户名+host唯一确定一个账号。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置用户允许的访问 host，用户名+host唯一确定一个账号。
                     * @param _host 用户允许的访问 host，用户名+host唯一确定一个账号。
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
                     * 获取新的账号备注，长度 0~256。
                     * @return Description 新的账号备注，长度 0~256。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置新的账号备注，长度 0~256。
                     * @param _description 新的账号备注，长度 0~256。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 登录用户名。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户允许的访问 host，用户名+host唯一确定一个账号。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 新的账号备注，长度 0~256。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYACCOUNTDESCRIPTIONREQUEST_H_
