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

#include <tencentcloud/wedata/v20210820/model/ColumnBasicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ColumnBasicInfo::ColumnBasicInfo() :
    m_tableIdHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_datasourceNameHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_columnNameHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_columnTypeHasBeenSet(false),
    m_columnDefaultHasBeenSet(false),
    m_columnKeyHasBeenSet(false),
    m_columnPositionHasBeenSet(false),
    m_columnCommentHasBeenSet(false),
    m_storeTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_projectDisplayNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_scaleHasBeenSet(false)
{
}

CoreInternalOutcome ColumnBasicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceName") && !value["DatasourceName"].IsNull())
    {
        if (!value["DatasourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.DatasourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceName = string(value["DatasourceName"].GetString());
        m_datasourceNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.DatabaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = string(value["DatabaseId"].GetString());
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("ColumnName") && !value["ColumnName"].IsNull())
    {
        if (!value["ColumnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.ColumnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnName = string(value["ColumnName"].GetString());
        m_columnNameHasBeenSet = true;
    }

    if (value.HasMember("DataType") && !value["DataType"].IsNull())
    {
        if (!value["DataType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.DataType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataType = string(value["DataType"].GetString());
        m_dataTypeHasBeenSet = true;
    }

    if (value.HasMember("ColumnType") && !value["ColumnType"].IsNull())
    {
        if (!value["ColumnType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.ColumnType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnType = string(value["ColumnType"].GetString());
        m_columnTypeHasBeenSet = true;
    }

    if (value.HasMember("ColumnDefault") && !value["ColumnDefault"].IsNull())
    {
        if (!value["ColumnDefault"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.ColumnDefault` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnDefault = string(value["ColumnDefault"].GetString());
        m_columnDefaultHasBeenSet = true;
    }

    if (value.HasMember("ColumnKey") && !value["ColumnKey"].IsNull())
    {
        if (!value["ColumnKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.ColumnKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnKey = string(value["ColumnKey"].GetString());
        m_columnKeyHasBeenSet = true;
    }

    if (value.HasMember("ColumnPosition") && !value["ColumnPosition"].IsNull())
    {
        if (!value["ColumnPosition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.ColumnPosition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_columnPosition = value["ColumnPosition"].GetInt64();
        m_columnPositionHasBeenSet = true;
    }

    if (value.HasMember("ColumnComment") && !value["ColumnComment"].IsNull())
    {
        if (!value["ColumnComment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.ColumnComment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnComment = string(value["ColumnComment"].GetString());
        m_columnCommentHasBeenSet = true;
    }

    if (value.HasMember("StoreType") && !value["StoreType"].IsNull())
    {
        if (!value["StoreType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.StoreType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storeType = string(value["StoreType"].GetString());
        m_storeTypeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectDisplayName") && !value["ProjectDisplayName"].IsNull())
    {
        if (!value["ProjectDisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.ProjectDisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectDisplayName = string(value["ProjectDisplayName"].GetString());
        m_projectDisplayNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Scale") && !value["Scale"].IsNull())
    {
        if (!value["Scale"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnBasicInfo.Scale` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scale = value["Scale"].GetInt64();
        m_scaleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ColumnBasicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_columnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataType.c_str(), allocator).Move(), allocator);
    }

    if (m_columnTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnType.c_str(), allocator).Move(), allocator);
    }

    if (m_columnDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnDefault.c_str(), allocator).Move(), allocator);
    }

    if (m_columnKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnKey.c_str(), allocator).Move(), allocator);
    }

    if (m_columnPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_columnPosition, allocator);
    }

    if (m_columnCommentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnComment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnComment.c_str(), allocator).Move(), allocator);
    }

    if (m_storeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storeType.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectDisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectDisplayName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scale, allocator);
    }

}


string ColumnBasicInfo::GetTableId() const
{
    return m_tableId;
}

void ColumnBasicInfo::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool ColumnBasicInfo::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string ColumnBasicInfo::GetDatasourceId() const
{
    return m_datasourceId;
}

void ColumnBasicInfo::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool ColumnBasicInfo::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string ColumnBasicInfo::GetDatasourceName() const
{
    return m_datasourceName;
}

void ColumnBasicInfo::SetDatasourceName(const string& _datasourceName)
{
    m_datasourceName = _datasourceName;
    m_datasourceNameHasBeenSet = true;
}

bool ColumnBasicInfo::DatasourceNameHasBeenSet() const
{
    return m_datasourceNameHasBeenSet;
}

string ColumnBasicInfo::GetDatabaseId() const
{
    return m_databaseId;
}

