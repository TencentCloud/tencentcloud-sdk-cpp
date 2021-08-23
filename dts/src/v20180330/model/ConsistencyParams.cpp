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

#include <tencentcloud/dts/v20180330/model/ConsistencyParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20180330::Model;
using namespace std;

ConsistencyParams::ConsistencyParams() :
    m_selectRowsPerTableHasBeenSet(false),
    m_tablesSelectAllHasBeenSet(false),
    m_tablesSelectCountHasBeenSet(false)
{
}

CoreInternalOutcome ConsistencyParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SelectRowsPerTable") && !value["SelectRowsPerTable"].IsNull())
    {
        if (!value["SelectRowsPerTable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsistencyParams.SelectRowsPerTable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_selectRowsPerTable = value["SelectRowsPerTable"].GetInt64();
        m_selectRowsPerTableHasBeenSet = true;
    }

    if (value.HasMember("TablesSelectAll") && !value["TablesSelectAll"].IsNull())
    {
        if (!value["TablesSelectAll"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsistencyParams.TablesSelectAll` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tablesSelectAll = value["TablesSelectAll"].GetInt64();
        m_tablesSelectAllHasBeenSet = true;
    }

    if (value.HasMember("TablesSelectCount") && !value["TablesSelectCount"].IsNull())
    {
        if (!value["TablesSelectCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsistencyParams.TablesSelectCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tablesSelectCount = value["TablesSelectCount"].GetInt64();
        m_tablesSelectCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsistencyParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_selectRowsPerTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectRowsPerTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selectRowsPerTable, allocator);
    }

    if (m_tablesSelectAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablesSelectAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tablesSelectAll, allocator);
    }

    if (m_tablesSelectCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablesSelectCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tablesSelectCount, allocator);
    }

}


int64_t ConsistencyParams::GetSelectRowsPerTable() const
{
    return m_selectRowsPerTable;
}

void ConsistencyParams::SetSelectRowsPerTable(const int64_t& _selectRowsPerTable)
{
    m_selectRowsPerTable = _selectRowsPerTable;
    m_selectRowsPerTableHasBeenSet = true;
}

bool ConsistencyParams::SelectRowsPerTableHasBeenSet() const
{
    return m_selectRowsPerTableHasBeenSet;
}

int64_t ConsistencyParams::GetTablesSelectAll() const
{
    return m_tablesSelectAll;
}

void ConsistencyParams::SetTablesSelectAll(const int64_t& _tablesSelectAll)
{
    m_tablesSelectAll = _tablesSelectAll;
    m_tablesSelectAllHasBeenSet = true;
}

bool ConsistencyParams::TablesSelectAllHasBeenSet() const
{
    return m_tablesSelectAllHasBeenSet;
}

int64_t ConsistencyParams::GetTablesSelectCount() const
{
    return m_tablesSelectCount;
}

void ConsistencyParams::SetTablesSelectCount(const int64_t& _tablesSelectCount)
{
    m_tablesSelectCount = _tablesSelectCount;
    m_tablesSelectCountHasBeenSet = true;
}

bool ConsistencyParams::TablesSelectCountHasBeenSet() const
{
    return m_tablesSelectCountHasBeenSet;
}

