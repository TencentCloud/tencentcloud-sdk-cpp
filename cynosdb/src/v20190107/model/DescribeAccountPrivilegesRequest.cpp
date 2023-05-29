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

#include <tencentcloud/cynosdb/v20190107/model/DescribeAccountPrivilegesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeAccountPrivilegesRequest::DescribeAccountPrivilegesRequest() :
    m_clusterIdHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_dbHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_tableNameHasBeenSet(false)
{
}

string DescribeAccountPrivilegesRequest::ToJsonString() const
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

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_dbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Db";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_db.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAccountPrivilegesRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeAccountPrivilegesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeAccountPrivilegesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeAccountPrivilegesRequest::GetAccountName() const
{
    return m_accountName;
}

void DescribeAccountPrivilegesRequest::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool DescribeAccountPrivilegesRequest::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string DescribeAccountPrivilegesRequest::GetHost() const
{
    return m_host;
}

void DescribeAccountPrivilegesRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DescribeAccountPrivilegesRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string DescribeAccountPrivilegesRequest::GetDb() const
{
    return m_db;
}

void DescribeAccountPrivilegesRequest::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool DescribeAccountPrivilegesRequest::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

string DescribeAccountPrivilegesRequest::GetType() const
{
    return m_type;
}

void DescribeAccountPrivilegesRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeAccountPrivilegesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeAccountPrivilegesRequest::GetTableName() const
{
    return m_tableName;
}

void DescribeAccountPrivilegesRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DescribeAccountPrivilegesRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}


