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

#include <tencentcloud/wedata/v20210820/model/TaskTableMetricInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskTableMetricInfo::TaskTableMetricInfo() :
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_totalRecordNumHasBeenSet(false),
    m_totalRecordByteNumHasBeenSet(false),
    m_totalDirtyRecordNumHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_collectionHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_logicDatabaseHasBeenSet(false),
    m_logicTableHasBeenSet(false),
    m_logicSchemaHasBeenSet(false),
    m_taskTableMetricInfosHasBeenSet(false),
    m_syncStatusHasBeenSet(false),
    m_targetDatabaseNameHasBeenSet(false),
    m_targetTableNameHasBeenSet(false),
    m_writeTotalRecordNumHasBeenSet(false),
    m_writeTotalRecordByteNumHasBeenSet(false),
    m_targetSchemaNameHasBeenSet(false),
    m_targetTopicHasBeenSet(false),
    m_targetCollectionHasBeenSet(false),
    m_targetDataSourceNameHasBeenSet(false),
    m_targetNodeIdHasBeenSet(false),
    m_totalRecordSpeedHasBeenSet(false),
    m_writeTotalRecordSpeedHasBeenSet(false),
    m_exceptionReasonHasBeenSet(false)
{
}

CoreInternalOutcome TaskTableMetricInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TotalRecordNum") && !value["TotalRecordNum"].IsNull())
    {
        if (!value["TotalRecordNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.TotalRecordNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRecordNum = value["TotalRecordNum"].GetInt64();
        m_totalRecordNumHasBeenSet = true;
    }

    if (value.HasMember("TotalRecordByteNum") && !value["TotalRecordByteNum"].IsNull())
    {
        if (!value["TotalRecordByteNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.TotalRecordByteNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRecordByteNum = value["TotalRecordByteNum"].GetInt64();
        m_totalRecordByteNumHasBeenSet = true;
    }

    if (value.HasMember("TotalDirtyRecordNum") && !value["TotalDirtyRecordNum"].IsNull())
    {
        if (!value["TotalDirtyRecordNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.TotalDirtyRecordNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalDirtyRecordNum = value["TotalDirtyRecordNum"].GetInt64();
        m_totalDirtyRecordNumHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("Collection") && !value["Collection"].IsNull())
    {
        if (!value["Collection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.Collection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collection = string(value["Collection"].GetString());
        m_collectionHasBeenSet = true;
    }

    if (value.HasMember("DataSourceName") && !value["DataSourceName"].IsNull())
    {
        if (!value["DataSourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.DataSourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceName = string(value["DataSourceName"].GetString());
        m_dataSourceNameHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("LogicDatabase") && !value["LogicDatabase"].IsNull())
    {
        if (!value["LogicDatabase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.LogicDatabase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logicDatabase = string(value["LogicDatabase"].GetString());
        m_logicDatabaseHasBeenSet = true;
    }

    if (value.HasMember("LogicTable") && !value["LogicTable"].IsNull())
    {
        if (!value["LogicTable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.LogicTable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logicTable = string(value["LogicTable"].GetString());
        m_logicTableHasBeenSet = true;
    }

    if (value.HasMember("LogicSchema") && !value["LogicSchema"].IsNull())
    {
        if (!value["LogicSchema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.LogicSchema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logicSchema = string(value["LogicSchema"].GetString());
        m_logicSchemaHasBeenSet = true;
    }

    if (value.HasMember("TaskTableMetricInfos") && !value["TaskTableMetricInfos"].IsNull())
    {
        if (!value["TaskTableMetricInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.TaskTableMetricInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskTableMetricInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskTableMetricInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskTableMetricInfos.push_back(item);
        }
        m_taskTableMetricInfosHasBeenSet = true;
    }

    if (value.HasMember("SyncStatus") && !value["SyncStatus"].IsNull())
    {
        if (!value["SyncStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.SyncStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_syncStatus = value["SyncStatus"].GetInt64();
        m_syncStatusHasBeenSet = true;
    }

    if (value.HasMember("TargetDatabaseName") && !value["TargetDatabaseName"].IsNull())
    {
        if (!value["TargetDatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.TargetDatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetDatabaseName = string(value["TargetDatabaseName"].GetString());
        m_targetDatabaseNameHasBeenSet = true;
    }

    if (value.HasMember("TargetTableName") && !value["TargetTableName"].IsNull())
    {
        if (!value["TargetTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.TargetTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetTableName = string(value["TargetTableName"].GetString());
        m_targetTableNameHasBeenSet = true;
    }

    if (value.HasMember("WriteTotalRecordNum") && !value["WriteTotalRecordNum"].IsNull())
    {
        if (!value["WriteTotalRecordNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.WriteTotalRecordNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_writeTotalRecordNum = value["WriteTotalRecordNum"].GetInt64();
        m_writeTotalRecordNumHasBeenSet = true;
    }

    if (value.HasMember("WriteTotalRecordByteNum") && !value["WriteTotalRecordByteNum"].IsNull())
    {
        if (!value["WriteTotalRecordByteNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.WriteTotalRecordByteNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_writeTotalRecordByteNum = string(value["WriteTotalRecordByteNum"].GetString());
        m_writeTotalRecordByteNumHasBeenSet = true;
    }

    if (value.HasMember("TargetSchemaName") && !value["TargetSchemaName"].IsNull())
    {
        if (!value["TargetSchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.TargetSchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetSchemaName = string(value["TargetSchemaName"].GetString());
        m_targetSchemaNameHasBeenSet = true;
    }

    if (value.HasMember("TargetTopic") && !value["TargetTopic"].IsNull())
    {
        if (!value["TargetTopic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.TargetTopic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetTopic = string(value["TargetTopic"].GetString());
        m_targetTopicHasBeenSet = true;
    }

    if (value.HasMember("TargetCollection") && !value["TargetCollection"].IsNull())
    {
        if (!value["TargetCollection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.TargetCollection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetCollection = string(value["TargetCollection"].GetString());
        m_targetCollectionHasBeenSet = true;
    }

    if (value.HasMember("TargetDataSourceName") && !value["TargetDataSourceName"].IsNull())
    {
        if (!value["TargetDataSourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.TargetDataSourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetDataSourceName = string(value["TargetDataSourceName"].GetString());
        m_targetDataSourceNameHasBeenSet = true;
    }

    if (value.HasMember("TargetNodeId") && !value["TargetNodeId"].IsNull())
    {
        if (!value["TargetNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.TargetNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetNodeId = string(value["TargetNodeId"].GetString());
        m_targetNodeIdHasBeenSet = true;
    }

    if (value.HasMember("TotalRecordSpeed") && !value["TotalRecordSpeed"].IsNull())
    {
        if (!value["TotalRecordSpeed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.TotalRecordSpeed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalRecordSpeed = value["TotalRecordSpeed"].GetDouble();
        m_totalRecordSpeedHasBeenSet = true;
    }

    if (value.HasMember("WriteTotalRecordSpeed") && !value["WriteTotalRecordSpeed"].IsNull())
    {
        if (!value["WriteTotalRecordSpeed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.WriteTotalRecordSpeed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_writeTotalRecordSpeed = value["WriteTotalRecordSpeed"].GetDouble();
        m_writeTotalRecordSpeedHasBeenSet = true;
    }

    if (value.HasMember("ExceptionReason") && !value["ExceptionReason"].IsNull())
    {
        if (!value["ExceptionReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTableMetricInfo.ExceptionReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionReason = string(value["ExceptionReason"].GetString());
        m_exceptionReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskTableMetricInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_totalRecordNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRecordNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRecordNum, allocator);
    }

    if (m_totalRecordByteNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRecordByteNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRecordByteNum, allocator);
    }

    if (m_totalDirtyRecordNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalDirtyRecordNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalDirtyRecordNum, allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_collectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Collection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collection.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_logicDatabaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicDatabase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logicDatabase.c_str(), allocator).Move(), allocator);
    }

    if (m_logicTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logicTable.c_str(), allocator).Move(), allocator);
    }

    if (m_logicSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logicSchema.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTableMetricInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTableMetricInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskTableMetricInfos.begin(); itr != m_taskTableMetricInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_syncStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncStatus, allocator);
    }

    if (m_targetDatabaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetDatabaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_writeTotalRecordNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteTotalRecordNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_writeTotalRecordNum, allocator);
    }

    if (m_writeTotalRecordByteNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteTotalRecordByteNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_writeTotalRecordByteNum.c_str(), allocator).Move(), allocator);
    }

    if (m_targetSchemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetSchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetSchemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTopic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetTopic.c_str(), allocator).Move(), allocator);
    }

    if (m_targetCollectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetCollection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetCollection.c_str(), allocator).Move(), allocator);
    }

    if (m_targetDataSourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDataSourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetDataSourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_totalRecordSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRecordSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRecordSpeed, allocator);
    }

    if (m_writeTotalRecordSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteTotalRecordSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_writeTotalRecordSpeed, allocator);
    }

    if (m_exceptionReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exceptionReason.c_str(), allocator).Move(), allocator);
    }

}


string TaskTableMetricInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void TaskTableMetricInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool TaskTableMetricInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string TaskTableMetricInfo::GetTableName() const
{
    return m_tableName;
}

void TaskTableMetricInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TaskTableMetricInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

int64_t TaskTableMetricInfo::GetTotalRecordNum() const
{
    return m_totalRecordNum;
}

void TaskTableMetricInfo::SetTotalRecordNum(const int64_t& _totalRecordNum)
{
    m_totalRecordNum = _totalRecordNum;
    m_totalRecordNumHasBeenSet = true;
}

bool TaskTableMetricInfo::TotalRecordNumHasBeenSet() const
{
    return m_totalRecordNumHasBeenSet;
}

int64_t TaskTableMetricInfo::GetTotalRecordByteNum() const
{
    return m_totalRecordByteNum;
}

void TaskTableMetricInfo::SetTotalRecordByteNum(const int64_t& _totalRecordByteNum)
{
    m_totalRecordByteNum = _totalRecordByteNum;
    m_totalRecordByteNumHasBeenSet = true;
}

bool TaskTableMetricInfo::TotalRecordByteNumHasBeenSet() const
{
    return m_totalRecordByteNumHasBeenSet;
}

int64_t TaskTableMetricInfo::GetTotalDirtyRecordNum() const
{
    return m_totalDirtyRecordNum;
}

void TaskTableMetricInfo::SetTotalDirtyRecordNum(const int64_t& _totalDirtyRecordNum)
{
    m_totalDirtyRecordNum = _totalDirtyRecordNum;
    m_totalDirtyRecordNumHasBeenSet = true;
}

bool TaskTableMetricInfo::TotalDirtyRecordNumHasBeenSet() const
{
    return m_totalDirtyRecordNumHasBeenSet;
}

string TaskTableMetricInfo::GetSchemaName() const
{
    return m_schemaName;
}

void TaskTableMetricInfo::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool TaskTableMetricInfo::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string TaskTableMetricInfo::GetTopic() const
{
    return m_topic;
}

void TaskTableMetricInfo::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool TaskTableMetricInfo::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string TaskTableMetricInfo::GetCollection() const
{
    return m_collection;
}

void TaskTableMetricInfo::SetCollection(const string& _collection)
{
    m_collection = _collection;
    m_collectionHasBeenSet = true;
}

bool TaskTableMetricInfo::CollectionHasBeenSet() const
{
    return m_collectionHasBeenSet;
}

string TaskTableMetricInfo::GetDataSourceName() const
{
    return m_dataSourceName;
}

void TaskTableMetricInfo::SetDataSourceName(const string& _dataSourceName)
{
    m_dataSourceName = _dataSourceName;
    m_dataSourceNameHasBeenSet = true;
}

bool TaskTableMetricInfo::DataSourceNameHasBeenSet() const
{
    return m_dataSourceNameHasBeenSet;
}

string TaskTableMetricInfo::GetNodeId() const
{
    return m_nodeId;
}

void TaskTableMetricInfo::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool TaskTableMetricInfo::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string TaskTableMetricInfo::GetLogicDatabase() const
{
    return m_logicDatabase;
}

void TaskTableMetricInfo::SetLogicDatabase(const string& _logicDatabase)
{
    m_logicDatabase = _logicDatabase;
    m_logicDatabaseHasBeenSet = true;
}

bool TaskTableMetricInfo::LogicDatabaseHasBeenSet() const
{
    return m_logicDatabaseHasBeenSet;
}

string TaskTableMetricInfo::GetLogicTable() const
{
    return m_logicTable;
}

void TaskTableMetricInfo::SetLogicTable(const string& _logicTable)
{
    m_logicTable = _logicTable;
    m_logicTableHasBeenSet = true;
}

bool TaskTableMetricInfo::LogicTableHasBeenSet() const
{
    return m_logicTableHasBeenSet;
}

string TaskTableMetricInfo::GetLogicSchema() const
{
    return m_logicSchema;
}

void TaskTableMetricInfo::SetLogicSchema(const string& _logicSchema)
{
    m_logicSchema = _logicSchema;
    m_logicSchemaHasBeenSet = true;
}

bool TaskTableMetricInfo::LogicSchemaHasBeenSet() const
{
    return m_logicSchemaHasBeenSet;
}

vector<TaskTableMetricInfo> TaskTableMetricInfo::GetTaskTableMetricInfos() const
{
    return m_taskTableMetricInfos;
}

void TaskTableMetricInfo::SetTaskTableMetricInfos(const vector<TaskTableMetricInfo>& _taskTableMetricInfos)
{
    m_taskTableMetricInfos = _taskTableMetricInfos;
    m_taskTableMetricInfosHasBeenSet = true;
}

bool TaskTableMetricInfo::TaskTableMetricInfosHasBeenSet() const
{
    return m_taskTableMetricInfosHasBeenSet;
}

int64_t TaskTableMetricInfo::GetSyncStatus() const
{
    return m_syncStatus;
}

void TaskTableMetricInfo::SetSyncStatus(const int64_t& _syncStatus)
{
    m_syncStatus = _syncStatus;
    m_syncStatusHasBeenSet = true;
}

bool TaskTableMetricInfo::SyncStatusHasBeenSet() const
{
    return m_syncStatusHasBeenSet;
}

string TaskTableMetricInfo::GetTargetDatabaseName() const
{
    return m_targetDatabaseName;
}

void TaskTableMetricInfo::SetTargetDatabaseName(const string& _targetDatabaseName)
{
    m_targetDatabaseName = _targetDatabaseName;
    m_targetDatabaseNameHasBeenSet = true;
}

bool TaskTableMetricInfo::TargetDatabaseNameHasBeenSet() const
{
    return m_targetDatabaseNameHasBeenSet;
}

string TaskTableMetricInfo::GetTargetTableName() const
{
    return m_targetTableName;
}

void TaskTableMetricInfo::SetTargetTableName(const string& _targetTableName)
{
    m_targetTableName = _targetTableName;
    m_targetTableNameHasBeenSet = true;
}

bool TaskTableMetricInfo::TargetTableNameHasBeenSet() const
{
    return m_targetTableNameHasBeenSet;
}

int64_t TaskTableMetricInfo::GetWriteTotalRecordNum() const
{
    return m_writeTotalRecordNum;
}

void TaskTableMetricInfo::SetWriteTotalRecordNum(const int64_t& _writeTotalRecordNum)
{
    m_writeTotalRecordNum = _writeTotalRecordNum;
    m_writeTotalRecordNumHasBeenSet = true;
}

bool TaskTableMetricInfo::WriteTotalRecordNumHasBeenSet() const
{
    return m_writeTotalRecordNumHasBeenSet;
}

string TaskTableMetricInfo::GetWriteTotalRecordByteNum() const
{
    return m_writeTotalRecordByteNum;
}

void TaskTableMetricInfo::SetWriteTotalRecordByteNum(const string& _writeTotalRecordByteNum)
{
    m_writeTotalRecordByteNum = _writeTotalRecordByteNum;
    m_writeTotalRecordByteNumHasBeenSet = true;
}

bool TaskTableMetricInfo::WriteTotalRecordByteNumHasBeenSet() const
{
    return m_writeTotalRecordByteNumHasBeenSet;
}

string TaskTableMetricInfo::GetTargetSchemaName() const
{
    return m_targetSchemaName;
}

void TaskTableMetricInfo::SetTargetSchemaName(const string& _targetSchemaName)
{
    m_targetSchemaName = _targetSchemaName;
    m_targetSchemaNameHasBeenSet = true;
}

bool TaskTableMetricInfo::TargetSchemaNameHasBeenSet() const
{
    return m_targetSchemaNameHasBeenSet;
}

string TaskTableMetricInfo::GetTargetTopic() const
{
    return m_targetTopic;
}

void TaskTableMetricInfo::SetTargetTopic(const string& _targetTopic)
{
    m_targetTopic = _targetTopic;
    m_targetTopicHasBeenSet = true;
}

bool TaskTableMetricInfo::TargetTopicHasBeenSet() const
{
    return m_targetTopicHasBeenSet;
}

string TaskTableMetricInfo::GetTargetCollection() const
{
    return m_targetCollection;
}

void TaskTableMetricInfo::SetTargetCollection(const string& _targetCollection)
{
    m_targetCollection = _targetCollection;
    m_targetCollectionHasBeenSet = true;
}

bool TaskTableMetricInfo::TargetCollectionHasBeenSet() const
{
    return m_targetCollectionHasBeenSet;
}

string TaskTableMetricInfo::GetTargetDataSourceName() const
{
    return m_targetDataSourceName;
}

void TaskTableMetricInfo::SetTargetDataSourceName(const string& _targetDataSourceName)
{
    m_targetDataSourceName = _targetDataSourceName;
    m_targetDataSourceNameHasBeenSet = true;
}

bool TaskTableMetricInfo::TargetDataSourceNameHasBeenSet() const
{
    return m_targetDataSourceNameHasBeenSet;
}

string TaskTableMetricInfo::GetTargetNodeId() const
{
    return m_targetNodeId;
}

void TaskTableMetricInfo::SetTargetNodeId(const string& _targetNodeId)
{
    m_targetNodeId = _targetNodeId;
    m_targetNodeIdHasBeenSet = true;
}

bool TaskTableMetricInfo::TargetNodeIdHasBeenSet() const
{
    return m_targetNodeIdHasBeenSet;
}

double TaskTableMetricInfo::GetTotalRecordSpeed() const
{
    return m_totalRecordSpeed;
}

void TaskTableMetricInfo::SetTotalRecordSpeed(const double& _totalRecordSpeed)
{
    m_totalRecordSpeed = _totalRecordSpeed;
    m_totalRecordSpeedHasBeenSet = true;
}

bool TaskTableMetricInfo::TotalRecordSpeedHasBeenSet() const
{
    return m_totalRecordSpeedHasBeenSet;
}

double TaskTableMetricInfo::GetWriteTotalRecordSpeed() const
{
    return m_writeTotalRecordSpeed;
}

void TaskTableMetricInfo::SetWriteTotalRecordSpeed(const double& _writeTotalRecordSpeed)
{
    m_writeTotalRecordSpeed = _writeTotalRecordSpeed;
    m_writeTotalRecordSpeedHasBeenSet = true;
}

bool TaskTableMetricInfo::WriteTotalRecordSpeedHasBeenSet() const
{
    return m_writeTotalRecordSpeedHasBeenSet;
}

string TaskTableMetricInfo::GetExceptionReason() const
{
    return m_exceptionReason;
}

void TaskTableMetricInfo::SetExceptionReason(const string& _exceptionReason)
{
    m_exceptionReason = _exceptionReason;
    m_exceptionReasonHasBeenSet = true;
}

bool TaskTableMetricInfo::ExceptionReasonHasBeenSet() const
{
    return m_exceptionReasonHasBeenSet;
}

