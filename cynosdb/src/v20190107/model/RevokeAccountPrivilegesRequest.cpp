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

#include <tencentcloud/cynosdb/v20190107/model/RevokeAccountPrivilegesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

RevokeAccountPrivilegesRequest::RevokeAccountPrivilegesRequest() :
    m_clusterIdHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_dbTablePrivilegesHasBeenSet(false),
    m_dbTablesHasBeenSet(false)
{
}

string RevokeAccountPrivilegesRequest::ToJsonString() const
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

    if (m_dbTablePrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbTablePrivileges";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dbTablePrivileges.begin(); itr != m_dbTablePrivileges.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dbTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbTables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dbTables.begin(); itr != m_dbTables.end(); ++itr, ++i)
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


string RevokeAccountPrivilegesRequest::GetClusterId() const
{
    return m_clusterId;
}

void RevokeAccountPrivilegesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RevokeAccountPrivilegesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

InputAccount RevokeAccountPrivilegesRequest::GetAccount() const
{
    return m_account;
}

void RevokeAccountPrivilegesRequest::SetAccount(const InputAccount& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool RevokeAccountPrivilegesRequest::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

vector<string> RevokeAccountPrivilegesRequest::GetDbTablePrivileges() const
{
    return m_dbTablePrivileges;
}

void RevokeAccountPrivilegesRequest::SetDbTablePrivileges(const vector<string>& _dbTablePrivileges)
{
    m_dbTablePrivileges = _dbTablePrivileges;
    m_dbTablePrivilegesHasBeenSet = true;
}

bool RevokeAccountPrivilegesRequest::DbTablePrivilegesHasBeenSet() const
{
    return m_dbTablePrivilegesHasBeenSet;
}

vector<DbTable> RevokeAccountPrivilegesRequest::GetDbTables() const
{
    return m_dbTables;
}

void RevokeAccountPrivilegesRequest::SetDbTables(const vector<DbTable>& _dbTables)
{
    m_dbTables = _dbTables;
    m_dbTablesHasBeenSet = true;
}

bool RevokeAccountPrivilegesRequest::DbTablesHasBeenSet() const
{
    return m_dbTablesHasBeenSet;
}


