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

#include <tencentcloud/tcb/v20180608/model/RunSqlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

RunSqlRequest::RunSqlRequest() :
    m_sqlHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_dbInstanceHasBeenSet(false),
    m_readOnlyHasBeenSet(false)
{
}

string RunSqlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sql";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sql.c_str(), allocator).Move(), allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_dbInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dbInstance.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_readOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readOnly, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunSqlRequest::GetSql() const
{
    return m_sql;
}

void RunSqlRequest::SetSql(const string& _sql)
{
    m_sql = _sql;
    m_sqlHasBeenSet = true;
}

bool RunSqlRequest::SqlHasBeenSet() const
{
    return m_sqlHasBeenSet;
}

string RunSqlRequest::GetEnvId() const
{
    return m_envId;
}

void RunSqlRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool RunSqlRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

DbInstance RunSqlRequest::GetDbInstance() const
{
    return m_dbInstance;
}

void RunSqlRequest::SetDbInstance(const DbInstance& _dbInstance)
{
    m_dbInstance = _dbInstance;
    m_dbInstanceHasBeenSet = true;
}

bool RunSqlRequest::DbInstanceHasBeenSet() const
{
    return m_dbInstanceHasBeenSet;
}

bool RunSqlRequest::GetReadOnly() const
{
    return m_readOnly;
}

void RunSqlRequest::SetReadOnly(const bool& _readOnly)
{
    m_readOnly = _readOnly;
    m_readOnlyHasBeenSet = true;
}

bool RunSqlRequest::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}


