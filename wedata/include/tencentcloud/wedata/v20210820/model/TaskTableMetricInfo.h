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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKTABLEMETRICINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKTABLEMETRICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskTableMetricInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务表粒度指标信息
                */
                class TaskTableMetricInfo : public AbstractModel
                {
                public:
                    TaskTableMetricInfo();
                    ~TaskTableMetricInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalRecordNum 总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalRecordNum() const;

                    /**
                     * 设置总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalRecordNum 总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalRecordNum(const int64_t& _totalRecordNum);

                    /**
                     * 判断参数 TotalRecordNum 是否已赋值
                     * @return TotalRecordNum 是否已赋值
                     * 
                     */
                    bool TotalRecordNumHasBeenSet() const;

                    /**
                     * 获取总字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalRecordByteNum 总字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalRecordByteNum() const;

                    /**
                     * 设置总字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalRecordByteNum 总字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalRecordByteNum(const int64_t& _totalRecordByteNum);

                    /**
                     * 判断参数 TotalRecordByteNum 是否已赋值
                     * @return TotalRecordByteNum 是否已赋值
                     * 
                     */
                    bool TotalRecordByteNumHasBeenSet() const;

                    /**
                     * 获取总脏记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalDirtyRecordNum 总脏记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalDirtyRecordNum() const;

                    /**
                     * 设置总脏记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalDirtyRecordNum 总脏记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalDirtyRecordNum(const int64_t& _totalDirtyRecordNum);

                    /**
                     * 判断参数 TotalDirtyRecordNum 是否已赋值
                     * @return TotalDirtyRecordNum 是否已赋值
                     * 
                     */
                    bool TotalDirtyRecordNumHasBeenSet() const;

                    /**
                     * 获取Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaName Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaName Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Topic topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topic topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Collection名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Collection Collection名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCollection() const;

                    /**
                     * 设置Collection名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _collection Collection名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCollection(const std::string& _collection);

                    /**
                     * 判断参数 Collection 是否已赋值
                     * @return Collection 是否已赋值
                     * 
                     */
                    bool CollectionHasBeenSet() const;

                    /**
                     * 获取数据源名称
                     * @return DataSourceName 数据源名称
                     * 
                     */
                    std::string GetDataSourceName() const;

                    /**
                     * 设置数据源名称
                     * @param _dataSourceName 数据源名称
                     * 
                     */
                    void SetDataSourceName(const std::string& _dataSourceName);

                    /**
                     * 判断参数 DataSourceName 是否已赋值
                     * @return DataSourceName 是否已赋值
                     * 
                     */
                    bool DataSourceNameHasBeenSet() const;

                    /**
                     * 获取节点id
                     * @return NodeId 节点id
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点id
                     * @param _nodeId 节点id
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取逻辑库名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogicDatabase 逻辑库名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogicDatabase() const;

                    /**
                     * 设置逻辑库名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logicDatabase 逻辑库名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogicDatabase(const std::string& _logicDatabase);

                    /**
                     * 判断参数 LogicDatabase 是否已赋值
                     * @return LogicDatabase 是否已赋值
                     * 
                     */
                    bool LogicDatabaseHasBeenSet() const;

                    /**
                     * 获取逻辑表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogicTable 逻辑表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogicTable() const;

                    /**
                     * 设置逻辑表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logicTable 逻辑表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogicTable(const std::string& _logicTable);

                    /**
                     * 判断参数 LogicTable 是否已赋值
                     * @return LogicTable 是否已赋值
                     * 
                     */
                    bool LogicTableHasBeenSet() const;

                    /**
                     * 获取逻辑schema名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogicSchema 逻辑schema名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogicSchema() const;

                    /**
                     * 设置逻辑schema名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logicSchema 逻辑schema名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogicSchema(const std::string& _logicSchema);

                    /**
                     * 判断参数 LogicSchema 是否已赋值
                     * @return LogicSchema 是否已赋值
                     * 
                     */
                    bool LogicSchemaHasBeenSet() const;

                    /**
                     * 获取物理表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTableMetricInfos 物理表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskTableMetricInfo> GetTaskTableMetricInfos() const;

                    /**
                     * 设置物理表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTableMetricInfos 物理表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTableMetricInfos(const std::vector<TaskTableMetricInfo>& _taskTableMetricInfos);

                    /**
                     * 判断参数 TaskTableMetricInfos 是否已赋值
                     * @return TaskTableMetricInfos 是否已赋值
                     * 
                     */
                    bool TaskTableMetricInfosHasBeenSet() const;

                    /**
                     * 获取同步状态，0-未知，1-正常， 2-异常
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SyncStatus 同步状态，0-未知，1-正常， 2-异常
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSyncStatus() const;

                    /**
                     * 设置同步状态，0-未知，1-正常， 2-异常
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _syncStatus 同步状态，0-未知，1-正常， 2-异常
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSyncStatus(const int64_t& _syncStatus);

                    /**
                     * 判断参数 SyncStatus 是否已赋值
                     * @return SyncStatus 是否已赋值
                     * 
                     */
                    bool SyncStatusHasBeenSet() const;

                    /**
                     * 获取Target数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetDatabaseName Target数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetDatabaseName() const;

                    /**
                     * 设置Target数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetDatabaseName Target数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetDatabaseName(const std::string& _targetDatabaseName);

                    /**
                     * 判断参数 TargetDatabaseName 是否已赋值
                     * @return TargetDatabaseName 是否已赋值
                     * 
                     */
                    bool TargetDatabaseNameHasBeenSet() const;

                    /**
                     * 获取Target表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetTableName Target表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetTableName() const;

                    /**
                     * 设置Target表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetTableName Target表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetTableName(const std::string& _targetTableName);

                    /**
                     * 判断参数 TargetTableName 是否已赋值
                     * @return TargetTableName 是否已赋值
                     * 
                     */
                    bool TargetTableNameHasBeenSet() const;

                    /**
                     * 获取Write总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WriteTotalRecordNum Write总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWriteTotalRecordNum() const;

                    /**
                     * 设置Write总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _writeTotalRecordNum Write总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWriteTotalRecordNum(const int64_t& _writeTotalRecordNum);

                    /**
                     * 判断参数 WriteTotalRecordNum 是否已赋值
                     * @return WriteTotalRecordNum 是否已赋值
                     * 
                     */
                    bool WriteTotalRecordNumHasBeenSet() const;

                    /**
                     * 获取Write总字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WriteTotalRecordByteNum Write总字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWriteTotalRecordByteNum() const;

                    /**
                     * 设置Write总字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _writeTotalRecordByteNum Write总字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWriteTotalRecordByteNum(const std::string& _writeTotalRecordByteNum);

                    /**
                     * 判断参数 WriteTotalRecordByteNum 是否已赋值
                     * @return WriteTotalRecordByteNum 是否已赋值
                     * 
                     */
                    bool WriteTotalRecordByteNumHasBeenSet() const;

                    /**
                     * 获取TargetSchema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetSchemaName TargetSchema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetSchemaName() const;

                    /**
                     * 设置TargetSchema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetSchemaName TargetSchema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetSchemaName(const std::string& _targetSchemaName);

                    /**
                     * 判断参数 TargetSchemaName 是否已赋值
                     * @return TargetSchemaName 是否已赋值
                     * 
                     */
                    bool TargetSchemaNameHasBeenSet() const;

                    /**
                     * 获取Targettopic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetTopic Targettopic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetTopic() const;

                    /**
                     * 设置Targettopic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetTopic Targettopic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetTopic(const std::string& _targetTopic);

                    /**
                     * 判断参数 TargetTopic 是否已赋值
                     * @return TargetTopic 是否已赋值
                     * 
                     */
                    bool TargetTopicHasBeenSet() const;

                    /**
                     * 获取TargetCollection名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetCollection TargetCollection名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetCollection() const;

                    /**
                     * 设置TargetCollection名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetCollection TargetCollection名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetCollection(const std::string& _targetCollection);

                    /**
                     * 判断参数 TargetCollection 是否已赋值
                     * @return TargetCollection 是否已赋值
                     * 
                     */
                    bool TargetCollectionHasBeenSet() const;

                    /**
                     * 获取数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetDataSourceName 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetDataSourceName() const;

                    /**
                     * 设置数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetDataSourceName 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetDataSourceName(const std::string& _targetDataSourceName);

                    /**
                     * 判断参数 TargetDataSourceName 是否已赋值
                     * @return TargetDataSourceName 是否已赋值
                     * 
                     */
                    bool TargetDataSourceNameHasBeenSet() const;

                    /**
                     * 获取节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetNodeId 节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetNodeId() const;

                    /**
                     * 设置节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetNodeId 节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetNodeId(const std::string& _targetNodeId);

                    /**
                     * 判断参数 TargetNodeId 是否已赋值
                     * @return TargetNodeId 是否已赋值
                     * 
                     */
                    bool TargetNodeIdHasBeenSet() const;

                    /**
                     * 获取读取条数的速度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalRecordSpeed 读取条数的速度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTotalRecordSpeed() const;

                    /**
                     * 设置读取条数的速度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalRecordSpeed 读取条数的速度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalRecordSpeed(const double& _totalRecordSpeed);

                    /**
                     * 判断参数 TotalRecordSpeed 是否已赋值
                     * @return TotalRecordSpeed 是否已赋值
                     * 
                     */
                    bool TotalRecordSpeedHasBeenSet() const;

                    /**
                     * 获取写入条数的速度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WriteTotalRecordSpeed 写入条数的速度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetWriteTotalRecordSpeed() const;

                    /**
                     * 设置写入条数的速度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _writeTotalRecordSpeed 写入条数的速度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWriteTotalRecordSpeed(const double& _writeTotalRecordSpeed);

                    /**
                     * 判断参数 WriteTotalRecordSpeed 是否已赋值
                     * @return WriteTotalRecordSpeed 是否已赋值
                     * 
                     */
                    bool WriteTotalRecordSpeedHasBeenSet() const;

                    /**
                     * 获取异常原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExceptionReason 异常原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExceptionReason() const;

                    /**
                     * 设置异常原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exceptionReason 异常原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExceptionReason(const std::string& _exceptionReason);

                    /**
                     * 判断参数 ExceptionReason 是否已赋值
                     * @return ExceptionReason 是否已赋值
                     * 
                     */
                    bool ExceptionReasonHasBeenSet() const;

                private:

                    /**
                     * 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalRecordNum;
                    bool m_totalRecordNumHasBeenSet;

                    /**
                     * 总字节数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalRecordByteNum;
                    bool m_totalRecordByteNumHasBeenSet;

                    /**
                     * 总脏记录数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalDirtyRecordNum;
                    bool m_totalDirtyRecordNumHasBeenSet;

                    /**
                     * Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Collection名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_collection;
                    bool m_collectionHasBeenSet;

                    /**
                     * 数据源名称
                     */
                    std::string m_dataSourceName;
                    bool m_dataSourceNameHasBeenSet;

                    /**
                     * 节点id
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 逻辑库名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logicDatabase;
                    bool m_logicDatabaseHasBeenSet;

                    /**
                     * 逻辑表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logicTable;
                    bool m_logicTableHasBeenSet;

                    /**
                     * 逻辑schema名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logicSchema;
                    bool m_logicSchemaHasBeenSet;

                    /**
                     * 物理表信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskTableMetricInfo> m_taskTableMetricInfos;
                    bool m_taskTableMetricInfosHasBeenSet;

                    /**
                     * 同步状态，0-未知，1-正常， 2-异常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                    /**
                     * Target数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetDatabaseName;
                    bool m_targetDatabaseNameHasBeenSet;

                    /**
                     * Target表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetTableName;
                    bool m_targetTableNameHasBeenSet;

                    /**
                     * Write总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_writeTotalRecordNum;
                    bool m_writeTotalRecordNumHasBeenSet;

                    /**
                     * Write总字节数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_writeTotalRecordByteNum;
                    bool m_writeTotalRecordByteNumHasBeenSet;

                    /**
                     * TargetSchema名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetSchemaName;
                    bool m_targetSchemaNameHasBeenSet;

                    /**
                     * Targettopic名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetTopic;
                    bool m_targetTopicHasBeenSet;

                    /**
                     * TargetCollection名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetCollection;
                    bool m_targetCollectionHasBeenSet;

                    /**
                     * 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetDataSourceName;
                    bool m_targetDataSourceNameHasBeenSet;

                    /**
                     * 节点id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetNodeId;
                    bool m_targetNodeIdHasBeenSet;

                    /**
                     * 读取条数的速度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_totalRecordSpeed;
                    bool m_totalRecordSpeedHasBeenSet;

                    /**
                     * 写入条数的速度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_writeTotalRecordSpeed;
                    bool m_writeTotalRecordSpeedHasBeenSet;

                    /**
                     * 异常原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_exceptionReason;
                    bool m_exceptionReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKTABLEMETRICINFO_H_
