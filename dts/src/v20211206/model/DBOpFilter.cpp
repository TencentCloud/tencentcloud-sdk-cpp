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

#include <tencentcloud/dts/v20211206/model/DBOpFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DBOpFilter::DBOpFilter() :
    m_dbNameHasBeenSet(false),
    m_opFilterHasBeenSet(false),
    m_tablesHasBeenSet(false),
    m_viewsHasBeenSet(false)
{
}

CoreInternalOutcome DBOpFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBOpFilter.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("OpFilter") && !value["OpFilter"].IsNull())
    {
        if (!value["OpFilter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DBOpFilter.OpFilter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_opFilter.Deserialize(value["OpFilter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_opFilterHasBeenSet = true;
    }

    if (value.HasMember("Tables") && !value["Tables"].IsNull())
    {
        if (!value["Tables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBOpFilter.Tables` is not array type"));

        const rapidjson::Value &tmpValue = value["Tables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TableFilter item;
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

    if (value.HasMember("Views") && !value["Views"].IsNull())
    {
        if (!value["Views"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBOpFilter.Views` is not array type"));

        const rapidjson::Value &tmpValue = value["Views"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ViewFilter item;
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

void DBOpFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_opFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_opFilter.ToJsonObject(value[key.c_str()], allocator);
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


string DBOpFilter::GetDbName() const
{
    return m_dbName;
}

void DBOpFilter::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DBOpFilter::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

OpFilter DBOpFilter::GetOpFilter() const
{
    return m_opFilter;
}

void DBOpFilter::SetOpFilter(const OpFilter& _opFilter)
{
    m_opFilter = _opFilter;
    m_opFilterHasBeenSet = true;
}

bool DBOpFilter::OpFilterHasBeenSet() const
{
    return m_opFilterHasBeenSet;
}

vector<TableFilter> DBOpFilter::GetTables() const
{
    return m_tables;
}

void DBOpFilter::SetTables(const vector<TableFilter>& _tables)
{
    m_tables = _tables;
    m_tablesHasBeenSet = true;
}

bool DBOpFilter::TablesHasBeenSet() const
{
    return m_tablesHasBeenSet;
}

vector<ViewFilter> DBOpFilter::GetViews() const
{
    return m_views;
}

void DBOpFilter::SetViews(const vector<ViewFilter>& _views)
{
    m_views = _views;
    m_viewsHasBeenSet = true;
}

bool DBOpFilter::ViewsHasBeenSet() const
{
    return m_viewsHasBeenSet;
}

