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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_MODIFYUSERNEWPRIVILEGEREQUEST_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_MODIFYUSERNEWPRIVILEGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/DatabasePrivilegeInfo.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * ModifyUserNewPrivilege请求参数结构体
                */
                class ModifyUserNewPrivilegeRequest : public AbstractModel
                {
                public:
                    ModifyUserNewPrivilegeRequest();
                    ~ModifyUserNewPrivilegeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取cluster名称
                     * @return Cluster cluster名称
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置cluster名称
                     * @param _cluster cluster名称
                     * 
                     */
                    void SetCluster(const std::string& _cluster);

                    /**
                     * 判断参数 Cluster 是否已赋值
                     * @return Cluster 是否已赋值
                     * 
                     */
                    bool ClusterHasBeenSet() const;

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
                     * 获取是否所有数据库表
                     * @return AllDatabase 是否所有数据库表
                     * 
                     */
                    bool GetAllDatabase() const;

                    /**
                     * 设置是否所有数据库表
                     * @param _allDatabase 是否所有数据库表
                     * 
                     */
                    void SetAllDatabase(const bool& _allDatabase);

                    /**
                     * 判断参数 AllDatabase 是否已赋值
                     * @return AllDatabase 是否已赋值
                     * 
                     */
                    bool AllDatabaseHasBeenSet() const;

                    /**
                     * 获取全局权限
                     * @return GlobalPrivileges 全局权限
                     * 
                     */
                    std::vector<std::string> GetGlobalPrivileges() const;

                    /**
                     * 设置全局权限
                     * @param _globalPrivileges 全局权限
                     * 
                     */
                    void SetGlobalPrivileges(const std::vector<std::string>& _globalPrivileges);

                    /**
                     * 判断参数 GlobalPrivileges 是否已赋值
                     * @return GlobalPrivileges 是否已赋值
                     * 
                     */
                    bool GlobalPrivilegesHasBeenSet() const;

                    /**
                     * 获取数据库表权限
                     * @return DatabasePrivilegeList 数据库表权限
                     * 
                     */
                    std::vector<DatabasePrivilegeInfo> GetDatabasePrivilegeList() const;

                    /**
                     * 设置数据库表权限
                     * @param _databasePrivilegeList 数据库表权限
                     * 
                     */
                    void SetDatabasePrivilegeList(const std::vector<DatabasePrivilegeInfo>& _databasePrivilegeList);

                    /**
                     * 判断参数 DatabasePrivilegeList 是否已赋值
                     * @return DatabasePrivilegeList 是否已赋值
                     * 
                     */
                    bool DatabasePrivilegeListHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * cluster名称
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 是否所有数据库表
                     */
                    bool m_allDatabase;
                    bool m_allDatabaseHasBeenSet;

                    /**
                     * 全局权限
                     */
                    std::vector<std::string> m_globalPrivileges;
                    bool m_globalPrivilegesHasBeenSet;

                    /**
                     * 数据库表权限
                     */
                    std::vector<DatabasePrivilegeInfo> m_databasePrivilegeList;
                    bool m_databasePrivilegeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_MODIFYUSERNEWPRIVILEGEREQUEST_H_
