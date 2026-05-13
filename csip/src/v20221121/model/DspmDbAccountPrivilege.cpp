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

#include <tencentcloud/csip/v20221121/model/DspmDbAccountPrivilege.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmDbAccountPrivilege::DspmDbAccountPrivilege() :
    m_useDefaultPrivilegeHasBeenSet(false),
    m_globalPrivilegesHasBeenSet(false),
    m_databasePrivilegesListHasBeenSet(false),
    m_tablePrivilegesHasBeenSet(false),
    m_columnPrivilegesHasBeenSet(false)
{
}

CoreInternalOutcome DspmDbAccountPrivilege::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UseDefaultPrivilege") && !value["UseDefaultPrivilege"].IsNull())
    {
        if (!value["UseDefaultPrivilege"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAccountPrivilege.UseDefaultPrivilege` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_useDefaultPrivilege = value["UseDefaultPrivilege"].GetInt64();
        m_useDefaultPrivilegeHasBeenSet = true;
    }

    if (value.HasMember("GlobalPrivileges") && !value["GlobalPrivileges"].IsNull())
    {
        if (!value["GlobalPrivileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmDbAccountPrivilege.GlobalPrivileges` is not array type"));

        const rapidjson::Value &tmpValue = value["GlobalPrivileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_globalPrivileges.push_back((*itr).GetString());
        }
        m_globalPrivilegesHasBeenSet = true;
    }

    if (value.HasMember("DatabasePrivilegesList") && !value["DatabasePrivilegesList"].IsNull())
    {
        if (!value["DatabasePrivilegesList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmDbAccountPrivilege.DatabasePrivilegesList` is not array type"));

        const rapidjson::Value &tmpValue = value["DatabasePrivilegesList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmDatabasePrivilege item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_databasePrivilegesList.push_back(item);
        }
        m_databasePrivilegesListHasBeenSet = true;
    }

    if (value.HasMember("TablePrivileges") && !value["TablePrivileges"].IsNull())
    {
        if (!value["TablePrivileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmDbAccountPrivilege.TablePrivileges` is not array type"));

        const rapidjson::Value &tmpValue = value["TablePrivileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmTablePrivilege item;
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
            return CoreInternalOutcome(Core::Error("response `DspmDbAccountPrivilege.ColumnPrivileges` is not array type"));

        const rapidjson::Value &tmpValue = value["ColumnPrivileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmColumnPrivilege item;
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

void DspmDbAccountPrivilege::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_useDefaultPrivilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseDefaultPrivilege";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useDefaultPrivilege, allocator);
    }

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

    if (m_databasePrivilegesListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabasePrivilegesList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_databasePrivilegesList.begin(); itr != m_databasePrivilegesList.end(); ++itr, ++i)
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


int64_t DspmDbAccountPrivilege::GetUseDefaultPrivilege() const
{
    return m_useDefaultPrivilege;
}

void DspmDbAccountPrivilege::SetUseDefaultPrivilege(const int64_t& _useDefaultPrivilege)
{
    m_useDefaultPrivilege = _useDefaultPrivilege;
    m_useDefaultPrivilegeHasBeenSet = true;
}

bool DspmDbAccountPrivilege::UseDefaultPrivilegeHasBeenSet() const
{
    return m_useDefaultPrivilegeHasBeenSet;
}

vector<string> DspmDbAccountPrivilege::GetGlobalPrivileges() const
{
    return m_globalPrivileges;
}

void DspmDbAccountPrivilege::SetGlobalPrivileges(const vector<string>& _globalPrivileges)
{
    m_globalPrivileges = _globalPrivileges;
    m_globalPrivilegesHasBeenSet = true;
}

bool DspmDbAccountPrivilege::GlobalPrivilegesHasBeenSet() const
{
    return m_globalPrivilegesHasBeenSet;
}

vector<DspmDatabasePrivilege> DspmDbAccountPrivilege::GetDatabasePrivilegesList() const
{
    return m_databasePrivilegesList;
}

void DspmDbAccountPrivilege::SetDatabasePrivilegesList(const vector<DspmDatabasePrivilege>& _databasePrivilegesList)
{
    m_databasePrivilegesList = _databasePrivilegesList;
    m_databasePrivilegesListHasBeenSet = true;
}

bool DspmDbAccountPrivilege::DatabasePrivilegesListHasBeenSet() const
{
    return m_databasePrivilegesListHasBeenSet;
}

vector<DspmTablePrivilege> DspmDbAccountPrivilege::GetTablePrivileges() const
{
    return m_tablePrivileges;
}

void DspmDbAccountPrivilege::SetTablePrivileges(const vector<DspmTablePrivilege>& _tablePrivileges)
{
    m_tablePrivileges = _tablePrivileges;
    m_tablePrivilegesHasBeenSet = true;
}

bool DspmDbAccountPrivilege::TablePrivilegesHasBeenSet() const
{
    return m_tablePrivilegesHasBeenSet;
}

vector<DspmColumnPrivilege> DspmDbAccountPrivilege::GetColumnPrivileges() const
{
    return m_columnPrivileges;
}

void DspmDbAccountPrivilege::SetColumnPrivileges(const vector<DspmColumnPrivilege>& _columnPrivileges)
{
    m_columnPrivileges = _columnPrivileges;
    m_columnPrivilegesHasBeenSet = true;
}

bool DspmDbAccountPrivilege::ColumnPrivilegesHasBeenSet() const
{
    return m_columnPrivilegesHasBeenSet;
}

