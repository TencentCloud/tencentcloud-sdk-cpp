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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBECKSQLAPISREQUEST_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBECKSQLAPISREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * DescribeCkSqlApis请求参数结构体
                */
                class DescribeCkSqlApisRequest : public AbstractModel
                {
                public:
                    DescribeCkSqlApisRequest();
                    ~DescribeCkSqlApisRequest() = default;
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
                     * 获取<p>api接口名称,GetClusters:获取集群cluster列表<br>GetSystemUsers:获取系统用户列表<br>CheckNodeCluster: 检查节点是否隶属一个cluster<br>GetClusterDatabases: 获取一个cluster下的数据库列表<br>GetClusterTables: 获取一个cluster下的数据库表列表<br>GetPrivilegeUsers: 获取授权的用户列表<br>GET_USER_CLUSTER_PRIVILEGES:获取用户cluster下的权限<br>GetUserClusterNewPrivileges:获取用户cluster下的权限 (新版）<br>RevokeClusterUser:解绑cluster用户<br>DeleteSystemUser:删除系统用户 —— 必须所有cluster先解绑<br>GetUserOptionMessages:获取用户配置备注信息<br>GET_USER_CONFIGS:获取用户配置列表  QUOTA、PROFILE、POLICY</p>
                     * @return ApiType <p>api接口名称,GetClusters:获取集群cluster列表<br>GetSystemUsers:获取系统用户列表<br>CheckNodeCluster: 检查节点是否隶属一个cluster<br>GetClusterDatabases: 获取一个cluster下的数据库列表<br>GetClusterTables: 获取一个cluster下的数据库表列表<br>GetPrivilegeUsers: 获取授权的用户列表<br>GET_USER_CLUSTER_PRIVILEGES:获取用户cluster下的权限<br>GetUserClusterNewPrivileges:获取用户cluster下的权限 (新版）<br>RevokeClusterUser:解绑cluster用户<br>DeleteSystemUser:删除系统用户 —— 必须所有cluster先解绑<br>GetUserOptionMessages:获取用户配置备注信息<br>GET_USER_CONFIGS:获取用户配置列表  QUOTA、PROFILE、POLICY</p>
                     * 
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置<p>api接口名称,GetClusters:获取集群cluster列表<br>GetSystemUsers:获取系统用户列表<br>CheckNodeCluster: 检查节点是否隶属一个cluster<br>GetClusterDatabases: 获取一个cluster下的数据库列表<br>GetClusterTables: 获取一个cluster下的数据库表列表<br>GetPrivilegeUsers: 获取授权的用户列表<br>GET_USER_CLUSTER_PRIVILEGES:获取用户cluster下的权限<br>GetUserClusterNewPrivileges:获取用户cluster下的权限 (新版）<br>RevokeClusterUser:解绑cluster用户<br>DeleteSystemUser:删除系统用户 —— 必须所有cluster先解绑<br>GetUserOptionMessages:获取用户配置备注信息<br>GET_USER_CONFIGS:获取用户配置列表  QUOTA、PROFILE、POLICY</p>
                     * @param _apiType <p>api接口名称,GetClusters:获取集群cluster列表<br>GetSystemUsers:获取系统用户列表<br>CheckNodeCluster: 检查节点是否隶属一个cluster<br>GetClusterDatabases: 获取一个cluster下的数据库列表<br>GetClusterTables: 获取一个cluster下的数据库表列表<br>GetPrivilegeUsers: 获取授权的用户列表<br>GET_USER_CLUSTER_PRIVILEGES:获取用户cluster下的权限<br>GetUserClusterNewPrivileges:获取用户cluster下的权限 (新版）<br>RevokeClusterUser:解绑cluster用户<br>DeleteSystemUser:删除系统用户 —— 必须所有cluster先解绑<br>GetUserOptionMessages:获取用户配置备注信息<br>GET_USER_CONFIGS:获取用户配置列表  QUOTA、PROFILE、POLICY</p>
                     * 
                     */
                    void SetApiType(const std::string& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     * 
                     */
                    bool ApiTypeHasBeenSet() const;

                    /**
                     * 获取<p>clickhouse逻辑集群名称，可通过连接集群执行 <code>SHOW CLUSTERS</code> 查询获得。当 ApiType 取值为 GET_SYSTEM_USERS、GET_PRIVILEGE_USERS、GET_CLUSTER_DATABASES或GET_CLUSTER_TABLES 时，本参数必填。</p>
                     * @return Cluster <p>clickhouse逻辑集群名称，可通过连接集群执行 <code>SHOW CLUSTERS</code> 查询获得。当 ApiType 取值为 GET_SYSTEM_USERS、GET_PRIVILEGE_USERS、GET_CLUSTER_DATABASES或GET_CLUSTER_TABLES 时，本参数必填。</p>
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置<p>clickhouse逻辑集群名称，可通过连接集群执行 <code>SHOW CLUSTERS</code> 查询获得。当 ApiType 取值为 GET_SYSTEM_USERS、GET_PRIVILEGE_USERS、GET_CLUSTER_DATABASES或GET_CLUSTER_TABLES 时，本参数必填。</p>
                     * @param _cluster <p>clickhouse逻辑集群名称，可通过连接集群执行 <code>SHOW CLUSTERS</code> 查询获得。当 ApiType 取值为 GET_SYSTEM_USERS、GET_PRIVILEGE_USERS、GET_CLUSTER_DATABASES或GET_CLUSTER_TABLES 时，本参数必填。</p>
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
                     * 获取<p>用户名称，api与user相关的必填</p>
                     * @return UserName <p>用户名称，api与user相关的必填</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名称，api与user相关的必填</p>
                     * @param _userName <p>用户名称，api与user相关的必填</p>
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
                     * 获取<p>账户的类型</p>
                     * @return UserType <p>账户的类型</p>
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置<p>账户的类型</p>
                     * @param _userType <p>账户的类型</p>
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                private:

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>api接口名称,GetClusters:获取集群cluster列表<br>GetSystemUsers:获取系统用户列表<br>CheckNodeCluster: 检查节点是否隶属一个cluster<br>GetClusterDatabases: 获取一个cluster下的数据库列表<br>GetClusterTables: 获取一个cluster下的数据库表列表<br>GetPrivilegeUsers: 获取授权的用户列表<br>GET_USER_CLUSTER_PRIVILEGES:获取用户cluster下的权限<br>GetUserClusterNewPrivileges:获取用户cluster下的权限 (新版）<br>RevokeClusterUser:解绑cluster用户<br>DeleteSystemUser:删除系统用户 —— 必须所有cluster先解绑<br>GetUserOptionMessages:获取用户配置备注信息<br>GET_USER_CONFIGS:获取用户配置列表  QUOTA、PROFILE、POLICY</p>
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                    /**
                     * <p>clickhouse逻辑集群名称，可通过连接集群执行 <code>SHOW CLUSTERS</code> 查询获得。当 ApiType 取值为 GET_SYSTEM_USERS、GET_PRIVILEGE_USERS、GET_CLUSTER_DATABASES或GET_CLUSTER_TABLES 时，本参数必填。</p>
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * <p>用户名称，api与user相关的必填</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>账户的类型</p>
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBECKSQLAPISREQUEST_H_
