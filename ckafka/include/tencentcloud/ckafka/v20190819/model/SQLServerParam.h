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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_SQLSERVERPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_SQLSERVERPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * SQLServer类型入参
                */
                class SQLServerParam : public AbstractModel
                {
                public:
                    SQLServerParam();
                    ~SQLServerParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SQLServer的数据库名称
                     * @return Database SQLServer的数据库名称
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置SQLServer的数据库名称
                     * @param _database SQLServer的数据库名称
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
                     * 获取SQLServer的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"数据库名.数据表名"的格式进行填写
                     * @return Table SQLServer的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"数据库名.数据表名"的格式进行填写
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置SQLServer的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"数据库名.数据表名"的格式进行填写
                     * @param _table SQLServer的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"数据库名.数据表名"的格式进行填写
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
                     * 获取该SQLServer在连接管理内的Id
                     * @return Resource 该SQLServer在连接管理内的Id
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置该SQLServer在连接管理内的Id
                     * @param _resource 该SQLServer在连接管理内的Id
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取复制存量信息(schema_only增量, initial全量)，默认为initial
                     * @return SnapshotMode 复制存量信息(schema_only增量, initial全量)，默认为initial
                     * 
                     */
                    std::string GetSnapshotMode() const;

                    /**
                     * 设置复制存量信息(schema_only增量, initial全量)，默认为initial
                     * @param _snapshotMode 复制存量信息(schema_only增量, initial全量)，默认为initial
                     * 
                     */
                    void SetSnapshotMode(const std::string& _snapshotMode);

                    /**
                     * 判断参数 SnapshotMode 是否已赋值
                     * @return SnapshotMode 是否已赋值
                     * 
                     */
                    bool SnapshotModeHasBeenSet() const;

                private:

                    /**
                     * SQLServer的数据库名称
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * SQLServer的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"数据库名.数据表名"的格式进行填写
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 该SQLServer在连接管理内的Id
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 复制存量信息(schema_only增量, initial全量)，默认为initial
                     */
                    std::string m_snapshotMode;
                    bool m_snapshotModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_SQLSERVERPARAM_H_
