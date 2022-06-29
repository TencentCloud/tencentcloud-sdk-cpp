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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GRANTACCOUNTPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GRANTACCOUNTPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/InputAccount.h>
#include <tencentcloud/cynosdb/v20190107/model/DbTable.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * GrantAccountPrivileges请求参数结构体
                */
                class GrantAccountPrivilegesRequest : public AbstractModel
                {
                public:
                    GrantAccountPrivilegesRequest();
                    ~GrantAccountPrivilegesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param ClusterId 集群id
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取账号信息
                     * @return Account 账号信息
                     */
                    InputAccount GetAccount() const;

                    /**
                     * 设置账号信息
                     * @param Account 账号信息
                     */
                    void SetAccount(const InputAccount& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取数据库表权限码数组
                     * @return DbTablePrivileges 数据库表权限码数组
                     */
                    std::vector<std::string> GetDbTablePrivileges() const;

                    /**
                     * 设置数据库表权限码数组
                     * @param DbTablePrivileges 数据库表权限码数组
                     */
                    void SetDbTablePrivileges(const std::vector<std::string>& _dbTablePrivileges);

                    /**
                     * 判断参数 DbTablePrivileges 是否已赋值
                     * @return DbTablePrivileges 是否已赋值
                     */
                    bool DbTablePrivilegesHasBeenSet() const;

                    /**
                     * 获取数据库表信息
                     * @return DbTables 数据库表信息
                     */
                    std::vector<DbTable> GetDbTables() const;

                    /**
                     * 设置数据库表信息
                     * @param DbTables 数据库表信息
                     */
                    void SetDbTables(const std::vector<DbTable>& _dbTables);

                    /**
                     * 判断参数 DbTables 是否已赋值
                     * @return DbTables 是否已赋值
                     */
                    bool DbTablesHasBeenSet() const;

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
                     * 数据库表权限码数组
                     */
                    std::vector<std::string> m_dbTablePrivileges;
                    bool m_dbTablePrivilegesHasBeenSet;

                    /**
                     * 数据库表信息
                     */
                    std::vector<DbTable> m_dbTables;
                    bool m_dbTablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GRANTACCOUNTPRIVILEGESREQUEST_H_
