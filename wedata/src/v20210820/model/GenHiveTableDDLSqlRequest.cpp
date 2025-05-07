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

#include <tencentcloud/wedata/v20210820/model/GenHiveTableDDLSqlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

GenHiveTableDDLSqlRequest::GenHiveTableDDLSqlRequest() :
    m_projectIdHasBeenSet(false),
    m_sinkDatabaseHasBeenSet(false),
    m_idHasBeenSet(false),
    m_msTypeHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_sourceDatabaseHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_sinkTypeHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_sourceFieldInfoListHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_tableModeHasBeenSet(false),
    m_tableVersionHasBeenSet(false),
    m_upsertFlagHasBeenSet(false),
    m_tableCommentHasBeenSet(false),
    m_addDataFilesHasBeenSet(false),
    m_addEqualityDeletesHasBeenSet(false),
    m_addPositionDeletesHasBeenSet(false),
    m_addDeleteFilesHasBeenSet(false),
    m_targetDatasourceIdHasBeenSet(false),
    m_upsertKeysHasBeenSet(false),
    m_tableBaseInfoHasBeenSet(false),
    m_sinkSchemaNameHasBeenSet(false),
    m_envHasBeenSet(false),
    m_writeModeHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_sinkTableNameHasBeenSet(false)
{
}

string GenHiveTableDDLSqlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_sinkDatabaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinkDatabase";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sinkDatabase.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_msTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msType.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceDatabaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceDatabase";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceDatabase.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_sinkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinkType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sinkType.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceFieldInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceFieldInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceFieldInfoList.begin(); itr != m_sourceFieldInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitions.begin(); itr != m_partitions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tableModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tableMode, allocator);
    }

    if (m_tableVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_upsertFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpsertFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_upsertFlag, allocator);
    }

    if (m_tableCommentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableComment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableComment.c_str(), allocator).Move(), allocator);
    }

    if (m_addDataFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddDataFiles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_addDataFiles, allocator);
    }

    if (m_addEqualityDeletesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddEqualityDeletes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_addEqualityDeletes, allocator);
    }

    if (m_addPositionDeletesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddPositionDeletes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_addPositionDeletes, allocator);
    }

    if (m_addDeleteFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddDeleteFiles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_addDeleteFiles, allocator);
    }

    if (m_targetDatasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDatasourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetDatasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_upsertKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpsertKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_upsertKeys.begin(); itr != m_upsertKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tableBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tableBaseInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sinkSchemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinkSchemaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sinkSchemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_env.c_str(), allocator).Move(), allocator);
    }

    if (m_writeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_writeMode.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_sinkTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinkTableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sinkTableName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GenHiveTableDDLSqlRequest::GetProjectId() const
{
    return m_projectId;
}

void GenHiveTableDDLSqlRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetSinkDatabase() const
{
    return m_sinkDatabase;
}

void GenHiveTableDDLSqlRequest::SetSinkDatabase(const string& _sinkDatabase)
{
    m_sinkDatabase = _sinkDatabase;
    m_sinkDatabaseHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::SinkDatabaseHasBeenSet() const
{
    return m_sinkDatabaseHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetId() const
{
    return m_id;
}

void GenHiveTableDDLSqlRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetMsType() const
{
    return m_msType;
}

void GenHiveTableDDLSqlRequest::SetMsType(const string& _msType)
{
    m_msType = _msType;
    m_msTypeHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::MsTypeHasBeenSet() const
{
    return m_msTypeHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetDatasourceId() const
{
    return m_datasourceId;
}

void GenHiveTableDDLSqlRequest::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetSourceDatabase() const
{
    return m_sourceDatabase;
}

void GenHiveTableDDLSqlRequest::SetSourceDatabase(const string& _sourceDatabase)
{
    m_sourceDatabase = _sourceDatabase;
    m_sourceDatabaseHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::SourceDatabaseHasBeenSet() const
{
    return m_sourceDatabaseHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetTableName() const
{
    return m_tableName;
}

void GenHiveTableDDLSqlRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetSinkType() const
{
    return m_sinkType;
}

void GenHiveTableDDLSqlRequest::SetSinkType(const string& _sinkType)
{
    m_sinkType = _sinkType;
    m_sinkTypeHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::SinkTypeHasBeenSet() const
{
    return m_sinkTypeHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetSchemaName() const
{
    return m_schemaName;
}

void GenHiveTableDDLSqlRequest::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

vector<SourceFieldInfo> GenHiveTableDDLSqlRequest::GetSourceFieldInfoList() const
{
    return m_sourceFieldInfoList;
}

void GenHiveTableDDLSqlRequest::SetSourceFieldInfoList(const vector<SourceFieldInfo>& _sourceFieldInfoList)
{
    m_sourceFieldInfoList = _sourceFieldInfoList;
    m_sourceFieldInfoListHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::SourceFieldInfoListHasBeenSet() const
{
    return m_sourceFieldInfoListHasBeenSet;
}

vector<Partition> GenHiveTableDDLSqlRequest::GetPartitions() const
{
    return m_partitions;
}

void GenHiveTableDDLSqlRequest::SetPartitions(const vector<Partition>& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

vector<Property> GenHiveTableDDLSqlRequest::GetProperties() const
{
    return m_properties;
}

void GenHiveTableDDLSqlRequest::SetProperties(const vector<Property>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

int64_t GenHiveTableDDLSqlRequest::GetTableMode() const
{
    return m_tableMode;
}

void GenHiveTableDDLSqlRequest::SetTableMode(const int64_t& _tableMode)
{
    m_tableMode = _tableMode;
    m_tableModeHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::TableModeHasBeenSet() const
{
    return m_tableModeHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetTableVersion() const
{
    return m_tableVersion;
}

void GenHiveTableDDLSqlRequest::SetTableVersion(const string& _tableVersion)
{
    m_tableVersion = _tableVersion;
    m_tableVersionHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::TableVersionHasBeenSet() const
{
    return m_tableVersionHasBeenSet;
}

bool GenHiveTableDDLSqlRequest::GetUpsertFlag() const
{
    return m_upsertFlag;
}

void GenHiveTableDDLSqlRequest::SetUpsertFlag(const bool& _upsertFlag)
{
    m_upsertFlag = _upsertFlag;
    m_upsertFlagHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::UpsertFlagHasBeenSet() const
{
    return m_upsertFlagHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetTableComment() const
{
    return m_tableComment;
}

void GenHiveTableDDLSqlRequest::SetTableComment(const string& _tableComment)
{
    m_tableComment = _tableComment;
    m_tableCommentHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::TableCommentHasBeenSet() const
{
    return m_tableCommentHasBeenSet;
}

int64_t GenHiveTableDDLSqlRequest::GetAddDataFiles() const
{
    return m_addDataFiles;
}

void GenHiveTableDDLSqlRequest::SetAddDataFiles(const int64_t& _addDataFiles)
{
    m_addDataFiles = _addDataFiles;
    m_addDataFilesHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::AddDataFilesHasBeenSet() const
{
    return m_addDataFilesHasBeenSet;
}

int64_t GenHiveTableDDLSqlRequest::GetAddEqualityDeletes() const
{
    return m_addEqualityDeletes;
}

void GenHiveTableDDLSqlRequest::SetAddEqualityDeletes(const int64_t& _addEqualityDeletes)
{
    m_addEqualityDeletes = _addEqualityDeletes;
    m_addEqualityDeletesHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::AddEqualityDeletesHasBeenSet() const
{
    return m_addEqualityDeletesHasBeenSet;
}

int64_t GenHiveTableDDLSqlRequest::GetAddPositionDeletes() const
{
    return m_addPositionDeletes;
}

void GenHiveTableDDLSqlRequest::SetAddPositionDeletes(const int64_t& _addPositionDeletes)
{
    m_addPositionDeletes = _addPositionDeletes;
    m_addPositionDeletesHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::AddPositionDeletesHasBeenSet() const
{
    return m_addPositionDeletesHasBeenSet;
}

int64_t GenHiveTableDDLSqlRequest::GetAddDeleteFiles() const
{
    return m_addDeleteFiles;
}

void GenHiveTableDDLSqlRequest::SetAddDeleteFiles(const int64_t& _addDeleteFiles)
{
    m_addDeleteFiles = _addDeleteFiles;
    m_addDeleteFilesHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::AddDeleteFilesHasBeenSet() const
{
    return m_addDeleteFilesHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetTargetDatasourceId() const
{
    return m_targetDatasourceId;
}

void GenHiveTableDDLSqlRequest::SetTargetDatasourceId(const string& _targetDatasourceId)
{
    m_targetDatasourceId = _targetDatasourceId;
    m_targetDatasourceIdHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::TargetDatasourceIdHasBeenSet() const
{
    return m_targetDatasourceIdHasBeenSet;
}

vector<string> GenHiveTableDDLSqlRequest::GetUpsertKeys() const
{
    return m_upsertKeys;
}

void GenHiveTableDDLSqlRequest::SetUpsertKeys(const vector<string>& _upsertKeys)
{
    m_upsertKeys = _upsertKeys;
    m_upsertKeysHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::UpsertKeysHasBeenSet() const
{
    return m_upsertKeysHasBeenSet;
}

TableBaseInfo GenHiveTableDDLSqlRequest::GetTableBaseInfo() const
{
    return m_tableBaseInfo;
}

void GenHiveTableDDLSqlRequest::SetTableBaseInfo(const TableBaseInfo& _tableBaseInfo)
{
    m_tableBaseInfo = _tableBaseInfo;
    m_tableBaseInfoHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::TableBaseInfoHasBeenSet() const
{
    return m_tableBaseInfoHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetSinkSchemaName() const
{
    return m_sinkSchemaName;
}

void GenHiveTableDDLSqlRequest::SetSinkSchemaName(const string& _sinkSchemaName)
{
    m_sinkSchemaName = _sinkSchemaName;
    m_sinkSchemaNameHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::SinkSchemaNameHasBeenSet() const
{
    return m_sinkSchemaNameHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetEnv() const
{
    return m_env;
}

void GenHiveTableDDLSqlRequest::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetWriteMode() const
{
    return m_writeMode;
}

void GenHiveTableDDLSqlRequest::SetWriteMode(const string& _writeMode)
{
    m_writeMode = _writeMode;
    m_writeModeHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::WriteModeHasBeenSet() const
{
    return m_writeModeHasBeenSet;
}

int64_t GenHiveTableDDLSqlRequest::GetTaskType() const
{
    return m_taskType;
}

void GenHiveTableDDLSqlRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string GenHiveTableDDLSqlRequest::GetSinkTableName() const
{
    return m_sinkTableName;
}

void GenHiveTableDDLSqlRequest::SetSinkTableName(const string& _sinkTableName)
{
    m_sinkTableName = _sinkTableName;
    m_sinkTableNameHasBeenSet = true;
}

bool GenHiveTableDDLSqlRequest::SinkTableNameHasBeenSet() const
{
    return m_sinkTableNameHasBeenSet;
}


