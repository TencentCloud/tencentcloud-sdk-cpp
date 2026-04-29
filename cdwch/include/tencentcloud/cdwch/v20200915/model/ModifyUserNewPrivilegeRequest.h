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
                     * 获取<p>clickhouse逻辑集群名称，可通过连接集群执行 <code>SHOW CLUSTERS</code> 查询获得</p>
                     * @return Cluster <p>clickhouse逻辑集群名称，可通过连接集群执行 <code>SHOW CLUSTERS</code> 查询获得</p>
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置<p>clickhouse逻辑集群名称，可通过连接集群执行 <code>SHOW CLUSTERS</code> 查询获得</p>
                     * @param _cluster <p>clickhouse逻辑集群名称，可通过连接集群执行 <code>SHOW CLUSTERS</code> 查询获得</p>
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
                     * 获取<p>用户名</p>
                     * @return UserName <p>用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _userName <p>用户名</p>
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
                     * 获取<p>是否所有数据库表</p>
                     * @return AllDatabase <p>是否所有数据库表</p>
                     * 
                     */
                    bool GetAllDatabase() const;

                    /**
                     * 设置<p>是否所有数据库表</p>
                     * @param _allDatabase <p>是否所有数据库表</p>
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
                     * 获取<p>全局权限</p>
                     * @return GlobalPrivileges <p>全局权限</p>
                     * 
                     */
                    std::vector<std::string> GetGlobalPrivileges() const;

                    /**
                     * 设置<p>全局权限</p>
                     * @param _globalPrivileges <p>全局权限</p>
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
                     * 获取<p>数据库表权限</p>
                     * @return DatabasePrivilegeList <p>数据库表权限</p>
                     * 
                     */
                    std::vector<DatabasePrivilegeInfo> GetDatabasePrivilegeList() const;

                    /**
                     * 设置<p>数据库表权限</p>
                     * @param _databasePrivilegeList <p>数据库表权限</p>
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
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>clickhouse逻辑集群名称，可通过连接集群执行 <code>SHOW CLUSTERS</code> 查询获得</p>
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>是否所有数据库表</p>
                     */
                    bool m_allDatabase;
                    bool m_allDatabaseHasBeenSet;

                    /**
                     * <p>全局权限</p>
                     */
                    std::vector<std::string> m_globalPrivileges;
                    bool m_globalPrivilegesHasBeenSet;

                    /**
                     * <p>数据库表权限</p>
                     */
                    std::vector<DatabasePrivilegeInfo> m_databasePrivilegeList;
                    bool m_databasePrivilegeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_MODIFYUSERNEWPRIVILEGEREQUEST_H_
