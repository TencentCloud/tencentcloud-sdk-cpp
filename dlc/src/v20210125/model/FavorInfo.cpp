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

#include <tencentcloud/dlc/v20210125/model/FavorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

FavorInfo::FavorInfo() :
    m_priorityHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_dataBaseHasBeenSet(false),
    m_tableHasBeenSet(false)
{
}

CoreInternalOutcome FavorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FavorInfo.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Catalog") && !value["Catalog"].IsNull())
    {
        if (!value["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FavorInfo.Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(value["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (value.HasMember("DataBase") && !value["DataBase"].IsNull())
    {
        if (!value["DataBase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FavorInfo.DataBase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataBase = string(value["DataBase"].GetString());
        m_dataBaseHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FavorInfo.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FavorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_dataBaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataBase.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

}


int64_t FavorInfo::GetPriority() const
{
    return m_priority;
}

void FavorInfo::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool FavorInfo::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string FavorInfo::GetCatalog() const
{
    return m_catalog;
}

void FavorInfo::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool FavorInfo::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string FavorInfo::GetDataBase() const
{
    return m_dataBase;
}

void FavorInfo::SetDataBase(const string& _dataBase)
{
    m_dataBase = _dataBase;
    m_dataBaseHasBeenSet = true;
}

bool FavorInfo::DataBaseHasBeenSet() const
{
    return m_dataBaseHasBeenSet;
}

string FavorInfo::GetTable() const
{
    return m_table;
}

void FavorInfo::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool FavorInfo::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

