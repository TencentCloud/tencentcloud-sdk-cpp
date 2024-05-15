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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_POSTGRESQLPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_POSTGRESQLPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/RecordMapping.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * PostgreSQL类型入参
                */
                class PostgreSQLParam : public AbstractModel
                {
                public:
                    PostgreSQLParam();
                    ~PostgreSQLParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取PostgreSQL的数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Database PostgreSQL的数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置PostgreSQL的数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _database PostgreSQL的数据库名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取PostgreSQL的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"Schema名.数据表名"的格式进行填写，需要填入正则表达式时，格式为"Schema名\\.数据表名"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Table PostgreSQL的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"Schema名.数据表名"的格式进行填写，需要填入正则表达式时，格式为"Schema名\\.数据表名"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置PostgreSQL的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"Schema名.数据表名"的格式进行填写，需要填入正则表达式时，格式为"Schema名\\.数据表名"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _table PostgreSQL的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"Schema名.数据表名"的格式进行填写，需要填入正则表达式时，格式为"Schema名\\.数据表名"
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取该PostgreSQL在连接管理内的Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource 该PostgreSQL在连接管理内的Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置该PostgreSQL在连接管理内的Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resource 该PostgreSQL在连接管理内的Id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取插件名(decoderbufs/pgoutput)，默认为decoderbufs
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PluginName 插件名(decoderbufs/pgoutput)，默认为decoderbufs
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPluginName() const;

                    /**
                     * 设置插件名(decoderbufs/pgoutput)，默认为decoderbufs
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pluginName 插件名(decoderbufs/pgoutput)，默认为decoderbufs
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPluginName(const std::string& _pluginName);

                    /**
                     * 判断参数 PluginName 是否已赋值
                     * @return PluginName 是否已赋值
                     * 
                     */
                    bool PluginNameHasBeenSet() const;

                    /**
                     * 获取复制存量信息(never增量, initial全量)，默认为initial
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotMode 复制存量信息(never增量, initial全量)，默认为initial
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSnapshotMode() const;

                    /**
                     * 设置复制存量信息(never增量, initial全量)，默认为initial
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotMode 复制存量信息(never增量, initial全量)，默认为initial
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取上游数据格式(JSON/Debezium), 当数据库同步模式为默认字段匹配时,必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataFormat 上游数据格式(JSON/Debezium), 当数据库同步模式为默认字段匹配时,必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataFormat() const;

                    /**
                     * 设置上游数据格式(JSON/Debezium), 当数据库同步模式为默认字段匹配时,必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataFormat 上游数据格式(JSON/Debezium), 当数据库同步模式为默认字段匹配时,必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataFormat(const std::string& _dataFormat);

                    /**
                     * 判断参数 DataFormat 是否已赋值
                     * @return DataFormat 是否已赋值
                     * 
                     */
                    bool DataFormatHasBeenSet() const;

                    /**
                     * 获取"INSERT" 表示使用 Insert 模式插入，"UPSERT" 表示使用 Upsert 模式插入
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataTargetInsertMode "INSERT" 表示使用 Insert 模式插入，"UPSERT" 表示使用 Upsert 模式插入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataTargetInsertMode() const;

                    /**
                     * 设置"INSERT" 表示使用 Insert 模式插入，"UPSERT" 表示使用 Upsert 模式插入
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataTargetInsertMode "INSERT" 表示使用 Insert 模式插入，"UPSERT" 表示使用 Upsert 模式插入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataTargetInsertMode(const std::string& _dataTargetInsertMode);

                    /**
                     * 判断参数 DataTargetInsertMode 是否已赋值
                     * @return DataTargetInsertMode 是否已赋值
                     * 
                     */
                    bool DataTargetInsertModeHasBeenSet() const;

                    /**
                     * 获取当 "DataInsertMode"="UPSERT" 时，传入当前 upsert 时依赖的主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataTargetPrimaryKeyField 当 "DataInsertMode"="UPSERT" 时，传入当前 upsert 时依赖的主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataTargetPrimaryKeyField() const;

                    /**
                     * 设置当 "DataInsertMode"="UPSERT" 时，传入当前 upsert 时依赖的主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataTargetPrimaryKeyField 当 "DataInsertMode"="UPSERT" 时，传入当前 upsert 时依赖的主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataTargetPrimaryKeyField(const std::string& _dataTargetPrimaryKeyField);

                    /**
                     * 判断参数 DataTargetPrimaryKeyField 是否已赋值
                     * @return DataTargetPrimaryKeyField 是否已赋值
                     * 
                     */
                    bool DataTargetPrimaryKeyFieldHasBeenSet() const;

                    /**
                     * 获取表与消息间的映射关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataTargetRecordMapping 表与消息间的映射关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecordMapping> GetDataTargetRecordMapping() const;

                    /**
                     * 设置表与消息间的映射关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataTargetRecordMapping 表与消息间的映射关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataTargetRecordMapping(const std::vector<RecordMapping>& _dataTargetRecordMapping);

                    /**
                     * 判断参数 DataTargetRecordMapping 是否已赋值
                     * @return DataTargetRecordMapping 是否已赋值
                     * 
                     */
                    bool DataTargetRecordMappingHasBeenSet() const;

                    /**
                     * 获取是否抛弃解析失败的消息，默认为true
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DropInvalidMessage 是否抛弃解析失败的消息，默认为true
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDropInvalidMessage() const;

                    /**
                     * 设置是否抛弃解析失败的消息，默认为true
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dropInvalidMessage 是否抛弃解析失败的消息，默认为true
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDropInvalidMessage(const bool& _dropInvalidMessage);

                    /**
                     * 判断参数 DropInvalidMessage 是否已赋值
                     * @return DropInvalidMessage 是否已赋值
                     * 
                     */
                    bool DropInvalidMessageHasBeenSet() const;

                    /**
                     * 获取输入的table是否为正则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsTableRegular 输入的table是否为正则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsTableRegular() const;

                    /**
                     * 设置输入的table是否为正则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isTableRegular 输入的table是否为正则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsTableRegular(const bool& _isTableRegular);

                    /**
                     * 判断参数 IsTableRegular 是否已赋值
                     * @return IsTableRegular 是否已赋值
                     * 
                     */
                    bool IsTableRegularHasBeenSet() const;

                    /**
                     * 获取格式：库1.表1:字段1,字段2;库2.表2:字段2，表之间;（分号）隔开，字段之间,（逗号）隔开。不指定的表默认取表的主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyColumns 格式：库1.表1:字段1,字段2;库2.表2:字段2，表之间;（分号）隔开，字段之间,（逗号）隔开。不指定的表默认取表的主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyColumns() const;

                    /**
                     * 设置格式：库1.表1:字段1,字段2;库2.表2:字段2，表之间;（分号）隔开，字段之间,（逗号）隔开。不指定的表默认取表的主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyColumns 格式：库1.表1:字段1,字段2;库2.表2:字段2，表之间;（分号）隔开，字段之间,（逗号）隔开。不指定的表默认取表的主键
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取如果该值为 true，则消息中会携带消息结构体对应的schema，如果该值为false则不会携带
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordWithSchema 如果该值为 true，则消息中会携带消息结构体对应的schema，如果该值为false则不会携带
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRecordWithSchema() const;

                    /**
                     * 设置如果该值为 true，则消息中会携带消息结构体对应的schema，如果该值为false则不会携带
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordWithSchema 如果该值为 true，则消息中会携带消息结构体对应的schema，如果该值为false则不会携带
注意：此字段可能返回 null，表示取不到有效值。
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
                     * PostgreSQL的数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * PostgreSQL的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"Schema名.数据表名"的格式进行填写，需要填入正则表达式时，格式为"Schema名\\.数据表名"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 该PostgreSQL在连接管理内的Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 插件名(decoderbufs/pgoutput)，默认为decoderbufs
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pluginName;
                    bool m_pluginNameHasBeenSet;

                    /**
                     * 复制存量信息(never增量, initial全量)，默认为initial
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_snapshotMode;
                    bool m_snapshotModeHasBeenSet;

                    /**
                     * 上游数据格式(JSON/Debezium), 当数据库同步模式为默认字段匹配时,必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataFormat;
                    bool m_dataFormatHasBeenSet;

                    /**
                     * "INSERT" 表示使用 Insert 模式插入，"UPSERT" 表示使用 Upsert 模式插入
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataTargetInsertMode;
                    bool m_dataTargetInsertModeHasBeenSet;

                    /**
                     * 当 "DataInsertMode"="UPSERT" 时，传入当前 upsert 时依赖的主键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataTargetPrimaryKeyField;
                    bool m_dataTargetPrimaryKeyFieldHasBeenSet;

                    /**
                     * 表与消息间的映射关系
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecordMapping> m_dataTargetRecordMapping;
                    bool m_dataTargetRecordMappingHasBeenSet;

                    /**
                     * 是否抛弃解析失败的消息，默认为true
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_dropInvalidMessage;
                    bool m_dropInvalidMessageHasBeenSet;

                    /**
                     * 输入的table是否为正则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isTableRegular;
                    bool m_isTableRegularHasBeenSet;

                    /**
                     * 格式：库1.表1:字段1,字段2;库2.表2:字段2，表之间;（分号）隔开，字段之间,（逗号）隔开。不指定的表默认取表的主键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyColumns;
                    bool m_keyColumnsHasBeenSet;

                    /**
                     * 如果该值为 true，则消息中会携带消息结构体对应的schema，如果该值为false则不会携带
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_recordWithSchema;
                    bool m_recordWithSchemaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_POSTGRESQLPARAM_H_
