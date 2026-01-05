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

#include <tencentcloud/wedata/v20250806/model/QualityRuleGroupResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

QualityRuleGroupResult::QualityRuleGroupResult() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleGroupTableIdHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_monitorTypeHasBeenSet(false),
    m_execDetailHasBeenSet(false),
    m_failMsgHasBeenSet(false),
    m_catalogNameHasBeenSet(false)
{
}

CoreInternalOutcome QualityRuleGroupResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupResult.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupResult.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupTableId") && !value["RuleGroupTableId"].IsNull())
    {
        if (!value["RuleGroupTableId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupResult.RuleGroupTableId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupTableId = value["RuleGroupTableId"].GetUint64();
        m_ruleGroupTableIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupResult.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupResult.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupResult.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupResult.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("MonitorType") && !value["MonitorType"].IsNull())
    {
        if (!value["MonitorType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupResult.MonitorType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorType = value["MonitorType"].GetInt64();
        m_monitorTypeHasBeenSet = true;
    }

    if (value.HasMember("ExecDetail") && !value["ExecDetail"].IsNull())
    {
        if (!value["ExecDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupResult.ExecDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execDetail = string(value["ExecDetail"].GetString());
        m_execDetailHasBeenSet = true;
    }

    if (value.HasMember("FailMsg") && !value["FailMsg"].IsNull())
    {
        if (!value["FailMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupResult.FailMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failMsg = string(value["FailMsg"].GetString());
        m_failMsgHasBeenSet = true;
    }

    if (value.HasMember("CatalogName") && !value["CatalogName"].IsNull())
    {
        if (!value["CatalogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupResult.CatalogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogName = string(value["CatalogName"].GetString());
        m_catalogNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityRuleGroupResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleGroupTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupTableId, allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorType, allocator);
    }

    if (m_execDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_execDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_failMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t QualityRuleGroupResult::GetId() const
{
    return m_id;
}

void QualityRuleGroupResult::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool QualityRuleGroupResult::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string QualityRuleGroupResult::GetName() const
{
    return m_name;
}

void QualityRuleGroupResult::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool QualityRuleGroupResult::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t QualityRuleGroupResult::GetRuleGroupTableId() const
{
    return m_ruleGroupTableId;
}

void QualityRuleGroupResult::SetRuleGroupTableId(const uint64_t& _ruleGroupTableId)
{
    m_ruleGroupTableId = _ruleGroupTableId;
    m_ruleGroupTableIdHasBeenSet = true;
}

bool QualityRuleGroupResult::RuleGroupTableIdHasBeenSet() const
{
    return m_ruleGroupTableIdHasBeenSet;
}

string QualityRuleGroupResult::GetDatasourceId() const
{
    return m_datasourceId;
}

void QualityRuleGroupResult::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool QualityRuleGroupResult::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string QualityRuleGroupResult::GetDatabaseName() const
{
    return m_databaseName;
}

void QualityRuleGroupResult::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool QualityRuleGroupResult::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string QualityRuleGroupResult::GetSchemaName() const
{
    return m_schemaName;
}

void QualityRuleGroupResult::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool QualityRuleGroupResult::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string QualityRuleGroupResult::GetTableName() const
{
    return m_tableName;
}

void QualityRuleGroupResult::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool QualityRuleGroupResult::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

int64_t QualityRuleGroupResult::GetMonitorType() const
{
    return m_monitorType;
}

void QualityRuleGroupResult::SetMonitorType(const int64_t& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool QualityRuleGroupResult::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

string QualityRuleGroupResult::GetExecDetail() const
{
    return m_execDetail;
}

void QualityRuleGroupResult::SetExecDetail(const string& _execDetail)
{
    m_execDetail = _execDetail;
    m_execDetailHasBeenSet = true;
}

bool QualityRuleGroupResult::ExecDetailHasBeenSet() const
{
    return m_execDetailHasBeenSet;
}

string QualityRuleGroupResult::GetFailMsg() const
{
    return m_failMsg;
}

void QualityRuleGroupResult::SetFailMsg(const string& _failMsg)
{
    m_failMsg = _failMsg;
    m_failMsgHasBeenSet = true;
}

bool QualityRuleGroupResult::FailMsgHasBeenSet() const
{
    return m_failMsgHasBeenSet;
}

string QualityRuleGroupResult::GetCatalogName() const
{
    return m_catalogName;
}

void QualityRuleGroupResult::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool QualityRuleGroupResult::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

