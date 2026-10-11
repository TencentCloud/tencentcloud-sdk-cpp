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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DELETEINSTANCEROLEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DELETEINSTANCEROLEREQUEST_H_

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
                * DeleteInstanceRole请求参数结构体
                */
                class DeleteInstanceRoleRequest : public AbstractModel
                {
                public:
                    DeleteInstanceRoleRequest();
                    ~DeleteInstanceRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
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
                     * 获取<p>角色名</p>
                     * @return RoleName <p>角色名</p>
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置<p>角色名</p>
                     * @param _roleName <p>角色名</p>
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取<p>角色所属数据库</p>
                     * @return Database <p>角色所属数据库</p>
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置<p>角色所属数据库</p>
                     * @param _database <p>角色所属数据库</p>
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                private:

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>角色名</p>
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * <p>角色所属数据库</p>
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DELETEINSTANCEROLEREQUEST_H_
