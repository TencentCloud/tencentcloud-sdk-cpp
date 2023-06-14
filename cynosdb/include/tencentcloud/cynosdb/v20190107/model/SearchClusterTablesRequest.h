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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SEARCHCLUSTERTABLESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SEARCHCLUSTERTABLESREQUEST_H_

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
                * SearchClusterTables请求参数结构体
                */
                class SearchClusterTablesRequest : public AbstractModel
                {
                public:
                    SearchClusterTablesRequest();
                    ~SearchClusterTablesRequest() = default;
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
                     * 获取数据库名
                     * @return Database 数据库名
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置数据库名
                     * @param _database 数据库名
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取数据表名
                     * @return Table 数据表名
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置数据表名
                     * @param _table 数据表名
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取数据表类型：
view：只返回 view，
base_table： 只返回基本表，
all：返回 view 和表
                     * @return TableType 数据表类型：
view：只返回 view，
base_table： 只返回基本表，
all：返回 view 和表
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置数据表类型：
view：只返回 view，
base_table： 只返回基本表，
all：返回 view 和表
                     * @param _tableType 数据表类型：
view：只返回 view，
base_table： 只返回基本表，
all：返回 view 和表
                     * 
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 数据库名
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 数据表名
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 数据表类型：
view：只返回 view，
base_table： 只返回基本表，
all：返回 view 和表
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SEARCHCLUSTERTABLESREQUEST_H_
