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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_COLUMNPRIVILEGE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_COLUMNPRIVILEGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 列权限信息
                */
                class ColumnPrivilege : public AbstractModel
                {
                public:
                    ColumnPrivilege();
                    ~ColumnPrivilege() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取数据库表名
                     * @return Table 数据库表名
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置数据库表名
                     * @param _table 数据库表名
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
                     * 获取数据库列名
                     * @return Column 数据库列名
                     * 
                     */
                    std::string GetColumn() const;

                    /**
                     * 设置数据库列名
                     * @param _column 数据库列名
                     * 
                     */
                    void SetColumn(const std::string& _column);

                    /**
                     * 判断参数 Column 是否已赋值
                     * @return Column 是否已赋值
                     * 
                     */
                    bool ColumnHasBeenSet() const;

                    /**
                     * 获取权限信息
                     * @return Privileges 权限信息
                     * 
                     */
                    std::vector<std::string> GetPrivileges() const;

                    /**
                     * 设置权限信息
                     * @param _privileges 权限信息
                     * 
                     */
                    void SetPrivileges(const std::vector<std::string>& _privileges);

                    /**
                     * 判断参数 Privileges 是否已赋值
                     * @return Privileges 是否已赋值
                     * 
                     */
                    bool PrivilegesHasBeenSet() const;

                private:

                    /**
                     * 数据库名
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 数据库表名
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 数据库列名
                     */
                    std::string m_column;
                    bool m_columnHasBeenSet;

                    /**
                     * 权限信息
                     */
                    std::vector<std::string> m_privileges;
                    bool m_privilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_COLUMNPRIVILEGE_H_
