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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEACCOUNTPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEACCOUNTPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeAccountPrivileges请求参数结构体
                */
                class DescribeAccountPrivilegesRequest : public AbstractModel
                {
                public:
                    DescribeAccountPrivilegesRequest();
                    ~DescribeAccountPrivilegesRequest() = default;
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
                     * 获取账户名
                     * @return AccountName 账户名
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置账户名
                     * @param _accountName 账户名
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取主机
                     * @return Host 主机
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置主机
                     * @param _host 主机
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
                     * 获取数据库名，为*时，忽略Type/TableName, 表示修改用户全局权限；
                     * @return Db 数据库名，为*时，忽略Type/TableName, 表示修改用户全局权限；
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置数据库名，为*时，忽略Type/TableName, 表示修改用户全局权限；
                     * @param _db 数据库名，为*时，忽略Type/TableName, 表示修改用户全局权限；
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取指定数据库下的对象类型，可选"table"，"*"
                     * @return Type 指定数据库下的对象类型，可选"table"，"*"
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置指定数据库下的对象类型，可选"table"，"*"
                     * @param _type 指定数据库下的对象类型，可选"table"，"*"
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取当Type="table"时，用来指定表名
                     * @return TableName 当Type="table"时，用来指定表名
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置当Type="table"时，用来指定表名
                     * @param _tableName 当Type="table"时，用来指定表名
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 账户名
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 主机
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 数据库名，为*时，忽略Type/TableName, 表示修改用户全局权限；
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * 指定数据库下的对象类型，可选"table"，"*"
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 当Type="table"时，用来指定表名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEACCOUNTPRIVILEGESREQUEST_H_
