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
    m_policyTypeHasBeenSet(false)
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

