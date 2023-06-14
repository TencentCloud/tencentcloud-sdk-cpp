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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYACCOUNTPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYACCOUNTPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/InputAccount.h>
#include <tencentcloud/cynosdb/v20190107/model/DatabasePrivileges.h>
#include <tencentcloud/cynosdb/v20190107/model/TablePrivileges.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyAccountPrivileges请求参数结构体
                */
                class ModifyAccountPrivilegesRequest : public AbstractModel
                {
                public:
                    ModifyAccountPrivilegesRequest();
                    ~ModifyAccountPrivilegesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
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
                     * 获取账号信息
                     * @return Account 账号信息
                     * 
                     */
                    InputAccount GetAccount() const;

                    /**
                     * 设置账号信息
                     * @param _account 账号信息
                     * 
                     */
                    void SetAccount(const InputAccount& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取全局权限数组
                     * @return GlobalPrivileges 全局权限数组
                     * 
                     */
                    std::vector<std::string> GetGlobalPrivileges() const;

                    /**
                     * 设置全局权限数组
                     * @param _globalPrivileges 全局权限数组
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
                     * 获取数据库权限数组
                     * @return DatabasePrivileges 数据库权限数组
                     * 
                     */
                    std::vector<DatabasePrivileges> GetDatabasePrivileges() const;

                    /**
                     * 设置数据库权限数组
                     * @param _databasePrivileges 数据库权限数组
                     * 
                     */
                    void SetDatabasePrivileges(const std::vector<DatabasePrivileges>& _databasePrivileges);

                    /**
                     * 判断参数 DatabasePrivileges 是否已赋值
                     * @return DatabasePrivileges 是否已赋值
                     * 
                     */
                    bool DatabasePrivilegesHasBeenSet() const;

                    /**
                     * 获取表权限数组
                     * @return TablePrivileges 表权限数组
                     * 
                     */
                    std::vector<TablePrivileges> GetTablePrivileges() const;

                    /**
                     * 设置表权限数组
                     * @param _tablePrivileges 表权限数组
                     * 
                     */
                    void SetTablePrivileges(const std::vector<TablePrivileges>& _tablePrivileges);

                    /**
                     * 判断参数 TablePrivileges 是否已赋值
                     * @return TablePrivileges 是否已赋值
                     * 
                     */
                    bool TablePrivilegesHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 账号信息
                     */
                    InputAccount m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 全局权限数组
                     */
                    std::vector<std::string> m_globalPrivileges;
                    bool m_globalPrivilegesHasBeenSet;

                    /**
                     * 数据库权限数组
                     */
                    std::vector<DatabasePrivileges> m_databasePrivileges;
                    bool m_databasePrivilegesHasBeenSet;

                    /**
                     * 表权限数组
                     */
                    std::vector<TablePrivileges> m_tablePrivileges;
                    bool m_tablePrivilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYACCOUNTPRIVILEGESREQUEST_H_
