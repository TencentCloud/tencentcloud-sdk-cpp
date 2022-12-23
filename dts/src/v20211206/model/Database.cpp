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

#include <tencentcloud/dts/v20211206/model/Database.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

Database::Database() :
    m_dbNameHasBeenSet(false),
    m_newDbNameHasBeenSet(false),
    m_dbModeHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_newSchemaNameHasBeenSet(false),
    m_tableModeHasBeenSet(false),
    m_tablesHasBeenSet(false),
    m_viewModeHasBeenSet(false),
    m_viewsHasBeenSet(false),
    m_functionModeHasBeenSet(false),
    m_functionsHasBeenSet(false),
    m_procedureModeHasBeenSet(false),
    m_proceduresHasBeenSet(false),
    m_triggerModeHasBeenSet(false),
    m_triggersHasBeenSet(false),
    m_eventModeHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
}

CoreInternalOutcome Database::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("NewDbName") && !value["NewDbName"].IsNull())
    {
        if (!value["NewDbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.NewDbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newDbName = string(value["NewDbName"].GetString());
        m_newDbNameHasBeenSet = true;
    }

    if (value.HasMember("DbMode") && !value["DbMode"].IsNull())
    {
        if (!value["DbMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.DbMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbMode = string(value["DbMode"].GetString());
        m_dbModeHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("NewSchemaName") && !value["NewSchemaName"].IsNull())
    {
        if (!value["NewSchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.NewSchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newSchemaName = string(value["NewSchemaName"].GetString());
        m_newSchemaNameHasBeenSet = true;
    }

    if (value.HasMember("TableMode") && !value["TableMode"].IsNull())
    {
        if (!value["TableMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.TableMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableMode = string(value["TableMode"].GetString());
        m_tableModeHasBeenSet = true;
    }

    if (value.HasMember("Tables") && !value["Tables"].IsNull())
    {
        if (!value["Tables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Database.Tables` is not array type"));

        const rapidjson::Value &tmpValue = value["Tables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Table item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tables.push_back(item);
        }
        m_tablesHasBeenSet = true;
    }

    if (value.HasMember("ViewMode") && !value["ViewMode"].IsNull())
    {
        if (!value["ViewMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.ViewMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewMode = string(value["ViewMode"].GetString());
        m_viewModeHasBeenSet = true;
    }

    if (value.HasMember("Views") && !value["Views"].IsNull())
    {
        if (!value["Views"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Database.Views` is not array type"));

        const rapidjson::Value &tmpValue = value["Views"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            View item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_views.push_back(item);
        }
        m_viewsHasBeenSet = true;
    }

    if (value.HasMember("FunctionMode") && !value["FunctionMode"].IsNull())
    {
        if (!value["FunctionMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.FunctionMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionMode = string(value["FunctionMode"].GetString());
        m_functionModeHasBeenSet = true;
    }

    if (value.HasMember("Functions") && !value["Functions"].IsNull())
    {
        if (!value["Functions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Database.Functions` is not array type"));

        const rapidjson::Value &tmpValue = value["Functions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_functions.push_back((*itr).GetString());
        }
        m_functionsHasBeenSet = true;
    }

    if (value.HasMember("ProcedureMode") && !value["ProcedureMode"].IsNull())
    {
        if (!value["ProcedureMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.ProcedureMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procedureMode = string(value["ProcedureMode"].GetString());
        m_procedureModeHasBeenSet = true;
    }

    if (value.HasMember("Procedures") && !value["Procedures"].IsNull())
    {
        if (!value["Procedures"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Database.Procedures` is not array type"));

        const rapidjson::Value &tmpValue = value["Procedures"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_procedures.push_back((*itr).GetString());
        }
        m_proceduresHasBeenSet = true;
    }

    if (value.HasMember("TriggerMode") && !value["TriggerMode"].IsNull())
    {
        if (!value["TriggerMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.TriggerMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerMode = string(value["TriggerMode"].GetString());
        m_triggerModeHasBeenSet = true;
    }

    if (value.HasMember("Triggers") && !value["Triggers"].IsNull())
    {
        if (!value["Triggers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Database.Triggers` is not array type"));

        const rapidjson::Value &tmpValue = value["Triggers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_triggers.push_back((*itr).GetString());
        }
        m_triggersHasBeenSet = true;
    }

    if (value.HasMember("EventMode") && !value["EventMode"].IsNull())
    {
        if (!value["EventMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database.EventMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventMode = string(value["EventMode"].GetString());
        m_eventModeHasBeenSet = true;
    }

    if (value.HasMember("Events") && !value["Events"].IsNull())
    {
        if (!value["Events"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Database.Events` is not array type"));

        const rapidjson::Value &tmpValue = value["Events"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_events.push_back((*itr).GetString());
        }
        m_eventsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Database::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_newDbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newDbName.c_str(), allocator).Move(), allocator);
    }

    if (m_dbModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbMode.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_newSchemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewSchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newSchemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableMode.c_str(), allocator).Move(), allocator);
    }

    if (m_tablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tables.begin(); itr != m_tables.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_viewModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewMode.c_str(), allocator).Move(), allocator);
    }

    if (m_viewsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Views";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_views.begin(); itr != m_views.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_functionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionMode.c_str(), allocator).Move(), allocator);
    }

    if (m_functionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Functions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_functions.begin(); itr != m_functions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_procedureModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcedureMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procedureMode.c_str(), allocator).Move(), allocator);
    }

    if (m_proceduresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Procedures";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_procedures.begin(); itr != m_procedures.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_triggerModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerMode.c_str(), allocator).Move(), allocator);
    }

    if (m_triggersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Triggers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_triggers.begin(); itr != m_triggers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_eventModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventMode.c_str(), allocator).Move(), allocator);
    }

    if (m_eventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Events";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_events.begin(); itr != m_events.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string Database::GetDbName() const
{
    return m_dbName;
}

void Database::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool Database::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string Database::GetNewDbName() const
{
    return m_newDbName;
}

void Database::SetNewDbName(const string& _newDbName)
{
    m_newDbName = _newDbName;
    m_newDbNameHasBeenSet = true;
}

bool Database::NewDbNameHasBeenSet() const
{
    return m_newDbNameHasBeenSet;
}

string Database::GetDbMode() const
{
    return m_dbMode;
}

void Database::SetDbMode(const string& _dbMode)
{
    m_dbMode = _dbMode;
    m_dbModeHasBeenSet = true;
}

bool Database::DbModeHasBeenSet() const
{
    return m_dbModeHasBeenSet;
}

string Database::GetSchemaName() const
{
    return m_schemaName;
}

void Database::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool Database::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string Database::GetNewSchemaName() const
{
    return m_newSchemaName;
}

void Database::SetNewSchemaName(const string& _newSchemaName)
{
    m_newSchemaName = _newSchemaName;
    m_newSchemaNameHasBeenSet = true;
}

bool Database::NewSchemaNameHasBeenSet() const
{
    return m_newSchemaNameHasBeenSet;
}

string Database::GetTableMode() const
{
    return m_tableMode;
}

void Database::SetTableMode(const string& _tableMode)
{
    m_tableMode = _tableMode;
    m_tableModeHasBeenSet = true;
}

bool Database::TableModeHasBeenSet() const
{
    return m_tableModeHasBeenSet;
}

vector<Table> Database::GetTables() const
{
    return m_tables;
}

void Database::SetTables(const vector<Table>& _tables)
{
    m_tables = _tables;
    m_tablesHasBeenSet = true;
}

bool Database::TablesHasBeenSet() const
{
    return m_tablesHasBeenSet;
}

string Database::GetViewMode() const
{
    return m_viewMode;
}

void Database::SetViewMode(const string& _viewMode)
{
    m_viewMode = _viewMode;
    m_viewModeHasBeenSet = true;
}

bool Database::ViewModeHasBeenSet() const
{
    return m_viewModeHasBeenSet;
}

vector<View> Database::GetViews() const
{
    return m_views;
}

void Database::SetViews(const vector<View>& _views)
{
    m_views = _views;
    m_viewsHasBeenSet = true;
}

bool Database::ViewsHasBeenSet() const
{
    return m_viewsHasBeenSet;
}

string Database::GetFunctionMode() const
{
    return m_functionMode;
}

void Database::SetFunctionMode(const string& _functionMode)
{
    m_functionMode = _functionMode;
    m_functionModeHasBeenSet = true;
}

bool Database::FunctionModeHasBeenSet() const
{
    return m_functionModeHasBeenSet;
}

vector<string> Database::GetFunctions() const
{
    return m_functions;
}

void Database::SetFunctions(const vector<string>& _functions)
{
    m_functions = _functions;
    m_functionsHasBeenSet = true;
}

bool Database::FunctionsHasBeenSet() const
{
    return m_functionsHasBeenSet;
}

string Database::GetProcedureMode() const
{
    return m_procedureMode;
}

void Database::SetProcedureMode(const string& _procedureMode)
{
    m_procedureMode = _procedureMode;
    m_procedureModeHasBeenSet = true;
}

bool Database::ProcedureModeHasBeenSet() const
{
    return m_procedureModeHasBeenSet;
}

vector<string> Database::GetProcedures() const
{
    return m_procedures;
}

void Database::SetProcedures(const vector<string>& _procedures)
{
    m_procedures = _procedures;
    m_proceduresHasBeenSet = true;
}

bool Database::ProceduresHasBeenSet() const
{
    return m_proceduresHasBeenSet;
}

string Database::GetTriggerMode() const
{
    return m_triggerMode;
}

void Database::SetTriggerMode(const string& _triggerMode)
{
    m_triggerMode = _triggerMode;
    m_triggerModeHasBeenSet = true;
}

bool Database::TriggerModeHasBeenSet() const
{
    return m_triggerModeHasBeenSet;
}

vector<string> Database::GetTriggers() const
{
    return m_triggers;
}

void Database::SetTriggers(const vector<string>& _triggers)
{
    m_triggers = _triggers;
    m_triggersHasBeenSet = true;
}

bool Database::TriggersHasBeenSet() const
{
    return m_triggersHasBeenSet;
}

string Database::GetEventMode() const
{
    return m_eventMode;
}

void Database::SetEventMode(const string& _eventMode)
{
    m_eventMode = _eventMode;
    m_eventModeHasBeenSet = true;
}

bool Database::EventModeHasBeenSet() const
{
    return m_eventModeHasBeenSet;
}

vector<string> Database::GetEvents() const
{
    return m_events;
}

void Database::SetEvents(const vector<string>& _events)
{
    m_events = _events;
    m_eventsHasBeenSet = true;
}

bool Database::EventsHasBeenSet() const
{
    return m_eventsHasBeenSet;
}

