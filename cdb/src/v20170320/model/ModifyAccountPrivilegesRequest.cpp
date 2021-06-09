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

#include <tencentcloud/cdb/v20170320/model/ModifyAccountPrivilegesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ModifyAccountPrivilegesRequest::ModifyAccountPrivilegesRequest() :
    m_instanceIdHasBeenSet(false),
    m_accountsHasBeenSet(false),
    m_globalPrivilegesHasBeenSet(false),
    m_databasePrivilegesHasBeenSet(false),
    m_tablePrivilegesHasBeenSet(false),
    m_columnPrivilegesHasBeenSet(false),
    m_modifyActionHasBeenSet(false)
{
}

string ModifyAccountPrivilegesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Accounts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accounts.begin(); itr != m_accounts.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_globalPrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalPrivileges";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_globalPrivileges.begin(); itr != m_globalPrivileges.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_databasePrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabasePrivileges";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_databasePrivileges.begin(); itr != m_databasePrivileges.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tablePrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablePrivileges";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tablePrivileges.begin(); itr != m_tablePrivileges.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_columnPrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnPrivileges";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columnPrivileges.begin(); itr != m_columnPrivileges.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_modifyActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modifyAction.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAccountPrivilegesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyAccountPrivilegesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyAccountPrivilegesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<Account> ModifyAccountPrivilegesRequest::GetAccounts() const
{
    return m_accounts;
}

void ModifyAccountPrivilegesRequest::SetAccounts(const vector<Account>& _accounts)
{
    m_accounts = _accounts;
    m_accountsHasBeenSet = true;
}

bool ModifyAccountPrivilegesRequest::AccountsHasBeenSet() const
{
    return m_accountsHasBeenSet;
}

vector<string> ModifyAccountPrivilegesRequest::GetGlobalPrivileges() const
{
    return m_globalPrivileges;
}

void ModifyAccountPrivilegesRequest::SetGlobalPrivileges(const vector<string>& _globalPrivileges)
{
    m_globalPrivileges = _globalPrivileges;
    m_globalPrivilegesHasBeenSet = true;
}

bool ModifyAccountPrivilegesRequest::GlobalPrivilegesHasBeenSet() const
{
    return m_globalPrivilegesHasBeenSet;
}

vector<DatabasePrivilege> ModifyAccountPrivilegesRequest::GetDatabasePrivileges() const
{
    return m_databasePrivileges;
}

void ModifyAccountPrivilegesRequest::SetDatabasePrivileges(const vector<DatabasePrivilege>& _databasePrivileges)
{
    m_databasePrivileges = _databasePrivileges;
    m_databasePrivilegesHasBeenSet = true;
}

bool ModifyAccountPrivilegesRequest::DatabasePrivilegesHasBeenSet() const
{
    return m_databasePrivilegesHasBeenSet;
}

vector<TablePrivilege> ModifyAccountPrivilegesRequest::GetTablePrivileges() const
{
    return m_tablePrivileges;
}

void ModifyAccountPrivilegesRequest::SetTablePrivileges(const vector<TablePrivilege>& _tablePrivileges)
{
    m_tablePrivileges = _tablePrivileges;
    m_tablePrivilegesHasBeenSet = true;
}

bool ModifyAccountPrivilegesRequest::TablePrivilegesHasBeenSet() const
{
    return m_tablePrivilegesHasBeenSet;
}

vector<ColumnPrivilege> ModifyAccountPrivilegesRequest::GetColumnPrivileges() const
{
    return m_columnPrivileges;
}

void ModifyAccountPrivilegesRequest::SetColumnPrivileges(const vector<ColumnPrivilege>& _columnPrivileges)
{
    m_columnPrivileges = _columnPrivileges;
    m_columnPrivilegesHasBeenSet = true;
}

bool ModifyAccountPrivilegesRequest::ColumnPrivilegesHasBeenSet() const
{
    return m_columnPrivilegesHasBeenSet;
}

string ModifyAccountPrivilegesRequest::GetModifyAction() const
{
    return m_modifyAction;
}

void ModifyAccountPrivilegesRequest::SetModifyAction(const string& _modifyAction)
{
    m_modifyAction = _modifyAction;
    m_modifyActionHasBeenSet = true;
}

bool ModifyAccountPrivilegesRequest::ModifyActionHasBeenSet() const
{
    return m_modifyActionHasBeenSet;
}