void ColumnBasicInfo::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool ColumnBasicInfo::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string ColumnBasicInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void ColumnBasicInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool ColumnBasicInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string ColumnBasicInfo::GetTableName() const
{
    return m_tableName;
}

void ColumnBasicInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool ColumnBasicInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string ColumnBasicInfo::GetColumnName() const
{
    return m_columnName;
}

void ColumnBasicInfo::SetColumnName(const string& _columnName)
{
    m_columnName = _columnName;
    m_columnNameHasBeenSet = true;
}

bool ColumnBasicInfo::ColumnNameHasBeenSet() const
{
    return m_columnNameHasBeenSet;
}

string ColumnBasicInfo::GetDataType() const
{
    return m_dataType;
}

void ColumnBasicInfo::SetDataType(const string& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool ColumnBasicInfo::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

string ColumnBasicInfo::GetColumnType() const
{
    return m_columnType;
}

void ColumnBasicInfo::SetColumnType(const string& _columnType)
{
    m_columnType = _columnType;
    m_columnTypeHasBeenSet = true;
}

bool ColumnBasicInfo::ColumnTypeHasBeenSet() const
{
    return m_columnTypeHasBeenSet;
}

string ColumnBasicInfo::GetColumnDefault() const
{
    return m_columnDefault;
}

void ColumnBasicInfo::SetColumnDefault(const string& _columnDefault)
{
    m_columnDefault = _columnDefault;
    m_columnDefaultHasBeenSet = true;
}

bool ColumnBasicInfo::ColumnDefaultHasBeenSet() const
{
    return m_columnDefaultHasBeenSet;
}

string ColumnBasicInfo::GetColumnKey() const
{
    return m_columnKey;
}

void ColumnBasicInfo::SetColumnKey(const string& _columnKey)
{
    m_columnKey = _columnKey;
    m_columnKeyHasBeenSet = true;
}

bool ColumnBasicInfo::ColumnKeyHasBeenSet() const
{
    return m_columnKeyHasBeenSet;
}

int64_t ColumnBasicInfo::GetColumnPosition() const
{
    return m_columnPosition;
}

void ColumnBasicInfo::SetColumnPosition(const int64_t& _columnPosition)
{
    m_columnPosition = _columnPosition;
    m_columnPositionHasBeenSet = true;
}

bool ColumnBasicInfo::ColumnPositionHasBeenSet() const
{
    return m_columnPositionHasBeenSet;
}

string ColumnBasicInfo::GetColumnComment() const
{
    return m_columnComment;
}

void ColumnBasicInfo::SetColumnComment(const string& _columnComment)
{
    m_columnComment = _columnComment;
    m_columnCommentHasBeenSet = true;
}

bool ColumnBasicInfo::ColumnCommentHasBeenSet() const
{
    return m_columnCommentHasBeenSet;
}

string ColumnBasicInfo::GetStoreType() const
{
    return m_storeType;
}

void ColumnBasicInfo::SetStoreType(const string& _storeType)
{
    m_storeType = _storeType;
    m_storeTypeHasBeenSet = true;
}

bool ColumnBasicInfo::StoreTypeHasBeenSet() const
{
    return m_storeTypeHasBeenSet;
}

string ColumnBasicInfo::GetProjectId() const
{
    return m_projectId;
}

void ColumnBasicInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ColumnBasicInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ColumnBasicInfo::GetProjectName() const
{
    return m_projectName;
}

void ColumnBasicInfo::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool ColumnBasicInfo::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string ColumnBasicInfo::GetProjectDisplayName() const
{
    return m_projectDisplayName;
}

void ColumnBasicInfo::SetProjectDisplayName(const string& _projectDisplayName)
{
    m_projectDisplayName = _projectDisplayName;
    m_projectDisplayNameHasBeenSet = true;
}

bool ColumnBasicInfo::ProjectDisplayNameHasBeenSet() const
{
    return m_projectDisplayNameHasBeenSet;
}

string ColumnBasicInfo::GetCreateTime() const
{
    return m_createTime;
}

void ColumnBasicInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ColumnBasicInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ColumnBasicInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ColumnBasicInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ColumnBasicInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t ColumnBasicInfo::GetScale() const
{
    return m_scale;
}

void ColumnBasicInfo::SetScale(const int64_t& _scale)
{
    m_scale = _scale;
    m_scaleHasBeenSet = true;
}

bool ColumnBasicInfo::ScaleHasBeenSet() const
{
    return m_scaleHasBeenSet;
}

