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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MARIADBPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MARIADBPARAM_H_

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
                * MariaDB类型入参
                */
                class MariaDBParam : public AbstractModel
                {
                public:
                    MariaDBParam();
                    ~MariaDBParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MariaDB的数据库名称，"*"为全数据库
                     * @return Database MariaDB的数据库名称，"*"为全数据库
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置MariaDB的数据库名称，"*"为全数据库
                     * @param _database MariaDB的数据库名称，"*"为全数据库
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
                     * 获取MariaDB的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"数据库名.数据表名"的格式进行填写
                     * @return Table MariaDB的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"数据库名.数据表名"的格式进行填写
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置MariaDB的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"数据库名.数据表名"的格式进行填写
                     * @param _table MariaDB的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"数据库名.数据表名"的格式进行填写
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
                     * 获取该MariaDB在连接管理内的Id
                     * @return Resource 该MariaDB在连接管理内的Id
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置该MariaDB在连接管理内的Id
                     * @param _resource 该MariaDB在连接管理内的Id
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
                     * 获取复制存量信息(schema_only不复制, initial全量)，默认值initial
                     * @return SnapshotMode 复制存量信息(schema_only不复制, initial全量)，默认值initial
                     * 
                     */
                    std::string GetSnapshotMode() const;

                    /**
                     * 设置复制存量信息(schema_only不复制, initial全量)，默认值initial
                     * @param _snapshotMode 复制存量信息(schema_only不复制, initial全量)，默认值initial
                     * 
                     */
                    void SetSnapshotMode(const std::string& _snapshotMode);

                    /**
                     * 判断参数 SnapshotMode 是否已赋值
                     * @return SnapshotMode 是否已赋值
                     * 
                     */
                    bool SnapshotModeHasBeenSet() const;

                    /**
                     * 获取格式：库1.表1:字段1,字段2;库2.表2:字段2，表之间;（分号）隔开，字段之间,（逗号）隔开。不指定的表默认取表的主键
                     * @return KeyColumns 格式：库1.表1:字段1,字段2;库2.表2:字段2，表之间;（分号）隔开，字段之间,（逗号）隔开。不指定的表默认取表的主键
                     * 
                     */
                    std::string GetKeyColumns() const;

                    /**
                     * 设置格式：库1.表1:字段1,字段2;库2.表2:字段2，表之间;（分号）隔开，字段之间,（逗号）隔开。不指定的表默认取表的主键
                     * @param _keyColumns 格式：库1.表1:字段1,字段2;库2.表2:字段2，表之间;（分号）隔开，字段之间,（逗号）隔开。不指定的表默认取表的主键
                     * 
                     */
                    void SetKeyColumns(const std::string& _keyColumns);

                    /**
                     * 判断参数 KeyColumns 是否已赋值
                     * @return KeyColumns 是否已赋值
                     * 
                     */
                    bool KeyColumnsHasBeenSet() const;

                    /**
                     * 获取当Table输入的是前缀时，该项值为true，否则为false
                     * @return IsTablePrefix 当Table输入的是前缀时，该项值为true，否则为false
                     * 
                     */
                    bool GetIsTablePrefix() const;

                    /**
                     * 设置当Table输入的是前缀时，该项值为true，否则为false
                     * @param _isTablePrefix 当Table输入的是前缀时，该项值为true，否则为false
                     * 
                     */
                    void SetIsTablePrefix(const bool& _isTablePrefix);

                    /**
                     * 判断参数 IsTablePrefix 是否已赋值
                     * @return IsTablePrefix 是否已赋值
                     * 
                     */
                    bool IsTablePrefixHasBeenSet() const;

                    /**
                     * 获取输出格式，DEFAULT、CANAL_1、CANAL_2
                     * @return OutputFormat 输出格式，DEFAULT、CANAL_1、CANAL_2
                     * 
                     */
                    std::string GetOutputFormat() const;

                    /**
                     * 设置输出格式，DEFAULT、CANAL_1、CANAL_2
                     * @param _outputFormat 输出格式，DEFAULT、CANAL_1、CANAL_2
                     * 
                     */
                    void SetOutputFormat(const std::string& _outputFormat);

                    /**
                     * 判断参数 OutputFormat 是否已赋值
                     * @return OutputFormat 是否已赋值
                     * 
                     */
                    bool OutputFormatHasBeenSet() const;

                    /**
                     * 获取如果该值为all，则DDL数据以及DML数据也会写入到选中的topic；若该值为dml，则只有DML数据写入到选中的topic
                     * @return IncludeContentChanges 如果该值为all，则DDL数据以及DML数据也会写入到选中的topic；若该值为dml，则只有DML数据写入到选中的topic
                     * 
                     */
                    std::string GetIncludeContentChanges() const;

                    /**
                     * 设置如果该值为all，则DDL数据以及DML数据也会写入到选中的topic；若该值为dml，则只有DML数据写入到选中的topic
                     * @param _includeContentChanges 如果该值为all，则DDL数据以及DML数据也会写入到选中的topic；若该值为dml，则只有DML数据写入到选中的topic
                     * 
                     */
                    void SetIncludeContentChanges(const std::string& _includeContentChanges);

                    /**
                     * 判断参数 IncludeContentChanges 是否已赋值
                     * @return IncludeContentChanges 是否已赋值
                     * 
                     */
                    bool IncludeContentChangesHasBeenSet() const;

                    /**
                     * 获取如果该值为true，且MySQL中"binlog_rows_query_log_events"配置项的值为"ON"，则流入到topic的数据包含原SQL语句；若该值为false，流入到topic的数据不包含原SQL语句
                     * @return IncludeQuery 如果该值为true，且MySQL中"binlog_rows_query_log_events"配置项的值为"ON"，则流入到topic的数据包含原SQL语句；若该值为false，流入到topic的数据不包含原SQL语句
                     * 
                     */
                    bool GetIncludeQuery() const;

                    /**
                     * 设置如果该值为true，且MySQL中"binlog_rows_query_log_events"配置项的值为"ON"，则流入到topic的数据包含原SQL语句；若该值为false，流入到topic的数据不包含原SQL语句
                     * @param _includeQuery 如果该值为true，且MySQL中"binlog_rows_query_log_events"配置项的值为"ON"，则流入到topic的数据包含原SQL语句；若该值为false，流入到topic的数据不包含原SQL语句
                     * 
                     */
                    void SetIncludeQuery(const bool& _includeQuery);

                    /**
                     * 判断参数 IncludeQuery 是否已赋值
                     * @return IncludeQuery 是否已赋值
                     * 
                     */
                    bool IncludeQueryHasBeenSet() const;

                    /**
                     * 获取如果该值为 true，则消息中会携带消息结构体对应的schema，如果该值为false则不会携带
                     * @return RecordWithSchema 如果该值为 true，则消息中会携带消息结构体对应的schema，如果该值为false则不会携带
                     * 
                     */
                    bool GetRecordWithSchema() const;

                    /**
                     * 设置如果该值为 true，则消息中会携带消息结构体对应的schema，如果该值为false则不会携带
                     * @param _recordWithSchema 如果该值为 true，则消息中会携带消息结构体对应的schema，如果该值为false则不会携带
                     * 
                     */
                    void SetRecordWithSchema(const bool& _recordWithSchema);

                    /**
                     * 判断参数 RecordWithSchema 是否已赋值
                     * @return RecordWithSchema 是否已赋值
                     * 
                     */
                    bool RecordWithSchemaHasBeenSet() const;

                private:

                    /**
                     * MariaDB的数据库名称，"*"为全数据库
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * MariaDB的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"数据库名.数据表名"的格式进行填写
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 该MariaDB在连接管理内的Id
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 复制存量信息(schema_only不复制, initial全量)，默认值initial
                     */
                    std::string m_snapshotMode;
                    bool m_snapshotModeHasBeenSet;

                    /**
                     * 格式：库1.表1:字段1,字段2;库2.表2:字段2，表之间;（分号）隔开，字段之间,（逗号）隔开。不指定的表默认取表的主键
                     */
                    std::string m_keyColumns;
                    bool m_keyColumnsHasBeenSet;

                    /**
                     * 当Table输入的是前缀时，该项值为true，否则为false
                     */
                    bool m_isTablePrefix;
                    bool m_isTablePrefixHasBeenSet;

                    /**
                     * 输出格式，DEFAULT、CANAL_1、CANAL_2
                     */
                    std::string m_outputFormat;
                    bool m_outputFormatHasBeenSet;

                    /**
                     * 如果该值为all，则DDL数据以及DML数据也会写入到选中的topic；若该值为dml，则只有DML数据写入到选中的topic
                     */
                    std::string m_includeContentChanges;
                    bool m_includeContentChangesHasBeenSet;

                    /**
                     * 如果该值为true，且MySQL中"binlog_rows_query_log_events"配置项的值为"ON"，则流入到topic的数据包含原SQL语句；若该值为false，流入到topic的数据不包含原SQL语句
                     */
                    bool m_includeQuery;
                    bool m_includeQueryHasBeenSet;

                    /**
                     * 如果该值为 true，则消息中会携带消息结构体对应的schema，如果该值为false则不会携带
                     */
                    bool m_recordWithSchema;
                    bool m_recordWithSchemaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MARIADBPARAM_H_
