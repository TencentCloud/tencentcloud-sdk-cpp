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

#include <tencentcloud/cynosdb/v20190107/model/ModifyLibraDBClusterAccountPrivilegeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyLibraDBClusterAccountPrivilegeRequest::ModifyLibraDBClusterAccountPrivilegeRequest() :
    m_clusterIdHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_globalPrivilegesHasBeenSet(false),
    m_databasePrivilegesHasBeenSet(false),
    m_tablePrivilegesHasBeenSet(false)
{
}

string ModifyLibraDBClusterAccountPrivilegeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_account.ToJsonObject(d[key.c_str()], allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLibraDBClusterAccountPrivilegeRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyLibraDBClusterAccountPrivilegeRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyLibraDBClusterAccountPrivilegeRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

InputAccount ModifyLibraDBClusterAccountPrivilegeRequest::GetAccount() const
{
    return m_account;
}

void ModifyLibraDBClusterAccountPrivilegeRequest::SetAccount(const InputAccount& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool ModifyLibraDBClusterAccountPrivilegeRequest::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

vector<string> ModifyLibraDBClusterAccountPrivilegeRequest::GetGlobalPrivileges() const
{
    return m_globalPrivileges;
}

void ModifyLibraDBClusterAccountPrivilegeRequest::SetGlobalPrivileges(const vector<string>& _globalPrivileges)
{
    m_globalPrivileges = _globalPrivileges;
    m_globalPrivilegesHasBeenSet = true;
}

bool ModifyLibraDBClusterAccountPrivilegeRequest::GlobalPrivilegesHasBeenSet() const
{
    return m_globalPrivilegesHasBeenSet;
}

vector<DatabasePrivileges> ModifyLibraDBClusterAccountPrivilegeRequest::GetDatabasePrivileges() const
{
    return m_databasePrivileges;
}

void ModifyLibraDBClusterAccountPrivilegeRequest::SetDatabasePrivileges(const vector<DatabasePrivileges>& _databasePrivileges)
{
    m_databasePrivileges = _databasePrivileges;
    m_databasePrivilegesHasBeenSet = true;
}

bool ModifyLibraDBClusterAccountPrivilegeRequest::DatabasePrivilegesHasBeenSet() const
{
    return m_databasePrivilegesHasBeenSet;
}

vector<TablePrivileges> ModifyLibraDBClusterAccountPrivilegeRequest::GetTablePrivileges() const
{
    return m_tablePrivileges;
}

void ModifyLibraDBClusterAccountPrivilegeRequest::SetTablePrivileges(const vector<TablePrivileges>& _tablePrivileges)
{
    m_tablePrivileges = _tablePrivileges;
    m_tablePrivilegesHasBeenSet = true;
}

bool ModifyLibraDBClusterAccountPrivilegeRequest::TablePrivilegesHasBeenSet() const
{
    return m_tablePrivilegesHasBeenSet;
}


