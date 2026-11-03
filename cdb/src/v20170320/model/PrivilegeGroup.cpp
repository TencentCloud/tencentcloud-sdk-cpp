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

#include <tencentcloud/cdb/v20170320/model/PrivilegeGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

PrivilegeGroup::PrivilegeGroup() :
    m_globalPrivilegesHasBeenSet(false),
    m_databasePrivilegesHasBeenSet(false),
    m_tablePrivilegesHasBeenSet(false),
    m_columnPrivilegesHasBeenSet(false)
{
}

CoreInternalOutcome PrivilegeGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GlobalPrivileges") && !value["GlobalPrivileges"].IsNull())
    {
        if (!value["GlobalPrivileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivilegeGroup.GlobalPrivileges` is not array type"));

        const rapidjson::Value &tmpValue = value["GlobalPrivileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_globalPrivileges.push_back((*itr).GetString());
        }
        m_globalPrivilegesHasBeenSet = true;
    }

    if (value.HasMember("DatabasePrivileges") && !value["DatabasePrivileges"].IsNull())
    {
        if (!value["DatabasePrivileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivilegeGroup.DatabasePrivileges` is not array type"));

        const rapidjson::Value &tmpValue = value["DatabasePrivileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DatabasePrivilege item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_databasePrivileges.push_back(item);
        }
        m_databasePrivilegesHasBeenSet = true;
    }

    if (value.HasMember("TablePrivileges") && !value["TablePrivileges"].IsNull())
    {
        if (!value["TablePrivileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivilegeGroup.TablePrivileges` is not array type"));

        const rapidjson::Value &tmpValue = value["TablePrivileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TablePrivilege item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tablePrivileges.push_back(item);
        }
        m_tablePrivilegesHasBeenSet = true;
    }

    if (value.HasMember("ColumnPrivileges") && !value["ColumnPrivileges"].IsNull())
    {
        if (!value["ColumnPrivileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivilegeGroup.ColumnPrivileges` is not array type"));

        const rapidjson::Value &tmpValue = value["ColumnPrivileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ColumnPrivilege item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_columnPrivileges.push_back(item);
        }
        m_columnPrivilegesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivilegeGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_globalPrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalPrivileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_globalPrivileges.begin(); itr != m_globalPrivileges.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_databasePrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabasePrivileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_databasePrivileges.begin(); itr != m_databasePrivileges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tablePrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablePrivileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tablePrivileges.begin(); itr != m_tablePrivileges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_columnPrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnPrivileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columnPrivileges.begin(); itr != m_columnPrivileges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> PrivilegeGroup::GetGlobalPrivileges() const
{
    return m_globalPrivileges;
}

void PrivilegeGroup::SetGlobalPrivileges(const vector<string>& _globalPrivileges)
{
    m_globalPrivileges = _globalPrivileges;
    m_globalPrivilegesHasBeenSet = true;
}

bool PrivilegeGroup::GlobalPrivilegesHasBeenSet() const
{
    return m_globalPrivilegesHasBeenSet;
}

vector<DatabasePrivilege> PrivilegeGroup::GetDatabasePrivileges() const
{
    return m_databasePrivileges;
}

void PrivilegeGroup::SetDatabasePrivileges(const vector<DatabasePrivilege>& _databasePrivileges)
{
    m_databasePrivileges = _databasePrivileges;
    m_databasePrivilegesHasBeenSet = true;
}

bool PrivilegeGroup::DatabasePrivilegesHasBeenSet() const
{
    return m_databasePrivilegesHasBeenSet;
}

vector<TablePrivilege> PrivilegeGroup::GetTablePrivileges() const
{
    return m_tablePrivileges;
}

void PrivilegeGroup::SetTablePrivileges(const vector<TablePrivilege>& _tablePrivileges)
{
    m_tablePrivileges = _tablePrivileges;
    m_tablePrivilegesHasBeenSet = true;
}

bool PrivilegeGroup::TablePrivilegesHasBeenSet() const
{
    return m_tablePrivilegesHasBeenSet;
}

vector<ColumnPrivilege> PrivilegeGroup::GetColumnPrivileges() const
{
    return m_columnPrivileges;
}

void PrivilegeGroup::SetColumnPrivileges(const vector<ColumnPrivilege>& _columnPrivileges)
{
    m_columnPrivileges = _columnPrivileges;
    m_columnPrivilegesHasBeenSet = true;
}

bool PrivilegeGroup::ColumnPrivilegesHasBeenSet() const
{
    return m_columnPrivilegesHasBeenSet;
}

