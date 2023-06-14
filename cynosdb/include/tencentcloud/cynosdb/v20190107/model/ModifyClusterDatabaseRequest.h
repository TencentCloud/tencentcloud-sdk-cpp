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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERDATABASEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERDATABASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/UserHostPrivilege.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyClusterDatabase请求参数结构体
                */
                class ModifyClusterDatabaseRequest : public AbstractModel
                {
                public:
                    ModifyClusterDatabaseRequest();
                    ~ModifyClusterDatabaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取数据库名
                     * @return DbName 数据库名
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名
                     * @param _dbName 数据库名
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取新授权用户主机权限
                     * @return NewUserHostPrivileges 新授权用户主机权限
                     * 
                     */
                    std::vector<UserHostPrivilege> GetNewUserHostPrivileges() const;

                    /**
                     * 设置新授权用户主机权限
                     * @param _newUserHostPrivileges 新授权用户主机权限
                     * 
                     */
                    void SetNewUserHostPrivileges(const std::vector<UserHostPrivilege>& _newUserHostPrivileges);

                    /**
                     * 判断参数 NewUserHostPrivileges 是否已赋值
                     * @return NewUserHostPrivileges 是否已赋值
                     * 
                     */
                    bool NewUserHostPrivilegesHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Description 备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param _description 备注
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取历史授权用户主机权限
                     * @return OldUserHostPrivileges 历史授权用户主机权限
                     * 
                     */
                    std::vector<UserHostPrivilege> GetOldUserHostPrivileges() const;

                    /**
                     * 设置历史授权用户主机权限
                     * @param _oldUserHostPrivileges 历史授权用户主机权限
                     * 
                     */
                    void SetOldUserHostPrivileges(const std::vector<UserHostPrivilege>& _oldUserHostPrivileges);

                    /**
                     * 判断参数 OldUserHostPrivileges 是否已赋值
                     * @return OldUserHostPrivileges 是否已赋值
                     * 
                     */
                    bool OldUserHostPrivilegesHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 数据库名
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 新授权用户主机权限
                     */
                    std::vector<UserHostPrivilege> m_newUserHostPrivileges;
                    bool m_newUserHostPrivilegesHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 历史授权用户主机权限
                     */
                    std::vector<UserHostPrivilege> m_oldUserHostPrivileges;
                    bool m_oldUserHostPrivilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERDATABASEREQUEST_H_
