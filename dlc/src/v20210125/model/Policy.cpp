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

#include <tencentcloud/dlc/v20210125/model/Policy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

Policy::Policy() :
    m_databaseHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_functionHasBeenSet(false),
    m_viewHasBeenSet(false),
    m_columnHasBeenSet(false),
    m_dataEngineHasBeenSet(false),
    m_reAuthHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_engineGenerationHasBeenSet(false)
{
}

CoreInternalOutcome Policy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("Catalog") && !value["Catalog"].IsNull())
    {
        if (!value["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(value["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.PolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = string(value["PolicyType"].GetString());
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("Function") && !value["Function"].IsNull())
    {
        if (!value["Function"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.Function` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_function = string(value["Function"].GetString());
        m_functionHasBeenSet = true;
    }

    if (value.HasMember("View") && !value["View"].IsNull())
    {
        if (!value["View"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.View` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_view = string(value["View"].GetString());
        m_viewHasBeenSet = true;
    }

    if (value.HasMember("Column") && !value["Column"].IsNull())
    {
        if (!value["Column"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.Column` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_column = string(value["Column"].GetString());
        m_columnHasBeenSet = true;
    }

    if (value.HasMember("DataEngine") && !value["DataEngine"].IsNull())
    {
        if (!value["DataEngine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.DataEngine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngine = string(value["DataEngine"].GetString());
        m_dataEngineHasBeenSet = true;
    }

    if (value.HasMember("ReAuth") && !value["ReAuth"].IsNull())
    {
        if (!value["ReAuth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.ReAuth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_reAuth = value["ReAuth"].GetBool();
        m_reAuthHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.SourceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = value["SourceId"].GetInt64();
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("EngineGeneration") && !value["EngineGeneration"].IsNull())
    {
        if (!value["EngineGeneration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.EngineGeneration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineGeneration = string(value["EngineGeneration"].GetString());
        m_engineGenerationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Policy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_functionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Function";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_function.c_str(), allocator).Move(), allocator);
    }

    if (m_viewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "View";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_view.c_str(), allocator).Move(), allocator);
    }

    if (m_columnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Column";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_column.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngine.c_str(), allocator).Move(), allocator);
    }

    if (m_reAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reAuth, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceId, allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_engineGenerationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineGeneration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineGeneration.c_str(), allocator).Move(), allocator);
    }

}


string Policy::GetDatabase() const
{
    return m_database;
}

void Policy::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool Policy::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string Policy::GetCatalog() const
{
    return m_catalog;
}

void Policy::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool Policy::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string Policy::GetTable() const
{
    return m_table;
}

void Policy::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool Policy::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string Policy::GetOperation() const
{
    return m_operation;
}

void Policy::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool Policy::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string Policy::GetPolicyType() const
{
    return m_policyType;
}

void Policy::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool Policy::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

string Policy::GetFunction() const
{
    return m_function;
}

void Policy::SetFunction(const string& _function)
{
    m_function = _function;
    m_functionHasBeenSet = true;
}

bool Policy::FunctionHasBeenSet() const
{
    return m_functionHasBeenSet;
}

string Policy::GetView() const
{
    return m_view;
}

void Policy::SetView(const string& _view)
{
    m_view = _view;
    m_viewHasBeenSet = true;
}

bool Policy::ViewHasBeenSet() const
{
    return m_viewHasBeenSet;
}

string Policy::GetColumn() const
{
    return m_column;
}

void Policy::SetColumn(const string& _column)
{
    m_column = _column;
    m_columnHasBeenSet = true;
}

bool Policy::ColumnHasBeenSet() const
{
    return m_columnHasBeenSet;
}

string Policy::GetDataEngine() const
{
    return m_dataEngine;
}

void Policy::SetDataEngine(const string& _dataEngine)
{
    m_dataEngine = _dataEngine;
    m_dataEngineHasBeenSet = true;
}

bool Policy::DataEngineHasBeenSet() const
{
    return m_dataEngineHasBeenSet;
}

bool Policy::GetReAuth() const
{
    return m_reAuth;
}

void Policy::SetReAuth(const bool& _reAuth)
{
    m_reAuth = _reAuth;
    m_reAuthHasBeenSet = true;
}

bool Policy::ReAuthHasBeenSet() const
{
    return m_reAuthHasBeenSet;
}

string Policy::GetSource() const
{
    return m_source;
}

void Policy::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool Policy::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string Policy::GetMode() const
{
    return m_mode;
}

void Policy::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool Policy::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string Policy::GetOperator() const
{
    return m_operator;
}

void Policy::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool Policy::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string Policy::GetCreateTime() const
{
    return m_createTime;
}

void Policy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Policy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t Policy::GetSourceId() const
{
    return m_sourceId;
}

void Policy::SetSourceId(const int64_t& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool Policy::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

string Policy::GetSourceName() const
{
    return m_sourceName;
}

void Policy::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool Policy::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

int64_t Policy::GetId() const
{
    return m_id;
}

void Policy::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Policy::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Policy::GetEngineGeneration() const
{
    return m_engineGeneration;
}

void Policy::SetEngineGeneration(const string& _engineGeneration)
{
    m_engineGeneration = _engineGeneration;
    m_engineGenerationHasBeenSet = true;
}

bool Policy::EngineGenerationHasBeenSet() const
{
    return m_engineGenerationHasBeenSet;
}

