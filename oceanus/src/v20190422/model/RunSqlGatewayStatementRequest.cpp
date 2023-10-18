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

#include <tencentcloud/oceanus/v20190422/model/RunSqlGatewayStatementRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

RunSqlGatewayStatementRequest::RunSqlGatewayStatementRequest() :
    m_clusterIdHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

string RunSqlGatewayStatementRequest::ToJsonString() const
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

    if (m_sqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sql";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sql.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunSqlGatewayStatementRequest::GetClusterId() const
{
    return m_clusterId;
}

void RunSqlGatewayStatementRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RunSqlGatewayStatementRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string RunSqlGatewayStatementRequest::GetSql() const
{
    return m_sql;
}

void RunSqlGatewayStatementRequest::SetSql(const string& _sql)
{
    m_sql = _sql;
    m_sqlHasBeenSet = true;
}

bool RunSqlGatewayStatementRequest::SqlHasBeenSet() const
{
    return m_sqlHasBeenSet;
}

string RunSqlGatewayStatementRequest::GetSessionId() const
{
    return m_sessionId;
}

void RunSqlGatewayStatementRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool RunSqlGatewayStatementRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}


