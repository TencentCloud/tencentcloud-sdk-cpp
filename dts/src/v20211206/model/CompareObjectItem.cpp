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

#include <tencentcloud/dts/v20211206/model/CompareObjectItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

CompareObjectItem::CompareObjectItem() :
    m_dbNameHasBeenSet(false),
    m_dbModeHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tableModeHasBeenSet(false),
    m_tablesHasBeenSet(false),
    m_viewModeHasBeenSet(false),
    m_viewsHasBeenSet(false)
{
}

CoreInternalOutcome CompareObjectItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareObjectItem.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("DbMode") && !value["DbMode"].IsNull())
    {
        if (!value["DbMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareObjectItem.DbMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbMode = string(value["DbMode"].GetString());
        m_dbModeHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareObjectItem.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("TableMode") && !value["TableMode"].IsNull())
    {
        if (!value["TableMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareObjectItem.TableMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableMode = string(value["TableMode"].GetString());
        m_tableModeHasBeenSet = true;
    }

    if (value.HasMember("Tables") && !value["Tables"].IsNull())
    {
        if (!value["Tables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompareObjectItem.Tables` is not array type"));

        const rapidjson::Value &tmpValue = value["Tables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CompareTableItem item;
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
            return CoreInternalOutcome(Core::Error("response `CompareObjectItem.ViewMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewMode = string(value["ViewMode"].GetString());
        m_viewModeHasBeenSet = true;
    }

    if (value.HasMember("Views") && !value["Views"].IsNull())
    {
        if (!value["Views"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompareObjectItem.Views` is not array type"));

        const rapidjson::Value &tmpValue = value["Views"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CompareViewItem item;
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


    return CoreInternalOutcome(true);
}

void CompareObjectItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
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

}


string CompareObjectItem::GetDbName() const
{
    return m_dbName;
}

void CompareObjectItem::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool CompareObjectItem::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string CompareObjectItem::GetDbMode() const
{
    return m_dbMode;
}

void CompareObjectItem::SetDbMode(const string& _dbMode)
{
    m_dbMode = _dbMode;
    m_dbModeHasBeenSet = true;
}

bool CompareObjectItem::DbModeHasBeenSet() const
{
    return m_dbModeHasBeenSet;
}

string CompareObjectItem::GetSchemaName() const
{
    return m_schemaName;
}

void CompareObjectItem::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool CompareObjectItem::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string CompareObjectItem::GetTableMode() const
{
    return m_tableMode;
}

void CompareObjectItem::SetTableMode(const string& _tableMode)
{
    m_tableMode = _tableMode;
    m_tableModeHasBeenSet = true;
}

bool CompareObjectItem::TableModeHasBeenSet() const
{
    return m_tableModeHasBeenSet;
}

vector<CompareTableItem> CompareObjectItem::GetTables() const
{
    return m_tables;
}

void CompareObjectItem::SetTables(const vector<CompareTableItem>& _tables)
{
    m_tables = _tables;
    m_tablesHasBeenSet = true;
}

bool CompareObjectItem::TablesHasBeenSet() const
{
    return m_tablesHasBeenSet;
}

string CompareObjectItem::GetViewMode() const
{
    return m_viewMode;
}

void CompareObjectItem::SetViewMode(const string& _viewMode)
{
    m_viewMode = _viewMode;
    m_viewModeHasBeenSet = true;
}

bool CompareObjectItem::ViewModeHasBeenSet() const
{
    return m_viewModeHasBeenSet;
}

vector<CompareViewItem> CompareObjectItem::GetViews() const
{
    return m_views;
}

void CompareObjectItem::SetViews(const vector<CompareViewItem>& _views)
{
    m_views = _views;
    m_viewsHasBeenSet = true;
}

bool CompareObjectItem::ViewsHasBeenSet() const
{
    return m_viewsHasBeenSet;
}

