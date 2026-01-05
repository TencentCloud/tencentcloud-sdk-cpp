/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/wedata/v20250806/model/QualityRuleGroupTableV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

QualityRuleGroupTableV2::QualityRuleGroupTableV2() :
    m_idHasBeenSet(false),
    m_ruleGroupIdHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tableOwnerUserIdHasBeenSet(false),
    m_tableOwnerNameHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_datasourceNameHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_datasourceTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_ruleGroupCountHasBeenSet(false),
    m_ruleCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_enableRuleGroupCountHasBeenSet(false),
    m_catalogNameHasBeenSet(false)
{
}

CoreInternalOutcome QualityRuleGroupTableV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupId") && !value["RuleGroupId"].IsNull())
    {
        if (!value["RuleGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.RuleGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupId = value["RuleGroupId"].GetUint64();
        m_ruleGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("TableOwnerUserId") && !value["TableOwnerUserId"].IsNull())
    {
        if (!value["TableOwnerUserId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.TableOwnerUserId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tableOwnerUserId = value["TableOwnerUserId"].GetUint64();
        m_tableOwnerUserIdHasBeenSet = true;
    }

    if (value.HasMember("TableOwnerName") && !value["TableOwnerName"].IsNull())
    {
        if (!value["TableOwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.TableOwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableOwnerName = string(value["TableOwnerName"].GetString());
        m_tableOwnerNameHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceName") && !value["DatasourceName"].IsNull())
    {
        if (!value["DatasourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.DatasourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceName = string(value["DatasourceName"].GetString());
        m_datasourceNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.DatabaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = string(value["DatabaseId"].GetString());
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("DatasourceType") && !value["DatasourceType"].IsNull())
    {
        if (!value["DatasourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.DatasourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceType = value["DatasourceType"].GetInt64();
        m_datasourceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupCount") && !value["RuleGroupCount"].IsNull())
    {
        if (!value["RuleGroupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.RuleGroupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupCount = value["RuleGroupCount"].GetUint64();
        m_ruleGroupCountHasBeenSet = true;
    }

    if (value.HasMember("RuleCount") && !value["RuleCount"].IsNull())
    {
        if (!value["RuleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.RuleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCount = value["RuleCount"].GetInt64();
        m_ruleCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("EnableRuleGroupCount") && !value["EnableRuleGroupCount"].IsNull())
    {
        if (!value["EnableRuleGroupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.EnableRuleGroupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableRuleGroupCount = value["EnableRuleGroupCount"].GetUint64();
        m_enableRuleGroupCountHasBeenSet = true;
    }

    if (value.HasMember("CatalogName") && !value["CatalogName"].IsNull())
    {
        if (!value["CatalogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupTableV2.CatalogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogName = string(value["CatalogName"].GetString());
        m_catalogNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityRuleGroupTableV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_ruleGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupId, allocator);
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableOwnerUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableOwnerUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableOwnerUserId, allocator);
    }

    if (m_tableOwnerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableOwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableOwnerName.c_str(), allocator).Move(), allocator);
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

    if (m_datasourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_datasourceType, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleGroupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupCount, allocator);
    }

    if (m_ruleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleCount, allocator);
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

    if (m_enableRuleGroupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRuleGroupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableRuleGroupCount, allocator);
    }

    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t QualityRuleGroupTableV2::GetId() const
{
    return m_id;
}

void QualityRuleGroupTableV2::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool QualityRuleGroupTableV2::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t QualityRuleGroupTableV2::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void QualityRuleGroupTableV2::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool QualityRuleGroupTableV2::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

string QualityRuleGroupTableV2::GetTableId() const
{
    return m_tableId;
}

void QualityRuleGroupTableV2::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool QualityRuleGroupTableV2::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string QualityRuleGroupTableV2::GetTableName() const
{
    return m_tableName;
}

void QualityRuleGroupTableV2::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool QualityRuleGroupTableV2::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string QualityRuleGroupTableV2::GetSchemaName() const
{
    return m_schemaName;
}

void QualityRuleGroupTableV2::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool QualityRuleGroupTableV2::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

uint64_t QualityRuleGroupTableV2::GetTableOwnerUserId() const
{
    return m_tableOwnerUserId;
}

void QualityRuleGroupTableV2::SetTableOwnerUserId(const uint64_t& _tableOwnerUserId)
{
    m_tableOwnerUserId = _tableOwnerUserId;
    m_tableOwnerUserIdHasBeenSet = true;
}

bool QualityRuleGroupTableV2::TableOwnerUserIdHasBeenSet() const
{
    return m_tableOwnerUserIdHasBeenSet;
}

string QualityRuleGroupTableV2::GetTableOwnerName() const
{
    return m_tableOwnerName;
}

void QualityRuleGroupTableV2::SetTableOwnerName(const string& _tableOwnerName)
{
    m_tableOwnerName = _tableOwnerName;
    m_tableOwnerNameHasBeenSet = true;
}

bool QualityRuleGroupTableV2::TableOwnerNameHasBeenSet() const
{
    return m_tableOwnerNameHasBeenSet;
}

string QualityRuleGroupTableV2::GetDatasourceId() const
{
    return m_datasourceId;
}

void QualityRuleGroupTableV2::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool QualityRuleGroupTableV2::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string QualityRuleGroupTableV2::GetDatasourceName() const
{
    return m_datasourceName;
}

void QualityRuleGroupTableV2::SetDatasourceName(const string& _datasourceName)
{
    m_datasourceName = _datasourceName;
    m_datasourceNameHasBeenSet = true;
}

bool QualityRuleGroupTableV2::DatasourceNameHasBeenSet() const
{
    return m_datasourceNameHasBeenSet;
}

string QualityRuleGroupTableV2::GetDatabaseId() const
{
    return m_databaseId;
}

void QualityRuleGroupTableV2::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool QualityRuleGroupTableV2::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string QualityRuleGroupTableV2::GetDatabaseName() const
{
    return m_databaseName;
}

void QualityRuleGroupTableV2::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool QualityRuleGroupTableV2::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

int64_t QualityRuleGroupTableV2::GetDatasourceType() const
{
    return m_datasourceType;
}

void QualityRuleGroupTableV2::SetDatasourceType(const int64_t& _datasourceType)
{
    m_datasourceType = _datasourceType;
    m_datasourceTypeHasBeenSet = true;
}

bool QualityRuleGroupTableV2::DatasourceTypeHasBeenSet() const
{
    return m_datasourceTypeHasBeenSet;
}

string QualityRuleGroupTableV2::GetInstanceId() const
{
    return m_instanceId;
}

void QualityRuleGroupTableV2::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool QualityRuleGroupTableV2::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t QualityRuleGroupTableV2::GetRuleGroupCount() const
{
    return m_ruleGroupCount;
}

void QualityRuleGroupTableV2::SetRuleGroupCount(const uint64_t& _ruleGroupCount)
{
    m_ruleGroupCount = _ruleGroupCount;
    m_ruleGroupCountHasBeenSet = true;
}

bool QualityRuleGroupTableV2::RuleGroupCountHasBeenSet() const
{
    return m_ruleGroupCountHasBeenSet;
}

int64_t QualityRuleGroupTableV2::GetRuleCount() const
{
    return m_ruleCount;
}

void QualityRuleGroupTableV2::SetRuleCount(const int64_t& _ruleCount)
{
    m_ruleCount = _ruleCount;
    m_ruleCountHasBeenSet = true;
}

bool QualityRuleGroupTableV2::RuleCountHasBeenSet() const
{
    return m_ruleCountHasBeenSet;
}

string QualityRuleGroupTableV2::GetCreateTime() const
{
    return m_createTime;
}

void QualityRuleGroupTableV2::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool QualityRuleGroupTableV2::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string QualityRuleGroupTableV2::GetUpdateTime() const
{
    return m_updateTime;
}

void QualityRuleGroupTableV2::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool QualityRuleGroupTableV2::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t QualityRuleGroupTableV2::GetEnableRuleGroupCount() const
{
    return m_enableRuleGroupCount;
}

void QualityRuleGroupTableV2::SetEnableRuleGroupCount(const uint64_t& _enableRuleGroupCount)
{
    m_enableRuleGroupCount = _enableRuleGroupCount;
    m_enableRuleGroupCountHasBeenSet = true;
}

bool QualityRuleGroupTableV2::EnableRuleGroupCountHasBeenSet() const
{
    return m_enableRuleGroupCountHasBeenSet;
}

string QualityRuleGroupTableV2::GetCatalogName() const
{
    return m_catalogName;
}

void QualityRuleGroupTableV2::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool QualityRuleGroupTableV2::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

